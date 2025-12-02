## Introduction

Starting from version 3.0.297, the Tencent Cloud C++ SDK allows you to make requests using a **general-purpose API calling method** (Common Client). You only need to install the base library, `tencentcloud-sdk-cpp-core`, to make calls to **any** product.

**Important Note: You must clearly know what inputs (parameters) the API you are calling needs, or your call might fail.**

## Environment Dependencies

Please check the environment setup instructions in the [README](https://github.com/milezhang/tencentcloud-sdk-cpp/blob/master/README.md) file.

**Important Note: Because the Common Client only needs the base library (`tencentcloud-sdk-cpp-core`), when you follow the instructions for "Building SDK from Source Code," you do not need to build specific products. You can run `cmake ..` right away. The updated steps are:**

```
cd <path/to/tencentcloud-sdk-cpp>
mkdir sdk_build
cd sdk_build
# centos 下使用 cmake3 ..
cmake ..
make
sudo make install
```

## Steps to Build the Common Client Example Code

* Create and go into the build folder: `mkdir build`
* Run `cmake ../`
* Run the `make` command
* Run the common client example code: `./DescribeInstances` or `./ClsUploadLog`

**Important Note: If you run the `./ClsUploadLog` example, it uses a binary file called `binary.data` which is located in the folder *above* the build folder. If you want to use a different binary file, just change the file path in the `filein` read binary file part to point to your new file.**
