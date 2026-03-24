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

#include <tencentcloud/config/v20220802/model/CompliancePackRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Config::V20220802::Model;
using namespace std;

CompliancePackRule::CompliancePackRule() :
    m_ruleNameHasBeenSet(false),
    m_riskLevelHasBeenSet(false),
    m_inputParameterHasBeenSet(false),
    m_identifierHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_managedRuleIdentifierHasBeenSet(false),
    m_configRuleIdHasBeenSet(false),
    m_compliancePackIdHasBeenSet(false)
{
}

CoreInternalOutcome CompliancePackRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompliancePackRule.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("RiskLevel") && !value["RiskLevel"].IsNull())
    {
        if (!value["RiskLevel"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CompliancePackRule.RiskLevel` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_riskLevel = value["RiskLevel"].GetUint64();
        m_riskLevelHasBeenSet = true;
    }

    if (value.HasMember("InputParameter") && !value["InputParameter"].IsNull())
    {
        if (!value["InputParameter"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CompliancePackRule.InputParameter` is not array type"));

        const rapidjson::Value &tmpValue = value["InputParameter"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InputParameter item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_inputParameter.push_back(item);
        }
        m_inputParameterHasBeenSet = true;
    }

    if (value.HasMember("Identifier") && !value["Identifier"].IsNull())
    {
        if (!value["Identifier"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompliancePackRule.Identifier` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_identifier = string(value["Identifier"].GetString());
        m_identifierHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompliancePackRule.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("ManagedRuleIdentifier") && !value["ManagedRuleIdentifier"].IsNull())
    {
        if (!value["ManagedRuleIdentifier"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompliancePackRule.ManagedRuleIdentifier` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_managedRuleIdentifier = string(value["ManagedRuleIdentifier"].GetString());
        m_managedRuleIdentifierHasBeenSet = true;
    }

    if (value.HasMember("ConfigRuleId") && !value["ConfigRuleId"].IsNull())
    {
        if (!value["ConfigRuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompliancePackRule.ConfigRuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configRuleId = string(value["ConfigRuleId"].GetString());
        m_configRuleIdHasBeenSet = true;
    }

    if (value.HasMember("CompliancePackId") && !value["CompliancePackId"].IsNull())
    {
        if (!value["CompliancePackId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompliancePackRule.CompliancePackId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_compliancePackId = string(value["CompliancePackId"].GetString());
        m_compliancePackIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CompliancePackRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_riskLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskLevel, allocator);
    }

    if (m_inputParameterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputParameter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_inputParameter.begin(); itr != m_inputParameter.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_identifierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Identifier";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_identifier.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_managedRuleIdentifierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManagedRuleIdentifier";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_managedRuleIdentifier.c_str(), allocator).Move(), allocator);
    }

    if (m_configRuleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigRuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configRuleId.c_str(), allocator).Move(), allocator);
    }

    if (m_compliancePackIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompliancePackId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_compliancePackId.c_str(), allocator).Move(), allocator);
    }

}


string CompliancePackRule::GetRuleName() const
{
    return m_ruleName;
}

void CompliancePackRule::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool CompliancePackRule::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

uint64_t CompliancePackRule::GetRiskLevel() const
{
    return m_riskLevel;
}

void CompliancePackRule::SetRiskLevel(const uint64_t& _riskLevel)
{
    m_riskLevel = _riskLevel;
    m_riskLevelHasBeenSet = true;
}

bool CompliancePackRule::RiskLevelHasBeenSet() const
{
    return m_riskLevelHasBeenSet;
}

vector<InputParameter> CompliancePackRule::GetInputParameter() const
{
    return m_inputParameter;
}

void CompliancePackRule::SetInputParameter(const vector<InputParameter>& _inputParameter)
{
    m_inputParameter = _inputParameter;
    m_inputParameterHasBeenSet = true;
}

bool CompliancePackRule::InputParameterHasBeenSet() const
{
    return m_inputParameterHasBeenSet;
}

string CompliancePackRule::GetIdentifier() const
{
    return m_identifier;
}

void CompliancePackRule::SetIdentifier(const string& _identifier)
{
    m_identifier = _identifier;
    m_identifierHasBeenSet = true;
}

bool CompliancePackRule::IdentifierHasBeenSet() const
{
    return m_identifierHasBeenSet;
}

string CompliancePackRule::GetDescription() const
{
    return m_description;
}

void CompliancePackRule::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CompliancePackRule::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string CompliancePackRule::GetManagedRuleIdentifier() const
{
    return m_managedRuleIdentifier;
}

void CompliancePackRule::SetManagedRuleIdentifier(const string& _managedRuleIdentifier)
{
    m_managedRuleIdentifier = _managedRuleIdentifier;
    m_managedRuleIdentifierHasBeenSet = true;
}

bool CompliancePackRule::ManagedRuleIdentifierHasBeenSet() const
{
    return m_managedRuleIdentifierHasBeenSet;
}

string CompliancePackRule::GetConfigRuleId() const
{
    return m_configRuleId;
}

void CompliancePackRule::SetConfigRuleId(const string& _configRuleId)
{
    m_configRuleId = _configRuleId;
    m_configRuleIdHasBeenSet = true;
}

bool CompliancePackRule::ConfigRuleIdHasBeenSet() const
{
    return m_configRuleIdHasBeenSet;
}

string CompliancePackRule::GetCompliancePackId() const
{
    return m_compliancePackId;
}

void CompliancePackRule::SetCompliancePackId(const string& _compliancePackId)
{
    m_compliancePackId = _compliancePackId;
    m_compliancePackIdHasBeenSet = true;
}

bool CompliancePackRule::CompliancePackIdHasBeenSet() const
{
    return m_compliancePackIdHasBeenSet;
}

