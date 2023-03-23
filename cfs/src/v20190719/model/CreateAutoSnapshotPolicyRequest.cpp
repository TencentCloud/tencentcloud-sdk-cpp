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

#include <tencentcloud/cfs/v20190719/model/CreateAutoSnapshotPolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfs::V20190719::Model;
using namespace std;

CreateAutoSnapshotPolicyRequest::CreateAutoSnapshotPolicyRequest() :
    m_hourHasBeenSet(false),
    m_policyNameHasBeenSet(false),
    m_dayOfWeekHasBeenSet(false),
    m_aliveDaysHasBeenSet(false),
    m_dayOfMonthHasBeenSet(false),
    m_intervalDaysHasBeenSet(false)
{
}

string CreateAutoSnapshotPolicyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_hourHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Hour";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_hour.c_str(), allocator).Move(), allocator);
    }

    if (m_policyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_policyName.c_str(), allocator).Move(), allocator);
    }

    if (m_dayOfWeekHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DayOfWeek";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dayOfWeek.c_str(), allocator).Move(), allocator);
    }

    if (m_aliveDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AliveDays";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_aliveDays, allocator);
    }

    if (m_dayOfMonthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DayOfMonth";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dayOfMonth.c_str(), allocator).Move(), allocator);
    }

    if (m_intervalDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntervalDays";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_intervalDays, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateAutoSnapshotPolicyRequest::GetHour() const
{
    return m_hour;
}

void CreateAutoSnapshotPolicyRequest::SetHour(const string& _hour)
{
    m_hour = _hour;
    m_hourHasBeenSet = true;
}

bool CreateAutoSnapshotPolicyRequest::HourHasBeenSet() const
{
    return m_hourHasBeenSet;
}

string CreateAutoSnapshotPolicyRequest::GetPolicyName() const
{
    return m_policyName;
}

void CreateAutoSnapshotPolicyRequest::SetPolicyName(const string& _policyName)
{
    m_policyName = _policyName;
    m_policyNameHasBeenSet = true;
}

bool CreateAutoSnapshotPolicyRequest::PolicyNameHasBeenSet() const
{
    return m_policyNameHasBeenSet;
}

string CreateAutoSnapshotPolicyRequest::GetDayOfWeek() const
{
    return m_dayOfWeek;
}

void CreateAutoSnapshotPolicyRequest::SetDayOfWeek(const string& _dayOfWeek)
{
    m_dayOfWeek = _dayOfWeek;
    m_dayOfWeekHasBeenSet = true;
}

bool CreateAutoSnapshotPolicyRequest::DayOfWeekHasBeenSet() const
{
    return m_dayOfWeekHasBeenSet;
}

uint64_t CreateAutoSnapshotPolicyRequest::GetAliveDays() const
{
    return m_aliveDays;
}

void CreateAutoSnapshotPolicyRequest::SetAliveDays(const uint64_t& _aliveDays)
{
    m_aliveDays = _aliveDays;
    m_aliveDaysHasBeenSet = true;
}

bool CreateAutoSnapshotPolicyRequest::AliveDaysHasBeenSet() const
{
    return m_aliveDaysHasBeenSet;
}

string CreateAutoSnapshotPolicyRequest::GetDayOfMonth() const
{
    return m_dayOfMonth;
}

void CreateAutoSnapshotPolicyRequest::SetDayOfMonth(const string& _dayOfMonth)
{
    m_dayOfMonth = _dayOfMonth;
    m_dayOfMonthHasBeenSet = true;
}

bool CreateAutoSnapshotPolicyRequest::DayOfMonthHasBeenSet() const
{
    return m_dayOfMonthHasBeenSet;
}

uint64_t CreateAutoSnapshotPolicyRequest::GetIntervalDays() const
{
    return m_intervalDays;
}

void CreateAutoSnapshotPolicyRequest::SetIntervalDays(const uint64_t& _intervalDays)
{
    m_intervalDays = _intervalDays;
    m_intervalDaysHasBeenSet = true;
}

bool CreateAutoSnapshotPolicyRequest::IntervalDaysHasBeenSet() const
{
    return m_intervalDaysHasBeenSet;
}


