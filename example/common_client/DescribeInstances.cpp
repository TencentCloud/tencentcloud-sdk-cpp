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
#include <tencentcloud/core/profile/HttpProfile.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/NetworkProxy.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/core/CommonClient.h>

#include <iostream>
#include <string>

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
    httpProfile.SetEndpoint("cvm.tencentcloudapi.com");
    httpProfile.SetReqTimeout(5);

    ClientProfile clientProfile = ClientProfile(httpProfile);
    // 实例化要请求的common client对象，clientProfile是可选的。
    CommonClient common_client = CommonClient("cvm", "2017-03-12", cred, "ap-shanghai", clientProfile);

    auto outcome = common_client.MakeRequestJson("DescribeInstances", "{\"Limit\": 10}");

    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        cout << payload.c_str() << endl;
    }
    else
    {
        cout << outcome.GetError().PrintAll() << endl;
        return -1;
    }
    TencentCloud::ShutdownAPI();

    return 0;
}
