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

#include <tencentcloud/alb/v20251030/model/RuleModify.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Alb::V20251030::Model;
using namespace std;

RuleModify::RuleModify() :
    m_actionsHasBeenSet(false),
    m_conditionsHasBeenSet(false),
    m_priorityHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_ruleNameHasBeenSet(false)
{
}

CoreInternalOutcome RuleModify::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Actions") && !value["Actions"].IsNull())
    {
        if (!value["Actions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RuleModify.Actions` is not array type"));

        const rapidjson::Value &tmpValue = value["Actions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RuleAction item;
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

    if (value.HasMember("Conditions") && !value["Conditions"].IsNull())
    {
        if (!value["Conditions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RuleModify.Conditions` is not array type"));

        const rapidjson::Value &tmpValue = value["Conditions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RuleCondition item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_conditions.push_back(item);
        }
        m_conditionsHasBeenSet = true;
    }

    if (value.HasMember("Priority") && !value["Priority"].IsNull())
    {
        if (!value["Priority"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleModify.Priority` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_priority = value["Priority"].GetInt64();
        m_priorityHasBeenSet = true;
    }

    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleModify.RuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = string(value["RuleId"].GetString());
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleModify.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RuleModify::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_conditionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Conditions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_conditions.begin(); itr != m_conditions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_priorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Priority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_priority, allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

}


vector<RuleAction> RuleModify::GetActions() const
{
    return m_actions;
}

void RuleModify::SetActions(const vector<RuleAction>& _actions)
{
    m_actions = _actions;
    m_actionsHasBeenSet = true;
}

bool RuleModify::ActionsHasBeenSet() const
{
    return m_actionsHasBeenSet;
}

vector<RuleCondition> RuleModify::GetConditions() const
{
    return m_conditions;
}

void RuleModify::SetConditions(const vector<RuleCondition>& _conditions)
{
    m_conditions = _conditions;
    m_conditionsHasBeenSet = true;
}

bool RuleModify::ConditionsHasBeenSet() const
{
    return m_conditionsHasBeenSet;
}

int64_t RuleModify::GetPriority() const
{
    return m_priority;
}

void RuleModify::SetPriority(const int64_t& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool RuleModify::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

string RuleModify::GetRuleId() const
{
    return m_ruleId;
}

void RuleModify::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool RuleModify::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string RuleModify::GetRuleName() const
{
    return m_ruleName;
}

void RuleModify::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool RuleModify::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

