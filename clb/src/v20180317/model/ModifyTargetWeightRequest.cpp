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

#include <tencentcloud/clb/v20180317/model/ModifyTargetWeightRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

ModifyTargetWeightRequest::ModifyTargetWeightRequest() :
    m_loadBalancerIdHasBeenSet(false),
    m_listenerIdHasBeenSet(false),
    m_targetsHasBeenSet(false),
    m_locationIdHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_weightHasBeenSet(false)
{
}

string ModifyTargetWeightRequest::ToJsonString() const
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

    if (m_targetsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Targets";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_targets.begin(); itr != m_targets.end(); ++itr, ++i)
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

    if (m_weightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Weight";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_weight, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyTargetWeightRequest::GetLoadBalancerId() const
{
    return m_loadBalancerId;
}

void ModifyTargetWeightRequest::SetLoadBalancerId(const string& _loadBalancerId)
{
    m_loadBalancerId = _loadBalancerId;
    m_loadBalancerIdHasBeenSet = true;
}

bool ModifyTargetWeightRequest::LoadBalancerIdHasBeenSet() const
{
    return m_loadBalancerIdHasBeenSet;
}

string ModifyTargetWeightRequest::GetListenerId() const
{
    return m_listenerId;
}

void ModifyTargetWeightRequest::SetListenerId(const string& _listenerId)
{
    m_listenerId = _listenerId;
    m_listenerIdHasBeenSet = true;
}

bool ModifyTargetWeightRequest::ListenerIdHasBeenSet() const
{
    return m_listenerIdHasBeenSet;
}

vector<Target> ModifyTargetWeightRequest::GetTargets() const
{
    return m_targets;
}

void ModifyTargetWeightRequest::SetTargets(const vector<Target>& _targets)
{
    m_targets = _targets;
    m_targetsHasBeenSet = true;
}

bool ModifyTargetWeightRequest::TargetsHasBeenSet() const
{
    return m_targetsHasBeenSet;
}

string ModifyTargetWeightRequest::GetLocationId() const
{
    return m_locationId;
}

void ModifyTargetWeightRequest::SetLocationId(const string& _locationId)
{
    m_locationId = _locationId;
    m_locationIdHasBeenSet = true;
}

bool ModifyTargetWeightRequest::LocationIdHasBeenSet() const
{
    return m_locationIdHasBeenSet;
}

string ModifyTargetWeightRequest::GetDomain() const
{
    return m_domain;
}

void ModifyTargetWeightRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool ModifyTargetWeightRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string ModifyTargetWeightRequest::GetUrl() const
{
    return m_url;
}

void ModifyTargetWeightRequest::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool ModifyTargetWeightRequest::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

int64_t ModifyTargetWeightRequest::GetWeight() const
{
    return m_weight;
}

void ModifyTargetWeightRequest::SetWeight(const int64_t& _weight)
{
    m_weight = _weight;
    m_weightHasBeenSet = true;
}

bool ModifyTargetWeightRequest::WeightHasBeenSet() const
{
    return m_weightHasBeenSet;
}


