/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/core/TencentCloud.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/CommonClient.h>

#include <iostream>
#include <string>
#include <map>
#include <malloc.h>
#include <string.h>
#include <fstream>  
#include <streambuf> 

using namespace TencentCloud;
using namespace std;

int main()
{
    TencentCloud::InitAPI();

    std::string cloud_secret_id = getenv("TENCENTCLOUD_SECRET_ID");
    std::string cloud_secret_key = getenv("TENCENTCLOUD_SECRET_KEY");
    Credential cred = Credential(cloud_secret_id, cloud_secret_key);

    HttpProfile httpProfile = HttpProfile();
    // 域名首段必须和下文中CommonClient初始化的产品名严格匹配
    httpProfile.SetEndpoint("cls.tencentcloudapi.com");
    httpProfile.SetReqTimeout(5);
    ClientProfile clientProfile = ClientProfile(httpProfile);
    // 实例化要请求的common client对象，clientProfile是可选的。
    CommonClient common_client = CommonClient("cls", "2020-10-16", cred, "ap-guangzhou", clientProfile);

    // 读取二进制文件内容
    std::string body;
    int buffer_len = 0;
    std::ifstream filein("../binary.data", std::ofstream::binary | std::ifstream::ate);
    if (!filein.is_open())
    {
        cout << "fail to open the file" <<endl;
        return -1;
    }
    else
    {
        filein.seekg(0, filein.end);
        buffer_len = static_cast<int>(filein.tellg());
        filein.seekg(0, filein.beg);
        char* buffer = new char[buffer_len];
        filein.read(reinterpret_cast<char*>(buffer), buffer_len);
        body = buffer;
    }
    std::map<std::string, std::string> headers;
    // 使用对应地域下真实存在的日志主题ID
    headers.insert(std::make_pair("X-CLS-TopicId", "f6c4fa6f-367a-4f14-8289-1ff6f77ed975"));
    // 主题分区，https://cloud.tencent.com/document/product/614/39259
    // 取值00000000000000000000000000000000，ffffffffffffffffffffffffffffffff
    headers.insert(std::make_pair("X-CLS-HashKey", "0fffffffffffffffffffffffffffffff"));
    // 压缩类型
    headers.insert(std::make_pair("X-CLS-CompressType", ""));

    auto outcome = common_client.MakeRequestOctetStream("UploadLog", headers, body);
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        cout << payload.c_str() << endl;
    }
    else
    {
        cout << outcome.GetError().PrintAll() << endl;
    }
    filein.close();
    TencentCloud::ShutdownAPI();
    return 0;
}
