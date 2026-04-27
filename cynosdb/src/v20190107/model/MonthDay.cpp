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

#include <tencentcloud/cynosdb/v20190107/model/MonthDay.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

MonthDay::MonthDay() :
    m_monthHasBeenSet(false),
    m_dayHasBeenSet(false)
{
}

CoreInternalOutcome MonthDay::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Month") && !value["Month"].IsNull())
    {
        if (!value["Month"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MonthDay.Month` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_month = value["Month"].GetInt64();
        m_monthHasBeenSet = true;
    }

    if (value.HasMember("Day") && !value["Day"].IsNull())
    {
        if (!value["Day"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MonthDay.Day` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_day = value["Day"].GetInt64();
        m_dayHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MonthDay::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_monthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Month";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_month, allocator);
    }

    if (m_dayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Day";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_day, allocator);
    }

}


int64_t MonthDay::GetMonth() const
{
    return m_month;
}

void MonthDay::SetMonth(const int64_t& _month)
{
    m_month = _month;
    m_monthHasBeenSet = true;
}

bool MonthDay::MonthHasBeenSet() const
{
    return m_monthHasBeenSet;
}

int64_t MonthDay::GetDay() const
{
    return m_day;
}

void MonthDay::SetDay(const int64_t& _day)
{
    m_day = _day;
    m_dayHasBeenSet = true;
}

bool MonthDay::DayHasBeenSet() const
{
    return m_dayHasBeenSet;
}

