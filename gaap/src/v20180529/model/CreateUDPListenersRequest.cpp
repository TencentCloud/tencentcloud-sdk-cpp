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

#include <tencentcloud/gaap/v20180529/model/CreateUDPListenersRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gaap::V20180529::Model;
using namespace std;

CreateUDPListenersRequest::CreateUDPListenersRequest() :
    m_listenerNameHasBeenSet(false),
    m_portsHasBeenSet(false),
    m_schedulerHasBeenSet(false),
    m_realServerTypeHasBeenSet(false),
    m_proxyIdHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_realServerPortsHasBeenSet(false),
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

string CreateUDPListenersRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_listenerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenerName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_listenerName.c_str(), allocator).Move(), allocator);
    }

    if (m_portsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ports";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ports.begin(); itr != m_ports.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_schedulerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scheduler";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scheduler.c_str(), allocator).Move(), allocator);
    }

    if (m_realServerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealServerType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_realServerType.c_str(), allocator).Move(), allocator);
    }

    if (m_proxyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_proxyId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_realServerPortsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealServerPorts";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_realServerPorts.begin(); itr != m_realServerPorts.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
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


string CreateUDPListenersRequest::GetListenerName() const
{
    return m_listenerName;
}

void CreateUDPListenersRequest::SetListenerName(const string& _listenerName)
{
    m_listenerName = _listenerName;
    m_listenerNameHasBeenSet = true;
}

bool CreateUDPListenersRequest::ListenerNameHasBeenSet() const
{
    return m_listenerNameHasBeenSet;
}

vector<uint64_t> CreateUDPListenersRequest::GetPorts() const
{
    return m_ports;
}

void CreateUDPListenersRequest::SetPorts(const vector<uint64_t>& _ports)
{
    m_ports = _ports;
    m_portsHasBeenSet = true;
}

bool CreateUDPListenersRequest::PortsHasBeenSet() const
{
    return m_portsHasBeenSet;
}

string CreateUDPListenersRequest::GetScheduler() const
{
    return m_scheduler;
}

void CreateUDPListenersRequest::SetScheduler(const string& _scheduler)
{
    m_scheduler = _scheduler;
    m_schedulerHasBeenSet = true;
}

bool CreateUDPListenersRequest::SchedulerHasBeenSet() const
{
    return m_schedulerHasBeenSet;
}

string CreateUDPListenersRequest::GetRealServerType() const
{
    return m_realServerType;
}

void CreateUDPListenersRequest::SetRealServerType(const string& _realServerType)
{
    m_realServerType = _realServerType;
    m_realServerTypeHasBeenSet = true;
}

bool CreateUDPListenersRequest::RealServerTypeHasBeenSet() const
{
    return m_realServerTypeHasBeenSet;
}

string CreateUDPListenersRequest::GetProxyId() const
{
    return m_proxyId;
}

void CreateUDPListenersRequest::SetProxyId(const string& _proxyId)
{
    m_proxyId = _proxyId;
    m_proxyIdHasBeenSet = true;
}

bool CreateUDPListenersRequest::ProxyIdHasBeenSet() const
{
    return m_proxyIdHasBeenSet;
}

string CreateUDPListenersRequest::GetGroupId() const
{
    return m_groupId;
}

void CreateUDPListenersRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool CreateUDPListenersRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

vector<uint64_t> CreateUDPListenersRequest::GetRealServerPorts() const
{
    return m_realServerPorts;
}

void CreateUDPListenersRequest::SetRealServerPorts(const vector<uint64_t>& _realServerPorts)
{
    m_realServerPorts = _realServerPorts;
    m_realServerPortsHasBeenSet = true;
}

bool CreateUDPListenersRequest::RealServerPortsHasBeenSet() const
{
    return m_realServerPortsHasBeenSet;
}

uint64_t CreateUDPListenersRequest::GetDelayLoop() const
{
    return m_delayLoop;
}

void CreateUDPListenersRequest::SetDelayLoop(const uint64_t& _delayLoop)
{
    m_delayLoop = _delayLoop;
    m_delayLoopHasBeenSet = true;
}

bool CreateUDPListenersRequest::DelayLoopHasBeenSet() const
{
    return m_delayLoopHasBeenSet;
}

uint64_t CreateUDPListenersRequest::GetConnectTimeout() const
{
    return m_connectTimeout;
}

void CreateUDPListenersRequest::SetConnectTimeout(const uint64_t& _connectTimeout)
{
    m_connectTimeout = _connectTimeout;
    m_connectTimeoutHasBeenSet = true;
}

bool CreateUDPListenersRequest::ConnectTimeoutHasBeenSet() const
{
    return m_connectTimeoutHasBeenSet;
}

uint64_t CreateUDPListenersRequest::GetHealthyThreshold() const
{
    return m_healthyThreshold;
}

void CreateUDPListenersRequest::SetHealthyThreshold(const uint64_t& _healthyThreshold)
{
    m_healthyThreshold = _healthyThreshold;
    m_healthyThresholdHasBeenSet = true;
}

bool CreateUDPListenersRequest::HealthyThresholdHasBeenSet() const
{
    return m_healthyThresholdHasBeenSet;
}

uint64_t CreateUDPListenersRequest::GetUnhealthyThreshold() const
{
    return m_unhealthyThreshold;
}

void CreateUDPListenersRequest::SetUnhealthyThreshold(const uint64_t& _unhealthyThreshold)
{
    m_unhealthyThreshold = _unhealthyThreshold;
    m_unhealthyThresholdHasBeenSet = true;
}

bool CreateUDPListenersRequest::UnhealthyThresholdHasBeenSet() const
{
    return m_unhealthyThresholdHasBeenSet;
}

int64_t CreateUDPListenersRequest::GetFailoverSwitch() const
{
    return m_failoverSwitch;
}

void CreateUDPListenersRequest::SetFailoverSwitch(const int64_t& _failoverSwitch)
{
    m_failoverSwitch = _failoverSwitch;
    m_failoverSwitchHasBeenSet = true;
}

bool CreateUDPListenersRequest::FailoverSwitchHasBeenSet() const
{
    return m_failoverSwitchHasBeenSet;
}

uint64_t CreateUDPListenersRequest::GetHealthCheck() const
{
    return m_healthCheck;
}

void CreateUDPListenersRequest::SetHealthCheck(const uint64_t& _healthCheck)
{
    m_healthCheck = _healthCheck;
    m_healthCheckHasBeenSet = true;
}

bool CreateUDPListenersRequest::HealthCheckHasBeenSet() const
{
    return m_healthCheckHasBeenSet;
}

string CreateUDPListenersRequest::GetCheckType() const
{
    return m_checkType;
}

void CreateUDPListenersRequest::SetCheckType(const string& _checkType)
{
    m_checkType = _checkType;
    m_checkTypeHasBeenSet = true;
}

bool CreateUDPListenersRequest::CheckTypeHasBeenSet() const
{
    return m_checkTypeHasBeenSet;
}

int64_t CreateUDPListenersRequest::GetCheckPort() const
{
    return m_checkPort;
}

void CreateUDPListenersRequest::SetCheckPort(const int64_t& _checkPort)
{
    m_checkPort = _checkPort;
    m_checkPortHasBeenSet = true;
}

bool CreateUDPListenersRequest::CheckPortHasBeenSet() const
{
    return m_checkPortHasBeenSet;
}

string CreateUDPListenersRequest::GetContextType() const
{
    return m_contextType;
}

void CreateUDPListenersRequest::SetContextType(const string& _contextType)
{
    m_contextType = _contextType;
    m_contextTypeHasBeenSet = true;
}

bool CreateUDPListenersRequest::ContextTypeHasBeenSet() const
{
    return m_contextTypeHasBeenSet;
}

string CreateUDPListenersRequest::GetSendContext() const
{
    return m_sendContext;
}

void CreateUDPListenersRequest::SetSendContext(const string& _sendContext)
{
    m_sendContext = _sendContext;
    m_sendContextHasBeenSet = true;
}

bool CreateUDPListenersRequest::SendContextHasBeenSet() const
{
    return m_sendContextHasBeenSet;
}

string CreateUDPListenersRequest::GetRecvContext() const
{
    return m_recvContext;
}

void CreateUDPListenersRequest::SetRecvContext(const string& _recvContext)
{
    m_recvContext = _recvContext;
    m_recvContextHasBeenSet = true;
}

bool CreateUDPListenersRequest::RecvContextHasBeenSet() const
{
    return m_recvContextHasBeenSet;
}


