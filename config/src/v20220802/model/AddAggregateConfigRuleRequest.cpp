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

#include <tencentcloud/config/v20220802/model/AddAggregateConfigRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Config::V20220802::Model;
using namespace std;

AddAggregateConfigRuleRequest::AddAggregateConfigRuleRequest() :
    m_identifierHasBeenSet(false),
    m_identifierTypeHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_triggerTypeHasBeenSet(false),
    m_riskLevelHasBeenSet(false),
    m_accountGroupIdHasBeenSet(false),
    m_inputParameterHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_regionScopeHasBeenSet(false),
    m_tagsScopeHasBeenSet(false),
    m_excludeResourceIdsScopeHasBeenSet(false)
{
}

string AddAggregateConfigRuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_identifierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Identifier";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_identifier.c_str(), allocator).Move(), allocator);
    }

    if (m_identifierTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentifierType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_identifierType.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_resourceType.begin(); itr != m_resourceType.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

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

    if (m_accountGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accountGroupId.c_str(), allocator).Move(), allocator);
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


string AddAggregateConfigRuleRequest::GetIdentifier() const
{
    return m_identifier;
}

void AddAggregateConfigRuleRequest::SetIdentifier(const string& _identifier)
{
    m_identifier = _identifier;
    m_identifierHasBeenSet = true;
}

bool AddAggregateConfigRuleRequest::IdentifierHasBeenSet() const
{
    return m_identifierHasBeenSet;
}

string AddAggregateConfigRuleRequest::GetIdentifierType() const
{
    return m_identifierType;
}

void AddAggregateConfigRuleRequest::SetIdentifierType(const string& _identifierType)
{
    m_identifierType = _identifierType;
    m_identifierTypeHasBeenSet = true;
}

bool AddAggregateConfigRuleRequest::IdentifierTypeHasBeenSet() const
{
    return m_identifierTypeHasBeenSet;
}

string AddAggregateConfigRuleRequest::GetRuleName() const
{
    return m_ruleName;
}

void AddAggregateConfigRuleRequest::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool AddAggregateConfigRuleRequest::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

vector<string> AddAggregateConfigRuleRequest::GetResourceType() const
{
    return m_resourceType;
}

void AddAggregateConfigRuleRequest::SetResourceType(const vector<string>& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool AddAggregateConfigRuleRequest::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

vector<TriggerType> AddAggregateConfigRuleRequest::GetTriggerType() const
{
    return m_triggerType;
}

void AddAggregateConfigRuleRequest::SetTriggerType(const vector<TriggerType>& _triggerType)
{
    m_triggerType = _triggerType;
    m_triggerTypeHasBeenSet = true;
}

bool AddAggregateConfigRuleRequest::TriggerTypeHasBeenSet() const
{
    return m_triggerTypeHasBeenSet;
}

uint64_t AddAggregateConfigRuleRequest::GetRiskLevel() const
{
    return m_riskLevel;
}

void AddAggregateConfigRuleRequest::SetRiskLevel(const uint64_t& _riskLevel)
{
    m_riskLevel = _riskLevel;
    m_riskLevelHasBeenSet = true;
}

bool AddAggregateConfigRuleRequest::RiskLevelHasBeenSet() const
{
    return m_riskLevelHasBeenSet;
}

string AddAggregateConfigRuleRequest::GetAccountGroupId() const
{
    return m_accountGroupId;
}

void AddAggregateConfigRuleRequest::SetAccountGroupId(const string& _accountGroupId)
{
    m_accountGroupId = _accountGroupId;
    m_accountGroupIdHasBeenSet = true;
}

bool AddAggregateConfigRuleRequest::AccountGroupIdHasBeenSet() const
{
    return m_accountGroupIdHasBeenSet;
}

vector<InputParameter> AddAggregateConfigRuleRequest::GetInputParameter() const
{
    return m_inputParameter;
}

void AddAggregateConfigRuleRequest::SetInputParameter(const vector<InputParameter>& _inputParameter)
{
    m_inputParameter = _inputParameter;
    m_inputParameterHasBeenSet = true;
}

bool AddAggregateConfigRuleRequest::InputParameterHasBeenSet() const
{
    return m_inputParameterHasBeenSet;
}

string AddAggregateConfigRuleRequest::GetDescription() const
{
    return m_description;
}

void AddAggregateConfigRuleRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool AddAggregateConfigRuleRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<string> AddAggregateConfigRuleRequest::GetRegionScope() const
{
    return m_regionScope;
}

void AddAggregateConfigRuleRequest::SetRegionScope(const vector<string>& _regionScope)
{
    m_regionScope = _regionScope;
    m_regionScopeHasBeenSet = true;
}

bool AddAggregateConfigRuleRequest::RegionScopeHasBeenSet() const
{
    return m_regionScopeHasBeenSet;
}

vector<Tag> AddAggregateConfigRuleRequest::GetTagsScope() const
{
    return m_tagsScope;
}

void AddAggregateConfigRuleRequest::SetTagsScope(const vector<Tag>& _tagsScope)
{
    m_tagsScope = _tagsScope;
    m_tagsScopeHasBeenSet = true;
}

bool AddAggregateConfigRuleRequest::TagsScopeHasBeenSet() const
{
    return m_tagsScopeHasBeenSet;
}

vector<string> AddAggregateConfigRuleRequest::GetExcludeResourceIdsScope() const
{
    return m_excludeResourceIdsScope;
}

void AddAggregateConfigRuleRequest::SetExcludeResourceIdsScope(const vector<string>& _excludeResourceIdsScope)
{
    m_excludeResourceIdsScope = _excludeResourceIdsScope;
    m_excludeResourceIdsScopeHasBeenSet = true;
}

bool AddAggregateConfigRuleRequest::ExcludeResourceIdsScopeHasBeenSet() const
{
    return m_excludeResourceIdsScopeHasBeenSet;
}


