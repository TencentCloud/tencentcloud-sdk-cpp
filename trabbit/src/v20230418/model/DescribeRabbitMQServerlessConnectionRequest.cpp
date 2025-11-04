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

#include <tencentcloud/trabbit/v20230418/model/DescribeRabbitMQServerlessConnectionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trabbit::V20230418::Model;
using namespace std;

DescribeRabbitMQServerlessConnectionRequest::DescribeRabbitMQServerlessConnectionRequest() :
    m_instanceIdHasBeenSet(false),
    m_virtualHostHasBeenSet(false),
    m_sortElementHasBeenSet(false),
    m_sortTypeHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

string DescribeRabbitMQServerlessConnectionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_virtualHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirtualHost";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_virtualHost.c_str(), allocator).Move(), allocator);
    }

    if (m_sortElementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortElement";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sortElement.c_str(), allocator).Move(), allocator);
    }

    if (m_sortTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sortType.c_str(), allocator).Move(), allocator);
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

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeRabbitMQServerlessConnectionRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeRabbitMQServerlessConnectionRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeRabbitMQServerlessConnectionRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeRabbitMQServerlessConnectionRequest::GetVirtualHost() const
{
    return m_virtualHost;
}

void DescribeRabbitMQServerlessConnectionRequest::SetVirtualHost(const string& _virtualHost)
{
    m_virtualHost = _virtualHost;
    m_virtualHostHasBeenSet = true;
}

bool DescribeRabbitMQServerlessConnectionRequest::VirtualHostHasBeenSet() const
{
    return m_virtualHostHasBeenSet;
}

string DescribeRabbitMQServerlessConnectionRequest::GetSortElement() const
{
    return m_sortElement;
}

void DescribeRabbitMQServerlessConnectionRequest::SetSortElement(const string& _sortElement)
{
    m_sortElement = _sortElement;
    m_sortElementHasBeenSet = true;
}

bool DescribeRabbitMQServerlessConnectionRequest::SortElementHasBeenSet() const
{
    return m_sortElementHasBeenSet;
}

string DescribeRabbitMQServerlessConnectionRequest::GetSortType() const
{
    return m_sortType;
}

void DescribeRabbitMQServerlessConnectionRequest::SetSortType(const string& _sortType)
{
    m_sortType = _sortType;
    m_sortTypeHasBeenSet = true;
}

bool DescribeRabbitMQServerlessConnectionRequest::SortTypeHasBeenSet() const
{
    return m_sortTypeHasBeenSet;
}

int64_t DescribeRabbitMQServerlessConnectionRequest::GetOffset() const
{
    return m_offset;
}

void DescribeRabbitMQServerlessConnectionRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeRabbitMQServerlessConnectionRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeRabbitMQServerlessConnectionRequest::GetLimit() const
{
    return m_limit;
}

void DescribeRabbitMQServerlessConnectionRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeRabbitMQServerlessConnectionRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeRabbitMQServerlessConnectionRequest::GetName() const
{
    return m_name;
}

void DescribeRabbitMQServerlessConnectionRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DescribeRabbitMQServerlessConnectionRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}


