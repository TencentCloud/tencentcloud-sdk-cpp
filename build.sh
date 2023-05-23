#!/bin/bash

build_sdk() {
    rm -rf sdk_build
    mkdir sdk_build
    cd sdk_build
    echo Building sdk
    if ! command -v cmake3 > /dev/null
    then
        cmake .. $1
    else
        cmake3 .. $1
    fi
}

install_sdk() {
    if [ ! -d "sdk_build" ]; then
        echo 'Project has not been built, run "./build.sh build" first'
        return
    fi
    echo Installing sdk, require root password...
    cd sdk_build
    sudo cmake --build . --target install
}

if [ "$1" = "build" ]; then
    build_sdk
elif [ "$1" = "install" ]; then
    install_sdk
else
    echo nothing to do
fi