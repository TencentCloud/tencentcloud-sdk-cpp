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

#include <tencentcloud/tsf/v20180326/model/DescribeInvocationMetricDataDimensionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

DescribeInvocationMetricDataDimensionRequest::DescribeInvocationMetricDataDimensionRequest() :
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_dimensionNameHasBeenSet(false),
    m_searchWordHasBeenSet(false),
    m_metricDimensionValuesHasBeenSet(false)
{
}

string DescribeInvocationMetricDataDimensionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_dimensionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DimensionName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dimensionName.c_str(), allocator).Move(), allocator);
    }

    if (m_searchWordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchWord";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_searchWord.c_str(), allocator).Move(), allocator);
    }

    if (m_metricDimensionValuesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricDimensionValues";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_metricDimensionValues.begin(); itr != m_metricDimensionValues.end(); ++itr, ++i)
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


string DescribeInvocationMetricDataDimensionRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeInvocationMetricDataDimensionRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeInvocationMetricDataDimensionRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeInvocationMetricDataDimensionRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeInvocationMetricDataDimensionRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeInvocationMetricDataDimensionRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t DescribeInvocationMetricDataDimensionRequest::GetOffset() const
{
    return m_offset;
}

void DescribeInvocationMetricDataDimensionRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeInvocationMetricDataDimensionRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeInvocationMetricDataDimensionRequest::GetLimit() const
{
    return m_limit;
}

void DescribeInvocationMetricDataDimensionRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeInvocationMetricDataDimensionRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeInvocationMetricDataDimensionRequest::GetDimensionName() const
{
    return m_dimensionName;
}

void DescribeInvocationMetricDataDimensionRequest::SetDimensionName(const string& _dimensionName)
{
    m_dimensionName = _dimensionName;
    m_dimensionNameHasBeenSet = true;
}

bool DescribeInvocationMetricDataDimensionRequest::DimensionNameHasBeenSet() const
{
    return m_dimensionNameHasBeenSet;
}

string DescribeInvocationMetricDataDimensionRequest::GetSearchWord() const
{
    return m_searchWord;
}

void DescribeInvocationMetricDataDimensionRequest::SetSearchWord(const string& _searchWord)
{
    m_searchWord = _searchWord;
    m_searchWordHasBeenSet = true;
}

bool DescribeInvocationMetricDataDimensionRequest::SearchWordHasBeenSet() const
{
    return m_searchWordHasBeenSet;
}

vector<MetricDimensionValue> DescribeInvocationMetricDataDimensionRequest::GetMetricDimensionValues() const
{
    return m_metricDimensionValues;
}

void DescribeInvocationMetricDataDimensionRequest::SetMetricDimensionValues(const vector<MetricDimensionValue>& _metricDimensionValues)
{
    m_metricDimensionValues = _metricDimensionValues;
    m_metricDimensionValuesHasBeenSet = true;
}

bool DescribeInvocationMetricDataDimensionRequest::MetricDimensionValuesHasBeenSet() const
{
    return m_metricDimensionValuesHasBeenSet;
}


