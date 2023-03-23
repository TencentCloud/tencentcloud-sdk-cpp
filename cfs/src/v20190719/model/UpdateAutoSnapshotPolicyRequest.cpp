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

#include <tencentcloud/cfs/v20190719/model/UpdateAutoSnapshotPolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfs::V20190719::Model;
using namespace std;

UpdateAutoSnapshotPolicyRequest::UpdateAutoSnapshotPolicyRequest() :
    m_autoSnapshotPolicyIdHasBeenSet(false),
    m_policyNameHasBeenSet(false),
    m_dayOfWeekHasBeenSet(false),
    m_hourHasBeenSet(false),
    m_aliveDaysHasBeenSet(false),
    m_isActivatedHasBeenSet(false),
    m_dayOfMonthHasBeenSet(false),
    m_intervalDaysHasBeenSet(false)
{
}

string UpdateAutoSnapshotPolicyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_autoSnapshotPolicyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoSnapshotPolicyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_autoSnapshotPolicyId.c_str(), allocator).Move(), allocator);
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

    if (m_hourHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Hour";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_hour.c_str(), allocator).Move(), allocator);
    }

    if (m_aliveDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AliveDays";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_aliveDays, allocator);
    }

    if (m_isActivatedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsActivated";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isActivated, allocator);
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


string UpdateAutoSnapshotPolicyRequest::GetAutoSnapshotPolicyId() const
{
    return m_autoSnapshotPolicyId;
}

void UpdateAutoSnapshotPolicyRequest::SetAutoSnapshotPolicyId(const string& _autoSnapshotPolicyId)
{
    m_autoSnapshotPolicyId = _autoSnapshotPolicyId;
    m_autoSnapshotPolicyIdHasBeenSet = true;
}

bool UpdateAutoSnapshotPolicyRequest::AutoSnapshotPolicyIdHasBeenSet() const
{
    return m_autoSnapshotPolicyIdHasBeenSet;
}

string UpdateAutoSnapshotPolicyRequest::GetPolicyName() const
{
    return m_policyName;
}

void UpdateAutoSnapshotPolicyRequest::SetPolicyName(const string& _policyName)
{
    m_policyName = _policyName;
    m_policyNameHasBeenSet = true;
}

bool UpdateAutoSnapshotPolicyRequest::PolicyNameHasBeenSet() const
{
    return m_policyNameHasBeenSet;
}

string UpdateAutoSnapshotPolicyRequest::GetDayOfWeek() const
{
    return m_dayOfWeek;
}

void UpdateAutoSnapshotPolicyRequest::SetDayOfWeek(const string& _dayOfWeek)
{
    m_dayOfWeek = _dayOfWeek;
    m_dayOfWeekHasBeenSet = true;
}

bool UpdateAutoSnapshotPolicyRequest::DayOfWeekHasBeenSet() const
{
    return m_dayOfWeekHasBeenSet;
}

string UpdateAutoSnapshotPolicyRequest::GetHour() const
{
    return m_hour;
}

void UpdateAutoSnapshotPolicyRequest::SetHour(const string& _hour)
{
    m_hour = _hour;
    m_hourHasBeenSet = true;
}

bool UpdateAutoSnapshotPolicyRequest::HourHasBeenSet() const
{
    return m_hourHasBeenSet;
}

uint64_t UpdateAutoSnapshotPolicyRequest::GetAliveDays() const
{
    return m_aliveDays;
}

void UpdateAutoSnapshotPolicyRequest::SetAliveDays(const uint64_t& _aliveDays)
{
    m_aliveDays = _aliveDays;
    m_aliveDaysHasBeenSet = true;
}

bool UpdateAutoSnapshotPolicyRequest::AliveDaysHasBeenSet() const
{
    return m_aliveDaysHasBeenSet;
}

uint64_t UpdateAutoSnapshotPolicyRequest::GetIsActivated() const
{
    return m_isActivated;
}

void UpdateAutoSnapshotPolicyRequest::SetIsActivated(const uint64_t& _isActivated)
{
    m_isActivated = _isActivated;
    m_isActivatedHasBeenSet = true;
}

bool UpdateAutoSnapshotPolicyRequest::IsActivatedHasBeenSet() const
{
    return m_isActivatedHasBeenSet;
}

string UpdateAutoSnapshotPolicyRequest::GetDayOfMonth() const
{
    return m_dayOfMonth;
}

void UpdateAutoSnapshotPolicyRequest::SetDayOfMonth(const string& _dayOfMonth)
{
    m_dayOfMonth = _dayOfMonth;
    m_dayOfMonthHasBeenSet = true;
}

bool UpdateAutoSnapshotPolicyRequest::DayOfMonthHasBeenSet() const
{
    return m_dayOfMonthHasBeenSet;
}

uint64_t UpdateAutoSnapshotPolicyRequest::GetIntervalDays() const
{
    return m_intervalDays;
}

void UpdateAutoSnapshotPolicyRequest::SetIntervalDays(const uint64_t& _intervalDays)
{
    m_intervalDays = _intervalDays;
    m_intervalDaysHasBeenSet = true;
}

bool UpdateAutoSnapshotPolicyRequest::IntervalDaysHasBeenSet() const
{
    return m_intervalDaysHasBeenSet;
}


