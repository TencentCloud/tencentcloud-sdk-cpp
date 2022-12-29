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

#include <tencentcloud/clb/v20180317/model/DeregisterFunctionTargetsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

DeregisterFunctionTargetsRequest::DeregisterFunctionTargetsRequest() :
    m_loadBalancerIdHasBeenSet(false),
    m_listenerIdHasBeenSet(false),
    m_functionTargetsHasBeenSet(false),
    m_locationIdHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_urlHasBeenSet(false)
{
}

string DeregisterFunctionTargetsRequest::ToJsonString() const
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

    if (m_functionTargetsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FunctionTargets";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_functionTargets.begin(); itr != m_functionTargets.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_locationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_locationId.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeregisterFunctionTargetsRequest::GetLoadBalancerId() const
{
    return m_loadBalancerId;
}

void DeregisterFunctionTargetsRequest::SetLoadBalancerId(const string& _loadBalancerId)
{
    m_loadBalancerId = _loadBalancerId;
    m_loadBalancerIdHasBeenSet = true;
}

bool DeregisterFunctionTargetsRequest::LoadBalancerIdHasBeenSet() const
{
    return m_loadBalancerIdHasBeenSet;
}

string DeregisterFunctionTargetsRequest::GetListenerId() const
{
    return m_listenerId;
}

void DeregisterFunctionTargetsRequest::SetListenerId(const string& _listenerId)
{
    m_listenerId = _listenerId;
    m_listenerIdHasBeenSet = true;
}

bool DeregisterFunctionTargetsRequest::ListenerIdHasBeenSet() const
{
    return m_listenerIdHasBeenSet;
}

vector<FunctionTarget> DeregisterFunctionTargetsRequest::GetFunctionTargets() const
{
    return m_functionTargets;
}

void DeregisterFunctionTargetsRequest::SetFunctionTargets(const vector<FunctionTarget>& _functionTargets)
{
    m_functionTargets = _functionTargets;
    m_functionTargetsHasBeenSet = true;
}

bool DeregisterFunctionTargetsRequest::FunctionTargetsHasBeenSet() const
{
    return m_functionTargetsHasBeenSet;
}

string DeregisterFunctionTargetsRequest::GetLocationId() const
{
    return m_locationId;
}

void DeregisterFunctionTargetsRequest::SetLocationId(const string& _locationId)
{
    m_locationId = _locationId;
    m_locationIdHasBeenSet = true;
}

bool DeregisterFunctionTargetsRequest::LocationIdHasBeenSet() const
{
    return m_locationIdHasBeenSet;
}

string DeregisterFunctionTargetsRequest::GetDomain() const
{
    return m_domain;
}

void DeregisterFunctionTargetsRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool DeregisterFunctionTargetsRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string DeregisterFunctionTargetsRequest::GetUrl() const
{
    return m_url;
}

void DeregisterFunctionTargetsRequest::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool DeregisterFunctionTargetsRequest::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}


