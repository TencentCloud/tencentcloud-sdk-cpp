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

#include <tencentcloud/ecdn/v20191012/model/DescribeEcdnStatisticsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ecdn::V20191012::Model;
using namespace rapidjson;
using namespace std;

DescribeEcdnStatisticsRequest::DescribeEcdnStatisticsRequest() :
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_metricsHasBeenSet(false),
    m_intervalHasBeenSet(false),
    m_domainsHasBeenSet(false),
    m_projectsHasBeenSet(false)
{
}

string DescribeEcdnStatisticsRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_metricsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Metrics";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_metrics.begin(); itr != m_metrics.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_intervalHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Interval";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_interval, allocator);
    }

    if (m_domainsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Domains";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_domains.begin(); itr != m_domains.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_projectsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Projects";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_projects.begin(); itr != m_projects.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetInt64(*itr), allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeEcdnStatisticsRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeEcdnStatisticsRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeEcdnStatisticsRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeEcdnStatisticsRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeEcdnStatisticsRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeEcdnStatisticsRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

vector<string> DescribeEcdnStatisticsRequest::GetMetrics() const
{
    return m_metrics;
}

void DescribeEcdnStatisticsRequest::SetMetrics(const vector<string>& _metrics)
{
    m_metrics = _metrics;
    m_metricsHasBeenSet = true;
}

bool DescribeEcdnStatisticsRequest::MetricsHasBeenSet() const
{
    return m_metricsHasBeenSet;
}

int64_t DescribeEcdnStatisticsRequest::GetInterval() const
{
    return m_interval;
}

void DescribeEcdnStatisticsRequest::SetInterval(const int64_t& _interval)
{
    m_interval = _interval;
    m_intervalHasBeenSet = true;
}

bool DescribeEcdnStatisticsRequest::IntervalHasBeenSet() const
{
    return m_intervalHasBeenSet;
}

vector<string> DescribeEcdnStatisticsRequest::GetDomains() const
{
    return m_domains;
}

void DescribeEcdnStatisticsRequest::SetDomains(const vector<string>& _domains)
{
    m_domains = _domains;
    m_domainsHasBeenSet = true;
}

bool DescribeEcdnStatisticsRequest::DomainsHasBeenSet() const
{
    return m_domainsHasBeenSet;
}

vector<int64_t> DescribeEcdnStatisticsRequest::GetProjects() const
{
    return m_projects;
}

void DescribeEcdnStatisticsRequest::SetProjects(const vector<int64_t>& _projects)
{
    m_projects = _projects;
    m_projectsHasBeenSet = true;
}

bool DescribeEcdnStatisticsRequest::ProjectsHasBeenSet() const
{
    return m_projectsHasBeenSet;
}


