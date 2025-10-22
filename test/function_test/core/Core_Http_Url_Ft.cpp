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

#include <tencentcloud/core/http/Url.h>

#include <gtest/gtest.h>
#include <string>

using namespace TencentCloud;
using namespace std;

using namespace TencentCloud;
using namespace std;

TEST(UrlTest, DefaultConstructor) {
    Url url;
    EXPECT_EQ(url.GetScheme(), "https");
    EXPECT_TRUE(url.GetHost().empty());
    EXPECT_EQ(url.GetPath(), "/");
    EXPECT_FALSE(url.HasQuery());
    EXPECT_EQ(url.ToString(), "https:///");
}

TEST(UrlTest, HostOperations) {
    Url url;
    url.SetHost("api.example.com");
    EXPECT_EQ(url.GetHost(), "api.example.com");
    EXPECT_EQ(url.ToString(), "https://api.example.com/");
}

TEST(UrlTest, PathOperations) {
    Url url;
    url.SetPath("/v1/resources");
    EXPECT_EQ(url.GetPath(), "/v1/resources");
    EXPECT_EQ(url.ToString(), "https:///v1/resources");
}

TEST(UrlTest, EmptyPathTest) {
    Url url;
    url.SetPath("");
    EXPECT_TRUE(url.GetPath().empty());
    EXPECT_EQ(url.ToString(), "https:///");
}

TEST(UrlTest, SchemeCustomization) {
    Url url;
    url.SetScheme("http");
    EXPECT_EQ(url.GetScheme(), "http");
    url.SetScheme("ws");
    EXPECT_EQ(url.ToString(), "ws:///");
}

TEST(UrlTest, FullUrlComposition) {
    Url url;
    url.SetScheme("http");
    url.SetHost("cloud.tencent.com");
    url.SetPath("/api");

    EXPECT_EQ(url.ToString(), "http://cloud.tencent.com/api");
}

TEST(UrlTest, HostPathEdgeCases) {
    Url url;

    url.SetHost("host:8080");
    url.SetPath("//double/slash");
    EXPECT_EQ(url.ToString(), "https://host:8080//double/slash");
}