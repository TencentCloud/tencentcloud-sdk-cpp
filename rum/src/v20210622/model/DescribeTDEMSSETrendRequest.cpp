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

#include <tencentcloud/rum/v20210622/model/DescribeTDEMSSETrendRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

DescribeTDEMSSETrendRequest::DescribeTDEMSSETrendRequest() :
    m_appIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_metricHasBeenSet(false),
    m_dimensionHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_topNHasBeenSet(false)
{
}

string DescribeTDEMSSETrendRequest::ToJsonString() const
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

    if (m_metricHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metric";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_metric.c_str(), allocator).Move(), allocator);
    }

    if (m_dimensionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Dimension";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dimension.c_str(), allocator).Move(), allocator);
    }

    if (m_filtersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_filters.c_str(), allocator).Move(), allocator);
    }

    if (m_topNHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopN";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_topN, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeTDEMSSETrendRequest::GetAppId() const
{
    return m_appId;
}

void DescribeTDEMSSETrendRequest::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool DescribeTDEMSSETrendRequest::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

int64_t DescribeTDEMSSETrendRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeTDEMSSETrendRequest::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeTDEMSSETrendRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t DescribeTDEMSSETrendRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeTDEMSSETrendRequest::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeTDEMSSETrendRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeTDEMSSETrendRequest::GetMetric() const
{
    return m_metric;
}

void DescribeTDEMSSETrendRequest::SetMetric(const string& _metric)
{
    m_metric = _metric;
    m_metricHasBeenSet = true;
}

bool DescribeTDEMSSETrendRequest::MetricHasBeenSet() const
{
    return m_metricHasBeenSet;
}

string DescribeTDEMSSETrendRequest::GetDimension() const
{
    return m_dimension;
}

void DescribeTDEMSSETrendRequest::SetDimension(const string& _dimension)
{
    m_dimension = _dimension;
    m_dimensionHasBeenSet = true;
}

bool DescribeTDEMSSETrendRequest::DimensionHasBeenSet() const
{
    return m_dimensionHasBeenSet;
}

string DescribeTDEMSSETrendRequest::GetFilters() const
{
    return m_filters;
}

void DescribeTDEMSSETrendRequest::SetFilters(const string& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeTDEMSSETrendRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

int64_t DescribeTDEMSSETrendRequest::GetTopN() const
{
    return m_topN;
}

void DescribeTDEMSSETrendRequest::SetTopN(const int64_t& _topN)
{
    m_topN = _topN;
    m_topNHasBeenSet = true;
}

bool DescribeTDEMSSETrendRequest::TopNHasBeenSet() const
{
    return m_topNHasBeenSet;
}


