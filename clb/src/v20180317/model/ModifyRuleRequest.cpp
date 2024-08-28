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

#include <tencentcloud/clb/v20180317/model/ModifyRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

ModifyRuleRequest::ModifyRuleRequest() :
    m_loadBalancerIdHasBeenSet(false),
    m_listenerIdHasBeenSet(false),
    m_locationIdHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_healthCheckHasBeenSet(false),
    m_schedulerHasBeenSet(false),
    m_sessionExpireTimeHasBeenSet(false),
    m_forwardTypeHasBeenSet(false),
    m_trpcCalleeHasBeenSet(false),
    m_trpcFuncHasBeenSet(false),
    m_oAuthHasBeenSet(false)
{
}

string ModifyRuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_loadBalancerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_loadBalancerId.c_str(), allocator).Move(), allocator);
    }

    if (m_listenerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_listenerId.c_str(), allocator).Move(), allocator);
    }

    if (m_locationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_locationId.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_healthCheckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheck";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_healthCheck.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_schedulerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scheduler";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scheduler.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionExpireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionExpireTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sessionExpireTime, allocator);
    }

    if (m_forwardTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForwardType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_forwardType.c_str(), allocator).Move(), allocator);
    }

    if (m_trpcCalleeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrpcCallee";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_trpcCallee.c_str(), allocator).Move(), allocator);
    }

    if (m_trpcFuncHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrpcFunc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_trpcFunc.c_str(), allocator).Move(), allocator);
    }

    if (m_oAuthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OAuth";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_oAuth.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyRuleRequest::GetLoadBalancerId() const
{
    return m_loadBalancerId;
}

void ModifyRuleRequest::SetLoadBalancerId(const string& _loadBalancerId)
{
    m_loadBalancerId = _loadBalancerId;
    m_loadBalancerIdHasBeenSet = true;
}

bool ModifyRuleRequest::LoadBalancerIdHasBeenSet() const
{
    return m_loadBalancerIdHasBeenSet;
}

string ModifyRuleRequest::GetListenerId() const
{
    return m_listenerId;
}

void ModifyRuleRequest::SetListenerId(const string& _listenerId)
{
    m_listenerId = _listenerId;
    m_listenerIdHasBeenSet = true;
}

bool ModifyRuleRequest::ListenerIdHasBeenSet() const
{
    return m_listenerIdHasBeenSet;
}

string ModifyRuleRequest::GetLocationId() const
{
    return m_locationId;
}

void ModifyRuleRequest::SetLocationId(const string& _locationId)
{
    m_locationId = _locationId;
    m_locationIdHasBeenSet = true;
}

bool ModifyRuleRequest::LocationIdHasBeenSet() const
{
    return m_locationIdHasBeenSet;
}

string ModifyRuleRequest::GetUrl() const
{
    return m_url;
}

void ModifyRuleRequest::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool ModifyRuleRequest::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

HealthCheck ModifyRuleRequest::GetHealthCheck() const
{
    return m_healthCheck;
}

void ModifyRuleRequest::SetHealthCheck(const HealthCheck& _healthCheck)
{
    m_healthCheck = _healthCheck;
    m_healthCheckHasBeenSet = true;
}

bool ModifyRuleRequest::HealthCheckHasBeenSet() const
{
    return m_healthCheckHasBeenSet;
}

string ModifyRuleRequest::GetScheduler() const
{
    return m_scheduler;
}

void ModifyRuleRequest::SetScheduler(const string& _scheduler)
{
    m_scheduler = _scheduler;
    m_schedulerHasBeenSet = true;
}

bool ModifyRuleRequest::SchedulerHasBeenSet() const
{
    return m_schedulerHasBeenSet;
}

int64_t ModifyRuleRequest::GetSessionExpireTime() const
{
    return m_sessionExpireTime;
}

void ModifyRuleRequest::SetSessionExpireTime(const int64_t& _sessionExpireTime)
{
    m_sessionExpireTime = _sessionExpireTime;
    m_sessionExpireTimeHasBeenSet = true;
}

bool ModifyRuleRequest::SessionExpireTimeHasBeenSet() const
{
    return m_sessionExpireTimeHasBeenSet;
}

string ModifyRuleRequest::GetForwardType() const
{
    return m_forwardType;
}

void ModifyRuleRequest::SetForwardType(const string& _forwardType)
{
    m_forwardType = _forwardType;
    m_forwardTypeHasBeenSet = true;
}

bool ModifyRuleRequest::ForwardTypeHasBeenSet() const
{
    return m_forwardTypeHasBeenSet;
}

string ModifyRuleRequest::GetTrpcCallee() const
{
    return m_trpcCallee;
}

void ModifyRuleRequest::SetTrpcCallee(const string& _trpcCallee)
{
    m_trpcCallee = _trpcCallee;
    m_trpcCalleeHasBeenSet = true;
}

bool ModifyRuleRequest::TrpcCalleeHasBeenSet() const
{
    return m_trpcCalleeHasBeenSet;
}

string ModifyRuleRequest::GetTrpcFunc() const
{
    return m_trpcFunc;
}

void ModifyRuleRequest::SetTrpcFunc(const string& _trpcFunc)
{
    m_trpcFunc = _trpcFunc;
    m_trpcFuncHasBeenSet = true;
}

bool ModifyRuleRequest::TrpcFuncHasBeenSet() const
{
    return m_trpcFuncHasBeenSet;
}

OAuth ModifyRuleRequest::GetOAuth() const
{
    return m_oAuth;
}

void ModifyRuleRequest::SetOAuth(const OAuth& _oAuth)
{
    m_oAuth = _oAuth;
    m_oAuthHasBeenSet = true;
}

bool ModifyRuleRequest::OAuthHasBeenSet() const
{
    return m_oAuthHasBeenSet;
}


