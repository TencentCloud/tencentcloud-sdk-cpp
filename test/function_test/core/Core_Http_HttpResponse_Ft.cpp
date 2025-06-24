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

#include <tencentcloud/core/http/HttpResponse.h>

#include <gtest/gtest.h>

using namespace TencentCloud;

TEST(HttpResponseTest, DefaultConstructor) {
    HttpResponse res;
    EXPECT_EQ(res.GetStatusCode(), -1);
    EXPECT_TRUE(res.Headers().empty());
    EXPECT_FALSE(res.HasBody());
}

TEST(HttpResponseTest, StatusCodeSettingAndGetting) {
    HttpResponse res;
    res.SetStatusCode(200);
    EXPECT_EQ(res.GetStatusCode(), 200);

    res.SetStatusCode(403);
    EXPECT_EQ(res.GetStatusCode(), 403);

    res.SetStatusCode(-1);
    EXPECT_EQ(res.GetStatusCode(), -1);
}

TEST(HttpResponseTest, InheritedHttpFunctionality) {
    HttpResponse res;
    res.AddHeader("X-Test-Header", "value");
    EXPECT_EQ(res.Header("X-Test-Header"), "value");

    res.SetBody("test response body");
    EXPECT_TRUE(res.HasBody());
    EXPECT_EQ(res.BodySize(), 18);
    EXPECT_STREQ(res.Body(), "test response body");
}