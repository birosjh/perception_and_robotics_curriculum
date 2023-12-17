## Environment Setup

I've created a C++ environment for all of the practice projects in the VSLAM book.
The dependencies are installed with vcpkg.

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

Install dependencies:
```
vcpkg install
```
