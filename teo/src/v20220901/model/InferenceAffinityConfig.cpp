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

#include <tencentcloud/teo/v20220901/model/InferenceAffinityConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

InferenceAffinityConfig::InferenceAffinityConfig() :
    m_switchHasBeenSet(false),
    m_affinityModeHasBeenSet(false),
    m_sessionIdAffinityConfigHasBeenSet(false)
{
}

CoreInternalOutcome InferenceAffinityConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceAffinityConfig.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("AffinityMode") && !value["AffinityMode"].IsNull())
    {
        if (!value["AffinityMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceAffinityConfig.AffinityMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_affinityMode = string(value["AffinityMode"].GetString());
        m_affinityModeHasBeenSet = true;
    }

    if (value.HasMember("SessionIdAffinityConfig") && !value["SessionIdAffinityConfig"].IsNull())
    {
        if (!value["SessionIdAffinityConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InferenceAffinityConfig.SessionIdAffinityConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sessionIdAffinityConfig.Deserialize(value["SessionIdAffinityConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sessionIdAffinityConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InferenceAffinityConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_affinityModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AffinityMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_affinityMode.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionIdAffinityConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionIdAffinityConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sessionIdAffinityConfig.ToJsonObject(value[key.c_str()], allocator);
    }

}


string InferenceAffinityConfig::GetSwitch() const
{
    return m_switch;
}

void InferenceAffinityConfig::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool InferenceAffinityConfig::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

string InferenceAffinityConfig::GetAffinityMode() const
{
    return m_affinityMode;
}

void InferenceAffinityConfig::SetAffinityMode(const string& _affinityMode)
{
    m_affinityMode = _affinityMode;
    m_affinityModeHasBeenSet = true;
}

bool InferenceAffinityConfig::AffinityModeHasBeenSet() const
{
    return m_affinityModeHasBeenSet;
}

SessionIdAffinityConfig InferenceAffinityConfig::GetSessionIdAffinityConfig() const
{
    return m_sessionIdAffinityConfig;
}

void InferenceAffinityConfig::SetSessionIdAffinityConfig(const SessionIdAffinityConfig& _sessionIdAffinityConfig)
{
    m_sessionIdAffinityConfig = _sessionIdAffinityConfig;
    m_sessionIdAffinityConfigHasBeenSet = true;
}

bool InferenceAffinityConfig::SessionIdAffinityConfigHasBeenSet() const
{
    return m_sessionIdAffinityConfigHasBeenSet;
}

