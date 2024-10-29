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

#include <tencentcloud/teo/v20220901/model/FollowOrigin.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

FollowOrigin::FollowOrigin() :
    m_switchHasBeenSet(false),
    m_defaultCacheHasBeenSet(false),
    m_defaultCacheStrategyHasBeenSet(false),
    m_defaultCacheTimeHasBeenSet(false)
{
}

CoreInternalOutcome FollowOrigin::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FollowOrigin.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("DefaultCache") && !value["DefaultCache"].IsNull())
    {
        if (!value["DefaultCache"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FollowOrigin.DefaultCache` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defaultCache = string(value["DefaultCache"].GetString());
        m_defaultCacheHasBeenSet = true;
    }

    if (value.HasMember("DefaultCacheStrategy") && !value["DefaultCacheStrategy"].IsNull())
    {
        if (!value["DefaultCacheStrategy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FollowOrigin.DefaultCacheStrategy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defaultCacheStrategy = string(value["DefaultCacheStrategy"].GetString());
        m_defaultCacheStrategyHasBeenSet = true;
    }

    if (value.HasMember("DefaultCacheTime") && !value["DefaultCacheTime"].IsNull())
    {
        if (!value["DefaultCacheTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FollowOrigin.DefaultCacheTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_defaultCacheTime = value["DefaultCacheTime"].GetInt64();
        m_defaultCacheTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FollowOrigin::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_defaultCacheHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultCache";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_defaultCache.c_str(), allocator).Move(), allocator);
    }

    if (m_defaultCacheStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultCacheStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_defaultCacheStrategy.c_str(), allocator).Move(), allocator);
    }

    if (m_defaultCacheTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultCacheTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_defaultCacheTime, allocator);
    }

}


string FollowOrigin::GetSwitch() const
{
    return m_switch;
}

void FollowOrigin::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool FollowOrigin::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

string FollowOrigin::GetDefaultCache() const
{
    return m_defaultCache;
}

void FollowOrigin::SetDefaultCache(const string& _defaultCache)
{
    m_defaultCache = _defaultCache;
    m_defaultCacheHasBeenSet = true;
}

bool FollowOrigin::DefaultCacheHasBeenSet() const
{
    return m_defaultCacheHasBeenSet;
}

string FollowOrigin::GetDefaultCacheStrategy() const
{
    return m_defaultCacheStrategy;
}

void FollowOrigin::SetDefaultCacheStrategy(const string& _defaultCacheStrategy)
{
    m_defaultCacheStrategy = _defaultCacheStrategy;
    m_defaultCacheStrategyHasBeenSet = true;
}

bool FollowOrigin::DefaultCacheStrategyHasBeenSet() const
{
    return m_defaultCacheStrategyHasBeenSet;
}

int64_t FollowOrigin::GetDefaultCacheTime() const
{
    return m_defaultCacheTime;
}

void FollowOrigin::SetDefaultCacheTime(const int64_t& _defaultCacheTime)
{
    m_defaultCacheTime = _defaultCacheTime;
    m_defaultCacheTimeHasBeenSet = true;
}

bool FollowOrigin::DefaultCacheTimeHasBeenSet() const
{
    return m_defaultCacheTimeHasBeenSet;
}

