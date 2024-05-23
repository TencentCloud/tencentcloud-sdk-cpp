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

#include <tencentcloud/svp/v20240125/model/DescribeSavingPlanUsageRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Svp::V20240125::Model;
using namespace std;

DescribeSavingPlanUsageRequest::DescribeSavingPlanUsageRequest() :
    m_startDateHasBeenSet(false),
    m_endDateHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_timeIntervalHasBeenSet(false)
{
}

string DescribeSavingPlanUsageRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_startDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startDate.c_str(), allocator).Move(), allocator);
    }

    if (m_endDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endDate.c_str(), allocator).Move(), allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_timeIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeInterval";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_timeInterval.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeSavingPlanUsageRequest::GetStartDate() const
{
    return m_startDate;
}

void DescribeSavingPlanUsageRequest::SetStartDate(const string& _startDate)
{
    m_startDate = _startDate;
    m_startDateHasBeenSet = true;
}

bool DescribeSavingPlanUsageRequest::StartDateHasBeenSet() const
{
    return m_startDateHasBeenSet;
}

string DescribeSavingPlanUsageRequest::GetEndDate() const
{
    return m_endDate;
}

void DescribeSavingPlanUsageRequest::SetEndDate(const string& _endDate)
{
    m_endDate = _endDate;
    m_endDateHasBeenSet = true;
}

bool DescribeSavingPlanUsageRequest::EndDateHasBeenSet() const
{
    return m_endDateHasBeenSet;
}

uint64_t DescribeSavingPlanUsageRequest::GetOffset() const
{
    return m_offset;
}

void DescribeSavingPlanUsageRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeSavingPlanUsageRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeSavingPlanUsageRequest::GetLimit() const
{
    return m_limit;
}

void DescribeSavingPlanUsageRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeSavingPlanUsageRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeSavingPlanUsageRequest::GetTimeInterval() const
{
    return m_timeInterval;
}

void DescribeSavingPlanUsageRequest::SetTimeInterval(const string& _timeInterval)
{
    m_timeInterval = _timeInterval;
    m_timeIntervalHasBeenSet = true;
}

bool DescribeSavingPlanUsageRequest::TimeIntervalHasBeenSet() const
{
    return m_timeIntervalHasBeenSet;
}


