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

#include <tencentcloud/tokenhub/v20260322/model/QuotaCreateItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tokenhub::V20260322::Model;
using namespace std;

QuotaCreateItem::QuotaCreateItem() :
    m_cycleUnitHasBeenSet(false),
    m_cycleCreditsHasBeenSet(false),
    m_monthStartDayHasBeenSet(false)
{
}

CoreInternalOutcome QuotaCreateItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CycleUnit") && !value["CycleUnit"].IsNull())
    {
        if (!value["CycleUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QuotaCreateItem.CycleUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cycleUnit = string(value["CycleUnit"].GetString());
        m_cycleUnitHasBeenSet = true;
    }

    if (value.HasMember("CycleCredits") && !value["CycleCredits"].IsNull())
    {
        if (!value["CycleCredits"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QuotaCreateItem.CycleCredits` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cycleCredits = string(value["CycleCredits"].GetString());
        m_cycleCreditsHasBeenSet = true;
    }

    if (value.HasMember("MonthStartDay") && !value["MonthStartDay"].IsNull())
    {
        if (!value["MonthStartDay"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QuotaCreateItem.MonthStartDay` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_monthStartDay = value["MonthStartDay"].GetInt64();
        m_monthStartDayHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QuotaCreateItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cycleUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cycleUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_cycleCreditsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleCredits";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cycleCredits.c_str(), allocator).Move(), allocator);
    }

    if (m_monthStartDayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonthStartDay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_monthStartDay, allocator);
    }

}


string QuotaCreateItem::GetCycleUnit() const
{
    return m_cycleUnit;
}

void QuotaCreateItem::SetCycleUnit(const string& _cycleUnit)
{
    m_cycleUnit = _cycleUnit;
    m_cycleUnitHasBeenSet = true;
}

bool QuotaCreateItem::CycleUnitHasBeenSet() const
{
    return m_cycleUnitHasBeenSet;
}

string QuotaCreateItem::GetCycleCredits() const
{
    return m_cycleCredits;
}

void QuotaCreateItem::SetCycleCredits(const string& _cycleCredits)
{
    m_cycleCredits = _cycleCredits;
    m_cycleCreditsHasBeenSet = true;
}

bool QuotaCreateItem::CycleCreditsHasBeenSet() const
{
    return m_cycleCreditsHasBeenSet;
}

int64_t QuotaCreateItem::GetMonthStartDay() const
{
    return m_monthStartDay;
}

void QuotaCreateItem::SetMonthStartDay(const int64_t& _monthStartDay)
{
    m_monthStartDay = _monthStartDay;
    m_monthStartDayHasBeenSet = true;
}

bool QuotaCreateItem::MonthStartDayHasBeenSet() const
{
    return m_monthStartDayHasBeenSet;
}

