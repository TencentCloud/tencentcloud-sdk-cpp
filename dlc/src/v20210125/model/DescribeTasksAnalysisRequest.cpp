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

#include <tencentcloud/dlc/v20210125/model/DescribeTasksAnalysisRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

DescribeTasksAnalysisRequest::DescribeTasksAnalysisRequest() :
    m_dataEngineNameHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_sortByHasBeenSet(false),
    m_sortingHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

string DescribeTasksAnalysisRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dataEngineNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataEngineName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dataEngineName.c_str(), allocator).Move(), allocator);
    }

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

    if (m_sortByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortBy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sortBy.c_str(), allocator).Move(), allocator);
    }

    if (m_sortingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sorting";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sorting.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeTasksAnalysisRequest::GetDataEngineName() const
{
    return m_dataEngineName;
}

void DescribeTasksAnalysisRequest::SetDataEngineName(const string& _dataEngineName)
{
    m_dataEngineName = _dataEngineName;
    m_dataEngineNameHasBeenSet = true;
}

bool DescribeTasksAnalysisRequest::DataEngineNameHasBeenSet() const
{
    return m_dataEngineNameHasBeenSet;
}

int64_t DescribeTasksAnalysisRequest::GetLimit() const
{
    return m_limit;
}

void DescribeTasksAnalysisRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeTasksAnalysisRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeTasksAnalysisRequest::GetOffset() const
{
    return m_offset;
}

void DescribeTasksAnalysisRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeTasksAnalysisRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

vector<Filter> DescribeTasksAnalysisRequest::GetFilters() const
{
    return m_filters;
}

void DescribeTasksAnalysisRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeTasksAnalysisRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

string DescribeTasksAnalysisRequest::GetSortBy() const
{
    return m_sortBy;
}

void DescribeTasksAnalysisRequest::SetSortBy(const string& _sortBy)
{
    m_sortBy = _sortBy;
    m_sortByHasBeenSet = true;
}

bool DescribeTasksAnalysisRequest::SortByHasBeenSet() const
{
    return m_sortByHasBeenSet;
}

string DescribeTasksAnalysisRequest::GetSorting() const
{
    return m_sorting;
}

void DescribeTasksAnalysisRequest::SetSorting(const string& _sorting)
{
    m_sorting = _sorting;
    m_sortingHasBeenSet = true;
}

bool DescribeTasksAnalysisRequest::SortingHasBeenSet() const
{
    return m_sortingHasBeenSet;
}

string DescribeTasksAnalysisRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeTasksAnalysisRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeTasksAnalysisRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeTasksAnalysisRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeTasksAnalysisRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeTasksAnalysisRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}


