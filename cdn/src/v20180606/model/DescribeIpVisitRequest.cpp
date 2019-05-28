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

#include <tencentcloud/cdn/v20180606/model/DescribeIpVisitRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdn::V20180606::Model;
using namespace rapidjson;
using namespace std;

DescribeIpVisitRequest::DescribeIpVisitRequest() :
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_domainsHasBeenSet(false),
    m_projectHasBeenSet(false),
    m_intervalHasBeenSet(false)
{
}

string DescribeIpVisitRequest::ToJsonString() const
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

    if (m_projectHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Project";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_project, allocator);
    }

    if (m_intervalHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Interval";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_interval.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeIpVisitRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeIpVisitRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeIpVisitRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeIpVisitRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeIpVisitRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeIpVisitRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

vector<string> DescribeIpVisitRequest::GetDomains() const
{
    return m_domains;
}

void DescribeIpVisitRequest::SetDomains(const vector<string>& _domains)
{
    m_domains = _domains;
    m_domainsHasBeenSet = true;
}

bool DescribeIpVisitRequest::DomainsHasBeenSet() const
{
    return m_domainsHasBeenSet;
}

int64_t DescribeIpVisitRequest::GetProject() const
{
    return m_project;
}

void DescribeIpVisitRequest::SetProject(const int64_t& _project)
{
    m_project = _project;
    m_projectHasBeenSet = true;
}

bool DescribeIpVisitRequest::ProjectHasBeenSet() const
{
    return m_projectHasBeenSet;
}

string DescribeIpVisitRequest::GetInterval() const
{
    return m_interval;
}

void DescribeIpVisitRequest::SetInterval(const string& _interval)
{
    m_interval = _interval;
    m_intervalHasBeenSet = true;
}

bool DescribeIpVisitRequest::IntervalHasBeenSet() const
{
    return m_intervalHasBeenSet;
}


