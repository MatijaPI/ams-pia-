#!/usr/bin/python3
# -*- coding: utf-8 -*-
from math import *
import rclpy
from rclpy.executors import ExternalShutdownException
from amsagv.ams import Node
import tf2_ros
from geometry_msgs.msg import TransformStamped
from nav_msgs.msg import Odometry
from amsagv_msgs.msg import TagStamped
import numpy as np
from amsagv.ams import get_frame_prefix
#from amsagv.ams import wrap_to_pi, multiply_quaternion, conjugate_quaternion, quaternion_to_rotation_matrix
#from amsagv.world import MTAG
#from amsagv import graph_gen as graph



class Localisation(object):
    def __init__(self, node):
        self._node = node
        self._frame_prefix = get_frame_prefix(node)

        self._tf_broadcaster = tf2_ros.TransformBroadcaster(node)

        # Odometry subscriber
        self._sub_odom = node.create_subscription(Odometry, 'odom', self._handle_odometry, 10)
        # Tag subscriber
        self._sub_tag = node.create_subscription(TagStamped, 'tag', self._handle_tag, 10)
        # Estimate publisher
        self._pub_estimate = node.create_publisher(Odometry, 'estimate', 10)

        self.x, self.y, self.phi = 0.0, 0.0, 0.0
        self.P = np.array([[1.0, 0.0, 0.0], [0.0, 1.0, 0.0], [0.0, 0.0, 1.0]], dtype=float)

    def _handle_tag(self, msg):
        print('Tag ID: {}'.format(msg.tag.id))

    def _handle_odometry(self, msg):
        #TODO Implement localisation algorithm here ...

        #'''
        stamp = self._node.get_clock().now().to_msg()

        trans = TransformStamped()
        trans.header.stamp = stamp
        trans.header.frame_id = 'world'
        trans.child_frame_id = f'{self._frame_prefix}estimate'
        trans.transform.translation.x = self.x
        trans.transform.translation.y = self.y
        trans.transform.rotation.z = sin(self.phi/2.0)
        trans.transform.rotation.w = cos(self.phi/2.0)
        self._tf_broadcaster.sendTransform(trans)

        estimate = Odometry()
        estimate.header.stamp = stamp
        estimate.header.frame_id = 'world'
        estimate.pose.pose.position.y = self.y
        estimate.pose.pose.position.x = self.x
        estimate.pose.pose.orientation.z = sin(self.phi/2.0)
        estimate.pose.pose.orientation.w = cos(self.phi/2.0)
        estimate.pose.covariance[0:2] = self.P[0,0:2]
        estimate.pose.covariance[5] = self.P[0,2]
        estimate.pose.covariance[6:8] = self.P[1,0:2]
        estimate.pose.covariance[11] = self.P[1,2]
        estimate.pose.covariance[30:32] = self.P[2,0:2]
        estimate.pose.covariance[35] = self.P[2,2]
        self._pub_estimate.publish(estimate)

        '''
        vec_t_odom_to_agv = np.array([msg.pose.pose.position.x, msg.pose.pose.position.y, msg.pose.pose.position.z])
        vec_q_odom_to_agv = np.array([msg.pose.pose.orientation.x, msg.pose.pose.orientation.y, msg.pose.pose.orientation.z, msg.pose.pose.orientation.w])
        vec_t_world_to_agv = np.array([self.x, self.y, 0.0])
        vec_q_world_to_agv = np.array([0.0, 0.0, sin(self.phi/2.0), cos(self.phi/2.0)])
        vec_q_world_to_odom = multiply_quaternion(vec_q_world_to_agv, conjugate_quaternion(vec_q_odom_to_agv))
        mat_r_world_to_odom = quaternion_to_rotation_matrix(vec_q_world_to_odom)
        vec_t_world_to_odom = vec_t_world_to_agv - mat_r_world_to_odom.dot(vec_t_odom_to_agv)

        trans2 = TransformStamped()
        trans2.header.stamp = msg.header.stamp
        trans2.header.frame_id = 'world'
        trans2.child_frame_id = f'{self._frame_prefix}odom'
        trans2.transform.translation.x, trans2.transform.translation.y, trans2.transform.translation.z = (float(v) for v in vec_t_world_to_odom)
        trans2.transform.rotation.x, trans2.transform.rotation.y, trans2.transform.rotation.z, trans2.transform.rotation.w = (float(v) for v in vec_q_world_to_odom)

        transMsg = TransformStamped()
        transMsg.header = msg.header
        transMsg.child_frame_id = msg.child_frame_id
        transMsg.transform.translation.x = msg.pose.pose.position.x
        transMsg.transform.translation.y = msg.pose.pose.position.y
        transMsg.transform.translation.z = msg.pose.pose.position.z
        transMsg.transform.rotation = msg.pose.pose.orientation

        self._tf_broadcaster.sendTransform([trans2, transMsg])
        #'''



def main():
    rclpy.init()
    node = Node('localisation')
    
    try:

        localisation = Localisation(node)

        rclpy.spin(node)
    except (KeyboardInterrupt, ExternalShutdownException):
        pass
    finally:
        node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()



if __name__ == '__main__':
    main()
