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

#include <tencentcloud/dbbrain/v20210527/model/ModifyAlarmPolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

ModifyAlarmPolicyRequest::ModifyAlarmPolicyRequest() :
    m_applyTypeHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_instanceIdsHasBeenSet(false),
    m_newProfileLevelHasBeenSet(false),
    m_newProfileNameHasBeenSet(false),
    m_profileNameHasBeenSet(false),
    m_profileTypeHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_ruleTypeHasBeenSet(false),
    m_templateInfoHasBeenSet(false),
    m_quickRuleHasBeenSet(false),
    m_rulesHasBeenSet(false)
{
}

string ModifyAlarmPolicyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_applyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplyType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applyType.c_str(), allocator).Move(), allocator);
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enable, allocator);
    }

    if (m_instanceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_instanceIds.begin(); itr != m_instanceIds.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_newProfileLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewProfileLevel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_newProfileLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_newProfileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewProfileName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_newProfileName.c_str(), allocator).Move(), allocator);
    }

    if (m_profileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProfileName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_profileName.c_str(), allocator).Move(), allocator);
    }

    if (m_profileTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProfileType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_profileType.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ruleType, allocator);
    }

    if (m_templateInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_templateInfo.begin(); itr != m_templateInfo.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_quickRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuickRule";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_quickRule.c_str(), allocator).Move(), allocator);
    }

    if (m_rulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rules";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_rules.begin(); itr != m_rules.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyAlarmPolicyRequest::GetApplyType() const
{
    return m_applyType;
}

void ModifyAlarmPolicyRequest::SetApplyType(const string& _applyType)
{
    m_applyType = _applyType;
    m_applyTypeHasBeenSet = true;
}

bool ModifyAlarmPolicyRequest::ApplyTypeHasBeenSet() const
{
    return m_applyTypeHasBeenSet;
}

int64_t ModifyAlarmPolicyRequest::GetEnable() const
{
    return m_enable;
}

void ModifyAlarmPolicyRequest::SetEnable(const int64_t& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool ModifyAlarmPolicyRequest::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

vector<InstanceID> ModifyAlarmPolicyRequest::GetInstanceIds() const
{
    return m_instanceIds;
}

void ModifyAlarmPolicyRequest::SetInstanceIds(const vector<InstanceID>& _instanceIds)
{
    m_instanceIds = _instanceIds;
    m_instanceIdsHasBeenSet = true;
}

bool ModifyAlarmPolicyRequest::InstanceIdsHasBeenSet() const
{
    return m_instanceIdsHasBeenSet;
}

string ModifyAlarmPolicyRequest::GetNewProfileLevel() const
{
    return m_newProfileLevel;
}

void ModifyAlarmPolicyRequest::SetNewProfileLevel(const string& _newProfileLevel)
{
    m_newProfileLevel = _newProfileLevel;
    m_newProfileLevelHasBeenSet = true;
}

bool ModifyAlarmPolicyRequest::NewProfileLevelHasBeenSet() const
{
    return m_newProfileLevelHasBeenSet;
}

string ModifyAlarmPolicyRequest::GetNewProfileName() const
{
    return m_newProfileName;
}

void ModifyAlarmPolicyRequest::SetNewProfileName(const string& _newProfileName)
{
    m_newProfileName = _newProfileName;
    m_newProfileNameHasBeenSet = true;
}

bool ModifyAlarmPolicyRequest::NewProfileNameHasBeenSet() const
{
    return m_newProfileNameHasBeenSet;
}

string ModifyAlarmPolicyRequest::GetProfileName() const
{
    return m_profileName;
}

void ModifyAlarmPolicyRequest::SetProfileName(const string& _profileName)
{
    m_profileName = _profileName;
    m_profileNameHasBeenSet = true;
}

bool ModifyAlarmPolicyRequest::ProfileNameHasBeenSet() const
{
    return m_profileNameHasBeenSet;
}

string ModifyAlarmPolicyRequest::GetProfileType() const
{
    return m_profileType;
}

void ModifyAlarmPolicyRequest::SetProfileType(const string& _profileType)
{
    m_profileType = _profileType;
    m_profileTypeHasBeenSet = true;
}

bool ModifyAlarmPolicyRequest::ProfileTypeHasBeenSet() const
{
    return m_profileTypeHasBeenSet;
}

string ModifyAlarmPolicyRequest::GetRemark() const
{
    return m_remark;
}

void ModifyAlarmPolicyRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool ModifyAlarmPolicyRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

int64_t ModifyAlarmPolicyRequest::GetRuleType() const
{
    return m_ruleType;
}

void ModifyAlarmPolicyRequest::SetRuleType(const int64_t& _ruleType)
{
    m_ruleType = _ruleType;
    m_ruleTypeHasBeenSet = true;
}

bool ModifyAlarmPolicyRequest::RuleTypeHasBeenSet() const
{
    return m_ruleTypeHasBeenSet;
}

vector<TemplateInfo> ModifyAlarmPolicyRequest::GetTemplateInfo() const
{
    return m_templateInfo;
}

void ModifyAlarmPolicyRequest::SetTemplateInfo(const vector<TemplateInfo>& _templateInfo)
{
    m_templateInfo = _templateInfo;
    m_templateInfoHasBeenSet = true;
}

bool ModifyAlarmPolicyRequest::TemplateInfoHasBeenSet() const
{
    return m_templateInfoHasBeenSet;
}

string ModifyAlarmPolicyRequest::GetQuickRule() const
{
    return m_quickRule;
}

void ModifyAlarmPolicyRequest::SetQuickRule(const string& _quickRule)
{
    m_quickRule = _quickRule;
    m_quickRuleHasBeenSet = true;
}

bool ModifyAlarmPolicyRequest::QuickRuleHasBeenSet() const
{
    return m_quickRuleHasBeenSet;
}

vector<AlarmsRules> ModifyAlarmPolicyRequest::GetRules() const
{
    return m_rules;
}

void ModifyAlarmPolicyRequest::SetRules(const vector<AlarmsRules>& _rules)
{
    m_rules = _rules;
    m_rulesHasBeenSet = true;
}

bool ModifyAlarmPolicyRequest::RulesHasBeenSet() const
{
    return m_rulesHasBeenSet;
}


