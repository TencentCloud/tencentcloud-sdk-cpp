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

#include <tencentcloud/teo/v20220901/model/DescribeTimingL7CacheDataRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

DescribeTimingL7CacheDataRequest::DescribeTimingL7CacheDataRequest() :
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_metricNamesHasBeenSet(false),
    m_zoneIdsHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_intervalHasBeenSet(false),
    m_areaHasBeenSet(false)
{
}

string DescribeTimingL7CacheDataRequest::ToJsonString() const
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

    if (m_metricNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_metricNames.begin(); itr != m_metricNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_zoneIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_zoneIds.begin(); itr != m_zoneIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_filtersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_filters.begin(); itr != m_filters.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_intervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Interval";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_interval.c_str(), allocator).Move(), allocator);
    }

    if (m_areaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Area";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_area.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeTimingL7CacheDataRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeTimingL7CacheDataRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeTimingL7CacheDataRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeTimingL7CacheDataRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeTimingL7CacheDataRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeTimingL7CacheDataRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

vector<string> DescribeTimingL7CacheDataRequest::GetMetricNames() const
{
    return m_metricNames;
}

void DescribeTimingL7CacheDataRequest::SetMetricNames(const vector<string>& _metricNames)
{
    m_metricNames = _metricNames;
    m_metricNamesHasBeenSet = true;
}

bool DescribeTimingL7CacheDataRequest::MetricNamesHasBeenSet() const
{
    return m_metricNamesHasBeenSet;
}

vector<string> DescribeTimingL7CacheDataRequest::GetZoneIds() const
{
    return m_zoneIds;
}

void DescribeTimingL7CacheDataRequest::SetZoneIds(const vector<string>& _zoneIds)
{
    m_zoneIds = _zoneIds;
    m_zoneIdsHasBeenSet = true;
}

bool DescribeTimingL7CacheDataRequest::ZoneIdsHasBeenSet() const
{
    return m_zoneIdsHasBeenSet;
}

vector<QueryCondition> DescribeTimingL7CacheDataRequest::GetFilters() const
{
    return m_filters;
}

void DescribeTimingL7CacheDataRequest::SetFilters(const vector<QueryCondition>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeTimingL7CacheDataRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

string DescribeTimingL7CacheDataRequest::GetInterval() const
{
    return m_interval;
}

void DescribeTimingL7CacheDataRequest::SetInterval(const string& _interval)
{
    m_interval = _interval;
    m_intervalHasBeenSet = true;
}

bool DescribeTimingL7CacheDataRequest::IntervalHasBeenSet() const
{
    return m_intervalHasBeenSet;
}

string DescribeTimingL7CacheDataRequest::GetArea() const
{
    return m_area;
}

void DescribeTimingL7CacheDataRequest::SetArea(const string& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool DescribeTimingL7CacheDataRequest::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}


