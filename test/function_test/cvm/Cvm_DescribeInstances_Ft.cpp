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
#include <tencentcloud/cvm/v20170312/CvmClient.h>
#include <tencentcloud/cvm/v20170312/model/DescribeInstancesRequest.h>
#include <tencentcloud/cvm/v20170312/model/DescribeInstancesResponse.h>
#include <tencentcloud/cvm/v20170312/model/Instance.h>

#include <iostream>
#include <string>
#include "../utils.h"
#include "gtest/gtest.h"

using namespace TencentCloud;
using namespace TencentCloud::Cvm::V20170312;
using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

namespace
{
    TEST(cvm, DescribeInstances)
    {
        TencentCloud::InitAPI();

        // use the sdk

        string secretId = CUtils::GetEnv("TENCENTCLOUD_SECRET_ID");
        string secretKey = CUtils::GetEnv("TENCENTCLOUD_SECRET_KEY");
        Credential cred = Credential(secretId, secretKey);

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
