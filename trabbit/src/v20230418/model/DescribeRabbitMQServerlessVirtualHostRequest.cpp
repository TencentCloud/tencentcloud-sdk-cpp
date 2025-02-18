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

#include <tencentcloud/trabbit/v20230418/model/DescribeRabbitMQServerlessVirtualHostRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trabbit::V20230418::Model;
using namespace std;

DescribeRabbitMQServerlessVirtualHostRequest::DescribeRabbitMQServerlessVirtualHostRequest() :
    m_instanceIdHasBeenSet(false),
    m_virtualHostHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_sortElementHasBeenSet(false),
    m_sortOrderHasBeenSet(false)
{
}

string DescribeRabbitMQServerlessVirtualHostRequest::ToJsonString() const
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


string DescribeRabbitMQServerlessVirtualHostRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeRabbitMQServerlessVirtualHostRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeRabbitMQServerlessVirtualHostRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeRabbitMQServerlessVirtualHostRequest::GetVirtualHost() const
{
    return m_virtualHost;
}

void DescribeRabbitMQServerlessVirtualHostRequest::SetVirtualHost(const string& _virtualHost)
{
    m_virtualHost = _virtualHost;
    m_virtualHostHasBeenSet = true;
}

bool DescribeRabbitMQServerlessVirtualHostRequest::VirtualHostHasBeenSet() const
{
    return m_virtualHostHasBeenSet;
}

int64_t DescribeRabbitMQServerlessVirtualHostRequest::GetOffset() const
{
    return m_offset;
}

void DescribeRabbitMQServerlessVirtualHostRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeRabbitMQServerlessVirtualHostRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeRabbitMQServerlessVirtualHostRequest::GetLimit() const
{
    return m_limit;
}

void DescribeRabbitMQServerlessVirtualHostRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeRabbitMQServerlessVirtualHostRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

Filter DescribeRabbitMQServerlessVirtualHostRequest::GetFilters() const
{
    return m_filters;
}

void DescribeRabbitMQServerlessVirtualHostRequest::SetFilters(const Filter& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeRabbitMQServerlessVirtualHostRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

string DescribeRabbitMQServerlessVirtualHostRequest::GetSortElement() const
{
    return m_sortElement;
}

void DescribeRabbitMQServerlessVirtualHostRequest::SetSortElement(const string& _sortElement)
{
    m_sortElement = _sortElement;
    m_sortElementHasBeenSet = true;
}

bool DescribeRabbitMQServerlessVirtualHostRequest::SortElementHasBeenSet() const
{
    return m_sortElementHasBeenSet;
}

string DescribeRabbitMQServerlessVirtualHostRequest::GetSortOrder() const
{
    return m_sortOrder;
}

void DescribeRabbitMQServerlessVirtualHostRequest::SetSortOrder(const string& _sortOrder)
{
    m_sortOrder = _sortOrder;
    m_sortOrderHasBeenSet = true;
}

bool DescribeRabbitMQServerlessVirtualHostRequest::SortOrderHasBeenSet() const
{
    return m_sortOrderHasBeenSet;
}


