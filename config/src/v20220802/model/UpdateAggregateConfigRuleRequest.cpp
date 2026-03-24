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

#include <tencentcloud/config/v20220802/model/UpdateAggregateConfigRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Config::V20220802::Model;
using namespace std;

UpdateAggregateConfigRuleRequest::UpdateAggregateConfigRuleRequest() :
    m_triggerTypeHasBeenSet(false),
    m_riskLevelHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_accountGroupIdHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_inputParameterHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_regionScopeHasBeenSet(false),
    m_tagsScopeHasBeenSet(false),
    m_excludeResourceIdsScopeHasBeenSet(false)
{
}

string UpdateAggregateConfigRuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_triggerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_triggerType.begin(); itr != m_triggerType.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_riskLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_riskLevel, allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }

    if (m_accountGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accountGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_inputParameterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputParameter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_inputParameter.begin(); itr != m_inputParameter.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_regionScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionScope";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_regionScope.begin(); itr != m_regionScope.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_tagsScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagsScope";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagsScope.begin(); itr != m_tagsScope.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_excludeResourceIdsScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExcludeResourceIdsScope";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_excludeResourceIdsScope.begin(); itr != m_excludeResourceIdsScope.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<TriggerType> UpdateAggregateConfigRuleRequest::GetTriggerType() const
{
    return m_triggerType;
}

void UpdateAggregateConfigRuleRequest::SetTriggerType(const vector<TriggerType>& _triggerType)
{
    m_triggerType = _triggerType;
    m_triggerTypeHasBeenSet = true;
}

bool UpdateAggregateConfigRuleRequest::TriggerTypeHasBeenSet() const
{
    return m_triggerTypeHasBeenSet;
}

uint64_t UpdateAggregateConfigRuleRequest::GetRiskLevel() const
{
    return m_riskLevel;
}

void UpdateAggregateConfigRuleRequest::SetRiskLevel(const uint64_t& _riskLevel)
{
    m_riskLevel = _riskLevel;
    m_riskLevelHasBeenSet = true;
}

bool UpdateAggregateConfigRuleRequest::RiskLevelHasBeenSet() const
{
    return m_riskLevelHasBeenSet;
}

string UpdateAggregateConfigRuleRequest::GetRuleId() const
{
    return m_ruleId;
}

void UpdateAggregateConfigRuleRequest::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool UpdateAggregateConfigRuleRequest::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string UpdateAggregateConfigRuleRequest::GetAccountGroupId() const
{
    return m_accountGroupId;
}

void UpdateAggregateConfigRuleRequest::SetAccountGroupId(const string& _accountGroupId)
{
    m_accountGroupId = _accountGroupId;
    m_accountGroupIdHasBeenSet = true;
}

bool UpdateAggregateConfigRuleRequest::AccountGroupIdHasBeenSet() const
{
    return m_accountGroupIdHasBeenSet;
}

string UpdateAggregateConfigRuleRequest::GetRuleName() const
{
    return m_ruleName;
}

void UpdateAggregateConfigRuleRequest::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool UpdateAggregateConfigRuleRequest::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

vector<InputParameter> UpdateAggregateConfigRuleRequest::GetInputParameter() const
{
    return m_inputParameter;
}

void UpdateAggregateConfigRuleRequest::SetInputParameter(const vector<InputParameter>& _inputParameter)
{
    m_inputParameter = _inputParameter;
    m_inputParameterHasBeenSet = true;
}

bool UpdateAggregateConfigRuleRequest::InputParameterHasBeenSet() const
{
    return m_inputParameterHasBeenSet;
}

string UpdateAggregateConfigRuleRequest::GetDescription() const
{
    return m_description;
}

void UpdateAggregateConfigRuleRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool UpdateAggregateConfigRuleRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<string> UpdateAggregateConfigRuleRequest::GetRegionScope() const
{
    return m_regionScope;
}

void UpdateAggregateConfigRuleRequest::SetRegionScope(const vector<string>& _regionScope)
{
    m_regionScope = _regionScope;
    m_regionScopeHasBeenSet = true;
}

bool UpdateAggregateConfigRuleRequest::RegionScopeHasBeenSet() const
{
    return m_regionScopeHasBeenSet;
}

vector<Tag> UpdateAggregateConfigRuleRequest::GetTagsScope() const
{
    return m_tagsScope;
}

void UpdateAggregateConfigRuleRequest::SetTagsScope(const vector<Tag>& _tagsScope)
{
    m_tagsScope = _tagsScope;
    m_tagsScopeHasBeenSet = true;
}

bool UpdateAggregateConfigRuleRequest::TagsScopeHasBeenSet() const
{
    return m_tagsScopeHasBeenSet;
}

vector<string> UpdateAggregateConfigRuleRequest::GetExcludeResourceIdsScope() const
{
    return m_excludeResourceIdsScope;
}

void UpdateAggregateConfigRuleRequest::SetExcludeResourceIdsScope(const vector<string>& _excludeResourceIdsScope)
{
    m_excludeResourceIdsScope = _excludeResourceIdsScope;
    m_excludeResourceIdsScopeHasBeenSet = true;
}

bool UpdateAggregateConfigRuleRequest::ExcludeResourceIdsScopeHasBeenSet() const
{
    return m_excludeResourceIdsScopeHasBeenSet;
}


