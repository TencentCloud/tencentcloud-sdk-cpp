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

#include <tencentcloud/cat/v20180409/model/DescribeProbeMetricDataRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cat::V20180409::Model;
using namespace std;

DescribeProbeMetricDataRequest::DescribeProbeMetricDataRequest() :
    m_analyzeTaskTypeHasBeenSet(false),
    m_metricTypeHasBeenSet(false),
    m_fieldHasBeenSet(false),
    m_filterHasBeenSet(false),
    m_groupByHasBeenSet(false),
    m_filtersHasBeenSet(false)
{
}

string DescribeProbeMetricDataRequest::ToJsonString() const
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

    if (m_metricTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_metricType.c_str(), allocator).Move(), allocator);
    }

    if (m_fieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Field";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_field.c_str(), allocator).Move(), allocator);
    }

    if (m_filterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_filter.c_str(), allocator).Move(), allocator);
    }

    if (m_groupByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupBy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupBy.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeProbeMetricDataRequest::GetAnalyzeTaskType() const
{
    return m_analyzeTaskType;
}

void DescribeProbeMetricDataRequest::SetAnalyzeTaskType(const string& _analyzeTaskType)
{
    m_analyzeTaskType = _analyzeTaskType;
    m_analyzeTaskTypeHasBeenSet = true;
}

bool DescribeProbeMetricDataRequest::AnalyzeTaskTypeHasBeenSet() const
{
    return m_analyzeTaskTypeHasBeenSet;
}

string DescribeProbeMetricDataRequest::GetMetricType() const
{
    return m_metricType;
}

void DescribeProbeMetricDataRequest::SetMetricType(const string& _metricType)
{
    m_metricType = _metricType;
    m_metricTypeHasBeenSet = true;
}

bool DescribeProbeMetricDataRequest::MetricTypeHasBeenSet() const
{
    return m_metricTypeHasBeenSet;
}

string DescribeProbeMetricDataRequest::GetField() const
{
    return m_field;
}

void DescribeProbeMetricDataRequest::SetField(const string& _field)
{
    m_field = _field;
    m_fieldHasBeenSet = true;
}

bool DescribeProbeMetricDataRequest::FieldHasBeenSet() const
{
    return m_fieldHasBeenSet;
}

string DescribeProbeMetricDataRequest::GetFilter() const
{
    return m_filter;
}

void DescribeProbeMetricDataRequest::SetFilter(const string& _filter)
{
    m_filter = _filter;
    m_filterHasBeenSet = true;
}

bool DescribeProbeMetricDataRequest::FilterHasBeenSet() const
{
    return m_filterHasBeenSet;
}

string DescribeProbeMetricDataRequest::GetGroupBy() const
{
    return m_groupBy;
}

void DescribeProbeMetricDataRequest::SetGroupBy(const string& _groupBy)
{
    m_groupBy = _groupBy;
    m_groupByHasBeenSet = true;
}

bool DescribeProbeMetricDataRequest::GroupByHasBeenSet() const
{
    return m_groupByHasBeenSet;
}

vector<string> DescribeProbeMetricDataRequest::GetFilters() const
{
    return m_filters;
}

void DescribeProbeMetricDataRequest::SetFilters(const vector<string>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeProbeMetricDataRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}


