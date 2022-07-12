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

#include <tencentcloud/gaap/v20180529/model/CreateRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gaap::V20180529::Model;
using namespace std;

CreateRuleRequest::CreateRuleRequest() :
    m_listenerIdHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_realServerTypeHasBeenSet(false),
    m_schedulerHasBeenSet(false),
    m_healthCheckHasBeenSet(false),
    m_checkParamsHasBeenSet(false),
    m_forwardProtocolHasBeenSet(false),
    m_forwardHostHasBeenSet(false),
    m_serverNameIndicationSwitchHasBeenSet(false),
    m_serverNameIndicationHasBeenSet(false),
    m_forcedRedirectHasBeenSet(false)
{
}

string CreateRuleRequest::ToJsonString() const
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

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_realServerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealServerType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_realServerType.c_str(), allocator).Move(), allocator);
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

    if (m_checkParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_checkParams.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_forwardProtocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForwardProtocol";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_forwardProtocol.c_str(), allocator).Move(), allocator);
    }

    if (m_forwardHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForwardHost";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_forwardHost.c_str(), allocator).Move(), allocator);
    }

    if (m_serverNameIndicationSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerNameIndicationSwitch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serverNameIndicationSwitch.c_str(), allocator).Move(), allocator);
    }

    if (m_serverNameIndicationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerNameIndication";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serverNameIndication.c_str(), allocator).Move(), allocator);
    }

    if (m_forcedRedirectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForcedRedirect";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_forcedRedirect.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateRuleRequest::GetListenerId() const
{
    return m_listenerId;
}

void CreateRuleRequest::SetListenerId(const string& _listenerId)
{
    m_listenerId = _listenerId;
    m_listenerIdHasBeenSet = true;
}

bool CreateRuleRequest::ListenerIdHasBeenSet() const
{
    return m_listenerIdHasBeenSet;
}

string CreateRuleRequest::GetDomain() const
{
    return m_domain;
}

void CreateRuleRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool CreateRuleRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string CreateRuleRequest::GetPath() const
{
    return m_path;
}

void CreateRuleRequest::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool CreateRuleRequest::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

string CreateRuleRequest::GetRealServerType() const
{
    return m_realServerType;
}

void CreateRuleRequest::SetRealServerType(const string& _realServerType)
{
    m_realServerType = _realServerType;
    m_realServerTypeHasBeenSet = true;
}

bool CreateRuleRequest::RealServerTypeHasBeenSet() const
{
    return m_realServerTypeHasBeenSet;
}

string CreateRuleRequest::GetScheduler() const
{
    return m_scheduler;
}

void CreateRuleRequest::SetScheduler(const string& _scheduler)
{
    m_scheduler = _scheduler;
    m_schedulerHasBeenSet = true;
}

bool CreateRuleRequest::SchedulerHasBeenSet() const
{
    return m_schedulerHasBeenSet;
}

uint64_t CreateRuleRequest::GetHealthCheck() const
{
    return m_healthCheck;
}

void CreateRuleRequest::SetHealthCheck(const uint64_t& _healthCheck)
{
    m_healthCheck = _healthCheck;
    m_healthCheckHasBeenSet = true;
}

bool CreateRuleRequest::HealthCheckHasBeenSet() const
{
    return m_healthCheckHasBeenSet;
}

RuleCheckParams CreateRuleRequest::GetCheckParams() const
{
    return m_checkParams;
}

void CreateRuleRequest::SetCheckParams(const RuleCheckParams& _checkParams)
{
    m_checkParams = _checkParams;
    m_checkParamsHasBeenSet = true;
}

bool CreateRuleRequest::CheckParamsHasBeenSet() const
{
    return m_checkParamsHasBeenSet;
}

string CreateRuleRequest::GetForwardProtocol() const
{
    return m_forwardProtocol;
}

void CreateRuleRequest::SetForwardProtocol(const string& _forwardProtocol)
{
    m_forwardProtocol = _forwardProtocol;
    m_forwardProtocolHasBeenSet = true;
}

bool CreateRuleRequest::ForwardProtocolHasBeenSet() const
{
    return m_forwardProtocolHasBeenSet;
}

string CreateRuleRequest::GetForwardHost() const
{
    return m_forwardHost;
}

void CreateRuleRequest::SetForwardHost(const string& _forwardHost)
{
    m_forwardHost = _forwardHost;
    m_forwardHostHasBeenSet = true;
}

bool CreateRuleRequest::ForwardHostHasBeenSet() const
{
    return m_forwardHostHasBeenSet;
}

string CreateRuleRequest::GetServerNameIndicationSwitch() const
{
    return m_serverNameIndicationSwitch;
}

void CreateRuleRequest::SetServerNameIndicationSwitch(const string& _serverNameIndicationSwitch)
{
    m_serverNameIndicationSwitch = _serverNameIndicationSwitch;
    m_serverNameIndicationSwitchHasBeenSet = true;
}

bool CreateRuleRequest::ServerNameIndicationSwitchHasBeenSet() const
{
    return m_serverNameIndicationSwitchHasBeenSet;
}

string CreateRuleRequest::GetServerNameIndication() const
{
    return m_serverNameIndication;
}

void CreateRuleRequest::SetServerNameIndication(const string& _serverNameIndication)
{
    m_serverNameIndication = _serverNameIndication;
    m_serverNameIndicationHasBeenSet = true;
}

bool CreateRuleRequest::ServerNameIndicationHasBeenSet() const
{
    return m_serverNameIndicationHasBeenSet;
}

string CreateRuleRequest::GetForcedRedirect() const
{
    return m_forcedRedirect;
}

void CreateRuleRequest::SetForcedRedirect(const string& _forcedRedirect)
{
    m_forcedRedirect = _forcedRedirect;
    m_forcedRedirectHasBeenSet = true;
}

bool CreateRuleRequest::ForcedRedirectHasBeenSet() const
{
    return m_forcedRedirectHasBeenSet;
}


