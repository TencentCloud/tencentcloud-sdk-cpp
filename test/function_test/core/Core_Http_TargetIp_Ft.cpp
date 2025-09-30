#include <tencentcloud/core/TencentCloud.h>
#include <tencentcloud/core/profile/HttpProfile.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/cvm/v20170312/CvmClient.h>
#include <tencentcloud/cvm/v20170312/model/DescribeInstancesRequest.h>

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
    TEST(cvm, DescribeInstances_UseValidTargetIp)
    {
        TencentCloud::InitAPI();

        string secretId = CUtils::GetEnv("TENCENTCLOUD_SECRET_ID");
        string secretKey = CUtils::GetEnv("TENCENTCLOUD_SECRET_KEY");
        Credential cred = Credential(secretId, secretKey);

        HttpProfile httpProfile = HttpProfile();
        httpProfile.SetEndpoint("cvm.ap-guangzhou.tencentcloudapi.com");
        httpProfile.SetReqTimeout(10);
        httpProfile.SetTargetIp("106.55.122.199");

        ClientProfile clientProfile = ClientProfile(httpProfile);

        DescribeInstancesRequest req = DescribeInstancesRequest();
        req.SetOffset(0);
        req.SetLimit(5);

        CvmClient cvm_client = CvmClient(cred, "ap-guangzhou", clientProfile);

        auto outcome = cvm_client.DescribeInstances(req);
        EXPECT_TRUE(outcome.IsSuccess());
        EXPECT_TRUE(outcome.GetError().GetErrorCode().empty());
        EXPECT_FALSE(outcome.GetResult().GetRequestId().empty());

        TencentCloud::ShutdownAPI();
    }

    TEST(cvm, DescribeInstances_UseInvalidTargetIp)
    {
        TencentCloud::InitAPI();

        string secretId = CUtils::GetEnv("TENCENTCLOUD_SECRET_ID");
        string secretKey = CUtils::GetEnv("TENCENTCLOUD_SECRET_KEY");
        Credential cred = Credential(secretId, secretKey);

        HttpProfile httpProfile = HttpProfile();
        httpProfile.SetEndpoint("cvm.ap-guangzhou.tencentcloudapi.com");
        httpProfile.SetReqTimeout(5);
        httpProfile.SetTargetIp("192.168.1.1");

        ClientProfile clientProfile = ClientProfile(httpProfile);

        DescribeInstancesRequest req = DescribeInstancesRequest();
        req.SetOffset(0);
        req.SetLimit(5);

        CvmClient cvm_client = CvmClient(cred, "ap-guangzhou", clientProfile);

        auto outcome = cvm_client.DescribeInstances(req);
        EXPECT_FALSE(outcome.IsSuccess());
        EXPECT_FALSE(outcome.GetError().GetErrorCode().empty());

        TencentCloud::ShutdownAPI();
    }

    TEST(cvm, DescribeInstances_WithoutTargetIp)
    {
        TencentCloud::InitAPI();

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
        EXPECT_FALSE(outcome.GetResult().GetRequestId().empty());

        TencentCloud::ShutdownAPI();
    }

    TEST(cvm, TargetIp_ParameterPassing)
    {
        HttpProfile httpProfile;
        string testIp = "106.55.122.199";
        httpProfile.SetTargetIp(testIp);

        EXPECT_EQ(httpProfile.GetTargetIp(), testIp);

        ClientProfile clientProfile(httpProfile);
        EXPECT_EQ(clientProfile.GetHttpProfile().GetTargetIp(), testIp);

        httpProfile.SetTargetIp("");
        EXPECT_TRUE(httpProfile.GetTargetIp().empty());
    }
}
