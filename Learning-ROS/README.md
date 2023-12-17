## Environment Setup

All of the projects in this repo will be based on ROS2.  The reason being is that, at the time of writing this, ROS1 is closing in on its EOL in the next to years, so to me personally it makes more sense to start learning ROS2.

The Docker environment in this repo is based on the Foxy-Desktop ARM64 image provided by the Institut fuer Kraftfahrzeuge der RWTH Aachen University (https://hub.docker.com/r/rwthika/ros2).  If you are following this curriculum and you don't have an ARM environment, try swapping it out for the AMD version.

To get it working on mac you will likely need to make sure xquartz is installed and change the settings like in this guide: https://medium.com/@mreichelt/how-to-show-x11-windows-within-docker-on-mac-50759f4b65cb.  It can be quite a bit of work to make sure this is configured right, and don't be surprised if the docker-compose yaml in this repo doesn't work immediately.  You will likely need to play around with settings a bit to get it working for you.

## Setup Commands

Start the container:
```
docker compose up -d
```

SSH into the container:
```
docker compose exec ros bash
```

Shutdown the container:
```
docker compose down
```
