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

#include <tencentcloud/cdb/v20170320/model/TImeCycle.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

TImeCycle::TImeCycle() :
    m_mondayHasBeenSet(false),
    m_tuesdayHasBeenSet(false),
    m_wednesdayHasBeenSet(false),
    m_thursdayHasBeenSet(false),
    m_fridayHasBeenSet(false),
    m_saturdayHasBeenSet(false),
    m_sundayHasBeenSet(false)
{
}

CoreInternalOutcome TImeCycle::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Monday") && !value["Monday"].IsNull())
    {
        if (!value["Monday"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TImeCycle.Monday` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_monday = value["Monday"].GetBool();
        m_mondayHasBeenSet = true;
    }

    if (value.HasMember("Tuesday") && !value["Tuesday"].IsNull())
    {
        if (!value["Tuesday"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TImeCycle.Tuesday` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_tuesday = value["Tuesday"].GetBool();
        m_tuesdayHasBeenSet = true;
    }

    if (value.HasMember("Wednesday") && !value["Wednesday"].IsNull())
    {
        if (!value["Wednesday"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TImeCycle.Wednesday` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_wednesday = value["Wednesday"].GetBool();
        m_wednesdayHasBeenSet = true;
    }

    if (value.HasMember("Thursday") && !value["Thursday"].IsNull())
    {
        if (!value["Thursday"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TImeCycle.Thursday` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_thursday = value["Thursday"].GetBool();
        m_thursdayHasBeenSet = true;
    }

    if (value.HasMember("Friday") && !value["Friday"].IsNull())
    {
        if (!value["Friday"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TImeCycle.Friday` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_friday = value["Friday"].GetBool();
        m_fridayHasBeenSet = true;
    }

    if (value.HasMember("Saturday") && !value["Saturday"].IsNull())
    {
        if (!value["Saturday"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TImeCycle.Saturday` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_saturday = value["Saturday"].GetBool();
        m_saturdayHasBeenSet = true;
    }

    if (value.HasMember("Sunday") && !value["Sunday"].IsNull())
    {
        if (!value["Sunday"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TImeCycle.Sunday` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_sunday = value["Sunday"].GetBool();
        m_sundayHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TImeCycle::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_mondayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Monday";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_monday, allocator);
    }

    if (m_tuesdayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tuesday";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tuesday, allocator);
    }

    if (m_wednesdayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Wednesday";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_wednesday, allocator);
    }

    if (m_thursdayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Thursday";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_thursday, allocator);
    }

    if (m_fridayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Friday";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_friday, allocator);
    }

    if (m_saturdayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Saturday";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_saturday, allocator);
    }

    if (m_sundayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sunday";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sunday, allocator);
    }

}


bool TImeCycle::GetMonday() const
{
    return m_monday;
}

void TImeCycle::SetMonday(const bool& _monday)
{
    m_monday = _monday;
    m_mondayHasBeenSet = true;
}

bool TImeCycle::MondayHasBeenSet() const
{
    return m_mondayHasBeenSet;
}

bool TImeCycle::GetTuesday() const
{
    return m_tuesday;
}

void TImeCycle::SetTuesday(const bool& _tuesday)
{
    m_tuesday = _tuesday;
    m_tuesdayHasBeenSet = true;
}

bool TImeCycle::TuesdayHasBeenSet() const
{
    return m_tuesdayHasBeenSet;
}

bool TImeCycle::GetWednesday() const
{
    return m_wednesday;
}

void TImeCycle::SetWednesday(const bool& _wednesday)
{
    m_wednesday = _wednesday;
    m_wednesdayHasBeenSet = true;
}

bool TImeCycle::WednesdayHasBeenSet() const
{
    return m_wednesdayHasBeenSet;
}

bool TImeCycle::GetThursday() const
{
    return m_thursday;
}

void TImeCycle::SetThursday(const bool& _thursday)
{
    m_thursday = _thursday;
    m_thursdayHasBeenSet = true;
}

bool TImeCycle::ThursdayHasBeenSet() const
{
    return m_thursdayHasBeenSet;
}

bool TImeCycle::GetFriday() const
{
    return m_friday;
}

void TImeCycle::SetFriday(const bool& _friday)
{
    m_friday = _friday;
    m_fridayHasBeenSet = true;
}

bool TImeCycle::FridayHasBeenSet() const
{
    return m_fridayHasBeenSet;
}

bool TImeCycle::GetSaturday() const
{
    return m_saturday;
}

void TImeCycle::SetSaturday(const bool& _saturday)
{
    m_saturday = _saturday;
    m_saturdayHasBeenSet = true;
}

bool TImeCycle::SaturdayHasBeenSet() const
{
    return m_saturdayHasBeenSet;
}

bool TImeCycle::GetSunday() const
{
    return m_sunday;
}

void TImeCycle::SetSunday(const bool& _sunday)
{
    m_sunday = _sunday;
    m_sundayHasBeenSet = true;
}

bool TImeCycle::SundayHasBeenSet() const
{
    return m_sundayHasBeenSet;
}

