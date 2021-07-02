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

#include <tencentcloud/mrs/v20200910/model/MenstrualHistory.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

MenstrualHistory::MenstrualHistory() :
    m_isOrNotHasBeenSet(false),
    m_menarcheAgeHasBeenSet(false),
    m_lastTimeHasBeenSet(false),
    m_flowHasBeenSet(false),
    m_cyclesHasBeenSet(false),
    m_durationHasBeenSet(false)
{
}

CoreInternalOutcome MenstrualHistory::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IsOrNot") && !value["IsOrNot"].IsNull())
    {
        if (!value["IsOrNot"].IsString())
        {
            return CoreInternalOutcome(Error("response `MenstrualHistory.IsOrNot` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isOrNot = string(value["IsOrNot"].GetString());
        m_isOrNotHasBeenSet = true;
    }

    if (value.HasMember("MenarcheAge") && !value["MenarcheAge"].IsNull())
    {
        if (!value["MenarcheAge"].IsString())
        {
            return CoreInternalOutcome(Error("response `MenstrualHistory.MenarcheAge` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_menarcheAge = string(value["MenarcheAge"].GetString());
        m_menarcheAgeHasBeenSet = true;
    }

    if (value.HasMember("LastTime") && !value["LastTime"].IsNull())
    {
        if (!value["LastTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `MenstrualHistory.LastTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastTime = string(value["LastTime"].GetString());
        m_lastTimeHasBeenSet = true;
    }

    if (value.HasMember("Flow") && !value["Flow"].IsNull())
    {
        if (!value["Flow"].IsString())
        {
            return CoreInternalOutcome(Error("response `MenstrualHistory.Flow` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flow = string(value["Flow"].GetString());
        m_flowHasBeenSet = true;
    }

    if (value.HasMember("Cycles") && !value["Cycles"].IsNull())
    {
        if (!value["Cycles"].IsString())
        {
            return CoreInternalOutcome(Error("response `MenstrualHistory.Cycles` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cycles = string(value["Cycles"].GetString());
        m_cyclesHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsString())
        {
            return CoreInternalOutcome(Error("response `MenstrualHistory.Duration` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_duration = string(value["Duration"].GetString());
        m_durationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MenstrualHistory::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_isOrNotHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsOrNot";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isOrNot.c_str(), allocator).Move(), allocator);
    }

    if (m_menarcheAgeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MenarcheAge";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_menarcheAge.c_str(), allocator).Move(), allocator);
    }

    if (m_lastTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastTime.c_str(), allocator).Move(), allocator);
    }

    if (m_flowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Flow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flow.c_str(), allocator).Move(), allocator);
    }

    if (m_cyclesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cycles";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cycles.c_str(), allocator).Move(), allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_duration.c_str(), allocator).Move(), allocator);
    }

}


string MenstrualHistory::GetIsOrNot() const
{
    return m_isOrNot;
}

void MenstrualHistory::SetIsOrNot(const string& _isOrNot)
{
    m_isOrNot = _isOrNot;
    m_isOrNotHasBeenSet = true;
}

bool MenstrualHistory::IsOrNotHasBeenSet() const
{
    return m_isOrNotHasBeenSet;
}

string MenstrualHistory::GetMenarcheAge() const
{
    return m_menarcheAge;
}

void MenstrualHistory::SetMenarcheAge(const string& _menarcheAge)
{
    m_menarcheAge = _menarcheAge;
    m_menarcheAgeHasBeenSet = true;
}

bool MenstrualHistory::MenarcheAgeHasBeenSet() const
{
    return m_menarcheAgeHasBeenSet;
}

string MenstrualHistory::GetLastTime() const
{
    return m_lastTime;
}

void MenstrualHistory::SetLastTime(const string& _lastTime)
{
    m_lastTime = _lastTime;
    m_lastTimeHasBeenSet = true;
}

bool MenstrualHistory::LastTimeHasBeenSet() const
{
    return m_lastTimeHasBeenSet;
}

string MenstrualHistory::GetFlow() const
{
    return m_flow;
}

void MenstrualHistory::SetFlow(const string& _flow)
{
    m_flow = _flow;
    m_flowHasBeenSet = true;
}

bool MenstrualHistory::FlowHasBeenSet() const
{
    return m_flowHasBeenSet;
}

string MenstrualHistory::GetCycles() const
{
    return m_cycles;
}

void MenstrualHistory::SetCycles(const string& _cycles)
{
    m_cycles = _cycles;
    m_cyclesHasBeenSet = true;
}

bool MenstrualHistory::CyclesHasBeenSet() const
{
    return m_cyclesHasBeenSet;
}

string MenstrualHistory::GetDuration() const
{
    return m_duration;
}

void MenstrualHistory::SetDuration(const string& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool MenstrualHistory::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

