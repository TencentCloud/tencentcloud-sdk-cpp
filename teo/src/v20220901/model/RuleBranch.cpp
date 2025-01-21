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

#include <tencentcloud/teo/v20220901/model/RuleBranch.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

RuleBranch::RuleBranch() :
    m_conditionHasBeenSet(false),
    m_actionsHasBeenSet(false),
    m_subRulesHasBeenSet(false)
{
}

CoreInternalOutcome RuleBranch::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Condition") && !value["Condition"].IsNull())
    {
        if (!value["Condition"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleBranch.Condition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_condition = string(value["Condition"].GetString());
        m_conditionHasBeenSet = true;
    }

    if (value.HasMember("Actions") && !value["Actions"].IsNull())
    {
        if (!value["Actions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RuleBranch.Actions` is not array type"));

        const rapidjson::Value &tmpValue = value["Actions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RuleEngineAction item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_actions.push_back(item);
        }
        m_actionsHasBeenSet = true;
    }

    if (value.HasMember("SubRules") && !value["SubRules"].IsNull())
    {
        if (!value["SubRules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RuleBranch.SubRules` is not array type"));

        const rapidjson::Value &tmpValue = value["SubRules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RuleEngineSubRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_subRules.push_back(item);
        }
        m_subRulesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RuleBranch::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_conditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Condition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_condition.c_str(), allocator).Move(), allocator);
    }

    if (m_actionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Actions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_actions.begin(); itr != m_actions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_subRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_subRules.begin(); itr != m_subRules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string RuleBranch::GetCondition() const
{
    return m_condition;
}

void RuleBranch::SetCondition(const string& _condition)
{
    m_condition = _condition;
    m_conditionHasBeenSet = true;
}

bool RuleBranch::ConditionHasBeenSet() const
{
    return m_conditionHasBeenSet;
}

vector<RuleEngineAction> RuleBranch::GetActions() const
{
    return m_actions;
}

void RuleBranch::SetActions(const vector<RuleEngineAction>& _actions)
{
    m_actions = _actions;
    m_actionsHasBeenSet = true;
}

bool RuleBranch::ActionsHasBeenSet() const
{
    return m_actionsHasBeenSet;
}

vector<RuleEngineSubRule> RuleBranch::GetSubRules() const
{
    return m_subRules;
}

void RuleBranch::SetSubRules(const vector<RuleEngineSubRule>& _subRules)
{
    m_subRules = _subRules;
    m_subRulesHasBeenSet = true;
}

bool RuleBranch::SubRulesHasBeenSet() const
{
    return m_subRulesHasBeenSet;
}

