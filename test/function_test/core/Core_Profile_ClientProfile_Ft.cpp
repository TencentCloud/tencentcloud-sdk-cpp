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
#include <tencentcloud/core/profile/ClientProfile.h>

#include <gtest/gtest.h>

using namespace TencentCloud;

class ClientProfileTest : public ::testing::Test {
protected:
    void SetUp() override {
        httpProfile = HttpProfile();
        clientProfile = ClientProfile(ClientProfile::SignMethod::TC3_HMAC_SHA256, httpProfile);
    }

    HttpProfile httpProfile;
    ClientProfile clientProfile;
};

TEST_F(ClientProfileTest, FullConstructor) {
    HttpProfile hp;
    hp.SetEndpoint("api.test.com");
    ClientProfile cp(ClientProfile::SignMethod::TC3_HMAC_SHA256, hp);
    EXPECT_EQ(cp.GetHttpProfile().GetEndpoint(), "api.test.com");
}

TEST_F(ClientProfileTest, HttpProfileConstructor) {
    HttpProfile hp;
    hp.SetConnectTimeout(30);
    ClientProfile cp(hp);
    EXPECT_EQ(cp.GetHttpProfile().GetConnectTimeout(), 30);
}

TEST_F(ClientProfileTest, SetHttpProfile) {
    HttpProfile newHp;
    newHp.SetProtocol(HttpProfile::Scheme::HTTP);
    clientProfile.SetHttpProfile(newHp);
    EXPECT_EQ(clientProfile.GetHttpProfile().GetProtocol(), HttpProfile::Scheme::HTTP);
}

TEST_F(ClientProfileTest, GetHttpProfile) {
    HttpProfile hp = clientProfile.GetHttpProfile();
    EXPECT_EQ(hp.GetReqTimeout(), TM_MINUTE_SECOND);
}