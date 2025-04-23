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

#include <tencentcloud/dlc/v20210125/model/DescribeClusterMonitorInfosRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

DescribeClusterMonitorInfosRequest::DescribeClusterMonitorInfosRequest() :
    m_dataEngineIdHasBeenSet(false),
    m_timeStartHasBeenSet(false),
    m_timeEndHasBeenSet(false),
    m_metricNameHasBeenSet(false)
{
}

string DescribeClusterMonitorInfosRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dataEngineIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataEngineId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dataEngineId.c_str(), allocator).Move(), allocator);
    }

    if (m_timeStartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeStart";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_timeStart.c_str(), allocator).Move(), allocator);
    }

    if (m_timeEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeEnd";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_timeEnd.c_str(), allocator).Move(), allocator);
    }

    if (m_metricNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_metricName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeClusterMonitorInfosRequest::GetDataEngineId() const
{
    return m_dataEngineId;
}

void DescribeClusterMonitorInfosRequest::SetDataEngineId(const string& _dataEngineId)
{
    m_dataEngineId = _dataEngineId;
    m_dataEngineIdHasBeenSet = true;
}

bool DescribeClusterMonitorInfosRequest::DataEngineIdHasBeenSet() const
{
    return m_dataEngineIdHasBeenSet;
}

string DescribeClusterMonitorInfosRequest::GetTimeStart() const
{
    return m_timeStart;
}

void DescribeClusterMonitorInfosRequest::SetTimeStart(const string& _timeStart)
{
    m_timeStart = _timeStart;
    m_timeStartHasBeenSet = true;
}

bool DescribeClusterMonitorInfosRequest::TimeStartHasBeenSet() const
{
    return m_timeStartHasBeenSet;
}

string DescribeClusterMonitorInfosRequest::GetTimeEnd() const
{
    return m_timeEnd;
}

void DescribeClusterMonitorInfosRequest::SetTimeEnd(const string& _timeEnd)
{
    m_timeEnd = _timeEnd;
    m_timeEndHasBeenSet = true;
}

bool DescribeClusterMonitorInfosRequest::TimeEndHasBeenSet() const
{
    return m_timeEndHasBeenSet;
}

string DescribeClusterMonitorInfosRequest::GetMetricName() const
{
    return m_metricName;
}

void DescribeClusterMonitorInfosRequest::SetMetricName(const string& _metricName)
{
    m_metricName = _metricName;
    m_metricNameHasBeenSet = true;
}

bool DescribeClusterMonitorInfosRequest::MetricNameHasBeenSet() const
{
    return m_metricNameHasBeenSet;
}


