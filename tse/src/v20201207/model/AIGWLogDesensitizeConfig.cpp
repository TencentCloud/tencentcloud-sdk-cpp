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

#include <tencentcloud/tse/v20201207/model/AIGWLogDesensitizeConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

AIGWLogDesensitizeConfig::AIGWLogDesensitizeConfig() :
    m_enabledHasBeenSet(false),
    m_predefinedRuleTypesHasBeenSet(false),
    m_customRulesHasBeenSet(false),
    m_scopeHasBeenSet(false)
{
}

CoreInternalOutcome AIGWLogDesensitizeConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWLogDesensitizeConfig.Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
    }

    if (value.HasMember("PredefinedRuleTypes") && !value["PredefinedRuleTypes"].IsNull())
    {
        if (!value["PredefinedRuleTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AIGWLogDesensitizeConfig.PredefinedRuleTypes` is not array type"));

        const rapidjson::Value &tmpValue = value["PredefinedRuleTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_predefinedRuleTypes.push_back((*itr).GetString());
        }
        m_predefinedRuleTypesHasBeenSet = true;
    }

    if (value.HasMember("CustomRules") && !value["CustomRules"].IsNull())
    {
        if (!value["CustomRules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AIGWLogDesensitizeConfig.CustomRules` is not array type"));

        const rapidjson::Value &tmpValue = value["CustomRules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AIGWCustomDesensitizeRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_customRules.push_back(item);
        }
        m_customRulesHasBeenSet = true;
    }

    if (value.HasMember("Scope") && !value["Scope"].IsNull())
    {
        if (!value["Scope"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AIGWLogDesensitizeConfig.Scope` is not array type"));

        const rapidjson::Value &tmpValue = value["Scope"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_scope.push_back((*itr).GetString());
        }
        m_scopeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AIGWLogDesensitizeConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

    if (m_predefinedRuleTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PredefinedRuleTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_predefinedRuleTypes.begin(); itr != m_predefinedRuleTypes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_customRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_customRules.begin(); itr != m_customRules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_scopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_scope.begin(); itr != m_scope.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


bool AIGWLogDesensitizeConfig::GetEnabled() const
{
    return m_enabled;
}

void AIGWLogDesensitizeConfig::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool AIGWLogDesensitizeConfig::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

vector<string> AIGWLogDesensitizeConfig::GetPredefinedRuleTypes() const
{
    return m_predefinedRuleTypes;
}

void AIGWLogDesensitizeConfig::SetPredefinedRuleTypes(const vector<string>& _predefinedRuleTypes)
{
    m_predefinedRuleTypes = _predefinedRuleTypes;
    m_predefinedRuleTypesHasBeenSet = true;
}

bool AIGWLogDesensitizeConfig::PredefinedRuleTypesHasBeenSet() const
{
    return m_predefinedRuleTypesHasBeenSet;
}

vector<AIGWCustomDesensitizeRule> AIGWLogDesensitizeConfig::GetCustomRules() const
{
    return m_customRules;
}

void AIGWLogDesensitizeConfig::SetCustomRules(const vector<AIGWCustomDesensitizeRule>& _customRules)
{
    m_customRules = _customRules;
    m_customRulesHasBeenSet = true;
}

bool AIGWLogDesensitizeConfig::CustomRulesHasBeenSet() const
{
    return m_customRulesHasBeenSet;
}

vector<string> AIGWLogDesensitizeConfig::GetScope() const
{
    return m_scope;
}

void AIGWLogDesensitizeConfig::SetScope(const vector<string>& _scope)
{
    m_scope = _scope;
    m_scopeHasBeenSet = true;
}

bool AIGWLogDesensitizeConfig::ScopeHasBeenSet() const
{
    return m_scopeHasBeenSet;
}

