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

#include <tencentcloud/dlc/v20210125/model/DescribeTasksRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace rapidjson;
using namespace std;

DescribeTasksRequest::DescribeTasksRequest() :
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_sortByHasBeenSet(false),
    m_sortingHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

string DescribeTasksRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_sortByHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SortBy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_sortBy.c_str(), allocator).Move(), allocator);
    }

    if (m_sortingHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Sorting";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_sorting.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_endTime.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeTasksRequest::GetLimit() const
{
    return m_limit;
}

void DescribeTasksRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeTasksRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeTasksRequest::GetOffset() const
{
    return m_offset;
}

void DescribeTasksRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeTasksRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

vector<Filter> DescribeTasksRequest::GetFilters() const
{
    return m_filters;
}

void DescribeTasksRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeTasksRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

string DescribeTasksRequest::GetSortBy() const
{
    return m_sortBy;
}

void DescribeTasksRequest::SetSortBy(const string& _sortBy)
{
    m_sortBy = _sortBy;
    m_sortByHasBeenSet = true;
}

bool DescribeTasksRequest::SortByHasBeenSet() const
{
    return m_sortByHasBeenSet;
}

string DescribeTasksRequest::GetSorting() const
{
    return m_sorting;
}

void DescribeTasksRequest::SetSorting(const string& _sorting)
{
    m_sorting = _sorting;
    m_sortingHasBeenSet = true;
}

bool DescribeTasksRequest::SortingHasBeenSet() const
{
    return m_sortingHasBeenSet;
}

string DescribeTasksRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeTasksRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeTasksRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeTasksRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeTasksRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeTasksRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}


