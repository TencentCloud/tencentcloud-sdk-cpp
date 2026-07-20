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

#include <tencentcloud/adp/v20260520/model/ClawAgentAgentTeamConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

ClawAgentAgentTeamConfig::ClawAgentAgentTeamConfig() :
    m_enabledHasBeenSet(false),
    m_promptContentHasBeenSet(false)
{
}

CoreInternalOutcome ClawAgentAgentTeamConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ClawAgentAgentTeamConfig.Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
    }

    if (value.HasMember("PromptContent") && !value["PromptContent"].IsNull())
    {
        if (!value["PromptContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClawAgentAgentTeamConfig.PromptContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_promptContent = string(value["PromptContent"].GetString());
        m_promptContentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClawAgentAgentTeamConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

    if (m_promptContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PromptContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_promptContent.c_str(), allocator).Move(), allocator);
    }

}


bool ClawAgentAgentTeamConfig::GetEnabled() const
{
    return m_enabled;
}

void ClawAgentAgentTeamConfig::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool ClawAgentAgentTeamConfig::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

string ClawAgentAgentTeamConfig::GetPromptContent() const
{
    return m_promptContent;
}

void ClawAgentAgentTeamConfig::SetPromptContent(const string& _promptContent)
{
    m_promptContent = _promptContent;
    m_promptContentHasBeenSet = true;
}

bool ClawAgentAgentTeamConfig::PromptContentHasBeenSet() const
{
    return m_promptContentHasBeenSet;
}

