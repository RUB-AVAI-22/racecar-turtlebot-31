import rclpy
import numpy as np
import matplotlib.pyplot as plt
from rclpy.node import Node
from message_filters import ApproximateTimeSynchronizer, Subscriber
from avai_messages.msg import Motors, Motor
from sensor_msgs.msg import LaserScan


class NavigationNode(Node):
    def __init__(self):
        super().__init__('navigation_node')
        
        self.motor_subscription = Subscriber(self, Motors, '/motor_position')
        self.lidar_subscription = Subscriber(self, LaserScan, "/scan", qos_profile=rclpy.qos.qos_profile_sensor_data)
        
        ts = ApproximateTimeSynchronizer([self.motor_subscription, self.lidar_subscription], queue_size=10, slop=0.1)
        ts.registerCallback(self.drive)
        
        self.publisher_ = self.create_publisher(Motors, '/motor_velocity', 10)
        
        self.WHEEL_DISTANCE = 160 #mm
        self.WHEEL_RADIUS = 33 #mm
        self.NUM_TICKS = 4096
        self.LAMBDA = 40
        self.LAMBDA_TAR = 2.5
        self.MAX_VELOCITY = 255
        self.TARGET_RADIUS = 25
        self.TARGET_X = 1000
        self.TARGET_Y = 1000
        
        self.x = 0
        self.y = 0
        self.phi = np.pi/2
        
        self.x_all = []
        self.y_all = []
        
        #TODO: get lidar data and make data on same scale
        self.PSI_OBS = np.deg2rad(range(180, 0) + range(270, 360))
        print(range(180, 0) + range(270, 360))
        exit()

        
        self.beta_1 = 0
        self.beta_2 = 0
        self.sigma = 0
        
        self.counter = 0 # Counts number of callback calls


    def getDeltaPhi(self, lidar_data, lam, phi, psi):
        """
        Returns the new direction of robot
        """
        f_obs = 0
        for psi_obs_i, lidar_data_i in (self.PSI_OBS, lidar_data):
            f_obs += self.f_obs_i(psi_obs_i, lidar_data_i)
        return self.f_tar(lam, phi, psi) + f_obs

    
    def f_tar(self):
        """
        Influence from target dynamics
        
        lam_tar: turning speed of the robot. Unit radians/s 
        phi: current direction in global coordinate system in radians
        psi_tar: direction of target in global coordinate system in radians
        
        returns influence of target to new phi
        """
        return -self.LAMBDA_TAR * np.sin(self.phi - self.psi)
    
    
    def f_obs_i(self, psi_obs, lidar_data_i):
        """
        Creates repellors at the locations of obstacles
        
        psi_obs_i: direction in radians
        lidar_data_i: distance
        
        Returns influence of psi_obs
        """
        lambda_ops_i = self.lambda_obs(lidar_data_i)
        exp_arg = (psi_obs**2)/(2*self.sigma**2)
        return lambda_ops_i*(psi_obs)*np.exp(-exp_arg)
    
    
    def lambda_obs(self, d):
        """
        weight function
        """
        return self.beta_1 * np.exp(-d/self.beta_2)
    

    def getDirection(self):
        """
        Calculates the heading direction
        """
        self.psi = -np.arctan2(self.y-self.TARGET_Y, self.x-self.TARGET_X)
    
    
    def getVelocity(self, deltaPhi):
        velocity = (deltaPhi * (self.WHEEL_DISTANCE/2))/16
        if np.abs(self.LAMBDA) >= self.MAX_VELOCITY:
            return 0
        elif velocity > self.MAX_VELOCITY - self.LAMBDA:
            return self.MAX_VELOCITY - self.LAMBDA
        elif velocity < -self.MAX_VELOCITY + self.LAMBDA:
            return -self.MAX_VELOCITY + self.LAMBDA
        return velocity
    
       
    def setVelocity(self, v_l, v_r):
        """
        sets the new velocity
        """
        new_motor_command = Motors()
        new_motor_command.motors = [
            Motor(position=1, velocity=int(v_l)), 
            Motor(position=1, velocity=int(v_r))
        ]
        self.publisher_.publish(new_motor_command)


    def updateMovement(self):
        """
        Updates the movement
        """
        # Track the ticks that has been made since the last time step for the right wheel
        right_now_ticks =  self.RIGHT_MOVED - self.TOTAL_RIGHT_MOVED
        self.TOTAL_RIGHT_MOVED = self.RIGHT_MOVED
        right_now_moved = right_now_ticks * ((2*np.pi*self.WHEEL_RADIUS)/self.NUM_TICKS)
        
        # Track the ticks that has been made since the last time step for the left wheel
        left_now_ticks = self.LEFT_MOVED - self.TOTAL_LEFT_MOVED
        self.TOTAL_LEFT_MOVED = self.LEFT_MOVED
        left_now_moved = left_now_ticks * ((2*np.pi*self.WHEEL_RADIUS)/self.NUM_TICKS)
        
        self.phi = (self.phi + (left_now_moved - right_now_moved) / self.WHEEL_DISTANCE) % (2*np.pi)
        
        c = (left_now_moved + right_now_moved) / 2
        self.x = self.x - c * np.cos(self.phi)
        self.y = self.y + c * np.sin(self.phi)


    def drive(self, msg_motor, msg_lidar):
        #self.get_logger().info(f'Received synchronized messages')
        
        if self.counter == 0:
            self.TOTAL_LEFT_MOVED, self.TOTAL_RIGHT_MOVED = msg_motor.motors[0].position, msg_motor.motors[1].position         
        else:                  
            self.getDirection()
            delta_phi = self.f_tar()
            v = self.getVelocity(delta_phi)
            #self.setVelocity(v+self.LAMBDA, -v+self.LAMBDA)
            self.setVelocity(0, 0)
            
            self.LEFT_MOVED, self.RIGHT_MOVED = msg_motor.motors[0].position, msg_motor.motors[1].position
            self.updateMovement()
            self.x_all.append(self.x)
            self.y_all.append(self.y)
            
            
            if np.abs(self.TARGET_X-self.x) < self.TARGET_RADIUS and np.abs(self.TARGET_Y-self.y) < self.TARGET_RADIUS:
                self.setVelocity(0, 0)
                plt.plot(self.x_all, self.y_all)
                plt.savefig('test.png')
                exit()
            print(f"POSITION: {self.x}, {self.y}. HEADING: {self.phi}, TARGET: {self.psi}, V_L:{v+self.LAMBDA}, V_R:{-v+self.LAMBDA}")
            
        
        self.counter += 1
        #print(msg_lidar.ranges)



def main(args=None):
    rclpy.init(args=args)
    navigation = NavigationNode()
    rclpy.spin(navigation)

    navigation.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()


"""
def drive(x, y, phi, end_x, end_y):
     X_ARR, Y_ARR = [], []
     while True:
        #robot.step(timestep)
        psi = getDirection(x, y, end_x, end_y)
        delta_phi = getDeltaPhi(LAMBDA_TAR, phi, psi)
        v = getVelocity(delta_phi)
        setVelocity(-v+LAMBDA, v+LAMBDA)
        x, y, phi = updateMovement(x, y, phi)
        X_ARR.append(x), Y_ARR.append(y)
"""