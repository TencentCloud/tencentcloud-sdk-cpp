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

#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/profile/RegionBreakerProfile.h>
#include <tencentcloud/core/Credential.h>

#include <gtest/gtest.h>
#include <memory>
#include <string>

using namespace TencentCloud;
using namespace std;

namespace {

// Exposes protected breaker helpers for deterministic testing.
class TestableClient : public AbstractClient {
 public:
    explicit TestableClient(const ClientProfile &p)
        : AbstractClient("cvm.tencentcloudapi.com", "2017-03-12",
                         Credential("id", "key"), "ap-guangzhou", p) {}
    using AbstractClient::BreakerFor;
    using AbstractClient::SelectEndpoint;
    using AbstractClient::ReportResult;
    using AbstractClient::EndpointDecision;
};

// max_fail_num=1 -> a single failure trips the breaker.
ClientProfile MakeProfile(const string &backup, bool disabled = false) {
    RegionBreakerProfile rb(backup, 1, 0.0, 300, 60, 1);
    ClientProfile cp;
    cp.SetDisableRegionBreaker(disabled);
    cp.SetRegionBreakerProfile(rb);
    return cp;
}

void Trip(TestableClient &c, const string &origin, const string &host) {
    std::shared_ptr<CircuitBreaker> b = c.BreakerFor(origin, host);
    ASSERT_TRUE(b->Allow());
    b->Report(false);
    ASSERT_EQ(b->GetState(), CircuitBreaker::State::kOpen);
}

const char *kP   = "cvm.tencentcloudapi.com";
const char *kFb1 = "cvm.tencentcloudapi.com.cn";
const char *kFb2 = "cvm.tencentcloudapi.cn";  // bottom (no breaker)

}  // namespace

TEST(AbstractClientBreakerTest, BreakerForReusesSameInstance) {
    TestableClient c(MakeProfile(""));
    EXPECT_EQ(c.BreakerFor(kP, kP), c.BreakerFor(kP, kP));
}

TEST(AbstractClientBreakerTest, BreakerStateIsolatedAcrossOriginHosts) {
    TestableClient c(MakeProfile(""));
    Trip(c, kP, kP);
    std::shared_ptr<CircuitBreaker> cls =
        c.BreakerFor("cls.tencentcloudapi.com", "cls.tencentcloudapi.com");
    EXPECT_EQ(cls->GetState(), CircuitBreaker::State::kClosed);
}

TEST(AbstractClientBreakerTest, SelectsPrimaryWhenAllClosed) {
    TestableClient c(MakeProfile(""));
    TestableClient::EndpointDecision d = c.SelectEndpoint(kP);
    EXPECT_EQ(d.host, kP);
    EXPECT_NE(d.breaker, nullptr);
}

TEST(AbstractClientBreakerTest, DescendsToNextCandidateInOrder) {
    TestableClient c(MakeProfile(""));
    Trip(c, kP, kP);
    TestableClient::EndpointDecision d = c.SelectEndpoint(kP);
    EXPECT_EQ(d.host, kFb1);
    EXPECT_NE(d.breaker, nullptr);
}

TEST(AbstractClientBreakerTest, FrontCandidatesOpenFallsToBottomNoReport) {
    TestableClient c(MakeProfile(""));
    Trip(c, kP, kP);
    Trip(c, kP, kFb1);  // kFb2 is the bottom, has no breaker
    TestableClient::EndpointDecision d = c.SelectEndpoint(kP);
    EXPECT_EQ(d.host, kFb2);
    EXPECT_EQ(d.breaker, nullptr);
}

TEST(AbstractClientBreakerTest, DisabledBypass) {
    TestableClient c(MakeProfile("", /*disabled=*/true));
    TestableClient::EndpointDecision d = c.SelectEndpoint(kP);
    EXPECT_EQ(d.host, kP);
    EXPECT_EQ(d.breaker, nullptr);
}

TEST(AbstractClientBreakerTest, NonTencentCloudBypass) {
    TestableClient c(MakeProfile(""));
    TestableClient::EndpointDecision d = c.SelectEndpoint("my-proxy.corp.com");
    EXPECT_EQ(d.host, "my-proxy.corp.com");
    EXPECT_EQ(d.breaker, nullptr);
}

TEST(AbstractClientBreakerTest, RegionPrimarySingleCandidateNoReport) {
    TestableClient c(MakeProfile(""));
    TestableClient::EndpointDecision d =
        c.SelectEndpoint("cvm.ap-shanghai.tencentcloudapi.com");
    EXPECT_EQ(d.host, "cvm.ap-shanghai.tencentcloudapi.com");
    EXPECT_EQ(d.breaker, nullptr);
}

TEST(AbstractClientBreakerTest, ReportNullBreakerIsNoop) {
    TestableClient c(MakeProfile(""));
    c.ReportResult(nullptr, false);
    c.ReportResult(nullptr, true);
}
