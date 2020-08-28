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
cmake ..
make
sudo make install
```

# 使用 C++ SDK 示例
以下 cvm 产品的 DescribeInstances 接口为例：

```
#include <iostream>
#include <tencentcloud/core/TencentCloud.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/cvm/v20170312/CvmClient.h>
#include <tencentcloud/cvm/v20170312/model/DescribeInstancesRequest.h>
#include <tencentcloud/cvm/v20170312/model/DescribeInstancesResponse.h>
#include <tencentcloud/cvm/v20170312/model/Instance.h>

#include <string>
#include <vector>

using namespace TencentCloud;
using namespace TencentCloud::Cvm::V20170312;
using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

int main()
{
    // 必须调用初始化函数
    TencentCloud::InitAPI();

    // use the sdk

    string secretId = "<Your-secretId>";
    string secretKey = "<Your-secertKey>";
    Credential cred = Credential(secretId, secretKey);

    DescribeInstancesRequest req = DescribeInstancesRequest();
   
    Filter respFilter;
    respFilter.SetName("zone");
    respFilter.SetValues({ "ap-guangzhou-1", "ap-guangzhou-2" });
    req.SetFilters({ respFilter });
    req.SetOffset(0);
    req.SetLimit(5);

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

    vector<Instance> instanceSet = rsp.GetInstanceSet();
    for (auto itr=instanceSet.begin(); itr!=instanceSet.end(); ++itr)
    {
        cout<<(*itr).GetPlacement().GetZone()<<endl;
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
cmake ..
make
./DescribeInstances
```

如果报错动态库找不到，可指定动态库路径，例如，如果 libtencentcloud-sdk-cpp-core.so 安装到了 /usr/local/lib 路径下：

```
export LD_LIBRARY_PATH=/usr/local/lib:$LD_LIBRARY_PATH
./DescribeInstances
```

更多例子请参考 example 目录。

# 单元测试
## 依赖库 gtest

安装例子如下:

```
git clone https://github.com/google/googletest
cd googletest
cmake CMakeLists.txt
make
```

将生成的 libgtest.a libgtest_main.a 静态库，以及 gtest 的头文件，拷贝到系统目录下。

## 配置环境变量
- ENV_SecretId: 密钥 ID
- ENV_SecretKey: 密钥 Key

## 测试
执行以下脚本

```
sh function_test.sh
```
