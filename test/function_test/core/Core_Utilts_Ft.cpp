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

#include <tencentcloud/core/utils/Utils.h>

#include <gtest/gtest.h>
#include <string>
#include <vector>
#include <sstream>
#include <iomanip>
#include <iostream>

using namespace TencentCloud;

class UtilsTest : public ::testing::Test {};

TEST_F(UtilsTest, Int2StrTest) {
    EXPECT_EQ(Utils::int2str(123), "123");
    EXPECT_EQ(Utils::int2str(-456), "-456");
    EXPECT_EQ(Utils::int2str(0), "0");
    EXPECT_EQ(Utils::int2str(INT64_MAX), "9223372036854775807");
    EXPECT_EQ(Utils::int2str(INT64_MIN), "-9223372036854775808");
}

TEST_F(UtilsTest, GetCurrentTimeAndUtcDateTest) {
    int64_t timestamp;
    std::string utcDate;
    Utils::GetCurrentTimeAndUtcDate(timestamp, utcDate);

    time_t now = time(nullptr);
    struct tm* gmTime = gmtime(&now);
    char expectedDate[20];
    strftime(expectedDate, sizeof(expectedDate), "%Y-%m-%d", gmTime);

    EXPECT_GT(timestamp, 0);
    EXPECT_EQ(utcDate, expectedDate);
}

TEST_F(UtilsTest, HashSha256Test) {
    EXPECT_EQ(Utils::HashSha256("test string"),
              "d5579c46dfcc7f18207013e65b44e4cb4e2c2298f4ac457ba8f82743f31e930b");
    EXPECT_EQ(Utils::HashSha256("hello"),
              "2cf24dba5fb0a30e26e83b2ac5b9e29e1b161e5c1fa7425e73043362938b9824");
    EXPECT_EQ(Utils::HashSha256(""),
              "e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855");
}

TEST_F(UtilsTest, HexEncodeTest) {
    EXPECT_EQ(Utils::HexEncode(""), "");
    EXPECT_EQ(Utils::HexEncode("a"), "61");
    EXPECT_EQ(Utils::HexEncode("ab"), "6162");
    EXPECT_EQ(Utils::HexEncode("Hello, World!"), "48656c6c6f2c20576f726c6421");
}

TEST_F(UtilsTest, GenerateUuidTest) {
    std::string uuid1 = Utils::GenerateUuid();
    std::string uuid2 = Utils::GenerateUuid();

    EXPECT_EQ(uuid1.length(), 36);
    EXPECT_EQ(uuid2.length(), 36);
    EXPECT_NE(uuid1, uuid2);
    EXPECT_TRUE(uuid1.find_first_of("-") != std::string::npos);
    EXPECT_TRUE(uuid2.find_first_of("-") != std::string::npos);
}