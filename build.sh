#!/bin/bash

rm -rf sdk_build
mkdir sdk_build
cd sdk_build
cmake ..
make
sudo make install
