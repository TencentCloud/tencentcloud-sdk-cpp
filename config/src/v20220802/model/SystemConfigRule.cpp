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

#include <tencentcloud/config/v20220802/model/SystemConfigRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Config::V20220802::Model;
using namespace std;

SystemConfigRule::SystemConfigRule() :
    m_identifierHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_inputParameterHasBeenSet(false),
    m_sourceConditionHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_riskLevelHasBeenSet(false),
    m_serviceFunctionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_triggerTypeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_referenceCountHasBeenSet(false),
    m_identifierTypeHasBeenSet(false)
{
}

CoreInternalOutcome SystemConfigRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Identifier") && !value["Identifier"].IsNull())
    {
        if (!value["Identifier"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SystemConfigRule.Identifier` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_identifier = string(value["Identifier"].GetString());
        m_identifierHasBeenSet = true;
    }

    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SystemConfigRule.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("InputParameter") && !value["InputParameter"].IsNull())
    {
        if (!value["InputParameter"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SystemConfigRule.InputParameter` is not array type"));

        const rapidjson::Value &tmpValue = value["InputParameter"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InputParameterForManage item;
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
            return CoreInternalOutcome(Core::Error("response `SystemConfigRule.SourceCondition` is not array type"));

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

    if (value.HasMember("ResourceType") && !value["ResourceType"].IsNull())
    {
        if (!value["ResourceType"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SystemConfigRule.ResourceType` is not array type"));

        const rapidjson::Value &tmpValue = value["ResourceType"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_resourceType.push_back((*itr).GetString());
        }
        m_resourceTypeHasBeenSet = true;
    }

    if (value.HasMember("Label") && !value["Label"].IsNull())
    {
        if (!value["Label"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SystemConfigRule.Label` is not array type"));

        const rapidjson::Value &tmpValue = value["Label"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_label.push_back((*itr).GetString());
        }
        m_labelHasBeenSet = true;
    }

    if (value.HasMember("RiskLevel") && !value["RiskLevel"].IsNull())
    {
        if (!value["RiskLevel"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SystemConfigRule.RiskLevel` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_riskLevel = value["RiskLevel"].GetInt64();
        m_riskLevelHasBeenSet = true;
    }

    if (value.HasMember("ServiceFunction") && !value["ServiceFunction"].IsNull())
    {
        if (!value["ServiceFunction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SystemConfigRule.ServiceFunction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceFunction = string(value["ServiceFunction"].GetString());
        m_serviceFunctionHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SystemConfigRule.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SystemConfigRule.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("TriggerType") && !value["TriggerType"].IsNull())
    {
        if (!value["TriggerType"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SystemConfigRule.TriggerType` is not array type"));

        const rapidjson::Value &tmpValue = value["TriggerType"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_triggerType.push_back((*itr).GetString());
        }
        m_triggerTypeHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SystemConfigRule.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("ReferenceCount") && !value["ReferenceCount"].IsNull())
    {
        if (!value["ReferenceCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SystemConfigRule.ReferenceCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_referenceCount = value["ReferenceCount"].GetUint64();
        m_referenceCountHasBeenSet = true;
    }

    if (value.HasMember("IdentifierType") && !value["IdentifierType"].IsNull())
    {
        if (!value["IdentifierType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SystemConfigRule.IdentifierType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_identifierType = string(value["IdentifierType"].GetString());
        m_identifierTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SystemConfigRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_resourceType.begin(); itr != m_resourceType.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_labelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Label";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_label.begin(); itr != m_label.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_riskLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskLevel, allocator);
    }

    if (m_serviceFunctionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceFunction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceFunction.c_str(), allocator).Move(), allocator);
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

    if (m_triggerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_triggerType.begin(); itr != m_triggerType.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_referenceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReferenceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_referenceCount, allocator);
    }

    if (m_identifierTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentifierType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_identifierType.c_str(), allocator).Move(), allocator);
    }

}


string SystemConfigRule::GetIdentifier() const
{
    return m_identifier;
}

void SystemConfigRule::SetIdentifier(const string& _identifier)
{
    m_identifier = _identifier;
    m_identifierHasBeenSet = true;
}

bool SystemConfigRule::IdentifierHasBeenSet() const
{
    return m_identifierHasBeenSet;
}

string SystemConfigRule::GetRuleName() const
{
    return m_ruleName;
}

void SystemConfigRule::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool SystemConfigRule::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

vector<InputParameterForManage> SystemConfigRule::GetInputParameter() const
{
    return m_inputParameter;
}

void SystemConfigRule::SetInputParameter(const vector<InputParameterForManage>& _inputParameter)
{
    m_inputParameter = _inputParameter;
    m_inputParameterHasBeenSet = true;
}

bool SystemConfigRule::InputParameterHasBeenSet() const
{
    return m_inputParameterHasBeenSet;
}

vector<SourceConditionForManage> SystemConfigRule::GetSourceCondition() const
{
    return m_sourceCondition;
}

void SystemConfigRule::SetSourceCondition(const vector<SourceConditionForManage>& _sourceCondition)
{
    m_sourceCondition = _sourceCondition;
    m_sourceConditionHasBeenSet = true;
}

bool SystemConfigRule::SourceConditionHasBeenSet() const
{
    return m_sourceConditionHasBeenSet;
}

vector<string> SystemConfigRule::GetResourceType() const
{
    return m_resourceType;
}

void SystemConfigRule::SetResourceType(const vector<string>& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool SystemConfigRule::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

vector<string> SystemConfigRule::GetLabel() const
{
    return m_label;
}

void SystemConfigRule::SetLabel(const vector<string>& _label)
{
    m_label = _label;
    m_labelHasBeenSet = true;
}

bool SystemConfigRule::LabelHasBeenSet() const
{
    return m_labelHasBeenSet;
}

int64_t SystemConfigRule::GetRiskLevel() const
{
    return m_riskLevel;
}

void SystemConfigRule::SetRiskLevel(const int64_t& _riskLevel)
{
    m_riskLevel = _riskLevel;
    m_riskLevelHasBeenSet = true;
}

bool SystemConfigRule::RiskLevelHasBeenSet() const
{
    return m_riskLevelHasBeenSet;
}

string SystemConfigRule::GetServiceFunction() const
{
    return m_serviceFunction;
}

void SystemConfigRule::SetServiceFunction(const string& _serviceFunction)
{
    m_serviceFunction = _serviceFunction;
    m_serviceFunctionHasBeenSet = true;
}

bool SystemConfigRule::ServiceFunctionHasBeenSet() const
{
    return m_serviceFunctionHasBeenSet;
}

string SystemConfigRule::GetCreateTime() const
{
    return m_createTime;
}

void SystemConfigRule::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool SystemConfigRule::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string SystemConfigRule::GetUpdateTime() const
{
    return m_updateTime;
}

void SystemConfigRule::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool SystemConfigRule::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

vector<string> SystemConfigRule::GetTriggerType() const
{
    return m_triggerType;
}

void SystemConfigRule::SetTriggerType(const vector<string>& _triggerType)
{
    m_triggerType = _triggerType;
    m_triggerTypeHasBeenSet = true;
}

bool SystemConfigRule::TriggerTypeHasBeenSet() const
{
    return m_triggerTypeHasBeenSet;
}

string SystemConfigRule::GetDescription() const
{
    return m_description;
}

void SystemConfigRule::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool SystemConfigRule::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

uint64_t SystemConfigRule::GetReferenceCount() const
{
    return m_referenceCount;
}

void SystemConfigRule::SetReferenceCount(const uint64_t& _referenceCount)
{
    m_referenceCount = _referenceCount;
    m_referenceCountHasBeenSet = true;
}

bool SystemConfigRule::ReferenceCountHasBeenSet() const
{
    return m_referenceCountHasBeenSet;
}

string SystemConfigRule::GetIdentifierType() const
{
    return m_identifierType;
}

void SystemConfigRule::SetIdentifierType(const string& _identifierType)
{
    m_identifierType = _identifierType;
    m_identifierTypeHasBeenSet = true;
}

bool SystemConfigRule::IdentifierTypeHasBeenSet() const
{
    return m_identifierTypeHasBeenSet;
}

