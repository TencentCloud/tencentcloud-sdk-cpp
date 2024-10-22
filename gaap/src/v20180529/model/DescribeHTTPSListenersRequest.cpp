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

#include <tencentcloud/gaap/v20180529/model/DescribeHTTPSListenersRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gaap::V20180529::Model;
using namespace std;

DescribeHTTPSListenersRequest::DescribeHTTPSListenersRequest() :
    m_proxyIdHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_listenerIdHasBeenSet(false),
    m_listenerNameHasBeenSet(false),
    m_portHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_searchValueHasBeenSet(false),
    m_http3SupportedHasBeenSet(false)
{
}

string DescribeHTTPSListenersRequest::ToJsonString() const
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

    if (m_http3SupportedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Http3Supported";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_http3Supported, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeHTTPSListenersRequest::GetProxyId() const
{
    return m_proxyId;
}

void DescribeHTTPSListenersRequest::SetProxyId(const string& _proxyId)
{
    m_proxyId = _proxyId;
    m_proxyIdHasBeenSet = true;
}

bool DescribeHTTPSListenersRequest::ProxyIdHasBeenSet() const
{
    return m_proxyIdHasBeenSet;
}

string DescribeHTTPSListenersRequest::GetGroupId() const
{
    return m_groupId;
}

void DescribeHTTPSListenersRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool DescribeHTTPSListenersRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string DescribeHTTPSListenersRequest::GetListenerId() const
{
    return m_listenerId;
}

void DescribeHTTPSListenersRequest::SetListenerId(const string& _listenerId)
{
    m_listenerId = _listenerId;
    m_listenerIdHasBeenSet = true;
}

bool DescribeHTTPSListenersRequest::ListenerIdHasBeenSet() const
{
    return m_listenerIdHasBeenSet;
}

string DescribeHTTPSListenersRequest::GetListenerName() const
{
    return m_listenerName;
}

void DescribeHTTPSListenersRequest::SetListenerName(const string& _listenerName)
{
    m_listenerName = _listenerName;
    m_listenerNameHasBeenSet = true;
}

bool DescribeHTTPSListenersRequest::ListenerNameHasBeenSet() const
{
    return m_listenerNameHasBeenSet;
}

uint64_t DescribeHTTPSListenersRequest::GetPort() const
{
    return m_port;
}

void DescribeHTTPSListenersRequest::SetPort(const uint64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool DescribeHTTPSListenersRequest::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

uint64_t DescribeHTTPSListenersRequest::GetOffset() const
{
    return m_offset;
}

void DescribeHTTPSListenersRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeHTTPSListenersRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeHTTPSListenersRequest::GetLimit() const
{
    return m_limit;
}

void DescribeHTTPSListenersRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeHTTPSListenersRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeHTTPSListenersRequest::GetSearchValue() const
{
    return m_searchValue;
}

void DescribeHTTPSListenersRequest::SetSearchValue(const string& _searchValue)
{
    m_searchValue = _searchValue;
    m_searchValueHasBeenSet = true;
}

bool DescribeHTTPSListenersRequest::SearchValueHasBeenSet() const
{
    return m_searchValueHasBeenSet;
}

int64_t DescribeHTTPSListenersRequest::GetHttp3Supported() const
{
    return m_http3Supported;
}

void DescribeHTTPSListenersRequest::SetHttp3Supported(const int64_t& _http3Supported)
{
    m_http3Supported = _http3Supported;
    m_http3SupportedHasBeenSet = true;
}

bool DescribeHTTPSListenersRequest::Http3SupportedHasBeenSet() const
{
    return m_http3SupportedHasBeenSet;
}


