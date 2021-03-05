cmake_minimum_required(VERSION 3.0.2)
project(ros_arm_moveit)

add_compile_options(-std=c++11)

find_package(catkin REQUIRED COMPONENTS
    roscpp
    joint_state_controller
    joint_trajectory_controller
    aibot_msgs
    controller_manager
    position_controllers
    
)


catkin_package(
 INCLUDE_DIRS include
#  LIBRARIES ros_arm_moveit
CATKIN_DEPENDS controller_manager position_controllers joint_state_controller joint_trajectory_controller 
#  DEPENDS system_lib
)


include_directories(
include
${catkin_INCLUDE_DIRS}
)

link_directories(
  ${catkin_LIB_DIRS} lib
)


add_executable(arm_real_node src/arm_real_node.cpp)
add_executable(mycobot_control src/mycobot_control.cpp)


target_link_libraries(arm_real_node mycobotMoveitReal
  ${catkin_LIBRARIES}
)

target_link_libraries(mycobot_control mycobotSerial serial
  ${catkin_LIBRARIES}
)
