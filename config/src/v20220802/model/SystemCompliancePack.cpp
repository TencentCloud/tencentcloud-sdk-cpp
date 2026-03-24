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

#include <tencentcloud/config/v20220802/model/SystemCompliancePack.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Config::V20220802::Model;
using namespace std;

SystemCompliancePack::SystemCompliancePack() :
    m_compliancePackIdHasBeenSet(false),
    m_compliancePackNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_riskLevelHasBeenSet(false),
    m_configRulesHasBeenSet(false)
{
}

CoreInternalOutcome SystemCompliancePack::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CompliancePackId") && !value["CompliancePackId"].IsNull())
    {
        if (!value["CompliancePackId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SystemCompliancePack.CompliancePackId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_compliancePackId = string(value["CompliancePackId"].GetString());
        m_compliancePackIdHasBeenSet = true;
    }

    if (value.HasMember("CompliancePackName") && !value["CompliancePackName"].IsNull())
    {
        if (!value["CompliancePackName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SystemCompliancePack.CompliancePackName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_compliancePackName = string(value["CompliancePackName"].GetString());
        m_compliancePackNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SystemCompliancePack.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("RiskLevel") && !value["RiskLevel"].IsNull())
    {
        if (!value["RiskLevel"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SystemCompliancePack.RiskLevel` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_riskLevel = value["RiskLevel"].GetUint64();
        m_riskLevelHasBeenSet = true;
    }

    if (value.HasMember("ConfigRules") && !value["ConfigRules"].IsNull())
    {
        if (!value["ConfigRules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SystemCompliancePack.ConfigRules` is not array type"));

        const rapidjson::Value &tmpValue = value["ConfigRules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CompliancePackRuleForManage item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_configRules.push_back(item);
        }
        m_configRulesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SystemCompliancePack::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_compliancePackIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompliancePackId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_compliancePackId.c_str(), allocator).Move(), allocator);
    }

    if (m_compliancePackNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompliancePackName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_compliancePackName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_riskLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskLevel, allocator);
    }

    if (m_configRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_configRules.begin(); itr != m_configRules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string SystemCompliancePack::GetCompliancePackId() const
{
    return m_compliancePackId;
}

void SystemCompliancePack::SetCompliancePackId(const string& _compliancePackId)
{
    m_compliancePackId = _compliancePackId;
    m_compliancePackIdHasBeenSet = true;
}

bool SystemCompliancePack::CompliancePackIdHasBeenSet() const
{
    return m_compliancePackIdHasBeenSet;
}

string SystemCompliancePack::GetCompliancePackName() const
{
    return m_compliancePackName;
}

void SystemCompliancePack::SetCompliancePackName(const string& _compliancePackName)
{
    m_compliancePackName = _compliancePackName;
    m_compliancePackNameHasBeenSet = true;
}

bool SystemCompliancePack::CompliancePackNameHasBeenSet() const
{
    return m_compliancePackNameHasBeenSet;
}

string SystemCompliancePack::GetDescription() const
{
    return m_description;
}

void SystemCompliancePack::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool SystemCompliancePack::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

uint64_t SystemCompliancePack::GetRiskLevel() const
{
    return m_riskLevel;
}

void SystemCompliancePack::SetRiskLevel(const uint64_t& _riskLevel)
{
    m_riskLevel = _riskLevel;
    m_riskLevelHasBeenSet = true;
}

bool SystemCompliancePack::RiskLevelHasBeenSet() const
{
    return m_riskLevelHasBeenSet;
}

vector<CompliancePackRuleForManage> SystemCompliancePack::GetConfigRules() const
{
    return m_configRules;
}

void SystemCompliancePack::SetConfigRules(const vector<CompliancePackRuleForManage>& _configRules)
{
    m_configRules = _configRules;
    m_configRulesHasBeenSet = true;
}

bool SystemCompliancePack::ConfigRulesHasBeenSet() const
{
    return m_configRulesHasBeenSet;
}

