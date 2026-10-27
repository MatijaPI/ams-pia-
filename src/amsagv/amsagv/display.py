#!/usr/bin/python3
# -*- coding: utf-8 -*-
''' Display of the ground area

This program provides a simple user interface for visualization of the ground area.

Use left mouse click to define the goal tag. When a new goal is defined and the start tag is known, a message with the start and goal tag ID are published on the topic **start_goal_tag**. The start tag is defined based on the current pose of the robot frame with respect to the world frame. You can use right mouse click to manually define the start tag. Alternatively, the goal pose can also be set throught the topic **goal**.

When a new message on the topic **path_tags** is received, which contains a list of comma separated tags that represent the path, the path is drawn in the graph and a message with the path points is published on the topic **path**.

![graph-tags](img/graph-tags.png "Graph.")
'''
import sys
import matplotlib
matplotlib.use('Qt5Agg') # Make sure that we are using QT5
from PyQt5 import QtCore, QtGui, QtWidgets
from matplotlib.backends.backend_qt5agg import FigureCanvasQTAgg as FigureCanvas
from matplotlib.figure import Figure
import matplotlib.pyplot as plt
import numpy as np
import rclpy
from rclpy.executors import ExternalShutdownException
from amsagv.ams import Node
from rclpy.time import Time
from rclpy.qos import QoSProfile, DurabilityPolicy
import tf2_ros
from geometry_msgs.msg import TransformStamped
from amsagv_msgs.msg import TagsStamped, TagStamped
from nav_msgs.msg import Path
from geometry_msgs.msg import PoseStamped
from threading import Event, Thread
from amsagv.graph import Graph



class AmsEvent(object):
    def __init__(self, x, y, button=1):
        self.xdata = x
        self.ydata = y
        self.button = button



class AmsMapCanvas(FigureCanvas):
    # Signals that pass received messages from the ROS thread to the GUI thread, so that all inputs
    # (messages and mouse clicks) are handled one after another and are never interrupted
    _path_received = QtCore.pyqtSignal(object)
    _goal_received = QtCore.pyqtSignal(object)
    # Signal with a status message about the received path (shown in the status bar)
    status = QtCore.pyqtSignal(str)

    def __init__(self, node, parent=None):
        self._node = node

        self._graph = Graph()
        self._graph.create_figure(fig=Figure)

        self._goal = None
        self._start = None
        self._path = []
        # Color of the drawn path (None for the default colors of the links)
        self._path_color = None
        self._start_tag = None
        self._goal_tag = None
        self._last_stamp = None

        FigureCanvas.__init__(self, self._graph.fig)
        self.setParent(parent)
        FigureCanvas.setSizePolicy(self, QtWidgets.QSizePolicy.Expanding, QtWidgets.QSizePolicy.Expanding)
        FigureCanvas.updateGeometry(self)

        self._graph.fig.canvas.setFocusPolicy( QtCore.Qt.ClickFocus )
        self._graph.fig.canvas.setFocus()
        self._graph.fig.canvas.mpl_connect('button_press_event', self._on_button_press)
        self._path_received.connect(self._handle_path)
        self._goal_received.connect(self._handle_goal)

        self._tf_buffer = tf2_ros.Buffer()
        self._tf_listener = tf2_ros.TransformListener(self._tf_buffer, node)

        # Name of the world frame
        self._world_frame_id = node.declare_parameter('world_frame_id', 'world').value
        # Name of the robot frame
        self._robot_frame_id = node.declare_parameter('robot_frame_id', 'robot').value
        # Publisher of the start and goal tag ID (the two values are separated by a comma). The message is published when a new goal is set and the start node is known.
        self._pub_start_goal = node.create_publisher(TagsStamped, 'start_goal_tag', 10)
        # Publisher of the path.
        self._pub_path = node.create_publisher(Path, 'path', 10)
        # Subscriber to the path, which is given as a list of comma separated tag IDs.
        self._sub_path_tags = node.create_subscription(TagsStamped, 'path_tags', lambda msg: self._path_received.emit(msg), QoSProfile(depth=10, durability=DurabilityPolicy.TRANSIENT_LOCAL))
        # Subscriber to the goal pose.
        self._sub_goal = node.create_subscription(PoseStamped, 'goal', lambda msg: self._goal_received.emit(msg), 10)

        self.update_canvas()

    def _on_button_press(self, event):
        p = (event.xdata, event.ydata)
        if None not in p:
            if event.button == 1:
                try:
                    trans = self._tf_buffer.lookup_transform(self._world_frame_id, self._robot_frame_id, Time())
                    if self._last_stamp != trans:
                        ps = (trans.transform.translation.x, trans.transform.translation.y)
                        best = self._graph.find_closest_node(ps, self._graph.det_tags)
                        if best is not None:
                            self._start = best[1]
                            self._start_tag = best[0]
                        self._last_stamp = trans.header.stamp
                except tf2_ros.TransformException:
                    pass

                best = self._graph.find_closest_node(p, self._graph.tags)
                if best is not None:
                    self._goal = best[1]
                    self._goal_tag = best[0]
                    if self._start_tag is not None:
                        # Delete the previous path; the new one is drawn when received on path_tags
                        self._path = []
                        msg = TagsStamped()
                        tag = TagStamped()
                        tag.tag.id = self._start_tag
                        msg.tags.append(tag)
                        tag = TagStamped()
                        tag.tag.id = best[0]
                        msg.tags.append(tag)
                        self._pub_start_goal.publish(msg)
                    self.update_canvas()
            elif event.button == 3:
                best = self._graph.find_closest_node(p, self._graph.tags)
                if best is not None:
                    self._start = best[1]
                    self._start_tag = best[0]
                    self.update_canvas()

    def update_canvas(self):
        self._graph.draw(goal=self._goal, start=self._start, path=self._path, path_color=self._path_color)
        self.draw()

    def _handle_path(self, msg):
        path = [x.tag.id for x in msg.tags]

        if not path:
            self._path = []
            self.status.emit('Received path is empty')
            self.update_canvas()
            return

        p = self._graph.get_path(path)
        if p is None:
            # Do not draw or publish an invalid path
            self._path = []
            self._node.get_logger().warning(f'Received path is not valid: {path}')
            # Show at most 12 tags: the first 8, three dots, the last three tags and the number of tags
            tags = ', '.join(str(t) for t in path)
            if len(path) > 12:
                tags = ', '.join(str(t) for t in path[:8] + ['...'] + path[-3:]) + f' (#{len(path)})'
            self.status.emit(f'Received path is not valid: {tags}')
            self.update_canvas()
        else:
            self._path = path
            # Check that the path connects the currently selected start and goal tag
            mismatch = []
            if self._start_tag is not None and path[0] != self._start_tag:
                mismatch.append(f'starts in tag {path[0]} instead of {self._start_tag}')
            if self._goal_tag is not None and path[-1] != self._goal_tag:
                mismatch.append(f'ends in tag {path[-1]} instead of {self._goal_tag}')
            mismatch = ', but it ' + ' and '.join(mismatch) if mismatch else ''
            # Draw the path in gray if it does not match the start and goal tag (black, but the links
            # are drawn transparent)
            self._path_color = 'k' if mismatch else None
            if mismatch:
                self._node.get_logger().warning(f'Received path does not match the start and goal tag: {path}')
            self.status.emit(f'Received path is valid{mismatch}')
            msg_path = Path()
            msg_path.header.frame_id = 'world'
            msg_path.header.stamp = self._node.get_clock().now().to_msg()
            for i in range(p.shape[1]):
                pose = PoseStamped()
                pose.pose.position.x = float(p[0,i])
                pose.pose.position.y = float(p[1,i])
                msg_path.poses.append(pose)
            self._pub_path.publish(msg_path)
            self.update_canvas()

    def _handle_goal(self, msg):
        event = AmsEvent(msg.pose.position.x, msg.pose.position.y)
        self._on_button_press(event)



