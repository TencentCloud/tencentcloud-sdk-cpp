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

// ===== BuildCandidates =====

TEST(BuildCandidatesTest, ModeB_ComNoRegion) {
    auto c = DomainFailoverManager::BuildCandidates("cvm.tencentcloudapi.com", "");
    ASSERT_EQ(c.size(), 3u);
    EXPECT_EQ(c[0], "cvm.tencentcloudapi.com");
    EXPECT_EQ(c[1], "cvm.tencentcloudapi.com.cn");
    EXPECT_EQ(c[2], "cvm.tencentcloudapi.cn");
}

TEST(BuildCandidatesTest, ModeB_ComCnNoRegion) {
    auto c = DomainFailoverManager::BuildCandidates("cvm.tencentcloudapi.com.cn", "");
    ASSERT_EQ(c.size(), 3u);
    EXPECT_EQ(c[0], "cvm.tencentcloudapi.com.cn");
    EXPECT_EQ(c[1], "cvm.tencentcloudapi.cn");
    EXPECT_EQ(c[2], "cvm.tencentcloudapi.com");
}

TEST(BuildCandidatesTest, ModeB_CnNoRegion) {
    auto c = DomainFailoverManager::BuildCandidates("cvm.tencentcloudapi.cn", "");
    ASSERT_EQ(c.size(), 3u);
    EXPECT_EQ(c[0], "cvm.tencentcloudapi.cn");
    EXPECT_EQ(c[1], "cvm.tencentcloudapi.com");
    EXPECT_EQ(c[2], "cvm.tencentcloudapi.com.cn");
}

TEST(BuildCandidatesTest, ModeB_AiDomainPreservesMiddle) {
    auto c = DomainFailoverManager::BuildCandidates("hunyuan.ai.tencentcloudapi.com", "");
    ASSERT_EQ(c.size(), 3u);
    EXPECT_EQ(c[0], "hunyuan.ai.tencentcloudapi.com");
    EXPECT_EQ(c[1], "hunyuan.ai.tencentcloudapi.com.cn");
    EXPECT_EQ(c[2], "hunyuan.ai.tencentcloudapi.cn");
}

TEST(BuildCandidatesTest, ModeB_InternalDomainPreservesMiddle) {
    auto c = DomainFailoverManager::BuildCandidates("cvm.internal.tencentcloudapi.com", "");
    ASSERT_EQ(c.size(), 3u);
    EXPECT_EQ(c[1], "cvm.internal.tencentcloudapi.com.cn");
    EXPECT_EQ(c[2], "cvm.internal.tencentcloudapi.cn");
}

TEST(BuildCandidatesTest, ModeB_IntlModifierDropped) {
    // intl is recognized but DROPPED on fallback.
    auto c = DomainFailoverManager::BuildCandidates("cvm.intl.tencentcloudapi.com", "");
    ASSERT_EQ(c.size(), 3u);
    EXPECT_EQ(c[0], "cvm.intl.tencentcloudapi.com");
    EXPECT_EQ(c[1], "cvm.tencentcloudapi.com.cn");
    EXPECT_EQ(c[2], "cvm.tencentcloudapi.cn");
}

TEST(BuildCandidatesTest, ModeB_RegionNowFallsBackDroppingRegion) {
    // CHANGED BEHAVIOR: region is no longer suppressed; it falls back
    // dropping the region segment.
    auto c = DomainFailoverManager::BuildCandidates(
        "cvm.ap-shanghai.tencentcloudapi.com", "");
    ASSERT_EQ(c.size(), 3u);
    EXPECT_EQ(c[0], "cvm.ap-shanghai.tencentcloudapi.com");
    EXPECT_EQ(c[1], "cvm.tencentcloudapi.com.cn");
    EXPECT_EQ(c[2], "cvm.tencentcloudapi.cn");
}

TEST(BuildCandidatesTest, ModeB_AiRegionKeepsAiDropsRegion) {
    auto c = DomainFailoverManager::BuildCandidates(
        "cvm.ai.ap-shanghai.tencentcloudapi.com", "");
    ASSERT_EQ(c.size(), 3u);
    EXPECT_EQ(c[1], "cvm.ai.tencentcloudapi.com.cn");
    EXPECT_EQ(c[2], "cvm.ai.tencentcloudapi.cn");
}

