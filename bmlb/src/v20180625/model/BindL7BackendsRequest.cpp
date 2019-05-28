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

#include <tencentcloud/bmlb/v20180625/model/BindL7BackendsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bmlb::V20180625::Model;
using namespace rapidjson;
using namespace std;

BindL7BackendsRequest::BindL7BackendsRequest() :
    m_loadBalancerIdHasBeenSet(false),
    m_listenerIdHasBeenSet(false),
    m_domainIdHasBeenSet(false),
    m_locationIdHasBeenSet(false),
    m_backendSetHasBeenSet(false),
    m_bindTypeHasBeenSet(false)
{
}

string BindL7BackendsRequest::ToJsonString() const
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

    if (m_domainIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DomainId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_domainId.c_str(), allocator).Move(), allocator);
    }

    if (m_locationIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LocationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_locationId.c_str(), allocator).Move(), allocator);
    }

    if (m_backendSetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BackendSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_backendSet.begin(); itr != m_backendSet.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_bindTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BindType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_bindType, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string BindL7BackendsRequest::GetLoadBalancerId() const
{
    return m_loadBalancerId;
}

void BindL7BackendsRequest::SetLoadBalancerId(const string& _loadBalancerId)
{
    m_loadBalancerId = _loadBalancerId;
    m_loadBalancerIdHasBeenSet = true;
}

bool BindL7BackendsRequest::LoadBalancerIdHasBeenSet() const
{
    return m_loadBalancerIdHasBeenSet;
}

string BindL7BackendsRequest::GetListenerId() const
{
    return m_listenerId;
}

void BindL7BackendsRequest::SetListenerId(const string& _listenerId)
{
    m_listenerId = _listenerId;
    m_listenerIdHasBeenSet = true;
}

bool BindL7BackendsRequest::ListenerIdHasBeenSet() const
{
    return m_listenerIdHasBeenSet;
}

string BindL7BackendsRequest::GetDomainId() const
{
    return m_domainId;
}

void BindL7BackendsRequest::SetDomainId(const string& _domainId)
{
    m_domainId = _domainId;
    m_domainIdHasBeenSet = true;
}

bool BindL7BackendsRequest::DomainIdHasBeenSet() const
{
    return m_domainIdHasBeenSet;
}

string BindL7BackendsRequest::GetLocationId() const
{
    return m_locationId;
}

void BindL7BackendsRequest::SetLocationId(const string& _locationId)
{
    m_locationId = _locationId;
    m_locationIdHasBeenSet = true;
}

bool BindL7BackendsRequest::LocationIdHasBeenSet() const
{
    return m_locationIdHasBeenSet;
}

vector<BindL7Backend> BindL7BackendsRequest::GetBackendSet() const
{
    return m_backendSet;
}

void BindL7BackendsRequest::SetBackendSet(const vector<BindL7Backend>& _backendSet)
{
    m_backendSet = _backendSet;
    m_backendSetHasBeenSet = true;
}

bool BindL7BackendsRequest::BackendSetHasBeenSet() const
{
    return m_backendSetHasBeenSet;
}

uint64_t BindL7BackendsRequest::GetBindType() const
{
    return m_bindType;
}

void BindL7BackendsRequest::SetBindType(const uint64_t& _bindType)
{
    m_bindType = _bindType;
    m_bindTypeHasBeenSet = true;
}

bool BindL7BackendsRequest::BindTypeHasBeenSet() const
{
    return m_bindTypeHasBeenSet;
}


