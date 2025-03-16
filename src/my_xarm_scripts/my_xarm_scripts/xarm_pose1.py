import rclpy
from rclpy.node import Node
from pymoveit2 import MoveIt2

class XArm7Mover(Node):
    def __init__(self):
        super().__init__('xarm7_mover')
        self.moveit2 = MoveIt2(
            node=self,
            joint_names=[f"joint{i+1}" for i in range(7)],  # xArm 7 joints: joint1 to joint7
            base_link_name="link_base",
            end_effector_name="link_eef",
            group_name="xarm7"
        )

    def move_to_joints(self, joint_positions):
        self.get_logger().info(f"Moving to joint positions: {joint_positions}")
        self.moveit2.move_to_configuration(joint_positions)
        self.moveit2.wait_until_executed()

def main():
    rclpy.init()
    mover = XArm7Mover()

    # Home position (all joints at 0)
    home_joints = [0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0]
    mover.move_to_joints(home_joints)

    # Goal position (example joint angles in radians)
    goal_joints = [1.57, -0.5, 1.0, -1.0, 1.0, 0.5, 1.0]
    mover.move_to_joints(goal_joints)

    rclpy.shutdown()

if __name__ == '__main__':
    main()