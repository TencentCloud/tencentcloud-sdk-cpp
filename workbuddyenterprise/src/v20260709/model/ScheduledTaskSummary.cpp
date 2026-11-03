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

#include <tencentcloud/workbuddyenterprise/v20260709/model/ScheduledTaskSummary.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Workbuddyenterprise::V20260709::Model;
using namespace std;

ScheduledTaskSummary::ScheduledTaskSummary() :
    m_taskIdHasBeenSet(false),
    m_taskKeyHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_agentIdHasBeenSet(false),
    m_cronExprHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_lastRunTimeHasBeenSet(false),
    m_nextRunTimeHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_agentConfigHasBeenSet(false)
{
}

CoreInternalOutcome ScheduledTaskSummary::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledTaskSummary.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskKey") && !value["TaskKey"].IsNull())
    {
        if (!value["TaskKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledTaskSummary.TaskKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskKey = string(value["TaskKey"].GetString());
        m_taskKeyHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledTaskSummary.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("AgentId") && !value["AgentId"].IsNull())
    {
        if (!value["AgentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledTaskSummary.AgentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentId = string(value["AgentId"].GetString());
        m_agentIdHasBeenSet = true;
    }

    if (value.HasMember("CronExpr") && !value["CronExpr"].IsNull())
    {
        if (!value["CronExpr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledTaskSummary.CronExpr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cronExpr = string(value["CronExpr"].GetString());
        m_cronExprHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledTaskSummary.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("LastRunTime") && !value["LastRunTime"].IsNull())
    {
        if (!value["LastRunTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledTaskSummary.LastRunTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastRunTime = string(value["LastRunTime"].GetString());
        m_lastRunTimeHasBeenSet = true;
    }

    if (value.HasMember("NextRunTime") && !value["NextRunTime"].IsNull())
    {
        if (!value["NextRunTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledTaskSummary.NextRunTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nextRunTime = string(value["NextRunTime"].GetString());
        m_nextRunTimeHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledTaskSummary.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("AgentConfig") && !value["AgentConfig"].IsNull())
    {
        if (!value["AgentConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledTaskSummary.AgentConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_agentConfig.Deserialize(value["AgentConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_agentConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ScheduledTaskSummary::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskKey.c_str(), allocator).Move(), allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_agentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentId.c_str(), allocator).Move(), allocator);
    }

    if (m_cronExprHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CronExpr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cronExpr.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_lastRunTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastRunTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastRunTime.c_str(), allocator).Move(), allocator);
    }

    if (m_nextRunTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NextRunTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nextRunTime.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_agentConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_agentConfig.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ScheduledTaskSummary::GetTaskId() const
{
    return m_taskId;
}

void ScheduledTaskSummary::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool ScheduledTaskSummary::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string ScheduledTaskSummary::GetTaskKey() const
{
    return m_taskKey;
}

void ScheduledTaskSummary::SetTaskKey(const string& _taskKey)
{
    m_taskKey = _taskKey;
    m_taskKeyHasBeenSet = true;
}

bool ScheduledTaskSummary::TaskKeyHasBeenSet() const
{
    return m_taskKeyHasBeenSet;
}

string ScheduledTaskSummary::GetTaskName() const
{
    return m_taskName;
}

void ScheduledTaskSummary::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool ScheduledTaskSummary::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string ScheduledTaskSummary::GetAgentId() const
{
    return m_agentId;
}

void ScheduledTaskSummary::SetAgentId(const string& _agentId)
{
    m_agentId = _agentId;
    m_agentIdHasBeenSet = true;
}

bool ScheduledTaskSummary::AgentIdHasBeenSet() const
{
    return m_agentIdHasBeenSet;
}

string ScheduledTaskSummary::GetCronExpr() const
{
    return m_cronExpr;
}

void ScheduledTaskSummary::SetCronExpr(const string& _cronExpr)
{
    m_cronExpr = _cronExpr;
    m_cronExprHasBeenSet = true;
}

bool ScheduledTaskSummary::CronExprHasBeenSet() const
{
    return m_cronExprHasBeenSet;
}

string ScheduledTaskSummary::GetStatus() const
{
    return m_status;
}

void ScheduledTaskSummary::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ScheduledTaskSummary::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ScheduledTaskSummary::GetLastRunTime() const
{
    return m_lastRunTime;
}

void ScheduledTaskSummary::SetLastRunTime(const string& _lastRunTime)
{
    m_lastRunTime = _lastRunTime;
    m_lastRunTimeHasBeenSet = true;
}

bool ScheduledTaskSummary::LastRunTimeHasBeenSet() const
{
    return m_lastRunTimeHasBeenSet;
}

string ScheduledTaskSummary::GetNextRunTime() const
{
    return m_nextRunTime;
}

void ScheduledTaskSummary::SetNextRunTime(const string& _nextRunTime)
{
    m_nextRunTime = _nextRunTime;
    m_nextRunTimeHasBeenSet = true;
}

bool ScheduledTaskSummary::NextRunTimeHasBeenSet() const
{
    return m_nextRunTimeHasBeenSet;
}

string ScheduledTaskSummary::GetCreatedTime() const
{
    return m_createdTime;
}

void ScheduledTaskSummary::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool ScheduledTaskSummary::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

AgentConfig ScheduledTaskSummary::GetAgentConfig() const
{
    return m_agentConfig;
}

void ScheduledTaskSummary::SetAgentConfig(const AgentConfig& _agentConfig)
{
    m_agentConfig = _agentConfig;
    m_agentConfigHasBeenSet = true;
}

bool ScheduledTaskSummary::AgentConfigHasBeenSet() const
{
    return m_agentConfigHasBeenSet;
}

