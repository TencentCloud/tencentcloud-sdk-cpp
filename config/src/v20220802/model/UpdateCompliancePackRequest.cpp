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

#include <tencentcloud/config/v20220802/model/UpdateCompliancePackRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Config::V20220802::Model;
using namespace std;

UpdateCompliancePackRequest::UpdateCompliancePackRequest() :
    m_compliancePackNameHasBeenSet(false),
    m_riskLevelHasBeenSet(false),
    m_compliancePackIdHasBeenSet(false),
    m_configRulesHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

string UpdateCompliancePackRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_compliancePackNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompliancePackName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_compliancePackName.c_str(), allocator).Move(), allocator);
    }

    if (m_riskLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_riskLevel, allocator);
    }

    if (m_compliancePackIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompliancePackId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_compliancePackId.c_str(), allocator).Move(), allocator);
    }

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


string UpdateCompliancePackRequest::GetCompliancePackName() const
{
    return m_compliancePackName;
}

void UpdateCompliancePackRequest::SetCompliancePackName(const string& _compliancePackName)
{
    m_compliancePackName = _compliancePackName;
    m_compliancePackNameHasBeenSet = true;
}

bool UpdateCompliancePackRequest::CompliancePackNameHasBeenSet() const
{
    return m_compliancePackNameHasBeenSet;
}

uint64_t UpdateCompliancePackRequest::GetRiskLevel() const
{
    return m_riskLevel;
}

void UpdateCompliancePackRequest::SetRiskLevel(const uint64_t& _riskLevel)
{
    m_riskLevel = _riskLevel;
    m_riskLevelHasBeenSet = true;
}

bool UpdateCompliancePackRequest::RiskLevelHasBeenSet() const
{
    return m_riskLevelHasBeenSet;
}

string UpdateCompliancePackRequest::GetCompliancePackId() const
{
    return m_compliancePackId;
}

void UpdateCompliancePackRequest::SetCompliancePackId(const string& _compliancePackId)
{
    m_compliancePackId = _compliancePackId;
    m_compliancePackIdHasBeenSet = true;
}

bool UpdateCompliancePackRequest::CompliancePackIdHasBeenSet() const
{
    return m_compliancePackIdHasBeenSet;
}

vector<CompliancePackRule> UpdateCompliancePackRequest::GetConfigRules() const
{
    return m_configRules;
}

void UpdateCompliancePackRequest::SetConfigRules(const vector<CompliancePackRule>& _configRules)
{
    m_configRules = _configRules;
    m_configRulesHasBeenSet = true;
}

bool UpdateCompliancePackRequest::ConfigRulesHasBeenSet() const
{
    return m_configRulesHasBeenSet;
}

string UpdateCompliancePackRequest::GetDescription() const
{
    return m_description;
}

void UpdateCompliancePackRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool UpdateCompliancePackRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}


