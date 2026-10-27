#!/usr/bin/python3
# -*- coding: utf-8 -*-
import rclpy
from rclpy.executors import ExternalShutdownException
from amsagv.ams import Node
from geometry_msgs.msg import Twist
from nav_msgs.msg import Odometry
from amsagv.ams import msg_to_pose



def main():
    # Handle odometry
    def handle_odometry(msg):
        x, y, phi = msg_to_pose(msg.pose.pose)
        gamma = msg.pose.pose.position.z
        print(x, y, phi, gamma)

        vs, ws = 0.0, 0.0

        # Velocity commands message
        msg_cmd_vel = Twist()
        msg_cmd_vel.linear.x = vs
        msg_cmd_vel.angular.z = ws
        # Publish velocity commands
        pub_cmd_vel.publish(msg_cmd_vel)



    rclpy.init()
    node = Node('control_point_odom')
    
    try:

        # Velocity commands publisher.
        pub_cmd_vel = node.create_publisher(Twist, 'cmd_vel', 1)
        # Odometry subscriber
        sub_odom = node.create_subscription(Odometry, 'odom', handle_odometry, 1)

        rclpy.spin(node)
    except (KeyboardInterrupt, ExternalShutdownException):
        pass
    finally:
        node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()



if __name__ == '__main__':
    main()
