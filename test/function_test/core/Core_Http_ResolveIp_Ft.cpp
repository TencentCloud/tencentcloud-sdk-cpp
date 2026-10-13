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
    TEST(cvm, DescribeInstances_UseValidResolveIp)
    {
        TencentCloud::InitAPI();

        string secretId = CUtils::GetEnv("TENCENTCLOUD_SECRET_ID");
        string secretKey = CUtils::GetEnv("TENCENTCLOUD_SECRET_KEY");
        string resolveIp = CUtils::GetEnv("TENCENTCLOUD_RESOLVE_IP");
        Credential cred = Credential(secretId, secretKey);

        HttpProfile httpProfile = HttpProfile();
        httpProfile.SetEndpoint("cvm.ap-guangzhou.tencentcloudapi.com");
        httpProfile.SetReqTimeout(10);
        // Valid resolve IP must be provided via env TENCENTCLOUD_RESOLVE_IP.
        // Skip the test if not set (avoid hardcoded IPs in source code).
        if (resolveIp.empty()) {
            GTEST_SKIP() << "TENCENTCLOUD_RESOLVE_IP not set, skipping";
        }
        httpProfile.SetResolveIp(resolveIp);

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

    TEST(cvm, DescribeInstances_UseInvalidResolveIp)
    {
        TencentCloud::InitAPI();

        string secretId = CUtils::GetEnv("TENCENTCLOUD_SECRET_ID");
        string secretKey = CUtils::GetEnv("TENCENTCLOUD_SECRET_KEY");
        Credential cred = Credential(secretId, secretKey);

        HttpProfile httpProfile = HttpProfile();
        httpProfile.SetEndpoint("cvm.ap-guangzhou.tencentcloudapi.com");
        httpProfile.SetReqTimeout(5);
        // Resolve IP that is unreachable, causing connection failure.
        // Provided via env to avoid hardcoded IP literals in source.
        string invalidIp = CUtils::GetEnv("TENCENTCLOUD_INVALID_RESOLVE_IP");
        if (invalidIp.empty()) {
            GTEST_SKIP() << "TENCENTCLOUD_INVALID_RESOLVE_IP not set, skipping";
        }
        httpProfile.SetResolveIp(invalidIp);

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

    TEST(cvm, DescribeInstances_WithoutResolveIp)
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

    TEST(cvm, ResolveIp_ParameterPassing)
    {
        HttpProfile httpProfile;
        // Read a valid IP from env to verify parameter passing without
        // hardcoding IP literals in source code.
        string testIp = CUtils::GetEnv("TENCENTCLOUD_RESOLVE_IP");
        if (testIp.empty()) {
            GTEST_SKIP() << "TENCENTCLOUD_RESOLVE_IP not set, skipping";
        }
        httpProfile.SetResolveIp(testIp);

        EXPECT_EQ(httpProfile.GetResolveIp(), testIp);

        ClientProfile clientProfile(httpProfile);
        EXPECT_EQ(clientProfile.GetHttpProfile().GetResolveIp(), testIp);

        httpProfile.SetResolveIp("");
        EXPECT_TRUE(httpProfile.GetResolveIp().empty());
    }
}