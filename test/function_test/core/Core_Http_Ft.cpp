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

#include <tencentcloud/core/http/Http.h>

#include <gtest/gtest.h>
#include <string>
#include <vector>
#include <unordered_map>

using namespace TencentCloud;
using namespace std;

TEST(HttpTest, DefaultConstructor) {
    Http http;
    EXPECT_TRUE(http.Headers().empty());
    EXPECT_FALSE(http.HasBody());
    EXPECT_EQ(http.BodySize(), 0);
    EXPECT_STREQ(http.Body(), "");
}


TEST(HttpTest, HeadersOperations) {
    Http http;

    http.AddHeader("Content-Type", "application/json");
    EXPECT_EQ(http.Header("Content-Type"), "application/json");

    http.AddHeader("Content-Type", "text/plain");
    EXPECT_EQ(http.Header("Content-Type"), "text/plain");

    http.AddHeader("ACCEPT", "application/xml");
    EXPECT_EQ(http.Header("Accept"), "application/xml");
    EXPECT_EQ(http.Header("accept"), "application/xml");
    EXPECT_EQ(http.Header("ACCEPT"), "application/xml");

    http.RemoveHeader("Content-Type");
    EXPECT_TRUE(http.Header("Content-Type").empty());

    auto headers = http.Headers();
    EXPECT_EQ(headers.size(), 1);
    EXPECT_EQ(headers.find("Accept")->second, "application/xml");
}

TEST(HttpTest, CaseInsensitiveHeaders) {
    Http http;

    http.AddHeader("Content-Type", "application/json");
    http.AddHeader("CONTENT-LENGTH", "1024");
    http.AddHeader("User-Agent", "TencentCloudSDK");

    EXPECT_EQ(http.Header("content-type"), "application/json");
    EXPECT_EQ(http.Header("Content-Length"), "1024");
    EXPECT_EQ(http.Header("USER-AGENT"), "TencentCloudSDK");
}

TEST(HttpTest, BodyOperations) {
    Http http;

    EXPECT_FALSE(http.HasBody());
    EXPECT_EQ(http.BodySize(), 0);

    http.SetBody("Hello, World!");
    EXPECT_TRUE(http.HasBody());
    EXPECT_EQ(http.BodySize(), 13);
    EXPECT_STREQ(http.Body(), "Hello, World!");

    http.SetBody("New content");
    EXPECT_EQ(http.BodySize(), 11);
    EXPECT_STREQ(http.Body(), "New content");

    http.SetBody("");
    EXPECT_FALSE(http.HasBody());
    EXPECT_EQ(http.BodySize(), 0);
}

TEST(HttpTest, MassiveHeaders) {
    Http http;
    const int count = 1000;

    for (int i = 0; i < count; ++i) {
        string name = "Header" + to_string(i);
        string value = "Value" + to_string(i);
        http.AddHeader(name, value);
    }

    for (int i = 0; i < count; ++i) {
        string name = "Header" + to_string(i);
        string value = "Value" + to_string(i);
        EXPECT_EQ(http.Header(name), value);
    }

    EXPECT_EQ(http.Headers().size(), count);
}

TEST(HttpTest, EdgeCases) {
    Http http;

    EXPECT_TRUE(http.Header("Non-Existent").empty());

    http.RemoveHeader("Non-Existent");
    EXPECT_TRUE(http.Headers().empty());

    http.AddHeader("", "");
    EXPECT_TRUE(http.Header("").empty());

    http.AddHeader("CoNtEnT-tYpE", "application/json");
    EXPECT_EQ(http.Header("CoNtEnT-tYpE"), "application/json");
}
