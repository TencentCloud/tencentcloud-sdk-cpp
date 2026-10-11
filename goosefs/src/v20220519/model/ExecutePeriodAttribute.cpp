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

#include <tencentcloud/goosefs/v20220519/model/ExecutePeriodAttribute.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Goosefs::V20220519::Model;
using namespace std;

ExecutePeriodAttribute::ExecutePeriodAttribute() :
    m_periodTypeHasBeenSet(false),
    m_startWeekdayHasBeenSet(false),
    m_startDateHasBeenSet(false),
    m_startMinuteHasBeenSet(false),
    m_startHourHasBeenSet(false)
{
}

CoreInternalOutcome ExecutePeriodAttribute::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PeriodType") && !value["PeriodType"].IsNull())
    {
        if (!value["PeriodType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutePeriodAttribute.PeriodType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_periodType = string(value["PeriodType"].GetString());
        m_periodTypeHasBeenSet = true;
    }

    if (value.HasMember("StartWeekday") && !value["StartWeekday"].IsNull())
    {
        if (!value["StartWeekday"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutePeriodAttribute.StartWeekday` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_startWeekday = value["StartWeekday"].GetUint64();
        m_startWeekdayHasBeenSet = true;
    }

    if (value.HasMember("StartDate") && !value["StartDate"].IsNull())
    {
        if (!value["StartDate"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutePeriodAttribute.StartDate` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_startDate = value["StartDate"].GetUint64();
        m_startDateHasBeenSet = true;
    }

    if (value.HasMember("StartMinute") && !value["StartMinute"].IsNull())
    {
        if (!value["StartMinute"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutePeriodAttribute.StartMinute` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_startMinute = value["StartMinute"].GetUint64();
        m_startMinuteHasBeenSet = true;
    }

    if (value.HasMember("StartHour") && !value["StartHour"].IsNull())
    {
        if (!value["StartHour"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutePeriodAttribute.StartHour` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_startHour = value["StartHour"].GetUint64();
        m_startHourHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExecutePeriodAttribute::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_periodTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeriodType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_periodType.c_str(), allocator).Move(), allocator);
    }

    if (m_startWeekdayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartWeekday";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startWeekday, allocator);
    }

    if (m_startDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startDate, allocator);
    }

    if (m_startMinuteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartMinute";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startMinute, allocator);
    }

    if (m_startHourHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartHour";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startHour, allocator);
    }

}


string ExecutePeriodAttribute::GetPeriodType() const
{
    return m_periodType;
}

void ExecutePeriodAttribute::SetPeriodType(const string& _periodType)
{
    m_periodType = _periodType;
    m_periodTypeHasBeenSet = true;
}

bool ExecutePeriodAttribute::PeriodTypeHasBeenSet() const
{
    return m_periodTypeHasBeenSet;
}

uint64_t ExecutePeriodAttribute::GetStartWeekday() const
{
    return m_startWeekday;
}

void ExecutePeriodAttribute::SetStartWeekday(const uint64_t& _startWeekday)
{
    m_startWeekday = _startWeekday;
    m_startWeekdayHasBeenSet = true;
}

bool ExecutePeriodAttribute::StartWeekdayHasBeenSet() const
{
    return m_startWeekdayHasBeenSet;
}

uint64_t ExecutePeriodAttribute::GetStartDate() const
{
    return m_startDate;
}

void ExecutePeriodAttribute::SetStartDate(const uint64_t& _startDate)
{
    m_startDate = _startDate;
    m_startDateHasBeenSet = true;
}

bool ExecutePeriodAttribute::StartDateHasBeenSet() const
{
    return m_startDateHasBeenSet;
}

uint64_t ExecutePeriodAttribute::GetStartMinute() const
{
    return m_startMinute;
}

void ExecutePeriodAttribute::SetStartMinute(const uint64_t& _startMinute)
{
    m_startMinute = _startMinute;
    m_startMinuteHasBeenSet = true;
}

bool ExecutePeriodAttribute::StartMinuteHasBeenSet() const
{
    return m_startMinuteHasBeenSet;
}

uint64_t ExecutePeriodAttribute::GetStartHour() const
{
    return m_startHour;
}

void ExecutePeriodAttribute::SetStartHour(const uint64_t& _startHour)
{
    m_startHour = _startHour;
    m_startHourHasBeenSet = true;
}

bool ExecutePeriodAttribute::StartHourHasBeenSet() const
{
    return m_startHourHasBeenSet;
}

