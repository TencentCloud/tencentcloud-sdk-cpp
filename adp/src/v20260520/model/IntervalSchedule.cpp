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

#include <tencentcloud/adp/v20260520/model/IntervalSchedule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

IntervalSchedule::IntervalSchedule() :
    m_startAtHasBeenSet(false),
    m_unitHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

CoreInternalOutcome IntervalSchedule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StartAt") && !value["StartAt"].IsNull())
    {
        if (!value["StartAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntervalSchedule.StartAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startAt = string(value["StartAt"].GetString());
        m_startAtHasBeenSet = true;
    }

    if (value.HasMember("Unit") && !value["Unit"].IsNull())
    {
        if (!value["Unit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IntervalSchedule.Unit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_unit = value["Unit"].GetInt64();
        m_unitHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IntervalSchedule.Value` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_value = value["Value"].GetInt64();
        m_valueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IntervalSchedule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_startAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startAt.c_str(), allocator).Move(), allocator);
    }

    if (m_unitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Unit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unit, allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_value, allocator);
    }

}


string IntervalSchedule::GetStartAt() const
{
    return m_startAt;
}

void IntervalSchedule::SetStartAt(const string& _startAt)
{
    m_startAt = _startAt;
    m_startAtHasBeenSet = true;
}

bool IntervalSchedule::StartAtHasBeenSet() const
{
    return m_startAtHasBeenSet;
}

int64_t IntervalSchedule::GetUnit() const
{
    return m_unit;
}

void IntervalSchedule::SetUnit(const int64_t& _unit)
{
    m_unit = _unit;
    m_unitHasBeenSet = true;
}

bool IntervalSchedule::UnitHasBeenSet() const
{
    return m_unitHasBeenSet;
}

int64_t IntervalSchedule::GetValue() const
{
    return m_value;
}

void IntervalSchedule::SetValue(const int64_t& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool IntervalSchedule::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

