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

#include <tencentcloud/mrs/v20200910/model/MenstrualHistoryBlock.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

MenstrualHistoryBlock::MenstrualHistoryBlock() :
    m_lastMenstrualPeriodHasBeenSet(false),
    m_menstrualFlowHasBeenSet(false),
    m_menarcheAgeHasBeenSet(false),
    m_menstruationOrNotHasBeenSet(false),
    m_menstrualCyclesHasBeenSet(false),
    m_menstrualPeriodHasBeenSet(false)
{
}

CoreInternalOutcome MenstrualHistoryBlock::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LastMenstrualPeriod") && !value["LastMenstrualPeriod"].IsNull())
    {
        if (!value["LastMenstrualPeriod"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MenstrualHistoryBlock.LastMenstrualPeriod` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_lastMenstrualPeriod.Deserialize(value["LastMenstrualPeriod"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_lastMenstrualPeriodHasBeenSet = true;
    }

    if (value.HasMember("MenstrualFlow") && !value["MenstrualFlow"].IsNull())
    {
        if (!value["MenstrualFlow"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MenstrualHistoryBlock.MenstrualFlow` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_menstrualFlow.Deserialize(value["MenstrualFlow"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_menstrualFlowHasBeenSet = true;
    }

    if (value.HasMember("MenarcheAge") && !value["MenarcheAge"].IsNull())
    {
        if (!value["MenarcheAge"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MenstrualHistoryBlock.MenarcheAge` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_menarcheAge.Deserialize(value["MenarcheAge"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_menarcheAgeHasBeenSet = true;
    }

    if (value.HasMember("MenstruationOrNot") && !value["MenstruationOrNot"].IsNull())
    {
        if (!value["MenstruationOrNot"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MenstrualHistoryBlock.MenstruationOrNot` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_menstruationOrNot.Deserialize(value["MenstruationOrNot"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_menstruationOrNotHasBeenSet = true;
    }

    if (value.HasMember("MenstrualCycles") && !value["MenstrualCycles"].IsNull())
    {
        if (!value["MenstrualCycles"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MenstrualHistoryBlock.MenstrualCycles` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_menstrualCycles.Deserialize(value["MenstrualCycles"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_menstrualCyclesHasBeenSet = true;
    }

    if (value.HasMember("MenstrualPeriod") && !value["MenstrualPeriod"].IsNull())
    {
        if (!value["MenstrualPeriod"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MenstrualHistoryBlock.MenstrualPeriod` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_menstrualPeriod.Deserialize(value["MenstrualPeriod"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_menstrualPeriodHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MenstrualHistoryBlock::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_lastMenstrualPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastMenstrualPeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_lastMenstrualPeriod.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_menstrualFlowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MenstrualFlow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_menstrualFlow.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_menarcheAgeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MenarcheAge";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_menarcheAge.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_menstruationOrNotHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MenstruationOrNot";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_menstruationOrNot.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_menstrualCyclesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MenstrualCycles";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_menstrualCycles.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_menstrualPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MenstrualPeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_menstrualPeriod.ToJsonObject(value[key.c_str()], allocator);
    }

}


LastMenstrualPeriodBlock MenstrualHistoryBlock::GetLastMenstrualPeriod() const
{
    return m_lastMenstrualPeriod;
}

void MenstrualHistoryBlock::SetLastMenstrualPeriod(const LastMenstrualPeriodBlock& _lastMenstrualPeriod)
{
    m_lastMenstrualPeriod = _lastMenstrualPeriod;
    m_lastMenstrualPeriodHasBeenSet = true;
}

bool MenstrualHistoryBlock::LastMenstrualPeriodHasBeenSet() const
{
    return m_lastMenstrualPeriodHasBeenSet;
}

MenstrualFlowBlock MenstrualHistoryBlock::GetMenstrualFlow() const
{
    return m_menstrualFlow;
}

void MenstrualHistoryBlock::SetMenstrualFlow(const MenstrualFlowBlock& _menstrualFlow)
{
    m_menstrualFlow = _menstrualFlow;
    m_menstrualFlowHasBeenSet = true;
}

bool MenstrualHistoryBlock::MenstrualFlowHasBeenSet() const
{
    return m_menstrualFlowHasBeenSet;
}

LastMenstrualPeriodBlock MenstrualHistoryBlock::GetMenarcheAge() const
{
    return m_menarcheAge;
}

void MenstrualHistoryBlock::SetMenarcheAge(const LastMenstrualPeriodBlock& _menarcheAge)
{
    m_menarcheAge = _menarcheAge;
    m_menarcheAgeHasBeenSet = true;
}

bool MenstrualHistoryBlock::MenarcheAgeHasBeenSet() const
{
    return m_menarcheAgeHasBeenSet;
}

MenstruationOrNotBlock MenstrualHistoryBlock::GetMenstruationOrNot() const
{
    return m_menstruationOrNot;
}

void MenstrualHistoryBlock::SetMenstruationOrNot(const MenstruationOrNotBlock& _menstruationOrNot)
{
    m_menstruationOrNot = _menstruationOrNot;
    m_menstruationOrNotHasBeenSet = true;
}

bool MenstrualHistoryBlock::MenstruationOrNotHasBeenSet() const
{
    return m_menstruationOrNotHasBeenSet;
}

LastMenstrualPeriodBlock MenstrualHistoryBlock::GetMenstrualCycles() const
{
    return m_menstrualCycles;
}

void MenstrualHistoryBlock::SetMenstrualCycles(const LastMenstrualPeriodBlock& _menstrualCycles)
{
    m_menstrualCycles = _menstrualCycles;
    m_menstrualCyclesHasBeenSet = true;
}

bool MenstrualHistoryBlock::MenstrualCyclesHasBeenSet() const
{
    return m_menstrualCyclesHasBeenSet;
}

MenstrualPeriodBlock MenstrualHistoryBlock::GetMenstrualPeriod() const
{
    return m_menstrualPeriod;
}

void MenstrualHistoryBlock::SetMenstrualPeriod(const MenstrualPeriodBlock& _menstrualPeriod)
{
    m_menstrualPeriod = _menstrualPeriod;
    m_menstrualPeriodHasBeenSet = true;
}

bool MenstrualHistoryBlock::MenstrualPeriodHasBeenSet() const
{
    return m_menstrualPeriodHasBeenSet;
}

