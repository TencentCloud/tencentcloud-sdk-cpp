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

#include <tencentcloud/csip/v20221121/model/AiScheduleTaskInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

AiScheduleTaskInfo::AiScheduleTaskInfo() :
    m_taskIdHasBeenSet(false),
    m_scheduleIdHasBeenSet(false),
    m_triggerIdHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_resultHasBeenSet(false),
    m_scheduledTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_promptsHasBeenSet(false)
{
}

CoreInternalOutcome AiScheduleTaskInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiScheduleTaskInfo.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("ScheduleId") && !value["ScheduleId"].IsNull())
    {
        if (!value["ScheduleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiScheduleTaskInfo.ScheduleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scheduleId = string(value["ScheduleId"].GetString());
        m_scheduleIdHasBeenSet = true;
    }

    if (value.HasMember("TriggerId") && !value["TriggerId"].IsNull())
    {
        if (!value["TriggerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiScheduleTaskInfo.TriggerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_triggerId = string(value["TriggerId"].GetString());
        m_triggerIdHasBeenSet = true;
    }

    if (value.HasMember("SessionId") && !value["SessionId"].IsNull())
    {
        if (!value["SessionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiScheduleTaskInfo.SessionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionId = string(value["SessionId"].GetString());
        m_sessionIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AiScheduleTaskInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Result") && !value["Result"].IsNull())
    {
        if (!value["Result"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiScheduleTaskInfo.Result` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_result = string(value["Result"].GetString());
        m_resultHasBeenSet = true;
    }

    if (value.HasMember("ScheduledTime") && !value["ScheduledTime"].IsNull())
    {
        if (!value["ScheduledTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AiScheduleTaskInfo.ScheduledTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_scheduledTime = value["ScheduledTime"].GetInt64();
        m_scheduledTimeHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AiScheduleTaskInfo.StartTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = value["StartTime"].GetInt64();
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AiScheduleTaskInfo.EndTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = value["EndTime"].GetInt64();
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AiScheduleTaskInfo.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AiScheduleTaskInfo.UpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetInt64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiScheduleTaskInfo.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("Prompts") && !value["Prompts"].IsNull())
    {
        if (!value["Prompts"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiScheduleTaskInfo.Prompts` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_prompts = string(value["Prompts"].GetString());
        m_promptsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AiScheduleTaskInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_scheduleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scheduleId.c_str(), allocator).Move(), allocator);
    }

    if (m_triggerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_triggerId.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_result.c_str(), allocator).Move(), allocator);
    }

    if (m_scheduledTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduledTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scheduledTime, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endTime, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_promptsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Prompts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_prompts.c_str(), allocator).Move(), allocator);
    }

}


string AiScheduleTaskInfo::GetTaskId() const
{
    return m_taskId;
}

void AiScheduleTaskInfo::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool AiScheduleTaskInfo::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string AiScheduleTaskInfo::GetScheduleId() const
{
    return m_scheduleId;
}

void AiScheduleTaskInfo::SetScheduleId(const string& _scheduleId)
{
    m_scheduleId = _scheduleId;
    m_scheduleIdHasBeenSet = true;
}

bool AiScheduleTaskInfo::ScheduleIdHasBeenSet() const
{
    return m_scheduleIdHasBeenSet;
}

string AiScheduleTaskInfo::GetTriggerId() const
{
    return m_triggerId;
}

void AiScheduleTaskInfo::SetTriggerId(const string& _triggerId)
{
    m_triggerId = _triggerId;
    m_triggerIdHasBeenSet = true;
}

bool AiScheduleTaskInfo::TriggerIdHasBeenSet() const
{
    return m_triggerIdHasBeenSet;
}

string AiScheduleTaskInfo::GetSessionId() const
{
    return m_sessionId;
}

void AiScheduleTaskInfo::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool AiScheduleTaskInfo::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

int64_t AiScheduleTaskInfo::GetStatus() const
{
    return m_status;
}

void AiScheduleTaskInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AiScheduleTaskInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string AiScheduleTaskInfo::GetResult() const
{
    return m_result;
}

void AiScheduleTaskInfo::SetResult(const string& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool AiScheduleTaskInfo::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

int64_t AiScheduleTaskInfo::GetScheduledTime() const
{
    return m_scheduledTime;
}

void AiScheduleTaskInfo::SetScheduledTime(const int64_t& _scheduledTime)
{
    m_scheduledTime = _scheduledTime;
    m_scheduledTimeHasBeenSet = true;
}

bool AiScheduleTaskInfo::ScheduledTimeHasBeenSet() const
{
    return m_scheduledTimeHasBeenSet;
}

int64_t AiScheduleTaskInfo::GetStartTime() const
{
    return m_startTime;
}

void AiScheduleTaskInfo::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool AiScheduleTaskInfo::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t AiScheduleTaskInfo::GetEndTime() const
{
    return m_endTime;
}

void AiScheduleTaskInfo::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool AiScheduleTaskInfo::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t AiScheduleTaskInfo::GetCreateTime() const
{
    return m_createTime;
}

void AiScheduleTaskInfo::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool AiScheduleTaskInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t AiScheduleTaskInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void AiScheduleTaskInfo::SetUpdateTime(const int64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool AiScheduleTaskInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string AiScheduleTaskInfo::GetTaskName() const
{
    return m_taskName;
}

void AiScheduleTaskInfo::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool AiScheduleTaskInfo::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string AiScheduleTaskInfo::GetPrompts() const
{
    return m_prompts;
}

void AiScheduleTaskInfo::SetPrompts(const string& _prompts)
{
    m_prompts = _prompts;
    m_promptsHasBeenSet = true;
}

bool AiScheduleTaskInfo::PromptsHasBeenSet() const
{
    return m_promptsHasBeenSet;
}

