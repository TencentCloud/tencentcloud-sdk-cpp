/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/cngw/v20230418/model/AIGWMCPSessionConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

AIGWMCPSessionConfig::AIGWMCPSessionConfig() :
    m_sessionStorageHasBeenSet(false),
    m_redisConfigHasBeenSet(false)
{
}

CoreInternalOutcome AIGWMCPSessionConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SessionStorage") && !value["SessionStorage"].IsNull())
    {
        if (!value["SessionStorage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWMCPSessionConfig.SessionStorage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionStorage = string(value["SessionStorage"].GetString());
        m_sessionStorageHasBeenSet = true;
    }

    if (value.HasMember("RedisConfig") && !value["RedisConfig"].IsNull())
    {
        if (!value["RedisConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWMCPSessionConfig.RedisConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_redisConfig.Deserialize(value["RedisConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_redisConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AIGWMCPSessionConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sessionStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionStorage.c_str(), allocator).Move(), allocator);
    }

    if (m_redisConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RedisConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_redisConfig.ToJsonObject(value[key.c_str()], allocator);
    }

}


string AIGWMCPSessionConfig::GetSessionStorage() const
{
    return m_sessionStorage;
}

void AIGWMCPSessionConfig::SetSessionStorage(const string& _sessionStorage)
{
    m_sessionStorage = _sessionStorage;
    m_sessionStorageHasBeenSet = true;
}

bool AIGWMCPSessionConfig::SessionStorageHasBeenSet() const
{
    return m_sessionStorageHasBeenSet;
}

AIGWRedisConfig AIGWMCPSessionConfig::GetRedisConfig() const
{
    return m_redisConfig;
}

void AIGWMCPSessionConfig::SetRedisConfig(const AIGWRedisConfig& _redisConfig)
{
    m_redisConfig = _redisConfig;
    m_redisConfigHasBeenSet = true;
}

bool AIGWMCPSessionConfig::RedisConfigHasBeenSet() const
{
    return m_redisConfigHasBeenSet;
}

