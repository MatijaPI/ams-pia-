#!/usr/bin/python3
# -*- coding: utf-8 -*-
import rclpy
from rclpy.executors import ExternalShutdownException
from amsagv.ams import Node
from rclpy.time import Time
from geometry_msgs.msg import Twist
from nav_msgs.msg import Odometry
import tf2_ros
from geometry_msgs.msg import TransformStamped
from amsagv.ams import msg_to_pose



def main():
    # Control loop, executed at 50 Hz
    def handle_timer():
        try:
            trans = tf_buffer.lookup_transform('world', 'agv', Time())
            x, y, phi = msg_to_pose(trans)
        except tf2_ros.TransformException:
            pass

        vs, ws = 0.0, 0.0

        msg_cmd_vel.linear.x = vs
        msg_cmd_vel.angular.z = ws
        # Publish velocity commands
        pub_cmd_vel.publish(msg_cmd_vel)



    rclpy.init()
    node = Node('control_point')
    
    try:

        # Velocity commands publisher.
        pub_cmd_vel = node.create_publisher(Twist, 'cmd_vel', 1)

        # TF buffer and listener
        tf_buffer = tf2_ros.Buffer()
        tf_listener = tf2_ros.TransformListener(tf_buffer, node)

        # Velocity commands message
        msg_cmd_vel = Twist()

        timer = node.create_timer(1.0/50.0, handle_timer)

        rclpy.spin(node)
    except (KeyboardInterrupt, ExternalShutdownException):
        pass
    finally:
        node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()



if __name__ == '__main__':
    main()
