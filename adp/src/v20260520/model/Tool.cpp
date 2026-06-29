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

#include <tencentcloud/adp/v20260520/model/Tool.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

Tool::Tool() :
    m_billingHasBeenSet(false),
    m_callCountHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_pluginIdHasBeenSet(false),
    m_toolAccessModeHasBeenSet(false),
    m_toolConfigHasBeenSet(false),
    m_toolIdHasBeenSet(false)
{
}

CoreInternalOutcome Tool::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Billing") && !value["Billing"].IsNull())
    {
        if (!value["Billing"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Tool.Billing` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_billing.Deserialize(value["Billing"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_billingHasBeenSet = true;
    }

    if (value.HasMember("CallCount") && !value["CallCount"].IsNull())
    {
        if (!value["CallCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Tool.CallCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_callCount = value["CallCount"].GetUint64();
        m_callCountHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Tool.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Tool.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("PluginId") && !value["PluginId"].IsNull())
    {
        if (!value["PluginId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Tool.PluginId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pluginId = string(value["PluginId"].GetString());
        m_pluginIdHasBeenSet = true;
    }

    if (value.HasMember("ToolAccessMode") && !value["ToolAccessMode"].IsNull())
    {
        if (!value["ToolAccessMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Tool.ToolAccessMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_toolAccessMode = value["ToolAccessMode"].GetInt64();
        m_toolAccessModeHasBeenSet = true;
    }

    if (value.HasMember("ToolConfig") && !value["ToolConfig"].IsNull())
    {
        if (!value["ToolConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Tool.ToolConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_toolConfig.Deserialize(value["ToolConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_toolConfigHasBeenSet = true;
    }

    if (value.HasMember("ToolId") && !value["ToolId"].IsNull())
    {
        if (!value["ToolId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Tool.ToolId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_toolId = string(value["ToolId"].GetString());
        m_toolIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Tool::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_billingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Billing";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_billing.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_callCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_callCount, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_pluginIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PluginId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pluginId.c_str(), allocator).Move(), allocator);
    }

    if (m_toolAccessModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToolAccessMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_toolAccessMode, allocator);
    }

    if (m_toolConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToolConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_toolConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_toolIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToolId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_toolId.c_str(), allocator).Move(), allocator);
    }

}


ToolBilling Tool::GetBilling() const
{
    return m_billing;
}

void Tool::SetBilling(const ToolBilling& _billing)
{
    m_billing = _billing;
    m_billingHasBeenSet = true;
}

bool Tool::BillingHasBeenSet() const
{
    return m_billingHasBeenSet;
}

uint64_t Tool::GetCallCount() const
{
    return m_callCount;
}

void Tool::SetCallCount(const uint64_t& _callCount)
{
    m_callCount = _callCount;
    m_callCountHasBeenSet = true;
}

bool Tool::CallCountHasBeenSet() const
{
    return m_callCountHasBeenSet;
}

string Tool::GetDescription() const
{
    return m_description;
}

void Tool::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool Tool::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string Tool::GetName() const
{
    return m_name;
}

void Tool::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Tool::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string Tool::GetPluginId() const
{
    return m_pluginId;
}

void Tool::SetPluginId(const string& _pluginId)
{
    m_pluginId = _pluginId;
    m_pluginIdHasBeenSet = true;
}

bool Tool::PluginIdHasBeenSet() const
{
    return m_pluginIdHasBeenSet;
}

int64_t Tool::GetToolAccessMode() const
{
    return m_toolAccessMode;
}

void Tool::SetToolAccessMode(const int64_t& _toolAccessMode)
{
    m_toolAccessMode = _toolAccessMode;
    m_toolAccessModeHasBeenSet = true;
}

bool Tool::ToolAccessModeHasBeenSet() const
{
    return m_toolAccessModeHasBeenSet;
}

ToolConfig Tool::GetToolConfig() const
{
    return m_toolConfig;
}

void Tool::SetToolConfig(const ToolConfig& _toolConfig)
{
    m_toolConfig = _toolConfig;
    m_toolConfigHasBeenSet = true;
}

bool Tool::ToolConfigHasBeenSet() const
{
    return m_toolConfigHasBeenSet;
}

string Tool::GetToolId() const
{
    return m_toolId;
}

void Tool::SetToolId(const string& _toolId)
{
    m_toolId = _toolId;
    m_toolIdHasBeenSet = true;
}

bool Tool::ToolIdHasBeenSet() const
{
    return m_toolIdHasBeenSet;
}

