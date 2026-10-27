#!/usr/bin/python3
# -*- coding: utf-8 -*-
from math import *
import rclpy
from rclpy.executors import ExternalShutdownException
from amsagv.ams import Node
import tf2_ros
from geometry_msgs.msg import TransformStamped
from nav_msgs.msg import Odometry
from geometry_msgs.msg import PointStamped
import numpy as np
from amsagv.ams import wrap_to_pi, get_frame_prefix, multiply_quaternion, conjugate_quaternion, quaternion_to_rotation_matrix

#from threading import Lock



def main():
    # Estimate vector with x, y and phi
    estimate = np.zeros(3, dtype=float)
    # Estimate covariance matrix (3 x 3)
    estimate_cov = np.zeros((3,3), dtype=float)

    #mutex = Lock()

    def handle_gps(msg_gps):
        nonlocal estimate, estimate_cov
        #with mutex:
        print(f'GPS: x = {msg_gps.point.x} m, y = {msg_gps.point.y} m')


    def handle_odometry(msg_odom):
        nonlocal estimate, estimate_cov
        #with mutex:
        print(f'Odometry: d = {msg_odom.twist.twist.linear.x} m, gamma = {msg_odom.pose.pose.position.z}')

        #TODO Implement localisation algorithm here ...

        # Publish estimate
        msg_estimate = Odometry()
        msg_estimate.header.stamp = msg_odom.header.stamp
        msg_estimate.header.frame_id = 'world'
        msg_estimate.child_frame_id = param_estimate_frame_id
        msg_estimate.pose.pose.position.x = float(estimate[0])
        msg_estimate.pose.pose.position.y = float(estimate[1])
        msg_estimate.pose.pose.orientation.z = sin(estimate[2]/2.0)
        msg_estimate.pose.pose.orientation.w = cos(estimate[2]/2.0)
        msg_estimate.pose.covariance[0:2] = estimate_cov[0,0:2]
        msg_estimate.pose.covariance[5] = estimate_cov[0,2]
        msg_estimate.pose.covariance[6:8] = estimate_cov[1,0:2]
        msg_estimate.pose.covariance[11] = estimate_cov[1,2]
        msg_estimate.pose.covariance[30:32] = estimate_cov[2,0:2]
        msg_estimate.pose.covariance[35] = estimate_cov[2,2]
        pub_estimate.publish(msg_estimate)

        #'''
        vec_t_odom_to_agv = np.array([msg_odom.pose.pose.position.x, msg_odom.pose.pose.position.y, msg_odom.pose.pose.position.z], dtype=float)
        vec_q_odom_to_agv = np.array([msg_odom.pose.pose.orientation.x, msg_odom.pose.pose.orientation.y, msg_odom.pose.pose.orientation.z, msg_odom.pose.pose.orientation.w], dtype=float)
        vec_t_world_to_agv = np.array([msg_estimate.pose.pose.position.x, msg_estimate.pose.pose.position.y, msg_estimate.pose.pose.position.z], dtype=float)
        vec_q_world_to_agv = np.array([msg_estimate.pose.pose.orientation.x, msg_estimate.pose.pose.orientation.y, msg_estimate.pose.pose.orientation.z, msg_estimate.pose.pose.orientation.w], dtype=float)
        vec_q_world_to_odom = multiply_quaternion(vec_q_world_to_agv, conjugate_quaternion(vec_q_odom_to_agv))
        mat_r_world_to_odom = quaternion_to_rotation_matrix(vec_q_world_to_odom)
        vec_t_world_to_odom = vec_t_world_to_agv - mat_r_world_to_odom.dot(vec_t_odom_to_agv)

        msg_tf_world_to_odom = TransformStamped()
        msg_tf_world_to_odom.header.stamp = msg_odom.header.stamp
        msg_tf_world_to_odom.header.frame_id = 'world'
        msg_tf_world_to_odom.child_frame_id = msg_odom.header.frame_id
        msg_tf_world_to_odom.transform.translation.x, msg_tf_world_to_odom.transform.translation.y, msg_tf_world_to_odom.transform.translation.z = (float(v) for v in vec_t_world_to_odom)
        msg_tf_world_to_odom.transform.rotation.x, msg_tf_world_to_odom.transform.rotation.y, msg_tf_world_to_odom.transform.rotation.z, msg_tf_world_to_odom.transform.rotation.w = (float(v) for v in vec_q_world_to_odom)

        tf_broadcaster.sendTransform(msg_tf_world_to_odom)
        #'''



    rclpy.init()
    node = Node('localisation')
    
    try:
        # Name of the estimate frame
        param_estimate_frame_id = node.declare_parameter('estimate_frame_id', f'{get_frame_prefix(node)}estimate').value

        tf_broadcaster = tf2_ros.TransformBroadcaster(node)

        # Estimate publisher
        pub_estimate = node.create_publisher(Odometry, 'estimate', 1)
        # Odometry subscriber
        sub_odom = node.create_subscription(Odometry, 'odom', handle_odometry, 10)
        # GPS subscriber
        sub_gps = node.create_subscription(PointStamped, 'gps', handle_gps, 10)

        rclpy.spin(node)
    except (KeyboardInterrupt, ExternalShutdownException):
        pass
    finally:
        node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()



if __name__ == '__main__':
    main()
