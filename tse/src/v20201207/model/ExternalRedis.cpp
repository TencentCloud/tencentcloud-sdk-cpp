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

#include <tencentcloud/tse/v20201207/model/ExternalRedis.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

ExternalRedis::ExternalRedis() :
    m_redisHostHasBeenSet(false),
    m_redisPasswordHasBeenSet(false),
    m_redisPortHasBeenSet(false),
    m_redisTimeoutHasBeenSet(false)
{
}

CoreInternalOutcome ExternalRedis::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RedisHost") && !value["RedisHost"].IsNull())
    {
        if (!value["RedisHost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalRedis.RedisHost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_redisHost = string(value["RedisHost"].GetString());
        m_redisHostHasBeenSet = true;
    }

    if (value.HasMember("RedisPassword") && !value["RedisPassword"].IsNull())
    {
        if (!value["RedisPassword"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalRedis.RedisPassword` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_redisPassword = string(value["RedisPassword"].GetString());
        m_redisPasswordHasBeenSet = true;
    }

    if (value.HasMember("RedisPort") && !value["RedisPort"].IsNull())
    {
        if (!value["RedisPort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalRedis.RedisPort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_redisPort = value["RedisPort"].GetInt64();
        m_redisPortHasBeenSet = true;
    }

    if (value.HasMember("RedisTimeout") && !value["RedisTimeout"].IsNull())
    {
        if (!value["RedisTimeout"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalRedis.RedisTimeout` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_redisTimeout = value["RedisTimeout"].GetInt64();
        m_redisTimeoutHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExternalRedis::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_redisHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RedisHost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_redisHost.c_str(), allocator).Move(), allocator);
    }

    if (m_redisPasswordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RedisPassword";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_redisPassword.c_str(), allocator).Move(), allocator);
    }

    if (m_redisPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RedisPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_redisPort, allocator);
    }

    if (m_redisTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RedisTimeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_redisTimeout, allocator);
    }

}


string ExternalRedis::GetRedisHost() const
{
    return m_redisHost;
}

void ExternalRedis::SetRedisHost(const string& _redisHost)
{
    m_redisHost = _redisHost;
    m_redisHostHasBeenSet = true;
}

bool ExternalRedis::RedisHostHasBeenSet() const
{
    return m_redisHostHasBeenSet;
}

string ExternalRedis::GetRedisPassword() const
{
    return m_redisPassword;
}

void ExternalRedis::SetRedisPassword(const string& _redisPassword)
{
    m_redisPassword = _redisPassword;
    m_redisPasswordHasBeenSet = true;
}

bool ExternalRedis::RedisPasswordHasBeenSet() const
{
    return m_redisPasswordHasBeenSet;
}

int64_t ExternalRedis::GetRedisPort() const
{
    return m_redisPort;
}

void ExternalRedis::SetRedisPort(const int64_t& _redisPort)
{
    m_redisPort = _redisPort;
    m_redisPortHasBeenSet = true;
}

bool ExternalRedis::RedisPortHasBeenSet() const
{
    return m_redisPortHasBeenSet;
}

int64_t ExternalRedis::GetRedisTimeout() const
{
    return m_redisTimeout;
}

void ExternalRedis::SetRedisTimeout(const int64_t& _redisTimeout)
{
    m_redisTimeout = _redisTimeout;
    m_redisTimeoutHasBeenSet = true;
}

bool ExternalRedis::RedisTimeoutHasBeenSet() const
{
    return m_redisTimeoutHasBeenSet;
}

