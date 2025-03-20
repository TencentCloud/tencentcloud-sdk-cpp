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

#include <tencentcloud/dnspod/v20210323/model/LeftTime.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dnspod::V20210323::Model;
using namespace std;

LeftTime::LeftTime() :
    m_daysHasBeenSet(false),
    m_hoursHasBeenSet(false),
    m_minsHasBeenSet(false)
{
}

CoreInternalOutcome LeftTime::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Days") && !value["Days"].IsNull())
    {
        if (!value["Days"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LeftTime.Days` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_days = value["Days"].GetUint64();
        m_daysHasBeenSet = true;
    }

    if (value.HasMember("Hours") && !value["Hours"].IsNull())
    {
        if (!value["Hours"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LeftTime.Hours` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_hours = value["Hours"].GetUint64();
        m_hoursHasBeenSet = true;
    }

    if (value.HasMember("Mins") && !value["Mins"].IsNull())
    {
        if (!value["Mins"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LeftTime.Mins` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mins = value["Mins"].GetUint64();
        m_minsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LeftTime::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_daysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Days";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_days, allocator);
    }

    if (m_hoursHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Hours";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hours, allocator);
    }

    if (m_minsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mins";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mins, allocator);
    }

}


uint64_t LeftTime::GetDays() const
{
    return m_days;
}

void LeftTime::SetDays(const uint64_t& _days)
{
    m_days = _days;
    m_daysHasBeenSet = true;
}

bool LeftTime::DaysHasBeenSet() const
{
    return m_daysHasBeenSet;
}

uint64_t LeftTime::GetHours() const
{
    return m_hours;
}

void LeftTime::SetHours(const uint64_t& _hours)
{
    m_hours = _hours;
    m_hoursHasBeenSet = true;
}

bool LeftTime::HoursHasBeenSet() const
{
    return m_hoursHasBeenSet;
}

uint64_t LeftTime::GetMins() const
{
    return m_mins;
}

void LeftTime::SetMins(const uint64_t& _mins)
{
    m_mins = _mins;
    m_minsHasBeenSet = true;
}

bool LeftTime::MinsHasBeenSet() const
{
    return m_minsHasBeenSet;
}

