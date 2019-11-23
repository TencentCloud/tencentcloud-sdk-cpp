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

#include <tencentcloud/dayu/v20180709/model/DescribeBaradDataRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dayu::V20180709::Model;
using namespace rapidjson;
using namespace std;

DescribeBaradDataRequest::DescribeBaradDataRequest() :
    m_businessHasBeenSet(false),
    m_idHasBeenSet(false),
    m_metricNameHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_statisticsHasBeenSet(false),
    m_protocolPortHasBeenSet(false),
    m_ipHasBeenSet(false)
{
}

string DescribeBaradDataRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_businessHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Business";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_business.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_metricNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MetricName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_metricName.c_str(), allocator).Move(), allocator);
    }

    if (m_periodHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_period, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statisticsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Statistics";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_statistics.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolPortHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProtocolPort";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_protocolPort.begin(); itr != m_protocolPort.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_ipHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_ip.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeBaradDataRequest::GetBusiness() const
{
    return m_business;
}

void DescribeBaradDataRequest::SetBusiness(const string& _business)
{
    m_business = _business;
    m_businessHasBeenSet = true;
}

bool DescribeBaradDataRequest::BusinessHasBeenSet() const
{
    return m_businessHasBeenSet;
}

string DescribeBaradDataRequest::GetId() const
{
    return m_id;
}

void DescribeBaradDataRequest::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DescribeBaradDataRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string DescribeBaradDataRequest::GetMetricName() const
{
    return m_metricName;
}

void DescribeBaradDataRequest::SetMetricName(const string& _metricName)
{
    m_metricName = _metricName;
    m_metricNameHasBeenSet = true;
}

bool DescribeBaradDataRequest::MetricNameHasBeenSet() const
{
    return m_metricNameHasBeenSet;
}

uint64_t DescribeBaradDataRequest::GetPeriod() const
{
    return m_period;
}

void DescribeBaradDataRequest::SetPeriod(const uint64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool DescribeBaradDataRequest::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

string DescribeBaradDataRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeBaradDataRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeBaradDataRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeBaradDataRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeBaradDataRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeBaradDataRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeBaradDataRequest::GetStatistics() const
{
    return m_statistics;
}

void DescribeBaradDataRequest::SetStatistics(const string& _statistics)
{
    m_statistics = _statistics;
    m_statisticsHasBeenSet = true;
}

bool DescribeBaradDataRequest::StatisticsHasBeenSet() const
{
    return m_statisticsHasBeenSet;
}

vector<ProtocolPort> DescribeBaradDataRequest::GetProtocolPort() const
{
    return m_protocolPort;
}

void DescribeBaradDataRequest::SetProtocolPort(const vector<ProtocolPort>& _protocolPort)
{
    m_protocolPort = _protocolPort;
    m_protocolPortHasBeenSet = true;
}

bool DescribeBaradDataRequest::ProtocolPortHasBeenSet() const
{
    return m_protocolPortHasBeenSet;
}

string DescribeBaradDataRequest::GetIp() const
{
    return m_ip;
}

void DescribeBaradDataRequest::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool DescribeBaradDataRequest::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}


