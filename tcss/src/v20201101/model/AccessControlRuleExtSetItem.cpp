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

#include <tencentcloud/tcss/v20201101/model/AccessControlRuleExtSetItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

AccessControlRuleExtSetItem::AccessControlRuleExtSetItem() :
    m_childRulesHasBeenSet(false),
    m_editUserNameHasBeenSet(false),
    m_effectImageCountHasBeenSet(false),
    m_isDefaultHasBeenSet(false),
    m_isGlobalHasBeenSet(false),
    m_isEnableHasBeenSet(false),
    m_ruleActionsHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_systemChildRulesHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome AccessControlRuleExtSetItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ChildRules") && !value["ChildRules"].IsNull())
    {
        if (!value["ChildRules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AccessControlRuleExtSetItem.ChildRules` is not array type"));

        const rapidjson::Value &tmpValue = value["ChildRules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AccessControlChildRuleInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_childRules.push_back(item);
        }
        m_childRulesHasBeenSet = true;
    }

    if (value.HasMember("EditUserName") && !value["EditUserName"].IsNull())
    {
        if (!value["EditUserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessControlRuleExtSetItem.EditUserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_editUserName = string(value["EditUserName"].GetString());
        m_editUserNameHasBeenSet = true;
    }

    if (value.HasMember("EffectImageCount") && !value["EffectImageCount"].IsNull())
    {
        if (!value["EffectImageCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AccessControlRuleExtSetItem.EffectImageCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_effectImageCount = value["EffectImageCount"].GetUint64();
        m_effectImageCountHasBeenSet = true;
    }

    if (value.HasMember("IsDefault") && !value["IsDefault"].IsNull())
    {
        if (!value["IsDefault"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AccessControlRuleExtSetItem.IsDefault` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isDefault = value["IsDefault"].GetBool();
        m_isDefaultHasBeenSet = true;
    }

    if (value.HasMember("IsGlobal") && !value["IsGlobal"].IsNull())
    {
        if (!value["IsGlobal"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AccessControlRuleExtSetItem.IsGlobal` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isGlobal = value["IsGlobal"].GetBool();
        m_isGlobalHasBeenSet = true;
    }

    if (value.HasMember("IsEnable") && !value["IsEnable"].IsNull())
    {
        if (!value["IsEnable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AccessControlRuleExtSetItem.IsEnable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isEnable = value["IsEnable"].GetBool();
        m_isEnableHasBeenSet = true;
    }

    if (value.HasMember("RuleActions") && !value["RuleActions"].IsNull())
    {
        if (!value["RuleActions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AccessControlRuleExtSetItem.RuleActions` is not array type"));

        const rapidjson::Value &tmpValue = value["RuleActions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_ruleActions.push_back((*itr).GetString());
        }
        m_ruleActionsHasBeenSet = true;
    }

    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessControlRuleExtSetItem.RuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = string(value["RuleId"].GetString());
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessControlRuleExtSetItem.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("SystemChildRules") && !value["SystemChildRules"].IsNull())
    {
        if (!value["SystemChildRules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AccessControlRuleExtSetItem.SystemChildRules` is not array type"));

        const rapidjson::Value &tmpValue = value["SystemChildRules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AccessControlSystemChildRuleInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_systemChildRules.push_back(item);
        }
        m_systemChildRulesHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessControlRuleExtSetItem.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AccessControlRuleExtSetItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_childRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChildRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_childRules.begin(); itr != m_childRules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_editUserNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EditUserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_editUserName.c_str(), allocator).Move(), allocator);
    }

    if (m_effectImageCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EffectImageCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_effectImageCount, allocator);
    }

    if (m_isDefaultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDefault";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDefault, allocator);
    }

    if (m_isGlobalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsGlobal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isGlobal, allocator);
    }

    if (m_isEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isEnable, allocator);
    }

    if (m_ruleActionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleActions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ruleActions.begin(); itr != m_ruleActions.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

    if (m_systemChildRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SystemChildRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_systemChildRules.begin(); itr != m_systemChildRules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


vector<AccessControlChildRuleInfo> AccessControlRuleExtSetItem::GetChildRules() const
{
    return m_childRules;
}

void AccessControlRuleExtSetItem::SetChildRules(const vector<AccessControlChildRuleInfo>& _childRules)
{
    m_childRules = _childRules;
    m_childRulesHasBeenSet = true;
}

bool AccessControlRuleExtSetItem::ChildRulesHasBeenSet() const
{
    return m_childRulesHasBeenSet;
}

string AccessControlRuleExtSetItem::GetEditUserName() const
{
    return m_editUserName;
}

void AccessControlRuleExtSetItem::SetEditUserName(const string& _editUserName)
{
    m_editUserName = _editUserName;
    m_editUserNameHasBeenSet = true;
}

bool AccessControlRuleExtSetItem::EditUserNameHasBeenSet() const
{
    return m_editUserNameHasBeenSet;
}

uint64_t AccessControlRuleExtSetItem::GetEffectImageCount() const
{
    return m_effectImageCount;
}

void AccessControlRuleExtSetItem::SetEffectImageCount(const uint64_t& _effectImageCount)
{
    m_effectImageCount = _effectImageCount;
    m_effectImageCountHasBeenSet = true;
}

bool AccessControlRuleExtSetItem::EffectImageCountHasBeenSet() const
{
    return m_effectImageCountHasBeenSet;
}

bool AccessControlRuleExtSetItem::GetIsDefault() const
{
    return m_isDefault;
}

void AccessControlRuleExtSetItem::SetIsDefault(const bool& _isDefault)
{
    m_isDefault = _isDefault;
    m_isDefaultHasBeenSet = true;
}

bool AccessControlRuleExtSetItem::IsDefaultHasBeenSet() const
{
    return m_isDefaultHasBeenSet;
}

bool AccessControlRuleExtSetItem::GetIsGlobal() const
{
    return m_isGlobal;
}

void AccessControlRuleExtSetItem::SetIsGlobal(const bool& _isGlobal)
{
    m_isGlobal = _isGlobal;
    m_isGlobalHasBeenSet = true;
}

bool AccessControlRuleExtSetItem::IsGlobalHasBeenSet() const
{
    return m_isGlobalHasBeenSet;
}

bool AccessControlRuleExtSetItem::GetIsEnable() const
{
    return m_isEnable;
}

void AccessControlRuleExtSetItem::SetIsEnable(const bool& _isEnable)
{
    m_isEnable = _isEnable;
    m_isEnableHasBeenSet = true;
}

bool AccessControlRuleExtSetItem::IsEnableHasBeenSet() const
{
    return m_isEnableHasBeenSet;
}

vector<string> AccessControlRuleExtSetItem::GetRuleActions() const
{
    return m_ruleActions;
}

void AccessControlRuleExtSetItem::SetRuleActions(const vector<string>& _ruleActions)
{
    m_ruleActions = _ruleActions;
    m_ruleActionsHasBeenSet = true;
}

bool AccessControlRuleExtSetItem::RuleActionsHasBeenSet() const
{
    return m_ruleActionsHasBeenSet;
}

string AccessControlRuleExtSetItem::GetRuleId() const
{
    return m_ruleId;
}

void AccessControlRuleExtSetItem::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool AccessControlRuleExtSetItem::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string AccessControlRuleExtSetItem::GetRuleName() const
{
    return m_ruleName;
}

void AccessControlRuleExtSetItem::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool AccessControlRuleExtSetItem::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

vector<AccessControlSystemChildRuleInfo> AccessControlRuleExtSetItem::GetSystemChildRules() const
{
    return m_systemChildRules;
}

void AccessControlRuleExtSetItem::SetSystemChildRules(const vector<AccessControlSystemChildRuleInfo>& _systemChildRules)
{
    m_systemChildRules = _systemChildRules;
    m_systemChildRulesHasBeenSet = true;
}

bool AccessControlRuleExtSetItem::SystemChildRulesHasBeenSet() const
{
    return m_systemChildRulesHasBeenSet;
}

string AccessControlRuleExtSetItem::GetUpdateTime() const
{
    return m_updateTime;
}

void AccessControlRuleExtSetItem::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool AccessControlRuleExtSetItem::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

