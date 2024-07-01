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

#include <tencentcloud/wedata/v20210820/model/DutyScheduleDetailsInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DutyScheduleDetailsInfo::DutyScheduleDetailsInfo() :
    m_dayHasBeenSet(false),
    m_dutyHasBeenSet(false)
{
}

CoreInternalOutcome DutyScheduleDetailsInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Day") && !value["Day"].IsNull())
    {
        if (!value["Day"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DutyScheduleDetailsInfo.Day` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_day = string(value["Day"].GetString());
        m_dayHasBeenSet = true;
    }

    if (value.HasMember("Duty") && !value["Duty"].IsNull())
    {
        if (!value["Duty"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DutyScheduleDetailsInfo.Duty` is not array type"));

        const rapidjson::Value &tmpValue = value["Duty"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Duty item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_duty.push_back(item);
        }
        m_dutyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DutyScheduleDetailsInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Day";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_day.c_str(), allocator).Move(), allocator);
    }

    if (m_dutyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duty";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_duty.begin(); itr != m_duty.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string DutyScheduleDetailsInfo::GetDay() const
{
    return m_day;
}

void DutyScheduleDetailsInfo::SetDay(const string& _day)
{
    m_day = _day;
    m_dayHasBeenSet = true;
}

bool DutyScheduleDetailsInfo::DayHasBeenSet() const
{
    return m_dayHasBeenSet;
}

vector<Duty> DutyScheduleDetailsInfo::GetDuty() const
{
    return m_duty;
}

void DutyScheduleDetailsInfo::SetDuty(const vector<Duty>& _duty)
{
    m_duty = _duty;
    m_dutyHasBeenSet = true;
}

bool DutyScheduleDetailsInfo::DutyHasBeenSet() const
{
    return m_dutyHasBeenSet;
}

