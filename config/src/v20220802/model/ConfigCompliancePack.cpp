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

#include <tencentcloud/config/v20220802/model/ConfigCompliancePack.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Config::V20220802::Model;
using namespace std;

ConfigCompliancePack::ConfigCompliancePack() :
    m_statusHasBeenSet(false),
    m_compliancePackIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_compliancePackNameHasBeenSet(false),
    m_riskLevelHasBeenSet(false),
    m_complianceResultHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_noCompliantNamesHasBeenSet(false),
    m_ruleCountHasBeenSet(false)
{
}

CoreInternalOutcome ConfigCompliancePack::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigCompliancePack.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CompliancePackId") && !value["CompliancePackId"].IsNull())
    {
        if (!value["CompliancePackId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigCompliancePack.CompliancePackId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_compliancePackId = string(value["CompliancePackId"].GetString());
        m_compliancePackIdHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigCompliancePack.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("CompliancePackName") && !value["CompliancePackName"].IsNull())
    {
        if (!value["CompliancePackName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigCompliancePack.CompliancePackName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_compliancePackName = string(value["CompliancePackName"].GetString());
        m_compliancePackNameHasBeenSet = true;
    }

    if (value.HasMember("RiskLevel") && !value["RiskLevel"].IsNull())
    {
        if (!value["RiskLevel"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigCompliancePack.RiskLevel` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_riskLevel = value["RiskLevel"].GetUint64();
        m_riskLevelHasBeenSet = true;
    }

    if (value.HasMember("ComplianceResult") && !value["ComplianceResult"].IsNull())
    {
        if (!value["ComplianceResult"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigCompliancePack.ComplianceResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_complianceResult = string(value["ComplianceResult"].GetString());
        m_complianceResultHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigCompliancePack.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("NoCompliantNames") && !value["NoCompliantNames"].IsNull())
    {
        if (!value["NoCompliantNames"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ConfigCompliancePack.NoCompliantNames` is not array type"));

        const rapidjson::Value &tmpValue = value["NoCompliantNames"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_noCompliantNames.push_back((*itr).GetString());
        }
        m_noCompliantNamesHasBeenSet = true;
    }

    if (value.HasMember("RuleCount") && !value["RuleCount"].IsNull())
    {
        if (!value["RuleCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigCompliancePack.RuleCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleCount = value["RuleCount"].GetUint64();
        m_ruleCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConfigCompliancePack::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_compliancePackIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompliancePackId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_compliancePackId.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_compliancePackNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompliancePackName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_compliancePackName.c_str(), allocator).Move(), allocator);
    }

    if (m_riskLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskLevel, allocator);
    }

    if (m_complianceResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComplianceResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_complianceResult.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_noCompliantNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoCompliantNames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_noCompliantNames.begin(); itr != m_noCompliantNames.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_ruleCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleCount, allocator);
    }

}


string ConfigCompliancePack::GetStatus() const
{
    return m_status;
}

void ConfigCompliancePack::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ConfigCompliancePack::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ConfigCompliancePack::GetCompliancePackId() const
{
    return m_compliancePackId;
}

void ConfigCompliancePack::SetCompliancePackId(const string& _compliancePackId)
{
    m_compliancePackId = _compliancePackId;
    m_compliancePackIdHasBeenSet = true;
}

bool ConfigCompliancePack::CompliancePackIdHasBeenSet() const
{
    return m_compliancePackIdHasBeenSet;
}

string ConfigCompliancePack::GetDescription() const
{
    return m_description;
}

void ConfigCompliancePack::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ConfigCompliancePack::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string ConfigCompliancePack::GetCompliancePackName() const
{
    return m_compliancePackName;
}

void ConfigCompliancePack::SetCompliancePackName(const string& _compliancePackName)
{
    m_compliancePackName = _compliancePackName;
    m_compliancePackNameHasBeenSet = true;
}

bool ConfigCompliancePack::CompliancePackNameHasBeenSet() const
{
    return m_compliancePackNameHasBeenSet;
}

uint64_t ConfigCompliancePack::GetRiskLevel() const
{
    return m_riskLevel;
}

void ConfigCompliancePack::SetRiskLevel(const uint64_t& _riskLevel)
{
    m_riskLevel = _riskLevel;
    m_riskLevelHasBeenSet = true;
}

bool ConfigCompliancePack::RiskLevelHasBeenSet() const
{
    return m_riskLevelHasBeenSet;
}

string ConfigCompliancePack::GetComplianceResult() const
{
    return m_complianceResult;
}

void ConfigCompliancePack::SetComplianceResult(const string& _complianceResult)
{
    m_complianceResult = _complianceResult;
    m_complianceResultHasBeenSet = true;
}

bool ConfigCompliancePack::ComplianceResultHasBeenSet() const
{
    return m_complianceResultHasBeenSet;
}

string ConfigCompliancePack::GetCreateTime() const
{
    return m_createTime;
}

void ConfigCompliancePack::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ConfigCompliancePack::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

vector<string> ConfigCompliancePack::GetNoCompliantNames() const
{
    return m_noCompliantNames;
}

void ConfigCompliancePack::SetNoCompliantNames(const vector<string>& _noCompliantNames)
{
    m_noCompliantNames = _noCompliantNames;
    m_noCompliantNamesHasBeenSet = true;
}

bool ConfigCompliancePack::NoCompliantNamesHasBeenSet() const
{
    return m_noCompliantNamesHasBeenSet;
}

uint64_t ConfigCompliancePack::GetRuleCount() const
{
    return m_ruleCount;
}

void ConfigCompliancePack::SetRuleCount(const uint64_t& _ruleCount)
{
    m_ruleCount = _ruleCount;
    m_ruleCountHasBeenSet = true;
}

bool ConfigCompliancePack::RuleCountHasBeenSet() const
{
    return m_ruleCountHasBeenSet;
}

