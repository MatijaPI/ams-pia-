from setuptools import find_packages
from setuptools import setup

setup(
  name='amsagv_msgs',
  version='1.0.0',
  packages=find_packages(
      include=('amsagv_msgs', 'amsagv_msgs.*')),
)
