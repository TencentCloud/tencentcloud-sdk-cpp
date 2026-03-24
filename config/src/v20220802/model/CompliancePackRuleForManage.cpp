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

#include <tencentcloud/config/v20220802/model/CompliancePackRuleForManage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Config::V20220802::Model;
using namespace std;

CompliancePackRuleForManage::CompliancePackRuleForManage() :
    m_identifierHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_riskLevelHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_compliancePackRulesHasBeenSet(false),
    m_controlHasBeenSet(false),
    m_resourceTypesHasBeenSet(false)
{
}

CoreInternalOutcome CompliancePackRuleForManage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Identifier") && !value["Identifier"].IsNull())
    {
        if (!value["Identifier"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompliancePackRuleForManage.Identifier` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_identifier = string(value["Identifier"].GetString());
        m_identifierHasBeenSet = true;
    }

    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompliancePackRuleForManage.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompliancePackRuleForManage.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("RiskLevel") && !value["RiskLevel"].IsNull())
    {
        if (!value["RiskLevel"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CompliancePackRuleForManage.RiskLevel` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_riskLevel = value["RiskLevel"].GetInt64();
        m_riskLevelHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompliancePackRuleForManage.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompliancePackRuleForManage.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("CompliancePackRules") && !value["CompliancePackRules"].IsNull())
    {
        if (!value["CompliancePackRules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CompliancePackRuleForManage.CompliancePackRules` is not array type"));

        const rapidjson::Value &tmpValue = value["CompliancePackRules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CompliancePackRules item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_compliancePackRules.push_back(item);
        }
        m_compliancePackRulesHasBeenSet = true;
    }

    if (value.HasMember("Control") && !value["Control"].IsNull())
    {
        if (!value["Control"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CompliancePackRuleForManage.Control` is not array type"));

        const rapidjson::Value &tmpValue = value["Control"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Control item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_control.push_back(item);
        }
        m_controlHasBeenSet = true;
    }

    if (value.HasMember("ResourceTypes") && !value["ResourceTypes"].IsNull())
    {
        if (!value["ResourceTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CompliancePackRuleForManage.ResourceTypes` is not array type"));

        const rapidjson::Value &tmpValue = value["ResourceTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_resourceTypes.push_back((*itr).GetString());
        }
        m_resourceTypesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CompliancePackRuleForManage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_identifierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Identifier";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_identifier.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
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

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_compliancePackRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompliancePackRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_compliancePackRules.begin(); itr != m_compliancePackRules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_controlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Control";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_control.begin(); itr != m_control.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_resourceTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_resourceTypes.begin(); itr != m_resourceTypes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string CompliancePackRuleForManage::GetIdentifier() const
{
    return m_identifier;
}

void CompliancePackRuleForManage::SetIdentifier(const string& _identifier)
{
    m_identifier = _identifier;
    m_identifierHasBeenSet = true;
}

bool CompliancePackRuleForManage::IdentifierHasBeenSet() const
{
    return m_identifierHasBeenSet;
}

string CompliancePackRuleForManage::GetRuleName() const
{
    return m_ruleName;
}

void CompliancePackRuleForManage::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool CompliancePackRuleForManage::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

string CompliancePackRuleForManage::GetDescription() const
{
    return m_description;
}

void CompliancePackRuleForManage::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CompliancePackRuleForManage::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t CompliancePackRuleForManage::GetRiskLevel() const
{
    return m_riskLevel;
}

void CompliancePackRuleForManage::SetRiskLevel(const int64_t& _riskLevel)
{
    m_riskLevel = _riskLevel;
    m_riskLevelHasBeenSet = true;
}

bool CompliancePackRuleForManage::RiskLevelHasBeenSet() const
{
    return m_riskLevelHasBeenSet;
}

string CompliancePackRuleForManage::GetCreateTime() const
{
    return m_createTime;
}

void CompliancePackRuleForManage::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool CompliancePackRuleForManage::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string CompliancePackRuleForManage::GetUpdateTime() const
{
    return m_updateTime;
}

void CompliancePackRuleForManage::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool CompliancePackRuleForManage::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

vector<CompliancePackRules> CompliancePackRuleForManage::GetCompliancePackRules() const
{
    return m_compliancePackRules;
}

void CompliancePackRuleForManage::SetCompliancePackRules(const vector<CompliancePackRules>& _compliancePackRules)
{
    m_compliancePackRules = _compliancePackRules;
    m_compliancePackRulesHasBeenSet = true;
}

bool CompliancePackRuleForManage::CompliancePackRulesHasBeenSet() const
{
    return m_compliancePackRulesHasBeenSet;
}

vector<Control> CompliancePackRuleForManage::GetControl() const
{
    return m_control;
}

void CompliancePackRuleForManage::SetControl(const vector<Control>& _control)
{
    m_control = _control;
    m_controlHasBeenSet = true;
}

bool CompliancePackRuleForManage::ControlHasBeenSet() const
{
    return m_controlHasBeenSet;
}

vector<string> CompliancePackRuleForManage::GetResourceTypes() const
{
    return m_resourceTypes;
}

void CompliancePackRuleForManage::SetResourceTypes(const vector<string>& _resourceTypes)
{
    m_resourceTypes = _resourceTypes;
    m_resourceTypesHasBeenSet = true;
}

bool CompliancePackRuleForManage::ResourceTypesHasBeenSet() const
{
    return m_resourceTypesHasBeenSet;
}

