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

#include <tencentcloud/config/v20220802/model/ComplianceConfigRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Config::V20220802::Model;
using namespace std;

ComplianceConfigRule::ComplianceConfigRule() :
    m_ruleNameHasBeenSet(false),
    m_riskLevelHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_configRuleIdHasBeenSet(false),
    m_complianceResultHasBeenSet(false),
    m_labelsHasBeenSet(false),
    m_inputParameterHasBeenSet(false),
    m_sourceConditionHasBeenSet(false),
    m_identifierHasBeenSet(false),
    m_createByTypeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_manageInputParameterHasBeenSet(false)
{
}

CoreInternalOutcome ComplianceConfigRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceConfigRule.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("RiskLevel") && !value["RiskLevel"].IsNull())
    {
        if (!value["RiskLevel"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceConfigRule.RiskLevel` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_riskLevel = value["RiskLevel"].GetUint64();
        m_riskLevelHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceConfigRule.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ConfigRuleId") && !value["ConfigRuleId"].IsNull())
    {
        if (!value["ConfigRuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceConfigRule.ConfigRuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configRuleId = string(value["ConfigRuleId"].GetString());
        m_configRuleIdHasBeenSet = true;
    }

    if (value.HasMember("ComplianceResult") && !value["ComplianceResult"].IsNull())
    {
        if (!value["ComplianceResult"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceConfigRule.ComplianceResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_complianceResult = string(value["ComplianceResult"].GetString());
        m_complianceResultHasBeenSet = true;
    }

    if (value.HasMember("Labels") && !value["Labels"].IsNull())
    {
        if (!value["Labels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ComplianceConfigRule.Labels` is not array type"));

        const rapidjson::Value &tmpValue = value["Labels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_labels.push_back((*itr).GetString());
        }
        m_labelsHasBeenSet = true;
    }

    if (value.HasMember("InputParameter") && !value["InputParameter"].IsNull())
    {
        if (!value["InputParameter"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ComplianceConfigRule.InputParameter` is not array type"));

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

    if (value.HasMember("SourceCondition") && !value["SourceCondition"].IsNull())
    {
        if (!value["SourceCondition"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ComplianceConfigRule.SourceCondition` is not array type"));

        const rapidjson::Value &tmpValue = value["SourceCondition"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SourceConditionForManage item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_sourceCondition.push_back(item);
        }
        m_sourceConditionHasBeenSet = true;
    }

    if (value.HasMember("Identifier") && !value["Identifier"].IsNull())
    {
        if (!value["Identifier"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceConfigRule.Identifier` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_identifier = string(value["Identifier"].GetString());
        m_identifierHasBeenSet = true;
    }

    if (value.HasMember("CreateByType") && !value["CreateByType"].IsNull())
    {
        if (!value["CreateByType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceConfigRule.CreateByType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createByType = string(value["CreateByType"].GetString());
        m_createByTypeHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceConfigRule.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("ManageInputParameter") && !value["ManageInputParameter"].IsNull())
    {
        if (!value["ManageInputParameter"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ComplianceConfigRule.ManageInputParameter` is not array type"));

        const rapidjson::Value &tmpValue = value["ManageInputParameter"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InputParameterForManage item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_manageInputParameter.push_back(item);
        }
        m_manageInputParameterHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ComplianceConfigRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_configRuleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigRuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configRuleId.c_str(), allocator).Move(), allocator);
    }

    if (m_complianceResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComplianceResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_complianceResult.c_str(), allocator).Move(), allocator);
    }

    if (m_labelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Labels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_labels.begin(); itr != m_labels.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

    if (m_sourceConditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceCondition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sourceCondition.begin(); itr != m_sourceCondition.end(); ++itr, ++i)
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

    if (m_createByTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateByType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createByType.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_manageInputParameterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManageInputParameter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_manageInputParameter.begin(); itr != m_manageInputParameter.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ComplianceConfigRule::GetRuleName() const
{
    return m_ruleName;
}

void ComplianceConfigRule::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool ComplianceConfigRule::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

uint64_t ComplianceConfigRule::GetRiskLevel() const
{
    return m_riskLevel;
}

void ComplianceConfigRule::SetRiskLevel(const uint64_t& _riskLevel)
{
    m_riskLevel = _riskLevel;
    m_riskLevelHasBeenSet = true;
}

bool ComplianceConfigRule::RiskLevelHasBeenSet() const
{
    return m_riskLevelHasBeenSet;
}

string ComplianceConfigRule::GetStatus() const
{
    return m_status;
}

void ComplianceConfigRule::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ComplianceConfigRule::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ComplianceConfigRule::GetConfigRuleId() const
{
    return m_configRuleId;
}

void ComplianceConfigRule::SetConfigRuleId(const string& _configRuleId)
{
    m_configRuleId = _configRuleId;
    m_configRuleIdHasBeenSet = true;
}

bool ComplianceConfigRule::ConfigRuleIdHasBeenSet() const
{
    return m_configRuleIdHasBeenSet;
}

string ComplianceConfigRule::GetComplianceResult() const
{
    return m_complianceResult;
}

void ComplianceConfigRule::SetComplianceResult(const string& _complianceResult)
{
    m_complianceResult = _complianceResult;
    m_complianceResultHasBeenSet = true;
}

bool ComplianceConfigRule::ComplianceResultHasBeenSet() const
{
    return m_complianceResultHasBeenSet;
}

vector<string> ComplianceConfigRule::GetLabels() const
{
    return m_labels;
}

void ComplianceConfigRule::SetLabels(const vector<string>& _labels)
{
    m_labels = _labels;
    m_labelsHasBeenSet = true;
}

bool ComplianceConfigRule::LabelsHasBeenSet() const
{
    return m_labelsHasBeenSet;
}

vector<InputParameter> ComplianceConfigRule::GetInputParameter() const
{
    return m_inputParameter;
}

void ComplianceConfigRule::SetInputParameter(const vector<InputParameter>& _inputParameter)
{
    m_inputParameter = _inputParameter;
    m_inputParameterHasBeenSet = true;
}

bool ComplianceConfigRule::InputParameterHasBeenSet() const
{
    return m_inputParameterHasBeenSet;
}

vector<SourceConditionForManage> ComplianceConfigRule::GetSourceCondition() const
{
    return m_sourceCondition;
}

void ComplianceConfigRule::SetSourceCondition(const vector<SourceConditionForManage>& _sourceCondition)
{
    m_sourceCondition = _sourceCondition;
    m_sourceConditionHasBeenSet = true;
}

bool ComplianceConfigRule::SourceConditionHasBeenSet() const
{
    return m_sourceConditionHasBeenSet;
}

string ComplianceConfigRule::GetIdentifier() const
{
    return m_identifier;
}

void ComplianceConfigRule::SetIdentifier(const string& _identifier)
{
    m_identifier = _identifier;
    m_identifierHasBeenSet = true;
}

bool ComplianceConfigRule::IdentifierHasBeenSet() const
{
    return m_identifierHasBeenSet;
}

string ComplianceConfigRule::GetCreateByType() const
{
    return m_createByType;
}

void ComplianceConfigRule::SetCreateByType(const string& _createByType)
{
    m_createByType = _createByType;
    m_createByTypeHasBeenSet = true;
}

bool ComplianceConfigRule::CreateByTypeHasBeenSet() const
{
    return m_createByTypeHasBeenSet;
}

string ComplianceConfigRule::GetDescription() const
{
    return m_description;
}

void ComplianceConfigRule::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ComplianceConfigRule::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<InputParameterForManage> ComplianceConfigRule::GetManageInputParameter() const
{
    return m_manageInputParameter;
}

void ComplianceConfigRule::SetManageInputParameter(const vector<InputParameterForManage>& _manageInputParameter)
{
    m_manageInputParameter = _manageInputParameter;
    m_manageInputParameterHasBeenSet = true;
}

bool ComplianceConfigRule::ManageInputParameterHasBeenSet() const
{
    return m_manageInputParameterHasBeenSet;
}

