/*
 * Copyright (c) 2017-2019 Tencent. All Rights Reserved.
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

#include <tencentcloud/core/DomainFailoverManager.h>

#include <gtest/gtest.h>
#include <string>

using namespace TencentCloud;
using namespace std;

TEST(DomainFailoverManagerTest, BreakerSlotCountIsThree) {
    // primary + BackupEndpoint + .com.cn == 3 slots that need a
    // breaker. The final .cn TLD is the bottom fallback and has no
    // breaker.
    EXPECT_EQ(DomainFailoverManager::GetBreakerSlotCount(), 3);
}

TEST(DomainFailoverManagerTest, NonTencentCloudDomainReturnsEmpty) {
    string result = DomainFailoverManager::GetFallbackEndpoint(
        "my-proxy.corp.com", "ap-guangzhou.tencentcloudapi.com", 0);
    EXPECT_EQ(result, "");
}

TEST(DomainFailoverManagerTest, OutOfRangeIndexReturnsEmpty) {
    string primary = "cvm.tencentcloudapi.com";
    EXPECT_EQ(DomainFailoverManager::GetFallbackEndpoint(
                  primary, "ap-guangzhou.tencentcloudapi.com", -1),
              "");
    EXPECT_EQ(DomainFailoverManager::GetFallbackEndpoint(
                  primary, "ap-guangzhou.tencentcloudapi.com", 3),
              "");
    EXPECT_EQ(DomainFailoverManager::GetFallbackEndpoint(
                  primary, "ap-guangzhou.tencentcloudapi.com", 999),
              "");
}

// ===== Index 0: BackupEndpoint =====

TEST(DomainFailoverManagerTest, BackupEndpointPrependsService) {
    // User-configured BackupEndpoint starts with a region; SDK must
    // prepend the primary endpoint's service name.
    string result = DomainFailoverManager::GetFallbackEndpoint(
        "cvm.ap-shanghai.tencentcloudapi.com",
        "ap-guangzhou.tencentcloudapi.com",
        0);
    EXPECT_EQ(result, "cvm.ap-guangzhou.tencentcloudapi.com");
}

TEST(DomainFailoverManagerTest, BackupEndpointPrependsServiceForNonRegionalPrimary) {
    string result = DomainFailoverManager::GetFallbackEndpoint(
        "cvm.tencentcloudapi.com",
        "ap-guangzhou.tencentcloudapi.com",
        0);
    EXPECT_EQ(result, "cvm.ap-guangzhou.tencentcloudapi.com");
}

TEST(DomainFailoverManagerTest, BackupEndpointPreservesAiMiddleSegment) {
    string result = DomainFailoverManager::GetFallbackEndpoint(
        "hunyuan.ai.ap-shanghai.tencentcloudapi.com",
        "ap-guangzhou.tencentcloudapi.com",
        0);
    EXPECT_EQ(result, "hunyuan.ai.ap-guangzhou.tencentcloudapi.com");
}

TEST(DomainFailoverManagerTest, BackupEndpointWithCompleteDomain) {
    // If backup_endpoint already has a service prefix, keep it as-is.
    string result = DomainFailoverManager::GetFallbackEndpoint(
        "cvm.ap-shanghai.tencentcloudapi.com",
        "cvm.ap-guangzhou.tencentcloudapi.com",
        0);
    EXPECT_EQ(result, "cvm.ap-guangzhou.tencentcloudapi.com");
}

// ===== Index 1: TLD ring fallback (next TLD after primary) =====

TEST(DomainFailoverManagerTest, TldFallbackFromComGoesToComCn) {
    // Ring: .com → .com.cn → .cn.  Primary .com → next = .com.cn.
    string result = DomainFailoverManager::GetFallbackEndpoint(
        "cvm.ap-shanghai.tencentcloudapi.com",
        "ap-guangzhou.tencentcloudapi.com",
        1);
    EXPECT_EQ(result, "cvm.tencentcloudapi.com.cn");
}

TEST(DomainFailoverManagerTest, TldFallbackFromComCnGoesToCn) {
    // Ring: .com.cn → .cn → .com.  Primary .com.cn → next = .cn.
    string result = DomainFailoverManager::GetFallbackEndpoint(
        "cvm.ap-shanghai.tencentcloudapi.com.cn",
        "ap-guangzhou.tencentcloudapi.com",
        1);
    EXPECT_EQ(result, "cvm.tencentcloudapi.cn");
}

TEST(DomainFailoverManagerTest, TldFallbackFromCnGoesToCom) {
    // Ring: .cn → .com → .com.cn.  Primary .cn → next = .com.
    string result = DomainFailoverManager::GetFallbackEndpoint(
        "cvm.ap-shanghai.tencentcloudapi.cn",
        "ap-guangzhou.tencentcloudapi.com",
        1);
    EXPECT_EQ(result, "cvm.tencentcloudapi.com");
}

TEST(DomainFailoverManagerTest, TldFallbackPreservesAiMiddle) {
    string result = DomainFailoverManager::GetFallbackEndpoint(
        "hunyuan.ai.ap-shanghai.tencentcloudapi.com",
        "ap-guangzhou.tencentcloudapi.com",
        1);
    EXPECT_EQ(result, "hunyuan.ai.tencentcloudapi.com.cn");
}

TEST(DomainFailoverManagerTest, TldFallbackFromNonRegionalPrimary) {
    string result = DomainFailoverManager::GetFallbackEndpoint(
        "cvm.tencentcloudapi.com",
        "ap-guangzhou.tencentcloudapi.com",
        1);
    EXPECT_EQ(result, "cvm.tencentcloudapi.com.cn");
}

// ===== Index 2: TLD ring fallback (second TLD after primary) =====

TEST(DomainFailoverManagerTest, TldFallback2FromComGoesToCn) {
    // Ring: .com → .com.cn → .cn.  Primary .com → second = .cn.
    string result = DomainFailoverManager::GetFallbackEndpoint(
        "cvm.ap-shanghai.tencentcloudapi.com",
        "ap-guangzhou.tencentcloudapi.com",
        2);
    EXPECT_EQ(result, "cvm.tencentcloudapi.cn");
}

TEST(DomainFailoverManagerTest, TldFallback2FromComCnGoesToCom) {
    // Ring: .com.cn → .cn → .com.  Primary .com.cn → second = .com.
    string result = DomainFailoverManager::GetFallbackEndpoint(
        "cvm.ap-shanghai.tencentcloudapi.com.cn",
        "ap-guangzhou.tencentcloudapi.com",
        2);
    EXPECT_EQ(result, "cvm.tencentcloudapi.com");
}

TEST(DomainFailoverManagerTest, TldFallback2FromCnGoesToComCn) {
    // Ring: .cn → .com → .com.cn.  Primary .cn → second = .com.cn.
    string result = DomainFailoverManager::GetFallbackEndpoint(
        "cvm.ap-shanghai.tencentcloudapi.cn",
        "ap-guangzhou.tencentcloudapi.com",
        2);
    EXPECT_EQ(result, "cvm.tencentcloudapi.com.cn");
}

TEST(DomainFailoverManagerTest, TldFallback2PreservesAiMiddle) {
    string result = DomainFailoverManager::GetFallbackEndpoint(
        "hunyuan.ai.ap-shanghai.tencentcloudapi.com",
        "ap-guangzhou.tencentcloudapi.com",
        2);
    EXPECT_EQ(result, "hunyuan.ai.tencentcloudapi.cn");
}

// ===== Helper methods =====

TEST(DomainFailoverManagerTest, IsTencentCloudDomain) {
    EXPECT_TRUE(DomainFailoverManager::IsTencentCloudDomain("cvm.tencentcloudapi.com"));
    EXPECT_TRUE(DomainFailoverManager::IsTencentCloudDomain("cvm.tencentcloudapi.com.cn"));
    EXPECT_TRUE(DomainFailoverManager::IsTencentCloudDomain("cvm.tencentcloudapi.cn"));
    EXPECT_FALSE(DomainFailoverManager::IsTencentCloudDomain("my-proxy.corp.com"));
    EXPECT_FALSE(DomainFailoverManager::IsTencentCloudDomain("tencentcloud.com"));
    // Suffix match must require a leading dot to avoid misidentifying
    // look-alike / typo domains.
    EXPECT_FALSE(DomainFailoverManager::IsTencentCloudDomain("tencentcloudapi.comm"));
    EXPECT_FALSE(DomainFailoverManager::IsTencentCloudDomain("tencentcloudapi.company.example.com"));
    EXPECT_FALSE(DomainFailoverManager::IsTencentCloudDomain("faketencentcloudapi.com"));
}

TEST(DomainFailoverManagerTest, ExtractTld) {
    EXPECT_EQ(DomainFailoverManager::ExtractTld("cvm.tencentcloudapi.com"),
              "tencentcloudapi.com");
    EXPECT_EQ(DomainFailoverManager::ExtractTld("cvm.tencentcloudapi.com.cn"),
              "tencentcloudapi.com.cn");
    EXPECT_EQ(DomainFailoverManager::ExtractTld("cvm.tencentcloudapi.cn"),
              "tencentcloudapi.cn");
    EXPECT_EQ(DomainFailoverManager::ExtractTld("my-proxy.corp.com"), "");
    EXPECT_EQ(DomainFailoverManager::ExtractTld("tencentcloudapi.comm"), "");
    EXPECT_EQ(DomainFailoverManager::ExtractTld("tencentcloudapi.company.example.com"), "");
}

TEST(DomainFailoverManagerTest, ExtractService) {
    EXPECT_EQ(DomainFailoverManager::ExtractService("cvm.tencentcloudapi.com"), "cvm");
    EXPECT_EQ(DomainFailoverManager::ExtractService("hunyuan.ai.tencentcloudapi.com"),
              "hunyuan");
    EXPECT_EQ(DomainFailoverManager::ExtractService("no-dot-here"), "no-dot-here");
}

TEST(DomainFailoverManagerTest, ExtractMiddleSegmentForAiDomains) {
    EXPECT_EQ(DomainFailoverManager::ExtractMiddleSegment(
                  "hunyuan.ai.tencentcloudapi.com", "tencentcloudapi.com"),
              "ai");
    EXPECT_EQ(DomainFailoverManager::ExtractMiddleSegment(
                  "hunyuan.ai.ap-guangzhou.tencentcloudapi.com",
                  "tencentcloudapi.com"),
              "ai");
    EXPECT_EQ(DomainFailoverManager::ExtractMiddleSegment(
                  "cvm.tencentcloudapi.com", "tencentcloudapi.com"),
              "");
    EXPECT_EQ(DomainFailoverManager::ExtractMiddleSegment(
                  "cvm.ap-guangzhou.tencentcloudapi.com", "tencentcloudapi.com"),
              "");
}
