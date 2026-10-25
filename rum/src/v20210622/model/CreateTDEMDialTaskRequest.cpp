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

#include <tencentcloud/rum/v20210622/model/CreateTDEMDialTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

CreateTDEMDialTaskRequest::CreateTDEMDialTaskRequest() :
    m_appIdHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_executionTimeHasBeenSet(false),
    m_timeoutMsHasBeenSet(false),
    m_periodMsHasBeenSet(false),
    m_packageCountHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_watchDomainHasBeenSet(false),
    m_dialDomainHasBeenSet(false),
    m_portHasBeenSet(false),
    m_frequencyMsHasBeenSet(false),
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
    m_deviceIdsHasBeenSet(false)
{
}

string CreateTDEMDialTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_executionTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_executionTime.c_str(), allocator).Move(), allocator);
    }

    if (m_timeoutMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeoutMs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeoutMs, allocator);
    }

    if (m_periodMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeriodMs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_periodMs, allocator);
    }

    if (m_packageCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_packageCount, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_watchDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WatchDomain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_watchDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_dialDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DialDomain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dialDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_port, allocator);
    }

    if (m_frequencyMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrequencyMs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_frequencyMs, allocator);
    }

    if (m_packageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_packageSize, allocator);
    }

    if (m_needMTRHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedMTR";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_needMTR, allocator);
    }

    if (m_mTRTimeoutMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MTRTimeoutMs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_mTRTimeoutMs, allocator);
    }

    if (m_mTRMaxHopHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MTRMaxHop";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_mTRMaxHop, allocator);
    }

    if (m_mTRPingCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MTRPingCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_mTRPingCount, allocator);
    }

    if (m_slowThresholdMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SlowThresholdMs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_slowThresholdMs, allocator);
    }

    if (m_errorTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_errorType.c_str(), allocator).Move(), allocator);
    }

    if (m_regionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Regions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_regions.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operators";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operators.c_str(), allocator).Move(), allocator);
    }

    if (m_userIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userIds.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deviceIds.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateTDEMDialTaskRequest::GetAppId() const
{
    return m_appId;
}

void CreateTDEMDialTaskRequest::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool CreateTDEMDialTaskRequest::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string CreateTDEMDialTaskRequest::GetTaskName() const
{
    return m_taskName;
}

void CreateTDEMDialTaskRequest::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool CreateTDEMDialTaskRequest::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string CreateTDEMDialTaskRequest::GetType() const
{
    return m_type;
}

void CreateTDEMDialTaskRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CreateTDEMDialTaskRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string CreateTDEMDialTaskRequest::GetExecutionTime() const
{
    return m_executionTime;
}

void CreateTDEMDialTaskRequest::SetExecutionTime(const string& _executionTime)
{
    m_executionTime = _executionTime;
    m_executionTimeHasBeenSet = true;
}

bool CreateTDEMDialTaskRequest::ExecutionTimeHasBeenSet() const
{
    return m_executionTimeHasBeenSet;
}

int64_t CreateTDEMDialTaskRequest::GetTimeoutMs() const
{
    return m_timeoutMs;
}

void CreateTDEMDialTaskRequest::SetTimeoutMs(const int64_t& _timeoutMs)
{
    m_timeoutMs = _timeoutMs;
    m_timeoutMsHasBeenSet = true;
}

bool CreateTDEMDialTaskRequest::TimeoutMsHasBeenSet() const
{
    return m_timeoutMsHasBeenSet;
}

int64_t CreateTDEMDialTaskRequest::GetPeriodMs() const
{
    return m_periodMs;
}

void CreateTDEMDialTaskRequest::SetPeriodMs(const int64_t& _periodMs)
{
    m_periodMs = _periodMs;
    m_periodMsHasBeenSet = true;
}

bool CreateTDEMDialTaskRequest::PeriodMsHasBeenSet() const
{
    return m_periodMsHasBeenSet;
}

int64_t CreateTDEMDialTaskRequest::GetPackageCount() const
{
    return m_packageCount;
}

void CreateTDEMDialTaskRequest::SetPackageCount(const int64_t& _packageCount)
{
    m_packageCount = _packageCount;
    m_packageCountHasBeenSet = true;
}

bool CreateTDEMDialTaskRequest::PackageCountHasBeenSet() const
{
    return m_packageCountHasBeenSet;
}

string CreateTDEMDialTaskRequest::GetStatus() const
{
    return m_status;
}

void CreateTDEMDialTaskRequest::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CreateTDEMDialTaskRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string CreateTDEMDialTaskRequest::GetWatchDomain() const
{
    return m_watchDomain;
}

void CreateTDEMDialTaskRequest::SetWatchDomain(const string& _watchDomain)
{
    m_watchDomain = _watchDomain;
    m_watchDomainHasBeenSet = true;
}

bool CreateTDEMDialTaskRequest::WatchDomainHasBeenSet() const
{
    return m_watchDomainHasBeenSet;
}

string CreateTDEMDialTaskRequest::GetDialDomain() const
{
    return m_dialDomain;
}

void CreateTDEMDialTaskRequest::SetDialDomain(const string& _dialDomain)
{
    m_dialDomain = _dialDomain;
    m_dialDomainHasBeenSet = true;
}

bool CreateTDEMDialTaskRequest::DialDomainHasBeenSet() const
{
    return m_dialDomainHasBeenSet;
}

int64_t CreateTDEMDialTaskRequest::GetPort() const
{
    return m_port;
}

void CreateTDEMDialTaskRequest::SetPort(const int64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool CreateTDEMDialTaskRequest::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

int64_t CreateTDEMDialTaskRequest::GetFrequencyMs() const
{
    return m_frequencyMs;
}

void CreateTDEMDialTaskRequest::SetFrequencyMs(const int64_t& _frequencyMs)
{
    m_frequencyMs = _frequencyMs;
    m_frequencyMsHasBeenSet = true;
}

bool CreateTDEMDialTaskRequest::FrequencyMsHasBeenSet() const
{
    return m_frequencyMsHasBeenSet;
}

int64_t CreateTDEMDialTaskRequest::GetPackageSize() const
{
    return m_packageSize;
}

void CreateTDEMDialTaskRequest::SetPackageSize(const int64_t& _packageSize)
{
    m_packageSize = _packageSize;
    m_packageSizeHasBeenSet = true;
}

bool CreateTDEMDialTaskRequest::PackageSizeHasBeenSet() const
{
    return m_packageSizeHasBeenSet;
}

int64_t CreateTDEMDialTaskRequest::GetNeedMTR() const
{
    return m_needMTR;
}

void CreateTDEMDialTaskRequest::SetNeedMTR(const int64_t& _needMTR)
{
    m_needMTR = _needMTR;
    m_needMTRHasBeenSet = true;
}

bool CreateTDEMDialTaskRequest::NeedMTRHasBeenSet() const
{
    return m_needMTRHasBeenSet;
}

int64_t CreateTDEMDialTaskRequest::GetMTRTimeoutMs() const
{
    return m_mTRTimeoutMs;
}

void CreateTDEMDialTaskRequest::SetMTRTimeoutMs(const int64_t& _mTRTimeoutMs)
{
    m_mTRTimeoutMs = _mTRTimeoutMs;
    m_mTRTimeoutMsHasBeenSet = true;
}

bool CreateTDEMDialTaskRequest::MTRTimeoutMsHasBeenSet() const
{
    return m_mTRTimeoutMsHasBeenSet;
}

int64_t CreateTDEMDialTaskRequest::GetMTRMaxHop() const
{
    return m_mTRMaxHop;
}

void CreateTDEMDialTaskRequest::SetMTRMaxHop(const int64_t& _mTRMaxHop)
{
    m_mTRMaxHop = _mTRMaxHop;
    m_mTRMaxHopHasBeenSet = true;
}

bool CreateTDEMDialTaskRequest::MTRMaxHopHasBeenSet() const
{
    return m_mTRMaxHopHasBeenSet;
}

int64_t CreateTDEMDialTaskRequest::GetMTRPingCount() const
{
    return m_mTRPingCount;
}

void CreateTDEMDialTaskRequest::SetMTRPingCount(const int64_t& _mTRPingCount)
{
    m_mTRPingCount = _mTRPingCount;
    m_mTRPingCountHasBeenSet = true;
}

bool CreateTDEMDialTaskRequest::MTRPingCountHasBeenSet() const
{
    return m_mTRPingCountHasBeenSet;
}

int64_t CreateTDEMDialTaskRequest::GetSlowThresholdMs() const
{
    return m_slowThresholdMs;
}

void CreateTDEMDialTaskRequest::SetSlowThresholdMs(const int64_t& _slowThresholdMs)
{
    m_slowThresholdMs = _slowThresholdMs;
    m_slowThresholdMsHasBeenSet = true;
}

bool CreateTDEMDialTaskRequest::SlowThresholdMsHasBeenSet() const
{
    return m_slowThresholdMsHasBeenSet;
}

string CreateTDEMDialTaskRequest::GetErrorType() const
{
    return m_errorType;
}

void CreateTDEMDialTaskRequest::SetErrorType(const string& _errorType)
{
    m_errorType = _errorType;
    m_errorTypeHasBeenSet = true;
}

bool CreateTDEMDialTaskRequest::ErrorTypeHasBeenSet() const
{
    return m_errorTypeHasBeenSet;
}

string CreateTDEMDialTaskRequest::GetRegions() const
{
    return m_regions;
}

void CreateTDEMDialTaskRequest::SetRegions(const string& _regions)
{
    m_regions = _regions;
    m_regionsHasBeenSet = true;
}

bool CreateTDEMDialTaskRequest::RegionsHasBeenSet() const
{
    return m_regionsHasBeenSet;
}

string CreateTDEMDialTaskRequest::GetOperators() const
{
    return m_operators;
}

void CreateTDEMDialTaskRequest::SetOperators(const string& _operators)
{
    m_operators = _operators;
    m_operatorsHasBeenSet = true;
}

bool CreateTDEMDialTaskRequest::OperatorsHasBeenSet() const
{
    return m_operatorsHasBeenSet;
}

string CreateTDEMDialTaskRequest::GetUserIds() const
{
    return m_userIds;
}

void CreateTDEMDialTaskRequest::SetUserIds(const string& _userIds)
{
    m_userIds = _userIds;
    m_userIdsHasBeenSet = true;
}

bool CreateTDEMDialTaskRequest::UserIdsHasBeenSet() const
{
    return m_userIdsHasBeenSet;
}

string CreateTDEMDialTaskRequest::GetDeviceIds() const
{
    return m_deviceIds;
}

void CreateTDEMDialTaskRequest::SetDeviceIds(const string& _deviceIds)
{
    m_deviceIds = _deviceIds;
    m_deviceIdsHasBeenSet = true;
}

bool CreateTDEMDialTaskRequest::DeviceIdsHasBeenSet() const
{
    return m_deviceIdsHasBeenSet;
}


