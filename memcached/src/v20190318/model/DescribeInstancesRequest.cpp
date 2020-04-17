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

#include <tencentcloud/memcached/v20190318/model/DescribeInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Memcached::V20190318::Model;
using namespace rapidjson;
using namespace std;

DescribeInstancesRequest::DescribeInstancesRequest() :
    m_instanceIdsHasBeenSet(false),
    m_instanceNamesHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_orderByHasBeenSet(false),
    m_orderTypeHasBeenSet(false),
    m_projectIdsHasBeenSet(false),
    m_searchKeysHasBeenSet(false),
    m_uniqSubnetIdsHasBeenSet(false),
    m_uniqVpcIdsHasBeenSet(false),
    m_vipsHasBeenSet(false)
{
}

string DescribeInstancesRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_instanceIds.begin(); itr != m_instanceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_instanceNamesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_instanceNames.begin(); itr != m_instanceNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_limitHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_orderByHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OrderBy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_orderBy.c_str(), allocator).Move(), allocator);
    }

    if (m_orderTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OrderType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_orderType, allocator);
    }

    if (m_projectIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProjectIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_projectIds.begin(); itr != m_projectIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetInt64(*itr), allocator);
        }
    }

    if (m_searchKeysHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SearchKeys";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_searchKeys.begin(); itr != m_searchKeys.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_uniqSubnetIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UniqSubnetIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_uniqSubnetIds.begin(); itr != m_uniqSubnetIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_uniqVpcIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UniqVpcIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_uniqVpcIds.begin(); itr != m_uniqVpcIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_vipsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Vips";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_vips.begin(); itr != m_vips.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DescribeInstancesRequest::GetInstanceIds() const
{
    return m_instanceIds;
}

void DescribeInstancesRequest::SetInstanceIds(const vector<string>& _instanceIds)
{
    m_instanceIds = _instanceIds;
    m_instanceIdsHasBeenSet = true;
}

bool DescribeInstancesRequest::InstanceIdsHasBeenSet() const
{
    return m_instanceIdsHasBeenSet;
}

vector<string> DescribeInstancesRequest::GetInstanceNames() const
{
    return m_instanceNames;
}

void DescribeInstancesRequest::SetInstanceNames(const vector<string>& _instanceNames)
{
    m_instanceNames = _instanceNames;
    m_instanceNamesHasBeenSet = true;
}

bool DescribeInstancesRequest::InstanceNamesHasBeenSet() const
{
    return m_instanceNamesHasBeenSet;
}

uint64_t DescribeInstancesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeInstancesRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeInstancesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t DescribeInstancesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeInstancesRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeInstancesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribeInstancesRequest::GetOrderBy() const
{
    return m_orderBy;
}

void DescribeInstancesRequest::SetOrderBy(const string& _orderBy)
{
    m_orderBy = _orderBy;
    m_orderByHasBeenSet = true;
}

bool DescribeInstancesRequest::OrderByHasBeenSet() const
{
    return m_orderByHasBeenSet;
}

int64_t DescribeInstancesRequest::GetOrderType() const
{
    return m_orderType;
}

void DescribeInstancesRequest::SetOrderType(const int64_t& _orderType)
{
    m_orderType = _orderType;
    m_orderTypeHasBeenSet = true;
}

bool DescribeInstancesRequest::OrderTypeHasBeenSet() const
{
    return m_orderTypeHasBeenSet;
}

vector<int64_t> DescribeInstancesRequest::GetProjectIds() const
{
    return m_projectIds;
}

void DescribeInstancesRequest::SetProjectIds(const vector<int64_t>& _projectIds)
{
    m_projectIds = _projectIds;
    m_projectIdsHasBeenSet = true;
}

bool DescribeInstancesRequest::ProjectIdsHasBeenSet() const
{
    return m_projectIdsHasBeenSet;
}

vector<string> DescribeInstancesRequest::GetSearchKeys() const
{
    return m_searchKeys;
}

void DescribeInstancesRequest::SetSearchKeys(const vector<string>& _searchKeys)
{
    m_searchKeys = _searchKeys;
    m_searchKeysHasBeenSet = true;
}

bool DescribeInstancesRequest::SearchKeysHasBeenSet() const
{
    return m_searchKeysHasBeenSet;
}

vector<string> DescribeInstancesRequest::GetUniqSubnetIds() const
{
    return m_uniqSubnetIds;
}

void DescribeInstancesRequest::SetUniqSubnetIds(const vector<string>& _uniqSubnetIds)
{
    m_uniqSubnetIds = _uniqSubnetIds;
    m_uniqSubnetIdsHasBeenSet = true;
}

bool DescribeInstancesRequest::UniqSubnetIdsHasBeenSet() const
{
    return m_uniqSubnetIdsHasBeenSet;
}

vector<string> DescribeInstancesRequest::GetUniqVpcIds() const
{
    return m_uniqVpcIds;
}

void DescribeInstancesRequest::SetUniqVpcIds(const vector<string>& _uniqVpcIds)
{
    m_uniqVpcIds = _uniqVpcIds;
    m_uniqVpcIdsHasBeenSet = true;
}

bool DescribeInstancesRequest::UniqVpcIdsHasBeenSet() const
{
    return m_uniqVpcIdsHasBeenSet;
}

vector<string> DescribeInstancesRequest::GetVips() const
{
    return m_vips;
}

void DescribeInstancesRequest::SetVips(const vector<string>& _vips)
{
    m_vips = _vips;
    m_vipsHasBeenSet = true;
}

bool DescribeInstancesRequest::VipsHasBeenSet() const
{
    return m_vipsHasBeenSet;
}


