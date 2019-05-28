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

#include <tencentcloud/clb/v20180317/model/DescribeTargetsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Clb::V20180317::Model;
using namespace rapidjson;
using namespace std;

DescribeTargetsRequest::DescribeTargetsRequest() :
    m_loadBalancerIdHasBeenSet(false),
    m_listenerIdsHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_portHasBeenSet(false)
{
}

string DescribeTargetsRequest::ToJsonString() const
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

    if (m_listenerIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ListenerIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_listenerIds.begin(); itr != m_listenerIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_protocolHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_port, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeTargetsRequest::GetLoadBalancerId() const
{
    return m_loadBalancerId;
}

void DescribeTargetsRequest::SetLoadBalancerId(const string& _loadBalancerId)
{
    m_loadBalancerId = _loadBalancerId;
    m_loadBalancerIdHasBeenSet = true;
}

bool DescribeTargetsRequest::LoadBalancerIdHasBeenSet() const
{
    return m_loadBalancerIdHasBeenSet;
}

vector<string> DescribeTargetsRequest::GetListenerIds() const
{
    return m_listenerIds;
}

void DescribeTargetsRequest::SetListenerIds(const vector<string>& _listenerIds)
{
    m_listenerIds = _listenerIds;
    m_listenerIdsHasBeenSet = true;
}

bool DescribeTargetsRequest::ListenerIdsHasBeenSet() const
{
    return m_listenerIdsHasBeenSet;
}

string DescribeTargetsRequest::GetProtocol() const
{
    return m_protocol;
}

void DescribeTargetsRequest::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool DescribeTargetsRequest::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

int64_t DescribeTargetsRequest::GetPort() const
{
    return m_port;
}

void DescribeTargetsRequest::SetPort(const int64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool DescribeTargetsRequest::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}


