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

#include <tencentcloud/cdc/v20201214/model/DescribeDedicatedClusterHostStatisticsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdc::V20201214::Model;
using namespace std;

DescribeDedicatedClusterHostStatisticsRequest::DescribeDedicatedClusterHostStatisticsRequest() :
    m_dedicatedClusterIdHasBeenSet(false),
    m_hostIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_periodHasBeenSet(false)
{
}

string DescribeDedicatedClusterHostStatisticsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dedicatedClusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DedicatedClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dedicatedClusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_hostIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_hostId.c_str(), allocator).Move(), allocator);
    }

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

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_period.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeDedicatedClusterHostStatisticsRequest::GetDedicatedClusterId() const
{
    return m_dedicatedClusterId;
}

void DescribeDedicatedClusterHostStatisticsRequest::SetDedicatedClusterId(const string& _dedicatedClusterId)
{
    m_dedicatedClusterId = _dedicatedClusterId;
    m_dedicatedClusterIdHasBeenSet = true;
}

bool DescribeDedicatedClusterHostStatisticsRequest::DedicatedClusterIdHasBeenSet() const
{
    return m_dedicatedClusterIdHasBeenSet;
}

string DescribeDedicatedClusterHostStatisticsRequest::GetHostId() const
{
    return m_hostId;
}

void DescribeDedicatedClusterHostStatisticsRequest::SetHostId(const string& _hostId)
{
    m_hostId = _hostId;
    m_hostIdHasBeenSet = true;
}

bool DescribeDedicatedClusterHostStatisticsRequest::HostIdHasBeenSet() const
{
    return m_hostIdHasBeenSet;
}

string DescribeDedicatedClusterHostStatisticsRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeDedicatedClusterHostStatisticsRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeDedicatedClusterHostStatisticsRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeDedicatedClusterHostStatisticsRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeDedicatedClusterHostStatisticsRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeDedicatedClusterHostStatisticsRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeDedicatedClusterHostStatisticsRequest::GetPeriod() const
{
    return m_period;
}

void DescribeDedicatedClusterHostStatisticsRequest::SetPeriod(const string& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool DescribeDedicatedClusterHostStatisticsRequest::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}


