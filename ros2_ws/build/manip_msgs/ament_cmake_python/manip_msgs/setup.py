from setuptools import find_packages
from setuptools import setup

setup(
    name='manip_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('manip_msgs', 'manip_msgs.*')),
)
