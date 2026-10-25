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

#include <tencentcloud/rum/v20210622/model/DescribeTDEMDialExecutionListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

DescribeTDEMDialExecutionListRequest::DescribeTDEMDialExecutionListRequest() :
    m_appIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_appVersionHasBeenSet(false),
    m_deviceHasBeenSet(false),
    m_netTypeHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_clientRegionHasBeenSet(false),
    m_targetIpHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_successHasBeenSet(false),
    m_environmentHasBeenSet(false)
{
}

string DescribeTDEMDialExecutionListRequest::ToJsonString() const
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

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endTime, allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_platformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Platform";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_platform.c_str(), allocator).Move(), allocator);
    }

    if (m_appVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Device";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_device.c_str(), allocator).Move(), allocator);
    }

    if (m_netTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_netType.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operator.c_str(), allocator).Move(), allocator);
    }

    if (m_clientRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clientRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_targetIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetIp.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_successHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Success";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_success, allocator);
    }

    if (m_environmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Environment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_environment.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeTDEMDialExecutionListRequest::GetAppId() const
{
    return m_appId;
}

void DescribeTDEMDialExecutionListRequest::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool DescribeTDEMDialExecutionListRequest::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

int64_t DescribeTDEMDialExecutionListRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeTDEMDialExecutionListRequest::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeTDEMDialExecutionListRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t DescribeTDEMDialExecutionListRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeTDEMDialExecutionListRequest::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeTDEMDialExecutionListRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeTDEMDialExecutionListRequest::GetTaskId() const
{
    return m_taskId;
}

void DescribeTDEMDialExecutionListRequest::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool DescribeTDEMDialExecutionListRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string DescribeTDEMDialExecutionListRequest::GetPlatform() const
{
    return m_platform;
}

void DescribeTDEMDialExecutionListRequest::SetPlatform(const string& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool DescribeTDEMDialExecutionListRequest::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

string DescribeTDEMDialExecutionListRequest::GetAppVersion() const
{
    return m_appVersion;
}

void DescribeTDEMDialExecutionListRequest::SetAppVersion(const string& _appVersion)
{
    m_appVersion = _appVersion;
    m_appVersionHasBeenSet = true;
}

bool DescribeTDEMDialExecutionListRequest::AppVersionHasBeenSet() const
{
    return m_appVersionHasBeenSet;
}

string DescribeTDEMDialExecutionListRequest::GetDevice() const
{
    return m_device;
}

void DescribeTDEMDialExecutionListRequest::SetDevice(const string& _device)
{
    m_device = _device;
    m_deviceHasBeenSet = true;
}

bool DescribeTDEMDialExecutionListRequest::DeviceHasBeenSet() const
{
    return m_deviceHasBeenSet;
}

string DescribeTDEMDialExecutionListRequest::GetNetType() const
{
    return m_netType;
}

void DescribeTDEMDialExecutionListRequest::SetNetType(const string& _netType)
{
    m_netType = _netType;
    m_netTypeHasBeenSet = true;
}

bool DescribeTDEMDialExecutionListRequest::NetTypeHasBeenSet() const
{
    return m_netTypeHasBeenSet;
}

string DescribeTDEMDialExecutionListRequest::GetOperator() const
{
    return m_operator;
}

void DescribeTDEMDialExecutionListRequest::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool DescribeTDEMDialExecutionListRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string DescribeTDEMDialExecutionListRequest::GetClientRegion() const
{
    return m_clientRegion;
}

void DescribeTDEMDialExecutionListRequest::SetClientRegion(const string& _clientRegion)
{
    m_clientRegion = _clientRegion;
    m_clientRegionHasBeenSet = true;
}

bool DescribeTDEMDialExecutionListRequest::ClientRegionHasBeenSet() const
{
    return m_clientRegionHasBeenSet;
}

string DescribeTDEMDialExecutionListRequest::GetTargetIp() const
{
    return m_targetIp;
}

void DescribeTDEMDialExecutionListRequest::SetTargetIp(const string& _targetIp)
{
    m_targetIp = _targetIp;
    m_targetIpHasBeenSet = true;
}

bool DescribeTDEMDialExecutionListRequest::TargetIpHasBeenSet() const
{
    return m_targetIpHasBeenSet;
}

int64_t DescribeTDEMDialExecutionListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeTDEMDialExecutionListRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeTDEMDialExecutionListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeTDEMDialExecutionListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeTDEMDialExecutionListRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeTDEMDialExecutionListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

bool DescribeTDEMDialExecutionListRequest::GetSuccess() const
{
    return m_success;
}

void DescribeTDEMDialExecutionListRequest::SetSuccess(const bool& _success)
{
    m_success = _success;
    m_successHasBeenSet = true;
}

bool DescribeTDEMDialExecutionListRequest::SuccessHasBeenSet() const
{
    return m_successHasBeenSet;
}

string DescribeTDEMDialExecutionListRequest::GetEnvironment() const
{
    return m_environment;
}

void DescribeTDEMDialExecutionListRequest::SetEnvironment(const string& _environment)
{
    m_environment = _environment;
    m_environmentHasBeenSet = true;
}

bool DescribeTDEMDialExecutionListRequest::EnvironmentHasBeenSet() const
{
    return m_environmentHasBeenSet;
}


