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

#include <tencentcloud/cbs/v20170312/model/AdvancedRetentionPolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cbs::V20170312::Model;
using namespace std;

AdvancedRetentionPolicy::AdvancedRetentionPolicy() :
    m_daysHasBeenSet(false),
    m_weeksHasBeenSet(false),
    m_monthsHasBeenSet(false),
    m_yearsHasBeenSet(false)
{
}

CoreInternalOutcome AdvancedRetentionPolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Days") && !value["Days"].IsNull())
    {
        if (!value["Days"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AdvancedRetentionPolicy.Days` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_days = value["Days"].GetUint64();
        m_daysHasBeenSet = true;
    }

    if (value.HasMember("Weeks") && !value["Weeks"].IsNull())
    {
        if (!value["Weeks"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AdvancedRetentionPolicy.Weeks` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_weeks = value["Weeks"].GetUint64();
        m_weeksHasBeenSet = true;
    }

    if (value.HasMember("Months") && !value["Months"].IsNull())
    {
        if (!value["Months"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AdvancedRetentionPolicy.Months` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_months = value["Months"].GetUint64();
        m_monthsHasBeenSet = true;
    }

    if (value.HasMember("Years") && !value["Years"].IsNull())
    {
        if (!value["Years"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AdvancedRetentionPolicy.Years` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_years = value["Years"].GetUint64();
        m_yearsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AdvancedRetentionPolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_daysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Days";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_days, allocator);
    }

    if (m_weeksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Weeks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_weeks, allocator);
    }

    if (m_monthsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Months";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_months, allocator);
    }

    if (m_yearsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Years";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_years, allocator);
    }

}


uint64_t AdvancedRetentionPolicy::GetDays() const
{
    return m_days;
}

void AdvancedRetentionPolicy::SetDays(const uint64_t& _days)
{
    m_days = _days;
    m_daysHasBeenSet = true;
}

bool AdvancedRetentionPolicy::DaysHasBeenSet() const
{
    return m_daysHasBeenSet;
}

uint64_t AdvancedRetentionPolicy::GetWeeks() const
{
    return m_weeks;
}

void AdvancedRetentionPolicy::SetWeeks(const uint64_t& _weeks)
{
    m_weeks = _weeks;
    m_weeksHasBeenSet = true;
}

bool AdvancedRetentionPolicy::WeeksHasBeenSet() const
{
    return m_weeksHasBeenSet;
}

uint64_t AdvancedRetentionPolicy::GetMonths() const
{
    return m_months;
}

void AdvancedRetentionPolicy::SetMonths(const uint64_t& _months)
{
    m_months = _months;
    m_monthsHasBeenSet = true;
}

bool AdvancedRetentionPolicy::MonthsHasBeenSet() const
{
    return m_monthsHasBeenSet;
}

uint64_t AdvancedRetentionPolicy::GetYears() const
{
    return m_years;
}

void AdvancedRetentionPolicy::SetYears(const uint64_t& _years)
{
    m_years = _years;
    m_yearsHasBeenSet = true;
}

bool AdvancedRetentionPolicy::YearsHasBeenSet() const
{
    return m_yearsHasBeenSet;
}

