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

#include <tencentcloud/cynosdb/v20190107/model/SparsePeriodTime.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

SparsePeriodTime::SparsePeriodTime() :
    m_weekDaysHasBeenSet(false),
    m_daysHasBeenSet(false),
    m_monthDaysHasBeenSet(false)
{
}

CoreInternalOutcome SparsePeriodTime::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WeekDays") && !value["WeekDays"].IsNull())
    {
        if (!value["WeekDays"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SparsePeriodTime.WeekDays` is not array type"));

        const rapidjson::Value &tmpValue = value["WeekDays"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_weekDays.push_back((*itr).GetInt64());
        }
        m_weekDaysHasBeenSet = true;
    }

    if (value.HasMember("Days") && !value["Days"].IsNull())
    {
        if (!value["Days"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SparsePeriodTime.Days` is not array type"));

        const rapidjson::Value &tmpValue = value["Days"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_days.push_back((*itr).GetInt64());
        }
        m_daysHasBeenSet = true;
    }

    if (value.HasMember("MonthDays") && !value["MonthDays"].IsNull())
    {
        if (!value["MonthDays"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SparsePeriodTime.MonthDays` is not array type"));

        const rapidjson::Value &tmpValue = value["MonthDays"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MonthDay item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_monthDays.push_back(item);
        }
        m_monthDaysHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SparsePeriodTime::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_weekDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WeekDays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_weekDays.begin(); itr != m_weekDays.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_daysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Days";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_days.begin(); itr != m_days.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_monthDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonthDays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_monthDays.begin(); itr != m_monthDays.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<int64_t> SparsePeriodTime::GetWeekDays() const
{
    return m_weekDays;
}

void SparsePeriodTime::SetWeekDays(const vector<int64_t>& _weekDays)
{
    m_weekDays = _weekDays;
    m_weekDaysHasBeenSet = true;
}

bool SparsePeriodTime::WeekDaysHasBeenSet() const
{
    return m_weekDaysHasBeenSet;
}

vector<int64_t> SparsePeriodTime::GetDays() const
{
    return m_days;
}

void SparsePeriodTime::SetDays(const vector<int64_t>& _days)
{
    m_days = _days;
    m_daysHasBeenSet = true;
}

bool SparsePeriodTime::DaysHasBeenSet() const
{
    return m_daysHasBeenSet;
}

vector<MonthDay> SparsePeriodTime::GetMonthDays() const
{
    return m_monthDays;
}

void SparsePeriodTime::SetMonthDays(const vector<MonthDay>& _monthDays)
{
    m_monthDays = _monthDays;
    m_monthDaysHasBeenSet = true;
}

bool SparsePeriodTime::MonthDaysHasBeenSet() const
{
    return m_monthDaysHasBeenSet;
}

