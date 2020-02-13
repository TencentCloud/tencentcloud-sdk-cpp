/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#include <tencentcloud/cat/v20180409/model/TaskAlarm.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cat::V20180409::Model;
using namespace rapidjson;
using namespace std;

TaskAlarm::TaskAlarm() :
    m_taskIdHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_catTypeNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_cgiUrlHasBeenSet(false),
    m_addTimeHasBeenSet(false),
    m_alarmStatusHasBeenSet(false),
    m_statusInfoHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome TaskAlarm::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `TaskAlarm.TaskId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = value["TaskId"].GetUint64();
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Error("response `TaskAlarm.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("Period") && !value["Period"].IsNull())
    {
        if (!value["Period"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `TaskAlarm.Period` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_period = value["Period"].GetUint64();
        m_periodHasBeenSet = true;
    }

    if (value.HasMember("CatTypeName") && !value["CatTypeName"].IsNull())
    {
        if (!value["CatTypeName"].IsString())
        {
            return CoreInternalOutcome(Error("response `TaskAlarm.CatTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_catTypeName = string(value["CatTypeName"].GetString());
        m_catTypeNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `TaskAlarm.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CgiUrl") && !value["CgiUrl"].IsNull())
    {
        if (!value["CgiUrl"].IsString())
        {
            return CoreInternalOutcome(Error("response `TaskAlarm.CgiUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cgiUrl = string(value["CgiUrl"].GetString());
        m_cgiUrlHasBeenSet = true;
    }

    if (value.HasMember("AddTime") && !value["AddTime"].IsNull())
    {
        if (!value["AddTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `TaskAlarm.AddTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addTime = string(value["AddTime"].GetString());
        m_addTimeHasBeenSet = true;
    }

    if (value.HasMember("AlarmStatus") && !value["AlarmStatus"].IsNull())
    {
        if (!value["AlarmStatus"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `TaskAlarm.AlarmStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmStatus = value["AlarmStatus"].GetUint64();
        m_alarmStatusHasBeenSet = true;
    }

    if (value.HasMember("StatusInfo") && !value["StatusInfo"].IsNull())
    {
        if (!value["StatusInfo"].IsString())
        {
            return CoreInternalOutcome(Error("response `TaskAlarm.StatusInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusInfo = string(value["StatusInfo"].GetString());
        m_statusInfoHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `TaskAlarm.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskAlarm::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskId, allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_periodHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_period, allocator);
    }

    if (m_catTypeNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CatTypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_catTypeName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_cgiUrlHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CgiUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_cgiUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_addTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AddTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_addTime.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmStatusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AlarmStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alarmStatus, allocator);
    }

    if (m_statusInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StatusInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_statusInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


uint64_t TaskAlarm::GetTaskId() const
{
    return m_taskId;
}

void TaskAlarm::SetTaskId(const uint64_t& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool TaskAlarm::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string TaskAlarm::GetTaskName() const
{
    return m_taskName;
}

void TaskAlarm::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool TaskAlarm::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

uint64_t TaskAlarm::GetPeriod() const
{
    return m_period;
}

void TaskAlarm::SetPeriod(const uint64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool TaskAlarm::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

string TaskAlarm::GetCatTypeName() const
{
    return m_catTypeName;
}

void TaskAlarm::SetCatTypeName(const string& _catTypeName)
{
    m_catTypeName = _catTypeName;
    m_catTypeNameHasBeenSet = true;
}

bool TaskAlarm::CatTypeNameHasBeenSet() const
{
    return m_catTypeNameHasBeenSet;
}

uint64_t TaskAlarm::GetStatus() const
{
    return m_status;
}

void TaskAlarm::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool TaskAlarm::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string TaskAlarm::GetCgiUrl() const
{
    return m_cgiUrl;
}

void TaskAlarm::SetCgiUrl(const string& _cgiUrl)
{
    m_cgiUrl = _cgiUrl;
    m_cgiUrlHasBeenSet = true;
}

bool TaskAlarm::CgiUrlHasBeenSet() const
{
    return m_cgiUrlHasBeenSet;
}

string TaskAlarm::GetAddTime() const
{
    return m_addTime;
}

void TaskAlarm::SetAddTime(const string& _addTime)
{
    m_addTime = _addTime;
    m_addTimeHasBeenSet = true;
}

bool TaskAlarm::AddTimeHasBeenSet() const
{
    return m_addTimeHasBeenSet;
}

uint64_t TaskAlarm::GetAlarmStatus() const
{
    return m_alarmStatus;
}

void TaskAlarm::SetAlarmStatus(const uint64_t& _alarmStatus)
{
    m_alarmStatus = _alarmStatus;
    m_alarmStatusHasBeenSet = true;
}

bool TaskAlarm::AlarmStatusHasBeenSet() const
{
    return m_alarmStatusHasBeenSet;
}

string TaskAlarm::GetStatusInfo() const
{
    return m_statusInfo;
}

void TaskAlarm::SetStatusInfo(const string& _statusInfo)
{
    m_statusInfo = _statusInfo;
    m_statusInfoHasBeenSet = true;
}

bool TaskAlarm::StatusInfoHasBeenSet() const
{
    return m_statusInfoHasBeenSet;
}

string TaskAlarm::GetUpdateTime() const
{
    return m_updateTime;
}

void TaskAlarm::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool TaskAlarm::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

