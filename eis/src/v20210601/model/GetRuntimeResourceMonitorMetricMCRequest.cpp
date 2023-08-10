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

#include <tencentcloud/eis/v20210601/model/GetRuntimeResourceMonitorMetricMCRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Eis::V20210601::Model;
using namespace std;

GetRuntimeResourceMonitorMetricMCRequest::GetRuntimeResourceMonitorMetricMCRequest() :
    m_runtimeIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_metricTypeHasBeenSet(false),
    m_rateTypeHasBeenSet(false),
    m_intervalHasBeenSet(false),
    m_runtimeClassHasBeenSet(false),
    m_aggregationTypeHasBeenSet(false)
{
}

string GetRuntimeResourceMonitorMetricMCRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_runtimeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuntimeId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_runtimeId, allocator);
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

    if (m_metricTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_metricType, allocator);
    }

    if (m_rateTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RateType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_rateType, allocator);
    }

    if (m_intervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Interval";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_interval, allocator);
    }

    if (m_runtimeClassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuntimeClass";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_runtimeClass, allocator);
    }

    if (m_aggregationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AggregationType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_aggregationType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t GetRuntimeResourceMonitorMetricMCRequest::GetRuntimeId() const
{
    return m_runtimeId;
}

void GetRuntimeResourceMonitorMetricMCRequest::SetRuntimeId(const int64_t& _runtimeId)
{
    m_runtimeId = _runtimeId;
    m_runtimeIdHasBeenSet = true;
}

bool GetRuntimeResourceMonitorMetricMCRequest::RuntimeIdHasBeenSet() const
{
    return m_runtimeIdHasBeenSet;
}

int64_t GetRuntimeResourceMonitorMetricMCRequest::GetStartTime() const
{
    return m_startTime;
}

void GetRuntimeResourceMonitorMetricMCRequest::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool GetRuntimeResourceMonitorMetricMCRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t GetRuntimeResourceMonitorMetricMCRequest::GetEndTime() const
{
    return m_endTime;
}

void GetRuntimeResourceMonitorMetricMCRequest::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool GetRuntimeResourceMonitorMetricMCRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t GetRuntimeResourceMonitorMetricMCRequest::GetMetricType() const
{
    return m_metricType;
}

void GetRuntimeResourceMonitorMetricMCRequest::SetMetricType(const int64_t& _metricType)
{
    m_metricType = _metricType;
    m_metricTypeHasBeenSet = true;
}

bool GetRuntimeResourceMonitorMetricMCRequest::MetricTypeHasBeenSet() const
{
    return m_metricTypeHasBeenSet;
}

bool GetRuntimeResourceMonitorMetricMCRequest::GetRateType() const
{
    return m_rateType;
}

void GetRuntimeResourceMonitorMetricMCRequest::SetRateType(const bool& _rateType)
{
    m_rateType = _rateType;
    m_rateTypeHasBeenSet = true;
}

bool GetRuntimeResourceMonitorMetricMCRequest::RateTypeHasBeenSet() const
{
    return m_rateTypeHasBeenSet;
}

int64_t GetRuntimeResourceMonitorMetricMCRequest::GetInterval() const
{
    return m_interval;
}

void GetRuntimeResourceMonitorMetricMCRequest::SetInterval(const int64_t& _interval)
{
    m_interval = _interval;
    m_intervalHasBeenSet = true;
}

bool GetRuntimeResourceMonitorMetricMCRequest::IntervalHasBeenSet() const
{
    return m_intervalHasBeenSet;
}

int64_t GetRuntimeResourceMonitorMetricMCRequest::GetRuntimeClass() const
{
    return m_runtimeClass;
}

void GetRuntimeResourceMonitorMetricMCRequest::SetRuntimeClass(const int64_t& _runtimeClass)
{
    m_runtimeClass = _runtimeClass;
    m_runtimeClassHasBeenSet = true;
}

bool GetRuntimeResourceMonitorMetricMCRequest::RuntimeClassHasBeenSet() const
{
    return m_runtimeClassHasBeenSet;
}

int64_t GetRuntimeResourceMonitorMetricMCRequest::GetAggregationType() const
{
    return m_aggregationType;
}

void GetRuntimeResourceMonitorMetricMCRequest::SetAggregationType(const int64_t& _aggregationType)
{
    m_aggregationType = _aggregationType;
    m_aggregationTypeHasBeenSet = true;
}

bool GetRuntimeResourceMonitorMetricMCRequest::AggregationTypeHasBeenSet() const
{
    return m_aggregationTypeHasBeenSet;
}


