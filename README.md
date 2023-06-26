# Computer Perception & Robotics Curriculum

This repo is to document all the projects I have used to build my knowledge of Computer Perception and Robotics.  So far most of the resources I have found regarding Computer Perception and Robotics either only cover a small portion necessary skills or are a bit outdated.  It's probably impossible for one person to keep up with the latest versions of everything, so instead I'll just outline the projects so that anyone else that reads this, regardless of when they read it, can follow along.

## (Optional) Environment Setup

For the time being, all of the projects in this repo will be based on ROS2.  The reason being is that, at the time of writing this, ROS1 is closing in on its EOL in the next to years, so to me personally it makes more sense to start learning ROS2.

The Docker environment in this repo is based on the Foxy-Desktop ARM64 image provided by the Institut fuer Kraftfahrzeuge der RWTH Aachen University (https://hub.docker.com/r/rwthika/ros2).  If you are following this curriculum and you don't have an ARM environment, try swapping it out for the AMD version.

To get it working on mac you will likely need to make sure xquartz is installed and change the settings like in this guide: https://medium.com/@mreichelt/how-to-show-x11-windows-within-docker-on-mac-50759f4b65cb.  It can be quite a bit of work to make sure this is configured right, and don't be surprised if the docker-compose yaml in this repo doesn't work immediately.  You will likely need to play around with settings a bit to get it working for you.

## Curriculum Content

### 1. Turtle Sim

Note:  When running Turtle Sim, you may get some libGL errors.  In my experience, they shouldn't stop you from being able to use Turtle Sim so just keep following the directions.  The best I can tell at the moment is that they are from running on a machine without NVIDIA GPUs.  If you have an NVIDIA GPU, then maybe these won't occur for you.

Turtle Sim is the ROS community intro to all the components of a ROS program.  Nothing special here, just go through the tutorial and make sure you can get it to work.

I used this version of the tutorial, but if you are working with a newer or older version of ROS it may not work for you (https://docs.ros.org/en/foxy/Tutorials/Beginner-CLI-Tools/Introducing-Turtlesim/Introducing-Turtlesim.html#install-turtlesim)