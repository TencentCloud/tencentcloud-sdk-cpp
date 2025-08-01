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

#include <tencentcloud/teo/v20220901/model/JSInjectionRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

JSInjectionRule::JSInjectionRule() :
    m_ruleIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_priorityHasBeenSet(false),
    m_conditionHasBeenSet(false),
    m_injectJSHasBeenSet(false)
{
}

CoreInternalOutcome JSInjectionRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JSInjectionRule.RuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = string(value["RuleId"].GetString());
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JSInjectionRule.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Priority") && !value["Priority"].IsNull())
    {
        if (!value["Priority"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `JSInjectionRule.Priority` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_priority = value["Priority"].GetInt64();
        m_priorityHasBeenSet = true;
    }

    if (value.HasMember("Condition") && !value["Condition"].IsNull())
    {
        if (!value["Condition"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JSInjectionRule.Condition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_condition = string(value["Condition"].GetString());
        m_conditionHasBeenSet = true;
    }

    if (value.HasMember("InjectJS") && !value["InjectJS"].IsNull())
    {
        if (!value["InjectJS"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JSInjectionRule.InjectJS` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_injectJS = string(value["InjectJS"].GetString());
        m_injectJSHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void JSInjectionRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_priorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Priority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_priority, allocator);
    }

    if (m_conditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Condition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_condition.c_str(), allocator).Move(), allocator);
    }

    if (m_injectJSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InjectJS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_injectJS.c_str(), allocator).Move(), allocator);
    }

}


string JSInjectionRule::GetRuleId() const
{
    return m_ruleId;
}

void JSInjectionRule::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool JSInjectionRule::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string JSInjectionRule::GetName() const
{
    return m_name;
}

void JSInjectionRule::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool JSInjectionRule::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t JSInjectionRule::GetPriority() const
{
    return m_priority;
}

void JSInjectionRule::SetPriority(const int64_t& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool JSInjectionRule::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

string JSInjectionRule::GetCondition() const
{
    return m_condition;
}

void JSInjectionRule::SetCondition(const string& _condition)
{
    m_condition = _condition;
    m_conditionHasBeenSet = true;
}

bool JSInjectionRule::ConditionHasBeenSet() const
{
    return m_conditionHasBeenSet;
}

string JSInjectionRule::GetInjectJS() const
{
    return m_injectJS;
}

void JSInjectionRule::SetInjectJS(const string& _injectJS)
{
    m_injectJS = _injectJS;
    m_injectJSHasBeenSet = true;
}

bool JSInjectionRule::InjectJSHasBeenSet() const
{
    return m_injectJSHasBeenSet;
}

