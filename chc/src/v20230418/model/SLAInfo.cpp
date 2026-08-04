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

#include <tencentcloud/chc/v20230418/model/SLAInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Chc::V20230418::Model;
using namespace std;

SLAInfo::SLAInfo() :
    m_sLAStatusHasBeenSet(false),
    m_dueTimeHasBeenSet(false),
    m_remainingHoursHasBeenSet(false),
    m_overdueHoursHasBeenSet(false),
    m_sLADaysHasBeenSet(false)
{
}

CoreInternalOutcome SLAInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SLAStatus") && !value["SLAStatus"].IsNull())
    {
        if (!value["SLAStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SLAInfo.SLAStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sLAStatus = string(value["SLAStatus"].GetString());
        m_sLAStatusHasBeenSet = true;
    }

    if (value.HasMember("DueTime") && !value["DueTime"].IsNull())
    {
        if (!value["DueTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SLAInfo.DueTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dueTime = string(value["DueTime"].GetString());
        m_dueTimeHasBeenSet = true;
    }

    if (value.HasMember("RemainingHours") && !value["RemainingHours"].IsNull())
    {
        if (!value["RemainingHours"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SLAInfo.RemainingHours` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_remainingHours = value["RemainingHours"].GetDouble();
        m_remainingHoursHasBeenSet = true;
    }

    if (value.HasMember("OverdueHours") && !value["OverdueHours"].IsNull())
    {
        if (!value["OverdueHours"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SLAInfo.OverdueHours` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_overdueHours = value["OverdueHours"].GetDouble();
        m_overdueHoursHasBeenSet = true;
    }

    if (value.HasMember("SLADays") && !value["SLADays"].IsNull())
    {
        if (!value["SLADays"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SLAInfo.SLADays` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sLADays = value["SLADays"].GetUint64();
        m_sLADaysHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SLAInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sLAStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SLAStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sLAStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_dueTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DueTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dueTime.c_str(), allocator).Move(), allocator);
    }

    if (m_remainingHoursHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemainingHours";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_remainingHours, allocator);
    }

    if (m_overdueHoursHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OverdueHours";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_overdueHours, allocator);
    }

    if (m_sLADaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SLADays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sLADays, allocator);
    }

}


string SLAInfo::GetSLAStatus() const
{
    return m_sLAStatus;
}

void SLAInfo::SetSLAStatus(const string& _sLAStatus)
{
    m_sLAStatus = _sLAStatus;
    m_sLAStatusHasBeenSet = true;
}

bool SLAInfo::SLAStatusHasBeenSet() const
{
    return m_sLAStatusHasBeenSet;
}

string SLAInfo::GetDueTime() const
{
    return m_dueTime;
}

void SLAInfo::SetDueTime(const string& _dueTime)
{
    m_dueTime = _dueTime;
    m_dueTimeHasBeenSet = true;
}

bool SLAInfo::DueTimeHasBeenSet() const
{
    return m_dueTimeHasBeenSet;
}

double SLAInfo::GetRemainingHours() const
{
    return m_remainingHours;
}

void SLAInfo::SetRemainingHours(const double& _remainingHours)
{
    m_remainingHours = _remainingHours;
    m_remainingHoursHasBeenSet = true;
}

bool SLAInfo::RemainingHoursHasBeenSet() const
{
    return m_remainingHoursHasBeenSet;
}

double SLAInfo::GetOverdueHours() const
{
    return m_overdueHours;
}

void SLAInfo::SetOverdueHours(const double& _overdueHours)
{
    m_overdueHours = _overdueHours;
    m_overdueHoursHasBeenSet = true;
}

bool SLAInfo::OverdueHoursHasBeenSet() const
{
    return m_overdueHoursHasBeenSet;
}

uint64_t SLAInfo::GetSLADays() const
{
    return m_sLADays;
}

void SLAInfo::SetSLADays(const uint64_t& _sLADays)
{
    m_sLADays = _sLADays;
    m_sLADaysHasBeenSet = true;
}

bool SLAInfo::SLADaysHasBeenSet() const
{
    return m_sLADaysHasBeenSet;
}

