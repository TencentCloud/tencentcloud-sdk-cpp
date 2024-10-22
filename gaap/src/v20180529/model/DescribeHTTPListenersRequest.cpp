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

#include <tencentcloud/gaap/v20180529/model/DescribeHTTPListenersRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gaap::V20180529::Model;
using namespace std;

DescribeHTTPListenersRequest::DescribeHTTPListenersRequest() :
    m_proxyIdHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_listenerIdHasBeenSet(false),
    m_listenerNameHasBeenSet(false),
    m_portHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_searchValueHasBeenSet(false)
{
}

string DescribeHTTPListenersRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_proxyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_proxyId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_listenerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_listenerId.c_str(), allocator).Move(), allocator);
    }

    if (m_listenerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenerName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_listenerName.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_port, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_searchValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchValue";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_searchValue.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeHTTPListenersRequest::GetProxyId() const
{
    return m_proxyId;
}

void DescribeHTTPListenersRequest::SetProxyId(const string& _proxyId)
{
    m_proxyId = _proxyId;
    m_proxyIdHasBeenSet = true;
}

bool DescribeHTTPListenersRequest::ProxyIdHasBeenSet() const
{
    return m_proxyIdHasBeenSet;
}

string DescribeHTTPListenersRequest::GetGroupId() const
{
    return m_groupId;
}

void DescribeHTTPListenersRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool DescribeHTTPListenersRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string DescribeHTTPListenersRequest::GetListenerId() const
{
    return m_listenerId;
}

void DescribeHTTPListenersRequest::SetListenerId(const string& _listenerId)
{
    m_listenerId = _listenerId;
    m_listenerIdHasBeenSet = true;
}

bool DescribeHTTPListenersRequest::ListenerIdHasBeenSet() const
{
    return m_listenerIdHasBeenSet;
}

string DescribeHTTPListenersRequest::GetListenerName() const
{
    return m_listenerName;
}

void DescribeHTTPListenersRequest::SetListenerName(const string& _listenerName)
{
    m_listenerName = _listenerName;
    m_listenerNameHasBeenSet = true;
}

bool DescribeHTTPListenersRequest::ListenerNameHasBeenSet() const
{
    return m_listenerNameHasBeenSet;
}

uint64_t DescribeHTTPListenersRequest::GetPort() const
{
    return m_port;
}

void DescribeHTTPListenersRequest::SetPort(const uint64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool DescribeHTTPListenersRequest::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

uint64_t DescribeHTTPListenersRequest::GetOffset() const
{
    return m_offset;
}

void DescribeHTTPListenersRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeHTTPListenersRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeHTTPListenersRequest::GetLimit() const
{
    return m_limit;
}

void DescribeHTTPListenersRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeHTTPListenersRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeHTTPListenersRequest::GetSearchValue() const
{
    return m_searchValue;
}

void DescribeHTTPListenersRequest::SetSearchValue(const string& _searchValue)
{
    m_searchValue = _searchValue;
    m_searchValueHasBeenSet = true;
}

bool DescribeHTTPListenersRequest::SearchValueHasBeenSet() const
{
    return m_searchValueHasBeenSet;
}


