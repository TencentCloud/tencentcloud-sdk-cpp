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

#include <tencentcloud/ecdn/v20191012/model/DescribeEcdnDomainStatisticsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ecdn::V20191012::Model;
using namespace rapidjson;
using namespace std;

DescribeEcdnDomainStatisticsRequest::DescribeEcdnDomainStatisticsRequest() :
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_metricsHasBeenSet(false),
    m_domainsHasBeenSet(false),
    m_projectsHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

string DescribeEcdnDomainStatisticsRequest::ToJsonString() const
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

    if (m_offsetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeEcdnDomainStatisticsRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeEcdnDomainStatisticsRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeEcdnDomainStatisticsRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeEcdnDomainStatisticsRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeEcdnDomainStatisticsRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeEcdnDomainStatisticsRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

vector<string> DescribeEcdnDomainStatisticsRequest::GetMetrics() const
{
    return m_metrics;
}

void DescribeEcdnDomainStatisticsRequest::SetMetrics(const vector<string>& _metrics)
{
    m_metrics = _metrics;
    m_metricsHasBeenSet = true;
}

bool DescribeEcdnDomainStatisticsRequest::MetricsHasBeenSet() const
{
    return m_metricsHasBeenSet;
}

vector<string> DescribeEcdnDomainStatisticsRequest::GetDomains() const
{
    return m_domains;
}

void DescribeEcdnDomainStatisticsRequest::SetDomains(const vector<string>& _domains)
{
    m_domains = _domains;
    m_domainsHasBeenSet = true;
}

bool DescribeEcdnDomainStatisticsRequest::DomainsHasBeenSet() const
{
    return m_domainsHasBeenSet;
}

vector<int64_t> DescribeEcdnDomainStatisticsRequest::GetProjects() const
{
    return m_projects;
}

void DescribeEcdnDomainStatisticsRequest::SetProjects(const vector<int64_t>& _projects)
{
    m_projects = _projects;
    m_projectsHasBeenSet = true;
}

bool DescribeEcdnDomainStatisticsRequest::ProjectsHasBeenSet() const
{
    return m_projectsHasBeenSet;
}

int64_t DescribeEcdnDomainStatisticsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeEcdnDomainStatisticsRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeEcdnDomainStatisticsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeEcdnDomainStatisticsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeEcdnDomainStatisticsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeEcdnDomainStatisticsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}


