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

#include <tencentcloud/workbuddyenterprise/v20260709/model/ScheduledTaskLogSummary.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Workbuddyenterprise::V20260709::Model;
using namespace std;

ScheduledTaskLogSummary::ScheduledTaskLogSummary() :
    m_logIdHasBeenSet(false),
    m_taskKeyHasBeenSet(false),
    m_triggerTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_durationMsHasBeenSet(false),
    m_deliveryStatusHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_sessionNameHasBeenSet(false),
    m_resultHasBeenSet(false)
{
}

CoreInternalOutcome ScheduledTaskLogSummary::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LogId") && !value["LogId"].IsNull())
    {
        if (!value["LogId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledTaskLogSummary.LogId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logId = string(value["LogId"].GetString());
        m_logIdHasBeenSet = true;
    }

    if (value.HasMember("TaskKey") && !value["TaskKey"].IsNull())
    {
        if (!value["TaskKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledTaskLogSummary.TaskKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskKey = string(value["TaskKey"].GetString());
        m_taskKeyHasBeenSet = true;
    }

    if (value.HasMember("TriggerType") && !value["TriggerType"].IsNull())
    {
        if (!value["TriggerType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledTaskLogSummary.TriggerType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_triggerType = string(value["TriggerType"].GetString());
        m_triggerTypeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledTaskLogSummary.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledTaskLogSummary.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledTaskLogSummary.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("DurationMs") && !value["DurationMs"].IsNull())
    {
        if (!value["DurationMs"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledTaskLogSummary.DurationMs` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_durationMs = value["DurationMs"].GetInt64();
        m_durationMsHasBeenSet = true;
    }

    if (value.HasMember("DeliveryStatus") && !value["DeliveryStatus"].IsNull())
    {
        if (!value["DeliveryStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledTaskLogSummary.DeliveryStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deliveryStatus = string(value["DeliveryStatus"].GetString());
        m_deliveryStatusHasBeenSet = true;
    }

    if (value.HasMember("SessionId") && !value["SessionId"].IsNull())
    {
        if (!value["SessionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledTaskLogSummary.SessionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionId = string(value["SessionId"].GetString());
        m_sessionIdHasBeenSet = true;
    }

    if (value.HasMember("ErrorMessage") && !value["ErrorMessage"].IsNull())
    {
        if (!value["ErrorMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledTaskLogSummary.ErrorMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMessage = string(value["ErrorMessage"].GetString());
        m_errorMessageHasBeenSet = true;
    }

    if (value.HasMember("SessionName") && !value["SessionName"].IsNull())
    {
        if (!value["SessionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledTaskLogSummary.SessionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionName = string(value["SessionName"].GetString());
        m_sessionNameHasBeenSet = true;
    }

    if (value.HasMember("Result") && !value["Result"].IsNull())
    {
        if (!value["Result"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScheduledTaskLogSummary.Result` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_result = string(value["Result"].GetString());
        m_resultHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ScheduledTaskLogSummary::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_logIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskKey.c_str(), allocator).Move(), allocator);
    }

    if (m_triggerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_triggerType.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_durationMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DurationMs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_durationMs, allocator);
    }

    if (m_deliveryStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeliveryStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deliveryStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_errorMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionName.c_str(), allocator).Move(), allocator);
    }

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_result.c_str(), allocator).Move(), allocator);
    }

}


string ScheduledTaskLogSummary::GetLogId() const
{
    return m_logId;
}

void ScheduledTaskLogSummary::SetLogId(const string& _logId)
{
    m_logId = _logId;
    m_logIdHasBeenSet = true;
}

bool ScheduledTaskLogSummary::LogIdHasBeenSet() const
{
    return m_logIdHasBeenSet;
}

string ScheduledTaskLogSummary::GetTaskKey() const
{
    return m_taskKey;
}

void ScheduledTaskLogSummary::SetTaskKey(const string& _taskKey)
{
    m_taskKey = _taskKey;
    m_taskKeyHasBeenSet = true;
}

bool ScheduledTaskLogSummary::TaskKeyHasBeenSet() const
{
    return m_taskKeyHasBeenSet;
}

string ScheduledTaskLogSummary::GetTriggerType() const
{
    return m_triggerType;
}

void ScheduledTaskLogSummary::SetTriggerType(const string& _triggerType)
{
    m_triggerType = _triggerType;
    m_triggerTypeHasBeenSet = true;
}

bool ScheduledTaskLogSummary::TriggerTypeHasBeenSet() const
{
    return m_triggerTypeHasBeenSet;
}

string ScheduledTaskLogSummary::GetStatus() const
{
    return m_status;
}

void ScheduledTaskLogSummary::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ScheduledTaskLogSummary::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ScheduledTaskLogSummary::GetStartTime() const
{
    return m_startTime;
}

void ScheduledTaskLogSummary::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool ScheduledTaskLogSummary::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string ScheduledTaskLogSummary::GetEndTime() const
{
    return m_endTime;
}

void ScheduledTaskLogSummary::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool ScheduledTaskLogSummary::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t ScheduledTaskLogSummary::GetDurationMs() const
{
    return m_durationMs;
}

void ScheduledTaskLogSummary::SetDurationMs(const int64_t& _durationMs)
{
    m_durationMs = _durationMs;
    m_durationMsHasBeenSet = true;
}

bool ScheduledTaskLogSummary::DurationMsHasBeenSet() const
{
    return m_durationMsHasBeenSet;
}

string ScheduledTaskLogSummary::GetDeliveryStatus() const
{
    return m_deliveryStatus;
}

void ScheduledTaskLogSummary::SetDeliveryStatus(const string& _deliveryStatus)
{
    m_deliveryStatus = _deliveryStatus;
    m_deliveryStatusHasBeenSet = true;
}

bool ScheduledTaskLogSummary::DeliveryStatusHasBeenSet() const
{
    return m_deliveryStatusHasBeenSet;
}

string ScheduledTaskLogSummary::GetSessionId() const
{
    return m_sessionId;
}

void ScheduledTaskLogSummary::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool ScheduledTaskLogSummary::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

string ScheduledTaskLogSummary::GetErrorMessage() const
{
    return m_errorMessage;
}

void ScheduledTaskLogSummary::SetErrorMessage(const string& _errorMessage)
{
    m_errorMessage = _errorMessage;
    m_errorMessageHasBeenSet = true;
}

bool ScheduledTaskLogSummary::ErrorMessageHasBeenSet() const
{
    return m_errorMessageHasBeenSet;
}

string ScheduledTaskLogSummary::GetSessionName() const
{
    return m_sessionName;
}

void ScheduledTaskLogSummary::SetSessionName(const string& _sessionName)
{
    m_sessionName = _sessionName;
    m_sessionNameHasBeenSet = true;
}

bool ScheduledTaskLogSummary::SessionNameHasBeenSet() const
{
    return m_sessionNameHasBeenSet;
}

string ScheduledTaskLogSummary::GetResult() const
{
    return m_result;
}

void ScheduledTaskLogSummary::SetResult(const string& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool ScheduledTaskLogSummary::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

