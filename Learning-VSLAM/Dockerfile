FROM gcc:13.2.0

RUN apt-get update
RUN apt-get -y install git \
            ninja-build \
            cmake \
            build-essential \
            tar \
            curl \
            zip \
            unzip \
            bison \
            libdbus-1-dev \
            libxi-dev \
            libxtst-dev \
            autopoint \
            python-jinja2 \
            libxrandr-dev

RUN ln -s /usr/bin/ninja /usr/bin/ninja-build

RUN git clone https://github.com/Microsoft/vcpkg.git

RUN ./vcpkg/bootstrap-vcpkg.sh

ENV PATH=/vcpkg/:${PATH}

WORKDIR /code
