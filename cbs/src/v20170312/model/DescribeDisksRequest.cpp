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

#include <tencentcloud/cbs/v20170312/model/DescribeDisksRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cbs::V20170312::Model;
using namespace rapidjson;
using namespace std;

DescribeDisksRequest::DescribeDisksRequest() :
    m_diskIdsHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_orderHasBeenSet(false),
    m_orderFieldHasBeenSet(false),
    m_returnBindAutoSnapshotPolicyHasBeenSet(false)
{
}

string DescribeDisksRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_diskIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DiskIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_diskIds.begin(); itr != m_diskIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_filtersHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Filters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_filters.begin(); itr != m_filters.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_offsetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_orderHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Order";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_order.c_str(), allocator).Move(), allocator);
    }

    if (m_orderFieldHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OrderField";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_orderField.c_str(), allocator).Move(), allocator);
    }

    if (m_returnBindAutoSnapshotPolicyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ReturnBindAutoSnapshotPolicy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_returnBindAutoSnapshotPolicy, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DescribeDisksRequest::GetDiskIds() const
{
    return m_diskIds;
}

void DescribeDisksRequest::SetDiskIds(const vector<string>& _diskIds)
{
    m_diskIds = _diskIds;
    m_diskIdsHasBeenSet = true;
}

bool DescribeDisksRequest::DiskIdsHasBeenSet() const
{
    return m_diskIdsHasBeenSet;
}

vector<Filter> DescribeDisksRequest::GetFilters() const
{
    return m_filters;
}

void DescribeDisksRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeDisksRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

uint64_t DescribeDisksRequest::GetOffset() const
{
    return m_offset;
}

void DescribeDisksRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeDisksRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeDisksRequest::GetLimit() const
{
    return m_limit;
}

void DescribeDisksRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeDisksRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeDisksRequest::GetOrder() const
{
    return m_order;
}

void DescribeDisksRequest::SetOrder(const string& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool DescribeDisksRequest::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}

string DescribeDisksRequest::GetOrderField() const
{
    return m_orderField;
}

void DescribeDisksRequest::SetOrderField(const string& _orderField)
{
    m_orderField = _orderField;
    m_orderFieldHasBeenSet = true;
}

bool DescribeDisksRequest::OrderFieldHasBeenSet() const
{
    return m_orderFieldHasBeenSet;
}

bool DescribeDisksRequest::GetReturnBindAutoSnapshotPolicy() const
{
    return m_returnBindAutoSnapshotPolicy;
}

void DescribeDisksRequest::SetReturnBindAutoSnapshotPolicy(const bool& _returnBindAutoSnapshotPolicy)
{
    m_returnBindAutoSnapshotPolicy = _returnBindAutoSnapshotPolicy;
    m_returnBindAutoSnapshotPolicyHasBeenSet = true;
}

bool DescribeDisksRequest::ReturnBindAutoSnapshotPolicyHasBeenSet() const
{
    return m_returnBindAutoSnapshotPolicyHasBeenSet;
}


