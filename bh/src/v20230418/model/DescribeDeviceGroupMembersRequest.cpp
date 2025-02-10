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

#include <tencentcloud/bh/v20230418/model/DescribeDeviceGroupMembersRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bh::V20230418::Model;
using namespace std;

DescribeDeviceGroupMembersRequest::DescribeDeviceGroupMembersRequest() :
    m_boundHasBeenSet(false),
    m_idHasBeenSet(false),
    m_idSetHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_kindHasBeenSet(false),
    m_kindSetHasBeenSet(false),
    m_departmentIdHasBeenSet(false),
    m_tagFiltersHasBeenSet(false)
{
}

string DescribeDeviceGroupMembersRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_boundHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bound";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_bound, allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_id, allocator);
    }

    if (m_idSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_idSet.begin(); itr != m_idSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
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

    if (m_kindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Kind";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_kind, allocator);
    }

    if (m_kindSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KindSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_kindSet.begin(); itr != m_kindSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_departmentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DepartmentId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_departmentId.c_str(), allocator).Move(), allocator);
    }

    if (m_tagFiltersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagFilters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagFilters.begin(); itr != m_tagFilters.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


bool DescribeDeviceGroupMembersRequest::GetBound() const
{
    return m_bound;
}

void DescribeDeviceGroupMembersRequest::SetBound(const bool& _bound)
{
    m_bound = _bound;
    m_boundHasBeenSet = true;
}

bool DescribeDeviceGroupMembersRequest::BoundHasBeenSet() const
{
    return m_boundHasBeenSet;
}

uint64_t DescribeDeviceGroupMembersRequest::GetId() const
{
    return m_id;
}

void DescribeDeviceGroupMembersRequest::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DescribeDeviceGroupMembersRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

vector<uint64_t> DescribeDeviceGroupMembersRequest::GetIdSet() const
{
    return m_idSet;
}

void DescribeDeviceGroupMembersRequest::SetIdSet(const vector<uint64_t>& _idSet)
{
    m_idSet = _idSet;
    m_idSetHasBeenSet = true;
}

bool DescribeDeviceGroupMembersRequest::IdSetHasBeenSet() const
{
    return m_idSetHasBeenSet;
}

string DescribeDeviceGroupMembersRequest::GetName() const
{
    return m_name;
}

void DescribeDeviceGroupMembersRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DescribeDeviceGroupMembersRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t DescribeDeviceGroupMembersRequest::GetOffset() const
{
    return m_offset;
}

void DescribeDeviceGroupMembersRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeDeviceGroupMembersRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeDeviceGroupMembersRequest::GetLimit() const
{
    return m_limit;
}

void DescribeDeviceGroupMembersRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeDeviceGroupMembersRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t DescribeDeviceGroupMembersRequest::GetKind() const
{
    return m_kind;
}

void DescribeDeviceGroupMembersRequest::SetKind(const uint64_t& _kind)
{
    m_kind = _kind;
    m_kindHasBeenSet = true;
}

bool DescribeDeviceGroupMembersRequest::KindHasBeenSet() const
{
    return m_kindHasBeenSet;
}

vector<uint64_t> DescribeDeviceGroupMembersRequest::GetKindSet() const
{
    return m_kindSet;
}

void DescribeDeviceGroupMembersRequest::SetKindSet(const vector<uint64_t>& _kindSet)
{
    m_kindSet = _kindSet;
    m_kindSetHasBeenSet = true;
}

bool DescribeDeviceGroupMembersRequest::KindSetHasBeenSet() const
{
    return m_kindSetHasBeenSet;
}

string DescribeDeviceGroupMembersRequest::GetDepartmentId() const
{
    return m_departmentId;
}

void DescribeDeviceGroupMembersRequest::SetDepartmentId(const string& _departmentId)
{
    m_departmentId = _departmentId;
    m_departmentIdHasBeenSet = true;
}

bool DescribeDeviceGroupMembersRequest::DepartmentIdHasBeenSet() const
{
    return m_departmentIdHasBeenSet;
}

vector<TagFilter> DescribeDeviceGroupMembersRequest::GetTagFilters() const
{
    return m_tagFilters;
}

void DescribeDeviceGroupMembersRequest::SetTagFilters(const vector<TagFilter>& _tagFilters)
{
    m_tagFilters = _tagFilters;
    m_tagFiltersHasBeenSet = true;
}

bool DescribeDeviceGroupMembersRequest::TagFiltersHasBeenSet() const
{
    return m_tagFiltersHasBeenSet;
}


