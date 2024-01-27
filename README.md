# Computer Perception & Robotics Curriculum

This repo is to document all the projects I have used to build my knowledge of Computer Perception and Robotics.  So far most of the resources I have found regarding Computer Perception and Robotics either only cover a small portion necessary skills or are a bit outdated.  I'll try as much as possible to pick content that will be valuable for a long time, but even if it is not, a lot of these resources should have new versions in the future (like ROS for instance). 

## Tooling and Programming Languages

### ROS2

ROS is commonly used in the field of robotics and most employers will ask if you have any exeprience with it.  There are a few free resources online for it:

[ROS2 Official Tutorial](https://docs.ros.org/en/foxy/Tutorials/Beginner-CLI-Tools/Introducing-Turtlesim/Introducing-Turtlesim.html#install-turtlesim) is a simple intro to ROS2 in the official documentation.

[Robotics Backend](https://www.youtube.com/@RoboticsBackEnd) is a youtube channel with a wide variety of content including several playlists on ROS2.

### C++

You can't really escape this language when it comes to robotics and edge device development.  A Tour of C++ by Bjarne Stroustrup is a great start, but there are inifinite amounts of C++ resources out there so just choose whatever you like.

## Concepts

### Camera Calibration

Camera Calibration is a core component of concepts like Visual Odometry and Visual SLAM.  This course from First Principles of Computer Vision is a great intro to it:

[Camera Calibration](https://www.youtube.com/playlist?list=PL2zRqk16wsdoCCLpou-dGo7QQNks1Ppzo)

Note:  First Principles of Computer Vision has a wealth of great content, so checkout some of their other playlists too.

### Sensor Fusion

Sensor Fusion is the concept of combining data from multiple sensors to improve accuracy as well as add redundancy in case one or more sensors fail.  In Robotics, you will often work with cameras, LiDAR, Radar and other sensors so having knowledge about Sensor Fusion will be of great help to you.  Here's a solid resource on it from Lars Hammarstrand:

[Sensor Fusion](https://www.youtube.com/playlist?list=PLTD_k0sZVYFqjFDkJV8GE2EwfxNK59fJY)


### Visual SLAM

To learn about visual SLAM I am working through the contents of this [book](https://github.com/gaoxiang12/slambook-en).  Personally, I find it hard to focus on things that aren't clearly related to what I am interested in, so I started from the chapters I was most excited about and worked from there, going back to learn other topics when I got stuck.  An environment and code examples from this book are in the `Learning-VSLAM` folder.
