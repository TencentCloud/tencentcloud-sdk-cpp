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

#include <tencentcloud/iss/v20230517/model/AddRecordRetrieveTaskData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

AddRecordRetrieveTaskData::AddRecordRetrieveTaskData() :
    m_taskIdHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_expirationHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_capacityHasBeenSet(false),
    m_describeHasBeenSet(false)
{
}

CoreInternalOutcome AddRecordRetrieveTaskData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AddRecordRetrieveTaskData.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AddRecordRetrieveTaskData.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AddRecordRetrieveTaskData.StartTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = value["StartTime"].GetUint64();
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AddRecordRetrieveTaskData.EndTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = value["EndTime"].GetUint64();
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("Mode") && !value["Mode"].IsNull())
    {
        if (!value["Mode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AddRecordRetrieveTaskData.Mode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mode = value["Mode"].GetInt64();
        m_modeHasBeenSet = true;
    }

    if (value.HasMember("Expiration") && !value["Expiration"].IsNull())
    {
        if (!value["Expiration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AddRecordRetrieveTaskData.Expiration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expiration = value["Expiration"].GetInt64();
        m_expirationHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AddRecordRetrieveTaskData.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Capacity") && !value["Capacity"].IsNull())
    {
        if (!value["Capacity"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `AddRecordRetrieveTaskData.Capacity` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_capacity = value["Capacity"].GetDouble();
        m_capacityHasBeenSet = true;
    }

    if (value.HasMember("Describe") && !value["Describe"].IsNull())
    {
        if (!value["Describe"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AddRecordRetrieveTaskData.Describe` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_describe = string(value["Describe"].GetString());
        m_describeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AddRecordRetrieveTaskData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
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

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mode, allocator);
    }

    if (m_expirationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Expiration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expiration, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_capacityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Capacity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_capacity, allocator);
    }

    if (m_describeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Describe";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_describe.c_str(), allocator).Move(), allocator);
    }

}


string AddRecordRetrieveTaskData::GetTaskId() const
{
    return m_taskId;
}

void AddRecordRetrieveTaskData::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool AddRecordRetrieveTaskData::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string AddRecordRetrieveTaskData::GetTaskName() const
{
    return m_taskName;
}

void AddRecordRetrieveTaskData::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool AddRecordRetrieveTaskData::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

uint64_t AddRecordRetrieveTaskData::GetStartTime() const
{
    return m_startTime;
}

void AddRecordRetrieveTaskData::SetStartTime(const uint64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool AddRecordRetrieveTaskData::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

uint64_t AddRecordRetrieveTaskData::GetEndTime() const
{
    return m_endTime;
}

void AddRecordRetrieveTaskData::SetEndTime(const uint64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool AddRecordRetrieveTaskData::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t AddRecordRetrieveTaskData::GetMode() const
{
    return m_mode;
}

void AddRecordRetrieveTaskData::SetMode(const int64_t& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool AddRecordRetrieveTaskData::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

int64_t AddRecordRetrieveTaskData::GetExpiration() const
{
    return m_expiration;
}

void AddRecordRetrieveTaskData::SetExpiration(const int64_t& _expiration)
{
    m_expiration = _expiration;
    m_expirationHasBeenSet = true;
}

bool AddRecordRetrieveTaskData::ExpirationHasBeenSet() const
{
    return m_expirationHasBeenSet;
}

int64_t AddRecordRetrieveTaskData::GetStatus() const
{
    return m_status;
}

void AddRecordRetrieveTaskData::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AddRecordRetrieveTaskData::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

double AddRecordRetrieveTaskData::GetCapacity() const
{
    return m_capacity;
}

void AddRecordRetrieveTaskData::SetCapacity(const double& _capacity)
{
    m_capacity = _capacity;
    m_capacityHasBeenSet = true;
}

bool AddRecordRetrieveTaskData::CapacityHasBeenSet() const
{
    return m_capacityHasBeenSet;
}

string AddRecordRetrieveTaskData::GetDescribe() const
{
    return m_describe;
}

void AddRecordRetrieveTaskData::SetDescribe(const string& _describe)
{
    m_describe = _describe;
    m_describeHasBeenSet = true;
}

bool AddRecordRetrieveTaskData::DescribeHasBeenSet() const
{
    return m_describeHasBeenSet;
}

