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

#include <tencentcloud/vod/v20180717/model/DescribeDailyMostPlayedStatRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace rapidjson;
using namespace std;

DescribeDailyMostPlayedStatRequest::DescribeDailyMostPlayedStatRequest() :
    m_dateHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_metricHasBeenSet(false),
    m_subAppIdHasBeenSet(false)
{
}

string DescribeDailyMostPlayedStatRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Date";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_date.c_str(), allocator).Move(), allocator);
    }

    if (m_domainNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DomainName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_domainName.c_str(), allocator).Move(), allocator);
    }

    if (m_metricHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Metric";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_metric.c_str(), allocator).Move(), allocator);
    }

    if (m_subAppIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subAppId, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeDailyMostPlayedStatRequest::GetDate() const
{
    return m_date;
}

void DescribeDailyMostPlayedStatRequest::SetDate(const string& _date)
{
    m_date = _date;
    m_dateHasBeenSet = true;
}

bool DescribeDailyMostPlayedStatRequest::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}

string DescribeDailyMostPlayedStatRequest::GetDomainName() const
{
    return m_domainName;
}

void DescribeDailyMostPlayedStatRequest::SetDomainName(const string& _domainName)
{
    m_domainName = _domainName;
    m_domainNameHasBeenSet = true;
}

bool DescribeDailyMostPlayedStatRequest::DomainNameHasBeenSet() const
{
    return m_domainNameHasBeenSet;
}

string DescribeDailyMostPlayedStatRequest::GetMetric() const
{
    return m_metric;
}

void DescribeDailyMostPlayedStatRequest::SetMetric(const string& _metric)
{
    m_metric = _metric;
    m_metricHasBeenSet = true;
}

bool DescribeDailyMostPlayedStatRequest::MetricHasBeenSet() const
{
    return m_metricHasBeenSet;
}

uint64_t DescribeDailyMostPlayedStatRequest::GetSubAppId() const
{
    return m_subAppId;
}

void DescribeDailyMostPlayedStatRequest::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool DescribeDailyMostPlayedStatRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}


