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

#include <tencentcloud/cdn/v20180606/model/DescribeScdnTopDataRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdn::V20180606::Model;
using namespace rapidjson;
using namespace std;

DescribeScdnTopDataRequest::DescribeScdnTopDataRequest() :
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_metricHasBeenSet(false),
    m_filterHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_attackTypeHasBeenSet(false),
    m_defenceModeHasBeenSet(false)
{
}

string DescribeScdnTopDataRequest::ToJsonString() const
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

    if (m_modeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_mode.c_str(), allocator).Move(), allocator);
    }

    if (m_metricHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Metric";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_metric.c_str(), allocator).Move(), allocator);
    }

    if (m_filterHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Filter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_filter.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_attackTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AttackType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_attackType.c_str(), allocator).Move(), allocator);
    }

    if (m_defenceModeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DefenceMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_defenceMode.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeScdnTopDataRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeScdnTopDataRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeScdnTopDataRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeScdnTopDataRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeScdnTopDataRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeScdnTopDataRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeScdnTopDataRequest::GetMode() const
{
    return m_mode;
}

void DescribeScdnTopDataRequest::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool DescribeScdnTopDataRequest::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

string DescribeScdnTopDataRequest::GetMetric() const
{
    return m_metric;
}

void DescribeScdnTopDataRequest::SetMetric(const string& _metric)
{
    m_metric = _metric;
    m_metricHasBeenSet = true;
}

bool DescribeScdnTopDataRequest::MetricHasBeenSet() const
{
    return m_metricHasBeenSet;
}

string DescribeScdnTopDataRequest::GetFilter() const
{
    return m_filter;
}

void DescribeScdnTopDataRequest::SetFilter(const string& _filter)
{
    m_filter = _filter;
    m_filterHasBeenSet = true;
}

bool DescribeScdnTopDataRequest::FilterHasBeenSet() const
{
    return m_filterHasBeenSet;
}

string DescribeScdnTopDataRequest::GetDomain() const
{
    return m_domain;
}

void DescribeScdnTopDataRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool DescribeScdnTopDataRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string DescribeScdnTopDataRequest::GetAttackType() const
{
    return m_attackType;
}

void DescribeScdnTopDataRequest::SetAttackType(const string& _attackType)
{
    m_attackType = _attackType;
    m_attackTypeHasBeenSet = true;
}

bool DescribeScdnTopDataRequest::AttackTypeHasBeenSet() const
{
    return m_attackTypeHasBeenSet;
}

string DescribeScdnTopDataRequest::GetDefenceMode() const
{
    return m_defenceMode;
}

void DescribeScdnTopDataRequest::SetDefenceMode(const string& _defenceMode)
{
    m_defenceMode = _defenceMode;
    m_defenceModeHasBeenSet = true;
}

bool DescribeScdnTopDataRequest::DefenceModeHasBeenSet() const
{
    return m_defenceModeHasBeenSet;
}


