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

#include <tencentcloud/csip/v20221121/model/CreateDspmRiskStrategyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

CreateDspmRiskStrategyRequest::CreateDspmRiskStrategyRequest() :
    m_nameHasBeenSet(false),
    m_ruleHasBeenSet(false),
    m_memberIdHasBeenSet(false),
    m_enNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_enDescriptionHasBeenSet(false),
    m_riskLevelHasBeenSet(false),
    m_isEnabledHasBeenSet(false),
    m_riskTypeHasBeenSet(false),
    m_strategyCategoryHasBeenSet(false)
{
}

string CreateDspmRiskStrategyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rule";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_rule.c_str(), allocator).Move(), allocator);
    }

    if (m_memberIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_memberId.begin(); itr != m_memberId.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_enNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_enName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_enDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnDescription";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_enDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_riskLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_riskLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_isEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsEnabled";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isEnabled, allocator);
    }

    if (m_riskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_riskType.c_str(), allocator).Move(), allocator);
    }

    if (m_strategyCategoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyCategory";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_strategyCategory.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateDspmRiskStrategyRequest::GetName() const
{
    return m_name;
}

void CreateDspmRiskStrategyRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateDspmRiskStrategyRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateDspmRiskStrategyRequest::GetRule() const
{
    return m_rule;
}

void CreateDspmRiskStrategyRequest::SetRule(const string& _rule)
{
    m_rule = _rule;
    m_ruleHasBeenSet = true;
}

bool CreateDspmRiskStrategyRequest::RuleHasBeenSet() const
{
    return m_ruleHasBeenSet;
}

vector<string> CreateDspmRiskStrategyRequest::GetMemberId() const
{
    return m_memberId;
}

void CreateDspmRiskStrategyRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool CreateDspmRiskStrategyRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

string CreateDspmRiskStrategyRequest::GetEnName() const
{
    return m_enName;
}

void CreateDspmRiskStrategyRequest::SetEnName(const string& _enName)
{
    m_enName = _enName;
    m_enNameHasBeenSet = true;
}

bool CreateDspmRiskStrategyRequest::EnNameHasBeenSet() const
{
    return m_enNameHasBeenSet;
}

string CreateDspmRiskStrategyRequest::GetDescription() const
{
    return m_description;
}

void CreateDspmRiskStrategyRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateDspmRiskStrategyRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string CreateDspmRiskStrategyRequest::GetEnDescription() const
{
    return m_enDescription;
}

void CreateDspmRiskStrategyRequest::SetEnDescription(const string& _enDescription)
{
    m_enDescription = _enDescription;
    m_enDescriptionHasBeenSet = true;
}

bool CreateDspmRiskStrategyRequest::EnDescriptionHasBeenSet() const
{
    return m_enDescriptionHasBeenSet;
}

string CreateDspmRiskStrategyRequest::GetRiskLevel() const
{
    return m_riskLevel;
}

void CreateDspmRiskStrategyRequest::SetRiskLevel(const string& _riskLevel)
{
    m_riskLevel = _riskLevel;
    m_riskLevelHasBeenSet = true;
}

bool CreateDspmRiskStrategyRequest::RiskLevelHasBeenSet() const
{
    return m_riskLevelHasBeenSet;
}

int64_t CreateDspmRiskStrategyRequest::GetIsEnabled() const
{
    return m_isEnabled;
}

void CreateDspmRiskStrategyRequest::SetIsEnabled(const int64_t& _isEnabled)
{
    m_isEnabled = _isEnabled;
    m_isEnabledHasBeenSet = true;
}

bool CreateDspmRiskStrategyRequest::IsEnabledHasBeenSet() const
{
    return m_isEnabledHasBeenSet;
}

string CreateDspmRiskStrategyRequest::GetRiskType() const
{
    return m_riskType;
}

void CreateDspmRiskStrategyRequest::SetRiskType(const string& _riskType)
{
    m_riskType = _riskType;
    m_riskTypeHasBeenSet = true;
}

bool CreateDspmRiskStrategyRequest::RiskTypeHasBeenSet() const
{
    return m_riskTypeHasBeenSet;
}

string CreateDspmRiskStrategyRequest::GetStrategyCategory() const
{
    return m_strategyCategory;
}

void CreateDspmRiskStrategyRequest::SetStrategyCategory(const string& _strategyCategory)
{
    m_strategyCategory = _strategyCategory;
    m_strategyCategoryHasBeenSet = true;
}

bool CreateDspmRiskStrategyRequest::StrategyCategoryHasBeenSet() const
{
    return m_strategyCategoryHasBeenSet;
}


