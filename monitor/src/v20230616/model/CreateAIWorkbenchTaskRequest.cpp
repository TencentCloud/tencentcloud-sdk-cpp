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

#include <tencentcloud/monitor/v20230616/model/CreateAIWorkbenchTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Monitor::V20230616::Model;
using namespace std;

CreateAIWorkbenchTaskRequest::CreateAIWorkbenchTaskRequest() :
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_agentIdHasBeenSet(false),
    m_promptTemplateHasBeenSet(false),
    m_outputFormatHasBeenSet(false),
    m_triggerTypeHasBeenSet(false),
    m_cronExprHasBeenSet(false),
    m_cronTimezoneHasBeenSet(false),
    m_resourceMapIdHasBeenSet(false),
    m_skillIdsHasBeenSet(false),
    m_mcpEndpointIdsHasBeenSet(false),
    m_timeoutSecHasBeenSet(false),
    m_retryCountHasBeenSet(false),
    m_enabledHasBeenSet(false)
{
}

string CreateAIWorkbenchTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_agentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_agentId.c_str(), allocator).Move(), allocator);
    }

    if (m_promptTemplateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PromptTemplate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_promptTemplate.c_str(), allocator).Move(), allocator);
    }

    if (m_outputFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputFormat";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_outputFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_triggerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_triggerType.c_str(), allocator).Move(), allocator);
    }

    if (m_cronExprHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CronExpr";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cronExpr.c_str(), allocator).Move(), allocator);
    }

    if (m_cronTimezoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CronTimezone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cronTimezone.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceMapIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceMapId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceMapId.c_str(), allocator).Move(), allocator);
    }

    if (m_skillIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkillIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_skillIds.begin(); itr != m_skillIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_mcpEndpointIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "McpEndpointIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_mcpEndpointIds.begin(); itr != m_mcpEndpointIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_timeoutSecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeoutSec";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeoutSec, allocator);
    }

    if (m_retryCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetryCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_retryCount, allocator);
    }

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enabled, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateAIWorkbenchTaskRequest::GetName() const
{
    return m_name;
}

void CreateAIWorkbenchTaskRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateAIWorkbenchTaskRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateAIWorkbenchTaskRequest::GetDescription() const
{
    return m_description;
}

void CreateAIWorkbenchTaskRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateAIWorkbenchTaskRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string CreateAIWorkbenchTaskRequest::GetAgentId() const
{
    return m_agentId;
}

void CreateAIWorkbenchTaskRequest::SetAgentId(const string& _agentId)
{
    m_agentId = _agentId;
    m_agentIdHasBeenSet = true;
}

bool CreateAIWorkbenchTaskRequest::AgentIdHasBeenSet() const
{
    return m_agentIdHasBeenSet;
}

string CreateAIWorkbenchTaskRequest::GetPromptTemplate() const
{
    return m_promptTemplate;
}

void CreateAIWorkbenchTaskRequest::SetPromptTemplate(const string& _promptTemplate)
{
    m_promptTemplate = _promptTemplate;
    m_promptTemplateHasBeenSet = true;
}

bool CreateAIWorkbenchTaskRequest::PromptTemplateHasBeenSet() const
{
    return m_promptTemplateHasBeenSet;
}

string CreateAIWorkbenchTaskRequest::GetOutputFormat() const
{
    return m_outputFormat;
}

void CreateAIWorkbenchTaskRequest::SetOutputFormat(const string& _outputFormat)
{
    m_outputFormat = _outputFormat;
    m_outputFormatHasBeenSet = true;
}

bool CreateAIWorkbenchTaskRequest::OutputFormatHasBeenSet() const
{
    return m_outputFormatHasBeenSet;
}

string CreateAIWorkbenchTaskRequest::GetTriggerType() const
{
    return m_triggerType;
}

void CreateAIWorkbenchTaskRequest::SetTriggerType(const string& _triggerType)
{
    m_triggerType = _triggerType;
    m_triggerTypeHasBeenSet = true;
}

bool CreateAIWorkbenchTaskRequest::TriggerTypeHasBeenSet() const
{
    return m_triggerTypeHasBeenSet;
}

string CreateAIWorkbenchTaskRequest::GetCronExpr() const
{
    return m_cronExpr;
}

void CreateAIWorkbenchTaskRequest::SetCronExpr(const string& _cronExpr)
{
    m_cronExpr = _cronExpr;
    m_cronExprHasBeenSet = true;
}

bool CreateAIWorkbenchTaskRequest::CronExprHasBeenSet() const
{
    return m_cronExprHasBeenSet;
}

string CreateAIWorkbenchTaskRequest::GetCronTimezone() const
{
    return m_cronTimezone;
}

void CreateAIWorkbenchTaskRequest::SetCronTimezone(const string& _cronTimezone)
{
    m_cronTimezone = _cronTimezone;
    m_cronTimezoneHasBeenSet = true;
}

bool CreateAIWorkbenchTaskRequest::CronTimezoneHasBeenSet() const
{
    return m_cronTimezoneHasBeenSet;
}

string CreateAIWorkbenchTaskRequest::GetResourceMapId() const
{
    return m_resourceMapId;
}

void CreateAIWorkbenchTaskRequest::SetResourceMapId(const string& _resourceMapId)
{
    m_resourceMapId = _resourceMapId;
    m_resourceMapIdHasBeenSet = true;
}

bool CreateAIWorkbenchTaskRequest::ResourceMapIdHasBeenSet() const
{
    return m_resourceMapIdHasBeenSet;
}

vector<string> CreateAIWorkbenchTaskRequest::GetSkillIds() const
{
    return m_skillIds;
}

void CreateAIWorkbenchTaskRequest::SetSkillIds(const vector<string>& _skillIds)
{
    m_skillIds = _skillIds;
    m_skillIdsHasBeenSet = true;
}

bool CreateAIWorkbenchTaskRequest::SkillIdsHasBeenSet() const
{
    return m_skillIdsHasBeenSet;
}

vector<string> CreateAIWorkbenchTaskRequest::GetMcpEndpointIds() const
{
    return m_mcpEndpointIds;
}

void CreateAIWorkbenchTaskRequest::SetMcpEndpointIds(const vector<string>& _mcpEndpointIds)
{
    m_mcpEndpointIds = _mcpEndpointIds;
    m_mcpEndpointIdsHasBeenSet = true;
}

bool CreateAIWorkbenchTaskRequest::McpEndpointIdsHasBeenSet() const
{
    return m_mcpEndpointIdsHasBeenSet;
}

int64_t CreateAIWorkbenchTaskRequest::GetTimeoutSec() const
{
    return m_timeoutSec;
}

void CreateAIWorkbenchTaskRequest::SetTimeoutSec(const int64_t& _timeoutSec)
{
    m_timeoutSec = _timeoutSec;
    m_timeoutSecHasBeenSet = true;
}

bool CreateAIWorkbenchTaskRequest::TimeoutSecHasBeenSet() const
{
    return m_timeoutSecHasBeenSet;
}

int64_t CreateAIWorkbenchTaskRequest::GetRetryCount() const
{
    return m_retryCount;
}

void CreateAIWorkbenchTaskRequest::SetRetryCount(const int64_t& _retryCount)
{
    m_retryCount = _retryCount;
    m_retryCountHasBeenSet = true;
}

bool CreateAIWorkbenchTaskRequest::RetryCountHasBeenSet() const
{
    return m_retryCountHasBeenSet;
}

bool CreateAIWorkbenchTaskRequest::GetEnabled() const
{
    return m_enabled;
}

void CreateAIWorkbenchTaskRequest::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool CreateAIWorkbenchTaskRequest::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}


