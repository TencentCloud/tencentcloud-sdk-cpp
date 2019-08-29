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
using namespace rapidjson;
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
    m_realServerPortsHasBeenSet(false)
{
}

string CreateTCPListenersRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_listenerNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ListenerName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_listenerName.c_str(), allocator).Move(), allocator);
    }

    if (m_portsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Ports";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_ports.begin(); itr != m_ports.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetUint64(*itr), allocator);
        }
    }

    if (m_schedulerHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Scheduler";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_scheduler.c_str(), allocator).Move(), allocator);
    }

    if (m_healthCheckHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "HealthCheck";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_healthCheck, allocator);
    }

    if (m_realServerTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RealServerType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_realServerType.c_str(), allocator).Move(), allocator);
    }

    if (m_proxyIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProxyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_proxyId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_delayLoopHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DelayLoop";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_delayLoop, allocator);
    }

    if (m_connectTimeoutHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ConnectTimeout";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_connectTimeout, allocator);
    }

    if (m_realServerPortsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RealServerPorts";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_realServerPorts.begin(); itr != m_realServerPorts.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetUint64(*itr), allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
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


