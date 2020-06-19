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

#include <tencentcloud/clb/v20180317/model/CreateListenerRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Clb::V20180317::Model;
using namespace rapidjson;
using namespace std;

CreateListenerRequest::CreateListenerRequest() :
    m_loadBalancerIdHasBeenSet(false),
    m_portsHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_listenerNamesHasBeenSet(false),
    m_healthCheckHasBeenSet(false),
    m_certificateHasBeenSet(false),
    m_sessionExpireTimeHasBeenSet(false),
    m_schedulerHasBeenSet(false),
    m_sniSwitchHasBeenSet(false),
    m_targetTypeHasBeenSet(false)
{
}

string CreateListenerRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_loadBalancerIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LoadBalancerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_loadBalancerId.c_str(), allocator).Move(), allocator);
    }

    if (m_portsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Ports";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_ports.begin(); itr != m_ports.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetInt64(*itr), allocator);
        }
    }

    if (m_protocolHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_listenerNamesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ListenerNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_listenerNames.begin(); itr != m_listenerNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_healthCheckHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "HealthCheck";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_healthCheck.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_certificateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Certificate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_certificate.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_sessionExpireTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SessionExpireTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sessionExpireTime, allocator);
    }

    if (m_schedulerHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Scheduler";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_scheduler.c_str(), allocator).Move(), allocator);
    }

    if (m_sniSwitchHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SniSwitch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sniSwitch, allocator);
    }

    if (m_targetTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TargetType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_targetType.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateListenerRequest::GetLoadBalancerId() const
{
    return m_loadBalancerId;
}

void CreateListenerRequest::SetLoadBalancerId(const string& _loadBalancerId)
{
    m_loadBalancerId = _loadBalancerId;
    m_loadBalancerIdHasBeenSet = true;
}

bool CreateListenerRequest::LoadBalancerIdHasBeenSet() const
{
    return m_loadBalancerIdHasBeenSet;
}

vector<int64_t> CreateListenerRequest::GetPorts() const
{
    return m_ports;
}

void CreateListenerRequest::SetPorts(const vector<int64_t>& _ports)
{
    m_ports = _ports;
    m_portsHasBeenSet = true;
}

bool CreateListenerRequest::PortsHasBeenSet() const
{
    return m_portsHasBeenSet;
}

string CreateListenerRequest::GetProtocol() const
{
    return m_protocol;
}

void CreateListenerRequest::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool CreateListenerRequest::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

vector<string> CreateListenerRequest::GetListenerNames() const
{
    return m_listenerNames;
}

void CreateListenerRequest::SetListenerNames(const vector<string>& _listenerNames)
{
    m_listenerNames = _listenerNames;
    m_listenerNamesHasBeenSet = true;
}

bool CreateListenerRequest::ListenerNamesHasBeenSet() const
{
    return m_listenerNamesHasBeenSet;
}

HealthCheck CreateListenerRequest::GetHealthCheck() const
{
    return m_healthCheck;
}

void CreateListenerRequest::SetHealthCheck(const HealthCheck& _healthCheck)
{
    m_healthCheck = _healthCheck;
    m_healthCheckHasBeenSet = true;
}

bool CreateListenerRequest::HealthCheckHasBeenSet() const
{
    return m_healthCheckHasBeenSet;
}

CertificateInput CreateListenerRequest::GetCertificate() const
{
    return m_certificate;
}

void CreateListenerRequest::SetCertificate(const CertificateInput& _certificate)
{
    m_certificate = _certificate;
    m_certificateHasBeenSet = true;
}

bool CreateListenerRequest::CertificateHasBeenSet() const
{
    return m_certificateHasBeenSet;
}

int64_t CreateListenerRequest::GetSessionExpireTime() const
{
    return m_sessionExpireTime;
}

void CreateListenerRequest::SetSessionExpireTime(const int64_t& _sessionExpireTime)
{
    m_sessionExpireTime = _sessionExpireTime;
    m_sessionExpireTimeHasBeenSet = true;
}

bool CreateListenerRequest::SessionExpireTimeHasBeenSet() const
{
    return m_sessionExpireTimeHasBeenSet;
}

string CreateListenerRequest::GetScheduler() const
{
    return m_scheduler;
}

void CreateListenerRequest::SetScheduler(const string& _scheduler)
{
    m_scheduler = _scheduler;
    m_schedulerHasBeenSet = true;
}

bool CreateListenerRequest::SchedulerHasBeenSet() const
{
    return m_schedulerHasBeenSet;
}

int64_t CreateListenerRequest::GetSniSwitch() const
{
    return m_sniSwitch;
}

void CreateListenerRequest::SetSniSwitch(const int64_t& _sniSwitch)
{
    m_sniSwitch = _sniSwitch;
    m_sniSwitchHasBeenSet = true;
}

bool CreateListenerRequest::SniSwitchHasBeenSet() const
{
    return m_sniSwitchHasBeenSet;
}

string CreateListenerRequest::GetTargetType() const
{
    return m_targetType;
}

void CreateListenerRequest::SetTargetType(const string& _targetType)
{
    m_targetType = _targetType;
    m_targetTypeHasBeenSet = true;
}

bool CreateListenerRequest::TargetTypeHasBeenSet() const
{
    return m_targetTypeHasBeenSet;
}


