# 简介
欢迎使用腾讯云开发者工具套件（SDK），此 SDK 是云 API 3.0 平台的配套开发工具。
为方便 C++ 开发者调试和接入腾讯云产品 API，这里向您介绍适用于 C++ 的腾讯云开发工具包，并提供首次使用开发工具包的简单示例。让您快速获取腾讯云 C++ SDK 并开始调用。

# 环境依赖

## 开通产品和密钥获取
1. 从 腾讯云控制台 开通相应产品。
2. 获取 SecretID、SecretKey 以及调用地址（endpoint），endpoint 一般形式为\*.tencentcloudapi.com，如CVM 的调用地址为 cvm.tencentcloudapi.com，具体参考各产品说明。

## 编译器
* 安装支持 C++ 11 或更高版本的编译器：GCC 4.8 或以上版本

## 编译工具
- [cmake](https://cmake.org/)

安装 cmake 3.12 或以上版本，参照[官方安装文档](https://cmake.org/install/)，或使用包管理器：

```
ubuntu
sudo apt-get install cmake

centos
yum install cmake3

macos
brew install cmake

windows chocolatey
choco install cmake.install
```

如果操作系统版本较低，自带包管理器无法方便升级 cmake，可以考虑使用 pip 安装：`pip install --upgrade pip && pip install cmake`

- vcpkg（仅windows平台需要）
```
tencentcloud-sdk-cpp 在 windows 平台使用 vcpkg 下载所依赖的程序库，安装说明请参考：

https://vcpkg.io/en/getting-started.html
```

## 依赖库

- [libcurl](https://curl.se/libcurl/)

安装示例如下:

```
ubuntu
sudo apt-get install libcurl4-openssl-dev

centos
yum install libcurl-devel

macos（本身自带curl，这一步非必须）
brew install curl

windows（这里的 cpu 架构请根据实际环境灵活选择）
vcpkg install curl:x64-windows
```

备注：建议安装最新版的 libcurl 库，否则可能存在 libcurl 库内存泄露 bug 问题。

- [openssl](https://www.openssl.org/)

安装示例如下:

```
ubuntu
sudo apt-get install libssl-dev

centos
yum install openssl-devel

macos
brew install openssl && brew link openssl

windows（这里的 cpu 架构请根据实际环境灵活选择）
vcpkg install openssl:x64-windows
```

# 从源代码构建 SDK

## 安装指定产品 SDK（推荐）
1. 前往 [Github 仓库](https://github.com/tencentcloud/tencentcloud-sdk-cpp) 或者 [Gitee 仓库](https://gitee.com/tencentcloud/tencentcloud-sdk-cpp) 下载最新代码
2. 进入 SDK 创建生成必要的构建文件

- linux / macos
```bash
# build
# 通过 BUILD_MODULES 指定产品编译，使用分号;分隔（可选），以cvm和cbs为例
./build.sh build -DBUILD_MODULES="cvm;cbs"

# install
./build.sh install
```

- windows (powershell)
```bash
# 允许执行 powershell 脚本
Set-ExecutionPolicy Bypass -Scope Process

# 64位build
# 通过 BUILD_MODULES 指定产品编译，使用分号;分隔（可选），以cvm和cbs为例
# 通过 CMAKE_TOOLCHAIN_FILE 指定 vcpkg 目录（必须）
.\build.ps1 build -DBUILD_MODULES="cvm;cbs" -DCMAKE_TOOLCHAIN_FILE='[path to vcpkg]/scripts/buildsystems/vcpkg.cmake'

# 32位build
# 通过 BUILD_MODULES 指定产品编译，使用分号;分隔（可选）
# 通过 CMAKE_TOOLCHAIN_FILE 指定 vcpkg 目录（必须）
# 通过 'Visual Studio 17 2022' 指定 visual studio 版本，参考 https://cmake.org/cmake/help/latest/manual/cmake-generators.7.html#visual-studio-generators
.\build32.ps1 build -DBUILD_MODULES="cvm;cbs" -DCMAKE_TOOLCHAIN_FILE='[path to vcpkg]/scripts/buildsystems/vcpkg.cmake' 'Visual Studio 17 2022'

# install，需要 Administrator 权限
.\build.ps1 install
```
具体产品的包名缩写请参考 [products.md](./products.md) 中的包名字段。

## 安装全产品 SDK
指定参数 `-DBUILD_MODULES_ALL=on`。

全产品 SDK 包含了所有云产品的调用代码，体积偏大，对体积敏感的场景，推荐安装指定产品 SDK。

从3.0.387版本开始，默认将不再编译所有产品。因为对于低版本编译器将需要约 8GB 内存才能编译完成，且未来随着产品和接口的增长，内存需求会逐渐增加。

## 注意事项
- 安装全产品 SDK 和安装指定产品的 SDK 两种方式只能选择其中一种。
- 如果同时安装多个产品的包，建议多个产品的包和 common 包保持在同一个版本
- 通过指定编译选项，可以控制部分编译行为。注意：某些选项的变更需要删除 `sdk_build` 目录后才会生效。更多选项可以参考 `CMakeLists.txt` 文件：
- 生成静态库文件：`cmake -DBUILD_SHARED_LIBS=off ..`。
- 如果产品列表过长，以上参数都不方便使用，可以直接编辑根路径下的 `CMakeLists.txt` 文件，关闭不需要产品的编译，例如云服务器 cvm，用 `#` 符号注释掉 `add_subdirectory(cvm)` 及附近相关代码，改为 `#add_subdirectory(cvm)`。

# 使用 C++ SDK 示例
下文以 cvm 产品的 DescribeInstances 接口为例：

### 简化版

```c++
#include <tencentcloud/core/TencentCloud.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/cvm/v20170312/CvmClient.h>
#include <tencentcloud/cvm/v20170312/model/DescribeInstancesRequest.h>
#include <tencentcloud/cvm/v20170312/model/DescribeInstancesResponse.h>
#include <tencentcloud/cvm/v20170312/model/Instance.h>

#include <iostream>
#include <string>
#include <cstdlib>

using namespace TencentCloud;
using namespace TencentCloud::Cvm::V20170312;
using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

int main()
{
    TencentCloud::InitAPI();

    // 前往 https://console.cloud.tencent.com/cam/capi 获取 API 密钥 SecretId SecretKey
    // 硬编码密钥到代码中有可能随代码泄露而暴露，有安全隐患，并不推荐。
    // 为了保护密钥安全，建议将密钥设置在环境变量中或者配置文件中。
    Credential cred = Credential(getenv("TENCENTCLOUD_SECRET_ID"),
                                 getenv("TENCENTCLOUD_SECRET_KEY"));

    DescribeInstancesRequest req = DescribeInstancesRequest();

    CvmClient cvm_client = CvmClient(cred, "ap-guangzhou");

    auto outcome = cvm_client.DescribeInstances(req);
    if (!outcome.IsSuccess())
    {
        cout << outcome.GetError().PrintAll() << endl;
        TencentCloud::ShutdownAPI();
        return -1;
    }

    DescribeInstancesResponse rsp = outcome.GetResult();
    cout<<"RequestId="<<rsp.GetRequestId()<<endl;
    cout<<"TotalCount="<<rsp.GetTotalCount()<<endl;
    if (rsp.InstanceSetHasBeenSet())
    {
        vector<Instance> instanceSet = rsp.GetInstanceSet();
        for (auto itr=instanceSet.begin(); itr!=instanceSet.end(); ++itr)
        {
            cout<<(*itr).GetPlacement().GetZone()<<endl;
        }
    }

    TencentCloud::ShutdownAPI();

    return 0;
}
```

### 详细版

```C++
#include <tencentcloud/core/TencentCloud.h>
#include <tencentcloud/core/profile/HttpProfile.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/NetworkProxy.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/cvm/v20170312/CvmClient.h>
#include <tencentcloud/cvm/v20170312/model/DescribeInstancesRequest.h>
#include <tencentcloud/cvm/v20170312/model/DescribeInstancesResponse.h>
#include <tencentcloud/cvm/v20170312/model/Instance.h>

#include <cstdlib>
#include <iostream>
#include <string>

using namespace TencentCloud;
using namespace TencentCloud::Cvm::V20170312;
using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

int main()
{
    TencentCloud::InitAPI();

    // use the sdk
    // 前往 https://console.cloud.tencent.com/cam/capi 获取 API 密钥 SecretId SecretKey
    // 实例化一个认证对象，入参需要传入腾讯云账户 SecretId 和 SecretKey, 切勿将密钥泄露给他人
    // 硬编码密钥到代码中有可能随代码泄露而暴露，有安全隐患，并不推荐。
    // 为了保护密钥安全，建议将密钥设置在环境变量中或者配置文件中。
    Credential cred = Credential(getenv("TENCENTCLOUD_SECRET_ID"),
                                 getenv("TENCENTCLOUD_SECRET_KEY"));

    // 实例化一个http选项，可选的，没有特殊需求可以跳过。
    HttpProfile httpProfile = HttpProfile();
    httpProfile.SetKeepAlive(true);  // 状态保持，默认是False
    httpProfile.SetEndpoint("cvm.ap-guangzhou.tencentcloudapi.com");  // 指定接入地域域名(默认就近接入)
    httpProfile.SetReqTimeout(30);  // 请求超时时间，单位为秒(默认60秒)
    httpProfile.SetConnectTimeout(30); // 响应超时时间，单位是秒(默认是60秒)

    // 使用SSL默认CA证书的，无需调用SetCaInfo和SetCaPath
    // httpProfile.SetCaInfo("/etc/pki/tls/certs/ca-bundle.crt"); // 如果指定了CA文件，设置的CaPath不会生效，请求会使用CaInfo设置的CA证书
    // httpProfile.SetCaPath("/etc/pki/tls/"); // 未指定CaInfo的情况下，使用CaPath路径下的CA证书

    ClientProfile clientProfile = ClientProfile(httpProfile);

    DescribeInstancesRequest req = DescribeInstancesRequest();

    Filter respFilter;
    respFilter.SetName("zone");
    respFilter.SetValues({ "ap-guangzhou-1", "ap-guangzhou-2" });
    req.SetFilters({ respFilter });
    req.SetOffset(0);
    req.SetLimit(5);

    CvmClient cvm_client = CvmClient(cred, "ap-guangzhou", clientProfile);

    // set proxy
    // NetworkProxy proxy = NetworkProxy(NetworkProxy::Type::HTTP, "localhost.proxy.com", 8080);
    // cvm_client.SetNetworkProxy(proxy);

    auto outcome = cvm_client.DescribeInstances(req);
    if (!outcome.IsSuccess())
    {
        cout << outcome.GetError().PrintAll() << endl;
        TencentCloud::ShutdownAPI();
        return -1;
    }
    DescribeInstancesResponse rsp = outcome.GetResult();
    cout<<"RequestId="<<rsp.GetRequestId()<<endl;
    cout<<"TotalCount="<<rsp.GetTotalCount()<<endl;
    if (rsp.InstanceSetHasBeenSet())
    {
        vector<Instance> instanceSet = rsp.GetInstanceSet();
        for (auto itr=instanceSet.begin(); itr!=instanceSet.end(); ++itr)
        {
            cout<<(*itr).GetPlacement().GetZone()<<endl;
        }
    }

    TencentCloud::ShutdownAPI();

    return 0;
}
```

demo 用例编译执行：

```
cd example/cvm/v20170312
mkdir build
cd build
# centos 下使用 cmake3 ..
cmake ..
make
./DescribeInstances
```

如果报错动态库找不到，可指定动态库路径。例如 libtencentcloud-sdk-cpp-core.so 安装到了 `/usr/local/lib` 路径下（centos 下可能是`/usr/local/lib64`），则追加此目录到`LD_LIBRARY_PATH`环境变量中：

```
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/usr/local/lib
./DescribeInstances
```

如果是安装的静态库，需要修改 `example/cvm/v20170312/CMakeLists.txt`，在链接库的配置代码中，追加链接库：

```
target_link_libraries(DescribeInstances tencentcloud-sdk-cpp-cvm tencentcloud-sdk-cpp-core -lcrypto -lcurl)
target_link_libraries(DescribeInstancesAsync tencentcloud-sdk-cpp-cvm tencentcloud-sdk-cpp-core -lcrypto -lcurl)
```

更多例子请参考 example 目录。

## Common Client调用方式
从`3.0.297`开始，腾讯云 C++ SDK 支持使用`泛用型的API调用方式(Common Client)`进行请求。您只需安装 tencentcloud-sdk-cpp-core 基础依赖库, 即可向任何产品发起调用。

**注意，您必须明确知道您调用的接口所需参数，否则可能会调用失败。**

Common Client参考[example](https://github.com/TencentCloud/tencentcloud-sdk-cpp/blob/master/example/common_client/DescribeInstances.cpp)


## C++ SDK支持压缩协议使用方式

从3.0.622开始，C++ SDK已支持压缩协议请求，如需启用，操作步骤如下：

1. 安装通用压缩库，安装例子如下：
```
ubuntu
sudo apt-get install zlib1g-dev

centos
yum install -y zlib zlib-devel

macos
brew install zlib

windows（这里的 cpu 架构请根据实际环境灵活选择）
vcpkg install zlib:x64-windows
```

2. 通过指定编译选项，可以选择压缩模块是否进行编译，默认关闭。如需开启，将对应模块打开即可，如下所示：
```
cmake -DENABLE_COMPRESS_MODULE=on ..
```


# 单元测试
## 依赖库 gtest

安装例子如下:

```
git clone https://github.com/google/googletest
cd googletest
checkout release-1.10.0
mkdir build && cd build
# centos 改为 cmake3 ..
cmake ..
make
sudo make install
```

## 配置环境变量

- TENCENTCLOUD_SECRET_ID: API 密钥 SecretId
- TENCENTCLOUD_SECRET_KEY: API 密钥 SecretKey

## 测试
执行以下脚本

```
sh function_test.sh
```

注意：centos 操作系统需要将 `function_test.sh` 中的 cmake 改为 cmake3，或者在环境变量中设置别名 alias。
