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

#include <tencentcloud/wedata/v20250806/model/InstanceExecution.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

InstanceExecution::InstanceExecution() :
    m_instanceKeyHasBeenSet(false),
    m_lifeRoundNumHasBeenSet(false),
    m_instanceStateHasBeenSet(false),
    m_runTypeHasBeenSet(false),
    m_triesHasBeenSet(false),
    m_executionPhaseListHasBeenSet(false),
    m_costTimeHasBeenSet(false)
{
}

CoreInternalOutcome InstanceExecution::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceKey") && !value["InstanceKey"].IsNull())
    {
        if (!value["InstanceKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceExecution.InstanceKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceKey = string(value["InstanceKey"].GetString());
        m_instanceKeyHasBeenSet = true;
    }

    if (value.HasMember("LifeRoundNum") && !value["LifeRoundNum"].IsNull())
    {
        if (!value["LifeRoundNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceExecution.LifeRoundNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lifeRoundNum = value["LifeRoundNum"].GetUint64();
        m_lifeRoundNumHasBeenSet = true;
    }

    if (value.HasMember("InstanceState") && !value["InstanceState"].IsNull())
    {
        if (!value["InstanceState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceExecution.InstanceState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceState = string(value["InstanceState"].GetString());
        m_instanceStateHasBeenSet = true;
    }

    if (value.HasMember("RunType") && !value["RunType"].IsNull())
    {
        if (!value["RunType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceExecution.RunType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runType = string(value["RunType"].GetString());
        m_runTypeHasBeenSet = true;
    }

    if (value.HasMember("Tries") && !value["Tries"].IsNull())
    {
        if (!value["Tries"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceExecution.Tries` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_tries = value["Tries"].GetUint64();
        m_triesHasBeenSet = true;
    }

    if (value.HasMember("ExecutionPhaseList") && !value["ExecutionPhaseList"].IsNull())
    {
        if (!value["ExecutionPhaseList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceExecution.ExecutionPhaseList` is not array type"));

        const rapidjson::Value &tmpValue = value["ExecutionPhaseList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InstanceExecutionPhase item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_executionPhaseList.push_back(item);
        }
        m_executionPhaseListHasBeenSet = true;
    }

    if (value.HasMember("CostTime") && !value["CostTime"].IsNull())
    {
        if (!value["CostTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceExecution.CostTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_costTime = value["CostTime"].GetInt64();
        m_costTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceExecution::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceKey.c_str(), allocator).Move(), allocator);
    }

    if (m_lifeRoundNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LifeRoundNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lifeRoundNum, allocator);
    }

    if (m_instanceStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceState.c_str(), allocator).Move(), allocator);
    }

    if (m_runTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runType.c_str(), allocator).Move(), allocator);
    }

    if (m_triesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tries";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tries, allocator);
    }

    if (m_executionPhaseListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionPhaseList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_executionPhaseList.begin(); itr != m_executionPhaseList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_costTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CostTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_costTime, allocator);
    }

}


string InstanceExecution::GetInstanceKey() const
{
    return m_instanceKey;
}

void InstanceExecution::SetInstanceKey(const string& _instanceKey)
{
    m_instanceKey = _instanceKey;
    m_instanceKeyHasBeenSet = true;
}

bool InstanceExecution::InstanceKeyHasBeenSet() const
{
    return m_instanceKeyHasBeenSet;
}

uint64_t InstanceExecution::GetLifeRoundNum() const
{
    return m_lifeRoundNum;
}

void InstanceExecution::SetLifeRoundNum(const uint64_t& _lifeRoundNum)
{
    m_lifeRoundNum = _lifeRoundNum;
    m_lifeRoundNumHasBeenSet = true;
}

bool InstanceExecution::LifeRoundNumHasBeenSet() const
{
    return m_lifeRoundNumHasBeenSet;
}

string InstanceExecution::GetInstanceState() const
{
    return m_instanceState;
}

void InstanceExecution::SetInstanceState(const string& _instanceState)
{
    m_instanceState = _instanceState;
    m_instanceStateHasBeenSet = true;
}

bool InstanceExecution::InstanceStateHasBeenSet() const
{
    return m_instanceStateHasBeenSet;
}

string InstanceExecution::GetRunType() const
{
    return m_runType;
}

void InstanceExecution::SetRunType(const string& _runType)
{
    m_runType = _runType;
    m_runTypeHasBeenSet = true;
}

bool InstanceExecution::RunTypeHasBeenSet() const
{
    return m_runTypeHasBeenSet;
}

uint64_t InstanceExecution::GetTries() const
{
    return m_tries;
}

void InstanceExecution::SetTries(const uint64_t& _tries)
{
    m_tries = _tries;
    m_triesHasBeenSet = true;
}

bool InstanceExecution::TriesHasBeenSet() const
{
    return m_triesHasBeenSet;
}

vector<InstanceExecutionPhase> InstanceExecution::GetExecutionPhaseList() const
{
    return m_executionPhaseList;
}

void InstanceExecution::SetExecutionPhaseList(const vector<InstanceExecutionPhase>& _executionPhaseList)
{
    m_executionPhaseList = _executionPhaseList;
    m_executionPhaseListHasBeenSet = true;
}

bool InstanceExecution::ExecutionPhaseListHasBeenSet() const
{
    return m_executionPhaseListHasBeenSet;
}

int64_t InstanceExecution::GetCostTime() const
{
    return m_costTime;
}

void InstanceExecution::SetCostTime(const int64_t& _costTime)
{
    m_costTime = _costTime;
    m_costTimeHasBeenSet = true;
}

bool InstanceExecution::CostTimeHasBeenSet() const
{
    return m_costTimeHasBeenSet;
}

