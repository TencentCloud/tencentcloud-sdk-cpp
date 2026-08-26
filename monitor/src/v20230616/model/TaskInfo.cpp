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

#include <tencentcloud/monitor/v20230616/model/TaskInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20230616::Model;
using namespace std;

TaskInfo::TaskInfo() :
    m_taskIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_agentIdHasBeenSet(false),
    m_promptTemplateHasBeenSet(false),
    m_outputFormatHasBeenSet(false),
    m_triggerTypeHasBeenSet(false),
    m_cronExprHasBeenSet(false),
    m_cronTimezoneHasBeenSet(false),
    m_skillIdsHasBeenSet(false),
    m_mcpEndpointIdsHasBeenSet(false),
    m_timeoutSecHasBeenSet(false),
    m_retryCountHasBeenSet(false),
    m_notifyIdsHasBeenSet(false),
    m_enabledHasBeenSet(false)
{
}

CoreInternalOutcome TaskInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfo.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("AgentId") && !value["AgentId"].IsNull())
    {
        if (!value["AgentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfo.AgentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentId = string(value["AgentId"].GetString());
        m_agentIdHasBeenSet = true;
    }

    if (value.HasMember("PromptTemplate") && !value["PromptTemplate"].IsNull())
    {
        if (!value["PromptTemplate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfo.PromptTemplate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_promptTemplate = string(value["PromptTemplate"].GetString());
        m_promptTemplateHasBeenSet = true;
    }

    if (value.HasMember("OutputFormat") && !value["OutputFormat"].IsNull())
    {
        if (!value["OutputFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfo.OutputFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputFormat = string(value["OutputFormat"].GetString());
        m_outputFormatHasBeenSet = true;
    }

    if (value.HasMember("TriggerType") && !value["TriggerType"].IsNull())
    {
        if (!value["TriggerType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfo.TriggerType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_triggerType = string(value["TriggerType"].GetString());
        m_triggerTypeHasBeenSet = true;
    }

    if (value.HasMember("CronExpr") && !value["CronExpr"].IsNull())
    {
        if (!value["CronExpr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfo.CronExpr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cronExpr = string(value["CronExpr"].GetString());
        m_cronExprHasBeenSet = true;
    }

    if (value.HasMember("CronTimezone") && !value["CronTimezone"].IsNull())
    {
        if (!value["CronTimezone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfo.CronTimezone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cronTimezone = string(value["CronTimezone"].GetString());
        m_cronTimezoneHasBeenSet = true;
    }

    if (value.HasMember("SkillIds") && !value["SkillIds"].IsNull())
    {
        if (!value["SkillIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskInfo.SkillIds` is not array type"));

        const rapidjson::Value &tmpValue = value["SkillIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_skillIds.push_back((*itr).GetString());
        }
        m_skillIdsHasBeenSet = true;
    }

    if (value.HasMember("McpEndpointIds") && !value["McpEndpointIds"].IsNull())
    {
        if (!value["McpEndpointIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskInfo.McpEndpointIds` is not array type"));

        const rapidjson::Value &tmpValue = value["McpEndpointIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_mcpEndpointIds.push_back((*itr).GetString());
        }
        m_mcpEndpointIdsHasBeenSet = true;
    }

    if (value.HasMember("TimeoutSec") && !value["TimeoutSec"].IsNull())
    {
        if (!value["TimeoutSec"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfo.TimeoutSec` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timeoutSec = value["TimeoutSec"].GetInt64();
        m_timeoutSecHasBeenSet = true;
    }

    if (value.HasMember("RetryCount") && !value["RetryCount"].IsNull())
    {
        if (!value["RetryCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfo.RetryCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_retryCount = value["RetryCount"].GetInt64();
        m_retryCountHasBeenSet = true;
    }

    if (value.HasMember("NotifyIds") && !value["NotifyIds"].IsNull())
    {
        if (!value["NotifyIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskInfo.NotifyIds` is not array type"));

        const rapidjson::Value &tmpValue = value["NotifyIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_notifyIds.push_back((*itr).GetString());
        }
        m_notifyIdsHasBeenSet = true;
    }

    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfo.Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_agentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentId.c_str(), allocator).Move(), allocator);
    }

    if (m_promptTemplateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PromptTemplate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_promptTemplate.c_str(), allocator).Move(), allocator);
    }

    if (m_outputFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outputFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_triggerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_triggerType.c_str(), allocator).Move(), allocator);
    }

    if (m_cronExprHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CronExpr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cronExpr.c_str(), allocator).Move(), allocator);
    }

    if (m_cronTimezoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CronTimezone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cronTimezone.c_str(), allocator).Move(), allocator);
    }

    if (m_skillIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkillIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_skillIds.begin(); itr != m_skillIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_mcpEndpointIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "McpEndpointIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_mcpEndpointIds.begin(); itr != m_mcpEndpointIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_timeoutSecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeoutSec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeoutSec, allocator);
    }

    if (m_retryCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetryCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retryCount, allocator);
    }

    if (m_notifyIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotifyIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_notifyIds.begin(); itr != m_notifyIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

}


string TaskInfo::GetTaskId() const
{
    return m_taskId;
}

void TaskInfo::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool TaskInfo::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string TaskInfo::GetName() const
{
    return m_name;
}

void TaskInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool TaskInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string TaskInfo::GetDescription() const
{
    return m_description;
}

void TaskInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool TaskInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string TaskInfo::GetAgentId() const
{
    return m_agentId;
}

void TaskInfo::SetAgentId(const string& _agentId)
{
    m_agentId = _agentId;
    m_agentIdHasBeenSet = true;
}

bool TaskInfo::AgentIdHasBeenSet() const
{
    return m_agentIdHasBeenSet;
}

string TaskInfo::GetPromptTemplate() const
{
    return m_promptTemplate;
}

void TaskInfo::SetPromptTemplate(const string& _promptTemplate)
{
    m_promptTemplate = _promptTemplate;
    m_promptTemplateHasBeenSet = true;
}

bool TaskInfo::PromptTemplateHasBeenSet() const
{
    return m_promptTemplateHasBeenSet;
}

string TaskInfo::GetOutputFormat() const
{
    return m_outputFormat;
}

void TaskInfo::SetOutputFormat(const string& _outputFormat)
{
    m_outputFormat = _outputFormat;
    m_outputFormatHasBeenSet = true;
}

bool TaskInfo::OutputFormatHasBeenSet() const
{
    return m_outputFormatHasBeenSet;
}

string TaskInfo::GetTriggerType() const
{
    return m_triggerType;
}

void TaskInfo::SetTriggerType(const string& _triggerType)
{
    m_triggerType = _triggerType;
    m_triggerTypeHasBeenSet = true;
}

bool TaskInfo::TriggerTypeHasBeenSet() const
{
    return m_triggerTypeHasBeenSet;
}

string TaskInfo::GetCronExpr() const
{
    return m_cronExpr;
}

void TaskInfo::SetCronExpr(const string& _cronExpr)
{
    m_cronExpr = _cronExpr;
    m_cronExprHasBeenSet = true;
}

bool TaskInfo::CronExprHasBeenSet() const
{
    return m_cronExprHasBeenSet;
}

string TaskInfo::GetCronTimezone() const
{
    return m_cronTimezone;
}

void TaskInfo::SetCronTimezone(const string& _cronTimezone)
{
    m_cronTimezone = _cronTimezone;
    m_cronTimezoneHasBeenSet = true;
}

bool TaskInfo::CronTimezoneHasBeenSet() const
{
    return m_cronTimezoneHasBeenSet;
}

vector<string> TaskInfo::GetSkillIds() const
{
    return m_skillIds;
}

void TaskInfo::SetSkillIds(const vector<string>& _skillIds)
{
    m_skillIds = _skillIds;
    m_skillIdsHasBeenSet = true;
}

bool TaskInfo::SkillIdsHasBeenSet() const
{
    return m_skillIdsHasBeenSet;
}

vector<string> TaskInfo::GetMcpEndpointIds() const
{
    return m_mcpEndpointIds;
}

void TaskInfo::SetMcpEndpointIds(const vector<string>& _mcpEndpointIds)
{
    m_mcpEndpointIds = _mcpEndpointIds;
    m_mcpEndpointIdsHasBeenSet = true;
}

bool TaskInfo::McpEndpointIdsHasBeenSet() const
{
    return m_mcpEndpointIdsHasBeenSet;
}

int64_t TaskInfo::GetTimeoutSec() const
{
    return m_timeoutSec;
}

void TaskInfo::SetTimeoutSec(const int64_t& _timeoutSec)
{
    m_timeoutSec = _timeoutSec;
    m_timeoutSecHasBeenSet = true;
}

bool TaskInfo::TimeoutSecHasBeenSet() const
{
    return m_timeoutSecHasBeenSet;
}

int64_t TaskInfo::GetRetryCount() const
{
    return m_retryCount;
}

void TaskInfo::SetRetryCount(const int64_t& _retryCount)
{
    m_retryCount = _retryCount;
    m_retryCountHasBeenSet = true;
}

bool TaskInfo::RetryCountHasBeenSet() const
{
    return m_retryCountHasBeenSet;
}

vector<string> TaskInfo::GetNotifyIds() const
{
    return m_notifyIds;
}

void TaskInfo::SetNotifyIds(const vector<string>& _notifyIds)
{
    m_notifyIds = _notifyIds;
    m_notifyIdsHasBeenSet = true;
}

bool TaskInfo::NotifyIdsHasBeenSet() const
{
    return m_notifyIdsHasBeenSet;
}

bool TaskInfo::GetEnabled() const
{
    return m_enabled;
}

void TaskInfo::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool TaskInfo::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

