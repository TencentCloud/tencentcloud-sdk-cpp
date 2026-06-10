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
    // Negative index is always out of range.
    EXPECT_EQ(DomainFailoverManager::GetFallbackEndpoint(
                  primary, "ap-guangzhou.tencentcloudapi.com", -1),
              "");
    // With BackupEndpoint set, only index 0 is valid.
    EXPECT_EQ(DomainFailoverManager::GetFallbackEndpoint(
                  primary, "ap-guangzhou.tencentcloudapi.com", 3),
              "");
    EXPECT_EQ(DomainFailoverManager::GetFallbackEndpoint(
                  primary, "ap-guangzhou.tencentcloudapi.com", 999),
              "");
    // Without BackupEndpoint, index 0 returns "" (skip) and index >= 3
    // is out of range.
    EXPECT_EQ(DomainFailoverManager::GetFallbackEndpoint(primary, "", 3), "");
    EXPECT_EQ(DomainFailoverManager::GetFallbackEndpoint(primary, "", 999), "");
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

TEST(DomainFailoverManagerTest, BackupEndpointDoesNotPreserveAiMiddle) {
    // Aligns with Go SDK: only service name is prepended, middle
    // segments (ai/internal) are NOT automatically carried over.
    // If user wants ai in backup, they should provide a complete domain.
    string result = DomainFailoverManager::GetFallbackEndpoint(
        "hunyuan.ai.ap-shanghai.tencentcloudapi.com",
        "ap-guangzhou.tencentcloudapi.com",
        0);
    EXPECT_EQ(result, "hunyuan.ap-guangzhou.tencentcloudapi.com");
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
// TLD fallback only works when BackupEndpoint is NOT set AND primary has no region.

TEST(DomainFailoverManagerTest, TldFallbackFromComGoesToComCn) {
    // Ring: .com → .com.cn → .cn.  Primary .com, no region → next = .com.cn.
    string result = DomainFailoverManager::GetFallbackEndpoint(
        "cvm.tencentcloudapi.com",
        "",  // no backup -> TLD fallback mode
        1);
    EXPECT_EQ(result, "cvm.tencentcloudapi.com.cn");
}

TEST(DomainFailoverManagerTest, TldFallbackFromComCnGoesToCn) {
    // Ring: .com.cn → .cn → .com.  Primary .com.cn, no region → next = .cn.
    string result = DomainFailoverManager::GetFallbackEndpoint(
        "cvm.tencentcloudapi.com.cn",
        "",  // no backup -> TLD fallback mode
        1);
    EXPECT_EQ(result, "cvm.tencentcloudapi.cn");
}

TEST(DomainFailoverManagerTest, TldFallbackFromCnGoesToCom) {
    // Ring: .cn → .com → .com.cn.  Primary .cn, no region → next = .com.
    string result = DomainFailoverManager::GetFallbackEndpoint(
        "cvm.tencentcloudapi.cn",
        "",  // no backup -> TLD fallback mode
        1);
    EXPECT_EQ(result, "cvm.tencentcloudapi.com");
}

TEST(DomainFailoverManagerTest, TldFallbackPreservesAiMiddle) {
    // ai domain without region: TLD fallback should work.
    string result = DomainFailoverManager::GetFallbackEndpoint(
        "hunyuan.ai.tencentcloudapi.com",
        "",  // no backup -> TLD fallback mode
        1);
    EXPECT_EQ(result, "hunyuan.ai.tencentcloudapi.com.cn");
}

TEST(DomainFailoverManagerTest, TldFallbackFromNonRegionalPrimary) {
    string result = DomainFailoverManager::GetFallbackEndpoint(
        "cvm.tencentcloudapi.com",
        "",  // no backup -> TLD fallback mode
        1);
    EXPECT_EQ(result, "cvm.tencentcloudapi.com.cn");
}

TEST(DomainFailoverManagerTest, TldFallbackSuppressedWhenRegionPresent) {
    // Primary has a region segment → no TLD fallback (would change geography).
    EXPECT_EQ(DomainFailoverManager::GetFallbackEndpoint(
        "cvm.ap-shanghai.tencentcloudapi.com", "", 1), "");
    EXPECT_EQ(DomainFailoverManager::GetFallbackEndpoint(
        "cvm.ap-shanghai.tencentcloudapi.com", "", 2), "");
    EXPECT_EQ(DomainFailoverManager::GetFallbackEndpoint(
        "cvm.ap-shanghai.tencentcloudapi.com.cn", "", 1), "");
    EXPECT_EQ(DomainFailoverManager::GetFallbackEndpoint(
        "cvm.ap-shanghai.tencentcloudapi.cn", "", 1), "");
    // ai + region → also suppressed.
    EXPECT_EQ(DomainFailoverManager::GetFallbackEndpoint(
        "hunyuan.ai.ap-shanghai.tencentcloudapi.com", "", 1), "");
    EXPECT_EQ(DomainFailoverManager::GetFallbackEndpoint(
        "hunyuan.ai.ap-shanghai.tencentcloudapi.com", "", 2), "");
}

// ===== Index 2: TLD ring fallback (second TLD after primary) =====

TEST(DomainFailoverManagerTest, TldFallback2FromComGoesToCn) {
    // Ring: .com → .com.cn → .cn.  Primary .com, no region → second = .cn.
    string result = DomainFailoverManager::GetFallbackEndpoint(
        "cvm.tencentcloudapi.com",
        "",  // no backup -> TLD fallback mode
        2);
    EXPECT_EQ(result, "cvm.tencentcloudapi.cn");
}

TEST(DomainFailoverManagerTest, TldFallback2FromComCnGoesToCom) {
    // Ring: .com.cn → .cn → .com.  Primary .com.cn, no region → second = .com.
    string result = DomainFailoverManager::GetFallbackEndpoint(
        "cvm.tencentcloudapi.com.cn",
        "",  // no backup -> TLD fallback mode
        2);
    EXPECT_EQ(result, "cvm.tencentcloudapi.com");
}

TEST(DomainFailoverManagerTest, TldFallback2FromCnGoesToComCn) {
    // Ring: .cn → .com → .com.cn.  Primary .cn, no region → second = .com.cn.
    string result = DomainFailoverManager::GetFallbackEndpoint(
        "cvm.tencentcloudapi.cn",
        "",  // no backup -> TLD fallback mode
        2);
    EXPECT_EQ(result, "cvm.tencentcloudapi.com.cn");
}

TEST(DomainFailoverManagerTest, TldFallback2PreservesAiMiddle) {
    // ai domain without region: TLD fallback should work.
    string result = DomainFailoverManager::GetFallbackEndpoint(
        "hunyuan.ai.tencentcloudapi.com",
        "",  // no backup -> TLD fallback mode
        2);
    EXPECT_EQ(result, "hunyuan.ai.tencentcloudapi.cn");
}

// ===== Mutual exclusion: BackupEndpoint set → no TLD fallback =====

TEST(DomainFailoverManagerTest, BackupEndpointSetBlocksTldFallback) {
    // When BackupEndpoint is configured, index 1 and 2 must return ""
    // (no TLD fallback).
    string primary = "cvm.ap-shanghai.tencentcloudapi.com";
    string backup = "ap-guangzhou.tencentcloudapi.com";
    EXPECT_EQ(DomainFailoverManager::GetFallbackEndpoint(primary, backup, 1), "");
    EXPECT_EQ(DomainFailoverManager::GetFallbackEndpoint(primary, backup, 2), "");
}

TEST(DomainFailoverManagerTest, BackupEndpointSetBlocksTldFallbackAiDomain) {
    string primary = "hunyuan.ai.ap-shanghai.tencentcloudapi.com";
    string backup = "ap-guangzhou.tencentcloudapi.com";
    EXPECT_EQ(DomainFailoverManager::GetFallbackEndpoint(primary, backup, 1), "");
    EXPECT_EQ(DomainFailoverManager::GetFallbackEndpoint(primary, backup, 2), "");
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

TEST(DomainFailoverManagerTest, IsTencentCloudDomainCaseInsensitive) {
    // RFC 4343: domain names are case-insensitive.
    EXPECT_TRUE(DomainFailoverManager::IsTencentCloudDomain("CVM.TencentCloudApi.COM"));
    EXPECT_TRUE(DomainFailoverManager::IsTencentCloudDomain("CVM.TENCENTCLOUDAPI.COM.CN"));
    EXPECT_TRUE(DomainFailoverManager::IsTencentCloudDomain("cvm.TencentCloudApi.Cn"));
}

TEST(DomainFailoverManagerTest, ExtractTldCaseInsensitive) {
    EXPECT_EQ(DomainFailoverManager::ExtractTld("CVM.TencentCloudApi.COM"),
              "tencentcloudapi.com");
    EXPECT_EQ(DomainFailoverManager::ExtractTld("cvm.TENCENTCLOUDAPI.COM.CN"),
              "tencentcloudapi.com.cn");
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

TEST(DomainFailoverManagerTest, ExtractMiddleSegmentForInternalDomains) {
    // "internal" is recognized as a middle segment (network route marker).
    EXPECT_EQ(DomainFailoverManager::ExtractMiddleSegment(
                  "cvm.internal.tencentcloudapi.com", "tencentcloudapi.com"),
              "internal");
    EXPECT_EQ(DomainFailoverManager::ExtractMiddleSegment(
                  "cvm.internal.ap-shanghai.tencentcloudapi.com",
                  "tencentcloudapi.com"),
              "internal");
}

TEST(DomainFailoverManagerTest, TldFallbackPreservesInternalMiddle) {
    // TLD 降级时 internal 保留（内网线路间切换 TLD）
    string result = DomainFailoverManager::GetFallbackEndpoint(
        "cvm.internal.tencentcloudapi.com",
        "",  // no backup -> TLD fallback mode
        1);
    EXPECT_EQ(result, "cvm.internal.tencentcloudapi.com.cn");

    result = DomainFailoverManager::GetFallbackEndpoint(
        "cvm.internal.tencentcloudapi.com",
        "",
        2);
    EXPECT_EQ(result, "cvm.internal.tencentcloudapi.cn");
}

TEST(DomainFailoverManagerTest, BackupEndpointStripsInternalMiddle) {
    // internal 域名 + 裸地域 backup → 只拼 service（不带 internal）
    string result = DomainFailoverManager::GetFallbackEndpoint(
        "cvm.internal.tencentcloudapi.com",
        "ap-guangzhou.tencentcloudapi.com",
        0);
    EXPECT_EQ(result, "cvm.ap-guangzhou.tencentcloudapi.com");

    // 完整域名作为 backup 时直接返回
    result = DomainFailoverManager::GetFallbackEndpoint(
        "cvm.internal.tencentcloudapi.com",
        "cvm.tencentcloudapi.com",
        0);
    EXPECT_EQ(result, "cvm.tencentcloudapi.com");
}
