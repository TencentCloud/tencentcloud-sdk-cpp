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

#include <tencentcloud/clb/v20180317/model/CoefficientScheduleRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

CoefficientScheduleRule::CoefficientScheduleRule() :
    m_weekdaysHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_multiplierHasBeenSet(false)
{
}

CoreInternalOutcome CoefficientScheduleRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Weekdays") && !value["Weekdays"].IsNull())
    {
        if (!value["Weekdays"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CoefficientScheduleRule.Weekdays` is not array type"));

        const rapidjson::Value &tmpValue = value["Weekdays"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_weekdays.push_back((*itr).GetUint64());
        }
        m_weekdaysHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CoefficientScheduleRule.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CoefficientScheduleRule.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("Multiplier") && !value["Multiplier"].IsNull())
    {
        if (!value["Multiplier"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CoefficientScheduleRule.Multiplier` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_multiplier = value["Multiplier"].GetDouble();
        m_multiplierHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CoefficientScheduleRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_weekdaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Weekdays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_weekdays.begin(); itr != m_weekdays.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_multiplierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Multiplier";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_multiplier, allocator);
    }

}


vector<uint64_t> CoefficientScheduleRule::GetWeekdays() const
{
    return m_weekdays;
}

void CoefficientScheduleRule::SetWeekdays(const vector<uint64_t>& _weekdays)
{
    m_weekdays = _weekdays;
    m_weekdaysHasBeenSet = true;
}

bool CoefficientScheduleRule::WeekdaysHasBeenSet() const
{
    return m_weekdaysHasBeenSet;
}

string CoefficientScheduleRule::GetStartTime() const
{
    return m_startTime;
}

void CoefficientScheduleRule::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool CoefficientScheduleRule::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string CoefficientScheduleRule::GetEndTime() const
{
    return m_endTime;
}

void CoefficientScheduleRule::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool CoefficientScheduleRule::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

double CoefficientScheduleRule::GetMultiplier() const
{
    return m_multiplier;
}

void CoefficientScheduleRule::SetMultiplier(const double& _multiplier)
{
    m_multiplier = _multiplier;
    m_multiplierHasBeenSet = true;
}

bool CoefficientScheduleRule::MultiplierHasBeenSet() const
{
    return m_multiplierHasBeenSet;
}

