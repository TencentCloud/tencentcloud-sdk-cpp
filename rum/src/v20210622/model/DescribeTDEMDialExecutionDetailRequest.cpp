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

#include <tencentcloud/rum/v20210622/model/DescribeTDEMDialExecutionDetailRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

DescribeTDEMDialExecutionDetailRequest::DescribeTDEMDialExecutionDetailRequest() :
    m_appIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_taskSessionIdHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_appVersionHasBeenSet(false),
    m_deviceHasBeenSet(false),
    m_netTypeHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_clientRegionHasBeenSet(false),
    m_targetIpHasBeenSet(false),
    m_environmentHasBeenSet(false)
{
}

string DescribeTDEMDialExecutionDetailRequest::ToJsonString() const
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

    if (m_taskSessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskSessionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskSessionId.c_str(), allocator).Move(), allocator);
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


string DescribeTDEMDialExecutionDetailRequest::GetAppId() const
{
    return m_appId;
}

void DescribeTDEMDialExecutionDetailRequest::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool DescribeTDEMDialExecutionDetailRequest::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

int64_t DescribeTDEMDialExecutionDetailRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeTDEMDialExecutionDetailRequest::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeTDEMDialExecutionDetailRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t DescribeTDEMDialExecutionDetailRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeTDEMDialExecutionDetailRequest::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeTDEMDialExecutionDetailRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeTDEMDialExecutionDetailRequest::GetTaskId() const
{
    return m_taskId;
}

void DescribeTDEMDialExecutionDetailRequest::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool DescribeTDEMDialExecutionDetailRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string DescribeTDEMDialExecutionDetailRequest::GetTaskSessionId() const
{
    return m_taskSessionId;
}

void DescribeTDEMDialExecutionDetailRequest::SetTaskSessionId(const string& _taskSessionId)
{
    m_taskSessionId = _taskSessionId;
    m_taskSessionIdHasBeenSet = true;
}

bool DescribeTDEMDialExecutionDetailRequest::TaskSessionIdHasBeenSet() const
{
    return m_taskSessionIdHasBeenSet;
}

string DescribeTDEMDialExecutionDetailRequest::GetPlatform() const
{
    return m_platform;
}

void DescribeTDEMDialExecutionDetailRequest::SetPlatform(const string& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool DescribeTDEMDialExecutionDetailRequest::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

string DescribeTDEMDialExecutionDetailRequest::GetAppVersion() const
{
    return m_appVersion;
}

void DescribeTDEMDialExecutionDetailRequest::SetAppVersion(const string& _appVersion)
{
    m_appVersion = _appVersion;
    m_appVersionHasBeenSet = true;
}

bool DescribeTDEMDialExecutionDetailRequest::AppVersionHasBeenSet() const
{
    return m_appVersionHasBeenSet;
}

string DescribeTDEMDialExecutionDetailRequest::GetDevice() const
{
    return m_device;
}

void DescribeTDEMDialExecutionDetailRequest::SetDevice(const string& _device)
{
    m_device = _device;
    m_deviceHasBeenSet = true;
}

bool DescribeTDEMDialExecutionDetailRequest::DeviceHasBeenSet() const
{
    return m_deviceHasBeenSet;
}

string DescribeTDEMDialExecutionDetailRequest::GetNetType() const
{
    return m_netType;
}

void DescribeTDEMDialExecutionDetailRequest::SetNetType(const string& _netType)
{
    m_netType = _netType;
    m_netTypeHasBeenSet = true;
}

bool DescribeTDEMDialExecutionDetailRequest::NetTypeHasBeenSet() const
{
    return m_netTypeHasBeenSet;
}

string DescribeTDEMDialExecutionDetailRequest::GetOperator() const
{
    return m_operator;
}

void DescribeTDEMDialExecutionDetailRequest::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool DescribeTDEMDialExecutionDetailRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string DescribeTDEMDialExecutionDetailRequest::GetClientRegion() const
{
    return m_clientRegion;
}

void DescribeTDEMDialExecutionDetailRequest::SetClientRegion(const string& _clientRegion)
{
    m_clientRegion = _clientRegion;
    m_clientRegionHasBeenSet = true;
}

bool DescribeTDEMDialExecutionDetailRequest::ClientRegionHasBeenSet() const
{
    return m_clientRegionHasBeenSet;
}

string DescribeTDEMDialExecutionDetailRequest::GetTargetIp() const
{
    return m_targetIp;
}

void DescribeTDEMDialExecutionDetailRequest::SetTargetIp(const string& _targetIp)
{
    m_targetIp = _targetIp;
    m_targetIpHasBeenSet = true;
}

bool DescribeTDEMDialExecutionDetailRequest::TargetIpHasBeenSet() const
{
    return m_targetIpHasBeenSet;
}

string DescribeTDEMDialExecutionDetailRequest::GetEnvironment() const
{
    return m_environment;
}

void DescribeTDEMDialExecutionDetailRequest::SetEnvironment(const string& _environment)
{
    m_environment = _environment;
    m_environmentHasBeenSet = true;
}

bool DescribeTDEMDialExecutionDetailRequest::EnvironmentHasBeenSet() const
{
    return m_environmentHasBeenSet;
}


