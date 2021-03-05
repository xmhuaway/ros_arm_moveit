#include "mycobot_serial.h"


int main (int argc, char** argv){

    ros::init(argc, argv, "aibot_control_moveit");
    ros::NodeHandle nodeHandle,nodeHandlePrivate("~");

    std::string serial_port = "/dev/ttyUSB0";
    int serial_baudrate = 115200;

    nodeHandlePrivate.param<int>("serial_baudrate", serial_baudrate, 115200);
    nodeHandlePrivate.param<std::string>("serial_port", serial_port, "/dev/ttyUSB0");

    aibot_control::AibotControl control(nodeHandle);

    control.openPort(serial_port,serial_baudrate);

    ros::spin();

 }
