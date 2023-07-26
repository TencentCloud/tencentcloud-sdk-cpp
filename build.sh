#!/bin/bash

build_sdk() {
    rm -rf sdk_build
    mkdir sdk_build
    cd sdk_build
    echo Building sdk
    if ! command -v cmake3 > /dev/null
    then
        cmake .. $1
        cmake --build .
    else
        cmake3 .. $1
        cmake3 --build .
    fi
}

install_sdk() {
    if [ ! -d "sdk_build" ]; then
        echo 'Project has not been built, run "./build.sh build" first'
        return
    fi
    cd sdk_build
    if [ "$(whoami)" != "root" ]
    then
        SUDO=sudo
        echo "Installing sdk, using sudo, require password..."
    else
        SUDO=
    fi
    if ! command -v cmake3 > /dev/null
    then
        $SUDO cmake --build . --target install
    else
        $SUDO cmake3 --build . --target install
    fi
}

if [ "$1" = "build" ]; then
    build_sdk $2
elif [ "$1" = "install" ]; then
    install_sdk
else
    echo nothing to do
fi
