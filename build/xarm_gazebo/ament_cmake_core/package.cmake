set(_AMENT_PACKAGE_NAME "xarm_gazebo")
set(xarm_gazebo_VERSION "0.0.0")
set(xarm_gazebo_MAINTAINER "vm <vinman.cub@gmail.com>")
set(xarm_gazebo_BUILD_DEPENDS "rclcpp" "control_toolbox" "controller_manager" "xarm_description" "xarm_controller")
set(xarm_gazebo_BUILDTOOL_DEPENDS "ament_cmake")
set(xarm_gazebo_BUILD_EXPORT_DEPENDS "rclcpp" "control_toolbox" "controller_manager" "xarm_description" "xarm_controller")
set(xarm_gazebo_BUILDTOOL_EXPORT_DEPENDS )
set(xarm_gazebo_EXEC_DEPENDS "launch" "launch_ros" "gz_ros2_control" "ros_gz_sim" "robot_state_publisher" "uf_ros_lib" "rclcpp" "control_toolbox" "controller_manager" "xarm_description" "xarm_controller")
set(xarm_gazebo_TEST_DEPENDS "ament_lint_auto" "ament_lint_common")
set(xarm_gazebo_GROUP_DEPENDS )
set(xarm_gazebo_MEMBER_OF_GROUPS )
set(xarm_gazebo_DEPRECATED "")
set(xarm_gazebo_EXPORT_TAGS)
list(APPEND xarm_gazebo_EXPORT_TAGS "<build_type>ament_cmake</build_type>")
