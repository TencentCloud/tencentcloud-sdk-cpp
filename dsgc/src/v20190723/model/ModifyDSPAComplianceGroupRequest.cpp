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

#include <tencentcloud/dsgc/v20190723/model/ModifyDSPAComplianceGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

ModifyDSPAComplianceGroupRequest::ModifyDSPAComplianceGroupRequest() :
    m_dspaIdHasBeenSet(false),
    m_complianceGroupIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_complianceGroupRulesHasBeenSet(false),
    m_levelGroupIdHasBeenSet(false),
    m_ruleAliasHasBeenSet(false)
{
}

string ModifyDSPAComplianceGroupRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dspaIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DspaId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dspaId.c_str(), allocator).Move(), allocator);
    }

    if (m_complianceGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComplianceGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_complianceGroupId, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_complianceGroupRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComplianceGroupRules";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_complianceGroupRules.begin(); itr != m_complianceGroupRules.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_levelGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LevelGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_levelGroupId, allocator);
    }

    if (m_ruleAliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleAlias";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ruleAlias, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyDSPAComplianceGroupRequest::GetDspaId() const
{
    return m_dspaId;
}

void ModifyDSPAComplianceGroupRequest::SetDspaId(const string& _dspaId)
{
    m_dspaId = _dspaId;
    m_dspaIdHasBeenSet = true;
}

bool ModifyDSPAComplianceGroupRequest::DspaIdHasBeenSet() const
{
    return m_dspaIdHasBeenSet;
}

int64_t ModifyDSPAComplianceGroupRequest::GetComplianceGroupId() const
{
    return m_complianceGroupId;
}

void ModifyDSPAComplianceGroupRequest::SetComplianceGroupId(const int64_t& _complianceGroupId)
{
    m_complianceGroupId = _complianceGroupId;
    m_complianceGroupIdHasBeenSet = true;
}

bool ModifyDSPAComplianceGroupRequest::ComplianceGroupIdHasBeenSet() const
{
    return m_complianceGroupIdHasBeenSet;
}

string ModifyDSPAComplianceGroupRequest::GetName() const
{
    return m_name;
}

void ModifyDSPAComplianceGroupRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyDSPAComplianceGroupRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyDSPAComplianceGroupRequest::GetDescription() const
{
    return m_description;
}

void ModifyDSPAComplianceGroupRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifyDSPAComplianceGroupRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<ComplianceGroupRuleIdInfo> ModifyDSPAComplianceGroupRequest::GetComplianceGroupRules() const
{
    return m_complianceGroupRules;
}

void ModifyDSPAComplianceGroupRequest::SetComplianceGroupRules(const vector<ComplianceGroupRuleIdInfo>& _complianceGroupRules)
{
    m_complianceGroupRules = _complianceGroupRules;
    m_complianceGroupRulesHasBeenSet = true;
}

bool ModifyDSPAComplianceGroupRequest::ComplianceGroupRulesHasBeenSet() const
{
    return m_complianceGroupRulesHasBeenSet;
}

uint64_t ModifyDSPAComplianceGroupRequest::GetLevelGroupId() const
{
    return m_levelGroupId;
}

void ModifyDSPAComplianceGroupRequest::SetLevelGroupId(const uint64_t& _levelGroupId)
{
    m_levelGroupId = _levelGroupId;
    m_levelGroupIdHasBeenSet = true;
}

bool ModifyDSPAComplianceGroupRequest::LevelGroupIdHasBeenSet() const
{
    return m_levelGroupIdHasBeenSet;
}

bool ModifyDSPAComplianceGroupRequest::GetRuleAlias() const
{
    return m_ruleAlias;
}

void ModifyDSPAComplianceGroupRequest::SetRuleAlias(const bool& _ruleAlias)
{
    m_ruleAlias = _ruleAlias;
    m_ruleAliasHasBeenSet = true;
}

bool ModifyDSPAComplianceGroupRequest::RuleAliasHasBeenSet() const
{
    return m_ruleAliasHasBeenSet;
}


