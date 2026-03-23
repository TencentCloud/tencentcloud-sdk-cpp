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

#include <tencentcloud/apis/v20240801/model/ToolConfigDTO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apis::V20240801::Model;
using namespace std;

ToolConfigDTO::ToolConfigDTO() :
    m_toolNameHasBeenSet(false),
    m_invokeLimitConfigStatusHasBeenSet(false),
    m_invokeLimitConfigHasBeenSet(false),
    m_mcpSecurityRulesHasBeenSet(false)
{
}

CoreInternalOutcome ToolConfigDTO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ToolName") && !value["ToolName"].IsNull())
    {
        if (!value["ToolName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ToolConfigDTO.ToolName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_toolName = string(value["ToolName"].GetString());
        m_toolNameHasBeenSet = true;
    }

    if (value.HasMember("InvokeLimitConfigStatus") && !value["InvokeLimitConfigStatus"].IsNull())
    {
        if (!value["InvokeLimitConfigStatus"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ToolConfigDTO.InvokeLimitConfigStatus` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_invokeLimitConfigStatus = value["InvokeLimitConfigStatus"].GetBool();
        m_invokeLimitConfigStatusHasBeenSet = true;
    }

    if (value.HasMember("InvokeLimitConfig") && !value["InvokeLimitConfig"].IsNull())
    {
        if (!value["InvokeLimitConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ToolConfigDTO.InvokeLimitConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_invokeLimitConfig.Deserialize(value["InvokeLimitConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_invokeLimitConfigHasBeenSet = true;
    }

    if (value.HasMember("McpSecurityRules") && !value["McpSecurityRules"].IsNull())
    {
        if (!value["McpSecurityRules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ToolConfigDTO.McpSecurityRules` is not array type"));

        const rapidjson::Value &tmpValue = value["McpSecurityRules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BindMcpSecurityRuleDTO item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_mcpSecurityRules.push_back(item);
        }
        m_mcpSecurityRulesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ToolConfigDTO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_toolNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToolName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_toolName.c_str(), allocator).Move(), allocator);
    }

    if (m_invokeLimitConfigStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvokeLimitConfigStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_invokeLimitConfigStatus, allocator);
    }

    if (m_invokeLimitConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvokeLimitConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_invokeLimitConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_mcpSecurityRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "McpSecurityRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_mcpSecurityRules.begin(); itr != m_mcpSecurityRules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ToolConfigDTO::GetToolName() const
{
    return m_toolName;
}

void ToolConfigDTO::SetToolName(const string& _toolName)
{
    m_toolName = _toolName;
    m_toolNameHasBeenSet = true;
}

bool ToolConfigDTO::ToolNameHasBeenSet() const
{
    return m_toolNameHasBeenSet;
}

bool ToolConfigDTO::GetInvokeLimitConfigStatus() const
{
    return m_invokeLimitConfigStatus;
}

void ToolConfigDTO::SetInvokeLimitConfigStatus(const bool& _invokeLimitConfigStatus)
{
    m_invokeLimitConfigStatus = _invokeLimitConfigStatus;
    m_invokeLimitConfigStatusHasBeenSet = true;
}

bool ToolConfigDTO::InvokeLimitConfigStatusHasBeenSet() const
{
    return m_invokeLimitConfigStatusHasBeenSet;
}

InvokeLimitConfigDTO ToolConfigDTO::GetInvokeLimitConfig() const
{
    return m_invokeLimitConfig;
}

void ToolConfigDTO::SetInvokeLimitConfig(const InvokeLimitConfigDTO& _invokeLimitConfig)
{
    m_invokeLimitConfig = _invokeLimitConfig;
    m_invokeLimitConfigHasBeenSet = true;
}

bool ToolConfigDTO::InvokeLimitConfigHasBeenSet() const
{
    return m_invokeLimitConfigHasBeenSet;
}

vector<BindMcpSecurityRuleDTO> ToolConfigDTO::GetMcpSecurityRules() const
{
    return m_mcpSecurityRules;
}

void ToolConfigDTO::SetMcpSecurityRules(const vector<BindMcpSecurityRuleDTO>& _mcpSecurityRules)
{
    m_mcpSecurityRules = _mcpSecurityRules;
    m_mcpSecurityRulesHasBeenSet = true;
}

bool ToolConfigDTO::McpSecurityRulesHasBeenSet() const
{
    return m_mcpSecurityRulesHasBeenSet;
}

