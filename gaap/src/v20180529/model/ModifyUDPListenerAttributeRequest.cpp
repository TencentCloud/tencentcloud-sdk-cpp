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

#include <tencentcloud/gaap/v20180529/model/ModifyUDPListenerAttributeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gaap::V20180529::Model;
using namespace std;

ModifyUDPListenerAttributeRequest::ModifyUDPListenerAttributeRequest() :
    m_listenerIdHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_proxyIdHasBeenSet(false),
    m_listenerNameHasBeenSet(false),
    m_schedulerHasBeenSet(false),
    m_delayLoopHasBeenSet(false),
    m_connectTimeoutHasBeenSet(false),
    m_healthyThresholdHasBeenSet(false),
    m_unhealthyThresholdHasBeenSet(false),
    m_failoverSwitchHasBeenSet(false),
    m_healthCheckHasBeenSet(false),
    m_checkTypeHasBeenSet(false),
    m_checkPortHasBeenSet(false),
    m_contextTypeHasBeenSet(false),
    m_sendContextHasBeenSet(false),
    m_recvContextHasBeenSet(false)
{
}

string ModifyUDPListenerAttributeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_listenerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_listenerId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_proxyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_proxyId.c_str(), allocator).Move(), allocator);
    }

    if (m_listenerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenerName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_listenerName.c_str(), allocator).Move(), allocator);
    }

    if (m_schedulerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scheduler";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scheduler.c_str(), allocator).Move(), allocator);
    }

    if (m_delayLoopHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DelayLoop";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_delayLoop, allocator);
    }

    if (m_connectTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectTimeout";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_connectTimeout, allocator);
    }

    if (m_healthyThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthyThreshold";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_healthyThreshold, allocator);
    }

    if (m_unhealthyThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnhealthyThreshold";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_unhealthyThreshold, allocator);
    }

    if (m_failoverSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailoverSwitch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_failoverSwitch, allocator);
    }

    if (m_healthCheckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheck";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_healthCheck, allocator);
    }

    if (m_checkTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_checkType.c_str(), allocator).Move(), allocator);
    }

    if (m_checkPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckPort";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_checkPort, allocator);
    }

    if (m_contextTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContextType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_contextType.c_str(), allocator).Move(), allocator);
    }

    if (m_sendContextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SendContext";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sendContext.c_str(), allocator).Move(), allocator);
    }

    if (m_recvContextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecvContext";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_recvContext.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyUDPListenerAttributeRequest::GetListenerId() const
{
    return m_listenerId;
}

void ModifyUDPListenerAttributeRequest::SetListenerId(const string& _listenerId)
{
    m_listenerId = _listenerId;
    m_listenerIdHasBeenSet = true;
}

bool ModifyUDPListenerAttributeRequest::ListenerIdHasBeenSet() const
{
    return m_listenerIdHasBeenSet;
}

string ModifyUDPListenerAttributeRequest::GetGroupId() const
{
    return m_groupId;
}

void ModifyUDPListenerAttributeRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool ModifyUDPListenerAttributeRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string ModifyUDPListenerAttributeRequest::GetProxyId() const
{
    return m_proxyId;
}

void ModifyUDPListenerAttributeRequest::SetProxyId(const string& _proxyId)
{
    m_proxyId = _proxyId;
    m_proxyIdHasBeenSet = true;
}

bool ModifyUDPListenerAttributeRequest::ProxyIdHasBeenSet() const
{
    return m_proxyIdHasBeenSet;
}

string ModifyUDPListenerAttributeRequest::GetListenerName() const
{
    return m_listenerName;
}

void ModifyUDPListenerAttributeRequest::SetListenerName(const string& _listenerName)
{
    m_listenerName = _listenerName;
    m_listenerNameHasBeenSet = true;
}

bool ModifyUDPListenerAttributeRequest::ListenerNameHasBeenSet() const
{
    return m_listenerNameHasBeenSet;
}

string ModifyUDPListenerAttributeRequest::GetScheduler() const
{
    return m_scheduler;
}

void ModifyUDPListenerAttributeRequest::SetScheduler(const string& _scheduler)
{
    m_scheduler = _scheduler;
    m_schedulerHasBeenSet = true;
}

bool ModifyUDPListenerAttributeRequest::SchedulerHasBeenSet() const
{
    return m_schedulerHasBeenSet;
}

uint64_t ModifyUDPListenerAttributeRequest::GetDelayLoop() const
{
    return m_delayLoop;
}

void ModifyUDPListenerAttributeRequest::SetDelayLoop(const uint64_t& _delayLoop)
{
    m_delayLoop = _delayLoop;
    m_delayLoopHasBeenSet = true;
}

bool ModifyUDPListenerAttributeRequest::DelayLoopHasBeenSet() const
{
    return m_delayLoopHasBeenSet;
}

uint64_t ModifyUDPListenerAttributeRequest::GetConnectTimeout() const
{
    return m_connectTimeout;
}

void ModifyUDPListenerAttributeRequest::SetConnectTimeout(const uint64_t& _connectTimeout)
{
    m_connectTimeout = _connectTimeout;
    m_connectTimeoutHasBeenSet = true;
}

bool ModifyUDPListenerAttributeRequest::ConnectTimeoutHasBeenSet() const
{
    return m_connectTimeoutHasBeenSet;
}

uint64_t ModifyUDPListenerAttributeRequest::GetHealthyThreshold() const
{
    return m_healthyThreshold;
}

void ModifyUDPListenerAttributeRequest::SetHealthyThreshold(const uint64_t& _healthyThreshold)
{
    m_healthyThreshold = _healthyThreshold;
    m_healthyThresholdHasBeenSet = true;
}

bool ModifyUDPListenerAttributeRequest::HealthyThresholdHasBeenSet() const
{
    return m_healthyThresholdHasBeenSet;
}

uint64_t ModifyUDPListenerAttributeRequest::GetUnhealthyThreshold() const
{
    return m_unhealthyThreshold;
}

void ModifyUDPListenerAttributeRequest::SetUnhealthyThreshold(const uint64_t& _unhealthyThreshold)
{
    m_unhealthyThreshold = _unhealthyThreshold;
    m_unhealthyThresholdHasBeenSet = true;
}

bool ModifyUDPListenerAttributeRequest::UnhealthyThresholdHasBeenSet() const
{
    return m_unhealthyThresholdHasBeenSet;
}

int64_t ModifyUDPListenerAttributeRequest::GetFailoverSwitch() const
{
    return m_failoverSwitch;
}

void ModifyUDPListenerAttributeRequest::SetFailoverSwitch(const int64_t& _failoverSwitch)
{
    m_failoverSwitch = _failoverSwitch;
    m_failoverSwitchHasBeenSet = true;
}

bool ModifyUDPListenerAttributeRequest::FailoverSwitchHasBeenSet() const
{
    return m_failoverSwitchHasBeenSet;
}

uint64_t ModifyUDPListenerAttributeRequest::GetHealthCheck() const
{
    return m_healthCheck;
}

void ModifyUDPListenerAttributeRequest::SetHealthCheck(const uint64_t& _healthCheck)
{
    m_healthCheck = _healthCheck;
    m_healthCheckHasBeenSet = true;
}

bool ModifyUDPListenerAttributeRequest::HealthCheckHasBeenSet() const
{
    return m_healthCheckHasBeenSet;
}

string ModifyUDPListenerAttributeRequest::GetCheckType() const
{
    return m_checkType;
}

void ModifyUDPListenerAttributeRequest::SetCheckType(const string& _checkType)
{
    m_checkType = _checkType;
    m_checkTypeHasBeenSet = true;
}

bool ModifyUDPListenerAttributeRequest::CheckTypeHasBeenSet() const
{
    return m_checkTypeHasBeenSet;
}

int64_t ModifyUDPListenerAttributeRequest::GetCheckPort() const
{
    return m_checkPort;
}

void ModifyUDPListenerAttributeRequest::SetCheckPort(const int64_t& _checkPort)
{
    m_checkPort = _checkPort;
    m_checkPortHasBeenSet = true;
}

bool ModifyUDPListenerAttributeRequest::CheckPortHasBeenSet() const
{
    return m_checkPortHasBeenSet;
}

string ModifyUDPListenerAttributeRequest::GetContextType() const
{
    return m_contextType;
}

void ModifyUDPListenerAttributeRequest::SetContextType(const string& _contextType)
{
    m_contextType = _contextType;
    m_contextTypeHasBeenSet = true;
}

bool ModifyUDPListenerAttributeRequest::ContextTypeHasBeenSet() const
{
    return m_contextTypeHasBeenSet;
}

string ModifyUDPListenerAttributeRequest::GetSendContext() const
{
    return m_sendContext;
}

void ModifyUDPListenerAttributeRequest::SetSendContext(const string& _sendContext)
{
    m_sendContext = _sendContext;
    m_sendContextHasBeenSet = true;
}

bool ModifyUDPListenerAttributeRequest::SendContextHasBeenSet() const
{
    return m_sendContextHasBeenSet;
}

string ModifyUDPListenerAttributeRequest::GetRecvContext() const
{
    return m_recvContext;
}

void ModifyUDPListenerAttributeRequest::SetRecvContext(const string& _recvContext)
{
    m_recvContext = _recvContext;
    m_recvContextHasBeenSet = true;
}

bool ModifyUDPListenerAttributeRequest::RecvContextHasBeenSet() const
{
    return m_recvContextHasBeenSet;
}


