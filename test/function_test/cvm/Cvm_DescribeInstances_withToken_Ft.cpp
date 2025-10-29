/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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
#include <tencentcloud/sts/v20180813/StsClient.h>
#include <tencentcloud/sts/v20180813/model/GetFederationTokenRequest.h>
#include <tencentcloud/sts/v20180813/model/GetFederationTokenResponse.h>
#include <tencentcloud/cvm/v20170312/CvmClient.h>
#include <tencentcloud/cvm/v20170312/model/DescribeInstancesRequest.h>
#include <tencentcloud/cvm/v20170312/model/DescribeInstancesResponse.h>
#include <tencentcloud/cvm/v20170312/model/Instance.h>
#include <iostream>
#include <string>
#include <vector>
#include "../utils.h"
#include "gtest/gtest.h"

using namespace TencentCloud;
using namespace TencentCloud::Sts::V20180813;
using namespace TencentCloud::Sts::V20180813::Model;
using namespace TencentCloud::Cvm::V20170312;
using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

GetFederationTokenResponse GetStsToken() {
    TencentCloud::InitAPI();
    GetFederationTokenResponse resp;
    string empty_token = "";
    Credential cred = Credential(getenv("TENCENTCLOUD_SECRET_ID"), getenv("TENCENTCLOUD_SECRET_KEY"), empty_token);

    HttpProfile httpProfile = HttpProfile();
    httpProfile.SetEndpoint("sts.tencentcloudapi.com");


    ClientProfile clientProfile = ClientProfile();
    clientProfile.SetHttpProfile(httpProfile);

    StsClient client = StsClient(cred, "ap-guangzhou", clientProfile);

    GetFederationTokenRequest req = GetFederationTokenRequest();
    req.SetName("test");
    req.SetPolicy("{\"version\":\"2.0\",\"statement\":[{\"effect\":\"allow\",\"action\":[\"*\"],\"resource\":[\"*\"]}]}");
    req.SetDurationSeconds(30);

    auto outcome = client.GetFederationToken(req);
    if (!outcome.IsSuccess())
    {
        TencentCloud::ShutdownAPI();
        cout << outcome.GetError().PrintAll() << endl;
        return resp;
    }
    resp = outcome.GetResult();
    cout << resp.ToJsonString() << endl;

    TencentCloud::ShutdownAPI();
    return resp;
}

namespace
{
    TEST(cvm, DescribeInstancesWithToken)
    {
        TencentCloud::InitAPI();

        GetFederationTokenResponse stsToken = GetStsToken();

        EXPECT_FALSE(stsToken.GetCredentials().GetTmpSecretId().empty());
        EXPECT_FALSE(stsToken.GetCredentials().GetTmpSecretKey().empty());
        EXPECT_FALSE(stsToken.GetCredentials().GetToken().empty());

        Credential cred = Credential(stsToken.GetCredentials().GetTmpSecretId(), stsToken.GetCredentials().GetTmpSecretKey(), stsToken.GetCredentials().GetToken());

        HttpProfile httpProfile = HttpProfile();
        httpProfile.SetEndpoint("cvm.ap-guangzhou.tencentcloudapi.com");
        httpProfile.SetReqTimeout(5);

        ClientProfile clientProfile = ClientProfile(httpProfile);

        DescribeInstancesRequest req = DescribeInstancesRequest();
        req.SetOffset(0);
        req.SetLimit(5);

        CvmClient cvm_client = CvmClient(cred, "ap-guangzhou", clientProfile);

        auto outcome = cvm_client.DescribeInstances(req);
        EXPECT_TRUE(outcome.IsSuccess());
        EXPECT_TRUE(outcome.GetError().GetErrorCode().empty());
        EXPECT_TRUE(outcome.GetResult().InstanceSetHasBeenSet());

        TencentCloud::ShutdownAPI();
    }
}