TEST(BuildCandidatesTest, ModeB_IntlRegionBothDropped) {
    auto c = DomainFailoverManager::BuildCandidates(
        "cvm.intl.ap-guangzhou.tencentcloudapi.com", "");
    ASSERT_EQ(c.size(), 3u);
    EXPECT_EQ(c[1], "cvm.tencentcloudapi.com.cn");
    EXPECT_EQ(c[2], "cvm.tencentcloudapi.cn");
}

TEST(BuildCandidatesTest, ModeB_ExtremeStackTakesAiDropsRest) {
    auto c = DomainFailoverManager::BuildCandidates(
        "cvm.ai.internal.intl.ap-guangzhou.tencentcloudapi.com", "");
    ASSERT_EQ(c.size(), 3u);
    EXPECT_EQ(c[1], "cvm.ai.tencentcloudapi.com.cn");
    EXPECT_EQ(c[2], "cvm.ai.tencentcloudapi.cn");
}

TEST(BuildCandidatesTest, ModeA_RegionPrimaryWithBareBackup) {
    auto c = DomainFailoverManager::BuildCandidates(
        "cvm.ap-shanghai.tencentcloudapi.com", "ap-guangzhou.tencentcloudapi.com");
    ASSERT_EQ(c.size(), 2u);
    EXPECT_EQ(c[0], "cvm.ap-shanghai.tencentcloudapi.com");
    EXPECT_EQ(c[1], "cvm.ap-guangzhou.tencentcloudapi.com");
}

TEST(BuildCandidatesTest, ModeA_AiRegionBackupDropsAiMiddle) {
    auto c = DomainFailoverManager::BuildCandidates(
        "hunyuan.ai.ap-shanghai.tencentcloudapi.com", "ap-guangzhou.tencentcloudapi.com");
    ASSERT_EQ(c.size(), 2u);
    EXPECT_EQ(c[1], "hunyuan.ap-guangzhou.tencentcloudapi.com");
}

TEST(BuildCandidatesTest, NonTencentCloudDomain) {
    auto c = DomainFailoverManager::BuildCandidates(
        "my-proxy.corp.com", "ap-guangzhou.tencentcloudapi.com");
    ASSERT_EQ(c.size(), 1u);
    EXPECT_EQ(c[0], "my-proxy.corp.com");
}

// ===== ParseEndpoint =====

TEST(ParseEndpointTest, PlainService) {
    auto p = DomainFailoverManager::ParseEndpoint("cvm.tencentcloudapi.com");
    EXPECT_TRUE(p.is_tc_domain);
    EXPECT_EQ(p.service, "cvm");
    EXPECT_EQ(p.modifier, "");
    EXPECT_FALSE(p.modifier_kept);
    EXPECT_EQ(p.tld, "tencentcloudapi.com");
}

TEST(ParseEndpointTest, AiModifierKept) {
    auto p = DomainFailoverManager::ParseEndpoint("hunyuan.ai.tencentcloudapi.com");
    EXPECT_EQ(p.service, "hunyuan");
    EXPECT_EQ(p.modifier, "ai");
    EXPECT_TRUE(p.modifier_kept);
    EXPECT_EQ(p.tld, "tencentcloudapi.com");
}

TEST(ParseEndpointTest, InternalModifierKept) {
    auto p = DomainFailoverManager::ParseEndpoint("cvm.internal.tencentcloudapi.com");
    EXPECT_EQ(p.service, "cvm");
    EXPECT_EQ(p.modifier, "internal");
    EXPECT_TRUE(p.modifier_kept);
}

TEST(ParseEndpointTest, IntlModifierDropped) {
    auto p = DomainFailoverManager::ParseEndpoint("cvm.intl.tencentcloudapi.com");
    EXPECT_EQ(p.service, "cvm");
    EXPECT_EQ(p.modifier, "intl");
    EXPECT_FALSE(p.modifier_kept);  // intl is dropped on fallback
}

TEST(ParseEndpointTest, RegionIsNotAModifier) {
    auto p = DomainFailoverManager::ParseEndpoint("cvm.ap-shanghai.tencentcloudapi.com");
    EXPECT_EQ(p.service, "cvm");
    EXPECT_EQ(p.modifier, "");   // ap-shanghai is region, not a modifier
    EXPECT_EQ(p.tld, "tencentcloudapi.com");
}

