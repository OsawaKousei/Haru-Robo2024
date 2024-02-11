from setuptools import find_packages
from setuptools import setup

setup(
    name='path_following',
    version='0.0.0',
    packages=find_packages(
        include=('path_following', 'path_following.*')),
)
