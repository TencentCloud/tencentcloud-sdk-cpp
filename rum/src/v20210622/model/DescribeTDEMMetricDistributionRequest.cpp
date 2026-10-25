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

#include <tencentcloud/rum/v20210622/model/DescribeTDEMMetricDistributionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

DescribeTDEMMetricDistributionRequest::DescribeTDEMMetricDistributionRequest() :
    m_appIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_eventTypeHasBeenSet(false),
    m_subTypeHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_metricsHasBeenSet(false),
    m_measurementKeyHasBeenSet(false),
    m_groupByHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_queriesHasBeenSet(false)
{
}

string DescribeTDEMMetricDistributionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endTime, allocator);
    }

    if (m_eventTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_eventType.c_str(), allocator).Move(), allocator);
    }

    if (m_subTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subType.c_str(), allocator).Move(), allocator);
    }

    if (m_filtersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_filters.c_str(), allocator).Move(), allocator);
    }

    if (m_metricsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metrics";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_metrics.begin(); itr != m_metrics.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_measurementKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MeasurementKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_measurementKey.c_str(), allocator).Move(), allocator);
    }

    if (m_groupByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupBy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupBy.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_queriesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Queries";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_queries.begin(); itr != m_queries.end(); ++itr, ++i)
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


string DescribeTDEMMetricDistributionRequest::GetAppId() const
{
    return m_appId;
}

void DescribeTDEMMetricDistributionRequest::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool DescribeTDEMMetricDistributionRequest::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

int64_t DescribeTDEMMetricDistributionRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeTDEMMetricDistributionRequest::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeTDEMMetricDistributionRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t DescribeTDEMMetricDistributionRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeTDEMMetricDistributionRequest::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeTDEMMetricDistributionRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeTDEMMetricDistributionRequest::GetEventType() const
{
    return m_eventType;
}

void DescribeTDEMMetricDistributionRequest::SetEventType(const string& _eventType)
{
    m_eventType = _eventType;
    m_eventTypeHasBeenSet = true;
}

bool DescribeTDEMMetricDistributionRequest::EventTypeHasBeenSet() const
{
    return m_eventTypeHasBeenSet;
}

string DescribeTDEMMetricDistributionRequest::GetSubType() const
{
    return m_subType;
}

void DescribeTDEMMetricDistributionRequest::SetSubType(const string& _subType)
{
    m_subType = _subType;
    m_subTypeHasBeenSet = true;
}

bool DescribeTDEMMetricDistributionRequest::SubTypeHasBeenSet() const
{
    return m_subTypeHasBeenSet;
}

string DescribeTDEMMetricDistributionRequest::GetFilters() const
{
    return m_filters;
}

void DescribeTDEMMetricDistributionRequest::SetFilters(const string& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeTDEMMetricDistributionRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

vector<string> DescribeTDEMMetricDistributionRequest::GetMetrics() const
{
    return m_metrics;
}

void DescribeTDEMMetricDistributionRequest::SetMetrics(const vector<string>& _metrics)
{
    m_metrics = _metrics;
    m_metricsHasBeenSet = true;
}

bool DescribeTDEMMetricDistributionRequest::MetricsHasBeenSet() const
{
    return m_metricsHasBeenSet;
}

string DescribeTDEMMetricDistributionRequest::GetMeasurementKey() const
{
    return m_measurementKey;
}

void DescribeTDEMMetricDistributionRequest::SetMeasurementKey(const string& _measurementKey)
{
    m_measurementKey = _measurementKey;
    m_measurementKeyHasBeenSet = true;
}

bool DescribeTDEMMetricDistributionRequest::MeasurementKeyHasBeenSet() const
{
    return m_measurementKeyHasBeenSet;
}

string DescribeTDEMMetricDistributionRequest::GetGroupBy() const
{
    return m_groupBy;
}

void DescribeTDEMMetricDistributionRequest::SetGroupBy(const string& _groupBy)
{
    m_groupBy = _groupBy;
    m_groupByHasBeenSet = true;
}

bool DescribeTDEMMetricDistributionRequest::GroupByHasBeenSet() const
{
    return m_groupByHasBeenSet;
}

int64_t DescribeTDEMMetricDistributionRequest::GetLimit() const
{
    return m_limit;
}

void DescribeTDEMMetricDistributionRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeTDEMMetricDistributionRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

vector<MetricQueryItem> DescribeTDEMMetricDistributionRequest::GetQueries() const
{
    return m_queries;
}

void DescribeTDEMMetricDistributionRequest::SetQueries(const vector<MetricQueryItem>& _queries)
{
    m_queries = _queries;
    m_queriesHasBeenSet = true;
}

bool DescribeTDEMMetricDistributionRequest::QueriesHasBeenSet() const
{
    return m_queriesHasBeenSet;
}


