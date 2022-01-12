## 简介
从3.0.297开始，腾讯云 C++ SDK 支持使用泛用型的API调用方式(Common Client)进行请求。您只需安装 tencentcloud-sdk-cpp-core 基础依赖库, 即可向任何产品发起调用。

**注意，您必须明确知道您调用的接口所需参数，否则可能会调用失败。**

## 环境依赖
请参考[README](https://github.com/milezhang/tencentcloud-sdk-cpp/blob/master/README.md)中的环境依赖项进行配置

**注意，由于Common Client只依赖基础库tencentcloud-sdk-cpp-core，所以在"从源代码构建 SDK"说明项，指定产品编译步骤中，不需要编译产品，直接执行cmake ..即可，更改后执行步骤如下所示：**

```
cd <path/to/tencentcloud-sdk-cpp>
mkdir sdk_build
cd sdk_build
# centos 下使用 cmake3 ..
cmake ..
make
sudo make install
```

## 编译common client示例代码步骤

- 新建并且进入build目录 mkdir build
- 执行cmake ../
- 执行make命令
- 运行common client示例代码  ./DescribeInstances or ./ClsUploadLog 

**注意：如执行./ClsUploadLog示例代码，示例中使用的是在bulid文件上层目录下的二进制文件binary.data，如用户需使用其他二进制文件，将filein读取二进制接口路径替换为目标二进制文件即可。**