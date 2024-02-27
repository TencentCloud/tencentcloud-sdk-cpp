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

#include <tencentcloud/emr/v20190103/model/MonthRepeatStrategy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

MonthRepeatStrategy::MonthRepeatStrategy() :
    m_executeAtTimeOfDayHasBeenSet(false),
    m_daysOfMonthRangeHasBeenSet(false)
{
}

CoreInternalOutcome MonthRepeatStrategy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ExecuteAtTimeOfDay") && !value["ExecuteAtTimeOfDay"].IsNull())
    {
        if (!value["ExecuteAtTimeOfDay"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MonthRepeatStrategy.ExecuteAtTimeOfDay` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executeAtTimeOfDay = string(value["ExecuteAtTimeOfDay"].GetString());
        m_executeAtTimeOfDayHasBeenSet = true;
    }

    if (value.HasMember("DaysOfMonthRange") && !value["DaysOfMonthRange"].IsNull())
    {
        if (!value["DaysOfMonthRange"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MonthRepeatStrategy.DaysOfMonthRange` is not array type"));

        const rapidjson::Value &tmpValue = value["DaysOfMonthRange"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_daysOfMonthRange.push_back((*itr).GetUint64());
        }
        m_daysOfMonthRangeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MonthRepeatStrategy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_executeAtTimeOfDayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecuteAtTimeOfDay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executeAtTimeOfDay.c_str(), allocator).Move(), allocator);
    }

    if (m_daysOfMonthRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DaysOfMonthRange";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_daysOfMonthRange.begin(); itr != m_daysOfMonthRange.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

}


string MonthRepeatStrategy::GetExecuteAtTimeOfDay() const
{
    return m_executeAtTimeOfDay;
}

void MonthRepeatStrategy::SetExecuteAtTimeOfDay(const string& _executeAtTimeOfDay)
{
    m_executeAtTimeOfDay = _executeAtTimeOfDay;
    m_executeAtTimeOfDayHasBeenSet = true;
}

bool MonthRepeatStrategy::ExecuteAtTimeOfDayHasBeenSet() const
{
    return m_executeAtTimeOfDayHasBeenSet;
}

vector<uint64_t> MonthRepeatStrategy::GetDaysOfMonthRange() const
{
    return m_daysOfMonthRange;
}

void MonthRepeatStrategy::SetDaysOfMonthRange(const vector<uint64_t>& _daysOfMonthRange)
{
    m_daysOfMonthRange = _daysOfMonthRange;
    m_daysOfMonthRangeHasBeenSet = true;
}

bool MonthRepeatStrategy::DaysOfMonthRangeHasBeenSet() const
{
    return m_daysOfMonthRangeHasBeenSet;
}

