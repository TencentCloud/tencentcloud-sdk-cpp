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

#include <tencentcloud/wedata/v20210820/model/Duty.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

Duty::Duty() :
    m_dutyScheduleIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_dutyPersonsHasBeenSet(false)
{
}

CoreInternalOutcome Duty::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DutyScheduleId") && !value["DutyScheduleId"].IsNull())
    {
        if (!value["DutyScheduleId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Duty.DutyScheduleId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dutyScheduleId = value["DutyScheduleId"].GetInt64();
        m_dutyScheduleIdHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Duty.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Duty.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("DutyPersons") && !value["DutyPersons"].IsNull())
    {
        if (!value["DutyPersons"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Duty.DutyPersons` is not array type"));

        const rapidjson::Value &tmpValue = value["DutyPersons"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DutyPerson item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dutyPersons.push_back(item);
        }
        m_dutyPersonsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Duty::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dutyScheduleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DutyScheduleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dutyScheduleId, allocator);
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

    if (m_dutyPersonsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DutyPersons";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dutyPersons.begin(); itr != m_dutyPersons.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t Duty::GetDutyScheduleId() const
{
    return m_dutyScheduleId;
}

void Duty::SetDutyScheduleId(const int64_t& _dutyScheduleId)
{
    m_dutyScheduleId = _dutyScheduleId;
    m_dutyScheduleIdHasBeenSet = true;
}

bool Duty::DutyScheduleIdHasBeenSet() const
{
    return m_dutyScheduleIdHasBeenSet;
}

string Duty::GetStartTime() const
{
    return m_startTime;
}

void Duty::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool Duty::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string Duty::GetEndTime() const
{
    return m_endTime;
}

void Duty::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool Duty::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

vector<DutyPerson> Duty::GetDutyPersons() const
{
    return m_dutyPersons;
}

void Duty::SetDutyPersons(const vector<DutyPerson>& _dutyPersons)
{
    m_dutyPersons = _dutyPersons;
    m_dutyPersonsHasBeenSet = true;
}

bool Duty::DutyPersonsHasBeenSet() const
{
    return m_dutyPersonsHasBeenSet;
}

