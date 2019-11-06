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

#include <tencentcloud/clb/v20180317/model/ModifyListenerRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Clb::V20180317::Model;
using namespace rapidjson;
using namespace std;

ModifyListenerRequest::ModifyListenerRequest() :
    m_loadBalancerIdHasBeenSet(false),
    m_listenerIdHasBeenSet(false),
    m_listenerNameHasBeenSet(false),
    m_sessionExpireTimeHasBeenSet(false),
    m_healthCheckHasBeenSet(false),
    m_certificateHasBeenSet(false),
    m_schedulerHasBeenSet(false),
    m_sniSwitchHasBeenSet(false)
{
}

string ModifyListenerRequest::ToJsonString() const
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

    if (m_listenerIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ListenerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_listenerId.c_str(), allocator).Move(), allocator);
    }

    if (m_listenerNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ListenerName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_listenerName.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionExpireTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SessionExpireTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sessionExpireTime, allocator);
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


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyListenerRequest::GetLoadBalancerId() const
{
    return m_loadBalancerId;
}

void ModifyListenerRequest::SetLoadBalancerId(const string& _loadBalancerId)
{
    m_loadBalancerId = _loadBalancerId;
    m_loadBalancerIdHasBeenSet = true;
}

bool ModifyListenerRequest::LoadBalancerIdHasBeenSet() const
{
    return m_loadBalancerIdHasBeenSet;
}

string ModifyListenerRequest::GetListenerId() const
{
    return m_listenerId;
}

void ModifyListenerRequest::SetListenerId(const string& _listenerId)
{
    m_listenerId = _listenerId;
    m_listenerIdHasBeenSet = true;
}

bool ModifyListenerRequest::ListenerIdHasBeenSet() const
{
    return m_listenerIdHasBeenSet;
}

string ModifyListenerRequest::GetListenerName() const
{
    return m_listenerName;
}

void ModifyListenerRequest::SetListenerName(const string& _listenerName)
{
    m_listenerName = _listenerName;
    m_listenerNameHasBeenSet = true;
}

bool ModifyListenerRequest::ListenerNameHasBeenSet() const
{
    return m_listenerNameHasBeenSet;
}

int64_t ModifyListenerRequest::GetSessionExpireTime() const
{
    return m_sessionExpireTime;
}

void ModifyListenerRequest::SetSessionExpireTime(const int64_t& _sessionExpireTime)
{
    m_sessionExpireTime = _sessionExpireTime;
    m_sessionExpireTimeHasBeenSet = true;
}

bool ModifyListenerRequest::SessionExpireTimeHasBeenSet() const
{
    return m_sessionExpireTimeHasBeenSet;
}

HealthCheck ModifyListenerRequest::GetHealthCheck() const
{
    return m_healthCheck;
}

void ModifyListenerRequest::SetHealthCheck(const HealthCheck& _healthCheck)
{
    m_healthCheck = _healthCheck;
    m_healthCheckHasBeenSet = true;
}

bool ModifyListenerRequest::HealthCheckHasBeenSet() const
{
    return m_healthCheckHasBeenSet;
}

CertificateInput ModifyListenerRequest::GetCertificate() const
{
    return m_certificate;
}

void ModifyListenerRequest::SetCertificate(const CertificateInput& _certificate)
{
    m_certificate = _certificate;
    m_certificateHasBeenSet = true;
}

bool ModifyListenerRequest::CertificateHasBeenSet() const
{
    return m_certificateHasBeenSet;
}

string ModifyListenerRequest::GetScheduler() const
{
    return m_scheduler;
}

void ModifyListenerRequest::SetScheduler(const string& _scheduler)
{
    m_scheduler = _scheduler;
    m_schedulerHasBeenSet = true;
}

bool ModifyListenerRequest::SchedulerHasBeenSet() const
{
    return m_schedulerHasBeenSet;
}

int64_t ModifyListenerRequest::GetSniSwitch() const
{
    return m_sniSwitch;
}

void ModifyListenerRequest::SetSniSwitch(const int64_t& _sniSwitch)
{
    m_sniSwitch = _sniSwitch;
    m_sniSwitchHasBeenSet = true;
}

bool ModifyListenerRequest::SniSwitchHasBeenSet() const
{
    return m_sniSwitchHasBeenSet;
}


