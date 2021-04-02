# AIBot 小车 & mycobot 机械臂ros moveit控制

![mycobot](pic/aibot_arm.png)

## 机械臂固件版本

* Basic : Transponder
* Atom : AtomMain

## 系统及ROS版本

* ubuntu16.04
* rosdistro : kinetic
* rosversion : 1.12.14


## 安装依赖包

```cmd
sudo apt-get install ros-kinetic-joint-state-controller 
sudo apt-get install ros-kinetic-joint-trajectory-controller 
sudo apt-get install ros-kinetic-controller-manager
sudo apt-get install ros-kinetic-position-controllers
sudo apt-get install ros-kinetic-serial
```
其他ros包需要下载并放在工作空间中编译

* [aibot_msgs](https://github.com/xmhuaway/aibot_msgs.git)
* [mycobot_moveit_config](https://github.com/xmhuaway/mycobot_moveit_config)



## 运行

```cmd
roslaunch ros_arm_moveit mycobot_arm_moveit.launch
```

![moveit](pic/mycobot_moveit.png)
