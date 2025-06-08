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

#include <tencentcloud/wedata/v20210820/model/DescribeExecutorGroupMetricRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeExecutorGroupMetricRequest::DescribeExecutorGroupMetricRequest() :
    m_executorGroupIdHasBeenSet(false),
    m_trendStartTimeHasBeenSet(false),
    m_trendEndTimeHasBeenSet(false),
    m_executorGroupTypeHasBeenSet(false),
    m_executorResourceTypeHasBeenSet(false),
    m_loaderIdHasBeenSet(false),
    m_metricTypeHasBeenSet(false),
    m_granularityHasBeenSet(false)
{
}

string DescribeExecutorGroupMetricRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_executorGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutorGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_executorGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_trendStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrendStartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_trendStartTime, allocator);
    }

    if (m_trendEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrendEndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_trendEndTime, allocator);
    }

    if (m_executorGroupTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutorGroupType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_executorGroupType.c_str(), allocator).Move(), allocator);
    }

    if (m_executorResourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutorResourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_executorResourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_loaderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoaderId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_loaderId.c_str(), allocator).Move(), allocator);
    }

    if (m_metricTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_metricType.c_str(), allocator).Move(), allocator);
    }

    if (m_granularityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Granularity";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_granularity, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeExecutorGroupMetricRequest::GetExecutorGroupId() const
{
    return m_executorGroupId;
}

void DescribeExecutorGroupMetricRequest::SetExecutorGroupId(const string& _executorGroupId)
{
    m_executorGroupId = _executorGroupId;
    m_executorGroupIdHasBeenSet = true;
}

bool DescribeExecutorGroupMetricRequest::ExecutorGroupIdHasBeenSet() const
{
    return m_executorGroupIdHasBeenSet;
}

int64_t DescribeExecutorGroupMetricRequest::GetTrendStartTime() const
{
    return m_trendStartTime;
}

void DescribeExecutorGroupMetricRequest::SetTrendStartTime(const int64_t& _trendStartTime)
{
    m_trendStartTime = _trendStartTime;
    m_trendStartTimeHasBeenSet = true;
}

bool DescribeExecutorGroupMetricRequest::TrendStartTimeHasBeenSet() const
{
    return m_trendStartTimeHasBeenSet;
}

int64_t DescribeExecutorGroupMetricRequest::GetTrendEndTime() const
{
    return m_trendEndTime;
}

void DescribeExecutorGroupMetricRequest::SetTrendEndTime(const int64_t& _trendEndTime)
{
    m_trendEndTime = _trendEndTime;
    m_trendEndTimeHasBeenSet = true;
}

bool DescribeExecutorGroupMetricRequest::TrendEndTimeHasBeenSet() const
{
    return m_trendEndTimeHasBeenSet;
}

string DescribeExecutorGroupMetricRequest::GetExecutorGroupType() const
{
    return m_executorGroupType;
}

void DescribeExecutorGroupMetricRequest::SetExecutorGroupType(const string& _executorGroupType)
{
    m_executorGroupType = _executorGroupType;
    m_executorGroupTypeHasBeenSet = true;
}

bool DescribeExecutorGroupMetricRequest::ExecutorGroupTypeHasBeenSet() const
{
    return m_executorGroupTypeHasBeenSet;
}

string DescribeExecutorGroupMetricRequest::GetExecutorResourceType() const
{
    return m_executorResourceType;
}

void DescribeExecutorGroupMetricRequest::SetExecutorResourceType(const string& _executorResourceType)
{
    m_executorResourceType = _executorResourceType;
    m_executorResourceTypeHasBeenSet = true;
}

bool DescribeExecutorGroupMetricRequest::ExecutorResourceTypeHasBeenSet() const
{
    return m_executorResourceTypeHasBeenSet;
}

string DescribeExecutorGroupMetricRequest::GetLoaderId() const
{
    return m_loaderId;
}

void DescribeExecutorGroupMetricRequest::SetLoaderId(const string& _loaderId)
{
    m_loaderId = _loaderId;
    m_loaderIdHasBeenSet = true;
}

bool DescribeExecutorGroupMetricRequest::LoaderIdHasBeenSet() const
{
    return m_loaderIdHasBeenSet;
}

string DescribeExecutorGroupMetricRequest::GetMetricType() const
{
    return m_metricType;
}

void DescribeExecutorGroupMetricRequest::SetMetricType(const string& _metricType)
{
    m_metricType = _metricType;
    m_metricTypeHasBeenSet = true;
}

bool DescribeExecutorGroupMetricRequest::MetricTypeHasBeenSet() const
{
    return m_metricTypeHasBeenSet;
}

int64_t DescribeExecutorGroupMetricRequest::GetGranularity() const
{
    return m_granularity;
}

void DescribeExecutorGroupMetricRequest::SetGranularity(const int64_t& _granularity)
{
    m_granularity = _granularity;
    m_granularityHasBeenSet = true;
}

bool DescribeExecutorGroupMetricRequest::GranularityHasBeenSet() const
{
    return m_granularityHasBeenSet;
}


