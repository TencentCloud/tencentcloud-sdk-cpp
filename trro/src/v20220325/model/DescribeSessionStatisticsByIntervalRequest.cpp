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

#include <tencentcloud/trro/v20220325/model/DescribeSessionStatisticsByIntervalRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trro::V20220325::Model;
using namespace std;

DescribeSessionStatisticsByIntervalRequest::DescribeSessionStatisticsByIntervalRequest() :
    m_projectIdHasBeenSet(false),
    m_statisticIntervalHasBeenSet(false),
    m_deviceIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

string DescribeSessionStatisticsByIntervalRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_statisticIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatisticInterval";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_statisticInterval.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deviceId.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeSessionStatisticsByIntervalRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeSessionStatisticsByIntervalRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeSessionStatisticsByIntervalRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string DescribeSessionStatisticsByIntervalRequest::GetStatisticInterval() const
{
    return m_statisticInterval;
}

void DescribeSessionStatisticsByIntervalRequest::SetStatisticInterval(const string& _statisticInterval)
{
    m_statisticInterval = _statisticInterval;
    m_statisticIntervalHasBeenSet = true;
}

bool DescribeSessionStatisticsByIntervalRequest::StatisticIntervalHasBeenSet() const
{
    return m_statisticIntervalHasBeenSet;
}

string DescribeSessionStatisticsByIntervalRequest::GetDeviceId() const
{
    return m_deviceId;
}

void DescribeSessionStatisticsByIntervalRequest::SetDeviceId(const string& _deviceId)
{
    m_deviceId = _deviceId;
    m_deviceIdHasBeenSet = true;
}

bool DescribeSessionStatisticsByIntervalRequest::DeviceIdHasBeenSet() const
{
    return m_deviceIdHasBeenSet;
}

uint64_t DescribeSessionStatisticsByIntervalRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeSessionStatisticsByIntervalRequest::SetStartTime(const uint64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeSessionStatisticsByIntervalRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

uint64_t DescribeSessionStatisticsByIntervalRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeSessionStatisticsByIntervalRequest::SetEndTime(const uint64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeSessionStatisticsByIntervalRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}


