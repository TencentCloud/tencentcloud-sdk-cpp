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

#include <tencentcloud/monitor/v20230616/model/AIWorkbenchSREDigitalTwinWorkLog.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20230616::Model;
using namespace std;

AIWorkbenchSREDigitalTwinWorkLog::AIWorkbenchSREDigitalTwinWorkLog() :
    m_iDHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_twinIDHasBeenSet(false),
    m_taskIDHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_resultHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_taskTypeHasBeenSet(false)
{
}

CoreInternalOutcome AIWorkbenchSREDigitalTwinWorkLog::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AIWorkbenchSREDigitalTwinWorkLog.ID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_iD = value["ID"].GetUint64();
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIWorkbenchSREDigitalTwinWorkLog.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("TwinID") && !value["TwinID"].IsNull())
    {
        if (!value["TwinID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AIWorkbenchSREDigitalTwinWorkLog.TwinID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_twinID = value["TwinID"].GetUint64();
        m_twinIDHasBeenSet = true;
    }

    if (value.HasMember("TaskID") && !value["TaskID"].IsNull())
    {
        if (!value["TaskID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AIWorkbenchSREDigitalTwinWorkLog.TaskID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskID = value["TaskID"].GetUint64();
        m_taskIDHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIWorkbenchSREDigitalTwinWorkLog.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIWorkbenchSREDigitalTwinWorkLog.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Result") && !value["Result"].IsNull())
    {
        if (!value["Result"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIWorkbenchSREDigitalTwinWorkLog.Result` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_result = string(value["Result"].GetString());
        m_resultHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIWorkbenchSREDigitalTwinWorkLog.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("TaskType") && !value["TaskType"].IsNull())
    {
        if (!value["TaskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIWorkbenchSREDigitalTwinWorkLog.TaskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskType = string(value["TaskType"].GetString());
        m_taskTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AIWorkbenchSREDigitalTwinWorkLog::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iD, allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_twinIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TwinID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_twinID, allocator);
    }

    if (m_taskIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskID, allocator);
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
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_result.c_str(), allocator).Move(), allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskType.c_str(), allocator).Move(), allocator);
    }

}


uint64_t AIWorkbenchSREDigitalTwinWorkLog::GetID() const
{
    return m_iD;
}

void AIWorkbenchSREDigitalTwinWorkLog::SetID(const uint64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool AIWorkbenchSREDigitalTwinWorkLog::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string AIWorkbenchSREDigitalTwinWorkLog::GetCreatedAt() const
{
    return m_createdAt;
}

void AIWorkbenchSREDigitalTwinWorkLog::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool AIWorkbenchSREDigitalTwinWorkLog::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

uint64_t AIWorkbenchSREDigitalTwinWorkLog::GetTwinID() const
{
    return m_twinID;
}

void AIWorkbenchSREDigitalTwinWorkLog::SetTwinID(const uint64_t& _twinID)
{
    m_twinID = _twinID;
    m_twinIDHasBeenSet = true;
}

bool AIWorkbenchSREDigitalTwinWorkLog::TwinIDHasBeenSet() const
{
    return m_twinIDHasBeenSet;
}

uint64_t AIWorkbenchSREDigitalTwinWorkLog::GetTaskID() const
{
    return m_taskID;
}

void AIWorkbenchSREDigitalTwinWorkLog::SetTaskID(const uint64_t& _taskID)
{
    m_taskID = _taskID;
    m_taskIDHasBeenSet = true;
}

bool AIWorkbenchSREDigitalTwinWorkLog::TaskIDHasBeenSet() const
{
    return m_taskIDHasBeenSet;
}

string AIWorkbenchSREDigitalTwinWorkLog::GetStartTime() const
{
    return m_startTime;
}

void AIWorkbenchSREDigitalTwinWorkLog::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool AIWorkbenchSREDigitalTwinWorkLog::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string AIWorkbenchSREDigitalTwinWorkLog::GetStatus() const
{
    return m_status;
}

void AIWorkbenchSREDigitalTwinWorkLog::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AIWorkbenchSREDigitalTwinWorkLog::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string AIWorkbenchSREDigitalTwinWorkLog::GetResult() const
{
    return m_result;
}

void AIWorkbenchSREDigitalTwinWorkLog::SetResult(const string& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool AIWorkbenchSREDigitalTwinWorkLog::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

string AIWorkbenchSREDigitalTwinWorkLog::GetTaskName() const
{
    return m_taskName;
}

void AIWorkbenchSREDigitalTwinWorkLog::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool AIWorkbenchSREDigitalTwinWorkLog::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string AIWorkbenchSREDigitalTwinWorkLog::GetTaskType() const
{
    return m_taskType;
}

void AIWorkbenchSREDigitalTwinWorkLog::SetTaskType(const string& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool AIWorkbenchSREDigitalTwinWorkLog::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

