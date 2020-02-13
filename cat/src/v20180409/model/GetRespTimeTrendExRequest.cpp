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

#include <tencentcloud/cat/v20180409/model/GetRespTimeTrendExRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cat::V20180409::Model;
using namespace rapidjson;
using namespace std;

GetRespTimeTrendExRequest::GetRespTimeTrendExRequest() :
    m_taskIdHasBeenSet(false),
    m_dateHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_dimensionsHasBeenSet(false),
    m_metricNameHasBeenSet(false)
{
}

string GetRespTimeTrendExRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_taskIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_taskId, allocator);
    }

    if (m_dateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Date";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_date.c_str(), allocator).Move(), allocator);
    }

    if (m_periodHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_period, allocator);
    }

    if (m_dimensionsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Dimensions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_dimensions.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_metricNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MetricName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_metricName.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t GetRespTimeTrendExRequest::GetTaskId() const
{
    return m_taskId;
}

void GetRespTimeTrendExRequest::SetTaskId(const uint64_t& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool GetRespTimeTrendExRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string GetRespTimeTrendExRequest::GetDate() const
{
    return m_date;
}

void GetRespTimeTrendExRequest::SetDate(const string& _date)
{
    m_date = _date;
    m_dateHasBeenSet = true;
}

bool GetRespTimeTrendExRequest::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}

uint64_t GetRespTimeTrendExRequest::GetPeriod() const
{
    return m_period;
}

void GetRespTimeTrendExRequest::SetPeriod(const uint64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool GetRespTimeTrendExRequest::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

DimensionsDetail GetRespTimeTrendExRequest::GetDimensions() const
{
    return m_dimensions;
}

void GetRespTimeTrendExRequest::SetDimensions(const DimensionsDetail& _dimensions)
{
    m_dimensions = _dimensions;
    m_dimensionsHasBeenSet = true;
}

bool GetRespTimeTrendExRequest::DimensionsHasBeenSet() const
{
    return m_dimensionsHasBeenSet;
}

string GetRespTimeTrendExRequest::GetMetricName() const
{
    return m_metricName;
}

void GetRespTimeTrendExRequest::SetMetricName(const string& _metricName)
{
    m_metricName = _metricName;
    m_metricNameHasBeenSet = true;
}

bool GetRespTimeTrendExRequest::MetricNameHasBeenSet() const
{
    return m_metricNameHasBeenSet;
}


