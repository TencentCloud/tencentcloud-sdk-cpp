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

#include <tencentcloud/rum/v20210622/model/DescribeTDEMMetricSummaryRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

DescribeTDEMMetricSummaryRequest::DescribeTDEMMetricSummaryRequest() :
    m_appIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_eventTypeHasBeenSet(false),
    m_subTypeHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_metricsHasBeenSet(false),
    m_measurementKeyHasBeenSet(false),
    m_queriesHasBeenSet(false)
{
}

string DescribeTDEMMetricSummaryRequest::ToJsonString() const
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


string DescribeTDEMMetricSummaryRequest::GetAppId() const
{
    return m_appId;
}

void DescribeTDEMMetricSummaryRequest::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool DescribeTDEMMetricSummaryRequest::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

int64_t DescribeTDEMMetricSummaryRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeTDEMMetricSummaryRequest::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeTDEMMetricSummaryRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t DescribeTDEMMetricSummaryRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeTDEMMetricSummaryRequest::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeTDEMMetricSummaryRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeTDEMMetricSummaryRequest::GetEventType() const
{
    return m_eventType;
}

void DescribeTDEMMetricSummaryRequest::SetEventType(const string& _eventType)
{
    m_eventType = _eventType;
    m_eventTypeHasBeenSet = true;
}

bool DescribeTDEMMetricSummaryRequest::EventTypeHasBeenSet() const
{
    return m_eventTypeHasBeenSet;
}

string DescribeTDEMMetricSummaryRequest::GetSubType() const
{
    return m_subType;
}

void DescribeTDEMMetricSummaryRequest::SetSubType(const string& _subType)
{
    m_subType = _subType;
    m_subTypeHasBeenSet = true;
}

bool DescribeTDEMMetricSummaryRequest::SubTypeHasBeenSet() const
{
    return m_subTypeHasBeenSet;
}

string DescribeTDEMMetricSummaryRequest::GetFilters() const
{
    return m_filters;
}

void DescribeTDEMMetricSummaryRequest::SetFilters(const string& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeTDEMMetricSummaryRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

vector<string> DescribeTDEMMetricSummaryRequest::GetMetrics() const
{
    return m_metrics;
}

void DescribeTDEMMetricSummaryRequest::SetMetrics(const vector<string>& _metrics)
{
    m_metrics = _metrics;
    m_metricsHasBeenSet = true;
}

bool DescribeTDEMMetricSummaryRequest::MetricsHasBeenSet() const
{
    return m_metricsHasBeenSet;
}

string DescribeTDEMMetricSummaryRequest::GetMeasurementKey() const
{
    return m_measurementKey;
}

void DescribeTDEMMetricSummaryRequest::SetMeasurementKey(const string& _measurementKey)
{
    m_measurementKey = _measurementKey;
    m_measurementKeyHasBeenSet = true;
}

bool DescribeTDEMMetricSummaryRequest::MeasurementKeyHasBeenSet() const
{
    return m_measurementKeyHasBeenSet;
}

vector<MetricQueryItem> DescribeTDEMMetricSummaryRequest::GetQueries() const
{
    return m_queries;
}

void DescribeTDEMMetricSummaryRequest::SetQueries(const vector<MetricQueryItem>& _queries)
{
    m_queries = _queries;
    m_queriesHasBeenSet = true;
}

bool DescribeTDEMMetricSummaryRequest::QueriesHasBeenSet() const
{
    return m_queriesHasBeenSet;
}


