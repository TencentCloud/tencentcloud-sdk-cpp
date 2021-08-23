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

#include <tencentcloud/mrs/v20200910/model/MenstrualMedicalHistory.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

MenstrualMedicalHistory::MenstrualMedicalHistory() :
    m_lastMenstrualPeriodHasBeenSet(false),
    m_menstrualFlowHasBeenSet(false),
    m_menarcheAgeHasBeenSet(false),
    m_menstruationOrNotHasBeenSet(false),
    m_menstrualCyclesHasBeenSet(false),
    m_menstrualPeriodHasBeenSet(false)
{
}

CoreInternalOutcome MenstrualMedicalHistory::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LastMenstrualPeriod") && !value["LastMenstrualPeriod"].IsNull())
    {
        if (!value["LastMenstrualPeriod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MenstrualMedicalHistory.LastMenstrualPeriod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastMenstrualPeriod = string(value["LastMenstrualPeriod"].GetString());
        m_lastMenstrualPeriodHasBeenSet = true;
    }

    if (value.HasMember("MenstrualFlow") && !value["MenstrualFlow"].IsNull())
    {
        if (!value["MenstrualFlow"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MenstrualMedicalHistory.MenstrualFlow` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_menstrualFlow = string(value["MenstrualFlow"].GetString());
        m_menstrualFlowHasBeenSet = true;
    }

    if (value.HasMember("MenarcheAge") && !value["MenarcheAge"].IsNull())
    {
        if (!value["MenarcheAge"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MenstrualMedicalHistory.MenarcheAge` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_menarcheAge = string(value["MenarcheAge"].GetString());
        m_menarcheAgeHasBeenSet = true;
    }

    if (value.HasMember("MenstruationOrNot") && !value["MenstruationOrNot"].IsNull())
    {
        if (!value["MenstruationOrNot"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MenstrualMedicalHistory.MenstruationOrNot` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_menstruationOrNot = string(value["MenstruationOrNot"].GetString());
        m_menstruationOrNotHasBeenSet = true;
    }

    if (value.HasMember("MenstrualCycles") && !value["MenstrualCycles"].IsNull())
    {
        if (!value["MenstrualCycles"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MenstrualMedicalHistory.MenstrualCycles` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_menstrualCycles = string(value["MenstrualCycles"].GetString());
        m_menstrualCyclesHasBeenSet = true;
    }

    if (value.HasMember("MenstrualPeriod") && !value["MenstrualPeriod"].IsNull())
    {
        if (!value["MenstrualPeriod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MenstrualMedicalHistory.MenstrualPeriod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_menstrualPeriod = string(value["MenstrualPeriod"].GetString());
        m_menstrualPeriodHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MenstrualMedicalHistory::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_lastMenstrualPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastMenstrualPeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastMenstrualPeriod.c_str(), allocator).Move(), allocator);
    }

    if (m_menstrualFlowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MenstrualFlow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_menstrualFlow.c_str(), allocator).Move(), allocator);
    }

    if (m_menarcheAgeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MenarcheAge";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_menarcheAge.c_str(), allocator).Move(), allocator);
    }

    if (m_menstruationOrNotHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MenstruationOrNot";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_menstruationOrNot.c_str(), allocator).Move(), allocator);
    }

    if (m_menstrualCyclesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MenstrualCycles";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_menstrualCycles.c_str(), allocator).Move(), allocator);
    }

    if (m_menstrualPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MenstrualPeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_menstrualPeriod.c_str(), allocator).Move(), allocator);
    }

}


string MenstrualMedicalHistory::GetLastMenstrualPeriod() const
{
    return m_lastMenstrualPeriod;
}

void MenstrualMedicalHistory::SetLastMenstrualPeriod(const string& _lastMenstrualPeriod)
{
    m_lastMenstrualPeriod = _lastMenstrualPeriod;
    m_lastMenstrualPeriodHasBeenSet = true;
}

bool MenstrualMedicalHistory::LastMenstrualPeriodHasBeenSet() const
{
    return m_lastMenstrualPeriodHasBeenSet;
}

string MenstrualMedicalHistory::GetMenstrualFlow() const
{
    return m_menstrualFlow;
}

void MenstrualMedicalHistory::SetMenstrualFlow(const string& _menstrualFlow)
{
    m_menstrualFlow = _menstrualFlow;
    m_menstrualFlowHasBeenSet = true;
}

bool MenstrualMedicalHistory::MenstrualFlowHasBeenSet() const
{
    return m_menstrualFlowHasBeenSet;
}

string MenstrualMedicalHistory::GetMenarcheAge() const
{
    return m_menarcheAge;
}

void MenstrualMedicalHistory::SetMenarcheAge(const string& _menarcheAge)
{
    m_menarcheAge = _menarcheAge;
    m_menarcheAgeHasBeenSet = true;
}

bool MenstrualMedicalHistory::MenarcheAgeHasBeenSet() const
{
    return m_menarcheAgeHasBeenSet;
}

string MenstrualMedicalHistory::GetMenstruationOrNot() const
{
    return m_menstruationOrNot;
}

void MenstrualMedicalHistory::SetMenstruationOrNot(const string& _menstruationOrNot)
{
    m_menstruationOrNot = _menstruationOrNot;
    m_menstruationOrNotHasBeenSet = true;
}

bool MenstrualMedicalHistory::MenstruationOrNotHasBeenSet() const
{
    return m_menstruationOrNotHasBeenSet;
}

string MenstrualMedicalHistory::GetMenstrualCycles() const
{
    return m_menstrualCycles;
}

void MenstrualMedicalHistory::SetMenstrualCycles(const string& _menstrualCycles)
{
    m_menstrualCycles = _menstrualCycles;
    m_menstrualCyclesHasBeenSet = true;
}

bool MenstrualMedicalHistory::MenstrualCyclesHasBeenSet() const
{
    return m_menstrualCyclesHasBeenSet;
}

string MenstrualMedicalHistory::GetMenstrualPeriod() const
{
    return m_menstrualPeriod;
}

void MenstrualMedicalHistory::SetMenstrualPeriod(const string& _menstrualPeriod)
{
    m_menstrualPeriod = _menstrualPeriod;
    m_menstrualPeriodHasBeenSet = true;
}

bool MenstrualMedicalHistory::MenstrualPeriodHasBeenSet() const
{
    return m_menstrualPeriodHasBeenSet;
}

