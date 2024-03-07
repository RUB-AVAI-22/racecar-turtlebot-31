import os
from utils import get_timestamp_as_float, is_range_in_range, Map, estimate_cone_position
import rclpy
import numpy as np
import matplotlib.pyplot as plt
from rclpy.node import Node
from avai_messages.msg import YoloOutput, BoundingBox, ClusteredLidarData, Position

#camera fov:
FOV = (148, 212)

class DataFusionNode(Node):
    def __init__(self):
        super().__init__('data_fusion_node')

        self.clustered_lidar_subscription = self.create_subscription(ClusteredLidarData, "/clusterered_lidar_data", self.clustered_lidar_listener_callback, rclpy.qos.qos_profile_sensor_data)
        self.yolo_output_subscription = self.create_subscription(YoloOutput, "/cone_classification", self.yolo_output_listener_callback, rclpy.qos.qos_profile_sensor_data)
        self.pos_subscription = self.create_subscription(Position, "/position", self.position_listener_callback, rclpy.qos.qos_profile_sensor_data)
        
        self.map = Map()
        
        
        self.buffer_size = 100
        self.yolo_msgs = [None] * self.buffer_size
        self.yolo_msgs_idx = 0
        self.cluster_msgs = [None] * self.buffer_size
        self.cluster_msgs_idx = -1
        self.pos_msgs = [None] * self.buffer_size
        self.pos_msgs_idx = -1
        
        self.default_position = Position()
        self.default_position.x_position=0.0 # in mm
        self.default_position.y_position=0.0 # in mm
        self.default_position.facing_direction=0.0 # in degrees
    

    def clustered_lidar_listener_callback(self, msg):
        self.get_logger().info("Clustered Lidar Data Received")
        self.cluster_msgs_idx += 1
        self.cluster_msgs[self.cluster_msgs_idx % self.buffer_size] = msg
        

    def yolo_output_listener_callback(self, msg):
        self.get_logger().info("Yolo Output Received")
        self.yolo_msgs_idx += 1
        self.yolo_msgs[self.yolo_msgs_idx % self.buffer_size] = msg
    
        self.update_map(msg)
        
        current_pos = self.pos_msgs[self.pos_msgs_idx]
        self.map.save_plot(current_pos.x_position, current_pos.y_position)
        exit()


    def position_listener_callback(self, msg):
            self.get_logger().info("Position Received")
            self.pos_msgs_idx += 1
            self.pos_msgs[self.pos_msgs_idx % self.buffer_size] = msg
    
    
    def match_cluster(self, yolo_msg):
        """Because of the inference of the yolo model, the yolo messages arrive later than the cluster messages. Therefore this function takes 
         searches the buffer for a Cluster message with the corresponding timestamp

        Returns:
            Cluster: Returns the matching Cluster message or None if no matching message was found
        """
        # because of the inference of the yolo model, we search the other messages for the appropriate timestamp
        epsilon = 1 #TODO: make more precise
        yolo_timestamp = get_timestamp_as_float(yolo_msg)

        # find nearest cluster message
        for i in range(self.buffer_size):
             msg = self.cluster_msgs[(self.cluster_msgs_idx - i) % self.buffer_size]
             if msg is None:
                  return None
             timestamp = get_timestamp_as_float(msg)
             if timestamp <= yolo_timestamp:
                return msg
        
        return None
    
    
    def match_position(self, yolo_msg):
        """Because of the inference of the yolo model, the yolo messages arrive later than the cluster messages. Therefore this function takes 
         searches the buffer for a Position message with the corresponding timestamp

        Args:
            yolo_msg (_type_): _description_
        
        Returns:
            Position: Returns the found Position message or None if no matching message was found
        """
        epsilon = 1 #TODO: make more precise
        yolo_timestamp = get_timestamp_as_float(yolo_msg)

        # find nearest cluster message
        for i in range(self.buffer_size):
            msg = self.pos_msgs[(self.pos_msgs_idx - i) % self.buffer_size]
            if msg is None:
                return None
            timestamp = get_timestamp_as_float(msg)
            if timestamp <= yolo_timestamp:
                return msg
        
        return None
        
    
    def update_map(self, yolo_msg = None):
        if yolo_msg is None:
            yolo_msg = self.yolo_msgs[self.yolo_msgs_idx]
        
        cluster_msg = self.match_cluster(yolo_msg)
        position_msg = self.match_position(yolo_msg)
        
        if cluster_msg is None or position_msg is None:
            self.get_logger().warning("Found no message to match to yolo message timestamp")
            return
        
        labeled_clusters = self.fuse_data(yolo_msg, cluster_msg)
        
        for cluster, label in labeled_clusters:
            # compute x and y position of cluster
            cone_x_pos, cone_y_pos = estimate_cone_position(cluster)
            
            self.map.set(position_msg.x_position, position_msg.y_position, position_msg.facing_direction, 
                         cone_x_pos, cone_y_pos, label)
            
            
            
            
            
            
        
    
    
    
    def fuse_data(self, yolo_msg, cluster_msg):
        """This function fuses the information of the clusters and the output of the yolo model. It tries to match the clusters found by the lidar
        to the bounding boxes generated by the yolo model.

        Args:
            yolo_msg (_type_): yolo message object received by Subscriber
            cluster_msg (_type_): cluster message object received by Subsriber

        Returns:
            list: returns a list with all found matches. One entry of the list is a tupel of a Cluster object and the label of the matched bounding box (0, 1 or 2)
        """
        clusters_in_fov = []
        for cluster in cluster_msg.clusters:
             if (FOV[0] <= cluster.angles[0] and cluster.angles[0] <= FOV[1]) or (FOV[0] <= cluster.angles[-1] and cluster.angles[-1] <= FOV[1]):
                  clusters_in_fov.append(cluster)
                  print(cluster.angles)
        
        labeled_clusters = []
        for box in yolo_msg.bounding_boxes:
             for cluster in clusters_in_fov:
                  cluster_left = (-(cluster.angles[-1] - 180) / (0.5 * (FOV[1] - FOV[0])))
                  cluster_right = (-(cluster.angles[0] - 180) / (0.5 * (FOV[1] - FOV[0])))
                  box_left = (box.min_x - 320) / 320
                  box_right = (box.max_x - 320) / 320
                  
                  range_cluster = (cluster_left, cluster_right)
                  range_box = (box_left, box_right)
                  
                  print(range_cluster)
                  print(range_box)
                  
                  if is_range_in_range(range_cluster, range_box):
                      labeled_clusters.append((cluster, box.cone))
        return labeled_clusters
                       
        


def main(args=None):
    rclpy.init(args=args)
    data_fusion_node = DataFusionNode()
    rclpy.spin(data_fusion_node)

    data_fusion_node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()