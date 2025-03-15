

ros2 launch xarm_moveit_config xarm7_moveit_fake.launch.py        # Uses a fake controller (no real hardware or Gazebo), ideal for testing MoveIt 2 and RViz with a simulated xArm 7.


#ros2 launch xarm_moveit_config xarm7_moveit_gazebo.launch.py     # Integrates MoveIt 2 with Gazebo for physics-based simulation (requires Gazebo installed).
#ros2 launch xarm_moveit_config xarm7_moveit_realmove.launch.py   # For real hardware control with MoveIt 2 (needs the xArm 7’s IP).
#
#
