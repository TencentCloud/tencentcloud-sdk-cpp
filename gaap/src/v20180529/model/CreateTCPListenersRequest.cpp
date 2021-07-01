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

#include <tencentcloud/gaap/v20180529/model/CreateTCPListenersRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gaap::V20180529::Model;
using namespace std;

CreateTCPListenersRequest::CreateTCPListenersRequest() :
    m_listenerNameHasBeenSet(false),
    m_portsHasBeenSet(false),
    m_schedulerHasBeenSet(false),
    m_healthCheckHasBeenSet(false),
    m_realServerTypeHasBeenSet(false),
    m_proxyIdHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_delayLoopHasBeenSet(false),
    m_connectTimeoutHasBeenSet(false),
    m_realServerPortsHasBeenSet(false),
    m_clientIPMethodHasBeenSet(false),
    m_failoverSwitchHasBeenSet(false),
    m_healthyThresholdHasBeenSet(false),
    m_unhealthyThresholdHasBeenSet(false)
{
}

string CreateTCPListenersRequest::ToJsonString() const
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

    if (m_healthCheckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheck";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_healthCheck, allocator);
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

    if (m_clientIPMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientIPMethod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_clientIPMethod, allocator);
    }

    if (m_failoverSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailoverSwitch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_failoverSwitch, allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateTCPListenersRequest::GetListenerName() const
{
    return m_listenerName;
}

void CreateTCPListenersRequest::SetListenerName(const string& _listenerName)
{
    m_listenerName = _listenerName;
    m_listenerNameHasBeenSet = true;
}

bool CreateTCPListenersRequest::ListenerNameHasBeenSet() const
{
    return m_listenerNameHasBeenSet;
}

vector<uint64_t> CreateTCPListenersRequest::GetPorts() const
{
    return m_ports;
}

void CreateTCPListenersRequest::SetPorts(const vector<uint64_t>& _ports)
{
    m_ports = _ports;
    m_portsHasBeenSet = true;
}

bool CreateTCPListenersRequest::PortsHasBeenSet() const
{
    return m_portsHasBeenSet;
}

string CreateTCPListenersRequest::GetScheduler() const
{
    return m_scheduler;
}

void CreateTCPListenersRequest::SetScheduler(const string& _scheduler)
{
    m_scheduler = _scheduler;
    m_schedulerHasBeenSet = true;
}

bool CreateTCPListenersRequest::SchedulerHasBeenSet() const
{
    return m_schedulerHasBeenSet;
}

uint64_t CreateTCPListenersRequest::GetHealthCheck() const
{
    return m_healthCheck;
}

void CreateTCPListenersRequest::SetHealthCheck(const uint64_t& _healthCheck)
{
    m_healthCheck = _healthCheck;
    m_healthCheckHasBeenSet = true;
}

bool CreateTCPListenersRequest::HealthCheckHasBeenSet() const
{
    return m_healthCheckHasBeenSet;
}

string CreateTCPListenersRequest::GetRealServerType() const
{
    return m_realServerType;
}

void CreateTCPListenersRequest::SetRealServerType(const string& _realServerType)
{
    m_realServerType = _realServerType;
    m_realServerTypeHasBeenSet = true;
}

bool CreateTCPListenersRequest::RealServerTypeHasBeenSet() const
{
    return m_realServerTypeHasBeenSet;
}

string CreateTCPListenersRequest::GetProxyId() const
{
    return m_proxyId;
}

void CreateTCPListenersRequest::SetProxyId(const string& _proxyId)
{
    m_proxyId = _proxyId;
    m_proxyIdHasBeenSet = true;
}

bool CreateTCPListenersRequest::ProxyIdHasBeenSet() const
{
    return m_proxyIdHasBeenSet;
}

string CreateTCPListenersRequest::GetGroupId() const
{
    return m_groupId;
}

void CreateTCPListenersRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool CreateTCPListenersRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

uint64_t CreateTCPListenersRequest::GetDelayLoop() const
{
    return m_delayLoop;
}

void CreateTCPListenersRequest::SetDelayLoop(const uint64_t& _delayLoop)
{
    m_delayLoop = _delayLoop;
    m_delayLoopHasBeenSet = true;
}

bool CreateTCPListenersRequest::DelayLoopHasBeenSet() const
{
    return m_delayLoopHasBeenSet;
}

uint64_t CreateTCPListenersRequest::GetConnectTimeout() const
{
    return m_connectTimeout;
}

void CreateTCPListenersRequest::SetConnectTimeout(const uint64_t& _connectTimeout)
{
    m_connectTimeout = _connectTimeout;
    m_connectTimeoutHasBeenSet = true;
}

bool CreateTCPListenersRequest::ConnectTimeoutHasBeenSet() const
{
    return m_connectTimeoutHasBeenSet;
}

vector<uint64_t> CreateTCPListenersRequest::GetRealServerPorts() const
{
    return m_realServerPorts;
}

void CreateTCPListenersRequest::SetRealServerPorts(const vector<uint64_t>& _realServerPorts)
{
    m_realServerPorts = _realServerPorts;
    m_realServerPortsHasBeenSet = true;
}

bool CreateTCPListenersRequest::RealServerPortsHasBeenSet() const
{
    return m_realServerPortsHasBeenSet;
}

int64_t CreateTCPListenersRequest::GetClientIPMethod() const
{
    return m_clientIPMethod;
}

void CreateTCPListenersRequest::SetClientIPMethod(const int64_t& _clientIPMethod)
{
    m_clientIPMethod = _clientIPMethod;
    m_clientIPMethodHasBeenSet = true;
}

bool CreateTCPListenersRequest::ClientIPMethodHasBeenSet() const
{
    return m_clientIPMethodHasBeenSet;
}

int64_t CreateTCPListenersRequest::GetFailoverSwitch() const
{
    return m_failoverSwitch;
}

void CreateTCPListenersRequest::SetFailoverSwitch(const int64_t& _failoverSwitch)
{
    m_failoverSwitch = _failoverSwitch;
    m_failoverSwitchHasBeenSet = true;
}

bool CreateTCPListenersRequest::FailoverSwitchHasBeenSet() const
{
    return m_failoverSwitchHasBeenSet;
}

uint64_t CreateTCPListenersRequest::GetHealthyThreshold() const
{
    return m_healthyThreshold;
}

void CreateTCPListenersRequest::SetHealthyThreshold(const uint64_t& _healthyThreshold)
{
    m_healthyThreshold = _healthyThreshold;
    m_healthyThresholdHasBeenSet = true;
}

bool CreateTCPListenersRequest::HealthyThresholdHasBeenSet() const
{
    return m_healthyThresholdHasBeenSet;
}

uint64_t CreateTCPListenersRequest::GetUnhealthyThreshold() const
{
    return m_unhealthyThreshold;
}

void CreateTCPListenersRequest::SetUnhealthyThreshold(const uint64_t& _unhealthyThreshold)
{
    m_unhealthyThreshold = _unhealthyThreshold;
    m_unhealthyThresholdHasBeenSet = true;
}

bool CreateTCPListenersRequest::UnhealthyThresholdHasBeenSet() const
{
    return m_unhealthyThresholdHasBeenSet;
}


