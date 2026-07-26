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

#include <tencentcloud/adp/v20260520/model/AppTriggerRunLog.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

AppTriggerRunLog::AppTriggerRunLog() :
    m_conversationIdHasBeenSet(false),
    m_durationMsHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_fireTypeHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_pushStatusHasBeenSet(false),
    m_resultCodeHasBeenSet(false),
    m_resultSummaryHasBeenSet(false),
    m_runIdHasBeenSet(false),
    m_scheduledFireTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_triggerIdHasBeenSet(false),
    m_unreadHasBeenSet(false),
    m_workflowRunIdHasBeenSet(false)
{
}

CoreInternalOutcome AppTriggerRunLog::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ConversationId") && !value["ConversationId"].IsNull())
    {
        if (!value["ConversationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppTriggerRunLog.ConversationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_conversationId = string(value["ConversationId"].GetString());
        m_conversationIdHasBeenSet = true;
    }

    if (value.HasMember("DurationMs") && !value["DurationMs"].IsNull())
    {
        if (!value["DurationMs"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppTriggerRunLog.DurationMs` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_durationMs = string(value["DurationMs"].GetString());
        m_durationMsHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppTriggerRunLog.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("FireType") && !value["FireType"].IsNull())
    {
        if (!value["FireType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AppTriggerRunLog.FireType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fireType = value["FireType"].GetInt64();
        m_fireTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppTriggerRunLog.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("PushStatus") && !value["PushStatus"].IsNull())
    {
        if (!value["PushStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AppTriggerRunLog.PushStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pushStatus = value["PushStatus"].GetInt64();
        m_pushStatusHasBeenSet = true;
    }

    if (value.HasMember("ResultCode") && !value["ResultCode"].IsNull())
    {
        if (!value["ResultCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppTriggerRunLog.ResultCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resultCode = string(value["ResultCode"].GetString());
        m_resultCodeHasBeenSet = true;
    }

    if (value.HasMember("ResultSummary") && !value["ResultSummary"].IsNull())
    {
        if (!value["ResultSummary"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppTriggerRunLog.ResultSummary` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resultSummary = string(value["ResultSummary"].GetString());
        m_resultSummaryHasBeenSet = true;
    }

    if (value.HasMember("RunId") && !value["RunId"].IsNull())
    {
        if (!value["RunId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppTriggerRunLog.RunId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runId = string(value["RunId"].GetString());
        m_runIdHasBeenSet = true;
    }

    if (value.HasMember("ScheduledFireTime") && !value["ScheduledFireTime"].IsNull())
    {
        if (!value["ScheduledFireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppTriggerRunLog.ScheduledFireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scheduledFireTime = string(value["ScheduledFireTime"].GetString());
        m_scheduledFireTimeHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppTriggerRunLog.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AppTriggerRunLog.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("TriggerId") && !value["TriggerId"].IsNull())
    {
        if (!value["TriggerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppTriggerRunLog.TriggerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_triggerId = string(value["TriggerId"].GetString());
        m_triggerIdHasBeenSet = true;
    }

    if (value.HasMember("Unread") && !value["Unread"].IsNull())
    {
        if (!value["Unread"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AppTriggerRunLog.Unread` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_unread = value["Unread"].GetBool();
        m_unreadHasBeenSet = true;
    }

    if (value.HasMember("WorkflowRunId") && !value["WorkflowRunId"].IsNull())
    {
        if (!value["WorkflowRunId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppTriggerRunLog.WorkflowRunId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowRunId = string(value["WorkflowRunId"].GetString());
        m_workflowRunIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AppTriggerRunLog::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_conversationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConversationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_conversationId.c_str(), allocator).Move(), allocator);
    }

    if (m_durationMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DurationMs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_durationMs.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_fireTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FireType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fireType, allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_pushStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PushStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pushStatus, allocator);
    }

    if (m_resultCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resultCode.c_str(), allocator).Move(), allocator);
    }

    if (m_resultSummaryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultSummary";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resultSummary.c_str(), allocator).Move(), allocator);
    }

    if (m_runIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runId.c_str(), allocator).Move(), allocator);
    }

    if (m_scheduledFireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduledFireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scheduledFireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_triggerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_triggerId.c_str(), allocator).Move(), allocator);
    }

    if (m_unreadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Unread";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unread, allocator);
    }

    if (m_workflowRunIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowRunId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowRunId.c_str(), allocator).Move(), allocator);
    }

}


string AppTriggerRunLog::GetConversationId() const
{
    return m_conversationId;
}

void AppTriggerRunLog::SetConversationId(const string& _conversationId)
{
    m_conversationId = _conversationId;
    m_conversationIdHasBeenSet = true;
}

bool AppTriggerRunLog::ConversationIdHasBeenSet() const
{
    return m_conversationIdHasBeenSet;
}

string AppTriggerRunLog::GetDurationMs() const
{
    return m_durationMs;
}

void AppTriggerRunLog::SetDurationMs(const string& _durationMs)
{
    m_durationMs = _durationMs;
    m_durationMsHasBeenSet = true;
}

bool AppTriggerRunLog::DurationMsHasBeenSet() const
{
    return m_durationMsHasBeenSet;
}

string AppTriggerRunLog::GetEndTime() const
{
    return m_endTime;
}

void AppTriggerRunLog::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool AppTriggerRunLog::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t AppTriggerRunLog::GetFireType() const
{
    return m_fireType;
}

void AppTriggerRunLog::SetFireType(const int64_t& _fireType)
{
    m_fireType = _fireType;
    m_fireTypeHasBeenSet = true;
}

bool AppTriggerRunLog::FireTypeHasBeenSet() const
{
    return m_fireTypeHasBeenSet;
}

string AppTriggerRunLog::GetInstanceId() const
{
    return m_instanceId;
}

void AppTriggerRunLog::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool AppTriggerRunLog::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t AppTriggerRunLog::GetPushStatus() const
{
    return m_pushStatus;
}

void AppTriggerRunLog::SetPushStatus(const int64_t& _pushStatus)
{
    m_pushStatus = _pushStatus;
    m_pushStatusHasBeenSet = true;
}

bool AppTriggerRunLog::PushStatusHasBeenSet() const
{
    return m_pushStatusHasBeenSet;
}

string AppTriggerRunLog::GetResultCode() const
{
    return m_resultCode;
}

void AppTriggerRunLog::SetResultCode(const string& _resultCode)
{
    m_resultCode = _resultCode;
    m_resultCodeHasBeenSet = true;
}

bool AppTriggerRunLog::ResultCodeHasBeenSet() const
{
    return m_resultCodeHasBeenSet;
}

string AppTriggerRunLog::GetResultSummary() const
{
    return m_resultSummary;
}

void AppTriggerRunLog::SetResultSummary(const string& _resultSummary)
{
    m_resultSummary = _resultSummary;
    m_resultSummaryHasBeenSet = true;
}

bool AppTriggerRunLog::ResultSummaryHasBeenSet() const
{
    return m_resultSummaryHasBeenSet;
}

string AppTriggerRunLog::GetRunId() const
{
    return m_runId;
}

void AppTriggerRunLog::SetRunId(const string& _runId)
{
    m_runId = _runId;
    m_runIdHasBeenSet = true;
}

bool AppTriggerRunLog::RunIdHasBeenSet() const
{
    return m_runIdHasBeenSet;
}

string AppTriggerRunLog::GetScheduledFireTime() const
{
    return m_scheduledFireTime;
}

void AppTriggerRunLog::SetScheduledFireTime(const string& _scheduledFireTime)
{
    m_scheduledFireTime = _scheduledFireTime;
    m_scheduledFireTimeHasBeenSet = true;
}

bool AppTriggerRunLog::ScheduledFireTimeHasBeenSet() const
{
    return m_scheduledFireTimeHasBeenSet;
}

string AppTriggerRunLog::GetStartTime() const
{
    return m_startTime;
}

void AppTriggerRunLog::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool AppTriggerRunLog::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t AppTriggerRunLog::GetStatus() const
{
    return m_status;
}

void AppTriggerRunLog::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AppTriggerRunLog::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string AppTriggerRunLog::GetTriggerId() const
{
    return m_triggerId;
}

void AppTriggerRunLog::SetTriggerId(const string& _triggerId)
{
    m_triggerId = _triggerId;
    m_triggerIdHasBeenSet = true;
}

bool AppTriggerRunLog::TriggerIdHasBeenSet() const
{
    return m_triggerIdHasBeenSet;
}

bool AppTriggerRunLog::GetUnread() const
{
    return m_unread;
}

void AppTriggerRunLog::SetUnread(const bool& _unread)
{
    m_unread = _unread;
    m_unreadHasBeenSet = true;
}

bool AppTriggerRunLog::UnreadHasBeenSet() const
{
    return m_unreadHasBeenSet;
}

string AppTriggerRunLog::GetWorkflowRunId() const
{
    return m_workflowRunId;
}

void AppTriggerRunLog::SetWorkflowRunId(const string& _workflowRunId)
{
    m_workflowRunId = _workflowRunId;
    m_workflowRunIdHasBeenSet = true;
}

bool AppTriggerRunLog::WorkflowRunIdHasBeenSet() const
{
    return m_workflowRunIdHasBeenSet;
}