TEST(ParseEndpointTest, AiThenRegion) {
    auto p = DomainFailoverManager::ParseEndpoint(
        "cvm.ai.ap-shanghai.tencentcloudapi.com");
    EXPECT_EQ(p.service, "cvm");
    EXPECT_EQ(p.modifier, "ai");      // first middle segment wins
    EXPECT_TRUE(p.modifier_kept);
}

TEST(ParseEndpointTest, ExtremeStackTakesFirstModifierOnly) {
    // Only the FIRST middle segment is considered for modifier (mutually
    // exclusive); everything after is region.
    auto p = DomainFailoverManager::ParseEndpoint(
        "cvm.ai.internal.intl.ap-guangzhou.tencentcloudapi.com");
    EXPECT_EQ(p.service, "cvm");
    EXPECT_EQ(p.modifier, "ai");
    EXPECT_TRUE(p.modifier_kept);
    EXPECT_EQ(p.tld, "tencentcloudapi.com");
}

TEST(ParseEndpointTest, RegionBeforeModifierDropsModifier) {
    // ORDERING CONTRACT: modifier must immediately follow service. Here the
    // first middle segment is "ap-shanghai" (not a modifier), so parsing
    // stops looking -> no modifier; the trailing "ai" is part of region and
    // is dropped on fallback. Reversed input is intentionally unsupported.
    auto p = DomainFailoverManager::ParseEndpoint(
        "cvm.ap-shanghai.ai.tencentcloudapi.com");
    EXPECT_EQ(p.service, "cvm");
    EXPECT_EQ(p.modifier, "");          // ai is NOT recognized (comes after region)
    EXPECT_FALSE(p.modifier_kept);
    EXPECT_EQ(p.tld, "tencentcloudapi.com");
}

TEST(ParseEndpointTest, NonTencentCloud) {
    auto p = DomainFailoverManager::ParseEndpoint("my-proxy.corp.com");
    EXPECT_FALSE(p.is_tc_domain);
}

TEST(ParseEndpointTest, CaseInsensitiveTldAndModifier) {
    auto p = DomainFailoverManager::ParseEndpoint("CVM.AI.TencentCloudApi.COM");
    EXPECT_TRUE(p.is_tc_domain);
    EXPECT_EQ(p.modifier, "ai");           // normalized lower-case
    EXPECT_TRUE(p.modifier_kept);
    EXPECT_EQ(p.tld, "tencentcloudapi.com");
}

// ===== ResolveBackupEndpoint =====

TEST(ResolveBackupEndpointTest, BareRegionPrependsService) {
    EXPECT_EQ(DomainFailoverManager::ResolveBackupEndpoint(
                  "ap-guangzhou.tencentcloudapi.com", "cvm"),
              "cvm.ap-guangzhou.tencentcloudapi.com");
}

TEST(ResolveBackupEndpointTest, CompleteDomainMultiSegmentKeptAsIs) {
    EXPECT_EQ(DomainFailoverManager::ResolveBackupEndpoint(
                  "cvm.ap-guangzhou.tencentcloudapi.com", "cvm"),
              "cvm.ap-guangzhou.tencentcloudapi.com");
}

TEST(ResolveBackupEndpointTest, SingleSegmentEqualsServiceKeptAsIs) {
    EXPECT_EQ(DomainFailoverManager::ResolveBackupEndpoint(
                  "cvm.tencentcloudapi.com", "cvm"),
              "cvm.tencentcloudapi.com");
}

TEST(ResolveBackupEndpointTest, ModifierNotPrepended) {
    // primary service is hunyuan; bare-region backup only gets service,
    // never the ai modifier.
    EXPECT_EQ(DomainFailoverManager::ResolveBackupEndpoint(
                  "ap-guangzhou.tencentcloudapi.com", "hunyuan"),
              "hunyuan.ap-guangzhou.tencentcloudapi.com");
}

TEST(ResolveBackupEndpointTest, NonTencentCloudKeptAsIs) {
    EXPECT_EQ(DomainFailoverManager::ResolveBackupEndpoint(
                  "my-proxy.corp.com", "cvm"),
              "my-proxy.corp.com");
}
