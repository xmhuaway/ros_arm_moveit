#include "mycobot_moveit_real.h"

int main(int argc, char** argv){
    std::cout << "arm_real_node" << std::endl;
	ros::init(argc, argv, "arm_real_node");
	AIBotArmHardwareInterface::AIBot aibot;
	aibot.start();
    return 0;
}