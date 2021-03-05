#ifndef ARM_CONTROL_H
#define ARM_CONTROL_H
#include <ros/ros.h>
#include <serial/serial.h>
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <cmath>
#include "aibot_msgs/ServoCtrl.h"

namespace aibot_control{
    class AibotControl{
        public:
            AibotControl(ros::NodeHandle &nodeHandle);
            ~AibotControl();
            int openPort(std::string &port,int baudrate);


        private:
            void callback(const aibot_msgs::ServoCtrl::ConstPtr& msg);

            std::string angle2string(float angle);
            std::string dec2hexString(uint dec);
            void hexToBytes(const std::string& hex,uint8_t *bytes);
            void sendToArm(float j1,float j2,float j3,float j4,float j5,float j6);
            void timerCallback(const ros::TimerEvent& e);
            serial::Serial ros_ser;
            float jointAngle1;
            float jointAngle2;
            float jointAngle3;
            float jointAngle4;
            float jointAngle5;
            float jointAngle6;
            ros::Subscriber mSub;
            ros::NodeHandle *pNodeHandle;
            ros::Timer mTimer;



    };


}


#endif