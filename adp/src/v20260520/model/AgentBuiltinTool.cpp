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

#include <tencentcloud/adp/v20260520/model/AgentBuiltinTool.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

AgentBuiltinTool::AgentBuiltinTool() :
    m_configHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_billingTypeHasBeenSet(false)
{
}

CoreInternalOutcome AgentBuiltinTool::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Config") && !value["Config"].IsNull())
    {
        if (!value["Config"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AgentBuiltinTool.Config` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_config.Deserialize(value["Config"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_configHasBeenSet = true;
    }

    if (value.HasMember("DisplayName") && !value["DisplayName"].IsNull())
    {
        if (!value["DisplayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentBuiltinTool.DisplayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_displayName = string(value["DisplayName"].GetString());
        m_displayNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentBuiltinTool.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("BillingType") && !value["BillingType"].IsNull())
    {
        if (!value["BillingType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentBuiltinTool.BillingType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_billingType = value["BillingType"].GetInt64();
        m_billingTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgentBuiltinTool::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_configHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Config";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_config.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_displayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_displayName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_billingTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillingType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_billingType, allocator);
    }

}


AgentBuiltinToolConfig AgentBuiltinTool::GetConfig() const
{
    return m_config;
}

void AgentBuiltinTool::SetConfig(const AgentBuiltinToolConfig& _config)
{
    m_config = _config;
    m_configHasBeenSet = true;
}

bool AgentBuiltinTool::ConfigHasBeenSet() const
{
    return m_configHasBeenSet;
}

string AgentBuiltinTool::GetDisplayName() const
{
    return m_displayName;
}

void AgentBuiltinTool::SetDisplayName(const string& _displayName)
{
    m_displayName = _displayName;
    m_displayNameHasBeenSet = true;
}

bool AgentBuiltinTool::DisplayNameHasBeenSet() const
{
    return m_displayNameHasBeenSet;
}

string AgentBuiltinTool::GetDescription() const
{
    return m_description;
}

void AgentBuiltinTool::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool AgentBuiltinTool::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t AgentBuiltinTool::GetBillingType() const
{
    return m_billingType;
}

void AgentBuiltinTool::SetBillingType(const int64_t& _billingType)
{
    m_billingType = _billingType;
    m_billingTypeHasBeenSet = true;
}

bool AgentBuiltinTool::BillingTypeHasBeenSet() const
{
    return m_billingTypeHasBeenSet;
}

