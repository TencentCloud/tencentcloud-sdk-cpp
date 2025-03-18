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

#include <tencentcloud/teo/v20220901/model/CustomRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

CustomRule::CustomRule() :
    m_nameHasBeenSet(false),
    m_conditionHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_enabledHasBeenSet(false),
    m_idHasBeenSet(false),
    m_ruleTypeHasBeenSet(false),
    m_priorityHasBeenSet(false)
{
}

CoreInternalOutcome CustomRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomRule.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Condition") && !value["Condition"].IsNull())
    {
        if (!value["Condition"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomRule.Condition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_condition = string(value["Condition"].GetString());
        m_conditionHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CustomRule.Action` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_action.Deserialize(value["Action"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_actionHasBeenSet = true;
    }

    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomRule.Enabled` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = string(value["Enabled"].GetString());
        m_enabledHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomRule.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("RuleType") && !value["RuleType"].IsNull())
    {
        if (!value["RuleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomRule.RuleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleType = string(value["RuleType"].GetString());
        m_ruleTypeHasBeenSet = true;
    }

    if (value.HasMember("Priority") && !value["Priority"].IsNull())
    {
        if (!value["Priority"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomRule.Priority` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_priority = value["Priority"].GetInt64();
        m_priorityHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CustomRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_conditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Condition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_condition.c_str(), allocator).Move(), allocator);
    }

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_action.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_enabled.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleType.c_str(), allocator).Move(), allocator);
    }

    if (m_priorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Priority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_priority, allocator);
    }

}


string CustomRule::GetName() const
{
    return m_name;
}

void CustomRule::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CustomRule::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CustomRule::GetCondition() const
{
    return m_condition;
}

void CustomRule::SetCondition(const string& _condition)
{
    m_condition = _condition;
    m_conditionHasBeenSet = true;
}

bool CustomRule::ConditionHasBeenSet() const
{
    return m_conditionHasBeenSet;
}

SecurityAction CustomRule::GetAction() const
{
    return m_action;
}

void CustomRule::SetAction(const SecurityAction& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool CustomRule::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

string CustomRule::GetEnabled() const
{
    return m_enabled;
}

void CustomRule::SetEnabled(const string& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool CustomRule::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

string CustomRule::GetId() const
{
    return m_id;
}

void CustomRule::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool CustomRule::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string CustomRule::GetRuleType() const
{
    return m_ruleType;
}

void CustomRule::SetRuleType(const string& _ruleType)
{
    m_ruleType = _ruleType;
    m_ruleTypeHasBeenSet = true;
}

bool CustomRule::RuleTypeHasBeenSet() const
{
    return m_ruleTypeHasBeenSet;
}

int64_t CustomRule::GetPriority() const
{
    return m_priority;
}

void CustomRule::SetPriority(const int64_t& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool CustomRule::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

