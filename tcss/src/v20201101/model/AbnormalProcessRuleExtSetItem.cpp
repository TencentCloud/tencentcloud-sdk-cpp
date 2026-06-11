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

#include <tencentcloud/tcss/v20201101/model/AbnormalProcessRuleExtSetItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

AbnormalProcessRuleExtSetItem::AbnormalProcessRuleExtSetItem() :
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

CoreInternalOutcome AbnormalProcessRuleExtSetItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ChildRules") && !value["ChildRules"].IsNull())
    {
        if (!value["ChildRules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AbnormalProcessRuleExtSetItem.ChildRules` is not array type"));

        const rapidjson::Value &tmpValue = value["ChildRules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AbnormalProcessChildRuleInfo item;
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
            return CoreInternalOutcome(Core::Error("response `AbnormalProcessRuleExtSetItem.EditUserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_editUserName = string(value["EditUserName"].GetString());
        m_editUserNameHasBeenSet = true;
    }

    if (value.HasMember("EffectImageCount") && !value["EffectImageCount"].IsNull())
    {
        if (!value["EffectImageCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalProcessRuleExtSetItem.EffectImageCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_effectImageCount = value["EffectImageCount"].GetUint64();
        m_effectImageCountHasBeenSet = true;
    }

    if (value.HasMember("IsDefault") && !value["IsDefault"].IsNull())
    {
        if (!value["IsDefault"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalProcessRuleExtSetItem.IsDefault` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isDefault = value["IsDefault"].GetBool();
        m_isDefaultHasBeenSet = true;
    }

    if (value.HasMember("IsGlobal") && !value["IsGlobal"].IsNull())
    {
        if (!value["IsGlobal"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalProcessRuleExtSetItem.IsGlobal` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isGlobal = value["IsGlobal"].GetBool();
        m_isGlobalHasBeenSet = true;
    }

    if (value.HasMember("IsEnable") && !value["IsEnable"].IsNull())
    {
        if (!value["IsEnable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalProcessRuleExtSetItem.IsEnable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isEnable = value["IsEnable"].GetBool();
        m_isEnableHasBeenSet = true;
    }

    if (value.HasMember("RuleActions") && !value["RuleActions"].IsNull())
    {
        if (!value["RuleActions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AbnormalProcessRuleExtSetItem.RuleActions` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `AbnormalProcessRuleExtSetItem.RuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = string(value["RuleId"].GetString());
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalProcessRuleExtSetItem.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("SystemChildRules") && !value["SystemChildRules"].IsNull())
    {
        if (!value["SystemChildRules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AbnormalProcessRuleExtSetItem.SystemChildRules` is not array type"));

        const rapidjson::Value &tmpValue = value["SystemChildRules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AbnormalProcessSystemChildRuleInfo item;
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
            return CoreInternalOutcome(Core::Error("response `AbnormalProcessRuleExtSetItem.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AbnormalProcessRuleExtSetItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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


vector<AbnormalProcessChildRuleInfo> AbnormalProcessRuleExtSetItem::GetChildRules() const
{
    return m_childRules;
}

void AbnormalProcessRuleExtSetItem::SetChildRules(const vector<AbnormalProcessChildRuleInfo>& _childRules)
{
    m_childRules = _childRules;
    m_childRulesHasBeenSet = true;
}

bool AbnormalProcessRuleExtSetItem::ChildRulesHasBeenSet() const
{
    return m_childRulesHasBeenSet;
}

string AbnormalProcessRuleExtSetItem::GetEditUserName() const
{
    return m_editUserName;
}

void AbnormalProcessRuleExtSetItem::SetEditUserName(const string& _editUserName)
{
    m_editUserName = _editUserName;
    m_editUserNameHasBeenSet = true;
}

bool AbnormalProcessRuleExtSetItem::EditUserNameHasBeenSet() const
{
    return m_editUserNameHasBeenSet;
}

uint64_t AbnormalProcessRuleExtSetItem::GetEffectImageCount() const
{
    return m_effectImageCount;
}

void AbnormalProcessRuleExtSetItem::SetEffectImageCount(const uint64_t& _effectImageCount)
{
    m_effectImageCount = _effectImageCount;
    m_effectImageCountHasBeenSet = true;
}

bool AbnormalProcessRuleExtSetItem::EffectImageCountHasBeenSet() const
{
    return m_effectImageCountHasBeenSet;
}

bool AbnormalProcessRuleExtSetItem::GetIsDefault() const
{
    return m_isDefault;
}

void AbnormalProcessRuleExtSetItem::SetIsDefault(const bool& _isDefault)
{
    m_isDefault = _isDefault;
    m_isDefaultHasBeenSet = true;
}

bool AbnormalProcessRuleExtSetItem::IsDefaultHasBeenSet() const
{
    return m_isDefaultHasBeenSet;
}

bool AbnormalProcessRuleExtSetItem::GetIsGlobal() const
{
    return m_isGlobal;
}

void AbnormalProcessRuleExtSetItem::SetIsGlobal(const bool& _isGlobal)
{
    m_isGlobal = _isGlobal;
    m_isGlobalHasBeenSet = true;
}

bool AbnormalProcessRuleExtSetItem::IsGlobalHasBeenSet() const
{
    return m_isGlobalHasBeenSet;
}

bool AbnormalProcessRuleExtSetItem::GetIsEnable() const
{
    return m_isEnable;
}

void AbnormalProcessRuleExtSetItem::SetIsEnable(const bool& _isEnable)
{
    m_isEnable = _isEnable;
    m_isEnableHasBeenSet = true;
}

bool AbnormalProcessRuleExtSetItem::IsEnableHasBeenSet() const
{
    return m_isEnableHasBeenSet;
}

vector<string> AbnormalProcessRuleExtSetItem::GetRuleActions() const
{
    return m_ruleActions;
}

void AbnormalProcessRuleExtSetItem::SetRuleActions(const vector<string>& _ruleActions)
{
    m_ruleActions = _ruleActions;
    m_ruleActionsHasBeenSet = true;
}

bool AbnormalProcessRuleExtSetItem::RuleActionsHasBeenSet() const
{
    return m_ruleActionsHasBeenSet;
}

string AbnormalProcessRuleExtSetItem::GetRuleId() const
{
    return m_ruleId;
}

void AbnormalProcessRuleExtSetItem::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool AbnormalProcessRuleExtSetItem::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string AbnormalProcessRuleExtSetItem::GetRuleName() const
{
    return m_ruleName;
}

void AbnormalProcessRuleExtSetItem::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool AbnormalProcessRuleExtSetItem::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

vector<AbnormalProcessSystemChildRuleInfo> AbnormalProcessRuleExtSetItem::GetSystemChildRules() const
{
    return m_systemChildRules;
}

void AbnormalProcessRuleExtSetItem::SetSystemChildRules(const vector<AbnormalProcessSystemChildRuleInfo>& _systemChildRules)
{
    m_systemChildRules = _systemChildRules;
    m_systemChildRulesHasBeenSet = true;
}

bool AbnormalProcessRuleExtSetItem::SystemChildRulesHasBeenSet() const
{
    return m_systemChildRulesHasBeenSet;
}

string AbnormalProcessRuleExtSetItem::GetUpdateTime() const
{
    return m_updateTime;
}

void AbnormalProcessRuleExtSetItem::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool AbnormalProcessRuleExtSetItem::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

