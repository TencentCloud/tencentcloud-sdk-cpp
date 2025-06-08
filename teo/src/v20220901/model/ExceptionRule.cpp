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

#include <tencentcloud/teo/v20220901/model/ExceptionRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

ExceptionRule::ExceptionRule() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_conditionHasBeenSet(false),
    m_skipScopeHasBeenSet(false),
    m_skipOptionHasBeenSet(false),
    m_webSecurityModulesForExceptionHasBeenSet(false),
    m_managedRulesForExceptionHasBeenSet(false),
    m_managedRuleGroupsForExceptionHasBeenSet(false),
    m_requestFieldsForExceptionHasBeenSet(false),
    m_enabledHasBeenSet(false)
{
}

CoreInternalOutcome ExceptionRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExceptionRule.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExceptionRule.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Condition") && !value["Condition"].IsNull())
    {
        if (!value["Condition"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExceptionRule.Condition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_condition = string(value["Condition"].GetString());
        m_conditionHasBeenSet = true;
    }

    if (value.HasMember("SkipScope") && !value["SkipScope"].IsNull())
    {
        if (!value["SkipScope"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExceptionRule.SkipScope` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_skipScope = string(value["SkipScope"].GetString());
        m_skipScopeHasBeenSet = true;
    }

    if (value.HasMember("SkipOption") && !value["SkipOption"].IsNull())
    {
        if (!value["SkipOption"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExceptionRule.SkipOption` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_skipOption = string(value["SkipOption"].GetString());
        m_skipOptionHasBeenSet = true;
    }

    if (value.HasMember("WebSecurityModulesForException") && !value["WebSecurityModulesForException"].IsNull())
    {
        if (!value["WebSecurityModulesForException"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ExceptionRule.WebSecurityModulesForException` is not array type"));

        const rapidjson::Value &tmpValue = value["WebSecurityModulesForException"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_webSecurityModulesForException.push_back((*itr).GetString());
        }
        m_webSecurityModulesForExceptionHasBeenSet = true;
    }

    if (value.HasMember("ManagedRulesForException") && !value["ManagedRulesForException"].IsNull())
    {
        if (!value["ManagedRulesForException"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ExceptionRule.ManagedRulesForException` is not array type"));

        const rapidjson::Value &tmpValue = value["ManagedRulesForException"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_managedRulesForException.push_back((*itr).GetString());
        }
        m_managedRulesForExceptionHasBeenSet = true;
    }

    if (value.HasMember("ManagedRuleGroupsForException") && !value["ManagedRuleGroupsForException"].IsNull())
    {
        if (!value["ManagedRuleGroupsForException"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ExceptionRule.ManagedRuleGroupsForException` is not array type"));

        const rapidjson::Value &tmpValue = value["ManagedRuleGroupsForException"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_managedRuleGroupsForException.push_back((*itr).GetString());
        }
        m_managedRuleGroupsForExceptionHasBeenSet = true;
    }

    if (value.HasMember("RequestFieldsForException") && !value["RequestFieldsForException"].IsNull())
    {
        if (!value["RequestFieldsForException"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ExceptionRule.RequestFieldsForException` is not array type"));

        const rapidjson::Value &tmpValue = value["RequestFieldsForException"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RequestFieldsForException item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_requestFieldsForException.push_back(item);
        }
        m_requestFieldsForExceptionHasBeenSet = true;
    }

    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExceptionRule.Enabled` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = string(value["Enabled"].GetString());
        m_enabledHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExceptionRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

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

    if (m_skipScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkipScope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_skipScope.c_str(), allocator).Move(), allocator);
    }

    if (m_skipOptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkipOption";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_skipOption.c_str(), allocator).Move(), allocator);
    }

    if (m_webSecurityModulesForExceptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebSecurityModulesForException";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_webSecurityModulesForException.begin(); itr != m_webSecurityModulesForException.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_managedRulesForExceptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManagedRulesForException";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_managedRulesForException.begin(); itr != m_managedRulesForException.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_managedRuleGroupsForExceptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManagedRuleGroupsForException";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_managedRuleGroupsForException.begin(); itr != m_managedRuleGroupsForException.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_requestFieldsForExceptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestFieldsForException";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_requestFieldsForException.begin(); itr != m_requestFieldsForException.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_enabled.c_str(), allocator).Move(), allocator);
    }

}


string ExceptionRule::GetId() const
{
    return m_id;
}

void ExceptionRule::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ExceptionRule::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ExceptionRule::GetName() const
{
    return m_name;
}

void ExceptionRule::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ExceptionRule::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ExceptionRule::GetCondition() const
{
    return m_condition;
}

void ExceptionRule::SetCondition(const string& _condition)
{
    m_condition = _condition;
    m_conditionHasBeenSet = true;
}

bool ExceptionRule::ConditionHasBeenSet() const
{
    return m_conditionHasBeenSet;
}

string ExceptionRule::GetSkipScope() const
{
    return m_skipScope;
}

void ExceptionRule::SetSkipScope(const string& _skipScope)
{
    m_skipScope = _skipScope;
    m_skipScopeHasBeenSet = true;
}

bool ExceptionRule::SkipScopeHasBeenSet() const
{
    return m_skipScopeHasBeenSet;
}

string ExceptionRule::GetSkipOption() const
{
    return m_skipOption;
}

void ExceptionRule::SetSkipOption(const string& _skipOption)
{
    m_skipOption = _skipOption;
    m_skipOptionHasBeenSet = true;
}

bool ExceptionRule::SkipOptionHasBeenSet() const
{
    return m_skipOptionHasBeenSet;
}

vector<string> ExceptionRule::GetWebSecurityModulesForException() const
{
    return m_webSecurityModulesForException;
}

void ExceptionRule::SetWebSecurityModulesForException(const vector<string>& _webSecurityModulesForException)
{
    m_webSecurityModulesForException = _webSecurityModulesForException;
    m_webSecurityModulesForExceptionHasBeenSet = true;
}

bool ExceptionRule::WebSecurityModulesForExceptionHasBeenSet() const
{
    return m_webSecurityModulesForExceptionHasBeenSet;
}

vector<string> ExceptionRule::GetManagedRulesForException() const
{
    return m_managedRulesForException;
}

void ExceptionRule::SetManagedRulesForException(const vector<string>& _managedRulesForException)
{
    m_managedRulesForException = _managedRulesForException;
    m_managedRulesForExceptionHasBeenSet = true;
}

bool ExceptionRule::ManagedRulesForExceptionHasBeenSet() const
{
    return m_managedRulesForExceptionHasBeenSet;
}

vector<string> ExceptionRule::GetManagedRuleGroupsForException() const
{
    return m_managedRuleGroupsForException;
}

void ExceptionRule::SetManagedRuleGroupsForException(const vector<string>& _managedRuleGroupsForException)
{
    m_managedRuleGroupsForException = _managedRuleGroupsForException;
    m_managedRuleGroupsForExceptionHasBeenSet = true;
}

bool ExceptionRule::ManagedRuleGroupsForExceptionHasBeenSet() const
{
    return m_managedRuleGroupsForExceptionHasBeenSet;
}

vector<RequestFieldsForException> ExceptionRule::GetRequestFieldsForException() const
{
    return m_requestFieldsForException;
}

void ExceptionRule::SetRequestFieldsForException(const vector<RequestFieldsForException>& _requestFieldsForException)
{
    m_requestFieldsForException = _requestFieldsForException;
    m_requestFieldsForExceptionHasBeenSet = true;
}

bool ExceptionRule::RequestFieldsForExceptionHasBeenSet() const
{
    return m_requestFieldsForExceptionHasBeenSet;
}

string ExceptionRule::GetEnabled() const
{
    return m_enabled;
}

void ExceptionRule::SetEnabled(const string& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool ExceptionRule::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

