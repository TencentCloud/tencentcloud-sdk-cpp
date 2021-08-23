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

#include <tencentcloud/bm/v20180423/model/DeviceOperationLog.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bm::V20180423::Model;
using namespace std;

DeviceOperationLog::DeviceOperationLog() :
    m_idHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_taskDescriptionHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_opUinHasBeenSet(false),
    m_logDescriptionHasBeenSet(false)
{
}

CoreInternalOutcome DeviceOperationLog::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceOperationLog.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceOperationLog.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceOperationLog.TaskId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = value["TaskId"].GetUint64();
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceOperationLog.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("TaskDescription") && !value["TaskDescription"].IsNull())
    {
        if (!value["TaskDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceOperationLog.TaskDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskDescription = string(value["TaskDescription"].GetString());
        m_taskDescriptionHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceOperationLog.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceOperationLog.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceOperationLog.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("OpUin") && !value["OpUin"].IsNull())
    {
        if (!value["OpUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceOperationLog.OpUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_opUin = string(value["OpUin"].GetString());
        m_opUinHasBeenSet = true;
    }

    if (value.HasMember("LogDescription") && !value["LogDescription"].IsNull())
    {
        if (!value["LogDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceOperationLog.LogDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logDescription = string(value["LogDescription"].GetString());
        m_logDescriptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeviceOperationLog::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskId, allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_taskDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskDescription.c_str(), allocator).Move(), allocator);
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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_opUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_opUin.c_str(), allocator).Move(), allocator);
    }

    if (m_logDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logDescription.c_str(), allocator).Move(), allocator);
    }

}


uint64_t DeviceOperationLog::GetId() const
{
    return m_id;
}

void DeviceOperationLog::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DeviceOperationLog::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string DeviceOperationLog::GetInstanceId() const
{
    return m_instanceId;
}

void DeviceOperationLog::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DeviceOperationLog::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

uint64_t DeviceOperationLog::GetTaskId() const
{
    return m_taskId;
}

void DeviceOperationLog::SetTaskId(const uint64_t& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool DeviceOperationLog::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string DeviceOperationLog::GetTaskName() const
{
    return m_taskName;
}

void DeviceOperationLog::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool DeviceOperationLog::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string DeviceOperationLog::GetTaskDescription() const
{
    return m_taskDescription;
}

void DeviceOperationLog::SetTaskDescription(const string& _taskDescription)
{
    m_taskDescription = _taskDescription;
    m_taskDescriptionHasBeenSet = true;
}

bool DeviceOperationLog::TaskDescriptionHasBeenSet() const
{
    return m_taskDescriptionHasBeenSet;
}

string DeviceOperationLog::GetStartTime() const
{
    return m_startTime;
}

void DeviceOperationLog::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DeviceOperationLog::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DeviceOperationLog::GetEndTime() const
{
    return m_endTime;
}

void DeviceOperationLog::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DeviceOperationLog::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

uint64_t DeviceOperationLog::GetStatus() const
{
    return m_status;
}

void DeviceOperationLog::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DeviceOperationLog::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DeviceOperationLog::GetOpUin() const
{
    return m_opUin;
}

void DeviceOperationLog::SetOpUin(const string& _opUin)
{
    m_opUin = _opUin;
    m_opUinHasBeenSet = true;
}

bool DeviceOperationLog::OpUinHasBeenSet() const
{
    return m_opUinHasBeenSet;
}

string DeviceOperationLog::GetLogDescription() const
{
    return m_logDescription;
}

void DeviceOperationLog::SetLogDescription(const string& _logDescription)
{
    m_logDescription = _logDescription;
    m_logDescriptionHasBeenSet = true;
}

bool DeviceOperationLog::LogDescriptionHasBeenSet() const
{
    return m_logDescriptionHasBeenSet;
}

