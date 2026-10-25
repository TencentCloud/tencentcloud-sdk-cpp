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

#include <tencentcloud/rum/v20210622/model/DescribeTDEMMetricTrendRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

DescribeTDEMMetricTrendRequest::DescribeTDEMMetricTrendRequest() :
    m_appIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_granularityHasBeenSet(false),
    m_eventTypeHasBeenSet(false),
    m_subTypeHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_metricsHasBeenSet(false),
    m_measurementKeyHasBeenSet(false),
    m_queriesHasBeenSet(false),
    m_compareStartTimeHasBeenSet(false),
    m_compareEndTimeHasBeenSet(false)
{
}

string DescribeTDEMMetricTrendRequest::ToJsonString() const
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

    if (m_granularityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Granularity";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_granularity.c_str(), allocator).Move(), allocator);
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

    if (m_compareStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompareStartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_compareStartTime, allocator);
    }

    if (m_compareEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompareEndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_compareEndTime, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeTDEMMetricTrendRequest::GetAppId() const
{
    return m_appId;
}

void DescribeTDEMMetricTrendRequest::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool DescribeTDEMMetricTrendRequest::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

int64_t DescribeTDEMMetricTrendRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeTDEMMetricTrendRequest::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeTDEMMetricTrendRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t DescribeTDEMMetricTrendRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeTDEMMetricTrendRequest::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeTDEMMetricTrendRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeTDEMMetricTrendRequest::GetGranularity() const
{
    return m_granularity;
}

void DescribeTDEMMetricTrendRequest::SetGranularity(const string& _granularity)
{
    m_granularity = _granularity;
    m_granularityHasBeenSet = true;
}

bool DescribeTDEMMetricTrendRequest::GranularityHasBeenSet() const
{
    return m_granularityHasBeenSet;
}

string DescribeTDEMMetricTrendRequest::GetEventType() const
{
    return m_eventType;
}

void DescribeTDEMMetricTrendRequest::SetEventType(const string& _eventType)
{
    m_eventType = _eventType;
    m_eventTypeHasBeenSet = true;
}

bool DescribeTDEMMetricTrendRequest::EventTypeHasBeenSet() const
{
    return m_eventTypeHasBeenSet;
}

string DescribeTDEMMetricTrendRequest::GetSubType() const
{
    return m_subType;
}

void DescribeTDEMMetricTrendRequest::SetSubType(const string& _subType)
{
    m_subType = _subType;
    m_subTypeHasBeenSet = true;
}

bool DescribeTDEMMetricTrendRequest::SubTypeHasBeenSet() const
{
    return m_subTypeHasBeenSet;
}

string DescribeTDEMMetricTrendRequest::GetFilters() const
{
    return m_filters;
}

void DescribeTDEMMetricTrendRequest::SetFilters(const string& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeTDEMMetricTrendRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

vector<string> DescribeTDEMMetricTrendRequest::GetMetrics() const
{
    return m_metrics;
}

void DescribeTDEMMetricTrendRequest::SetMetrics(const vector<string>& _metrics)
{
    m_metrics = _metrics;
    m_metricsHasBeenSet = true;
}

bool DescribeTDEMMetricTrendRequest::MetricsHasBeenSet() const
{
    return m_metricsHasBeenSet;
}

string DescribeTDEMMetricTrendRequest::GetMeasurementKey() const
{
    return m_measurementKey;
}

void DescribeTDEMMetricTrendRequest::SetMeasurementKey(const string& _measurementKey)
{
    m_measurementKey = _measurementKey;
    m_measurementKeyHasBeenSet = true;
}

bool DescribeTDEMMetricTrendRequest::MeasurementKeyHasBeenSet() const
{
    return m_measurementKeyHasBeenSet;
}

vector<MetricQueryItem> DescribeTDEMMetricTrendRequest::GetQueries() const
{
    return m_queries;
}

void DescribeTDEMMetricTrendRequest::SetQueries(const vector<MetricQueryItem>& _queries)
{
    m_queries = _queries;
    m_queriesHasBeenSet = true;
}

bool DescribeTDEMMetricTrendRequest::QueriesHasBeenSet() const
{
    return m_queriesHasBeenSet;
}

int64_t DescribeTDEMMetricTrendRequest::GetCompareStartTime() const
{
    return m_compareStartTime;
}

void DescribeTDEMMetricTrendRequest::SetCompareStartTime(const int64_t& _compareStartTime)
{
    m_compareStartTime = _compareStartTime;
    m_compareStartTimeHasBeenSet = true;
}

bool DescribeTDEMMetricTrendRequest::CompareStartTimeHasBeenSet() const
{
    return m_compareStartTimeHasBeenSet;
}

int64_t DescribeTDEMMetricTrendRequest::GetCompareEndTime() const
{
    return m_compareEndTime;
}

void DescribeTDEMMetricTrendRequest::SetCompareEndTime(const int64_t& _compareEndTime)
{
    m_compareEndTime = _compareEndTime;
    m_compareEndTimeHasBeenSet = true;
}

bool DescribeTDEMMetricTrendRequest::CompareEndTimeHasBeenSet() const
{
    return m_compareEndTimeHasBeenSet;
}


