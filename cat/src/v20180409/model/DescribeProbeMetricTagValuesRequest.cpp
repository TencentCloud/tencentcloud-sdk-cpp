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

#include <tencentcloud/cat/v20180409/model/DescribeProbeMetricTagValuesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cat::V20180409::Model;
using namespace std;

DescribeProbeMetricTagValuesRequest::DescribeProbeMetricTagValuesRequest() :
    m_analyzeTaskTypeHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_filterHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_timeRangeHasBeenSet(false)
{
}

string DescribeProbeMetricTagValuesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_analyzeTaskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnalyzeTaskType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_analyzeTaskType.c_str(), allocator).Move(), allocator);
    }

    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_key.c_str(), allocator).Move(), allocator);
    }

    if (m_filterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_filter.c_str(), allocator).Move(), allocator);
    }

    if (m_filtersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_filters.begin(); itr != m_filters.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_timeRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeRange";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_timeRange.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeProbeMetricTagValuesRequest::GetAnalyzeTaskType() const
{
    return m_analyzeTaskType;
}

void DescribeProbeMetricTagValuesRequest::SetAnalyzeTaskType(const string& _analyzeTaskType)
{
    m_analyzeTaskType = _analyzeTaskType;
    m_analyzeTaskTypeHasBeenSet = true;
}

bool DescribeProbeMetricTagValuesRequest::AnalyzeTaskTypeHasBeenSet() const
{
    return m_analyzeTaskTypeHasBeenSet;
}

string DescribeProbeMetricTagValuesRequest::GetKey() const
{
    return m_key;
}

void DescribeProbeMetricTagValuesRequest::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool DescribeProbeMetricTagValuesRequest::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

string DescribeProbeMetricTagValuesRequest::GetFilter() const
{
    return m_filter;
}

void DescribeProbeMetricTagValuesRequest::SetFilter(const string& _filter)
{
    m_filter = _filter;
    m_filterHasBeenSet = true;
}

bool DescribeProbeMetricTagValuesRequest::FilterHasBeenSet() const
{
    return m_filterHasBeenSet;
}

vector<string> DescribeProbeMetricTagValuesRequest::GetFilters() const
{
    return m_filters;
}

void DescribeProbeMetricTagValuesRequest::SetFilters(const vector<string>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeProbeMetricTagValuesRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

string DescribeProbeMetricTagValuesRequest::GetTimeRange() const
{
    return m_timeRange;
}

void DescribeProbeMetricTagValuesRequest::SetTimeRange(const string& _timeRange)
{
    m_timeRange = _timeRange;
    m_timeRangeHasBeenSet = true;
}

bool DescribeProbeMetricTagValuesRequest::TimeRangeHasBeenSet() const
{
    return m_timeRangeHasBeenSet;
}


