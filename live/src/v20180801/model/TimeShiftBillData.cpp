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

#include <tencentcloud/live/v20180801/model/TimeShiftBillData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

TimeShiftBillData::TimeShiftBillData() :
    m_domainHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_storagePeriodHasBeenSet(false),
    m_timeHasBeenSet(false),
    m_totalDurationHasBeenSet(false)
{
}

CoreInternalOutcome TimeShiftBillData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimeShiftBillData.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TimeShiftBillData.Duration` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetDouble();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("StoragePeriod") && !value["StoragePeriod"].IsNull())
    {
        if (!value["StoragePeriod"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TimeShiftBillData.StoragePeriod` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_storagePeriod = value["StoragePeriod"].GetDouble();
        m_storagePeriodHasBeenSet = true;
    }

    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimeShiftBillData.Time` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_time = string(value["Time"].GetString());
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("TotalDuration") && !value["TotalDuration"].IsNull())
    {
        if (!value["TotalDuration"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TimeShiftBillData.TotalDuration` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_totalDuration = value["TotalDuration"].GetDouble();
        m_totalDurationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TimeShiftBillData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

    if (m_storagePeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StoragePeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storagePeriod, allocator);
    }

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_time.c_str(), allocator).Move(), allocator);
    }

    if (m_totalDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalDuration, allocator);
    }

}


string TimeShiftBillData::GetDomain() const
{
    return m_domain;
}

void TimeShiftBillData::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool TimeShiftBillData::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

double TimeShiftBillData::GetDuration() const
{
    return m_duration;
}

void TimeShiftBillData::SetDuration(const double& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool TimeShiftBillData::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

double TimeShiftBillData::GetStoragePeriod() const
{
    return m_storagePeriod;
}

void TimeShiftBillData::SetStoragePeriod(const double& _storagePeriod)
{
    m_storagePeriod = _storagePeriod;
    m_storagePeriodHasBeenSet = true;
}

bool TimeShiftBillData::StoragePeriodHasBeenSet() const
{
    return m_storagePeriodHasBeenSet;
}

string TimeShiftBillData::GetTime() const
{
    return m_time;
}

void TimeShiftBillData::SetTime(const string& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool TimeShiftBillData::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

double TimeShiftBillData::GetTotalDuration() const
{
    return m_totalDuration;
}

void TimeShiftBillData::SetTotalDuration(const double& _totalDuration)
{
    m_totalDuration = _totalDuration;
    m_totalDurationHasBeenSet = true;
}

bool TimeShiftBillData::TotalDurationHasBeenSet() const
{
    return m_totalDurationHasBeenSet;
}

