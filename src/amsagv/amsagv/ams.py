#!/usr/bin/python3
# -*- coding: utf-8 -*-
import os
from math import pi, floor, cos, sin, asin, copysign
import numpy as np
from geometry_msgs.msg import Quaternion, Pose, PoseStamped, Transform, TransformStamped
from rclpy.node import Node as RosNode
from rclpy.qos import (QoSProfile, HistoryPolicy, ReliabilityPolicy, DurabilityPolicy)



def get_frame_prefix(node):
    '''Frame-name prefix based on the node namespace (e.g. 'anthony/' or '')'''
    ns = node.get_namespace().strip('/')
    return f'{ns}/' if ns else ''



def wrap_to_pi(x):
    '''Wrap the angle to [-pi, pi]'''
    return x-floor((x+pi)/2.0/pi)*2.0*pi



def quaternion_msg_to_phi(msg):
    '''Read the angle from Quaternion message'''
    return asin(msg.z)*copysign(2, msg.w)



def phi_to_quaternion_msg(phi):
    '''Write the angle to Quaternion message'''
    msg = Quaternion()
    msg.w = cos(phi/2.0)
    msg.z = sin(phi/2.0)
    return msg



def msg_to_pose(msg):
    '''Get pose (x, y and phi) from Pose or Transform message

       Arguments:
         msg = Pose(), PoseStamped(), Transform() or TransformStamped() from geometry_msgs.msg

       Return: (x, y, phi)
    '''
    if isinstance(msg, PoseStamped):
        msg = msg.pose
    elif isinstance(msg, TransformStamped):
        msg = msg.transform

    if isinstance(msg, Pose):
        ans = (msg.position.x, msg.position.y, quaternion_msg_to_phi(msg.orientation))
    elif isinstance(msg, Transform):
        ans = (msg.translation.x, msg.translation.y, quaternion_msg_to_phi(msg.rotation))
    else:
        raise Exception('Unknown input type.')

    return ans



def pose_to_msg(x, y, phi=0.0):
    '''Write pose (x, y, phi) to Pose message'''
    msg = Pose()
    msg.position.x = x
    msg.position.y = y
    msg.orientation = phi_to_quaternion_msg(phi)
    return msg



def pose_to_transform_msg(x, y, phi=0.0):
    '''Write pose (x, y, phi) to Transform message'''
    msg = Transform()
    msg.translation.x = x
    msg.translation.y = y
    msg.rotation = phi_to_quaternion_msg(phi)
    return msg



def multiply_quaternion(q1, q2):
    '''Hamilton product of two quaternions given as (x, y, z, w)'''
    x1, y1, z1, w1 = q1
    x2, y2, z2, w2 = q2
    return np.array([
      w1*x2 + x1*w2 + y1*z2 - z1*y2,
      w1*y2 - x1*z2 + y1*w2 + z1*x2,
      w1*z2 + x1*y2 - y1*x2 + z1*w2,
      w1*w2 - x1*x2 - y1*y2 - z1*z2], dtype=float)



def conjugate_quaternion(q):
    '''Conjugate of a quaternion given as (x, y, z, w)'''
    return np.array([-q[0], -q[1], -q[2], q[3]], dtype=float)



def quaternion_to_rotation_matrix(q):
    '''Rotation matrix (3 x 3) of a quaternion given as (x, y, z, w)'''
    x, y, z, w = np.asarray(q, dtype=float)/np.linalg.norm(q)
    return np.array([
      [1.0-2.0*(y*y+z*z), 2.0*(x*y-z*w), 2.0*(x*z+y*w)],
      [2.0*(x*y+z*w), 1.0-2.0*(x*x+z*z), 2.0*(y*z-x*w)],
      [2.0*(x*z-y*w), 2.0*(y*z+x*w), 1.0-2.0*(x*x+y*y)]], dtype=float)



class Node(RosNode):
    '''ROS 2 node in the ROS_NAMESPACE'''
    def __init__(self, *args, namespace=None, **kwargs):
        if namespace is None:
            namespace = os.environ.get('ROS_NAMESPACE', '')
        super().__init__(*args, namespace=namespace, **kwargs)



qos_sensor = QoSProfile(
    history=HistoryPolicy.KEEP_LAST,
    depth=5,
    reliability=ReliabilityPolicy.BEST_EFFORT,
    durability=DurabilityPolicy.VOLATILE
)

qos_cmd = QoSProfile(
    history=HistoryPolicy.KEEP_LAST,
    depth=1,
    reliability=ReliabilityPolicy.BEST_EFFORT,
    durability=DurabilityPolicy.VOLATILE
)

qos_latched = QoSProfile(
    history=HistoryPolicy.KEEP_LAST,
    depth=1,
    reliability=ReliabilityPolicy.RELIABLE,
    durability=DurabilityPolicy.TRANSIENT_LOCAL
)

qos_tf = QoSProfile(
    history=HistoryPolicy.KEEP_LAST,
    depth=100,
    reliability=ReliabilityPolicy.BEST_EFFORT,
    durability=DurabilityPolicy.VOLATILE
)

qos_event = QoSProfile(
    history=HistoryPolicy.KEEP_LAST,
    depth=5,
    reliability=ReliabilityPolicy.RELIABLE,
    durability=DurabilityPolicy.VOLATILE
)

qos_actions = QoSProfile(
    history=HistoryPolicy.KEEP_LAST,
    depth=10,
    reliability=ReliabilityPolicy.RELIABLE,
    durability=DurabilityPolicy.TRANSIENT_LOCAL
)