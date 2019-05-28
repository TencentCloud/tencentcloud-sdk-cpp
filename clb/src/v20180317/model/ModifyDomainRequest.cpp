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

#include <tencentcloud/clb/v20180317/model/ModifyDomainRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Clb::V20180317::Model;
using namespace rapidjson;
using namespace std;

ModifyDomainRequest::ModifyDomainRequest() :
    m_loadBalancerIdHasBeenSet(false),
    m_listenerIdHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_newDomainHasBeenSet(false)
{
}

string ModifyDomainRequest::ToJsonString() const
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

    if (m_domainHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_newDomainHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NewDomain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_newDomain.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyDomainRequest::GetLoadBalancerId() const
{
    return m_loadBalancerId;
}

void ModifyDomainRequest::SetLoadBalancerId(const string& _loadBalancerId)
{
    m_loadBalancerId = _loadBalancerId;
    m_loadBalancerIdHasBeenSet = true;
}

bool ModifyDomainRequest::LoadBalancerIdHasBeenSet() const
{
    return m_loadBalancerIdHasBeenSet;
}

string ModifyDomainRequest::GetListenerId() const
{
    return m_listenerId;
}

void ModifyDomainRequest::SetListenerId(const string& _listenerId)
{
    m_listenerId = _listenerId;
    m_listenerIdHasBeenSet = true;
}

bool ModifyDomainRequest::ListenerIdHasBeenSet() const
{
    return m_listenerIdHasBeenSet;
}

string ModifyDomainRequest::GetDomain() const
{
    return m_domain;
}

void ModifyDomainRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool ModifyDomainRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string ModifyDomainRequest::GetNewDomain() const
{
    return m_newDomain;
}

void ModifyDomainRequest::SetNewDomain(const string& _newDomain)
{
    m_newDomain = _newDomain;
    m_newDomainHasBeenSet = true;
}

bool ModifyDomainRequest::NewDomainHasBeenSet() const
{
    return m_newDomainHasBeenSet;
}


