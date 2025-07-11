/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/billing/v20180709/model/DescribeBillAdjustInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

DescribeBillAdjustInfoRequest::DescribeBillAdjustInfoRequest() :
    m_monthHasBeenSet(false),
    m_timeFromHasBeenSet(false),
    m_timeToHasBeenSet(false)
{
}

string DescribeBillAdjustInfoRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_monthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Month";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_month.c_str(), allocator).Move(), allocator);
    }

    if (m_timeFromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeFrom";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_timeFrom.c_str(), allocator).Move(), allocator);
    }

    if (m_timeToHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeTo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_timeTo.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeBillAdjustInfoRequest::GetMonth() const
{
    return m_month;
}

void DescribeBillAdjustInfoRequest::SetMonth(const string& _month)
{
    m_month = _month;
    m_monthHasBeenSet = true;
}

bool DescribeBillAdjustInfoRequest::MonthHasBeenSet() const
{
    return m_monthHasBeenSet;
}

string DescribeBillAdjustInfoRequest::GetTimeFrom() const
{
    return m_timeFrom;
}

void DescribeBillAdjustInfoRequest::SetTimeFrom(const string& _timeFrom)
{
    m_timeFrom = _timeFrom;
    m_timeFromHasBeenSet = true;
}

bool DescribeBillAdjustInfoRequest::TimeFromHasBeenSet() const
{
    return m_timeFromHasBeenSet;
}

string DescribeBillAdjustInfoRequest::GetTimeTo() const
{
    return m_timeTo;
}

void DescribeBillAdjustInfoRequest::SetTimeTo(const string& _timeTo)
{
    m_timeTo = _timeTo;
    m_timeToHasBeenSet = true;
}

bool DescribeBillAdjustInfoRequest::TimeToHasBeenSet() const
{
    return m_timeToHasBeenSet;
}


