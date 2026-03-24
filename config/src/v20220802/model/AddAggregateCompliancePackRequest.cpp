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

#include <tencentcloud/config/v20220802/model/AddAggregateCompliancePackRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Config::V20220802::Model;
using namespace std;

AddAggregateCompliancePackRequest::AddAggregateCompliancePackRequest() :
    m_configRulesHasBeenSet(false),
    m_riskLevelHasBeenSet(false),
    m_compliancePackNameHasBeenSet(false),
    m_accountGroupIdHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

string AddAggregateCompliancePackRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_configRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigRules";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_configRules.begin(); itr != m_configRules.end(); ++itr, ++i)
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

    if (m_compliancePackNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompliancePackName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_compliancePackName.c_str(), allocator).Move(), allocator);
    }

    if (m_accountGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accountGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<CompliancePackRule> AddAggregateCompliancePackRequest::GetConfigRules() const
{
    return m_configRules;
}

void AddAggregateCompliancePackRequest::SetConfigRules(const vector<CompliancePackRule>& _configRules)
{
    m_configRules = _configRules;
    m_configRulesHasBeenSet = true;
}

bool AddAggregateCompliancePackRequest::ConfigRulesHasBeenSet() const
{
    return m_configRulesHasBeenSet;
}

uint64_t AddAggregateCompliancePackRequest::GetRiskLevel() const
{
    return m_riskLevel;
}

void AddAggregateCompliancePackRequest::SetRiskLevel(const uint64_t& _riskLevel)
{
    m_riskLevel = _riskLevel;
    m_riskLevelHasBeenSet = true;
}

bool AddAggregateCompliancePackRequest::RiskLevelHasBeenSet() const
{
    return m_riskLevelHasBeenSet;
}

string AddAggregateCompliancePackRequest::GetCompliancePackName() const
{
    return m_compliancePackName;
}

void AddAggregateCompliancePackRequest::SetCompliancePackName(const string& _compliancePackName)
{
    m_compliancePackName = _compliancePackName;
    m_compliancePackNameHasBeenSet = true;
}

bool AddAggregateCompliancePackRequest::CompliancePackNameHasBeenSet() const
{
    return m_compliancePackNameHasBeenSet;
}

string AddAggregateCompliancePackRequest::GetAccountGroupId() const
{
    return m_accountGroupId;
}

void AddAggregateCompliancePackRequest::SetAccountGroupId(const string& _accountGroupId)
{
    m_accountGroupId = _accountGroupId;
    m_accountGroupIdHasBeenSet = true;
}

bool AddAggregateCompliancePackRequest::AccountGroupIdHasBeenSet() const
{
    return m_accountGroupIdHasBeenSet;
}

string AddAggregateCompliancePackRequest::GetDescription() const
{
    return m_description;
}

void AddAggregateCompliancePackRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool AddAggregateCompliancePackRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}


