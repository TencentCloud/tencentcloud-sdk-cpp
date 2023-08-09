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

#include <tencentcloud/tdmq/v20200217/model/DescribeRabbitMQVirtualHostRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

DescribeRabbitMQVirtualHostRequest::DescribeRabbitMQVirtualHostRequest() :
    m_instanceIdHasBeenSet(false),
    m_virtualHostHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_sortElementHasBeenSet(false),
    m_sortOrderHasBeenSet(false)
{
}

string DescribeRabbitMQVirtualHostRequest::ToJsonString() const
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

    if (m_filtersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_filters.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_sortElementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortElement";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sortElement.c_str(), allocator).Move(), allocator);
    }

    if (m_sortOrderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortOrder";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sortOrder.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeRabbitMQVirtualHostRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeRabbitMQVirtualHostRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeRabbitMQVirtualHostRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeRabbitMQVirtualHostRequest::GetVirtualHost() const
{
    return m_virtualHost;
}

void DescribeRabbitMQVirtualHostRequest::SetVirtualHost(const string& _virtualHost)
{
    m_virtualHost = _virtualHost;
    m_virtualHostHasBeenSet = true;
}

bool DescribeRabbitMQVirtualHostRequest::VirtualHostHasBeenSet() const
{
    return m_virtualHostHasBeenSet;
}

int64_t DescribeRabbitMQVirtualHostRequest::GetOffset() const
{
    return m_offset;
}

void DescribeRabbitMQVirtualHostRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeRabbitMQVirtualHostRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeRabbitMQVirtualHostRequest::GetLimit() const
{
    return m_limit;
}

void DescribeRabbitMQVirtualHostRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeRabbitMQVirtualHostRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

Filter DescribeRabbitMQVirtualHostRequest::GetFilters() const
{
    return m_filters;
}

void DescribeRabbitMQVirtualHostRequest::SetFilters(const Filter& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeRabbitMQVirtualHostRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

string DescribeRabbitMQVirtualHostRequest::GetSortElement() const
{
    return m_sortElement;
}

void DescribeRabbitMQVirtualHostRequest::SetSortElement(const string& _sortElement)
{
    m_sortElement = _sortElement;
    m_sortElementHasBeenSet = true;
}

bool DescribeRabbitMQVirtualHostRequest::SortElementHasBeenSet() const
{
    return m_sortElementHasBeenSet;
}

string DescribeRabbitMQVirtualHostRequest::GetSortOrder() const
{
    return m_sortOrder;
}

void DescribeRabbitMQVirtualHostRequest::SetSortOrder(const string& _sortOrder)
{
    m_sortOrder = _sortOrder;
    m_sortOrderHasBeenSet = true;
}

bool DescribeRabbitMQVirtualHostRequest::SortOrderHasBeenSet() const
{
    return m_sortOrderHasBeenSet;
}


