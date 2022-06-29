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

#include <tencentcloud/tsf/v20180326/model/DescribeInvocationMetricDataPointRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

DescribeInvocationMetricDataPointRequest::DescribeInvocationMetricDataPointRequest() :
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_metricDimensionValuesHasBeenSet(false),
    m_metricsHasBeenSet(false),
    m_kindHasBeenSet(false)
{
}

string DescribeInvocationMetricDataPointRequest::ToJsonString() const
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

    if (m_metricsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metrics";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_metrics.begin(); itr != m_metrics.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_kindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Kind";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_kind.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeInvocationMetricDataPointRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeInvocationMetricDataPointRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeInvocationMetricDataPointRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeInvocationMetricDataPointRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeInvocationMetricDataPointRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeInvocationMetricDataPointRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

vector<MetricDimensionValue> DescribeInvocationMetricDataPointRequest::GetMetricDimensionValues() const
{
    return m_metricDimensionValues;
}

void DescribeInvocationMetricDataPointRequest::SetMetricDimensionValues(const vector<MetricDimensionValue>& _metricDimensionValues)
{
    m_metricDimensionValues = _metricDimensionValues;
    m_metricDimensionValuesHasBeenSet = true;
}

bool DescribeInvocationMetricDataPointRequest::MetricDimensionValuesHasBeenSet() const
{
    return m_metricDimensionValuesHasBeenSet;
}

vector<Metric> DescribeInvocationMetricDataPointRequest::GetMetrics() const
{
    return m_metrics;
}

void DescribeInvocationMetricDataPointRequest::SetMetrics(const vector<Metric>& _metrics)
{
    m_metrics = _metrics;
    m_metricsHasBeenSet = true;
}

bool DescribeInvocationMetricDataPointRequest::MetricsHasBeenSet() const
{
    return m_metricsHasBeenSet;
}

string DescribeInvocationMetricDataPointRequest::GetKind() const
{
    return m_kind;
}

void DescribeInvocationMetricDataPointRequest::SetKind(const string& _kind)
{
    m_kind = _kind;
    m_kindHasBeenSet = true;
}

bool DescribeInvocationMetricDataPointRequest::KindHasBeenSet() const
{
    return m_kindHasBeenSet;
}


