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

#include <tencentcloud/cfg/v20210820/model/DescribeActionLibraryListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfg::V20210820::Model;
using namespace std;

DescribeActionLibraryListRequest::DescribeActionLibraryListRequest() :
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_objectTypeHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_attributeHasBeenSet(false),
    m_actionIdsHasBeenSet(false)
{
}

string DescribeActionLibraryListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_objectTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObjectType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_objectType, allocator);
    }

    if (m_filtersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_filters.begin(); itr != m_filters.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_attributeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Attribute";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_attribute.begin(); itr != m_attribute.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_actionIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_actionIds.begin(); itr != m_actionIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeActionLibraryListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeActionLibraryListRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeActionLibraryListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t DescribeActionLibraryListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeActionLibraryListRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeActionLibraryListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeActionLibraryListRequest::GetObjectType() const
{
    return m_objectType;
}

void DescribeActionLibraryListRequest::SetObjectType(const uint64_t& _objectType)
{
    m_objectType = _objectType;
    m_objectTypeHasBeenSet = true;
}

bool DescribeActionLibraryListRequest::ObjectTypeHasBeenSet() const
{
    return m_objectTypeHasBeenSet;
}

vector<ActionFilter> DescribeActionLibraryListRequest::GetFilters() const
{
    return m_filters;
}

void DescribeActionLibraryListRequest::SetFilters(const vector<ActionFilter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeActionLibraryListRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

vector<int64_t> DescribeActionLibraryListRequest::GetAttribute() const
{
    return m_attribute;
}

void DescribeActionLibraryListRequest::SetAttribute(const vector<int64_t>& _attribute)
{
    m_attribute = _attribute;
    m_attributeHasBeenSet = true;
}

bool DescribeActionLibraryListRequest::AttributeHasBeenSet() const
{
    return m_attributeHasBeenSet;
}

vector<uint64_t> DescribeActionLibraryListRequest::GetActionIds() const
{
    return m_actionIds;
}

void DescribeActionLibraryListRequest::SetActionIds(const vector<uint64_t>& _actionIds)
{
    m_actionIds = _actionIds;
    m_actionIdsHasBeenSet = true;
}

bool DescribeActionLibraryListRequest::ActionIdsHasBeenSet() const
{
    return m_actionIdsHasBeenSet;
}


