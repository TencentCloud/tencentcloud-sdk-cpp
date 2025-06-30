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

#include <tencentcloud/core/profile/HttpProfile.h>

#include <gtest/gtest.h>
#include <memory>

using namespace TencentCloud;

class HttpProfileTest : public ::testing::Test {
protected:
    void SetUp() override {
        profile = std::unique_ptr<HttpProfile>(new HttpProfile());
    }

    std::unique_ptr<HttpProfile> profile;
};

TEST_F(HttpProfileTest, DefaultConstructor) {
    EXPECT_EQ(profile->GetProtocol(), HttpProfile::Scheme::HTTPS);
    EXPECT_EQ(profile->GetReqTimeout(), TM_MINUTE_SECOND);
    EXPECT_EQ(profile->GetConnectTimeout(), TM_MINUTE_SECOND);
    EXPECT_FALSE(profile->IsKeepAlive());
    EXPECT_TRUE(profile->GetEndpoint().empty());
    EXPECT_TRUE(profile->GetCaInfo().empty());
    EXPECT_TRUE(profile->GetCaPath().empty());
}

TEST_F(HttpProfileTest, SetAndGetProtocol) {
    profile->SetProtocol(HttpProfile::Scheme::HTTP);
    EXPECT_EQ(profile->GetProtocol(), HttpProfile::Scheme::HTTP);
}

TEST_F(HttpProfileTest, SetAndGetEndpoint) {
    profile->SetEndpoint("api.example.com");
    EXPECT_EQ(profile->GetEndpoint(), "api.example.com");
}

TEST_F(HttpProfileTest, SetAndGetReqTimeout) {
    profile->SetReqTimeout(120);
    EXPECT_EQ(profile->GetReqTimeout(), 120);
}

TEST_F(HttpProfileTest, SetAndGetConnectTimeout) {
    profile->SetConnectTimeout(30);
    EXPECT_EQ(profile->GetConnectTimeout(), 30);
}

TEST_F(HttpProfileTest, SetAndGetKeepAlive) {
    profile->SetKeepAlive(true);
    EXPECT_TRUE(profile->IsKeepAlive());
}

TEST_F(HttpProfileTest, SetAndGetCaInfo) {
    profile->SetCaInfo("custom_ca_info");
    EXPECT_EQ(profile->GetCaInfo(), "custom_ca_info");
}

TEST_F(HttpProfileTest, SetAndGetCaPath) {
    profile->SetCaPath("/path/to/cert.pem");
    EXPECT_EQ(profile->GetCaPath(), "/path/to/cert.pem");
}

TEST_F(HttpProfileTest, CopyConstructor) {
    profile->SetEndpoint("api.example.com");
    profile->SetProtocol(HttpProfile::Scheme::HTTP);
    profile->SetReqTimeout(120);

    HttpProfile copy(*profile);
    EXPECT_EQ(copy.GetEndpoint(), "api.example.com");
    EXPECT_EQ(copy.GetProtocol(), HttpProfile::Scheme::HTTP);
    EXPECT_EQ(copy.GetReqTimeout(), 120);
}

TEST_F(HttpProfileTest, AssignmentOperator) {
    profile->SetEndpoint("api.example.com");
    profile->SetProtocol(HttpProfile::Scheme::HTTP);

    HttpProfile copy;
    copy = *profile;
    EXPECT_EQ(copy.GetEndpoint(), "api.example.com");
    EXPECT_EQ(copy.GetProtocol(), HttpProfile::Scheme::HTTP);
}

TEST_F(HttpProfileTest, SelfAssignment) {
    profile->SetEndpoint("api.example.com");
    *profile = *profile;
    EXPECT_EQ(profile->GetEndpoint(), "api.example.com");
}