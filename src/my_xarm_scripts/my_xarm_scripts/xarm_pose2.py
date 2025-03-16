import rclpy
from rclpy.node import Node
from pymoveit2 import MoveIt2
from geometry_msgs.msg import PoseStamped

class XArm7Mover(Node):
    def __init__(self):
        super().__init__('xarm7_mover')
        self.moveit2 = MoveIt2(
            node=self,
            joint_names=[f"joint{i+1}" for i in range(7)],
            base_link_name="link_base",
            end_effector_name="link_eef",
            group_name="xarm7"
        )

    def move_to_pose(self, pose):
        self.get_logger().info(f"Moving to pose: {pose}")
        pose_stamped = PoseStamped()
        pose_stamped.header.frame_id = "link_base"
        pose_stamped.pose = pose
        self.moveit2.move_to_pose(pose=pose_stamped)
        self.moveit2.wait_until_executed()

def main():
    rclpy.init()
    mover = XArm7Mover()

    # Example pose (x, y, z in meters; quaternion for orientation)
    from geometry_msgs.msg import Pose
    home_pose = Pose()
    home_pose.position.x = 0.3
    home_pose.position.y = 0.0
    home_pose.position.z = 0.4
    home_pose.orientation.w = 1.0
    mover.move_to_pose(home_pose)

    rclpy.shutdown()

if __name__ == '__main__':
    main()