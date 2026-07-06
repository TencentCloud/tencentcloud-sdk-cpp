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

#include <tencentcloud/adp/v20260520/model/AgentSummary.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

AgentSummary::AgentSummary() :
    m_agentIdHasBeenSet(false),
    m_profileHasBeenSet(false),
    m_advancedConfigHasBeenSet(false)
{
}

CoreInternalOutcome AgentSummary::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AgentId") && !value["AgentId"].IsNull())
    {
        if (!value["AgentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentSummary.AgentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentId = string(value["AgentId"].GetString());
        m_agentIdHasBeenSet = true;
    }

    if (value.HasMember("Profile") && !value["Profile"].IsNull())
    {
        if (!value["Profile"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AgentSummary.Profile` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_profile.Deserialize(value["Profile"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_profileHasBeenSet = true;
    }

    if (value.HasMember("AdvancedConfig") && !value["AdvancedConfig"].IsNull())
    {
        if (!value["AdvancedConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AgentSummary.AdvancedConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_advancedConfig.Deserialize(value["AdvancedConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_advancedConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgentSummary::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_agentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentId.c_str(), allocator).Move(), allocator);
    }

    if (m_profileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Profile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_profile.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_advancedConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdvancedConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_advancedConfig.ToJsonObject(value[key.c_str()], allocator);
    }

}


string AgentSummary::GetAgentId() const
{
    return m_agentId;
}

void AgentSummary::SetAgentId(const string& _agentId)
{
    m_agentId = _agentId;
    m_agentIdHasBeenSet = true;
}

bool AgentSummary::AgentIdHasBeenSet() const
{
    return m_agentIdHasBeenSet;
}

AgentProfile AgentSummary::GetProfile() const
{
    return m_profile;
}

void AgentSummary::SetProfile(const AgentProfile& _profile)
{
    m_profile = _profile;
    m_profileHasBeenSet = true;
}

bool AgentSummary::ProfileHasBeenSet() const
{
    return m_profileHasBeenSet;
}

AgentAdvancedConfig AgentSummary::GetAdvancedConfig() const
{
    return m_advancedConfig;
}

void AgentSummary::SetAdvancedConfig(const AgentAdvancedConfig& _advancedConfig)
{
    m_advancedConfig = _advancedConfig;
    m_advancedConfigHasBeenSet = true;
}

bool AgentSummary::AdvancedConfigHasBeenSet() const
{
    return m_advancedConfigHasBeenSet;
}

