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

#include <tencentcloud/core/http/HttpRequest.h>

#include <gtest/gtest.h>
#include <tencentcloud/core/http/Url.h>

using namespace TencentCloud;
using namespace std;

TEST(HttpRequestTest, DefaultConstructor) {
    HttpRequest request;
    EXPECT_EQ(request.GetMethod(), HttpRequest::POST);
    EXPECT_TRUE(request.GetUrl().GetHost().empty());
    EXPECT_EQ(request.BodySize(), 0);
    EXPECT_TRUE(request.Headers().empty());
}

TEST(HttpRequestTest, ParameterizedConstructor) {
    Url url;
    url.SetHost("api.example.com");
    HttpRequest request(url, HttpRequest::POST);

    EXPECT_EQ(request.GetMethod(), HttpRequest::POST);
    EXPECT_EQ(request.GetUrl().GetHost(), "api.example.com");
}

TEST(HttpRequestTest, MethodOperations) {
    HttpRequest request;
    request.SetMethod(HttpRequest::POST);
    EXPECT_EQ(request.GetMethod(), HttpRequest::POST);
}

TEST(HttpRequestTest, UrlOperations) {
    HttpRequest request;
    Url customUrl;
    customUrl.SetHost("cloud.tencent.com");
    customUrl.SetPath("/api/v1");
    customUrl.SetScheme("https");

    request.SetUrl(customUrl);
    EXPECT_EQ(request.GetUrl().GetHost(), "cloud.tencent.com");
    EXPECT_EQ(request.GetUrl().GetPath(), "/api/v1");
    EXPECT_EQ(request.GetUrl().GetScheme(), "https");
}

TEST(HttpRequestTest, InheritedHttpFunctions) {
    HttpRequest request;

    request.AddHeader("Content-Type", "application/json");
    EXPECT_EQ(request.Header("Content-Type"), "application/json");

    request.SetBody("{\"key\":\"value\"}");
    EXPECT_TRUE(request.HasBody());
    EXPECT_EQ(request.BodySize(), 15);
    EXPECT_STREQ(request.Body(), "{\"key\":\"value\"}");
}

TEST(HttpRequestTest, FullRequestComposition) {
    Url url;
    url.SetHost("api.example.com");
    url.SetPath("/post");

    HttpRequest request(url, HttpRequest::POST);
    request.SetBody("test data");
    request.AddHeader("User-Agent", "TencentCloudSDK");

    EXPECT_EQ(request.GetUrl().ToString(), "https://api.example.com/post");
    EXPECT_EQ(request.Header("User-Agent"), "TencentCloudSDK");
    EXPECT_EQ(string(request.Body()), "test data");
}

TEST(HttpRequestTest, EmptyUrlTest) {
    HttpRequest request;
    EXPECT_TRUE(request.GetUrl().GetHost().empty());
    EXPECT_EQ(request.GetUrl().ToString(), "https:///");
}