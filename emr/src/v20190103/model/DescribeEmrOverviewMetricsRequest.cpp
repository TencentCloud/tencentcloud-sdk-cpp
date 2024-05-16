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

#include <tencentcloud/emr/v20190103/model/DescribeEmrOverviewMetricsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

DescribeEmrOverviewMetricsRequest::DescribeEmrOverviewMetricsRequest() :
    m_endHasBeenSet(false),
    m_metricHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_downsampleHasBeenSet(false),
    m_startHasBeenSet(false),
    m_aggregatorHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

string DescribeEmrOverviewMetricsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_endHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "End";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_end, allocator);
    }

    if (m_metricHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metric";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_metric.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_downsampleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Downsample";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_downsample.c_str(), allocator).Move(), allocator);
    }

    if (m_startHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Start";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_start, allocator);
    }

    if (m_aggregatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Aggregator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_aggregator.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tags.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeEmrOverviewMetricsRequest::GetEnd() const
{
    return m_end;
}

void DescribeEmrOverviewMetricsRequest::SetEnd(const int64_t& _end)
{
    m_end = _end;
    m_endHasBeenSet = true;
}

bool DescribeEmrOverviewMetricsRequest::EndHasBeenSet() const
{
    return m_endHasBeenSet;
}

string DescribeEmrOverviewMetricsRequest::GetMetric() const
{
    return m_metric;
}

void DescribeEmrOverviewMetricsRequest::SetMetric(const string& _metric)
{
    m_metric = _metric;
    m_metricHasBeenSet = true;
}

bool DescribeEmrOverviewMetricsRequest::MetricHasBeenSet() const
{
    return m_metricHasBeenSet;
}

string DescribeEmrOverviewMetricsRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeEmrOverviewMetricsRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeEmrOverviewMetricsRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeEmrOverviewMetricsRequest::GetDownsample() const
{
    return m_downsample;
}

void DescribeEmrOverviewMetricsRequest::SetDownsample(const string& _downsample)
{
    m_downsample = _downsample;
    m_downsampleHasBeenSet = true;
}

bool DescribeEmrOverviewMetricsRequest::DownsampleHasBeenSet() const
{
    return m_downsampleHasBeenSet;
}

int64_t DescribeEmrOverviewMetricsRequest::GetStart() const
{
    return m_start;
}

void DescribeEmrOverviewMetricsRequest::SetStart(const int64_t& _start)
{
    m_start = _start;
    m_startHasBeenSet = true;
}

bool DescribeEmrOverviewMetricsRequest::StartHasBeenSet() const
{
    return m_startHasBeenSet;
}

string DescribeEmrOverviewMetricsRequest::GetAggregator() const
{
    return m_aggregator;
}

void DescribeEmrOverviewMetricsRequest::SetAggregator(const string& _aggregator)
{
    m_aggregator = _aggregator;
    m_aggregatorHasBeenSet = true;
}

bool DescribeEmrOverviewMetricsRequest::AggregatorHasBeenSet() const
{
    return m_aggregatorHasBeenSet;
}

string DescribeEmrOverviewMetricsRequest::GetTags() const
{
    return m_tags;
}

void DescribeEmrOverviewMetricsRequest::SetTags(const string& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool DescribeEmrOverviewMetricsRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}