class ApplicationWindow(QtWidgets.QMainWindow):
    def __init__(self, node):
        QtWidgets.QMainWindow.__init__(self)
        self.setAttribute(QtCore.Qt.WA_DeleteOnClose)
        self.setWindowTitle('Display')

        self._file_menu = QtWidgets.QMenu('&File', self)
        self._file_menu.addAction('&Quit', self._on_file_quit, QtCore.Qt.CTRL + QtCore.Qt.Key_Q)
        self.menuBar().addMenu(self._file_menu)

        self._main = QtWidgets.QWidget(self)

        layout = QtWidgets.QVBoxLayout(self._main)
        self.canvas = AmsMapCanvas(node, self._main)
        layout.addWidget(self.canvas)

        self._main.setFocus()
        self.setCentralWidget(self._main)

        self.statusBar().showMessage(":)", 2000)
        self.canvas.status.connect(self.statusBar().showMessage)

    def _on_file_quit(self):
        self.close()

    def closeEvent(self, event):
        self._on_file_quit()



def main():
    rclpy.init()
    node = Node('display')
    stop = Event()
    thread = None
    try:
        app = QtWidgets.QApplication(sys.argv)

        # Spin ROS in a separate thread until the window is closed; quit the GUI when ROS is
        # shut down (e.g. Ctrl+C)
        def spin():
            try:
                while rclpy.ok() and not stop.is_set():
                    rclpy.spin_once(node, timeout_sec=0.1)
            except ExternalShutdownException:
                pass
            QtCore.QMetaObject.invokeMethod(app, 'quit', QtCore.Qt.QueuedConnection)
        thread = Thread(target=spin)
        thread.start()

        aw = ApplicationWindow(node)
        aw.show()
        app.exec_()
    except (KeyboardInterrupt, ExternalShutdownException):
        pass
    finally:
        stop.set()
        if thread is not None:
            thread.join()
        node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()



if __name__ == '__main__':
    main()
