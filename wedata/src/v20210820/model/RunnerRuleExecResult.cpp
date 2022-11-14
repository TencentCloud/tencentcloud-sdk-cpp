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

#include <tencentcloud/wedata/v20210820/model/RunnerRuleExecResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

RunnerRuleExecResult::RunnerRuleExecResult() :
    m_ruleIdHasBeenSet(false),
    m_ruleExecIdHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_dataHasBeenSet(false)
{
}

CoreInternalOutcome RunnerRuleExecResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RunnerRuleExecResult.RuleId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = value["RuleId"].GetUint64();
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("RuleExecId") && !value["RuleExecId"].IsNull())
    {
        if (!value["RuleExecId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RunnerRuleExecResult.RuleExecId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleExecId = value["RuleExecId"].GetUint64();
        m_ruleExecIdHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunnerRuleExecResult.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("Data") && !value["Data"].IsNull())
    {
        if (!value["Data"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RunnerRuleExecResult.Data` is not array type"));

        const rapidjson::Value &tmpValue = value["Data"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_data.push_back((*itr).GetString());
        }
        m_dataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RunnerRuleExecResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleId, allocator);
    }

    if (m_ruleExecIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleExecId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleExecId, allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_dataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Data";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_data.begin(); itr != m_data.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


uint64_t RunnerRuleExecResult::GetRuleId() const
{
    return m_ruleId;
}

void RunnerRuleExecResult::SetRuleId(const uint64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool RunnerRuleExecResult::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

uint64_t RunnerRuleExecResult::GetRuleExecId() const
{
    return m_ruleExecId;
}

void RunnerRuleExecResult::SetRuleExecId(const uint64_t& _ruleExecId)
{
    m_ruleExecId = _ruleExecId;
    m_ruleExecIdHasBeenSet = true;
}

bool RunnerRuleExecResult::RuleExecIdHasBeenSet() const
{
    return m_ruleExecIdHasBeenSet;
}

string RunnerRuleExecResult::GetState() const
{
    return m_state;
}

void RunnerRuleExecResult::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool RunnerRuleExecResult::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

vector<string> RunnerRuleExecResult::GetData() const
{
    return m_data;
}

void RunnerRuleExecResult::SetData(const vector<string>& _data)
{
    m_data = _data;
    m_dataHasBeenSet = true;
}

bool RunnerRuleExecResult::DataHasBeenSet() const
{
    return m_dataHasBeenSet;
}

