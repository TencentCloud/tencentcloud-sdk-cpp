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
        const string resolve_ip = CUtils::GetEnv("TENCENTCLOUD_TEST_RESOLVE_IP");
        if (resolve_ip.empty()) {
            GTEST_SKIP() << "TENCENTCLOUD_TEST_RESOLVE_IP is not configured";
        }

        TencentCloud::InitAPI();

        string secretId = CUtils::GetEnv("TENCENTCLOUD_SECRET_ID");
        string secretKey = CUtils::GetEnv("TENCENTCLOUD_SECRET_KEY");
        Credential cred = Credential(secretId, secretKey);

        HttpProfile httpProfile = HttpProfile();
        httpProfile.SetEndpoint("cvm.ap-guangzhou.tencentcloudapi.com");
        httpProfile.SetReqTimeout(10);
        httpProfile.SetResolveIp(resolve_ip);

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
        const string invalid_resolve_ip = CUtils::GetEnv("TENCENTCLOUD_TEST_INVALID_RESOLVE_IP");
        if (invalid_resolve_ip.empty()) {
            GTEST_SKIP() << "TENCENTCLOUD_TEST_INVALID_RESOLVE_IP is not configured";
        }

        TencentCloud::InitAPI();

        string secretId = CUtils::GetEnv("TENCENTCLOUD_SECRET_ID");
        string secretKey = CUtils::GetEnv("TENCENTCLOUD_SECRET_KEY");
        Credential cred = Credential(secretId, secretKey);

        HttpProfile httpProfile = HttpProfile();
        httpProfile.SetEndpoint("cvm.ap-guangzhou.tencentcloudapi.com");
        httpProfile.SetReqTimeout(5);
        httpProfile.SetResolveIp(invalid_resolve_ip);

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
        const string test_ip = "resolve-ip-parameter-test";
        httpProfile.SetResolveIp(test_ip);

        EXPECT_EQ(httpProfile.GetResolveIp(), test_ip);

        ClientProfile clientProfile(httpProfile);
        EXPECT_EQ(clientProfile.GetHttpProfile().GetResolveIp(), test_ip);

        httpProfile.SetResolveIp("");
        EXPECT_TRUE(httpProfile.GetResolveIp().empty());
    }
}