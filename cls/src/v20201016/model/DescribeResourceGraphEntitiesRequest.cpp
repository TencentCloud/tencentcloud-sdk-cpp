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

#include <tencentcloud/cls/v20201016/model/DescribeResourceGraphEntitiesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

DescribeResourceGraphEntitiesRequest::DescribeResourceGraphEntitiesRequest() :
    m_resourceGraphIdHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_nextCursorHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_fromTimeHasBeenSet(false),
    m_toTimeHasBeenSet(false)
{
}

string DescribeResourceGraphEntitiesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_resourceGraphIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGraphId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceGraphId.c_str(), allocator).Move(), allocator);
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

    if (m_nextCursorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NextCursor";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nextCursor.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_fromTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FromTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_fromTime, allocator);
    }

    if (m_toTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_toTime, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeResourceGraphEntitiesRequest::GetResourceGraphId() const
{
    return m_resourceGraphId;
}

void DescribeResourceGraphEntitiesRequest::SetResourceGraphId(const string& _resourceGraphId)
{
    m_resourceGraphId = _resourceGraphId;
    m_resourceGraphIdHasBeenSet = true;
}

bool DescribeResourceGraphEntitiesRequest::ResourceGraphIdHasBeenSet() const
{
    return m_resourceGraphIdHasBeenSet;
}

vector<Filter> DescribeResourceGraphEntitiesRequest::GetFilters() const
{
    return m_filters;
}

void DescribeResourceGraphEntitiesRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeResourceGraphEntitiesRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

string DescribeResourceGraphEntitiesRequest::GetNextCursor() const
{
    return m_nextCursor;
}

void DescribeResourceGraphEntitiesRequest::SetNextCursor(const string& _nextCursor)
{
    m_nextCursor = _nextCursor;
    m_nextCursorHasBeenSet = true;
}

bool DescribeResourceGraphEntitiesRequest::NextCursorHasBeenSet() const
{
    return m_nextCursorHasBeenSet;
}

uint64_t DescribeResourceGraphEntitiesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeResourceGraphEntitiesRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeResourceGraphEntitiesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t DescribeResourceGraphEntitiesRequest::GetFromTime() const
{
    return m_fromTime;
}

void DescribeResourceGraphEntitiesRequest::SetFromTime(const uint64_t& _fromTime)
{
    m_fromTime = _fromTime;
    m_fromTimeHasBeenSet = true;
}

bool DescribeResourceGraphEntitiesRequest::FromTimeHasBeenSet() const
{
    return m_fromTimeHasBeenSet;
}

uint64_t DescribeResourceGraphEntitiesRequest::GetToTime() const
{
    return m_toTime;
}

void DescribeResourceGraphEntitiesRequest::SetToTime(const uint64_t& _toTime)
{
    m_toTime = _toTime;
    m_toTimeHasBeenSet = true;
}

bool DescribeResourceGraphEntitiesRequest::ToTimeHasBeenSet() const
{
    return m_toTimeHasBeenSet;
}


