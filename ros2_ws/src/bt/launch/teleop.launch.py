import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    pkg_dir = get_package_share_directory('omni_control')
    pkg2_dir = get_package_share_directory('bt')

    #joyの起動   
    joy_node = Node(
                package='joy',
                executable='joy_node',
                output='screen'
                )
    #omni_joyの起動
    omni_joy_node = Node(
                package='omni_control',
                executable='omni_joy_node',
                output='screen',
                parameters=[os.path.join(pkg_dir,'config','duty_params.yaml')]
                )
    #omni_driveの起動
    omni_drive_node = Node(
                package='omni_control',
                executable='duty_drive_node',
                output='screen'
                )
    
    #omni_hardwareの起動
    omni_hardware_node = Node(
                package='omni_control',
                executable='duty_hardware_node',
                output='screen',
                parameters=[os.path.join(pkg_dir,'config','duty_params.yaml')]
                )

    
    joy_control_node = Node(
                package='bt',
                executable='joy_control_node',
                output='screen',
                )
    
    manip_control_node = Node(
                package='manip',
                executable='manip_control_node',
                output='screen',
                )

    return LaunchDescription([
        joy_node,
        omni_joy_node,
        omni_drive_node,
        omni_hardware_node,
        joy_control_node,
        manip_control_node
    ])
