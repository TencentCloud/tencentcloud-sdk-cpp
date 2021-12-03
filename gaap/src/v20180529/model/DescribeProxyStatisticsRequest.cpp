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

#include <tencentcloud/gaap/v20180529/model/DescribeProxyStatisticsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gaap::V20180529::Model;
using namespace std;

DescribeProxyStatisticsRequest::DescribeProxyStatisticsRequest() :
    m_proxyIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_metricNamesHasBeenSet(false),
    m_granularityHasBeenSet(false),
    m_ispHasBeenSet(false)
{
}

string DescribeProxyStatisticsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_proxyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_proxyId.c_str(), allocator).Move(), allocator);
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

    if (m_granularityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Granularity";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_granularity, allocator);
    }

    if (m_ispHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Isp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_isp.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeProxyStatisticsRequest::GetProxyId() const
{
    return m_proxyId;
}

void DescribeProxyStatisticsRequest::SetProxyId(const string& _proxyId)
{
    m_proxyId = _proxyId;
    m_proxyIdHasBeenSet = true;
}

bool DescribeProxyStatisticsRequest::ProxyIdHasBeenSet() const
{
    return m_proxyIdHasBeenSet;
}

string DescribeProxyStatisticsRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeProxyStatisticsRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeProxyStatisticsRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeProxyStatisticsRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeProxyStatisticsRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeProxyStatisticsRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

vector<string> DescribeProxyStatisticsRequest::GetMetricNames() const
{
    return m_metricNames;
}

void DescribeProxyStatisticsRequest::SetMetricNames(const vector<string>& _metricNames)
{
    m_metricNames = _metricNames;
    m_metricNamesHasBeenSet = true;
}

bool DescribeProxyStatisticsRequest::MetricNamesHasBeenSet() const
{
    return m_metricNamesHasBeenSet;
}

uint64_t DescribeProxyStatisticsRequest::GetGranularity() const
{
    return m_granularity;
}

void DescribeProxyStatisticsRequest::SetGranularity(const uint64_t& _granularity)
{
    m_granularity = _granularity;
    m_granularityHasBeenSet = true;
}

bool DescribeProxyStatisticsRequest::GranularityHasBeenSet() const
{
    return m_granularityHasBeenSet;
}

string DescribeProxyStatisticsRequest::GetIsp() const
{
    return m_isp;
}

void DescribeProxyStatisticsRequest::SetIsp(const string& _isp)
{
    m_isp = _isp;
    m_ispHasBeenSet = true;
}

bool DescribeProxyStatisticsRequest::IspHasBeenSet() const
{
    return m_ispHasBeenSet;
}


