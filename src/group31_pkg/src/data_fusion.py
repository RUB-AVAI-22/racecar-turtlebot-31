import os
import rclpy
import numpy as np
import matplotlib.pyplot as plt
from rclpy.node import Node
from message_filters import ApproximateTimeSynchronizer, Subscriber
from avai_messages.msg import YoloOutput, BoundingBox, ClusteredLidarData

class DataFusionNode(Node):
    def __init__(self):
        super().__init__('data_fusion_node')

        self.clustered_lidar_subscription = self.create_subscription(ClusteredLidarData, "/clusterered_lidar_data", self.clustered_lidar_listener_callback, rclpy.qos.qos_profile_sensor_data)
        self.yolo_output_subscription = self.create_subscription(YoloOutput, "/cone_classification", self.yolo_output_listener_callback, rclpy.qos.qos_profile_sensor_data)

        self.buffer_size = 100
        self.yolo_msgs = [None] * self.buffer_size
        self.yolo_msgs_idx = 0
        self.cluster_msgs = [None] * self.buffer_size
        self.cluster_msgs_idx = 0
    

    def clustered_lidar_listener_callback(self, msg):
        self.get_logger().info("Clustered Lidar Data Received")
        self.yolo_msgs[self.yolo_msgs_idx % self.buffer_size] = msg
        self.yolo_msgs_idx += 1
        

    def yolo_output_listener_callback(self, msg):
        self.get_logger().info("Yolo Output Received")
        self.cluster_msgs[self.cluster_msgs_idx % self.buffer_size] = msg
        self.cluster_msgs_idx += 1
        



def main(args=None):
    rclpy.init(args=args)
    data_fusion_node = DataFusionNode()
    rclpy.spin(data_fusion_node)

    data_fusion_node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()