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

#include <tencentcloud/clb/v20180317/model/AutoRewriteRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Clb::V20180317::Model;
using namespace rapidjson;
using namespace std;

AutoRewriteRequest::AutoRewriteRequest() :
    m_loadBalancerIdHasBeenSet(false),
    m_listenerIdHasBeenSet(false),
    m_domainsHasBeenSet(false)
{
}

string AutoRewriteRequest::ToJsonString() const
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

    if (m_domainsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Domains";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_domains.begin(); itr != m_domains.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AutoRewriteRequest::GetLoadBalancerId() const
{
    return m_loadBalancerId;
}

void AutoRewriteRequest::SetLoadBalancerId(const string& _loadBalancerId)
{
    m_loadBalancerId = _loadBalancerId;
    m_loadBalancerIdHasBeenSet = true;
}

bool AutoRewriteRequest::LoadBalancerIdHasBeenSet() const
{
    return m_loadBalancerIdHasBeenSet;
}

string AutoRewriteRequest::GetListenerId() const
{
    return m_listenerId;
}

void AutoRewriteRequest::SetListenerId(const string& _listenerId)
{
    m_listenerId = _listenerId;
    m_listenerIdHasBeenSet = true;
}

bool AutoRewriteRequest::ListenerIdHasBeenSet() const
{
    return m_listenerIdHasBeenSet;
}

vector<string> AutoRewriteRequest::GetDomains() const
{
    return m_domains;
}

void AutoRewriteRequest::SetDomains(const vector<string>& _domains)
{
    m_domains = _domains;
    m_domainsHasBeenSet = true;
}

bool AutoRewriteRequest::DomainsHasBeenSet() const
{
    return m_domainsHasBeenSet;
}


