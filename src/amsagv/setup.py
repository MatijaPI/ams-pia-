from glob import glob
from setuptools import find_packages, setup

package_name = 'amsagv'

setup(
    name=package_name,
    version='1.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        ('share/' + package_name + '/launch', glob('launch/*.launch.xml')),
        ('share/' + package_name + '/urdf', glob('urdf/*')),
        ('share/' + package_name + '/meshes', glob('meshes/*.dae') + glob('meshes/*.png')),
        ('share/' + package_name + '/rviz', glob('rviz/*.rviz')),
        ('share/' + package_name + '/data', glob('data/*')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='andrej',
    maintainer_email='andrej.zdesar@fe.uni-lj.si',
    description='The AMS AGV package',
    license='MIT',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
            'agv = amsagv.agv:main',
            'tag_reader = amsagv.tag_reader:main',
            'path_planning = amsagv.path_planning:main',
            'control_line = amsagv.control_line:main',
            'control_point = amsagv.control_point:main',
            'control_point_odom = amsagv.control_point_odom:main',
            'localisation = amsagv.localisation:main',
            'localisation_gps = amsagv.localisation_gps:main',
            'front = amsagv.front:main',
            'set_odom_frame = amsagv.set_odom_frame:main',
            'tag_beep = amsagv.tag_beep:main',
            'path_converter = amsagv.path_converter:main',
            'tag_converter = amsagv.tag_converter:main',
            'tags_converters = amsagv.tags_converters:main',
            'display = amsagv.display:main',
        ],
    },
)
