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

#include <tencentcloud/iecp/v20210914/model/DescribeEdgeUnitNodeGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

DescribeEdgeUnitNodeGroupRequest::DescribeEdgeUnitNodeGroupRequest() :
    m_edgeUnitIdHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_nameFilterHasBeenSet(false),
    m_nameMatchedHasBeenSet(false),
    m_orderHasBeenSet(false)
{
}

string DescribeEdgeUnitNodeGroupRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_edgeUnitIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EdgeUnitId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_edgeUnitId, allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
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

    if (m_nameFilterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NameFilter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nameFilter.c_str(), allocator).Move(), allocator);
    }

    if (m_nameMatchedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NameMatched";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nameMatched.c_str(), allocator).Move(), allocator);
    }

    if (m_orderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Order";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_order.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeEdgeUnitNodeGroupRequest::GetEdgeUnitId() const
{
    return m_edgeUnitId;
}

void DescribeEdgeUnitNodeGroupRequest::SetEdgeUnitId(const uint64_t& _edgeUnitId)
{
    m_edgeUnitId = _edgeUnitId;
    m_edgeUnitIdHasBeenSet = true;
}

bool DescribeEdgeUnitNodeGroupRequest::EdgeUnitIdHasBeenSet() const
{
    return m_edgeUnitIdHasBeenSet;
}

string DescribeEdgeUnitNodeGroupRequest::GetNamespace() const
{
    return m_namespace;
}

void DescribeEdgeUnitNodeGroupRequest::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool DescribeEdgeUnitNodeGroupRequest::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

int64_t DescribeEdgeUnitNodeGroupRequest::GetOffset() const
{
    return m_offset;
}

void DescribeEdgeUnitNodeGroupRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeEdgeUnitNodeGroupRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeEdgeUnitNodeGroupRequest::GetLimit() const
{
    return m_limit;
}

void DescribeEdgeUnitNodeGroupRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeEdgeUnitNodeGroupRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeEdgeUnitNodeGroupRequest::GetNameFilter() const
{
    return m_nameFilter;
}

void DescribeEdgeUnitNodeGroupRequest::SetNameFilter(const string& _nameFilter)
{
    m_nameFilter = _nameFilter;
    m_nameFilterHasBeenSet = true;
}

bool DescribeEdgeUnitNodeGroupRequest::NameFilterHasBeenSet() const
{
    return m_nameFilterHasBeenSet;
}

string DescribeEdgeUnitNodeGroupRequest::GetNameMatched() const
{
    return m_nameMatched;
}

void DescribeEdgeUnitNodeGroupRequest::SetNameMatched(const string& _nameMatched)
{
    m_nameMatched = _nameMatched;
    m_nameMatchedHasBeenSet = true;
}

bool DescribeEdgeUnitNodeGroupRequest::NameMatchedHasBeenSet() const
{
    return m_nameMatchedHasBeenSet;
}

string DescribeEdgeUnitNodeGroupRequest::GetOrder() const
{
    return m_order;
}

void DescribeEdgeUnitNodeGroupRequest::SetOrder(const string& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool DescribeEdgeUnitNodeGroupRequest::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}


