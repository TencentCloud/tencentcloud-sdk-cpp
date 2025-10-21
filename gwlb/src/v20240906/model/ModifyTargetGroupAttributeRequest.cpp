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

#include <tencentcloud/gwlb/v20240906/model/ModifyTargetGroupAttributeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gwlb::V20240906::Model;
using namespace std;

ModifyTargetGroupAttributeRequest::ModifyTargetGroupAttributeRequest() :
    m_targetGroupIdHasBeenSet(false),
    m_targetGroupNameHasBeenSet(false),
    m_healthCheckHasBeenSet(false),
    m_allDeadToAliveHasBeenSet(false),
    m_tcpIdleConnectTimeoutHasBeenSet(false),
    m_othersIdleConnectTimeoutHasBeenSet(false),
    m_rescheduleUnbindRsHasBeenSet(false),
    m_rescheduleUnbindRsStartTimeHasBeenSet(false),
    m_rescheduleUnhealthyHasBeenSet(false),
    m_rescheduleUnhealthyStartTimeHasBeenSet(false)
{
}

string ModifyTargetGroupAttributeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_targetGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_targetGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetGroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_healthCheckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheck";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_healthCheck.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_allDeadToAliveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllDeadToAlive";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_allDeadToAlive, allocator);
    }

    if (m_tcpIdleConnectTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TcpIdleConnectTimeout";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_tcpIdleConnectTimeout, allocator);
    }

    if (m_othersIdleConnectTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OthersIdleConnectTimeout";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_othersIdleConnectTimeout, allocator);
    }

    if (m_rescheduleUnbindRsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RescheduleUnbindRs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_rescheduleUnbindRs, allocator);
    }

    if (m_rescheduleUnbindRsStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RescheduleUnbindRsStartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_rescheduleUnbindRsStartTime, allocator);
    }

    if (m_rescheduleUnhealthyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RescheduleUnhealthy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_rescheduleUnhealthy, allocator);
    }

    if (m_rescheduleUnhealthyStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RescheduleUnhealthyStartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_rescheduleUnhealthyStartTime, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyTargetGroupAttributeRequest::GetTargetGroupId() const
{
    return m_targetGroupId;
}

void ModifyTargetGroupAttributeRequest::SetTargetGroupId(const string& _targetGroupId)
{
    m_targetGroupId = _targetGroupId;
    m_targetGroupIdHasBeenSet = true;
}

bool ModifyTargetGroupAttributeRequest::TargetGroupIdHasBeenSet() const
{
    return m_targetGroupIdHasBeenSet;
}

string ModifyTargetGroupAttributeRequest::GetTargetGroupName() const
{
    return m_targetGroupName;
}

void ModifyTargetGroupAttributeRequest::SetTargetGroupName(const string& _targetGroupName)
{
    m_targetGroupName = _targetGroupName;
    m_targetGroupNameHasBeenSet = true;
}

bool ModifyTargetGroupAttributeRequest::TargetGroupNameHasBeenSet() const
{
    return m_targetGroupNameHasBeenSet;
}

TargetGroupHealthCheck ModifyTargetGroupAttributeRequest::GetHealthCheck() const
{
    return m_healthCheck;
}

void ModifyTargetGroupAttributeRequest::SetHealthCheck(const TargetGroupHealthCheck& _healthCheck)
{
    m_healthCheck = _healthCheck;
    m_healthCheckHasBeenSet = true;
}

bool ModifyTargetGroupAttributeRequest::HealthCheckHasBeenSet() const
{
    return m_healthCheckHasBeenSet;
}

bool ModifyTargetGroupAttributeRequest::GetAllDeadToAlive() const
{
    return m_allDeadToAlive;
}

void ModifyTargetGroupAttributeRequest::SetAllDeadToAlive(const bool& _allDeadToAlive)
{
    m_allDeadToAlive = _allDeadToAlive;
    m_allDeadToAliveHasBeenSet = true;
}

bool ModifyTargetGroupAttributeRequest::AllDeadToAliveHasBeenSet() const
{
    return m_allDeadToAliveHasBeenSet;
}

int64_t ModifyTargetGroupAttributeRequest::GetTcpIdleConnectTimeout() const
{
    return m_tcpIdleConnectTimeout;
}

void ModifyTargetGroupAttributeRequest::SetTcpIdleConnectTimeout(const int64_t& _tcpIdleConnectTimeout)
{
    m_tcpIdleConnectTimeout = _tcpIdleConnectTimeout;
    m_tcpIdleConnectTimeoutHasBeenSet = true;
}

bool ModifyTargetGroupAttributeRequest::TcpIdleConnectTimeoutHasBeenSet() const
{
    return m_tcpIdleConnectTimeoutHasBeenSet;
}

int64_t ModifyTargetGroupAttributeRequest::GetOthersIdleConnectTimeout() const
{
    return m_othersIdleConnectTimeout;
}

void ModifyTargetGroupAttributeRequest::SetOthersIdleConnectTimeout(const int64_t& _othersIdleConnectTimeout)
{
    m_othersIdleConnectTimeout = _othersIdleConnectTimeout;
    m_othersIdleConnectTimeoutHasBeenSet = true;
}

bool ModifyTargetGroupAttributeRequest::OthersIdleConnectTimeoutHasBeenSet() const
{
    return m_othersIdleConnectTimeoutHasBeenSet;
}

bool ModifyTargetGroupAttributeRequest::GetRescheduleUnbindRs() const
{
    return m_rescheduleUnbindRs;
}

void ModifyTargetGroupAttributeRequest::SetRescheduleUnbindRs(const bool& _rescheduleUnbindRs)
{
    m_rescheduleUnbindRs = _rescheduleUnbindRs;
    m_rescheduleUnbindRsHasBeenSet = true;
}

bool ModifyTargetGroupAttributeRequest::RescheduleUnbindRsHasBeenSet() const
{
    return m_rescheduleUnbindRsHasBeenSet;
}

int64_t ModifyTargetGroupAttributeRequest::GetRescheduleUnbindRsStartTime() const
{
    return m_rescheduleUnbindRsStartTime;
}

void ModifyTargetGroupAttributeRequest::SetRescheduleUnbindRsStartTime(const int64_t& _rescheduleUnbindRsStartTime)
{
    m_rescheduleUnbindRsStartTime = _rescheduleUnbindRsStartTime;
    m_rescheduleUnbindRsStartTimeHasBeenSet = true;
}

bool ModifyTargetGroupAttributeRequest::RescheduleUnbindRsStartTimeHasBeenSet() const
{
    return m_rescheduleUnbindRsStartTimeHasBeenSet;
}

bool ModifyTargetGroupAttributeRequest::GetRescheduleUnhealthy() const
{
    return m_rescheduleUnhealthy;
}

void ModifyTargetGroupAttributeRequest::SetRescheduleUnhealthy(const bool& _rescheduleUnhealthy)
{
    m_rescheduleUnhealthy = _rescheduleUnhealthy;
    m_rescheduleUnhealthyHasBeenSet = true;
}

bool ModifyTargetGroupAttributeRequest::RescheduleUnhealthyHasBeenSet() const
{
    return m_rescheduleUnhealthyHasBeenSet;
}

int64_t ModifyTargetGroupAttributeRequest::GetRescheduleUnhealthyStartTime() const
{
    return m_rescheduleUnhealthyStartTime;
}

void ModifyTargetGroupAttributeRequest::SetRescheduleUnhealthyStartTime(const int64_t& _rescheduleUnhealthyStartTime)
{
    m_rescheduleUnhealthyStartTime = _rescheduleUnhealthyStartTime;
    m_rescheduleUnhealthyStartTimeHasBeenSet = true;
}

bool ModifyTargetGroupAttributeRequest::RescheduleUnhealthyStartTimeHasBeenSet() const
{
    return m_rescheduleUnhealthyStartTimeHasBeenSet;
}


