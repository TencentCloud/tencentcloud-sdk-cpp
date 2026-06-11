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

#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/profile/RegionBreakerProfile.h>

#include <gtest/gtest.h>

using namespace TencentCloud;

TEST(ClientProfileDomainFailoverTest, RegionBreakerEnabledByDefault) {
    // Region failover is enabled by default. Users can opt out by calling
    // SetDisableRegionBreaker(true).
    ClientProfile cp;
    EXPECT_FALSE(cp.GetDisableRegionBreaker());
}

TEST(ClientProfileDomainFailoverTest, EnableDisableRegionBreaker) {
    ClientProfile cp;
    cp.SetDisableRegionBreaker(false);
    EXPECT_FALSE(cp.GetDisableRegionBreaker());
    cp.SetDisableRegionBreaker(true);
    EXPECT_TRUE(cp.GetDisableRegionBreaker());
}

TEST(ClientProfileDomainFailoverTest, DefaultRegionBreakerProfile) {
    // Verify the default RegionBreakerProfile values.
    // BackupEndpoint defaults to empty (user opts in explicitly).
    ClientProfile cp;
    RegionBreakerProfile rb = cp.GetRegionBreakerProfile();
    EXPECT_EQ(rb.GetBackupEndpoint(), "");
    EXPECT_EQ(rb.GetMaxFailNum(), 5);
    EXPECT_DOUBLE_EQ(rb.GetMaxFailPercent(), 0.75);
    EXPECT_EQ(rb.GetWindowInterval(), 300);
    EXPECT_EQ(rb.GetTimeout(), 60);
    EXPECT_EQ(rb.GetMaxRequests(), 5);
}

TEST(ClientProfileDomainFailoverTest, SetCustomRegionBreakerProfile) {
    RegionBreakerProfile rb(
        /*backup_endpoint=*/ "ap-beijing.tencentcloudapi.com",
        /*max_fail_num=*/    3,
        /*max_fail_percent=*/0.5,
        /*window_interval=*/ 60,
        /*timeout=*/         30,
        /*max_requests=*/    3);

    ClientProfile cp;
    cp.SetRegionBreakerProfile(rb);

    RegionBreakerProfile got = cp.GetRegionBreakerProfile();
    EXPECT_EQ(got.GetBackupEndpoint(), "ap-beijing.tencentcloudapi.com");
    EXPECT_EQ(got.GetMaxFailNum(), 3);
    EXPECT_DOUBLE_EQ(got.GetMaxFailPercent(), 0.5);
    EXPECT_EQ(got.GetWindowInterval(), 60);
    EXPECT_EQ(got.GetTimeout(), 30);
    EXPECT_EQ(got.GetMaxRequests(), 3);
}

TEST(ClientProfileDomainFailoverTest, PreservedWithHttpProfileConstructor) {
    HttpProfile hp;
    hp.SetEndpoint("cvm.tencentcloudapi.com");
    ClientProfile cp(hp);
    EXPECT_FALSE(cp.GetDisableRegionBreaker());
}

TEST(ClientProfileDomainFailoverTest, PreservedWithSignMethodConstructor) {
    ClientProfile cp(ClientProfile::SignMethod::TC3_HMAC_SHA256);
    EXPECT_FALSE(cp.GetDisableRegionBreaker());
}
