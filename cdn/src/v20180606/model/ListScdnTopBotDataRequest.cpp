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

#include <tencentcloud/cdn/v20180606/model/ListScdnTopBotDataRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

ListScdnTopBotDataRequest::ListScdnTopBotDataRequest() :
    m_topCountHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_areaHasBeenSet(false),
    m_metricHasBeenSet(false),
    m_domainsHasBeenSet(false)
{
}

string ListScdnTopBotDataRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_topCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_topCount, allocator);
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

    if (m_areaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Area";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_area.c_str(), allocator).Move(), allocator);
    }

    if (m_metricHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metric";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_metric.c_str(), allocator).Move(), allocator);
    }

    if (m_domainsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domains";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_domains.begin(); itr != m_domains.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ListScdnTopBotDataRequest::GetTopCount() const
{
    return m_topCount;
}

void ListScdnTopBotDataRequest::SetTopCount(const int64_t& _topCount)
{
    m_topCount = _topCount;
    m_topCountHasBeenSet = true;
}

bool ListScdnTopBotDataRequest::TopCountHasBeenSet() const
{
    return m_topCountHasBeenSet;
}

string ListScdnTopBotDataRequest::GetStartTime() const
{
    return m_startTime;
}

void ListScdnTopBotDataRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool ListScdnTopBotDataRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string ListScdnTopBotDataRequest::GetEndTime() const
{
    return m_endTime;
}

void ListScdnTopBotDataRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool ListScdnTopBotDataRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string ListScdnTopBotDataRequest::GetArea() const
{
    return m_area;
}

void ListScdnTopBotDataRequest::SetArea(const string& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool ListScdnTopBotDataRequest::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}

string ListScdnTopBotDataRequest::GetMetric() const
{
    return m_metric;
}

void ListScdnTopBotDataRequest::SetMetric(const string& _metric)
{
    m_metric = _metric;
    m_metricHasBeenSet = true;
}

bool ListScdnTopBotDataRequest::MetricHasBeenSet() const
{
    return m_metricHasBeenSet;
}

vector<string> ListScdnTopBotDataRequest::GetDomains() const
{
    return m_domains;
}

void ListScdnTopBotDataRequest::SetDomains(const vector<string>& _domains)
{
    m_domains = _domains;
    m_domainsHasBeenSet = true;
}

bool ListScdnTopBotDataRequest::DomainsHasBeenSet() const
{
    return m_domainsHasBeenSet;
}


