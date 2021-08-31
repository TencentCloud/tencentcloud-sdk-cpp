# 简介
欢迎使用腾讯云开发者工具套件（SDK）3.0，SDK3.0是云 API3.0 平台的配套工具。目前已经支持cvm、vpc、cbs等产品，后续所有的云服务产品都会接入进来。新版SDK实现了统一化，具有各个语言版本的SDK使用方法相同，接口调用方式相同，统一的错误码和返回包格式这些优点。
为方便 C++ 开发者调试和接入腾讯云产品 API，这里向您介绍适用于 C++ 的腾讯云开发工具包，并提供首次使用开发工具包的简单示例。让您快速获取腾讯云 C++ SDK 并开始调用。

# 环境依赖

## 开通产品和密钥获取
1. 从 腾讯云控制台 开通相应产品。
2. 获取 SecretID、SecretKey 以及调用地址（endpoint），endpoint 一般形式为\*.tencentcloudapi.com，如CVM 的调用地址为 cvm.tencentcloudapi.com，具体参考各产品说明。

## 编译器
* 安装支持 C++ 11 或更高版本的编译器：GCC 4.8 或以上版本
* 暂时仅支持 Linux 环境，不支持 Windows 环境

## 编译工具
- [cmake](https://cmake.org/)

安装 cmake 3.0 或以上版本，例如：

```
ubuntu
sudo apt-get install cmake

centos
yum install cmake3
```

## 依赖库

- [libcurl](https://curl.haxx.se/libcurl/)

安装例子如下:

```
ubuntu
sudo apt-get install libcurl4-openssl-dev

centos
yum install libcurl-devel
```

备注：建议安装最新版的 libcurl 库，否则可能存在 libcurl 库内存泄露 bug 问题。

- [openssl](https://www.openssl.org/)

安装例子如下:

```
ubuntu
sudo apt-get install libssl-dev

centos
yum install openssl-devel
```

- libuuid

安装例子如下:

```
ubuntu
sudo apt-get install uuid-dev

centos
yum install libuuid-devel
```

# 从源代码构建 SDK

1. 前往 [Github 代码托管地址](https://github.com/tencentcloud/tencentcloud-sdk-cpp) 下载最新代码
2. 进入 SDK 创建生成必要的构建文件

```
cd <path/to/tencentcloud-sdk-cpp>
mkdir sdk_build
cd sdk_build
# centos 下使用 cmake3 ..
cmake ..
make
sudo make install
```

通过修改 SDK 根目录下的 `CMakeLists.txt` 可以控制部分编译行为
1. 生成静态库文件：修改 `option(BUILD_SHARED_LIBS  "Enable shared library" ON)` 将 ON 改为 OFF。删除 `sdk_build` 目录，重新执行编译。
2. 关闭不需要产品的编译，例如云服务器 cvm：注释掉 `add_subdirectory(cvm)`，改为 `#add_subdirectory(cvm)`

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

using namespace TencentCloud;
using namespace TencentCloud::Cvm::V20170312;
using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

int main()
{
    TencentCloud::InitAPI();

    // 前往 https://console.cloud.tencent.com/cam/capi 获取 API 密钥 SecretId SecretKey
    Credential cred = Credential("YourSecretId", "YourSecretKey");

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
    // 实例化一个认证对象，入参需要传入腾讯云账户 SecretId 和 SecretKey, 切勿将密钥泄露给他人
    // 前往 https://console.cloud.tencent.com/cam/capi 获取 API 密钥 SecretId SecretKey
    Credential cred = Credential("YourSecretId, YourSecretKey");

    // 实例化一个http选项，可选的，没有特殊需求可以跳过。
    HttpProfile httpProfile = HttpProfile();
    httpProfile.SetKeepAlive(true);  // 状态保持，默认是False
    httpProfile.SetEndpoint("cvm.ap-guangzhou.tencentcloudapi.com");  // 指定接入地域域名(默认就近接入)
    httpProfile.SetReqTimeout(30);  // 请求超时时间，单位为秒(默认60秒)
    httpProfile.SetConnectTimeout(30); // 响应超时时间，单位是秒(默认是60秒)

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
target_link_libraries(DescribeInstances tencentcloud-sdk-cpp-cvm tencentcloud-sdk-cpp-core -lcrypto -lcurl -luuid)
target_link_libraries(DescribeInstancesAsync tencentcloud-sdk-cpp-cvm tencentcloud-sdk-cpp-core -lcrypto -lcurl -luuid)
```

更多例子请参考 example 目录。

## Common Client调用方式
从`3.0.297`开始，腾讯云 C++ SDK 支持使用`泛用型的API调用方式(Common Client)`进行请求。您只需安装 tencentcloud-sdk-cpp-core 基础依赖库, 即可向任何产品发起调用。

**注意，您必须明确知道您调用的接口所需参数，否则可能会调用失败。**

Common Client参考[example](https://github.com/TencentCloud/tencentcloud-sdk-cpp/blob/master/example/common_client/DescribeInstances.cpp)

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
