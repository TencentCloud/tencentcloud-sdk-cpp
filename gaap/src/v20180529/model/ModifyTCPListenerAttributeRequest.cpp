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

#include <tencentcloud/gaap/v20180529/model/ModifyTCPListenerAttributeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gaap::V20180529::Model;
using namespace rapidjson;
using namespace std;

ModifyTCPListenerAttributeRequest::ModifyTCPListenerAttributeRequest() :
    m_listenerIdHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_proxyIdHasBeenSet(false),
    m_listenerNameHasBeenSet(false),
    m_schedulerHasBeenSet(false),
    m_delayLoopHasBeenSet(false),
    m_connectTimeoutHasBeenSet(false),
    m_healthCheckHasBeenSet(false)
{
}

string ModifyTCPListenerAttributeRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_listenerIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ListenerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_listenerId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_proxyIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProxyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_proxyId.c_str(), allocator).Move(), allocator);
    }

    if (m_listenerNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ListenerName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_listenerName.c_str(), allocator).Move(), allocator);
    }

    if (m_schedulerHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Scheduler";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_scheduler.c_str(), allocator).Move(), allocator);
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

    if (m_healthCheckHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "HealthCheck";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_healthCheck, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyTCPListenerAttributeRequest::GetListenerId() const
{
    return m_listenerId;
}

void ModifyTCPListenerAttributeRequest::SetListenerId(const string& _listenerId)
{
    m_listenerId = _listenerId;
    m_listenerIdHasBeenSet = true;
}

bool ModifyTCPListenerAttributeRequest::ListenerIdHasBeenSet() const
{
    return m_listenerIdHasBeenSet;
}

string ModifyTCPListenerAttributeRequest::GetGroupId() const
{
    return m_groupId;
}

void ModifyTCPListenerAttributeRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool ModifyTCPListenerAttributeRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string ModifyTCPListenerAttributeRequest::GetProxyId() const
{
    return m_proxyId;
}

void ModifyTCPListenerAttributeRequest::SetProxyId(const string& _proxyId)
{
    m_proxyId = _proxyId;
    m_proxyIdHasBeenSet = true;
}

bool ModifyTCPListenerAttributeRequest::ProxyIdHasBeenSet() const
{
    return m_proxyIdHasBeenSet;
}

string ModifyTCPListenerAttributeRequest::GetListenerName() const
{
    return m_listenerName;
}

void ModifyTCPListenerAttributeRequest::SetListenerName(const string& _listenerName)
{
    m_listenerName = _listenerName;
    m_listenerNameHasBeenSet = true;
}

bool ModifyTCPListenerAttributeRequest::ListenerNameHasBeenSet() const
{
    return m_listenerNameHasBeenSet;
}

string ModifyTCPListenerAttributeRequest::GetScheduler() const
{
    return m_scheduler;
}

void ModifyTCPListenerAttributeRequest::SetScheduler(const string& _scheduler)
{
    m_scheduler = _scheduler;
    m_schedulerHasBeenSet = true;
}

bool ModifyTCPListenerAttributeRequest::SchedulerHasBeenSet() const
{
    return m_schedulerHasBeenSet;
}

uint64_t ModifyTCPListenerAttributeRequest::GetDelayLoop() const
{
    return m_delayLoop;
}

void ModifyTCPListenerAttributeRequest::SetDelayLoop(const uint64_t& _delayLoop)
{
    m_delayLoop = _delayLoop;
    m_delayLoopHasBeenSet = true;
}

bool ModifyTCPListenerAttributeRequest::DelayLoopHasBeenSet() const
{
    return m_delayLoopHasBeenSet;
}

uint64_t ModifyTCPListenerAttributeRequest::GetConnectTimeout() const
{
    return m_connectTimeout;
}

void ModifyTCPListenerAttributeRequest::SetConnectTimeout(const uint64_t& _connectTimeout)
{
    m_connectTimeout = _connectTimeout;
    m_connectTimeoutHasBeenSet = true;
}

bool ModifyTCPListenerAttributeRequest::ConnectTimeoutHasBeenSet() const
{
    return m_connectTimeoutHasBeenSet;
}

uint64_t ModifyTCPListenerAttributeRequest::GetHealthCheck() const
{
    return m_healthCheck;
}

void ModifyTCPListenerAttributeRequest::SetHealthCheck(const uint64_t& _healthCheck)
{
    m_healthCheck = _healthCheck;
    m_healthCheckHasBeenSet = true;
}

bool ModifyTCPListenerAttributeRequest::HealthCheckHasBeenSet() const
{
    return m_healthCheckHasBeenSet;
}


