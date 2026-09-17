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

#include <tencentcloud/tcb/v20180608/model/DailyUsageList.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

DailyUsageList::DailyUsageList() :
    m_creditsHasBeenSet(false),
    m_dateHasBeenSet(false),
    m_usageValueHasBeenSet(false)
{
}

CoreInternalOutcome DailyUsageList::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Credits") && !value["Credits"].IsNull())
    {
        if (!value["Credits"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DailyUsageList.Credits` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_credits = value["Credits"].GetUint64();
        m_creditsHasBeenSet = true;
    }

    if (value.HasMember("Date") && !value["Date"].IsNull())
    {
        if (!value["Date"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DailyUsageList.Date` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_date = string(value["Date"].GetString());
        m_dateHasBeenSet = true;
    }

    if (value.HasMember("UsageValue") && !value["UsageValue"].IsNull())
    {
        if (!value["UsageValue"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DailyUsageList.UsageValue` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_usageValue = value["UsageValue"].GetUint64();
        m_usageValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DailyUsageList::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_creditsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Credits";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_credits, allocator);
    }

    if (m_dateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Date";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_date.c_str(), allocator).Move(), allocator);
    }

    if (m_usageValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsageValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usageValue, allocator);
    }

}


uint64_t DailyUsageList::GetCredits() const
{
    return m_credits;
}

void DailyUsageList::SetCredits(const uint64_t& _credits)
{
    m_credits = _credits;
    m_creditsHasBeenSet = true;
}

bool DailyUsageList::CreditsHasBeenSet() const
{
    return m_creditsHasBeenSet;
}

string DailyUsageList::GetDate() const
{
    return m_date;
}

void DailyUsageList::SetDate(const string& _date)
{
    m_date = _date;
    m_dateHasBeenSet = true;
}

bool DailyUsageList::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}

uint64_t DailyUsageList::GetUsageValue() const
{
    return m_usageValue;
}

void DailyUsageList::SetUsageValue(const uint64_t& _usageValue)
{
    m_usageValue = _usageValue;
    m_usageValueHasBeenSet = true;
}

bool DailyUsageList::UsageValueHasBeenSet() const
{
    return m_usageValueHasBeenSet;
}

