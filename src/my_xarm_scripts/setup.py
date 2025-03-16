from setuptools import find_packages, setup

package_name = 'my_xarm_scripts'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='walt',
    maintainer_email='walt@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'xarm_pose1 = my_xarm_scripts.xarm_pose1:main',
            'xarm_pose2 = my_xarm_scripts.xarm_pose2:main',
        ],
    },
)
