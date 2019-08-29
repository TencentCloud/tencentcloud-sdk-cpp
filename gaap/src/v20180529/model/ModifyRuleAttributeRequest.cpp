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

#include <tencentcloud/gaap/v20180529/model/ModifyRuleAttributeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gaap::V20180529::Model;
using namespace rapidjson;
using namespace std;

ModifyRuleAttributeRequest::ModifyRuleAttributeRequest() :
    m_listenerIdHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_schedulerHasBeenSet(false),
    m_healthCheckHasBeenSet(false),
    m_checkParamsHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_forwardProtocolHasBeenSet(false),
    m_forwardHostHasBeenSet(false)
{
}

string ModifyRuleAttributeRequest::ToJsonString() const
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

    if (m_ruleIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_ruleId.c_str(), allocator).Move(), allocator);
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

    if (m_checkParamsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CheckParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_checkParams.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_pathHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_forwardProtocolHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ForwardProtocol";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_forwardProtocol.c_str(), allocator).Move(), allocator);
    }

    if (m_forwardHostHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ForwardHost";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_forwardHost.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyRuleAttributeRequest::GetListenerId() const
{
    return m_listenerId;
}

void ModifyRuleAttributeRequest::SetListenerId(const string& _listenerId)
{
    m_listenerId = _listenerId;
    m_listenerIdHasBeenSet = true;
}

bool ModifyRuleAttributeRequest::ListenerIdHasBeenSet() const
{
    return m_listenerIdHasBeenSet;
}

string ModifyRuleAttributeRequest::GetRuleId() const
{
    return m_ruleId;
}

void ModifyRuleAttributeRequest::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool ModifyRuleAttributeRequest::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string ModifyRuleAttributeRequest::GetScheduler() const
{
    return m_scheduler;
}

void ModifyRuleAttributeRequest::SetScheduler(const string& _scheduler)
{
    m_scheduler = _scheduler;
    m_schedulerHasBeenSet = true;
}

bool ModifyRuleAttributeRequest::SchedulerHasBeenSet() const
{
    return m_schedulerHasBeenSet;
}

uint64_t ModifyRuleAttributeRequest::GetHealthCheck() const
{
    return m_healthCheck;
}

void ModifyRuleAttributeRequest::SetHealthCheck(const uint64_t& _healthCheck)
{
    m_healthCheck = _healthCheck;
    m_healthCheckHasBeenSet = true;
}

bool ModifyRuleAttributeRequest::HealthCheckHasBeenSet() const
{
    return m_healthCheckHasBeenSet;
}

RuleCheckParams ModifyRuleAttributeRequest::GetCheckParams() const
{
    return m_checkParams;
}

void ModifyRuleAttributeRequest::SetCheckParams(const RuleCheckParams& _checkParams)
{
    m_checkParams = _checkParams;
    m_checkParamsHasBeenSet = true;
}

bool ModifyRuleAttributeRequest::CheckParamsHasBeenSet() const
{
    return m_checkParamsHasBeenSet;
}

string ModifyRuleAttributeRequest::GetPath() const
{
    return m_path;
}

void ModifyRuleAttributeRequest::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool ModifyRuleAttributeRequest::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

string ModifyRuleAttributeRequest::GetForwardProtocol() const
{
    return m_forwardProtocol;
}

void ModifyRuleAttributeRequest::SetForwardProtocol(const string& _forwardProtocol)
{
    m_forwardProtocol = _forwardProtocol;
    m_forwardProtocolHasBeenSet = true;
}

bool ModifyRuleAttributeRequest::ForwardProtocolHasBeenSet() const
{
    return m_forwardProtocolHasBeenSet;
}

string ModifyRuleAttributeRequest::GetForwardHost() const
{
    return m_forwardHost;
}

void ModifyRuleAttributeRequest::SetForwardHost(const string& _forwardHost)
{
    m_forwardHost = _forwardHost;
    m_forwardHostHasBeenSet = true;
}

bool ModifyRuleAttributeRequest::ForwardHostHasBeenSet() const
{
    return m_forwardHostHasBeenSet;
}


