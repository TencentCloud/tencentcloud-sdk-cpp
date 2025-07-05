/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/bmlb/v20180625/model/UnbindL7BackendsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bmlb::V20180625::Model;
using namespace std;

UnbindL7BackendsRequest::UnbindL7BackendsRequest() :
    m_loadBalancerIdHasBeenSet(false),
    m_listenerIdHasBeenSet(false),
    m_domainIdHasBeenSet(false),
    m_locationIdHasBeenSet(false),
    m_backendSetHasBeenSet(false),
    m_bindTypeHasBeenSet(false)
{
}

string UnbindL7BackendsRequest::ToJsonString() const
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

    if (m_domainIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domainId.c_str(), allocator).Move(), allocator);
    }

    if (m_locationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_locationId.c_str(), allocator).Move(), allocator);
    }

    if (m_backendSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackendSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_backendSet.begin(); itr != m_backendSet.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_bindTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_bindType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UnbindL7BackendsRequest::GetLoadBalancerId() const
{
    return m_loadBalancerId;
}

void UnbindL7BackendsRequest::SetLoadBalancerId(const string& _loadBalancerId)
{
    m_loadBalancerId = _loadBalancerId;
    m_loadBalancerIdHasBeenSet = true;
}

bool UnbindL7BackendsRequest::LoadBalancerIdHasBeenSet() const
{
    return m_loadBalancerIdHasBeenSet;
}

string UnbindL7BackendsRequest::GetListenerId() const
{
    return m_listenerId;
}

void UnbindL7BackendsRequest::SetListenerId(const string& _listenerId)
{
    m_listenerId = _listenerId;
    m_listenerIdHasBeenSet = true;
}

bool UnbindL7BackendsRequest::ListenerIdHasBeenSet() const
{
    return m_listenerIdHasBeenSet;
}

string UnbindL7BackendsRequest::GetDomainId() const
{
    return m_domainId;
}

void UnbindL7BackendsRequest::SetDomainId(const string& _domainId)
{
    m_domainId = _domainId;
    m_domainIdHasBeenSet = true;
}

bool UnbindL7BackendsRequest::DomainIdHasBeenSet() const
{
    return m_domainIdHasBeenSet;
}

string UnbindL7BackendsRequest::GetLocationId() const
{
    return m_locationId;
}

void UnbindL7BackendsRequest::SetLocationId(const string& _locationId)
{
    m_locationId = _locationId;
    m_locationIdHasBeenSet = true;
}

bool UnbindL7BackendsRequest::LocationIdHasBeenSet() const
{
    return m_locationIdHasBeenSet;
}

vector<UnbindL7Backend> UnbindL7BackendsRequest::GetBackendSet() const
{
    return m_backendSet;
}

void UnbindL7BackendsRequest::SetBackendSet(const vector<UnbindL7Backend>& _backendSet)
{
    m_backendSet = _backendSet;
    m_backendSetHasBeenSet = true;
}

bool UnbindL7BackendsRequest::BackendSetHasBeenSet() const
{
    return m_backendSetHasBeenSet;
}

uint64_t UnbindL7BackendsRequest::GetBindType() const
{
    return m_bindType;
}

void UnbindL7BackendsRequest::SetBindType(const uint64_t& _bindType)
{
    m_bindType = _bindType;
    m_bindTypeHasBeenSet = true;
}

bool UnbindL7BackendsRequest::BindTypeHasBeenSet() const
{
    return m_bindTypeHasBeenSet;
}


