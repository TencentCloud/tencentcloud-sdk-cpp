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

#include <tencentcloud/alb/v20251030/model/RuleInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Alb::V20251030::Model;
using namespace std;

RuleInput::RuleInput() :
    m_actionsHasBeenSet(false),
    m_conditionsHasBeenSet(false),
    m_priorityHasBeenSet(false),
    m_directionHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

CoreInternalOutcome RuleInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Actions") && !value["Actions"].IsNull())
    {
        if (!value["Actions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RuleInput.Actions` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `RuleInput.Conditions` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `RuleInput.Priority` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_priority = value["Priority"].GetInt64();
        m_priorityHasBeenSet = true;
    }

    if (value.HasMember("Direction") && !value["Direction"].IsNull())
    {
        if (!value["Direction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleInput.Direction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_direction = string(value["Direction"].GetString());
        m_directionHasBeenSet = true;
    }

    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleInput.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RuleInput.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TagInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RuleInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_directionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Direction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_direction.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<RuleAction> RuleInput::GetActions() const
{
    return m_actions;
}

void RuleInput::SetActions(const vector<RuleAction>& _actions)
{
    m_actions = _actions;
    m_actionsHasBeenSet = true;
}

bool RuleInput::ActionsHasBeenSet() const
{
    return m_actionsHasBeenSet;
}

vector<RuleCondition> RuleInput::GetConditions() const
{
    return m_conditions;
}

void RuleInput::SetConditions(const vector<RuleCondition>& _conditions)
{
    m_conditions = _conditions;
    m_conditionsHasBeenSet = true;
}

bool RuleInput::ConditionsHasBeenSet() const
{
    return m_conditionsHasBeenSet;
}

int64_t RuleInput::GetPriority() const
{
    return m_priority;
}

void RuleInput::SetPriority(const int64_t& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool RuleInput::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

string RuleInput::GetDirection() const
{
    return m_direction;
}

void RuleInput::SetDirection(const string& _direction)
{
    m_direction = _direction;
    m_directionHasBeenSet = true;
}

bool RuleInput::DirectionHasBeenSet() const
{
    return m_directionHasBeenSet;
}

string RuleInput::GetRuleName() const
{
    return m_ruleName;
}

void RuleInput::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool RuleInput::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

vector<TagInfo> RuleInput::GetTags() const
{
    return m_tags;
}

void RuleInput::SetTags(const vector<TagInfo>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool RuleInput::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

