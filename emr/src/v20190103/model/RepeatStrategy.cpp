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

#include <tencentcloud/emr/v20190103/model/RepeatStrategy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

RepeatStrategy::RepeatStrategy() :
    m_repeatTypeHasBeenSet(false),
    m_dayRepeatHasBeenSet(false),
    m_weekRepeatHasBeenSet(false),
    m_monthRepeatHasBeenSet(false),
    m_notRepeatHasBeenSet(false),
    m_expireHasBeenSet(false),
    m_startTimeHasBeenSet(false)
{
}

CoreInternalOutcome RepeatStrategy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RepeatType") && !value["RepeatType"].IsNull())
    {
        if (!value["RepeatType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RepeatStrategy.RepeatType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repeatType = string(value["RepeatType"].GetString());
        m_repeatTypeHasBeenSet = true;
    }

    if (value.HasMember("DayRepeat") && !value["DayRepeat"].IsNull())
    {
        if (!value["DayRepeat"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RepeatStrategy.DayRepeat` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dayRepeat.Deserialize(value["DayRepeat"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dayRepeatHasBeenSet = true;
    }

    if (value.HasMember("WeekRepeat") && !value["WeekRepeat"].IsNull())
    {
        if (!value["WeekRepeat"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RepeatStrategy.WeekRepeat` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_weekRepeat.Deserialize(value["WeekRepeat"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_weekRepeatHasBeenSet = true;
    }

    if (value.HasMember("MonthRepeat") && !value["MonthRepeat"].IsNull())
    {
        if (!value["MonthRepeat"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RepeatStrategy.MonthRepeat` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_monthRepeat.Deserialize(value["MonthRepeat"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_monthRepeatHasBeenSet = true;
    }

    if (value.HasMember("NotRepeat") && !value["NotRepeat"].IsNull())
    {
        if (!value["NotRepeat"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RepeatStrategy.NotRepeat` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_notRepeat.Deserialize(value["NotRepeat"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_notRepeatHasBeenSet = true;
    }

    if (value.HasMember("Expire") && !value["Expire"].IsNull())
    {
        if (!value["Expire"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RepeatStrategy.Expire` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expire = string(value["Expire"].GetString());
        m_expireHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RepeatStrategy.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RepeatStrategy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_repeatTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepeatType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_repeatType.c_str(), allocator).Move(), allocator);
    }

    if (m_dayRepeatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DayRepeat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dayRepeat.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_weekRepeatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WeekRepeat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_weekRepeat.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_monthRepeatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonthRepeat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_monthRepeat.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_notRepeatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotRepeat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_notRepeat.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_expireHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Expire";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expire.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

}


string RepeatStrategy::GetRepeatType() const
{
    return m_repeatType;
}

void RepeatStrategy::SetRepeatType(const string& _repeatType)
{
    m_repeatType = _repeatType;
    m_repeatTypeHasBeenSet = true;
}

bool RepeatStrategy::RepeatTypeHasBeenSet() const
{
    return m_repeatTypeHasBeenSet;
}

DayRepeatStrategy RepeatStrategy::GetDayRepeat() const
{
    return m_dayRepeat;
}

void RepeatStrategy::SetDayRepeat(const DayRepeatStrategy& _dayRepeat)
{
    m_dayRepeat = _dayRepeat;
    m_dayRepeatHasBeenSet = true;
}

bool RepeatStrategy::DayRepeatHasBeenSet() const
{
    return m_dayRepeatHasBeenSet;
}

WeekRepeatStrategy RepeatStrategy::GetWeekRepeat() const
{
    return m_weekRepeat;
}

void RepeatStrategy::SetWeekRepeat(const WeekRepeatStrategy& _weekRepeat)
{
    m_weekRepeat = _weekRepeat;
    m_weekRepeatHasBeenSet = true;
}

bool RepeatStrategy::WeekRepeatHasBeenSet() const
{
    return m_weekRepeatHasBeenSet;
}

MonthRepeatStrategy RepeatStrategy::GetMonthRepeat() const
{
    return m_monthRepeat;
}

void RepeatStrategy::SetMonthRepeat(const MonthRepeatStrategy& _monthRepeat)
{
    m_monthRepeat = _monthRepeat;
    m_monthRepeatHasBeenSet = true;
}

bool RepeatStrategy::MonthRepeatHasBeenSet() const
{
    return m_monthRepeatHasBeenSet;
}

NotRepeatStrategy RepeatStrategy::GetNotRepeat() const
{
    return m_notRepeat;
}

void RepeatStrategy::SetNotRepeat(const NotRepeatStrategy& _notRepeat)
{
    m_notRepeat = _notRepeat;
    m_notRepeatHasBeenSet = true;
}

bool RepeatStrategy::NotRepeatHasBeenSet() const
{
    return m_notRepeatHasBeenSet;
}

string RepeatStrategy::GetExpire() const
{
    return m_expire;
}

void RepeatStrategy::SetExpire(const string& _expire)
{
    m_expire = _expire;
    m_expireHasBeenSet = true;
}

bool RepeatStrategy::ExpireHasBeenSet() const
{
    return m_expireHasBeenSet;
}

string RepeatStrategy::GetStartTime() const
{
    return m_startTime;
}

void RepeatStrategy::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool RepeatStrategy::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

