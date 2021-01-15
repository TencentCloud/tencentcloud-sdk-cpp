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

#include <tencentcloud/apcas/v20201127/model/GeneralStat.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apcas::V20201127::Model;
using namespace rapidjson;
using namespace std;

GeneralStat::GeneralStat() :
    m_todayAmountHasBeenSet(false),
    m_weekAmountHasBeenSet(false),
    m_monthAmountHasBeenSet(false),
    m_totalAmountHasBeenSet(false)
{
}

CoreInternalOutcome GeneralStat::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("TodayAmount") && !value["TodayAmount"].IsNull())
    {
        if (!value["TodayAmount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `GeneralStat.TodayAmount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_todayAmount = value["TodayAmount"].GetUint64();
        m_todayAmountHasBeenSet = true;
    }

    if (value.HasMember("WeekAmount") && !value["WeekAmount"].IsNull())
    {
        if (!value["WeekAmount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `GeneralStat.WeekAmount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_weekAmount = value["WeekAmount"].GetUint64();
        m_weekAmountHasBeenSet = true;
    }

    if (value.HasMember("MonthAmount") && !value["MonthAmount"].IsNull())
    {
        if (!value["MonthAmount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `GeneralStat.MonthAmount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_monthAmount = value["MonthAmount"].GetUint64();
        m_monthAmountHasBeenSet = true;
    }

    if (value.HasMember("TotalAmount") && !value["TotalAmount"].IsNull())
    {
        if (!value["TotalAmount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `GeneralStat.TotalAmount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalAmount = value["TotalAmount"].GetUint64();
        m_totalAmountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GeneralStat::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_todayAmountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TodayAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_todayAmount, allocator);
    }

    if (m_weekAmountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "WeekAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_weekAmount, allocator);
    }

    if (m_monthAmountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MonthAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_monthAmount, allocator);
    }

    if (m_totalAmountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TotalAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalAmount, allocator);
    }

}


uint64_t GeneralStat::GetTodayAmount() const
{
    return m_todayAmount;
}

void GeneralStat::SetTodayAmount(const uint64_t& _todayAmount)
{
    m_todayAmount = _todayAmount;
    m_todayAmountHasBeenSet = true;
}

bool GeneralStat::TodayAmountHasBeenSet() const
{
    return m_todayAmountHasBeenSet;
}

uint64_t GeneralStat::GetWeekAmount() const
{
    return m_weekAmount;
}

void GeneralStat::SetWeekAmount(const uint64_t& _weekAmount)
{
    m_weekAmount = _weekAmount;
    m_weekAmountHasBeenSet = true;
}

bool GeneralStat::WeekAmountHasBeenSet() const
{
    return m_weekAmountHasBeenSet;
}

uint64_t GeneralStat::GetMonthAmount() const
{
    return m_monthAmount;
}

void GeneralStat::SetMonthAmount(const uint64_t& _monthAmount)
{
    m_monthAmount = _monthAmount;
    m_monthAmountHasBeenSet = true;
}

bool GeneralStat::MonthAmountHasBeenSet() const
{
    return m_monthAmountHasBeenSet;
}

uint64_t GeneralStat::GetTotalAmount() const
{
    return m_totalAmount;
}

void GeneralStat::SetTotalAmount(const uint64_t& _totalAmount)
{
    m_totalAmount = _totalAmount;
    m_totalAmountHasBeenSet = true;
}

bool GeneralStat::TotalAmountHasBeenSet() const
{
    return m_totalAmountHasBeenSet;
}

