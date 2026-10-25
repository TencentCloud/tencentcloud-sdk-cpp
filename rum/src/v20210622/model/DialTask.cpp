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

#include <tencentcloud/rum/v20210622/model/DialTask.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

DialTask::DialTask() :
    m_taskIdHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_executionTimeHasBeenSet(false),
    m_watchDomainHasBeenSet(false),
    m_dialDomainHasBeenSet(false),
    m_portHasBeenSet(false),
    m_frequencyMsHasBeenSet(false),
    m_timeoutMsHasBeenSet(false),
    m_periodMsHasBeenSet(false),
    m_packageCountHasBeenSet(false),
    m_packageSizeHasBeenSet(false),
    m_needMTRHasBeenSet(false),
    m_mTRTimeoutMsHasBeenSet(false),
    m_mTRMaxHopHasBeenSet(false),
    m_mTRPingCountHasBeenSet(false),
    m_slowThresholdMsHasBeenSet(false),
    m_errorTypeHasBeenSet(false),
    m_regionsHasBeenSet(false),
    m_operatorsHasBeenSet(false),
    m_userIdsHasBeenSet(false),
    m_deviceIdsHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
}

CoreInternalOutcome DialTask::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DialTask.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DialTask.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DialTask.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DialTask.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("ExecutionTime") && !value["ExecutionTime"].IsNull())
    {
        if (!value["ExecutionTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DialTask.ExecutionTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executionTime = string(value["ExecutionTime"].GetString());
        m_executionTimeHasBeenSet = true;
    }

    if (value.HasMember("WatchDomain") && !value["WatchDomain"].IsNull())
    {
        if (!value["WatchDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DialTask.WatchDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_watchDomain = string(value["WatchDomain"].GetString());
        m_watchDomainHasBeenSet = true;
    }

    if (value.HasMember("DialDomain") && !value["DialDomain"].IsNull())
    {
        if (!value["DialDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DialTask.DialDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dialDomain = string(value["DialDomain"].GetString());
        m_dialDomainHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DialTask.Port` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetInt64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("FrequencyMs") && !value["FrequencyMs"].IsNull())
    {
        if (!value["FrequencyMs"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DialTask.FrequencyMs` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_frequencyMs = value["FrequencyMs"].GetInt64();
        m_frequencyMsHasBeenSet = true;
    }

    if (value.HasMember("TimeoutMs") && !value["TimeoutMs"].IsNull())
    {
        if (!value["TimeoutMs"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DialTask.TimeoutMs` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timeoutMs = value["TimeoutMs"].GetInt64();
        m_timeoutMsHasBeenSet = true;
    }

    if (value.HasMember("PeriodMs") && !value["PeriodMs"].IsNull())
    {
        if (!value["PeriodMs"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DialTask.PeriodMs` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_periodMs = value["PeriodMs"].GetInt64();
        m_periodMsHasBeenSet = true;
    }

    if (value.HasMember("PackageCount") && !value["PackageCount"].IsNull())
    {
        if (!value["PackageCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DialTask.PackageCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_packageCount = value["PackageCount"].GetInt64();
        m_packageCountHasBeenSet = true;
    }

    if (value.HasMember("PackageSize") && !value["PackageSize"].IsNull())
    {
        if (!value["PackageSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DialTask.PackageSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_packageSize = value["PackageSize"].GetInt64();
        m_packageSizeHasBeenSet = true;
    }

    if (value.HasMember("NeedMTR") && !value["NeedMTR"].IsNull())
    {
        if (!value["NeedMTR"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DialTask.NeedMTR` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_needMTR = value["NeedMTR"].GetInt64();
        m_needMTRHasBeenSet = true;
    }

    if (value.HasMember("MTRTimeoutMs") && !value["MTRTimeoutMs"].IsNull())
    {
        if (!value["MTRTimeoutMs"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DialTask.MTRTimeoutMs` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mTRTimeoutMs = value["MTRTimeoutMs"].GetInt64();
        m_mTRTimeoutMsHasBeenSet = true;
    }

    if (value.HasMember("MTRMaxHop") && !value["MTRMaxHop"].IsNull())
    {
        if (!value["MTRMaxHop"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DialTask.MTRMaxHop` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mTRMaxHop = value["MTRMaxHop"].GetInt64();
        m_mTRMaxHopHasBeenSet = true;
    }

    if (value.HasMember("MTRPingCount") && !value["MTRPingCount"].IsNull())
    {
        if (!value["MTRPingCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DialTask.MTRPingCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mTRPingCount = value["MTRPingCount"].GetInt64();
        m_mTRPingCountHasBeenSet = true;
    }

    if (value.HasMember("SlowThresholdMs") && !value["SlowThresholdMs"].IsNull())
    {
        if (!value["SlowThresholdMs"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DialTask.SlowThresholdMs` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_slowThresholdMs = value["SlowThresholdMs"].GetInt64();
        m_slowThresholdMsHasBeenSet = true;
    }

    if (value.HasMember("ErrorType") && !value["ErrorType"].IsNull())
    {
        if (!value["ErrorType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DialTask.ErrorType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorType = string(value["ErrorType"].GetString());
        m_errorTypeHasBeenSet = true;
    }

    if (value.HasMember("Regions") && !value["Regions"].IsNull())
    {
        if (!value["Regions"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DialTask.Regions` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regions = string(value["Regions"].GetString());
        m_regionsHasBeenSet = true;
    }

    if (value.HasMember("Operators") && !value["Operators"].IsNull())
    {
        if (!value["Operators"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DialTask.Operators` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operators = string(value["Operators"].GetString());
        m_operatorsHasBeenSet = true;
    }

    if (value.HasMember("UserIds") && !value["UserIds"].IsNull())
    {
        if (!value["UserIds"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DialTask.UserIds` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userIds = string(value["UserIds"].GetString());
        m_userIdsHasBeenSet = true;
    }

    if (value.HasMember("DeviceIds") && !value["DeviceIds"].IsNull())
    {
        if (!value["DeviceIds"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DialTask.DeviceIds` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceIds = string(value["DeviceIds"].GetString());
        m_deviceIdsHasBeenSet = true;
    }

    if (value.HasMember("CreatedBy") && !value["CreatedBy"].IsNull())
    {
        if (!value["CreatedBy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DialTask.CreatedBy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdBy = string(value["CreatedBy"].GetString());
        m_createdByHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DialTask.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("UpdatedAt") && !value["UpdatedAt"].IsNull())
    {
        if (!value["UpdatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DialTask.UpdatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedAt = string(value["UpdatedAt"].GetString());
        m_updatedAtHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DialTask::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_executionTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executionTime.c_str(), allocator).Move(), allocator);
    }

    if (m_watchDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WatchDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_watchDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_dialDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DialDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dialDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_port, allocator);
    }

    if (m_frequencyMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrequencyMs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_frequencyMs, allocator);
    }

    if (m_timeoutMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeoutMs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeoutMs, allocator);
    }

    if (m_periodMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeriodMs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_periodMs, allocator);
    }

    if (m_packageCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_packageCount, allocator);
    }

    if (m_packageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_packageSize, allocator);
    }

    if (m_needMTRHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedMTR";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_needMTR, allocator);
    }

    if (m_mTRTimeoutMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MTRTimeoutMs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mTRTimeoutMs, allocator);
    }

    if (m_mTRMaxHopHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MTRMaxHop";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mTRMaxHop, allocator);
    }

    if (m_mTRPingCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MTRPingCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mTRPingCount, allocator);
    }

    if (m_slowThresholdMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SlowThresholdMs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_slowThresholdMs, allocator);
    }

    if (m_errorTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorType.c_str(), allocator).Move(), allocator);
    }

    if (m_regionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Regions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regions.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operators";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operators.c_str(), allocator).Move(), allocator);
    }

    if (m_userIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userIds.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceIds.c_str(), allocator).Move(), allocator);
    }

    if (m_createdByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedBy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdBy.c_str(), allocator).Move(), allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedAt.c_str(), allocator).Move(), allocator);
    }

}


string DialTask::GetTaskId() const
{
    return m_taskId;
}

void DialTask::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool DialTask::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string DialTask::GetTaskName() const
{
    return m_taskName;
}

void DialTask::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool DialTask::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string DialTask::GetStatus() const
{
    return m_status;
}

void DialTask::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DialTask::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DialTask::GetType() const
{
    return m_type;
}

void DialTask::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DialTask::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string DialTask::GetExecutionTime() const
{
    return m_executionTime;
}

void DialTask::SetExecutionTime(const string& _executionTime)
{
    m_executionTime = _executionTime;
    m_executionTimeHasBeenSet = true;
}

bool DialTask::ExecutionTimeHasBeenSet() const
{
    return m_executionTimeHasBeenSet;
}

string DialTask::GetWatchDomain() const
{
    return m_watchDomain;
}

void DialTask::SetWatchDomain(const string& _watchDomain)
{
    m_watchDomain = _watchDomain;
    m_watchDomainHasBeenSet = true;
}

bool DialTask::WatchDomainHasBeenSet() const
{
    return m_watchDomainHasBeenSet;
}

string DialTask::GetDialDomain() const
{
    return m_dialDomain;
}

void DialTask::SetDialDomain(const string& _dialDomain)
{
    m_dialDomain = _dialDomain;
    m_dialDomainHasBeenSet = true;
}

bool DialTask::DialDomainHasBeenSet() const
{
    return m_dialDomainHasBeenSet;
}

int64_t DialTask::GetPort() const
{
    return m_port;
}

void DialTask::SetPort(const int64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool DialTask::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

int64_t DialTask::GetFrequencyMs() const
{
    return m_frequencyMs;
}

void DialTask::SetFrequencyMs(const int64_t& _frequencyMs)
{
    m_frequencyMs = _frequencyMs;
    m_frequencyMsHasBeenSet = true;
}

bool DialTask::FrequencyMsHasBeenSet() const
{
    return m_frequencyMsHasBeenSet;
}

int64_t DialTask::GetTimeoutMs() const
{
    return m_timeoutMs;
}

void DialTask::SetTimeoutMs(const int64_t& _timeoutMs)
{
    m_timeoutMs = _timeoutMs;
    m_timeoutMsHasBeenSet = true;
}

bool DialTask::TimeoutMsHasBeenSet() const
{
    return m_timeoutMsHasBeenSet;
}

int64_t DialTask::GetPeriodMs() const
{
    return m_periodMs;
}

void DialTask::SetPeriodMs(const int64_t& _periodMs)
{
    m_periodMs = _periodMs;
    m_periodMsHasBeenSet = true;
}

bool DialTask::PeriodMsHasBeenSet() const
{
    return m_periodMsHasBeenSet;
}

int64_t DialTask::GetPackageCount() const
{
    return m_packageCount;
}

void DialTask::SetPackageCount(const int64_t& _packageCount)
{
    m_packageCount = _packageCount;
    m_packageCountHasBeenSet = true;
}

bool DialTask::PackageCountHasBeenSet() const
{
    return m_packageCountHasBeenSet;
}

int64_t DialTask::GetPackageSize() const
{
    return m_packageSize;
}

void DialTask::SetPackageSize(const int64_t& _packageSize)
{
    m_packageSize = _packageSize;
    m_packageSizeHasBeenSet = true;
}

bool DialTask::PackageSizeHasBeenSet() const
{
    return m_packageSizeHasBeenSet;
}

int64_t DialTask::GetNeedMTR() const
{
    return m_needMTR;
}

void DialTask::SetNeedMTR(const int64_t& _needMTR)
{
    m_needMTR = _needMTR;
    m_needMTRHasBeenSet = true;
}

bool DialTask::NeedMTRHasBeenSet() const
{
    return m_needMTRHasBeenSet;
}

int64_t DialTask::GetMTRTimeoutMs() const
{
    return m_mTRTimeoutMs;
}

void DialTask::SetMTRTimeoutMs(const int64_t& _mTRTimeoutMs)
{
    m_mTRTimeoutMs = _mTRTimeoutMs;
    m_mTRTimeoutMsHasBeenSet = true;
}

bool DialTask::MTRTimeoutMsHasBeenSet() const
{
    return m_mTRTimeoutMsHasBeenSet;
}

int64_t DialTask::GetMTRMaxHop() const
{
    return m_mTRMaxHop;
}

void DialTask::SetMTRMaxHop(const int64_t& _mTRMaxHop)
{
    m_mTRMaxHop = _mTRMaxHop;
    m_mTRMaxHopHasBeenSet = true;
}

bool DialTask::MTRMaxHopHasBeenSet() const
{
    return m_mTRMaxHopHasBeenSet;
}

int64_t DialTask::GetMTRPingCount() const
{
    return m_mTRPingCount;
}

void DialTask::SetMTRPingCount(const int64_t& _mTRPingCount)
{
    m_mTRPingCount = _mTRPingCount;
    m_mTRPingCountHasBeenSet = true;
}

bool DialTask::MTRPingCountHasBeenSet() const
{
    return m_mTRPingCountHasBeenSet;
}

int64_t DialTask::GetSlowThresholdMs() const
{
    return m_slowThresholdMs;
}

void DialTask::SetSlowThresholdMs(const int64_t& _slowThresholdMs)
{
    m_slowThresholdMs = _slowThresholdMs;
    m_slowThresholdMsHasBeenSet = true;
}

bool DialTask::SlowThresholdMsHasBeenSet() const
{
    return m_slowThresholdMsHasBeenSet;
}

string DialTask::GetErrorType() const
{
    return m_errorType;
}

void DialTask::SetErrorType(const string& _errorType)
{
    m_errorType = _errorType;
    m_errorTypeHasBeenSet = true;
}

bool DialTask::ErrorTypeHasBeenSet() const
{
    return m_errorTypeHasBeenSet;
}

string DialTask::GetRegions() const
{
    return m_regions;
}

void DialTask::SetRegions(const string& _regions)
{
    m_regions = _regions;
    m_regionsHasBeenSet = true;
}

bool DialTask::RegionsHasBeenSet() const
{
    return m_regionsHasBeenSet;
}

string DialTask::GetOperators() const
{
    return m_operators;
}

void DialTask::SetOperators(const string& _operators)
{
    m_operators = _operators;
    m_operatorsHasBeenSet = true;
}

bool DialTask::OperatorsHasBeenSet() const
{
    return m_operatorsHasBeenSet;
}

string DialTask::GetUserIds() const
{
    return m_userIds;
}

void DialTask::SetUserIds(const string& _userIds)
{
    m_userIds = _userIds;
    m_userIdsHasBeenSet = true;
}

bool DialTask::UserIdsHasBeenSet() const
{
    return m_userIdsHasBeenSet;
}

string DialTask::GetDeviceIds() const
{
    return m_deviceIds;
}

void DialTask::SetDeviceIds(const string& _deviceIds)
{
    m_deviceIds = _deviceIds;
    m_deviceIdsHasBeenSet = true;
}

bool DialTask::DeviceIdsHasBeenSet() const
{
    return m_deviceIdsHasBeenSet;
}

string DialTask::GetCreatedBy() const
{
    return m_createdBy;
}

void DialTask::SetCreatedBy(const string& _createdBy)
{
    m_createdBy = _createdBy;
    m_createdByHasBeenSet = true;
}

bool DialTask::CreatedByHasBeenSet() const
{
    return m_createdByHasBeenSet;
}

string DialTask::GetCreatedAt() const
{
    return m_createdAt;
}

void DialTask::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool DialTask::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string DialTask::GetUpdatedAt() const
{
    return m_updatedAt;
}

void DialTask::SetUpdatedAt(const string& _updatedAt)
{
    m_updatedAt = _updatedAt;
    m_updatedAtHasBeenSet = true;
}

bool DialTask::UpdatedAtHasBeenSet() const
{
    return m_updatedAtHasBeenSet;
}

