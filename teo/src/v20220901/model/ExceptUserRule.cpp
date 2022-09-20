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

#include <tencentcloud/teo/v20220901/model/ExceptUserRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

ExceptUserRule::ExceptUserRule() :
    m_ruleNameHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_ruleStatusHasBeenSet(false),
    m_ruleIDHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_exceptUserRuleConditionsHasBeenSet(false),
    m_exceptUserRuleScopeHasBeenSet(false),
    m_rulePriorityHasBeenSet(false)
{
}

CoreInternalOutcome ExceptUserRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExceptUserRule.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExceptUserRule.Action` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_action = string(value["Action"].GetString());
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("RuleStatus") && !value["RuleStatus"].IsNull())
    {
        if (!value["RuleStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExceptUserRule.RuleStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleStatus = string(value["RuleStatus"].GetString());
        m_ruleStatusHasBeenSet = true;
    }

    if (value.HasMember("RuleID") && !value["RuleID"].IsNull())
    {
        if (!value["RuleID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExceptUserRule.RuleID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleID = value["RuleID"].GetInt64();
        m_ruleIDHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExceptUserRule.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("ExceptUserRuleConditions") && !value["ExceptUserRuleConditions"].IsNull())
    {
        if (!value["ExceptUserRuleConditions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ExceptUserRule.ExceptUserRuleConditions` is not array type"));

        const rapidjson::Value &tmpValue = value["ExceptUserRuleConditions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ExceptUserRuleCondition item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_exceptUserRuleConditions.push_back(item);
        }
        m_exceptUserRuleConditionsHasBeenSet = true;
    }

    if (value.HasMember("ExceptUserRuleScope") && !value["ExceptUserRuleScope"].IsNull())
    {
        if (!value["ExceptUserRuleScope"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ExceptUserRule.ExceptUserRuleScope` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_exceptUserRuleScope.Deserialize(value["ExceptUserRuleScope"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_exceptUserRuleScopeHasBeenSet = true;
    }

    if (value.HasMember("RulePriority") && !value["RulePriority"].IsNull())
    {
        if (!value["RulePriority"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExceptUserRule.RulePriority` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rulePriority = value["RulePriority"].GetInt64();
        m_rulePriorityHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExceptUserRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_action.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleID, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_exceptUserRuleConditionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExceptUserRuleConditions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_exceptUserRuleConditions.begin(); itr != m_exceptUserRuleConditions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_exceptUserRuleScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExceptUserRuleScope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_exceptUserRuleScope.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_rulePriorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RulePriority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rulePriority, allocator);
    }

}


string ExceptUserRule::GetRuleName() const
{
    return m_ruleName;
}

void ExceptUserRule::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool ExceptUserRule::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

string ExceptUserRule::GetAction() const
{
    return m_action;
}

void ExceptUserRule::SetAction(const string& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool ExceptUserRule::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

string ExceptUserRule::GetRuleStatus() const
{
    return m_ruleStatus;
}

void ExceptUserRule::SetRuleStatus(const string& _ruleStatus)
{
    m_ruleStatus = _ruleStatus;
    m_ruleStatusHasBeenSet = true;
}

bool ExceptUserRule::RuleStatusHasBeenSet() const
{
    return m_ruleStatusHasBeenSet;
}

int64_t ExceptUserRule::GetRuleID() const
{
    return m_ruleID;
}

void ExceptUserRule::SetRuleID(const int64_t& _ruleID)
{
    m_ruleID = _ruleID;
    m_ruleIDHasBeenSet = true;
}

bool ExceptUserRule::RuleIDHasBeenSet() const
{
    return m_ruleIDHasBeenSet;
}

string ExceptUserRule::GetUpdateTime() const
{
    return m_updateTime;
}

void ExceptUserRule::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ExceptUserRule::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

vector<ExceptUserRuleCondition> ExceptUserRule::GetExceptUserRuleConditions() const
{
    return m_exceptUserRuleConditions;
}

void ExceptUserRule::SetExceptUserRuleConditions(const vector<ExceptUserRuleCondition>& _exceptUserRuleConditions)
{
    m_exceptUserRuleConditions = _exceptUserRuleConditions;
    m_exceptUserRuleConditionsHasBeenSet = true;
}

bool ExceptUserRule::ExceptUserRuleConditionsHasBeenSet() const
{
    return m_exceptUserRuleConditionsHasBeenSet;
}

ExceptUserRuleScope ExceptUserRule::GetExceptUserRuleScope() const
{
    return m_exceptUserRuleScope;
}

void ExceptUserRule::SetExceptUserRuleScope(const ExceptUserRuleScope& _exceptUserRuleScope)
{
    m_exceptUserRuleScope = _exceptUserRuleScope;
    m_exceptUserRuleScopeHasBeenSet = true;
}

bool ExceptUserRule::ExceptUserRuleScopeHasBeenSet() const
{
    return m_exceptUserRuleScopeHasBeenSet;
}

int64_t ExceptUserRule::GetRulePriority() const
{
    return m_rulePriority;
}

void ExceptUserRule::SetRulePriority(const int64_t& _rulePriority)
{
    m_rulePriority = _rulePriority;
    m_rulePriorityHasBeenSet = true;
}

bool ExceptUserRule::RulePriorityHasBeenSet() const
{
    return m_rulePriorityHasBeenSet;
}

