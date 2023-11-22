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

#include <tencentcloud/config/v20220802/model/ConfigRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Config::V20220802::Model;
using namespace std;

ConfigRule::ConfigRule() :
    m_identifierHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_inputParameterHasBeenSet(false),
    m_sourceConditionHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_labelsHasBeenSet(false),
    m_riskLevelHasBeenSet(false),
    m_serviceFunctionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_complianceResultHasBeenSet(false),
    m_annotationHasBeenSet(false),
    m_configRuleInvokedTimeHasBeenSet(false),
    m_configRuleIdHasBeenSet(false),
    m_identifierTypeHasBeenSet(false),
    m_compliancePackIdHasBeenSet(false),
    m_triggerTypeHasBeenSet(false),
    m_manageInputParameterHasBeenSet(false),
    m_compliancePackNameHasBeenSet(false),
    m_regionsScopeHasBeenSet(false),
    m_tagsScopeHasBeenSet(false),
    m_excludeResourceIdsScopeHasBeenSet(false),
    m_accountGroupIdHasBeenSet(false),
    m_accountGroupNameHasBeenSet(false),
    m_ruleOwnerIdHasBeenSet(false),
    m_manageTriggerTypeHasBeenSet(false)
{
}

CoreInternalOutcome ConfigRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Identifier") && !value["Identifier"].IsNull())
    {
        if (!value["Identifier"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigRule.Identifier` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_identifier = string(value["Identifier"].GetString());
        m_identifierHasBeenSet = true;
    }

    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigRule.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("InputParameter") && !value["InputParameter"].IsNull())
    {
        if (!value["InputParameter"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ConfigRule.InputParameter` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `ConfigRule.SourceCondition` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `ConfigRule.ResourceType` is not array type"));

        const rapidjson::Value &tmpValue = value["ResourceType"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_resourceType.push_back((*itr).GetString());
        }
        m_resourceTypeHasBeenSet = true;
    }

    if (value.HasMember("Labels") && !value["Labels"].IsNull())
    {
        if (!value["Labels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ConfigRule.Labels` is not array type"));

        const rapidjson::Value &tmpValue = value["Labels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_labels.push_back((*itr).GetString());
        }
        m_labelsHasBeenSet = true;
    }

    if (value.HasMember("RiskLevel") && !value["RiskLevel"].IsNull())
    {
        if (!value["RiskLevel"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigRule.RiskLevel` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_riskLevel = value["RiskLevel"].GetInt64();
        m_riskLevelHasBeenSet = true;
    }

    if (value.HasMember("ServiceFunction") && !value["ServiceFunction"].IsNull())
    {
        if (!value["ServiceFunction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigRule.ServiceFunction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceFunction = string(value["ServiceFunction"].GetString());
        m_serviceFunctionHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigRule.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigRule.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigRule.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ComplianceResult") && !value["ComplianceResult"].IsNull())
    {
        if (!value["ComplianceResult"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigRule.ComplianceResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_complianceResult = string(value["ComplianceResult"].GetString());
        m_complianceResultHasBeenSet = true;
    }

    if (value.HasMember("Annotation") && !value["Annotation"].IsNull())
    {
        if (!value["Annotation"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigRule.Annotation` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_annotation.Deserialize(value["Annotation"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_annotationHasBeenSet = true;
    }

    if (value.HasMember("ConfigRuleInvokedTime") && !value["ConfigRuleInvokedTime"].IsNull())
    {
        if (!value["ConfigRuleInvokedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigRule.ConfigRuleInvokedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configRuleInvokedTime = string(value["ConfigRuleInvokedTime"].GetString());
        m_configRuleInvokedTimeHasBeenSet = true;
    }

    if (value.HasMember("ConfigRuleId") && !value["ConfigRuleId"].IsNull())
    {
        if (!value["ConfigRuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigRule.ConfigRuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configRuleId = string(value["ConfigRuleId"].GetString());
        m_configRuleIdHasBeenSet = true;
    }

    if (value.HasMember("IdentifierType") && !value["IdentifierType"].IsNull())
    {
        if (!value["IdentifierType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigRule.IdentifierType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_identifierType = string(value["IdentifierType"].GetString());
        m_identifierTypeHasBeenSet = true;
    }

    if (value.HasMember("CompliancePackId") && !value["CompliancePackId"].IsNull())
    {
        if (!value["CompliancePackId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigRule.CompliancePackId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_compliancePackId = string(value["CompliancePackId"].GetString());
        m_compliancePackIdHasBeenSet = true;
    }

    if (value.HasMember("TriggerType") && !value["TriggerType"].IsNull())
    {
        if (!value["TriggerType"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ConfigRule.TriggerType` is not array type"));

        const rapidjson::Value &tmpValue = value["TriggerType"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TriggerType item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_triggerType.push_back(item);
        }
        m_triggerTypeHasBeenSet = true;
    }

    if (value.HasMember("ManageInputParameter") && !value["ManageInputParameter"].IsNull())
    {
        if (!value["ManageInputParameter"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ConfigRule.ManageInputParameter` is not array type"));

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

    if (value.HasMember("CompliancePackName") && !value["CompliancePackName"].IsNull())
    {
        if (!value["CompliancePackName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigRule.CompliancePackName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_compliancePackName = string(value["CompliancePackName"].GetString());
        m_compliancePackNameHasBeenSet = true;
    }

    if (value.HasMember("RegionsScope") && !value["RegionsScope"].IsNull())
    {
        if (!value["RegionsScope"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ConfigRule.RegionsScope` is not array type"));

        const rapidjson::Value &tmpValue = value["RegionsScope"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_regionsScope.push_back((*itr).GetString());
        }
        m_regionsScopeHasBeenSet = true;
    }

    if (value.HasMember("TagsScope") && !value["TagsScope"].IsNull())
    {
        if (!value["TagsScope"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ConfigRule.TagsScope` is not array type"));

        const rapidjson::Value &tmpValue = value["TagsScope"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tagsScope.push_back(item);
        }
        m_tagsScopeHasBeenSet = true;
    }

    if (value.HasMember("ExcludeResourceIdsScope") && !value["ExcludeResourceIdsScope"].IsNull())
    {
        if (!value["ExcludeResourceIdsScope"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ConfigRule.ExcludeResourceIdsScope` is not array type"));

        const rapidjson::Value &tmpValue = value["ExcludeResourceIdsScope"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_excludeResourceIdsScope.push_back((*itr).GetString());
        }
        m_excludeResourceIdsScopeHasBeenSet = true;
    }

    if (value.HasMember("AccountGroupId") && !value["AccountGroupId"].IsNull())
    {
        if (!value["AccountGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigRule.AccountGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountGroupId = string(value["AccountGroupId"].GetString());
        m_accountGroupIdHasBeenSet = true;
    }

    if (value.HasMember("AccountGroupName") && !value["AccountGroupName"].IsNull())
    {
        if (!value["AccountGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigRule.AccountGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountGroupName = string(value["AccountGroupName"].GetString());
        m_accountGroupNameHasBeenSet = true;
    }

    if (value.HasMember("RuleOwnerId") && !value["RuleOwnerId"].IsNull())
    {
        if (!value["RuleOwnerId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigRule.RuleOwnerId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleOwnerId = value["RuleOwnerId"].GetUint64();
        m_ruleOwnerIdHasBeenSet = true;
    }

    if (value.HasMember("ManageTriggerType") && !value["ManageTriggerType"].IsNull())
    {
        if (!value["ManageTriggerType"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ConfigRule.ManageTriggerType` is not array type"));

        const rapidjson::Value &tmpValue = value["ManageTriggerType"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_manageTriggerType.push_back((*itr).GetString());
        }
        m_manageTriggerTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConfigRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_complianceResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComplianceResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_complianceResult.c_str(), allocator).Move(), allocator);
    }

    if (m_annotationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Annotation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_annotation.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_configRuleInvokedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigRuleInvokedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configRuleInvokedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_configRuleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigRuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configRuleId.c_str(), allocator).Move(), allocator);
    }

    if (m_identifierTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentifierType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_identifierType.c_str(), allocator).Move(), allocator);
    }

    if (m_compliancePackIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompliancePackId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_compliancePackId.c_str(), allocator).Move(), allocator);
    }

    if (m_triggerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_triggerType.begin(); itr != m_triggerType.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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

    if (m_compliancePackNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompliancePackName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_compliancePackName.c_str(), allocator).Move(), allocator);
    }

    if (m_regionsScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionsScope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_regionsScope.begin(); itr != m_regionsScope.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_tagsScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagsScope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagsScope.begin(); itr != m_tagsScope.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_excludeResourceIdsScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExcludeResourceIdsScope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_excludeResourceIdsScope.begin(); itr != m_excludeResourceIdsScope.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_accountGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_accountGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleOwnerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleOwnerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleOwnerId, allocator);
    }

    if (m_manageTriggerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManageTriggerType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_manageTriggerType.begin(); itr != m_manageTriggerType.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string ConfigRule::GetIdentifier() const
{
    return m_identifier;
}

void ConfigRule::SetIdentifier(const string& _identifier)
{
    m_identifier = _identifier;
    m_identifierHasBeenSet = true;
}

bool ConfigRule::IdentifierHasBeenSet() const
{
    return m_identifierHasBeenSet;
}

string ConfigRule::GetRuleName() const
{
    return m_ruleName;
}

void ConfigRule::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool ConfigRule::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

vector<InputParameter> ConfigRule::GetInputParameter() const
{
    return m_inputParameter;
}

void ConfigRule::SetInputParameter(const vector<InputParameter>& _inputParameter)
{
    m_inputParameter = _inputParameter;
    m_inputParameterHasBeenSet = true;
}

bool ConfigRule::InputParameterHasBeenSet() const
{
    return m_inputParameterHasBeenSet;
}

vector<SourceConditionForManage> ConfigRule::GetSourceCondition() const
{
    return m_sourceCondition;
}

void ConfigRule::SetSourceCondition(const vector<SourceConditionForManage>& _sourceCondition)
{
    m_sourceCondition = _sourceCondition;
    m_sourceConditionHasBeenSet = true;
}

bool ConfigRule::SourceConditionHasBeenSet() const
{
    return m_sourceConditionHasBeenSet;
}

vector<string> ConfigRule::GetResourceType() const
{
    return m_resourceType;
}

void ConfigRule::SetResourceType(const vector<string>& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool ConfigRule::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

vector<string> ConfigRule::GetLabels() const
{
    return m_labels;
}

void ConfigRule::SetLabels(const vector<string>& _labels)
{
    m_labels = _labels;
    m_labelsHasBeenSet = true;
}

bool ConfigRule::LabelsHasBeenSet() const
{
    return m_labelsHasBeenSet;
}

int64_t ConfigRule::GetRiskLevel() const
{
    return m_riskLevel;
}

void ConfigRule::SetRiskLevel(const int64_t& _riskLevel)
{
    m_riskLevel = _riskLevel;
    m_riskLevelHasBeenSet = true;
}

bool ConfigRule::RiskLevelHasBeenSet() const
{
    return m_riskLevelHasBeenSet;
}

string ConfigRule::GetServiceFunction() const
{
    return m_serviceFunction;
}

void ConfigRule::SetServiceFunction(const string& _serviceFunction)
{
    m_serviceFunction = _serviceFunction;
    m_serviceFunctionHasBeenSet = true;
}

bool ConfigRule::ServiceFunctionHasBeenSet() const
{
    return m_serviceFunctionHasBeenSet;
}

string ConfigRule::GetCreateTime() const
{
    return m_createTime;
}

void ConfigRule::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ConfigRule::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ConfigRule::GetDescription() const
{
    return m_description;
}

void ConfigRule::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ConfigRule::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string ConfigRule::GetStatus() const
{
    return m_status;
}

void ConfigRule::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ConfigRule::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ConfigRule::GetComplianceResult() const
{
    return m_complianceResult;
}

void ConfigRule::SetComplianceResult(const string& _complianceResult)
{
    m_complianceResult = _complianceResult;
    m_complianceResultHasBeenSet = true;
}

bool ConfigRule::ComplianceResultHasBeenSet() const
{
    return m_complianceResultHasBeenSet;
}

Annotation ConfigRule::GetAnnotation() const
{
    return m_annotation;
}

void ConfigRule::SetAnnotation(const Annotation& _annotation)
{
    m_annotation = _annotation;
    m_annotationHasBeenSet = true;
}

bool ConfigRule::AnnotationHasBeenSet() const
{
    return m_annotationHasBeenSet;
}

string ConfigRule::GetConfigRuleInvokedTime() const
{
    return m_configRuleInvokedTime;
}

void ConfigRule::SetConfigRuleInvokedTime(const string& _configRuleInvokedTime)
{
    m_configRuleInvokedTime = _configRuleInvokedTime;
    m_configRuleInvokedTimeHasBeenSet = true;
}

bool ConfigRule::ConfigRuleInvokedTimeHasBeenSet() const
{
    return m_configRuleInvokedTimeHasBeenSet;
}

string ConfigRule::GetConfigRuleId() const
{
    return m_configRuleId;
}

void ConfigRule::SetConfigRuleId(const string& _configRuleId)
{
    m_configRuleId = _configRuleId;
    m_configRuleIdHasBeenSet = true;
}

bool ConfigRule::ConfigRuleIdHasBeenSet() const
{
    return m_configRuleIdHasBeenSet;
}

string ConfigRule::GetIdentifierType() const
{
    return m_identifierType;
}

void ConfigRule::SetIdentifierType(const string& _identifierType)
{
    m_identifierType = _identifierType;
    m_identifierTypeHasBeenSet = true;
}

bool ConfigRule::IdentifierTypeHasBeenSet() const
{
    return m_identifierTypeHasBeenSet;
}

string ConfigRule::GetCompliancePackId() const
{
    return m_compliancePackId;
}

void ConfigRule::SetCompliancePackId(const string& _compliancePackId)
{
    m_compliancePackId = _compliancePackId;
    m_compliancePackIdHasBeenSet = true;
}

bool ConfigRule::CompliancePackIdHasBeenSet() const
{
    return m_compliancePackIdHasBeenSet;
}

vector<TriggerType> ConfigRule::GetTriggerType() const
{
    return m_triggerType;
}

void ConfigRule::SetTriggerType(const vector<TriggerType>& _triggerType)
{
    m_triggerType = _triggerType;
    m_triggerTypeHasBeenSet = true;
}

bool ConfigRule::TriggerTypeHasBeenSet() const
{
    return m_triggerTypeHasBeenSet;
}

vector<InputParameterForManage> ConfigRule::GetManageInputParameter() const
{
    return m_manageInputParameter;
}

void ConfigRule::SetManageInputParameter(const vector<InputParameterForManage>& _manageInputParameter)
{
    m_manageInputParameter = _manageInputParameter;
    m_manageInputParameterHasBeenSet = true;
}

bool ConfigRule::ManageInputParameterHasBeenSet() const
{
    return m_manageInputParameterHasBeenSet;
}

string ConfigRule::GetCompliancePackName() const
{
    return m_compliancePackName;
}

void ConfigRule::SetCompliancePackName(const string& _compliancePackName)
{
    m_compliancePackName = _compliancePackName;
    m_compliancePackNameHasBeenSet = true;
}

bool ConfigRule::CompliancePackNameHasBeenSet() const
{
    return m_compliancePackNameHasBeenSet;
}

vector<string> ConfigRule::GetRegionsScope() const
{
    return m_regionsScope;
}

void ConfigRule::SetRegionsScope(const vector<string>& _regionsScope)
{
    m_regionsScope = _regionsScope;
    m_regionsScopeHasBeenSet = true;
}

bool ConfigRule::RegionsScopeHasBeenSet() const
{
    return m_regionsScopeHasBeenSet;
}

vector<Tag> ConfigRule::GetTagsScope() const
{
    return m_tagsScope;
}

void ConfigRule::SetTagsScope(const vector<Tag>& _tagsScope)
{
    m_tagsScope = _tagsScope;
    m_tagsScopeHasBeenSet = true;
}

bool ConfigRule::TagsScopeHasBeenSet() const
{
    return m_tagsScopeHasBeenSet;
}

vector<string> ConfigRule::GetExcludeResourceIdsScope() const
{
    return m_excludeResourceIdsScope;
}

void ConfigRule::SetExcludeResourceIdsScope(const vector<string>& _excludeResourceIdsScope)
{
    m_excludeResourceIdsScope = _excludeResourceIdsScope;
    m_excludeResourceIdsScopeHasBeenSet = true;
}

bool ConfigRule::ExcludeResourceIdsScopeHasBeenSet() const
{
    return m_excludeResourceIdsScopeHasBeenSet;
}

string ConfigRule::GetAccountGroupId() const
{
    return m_accountGroupId;
}

void ConfigRule::SetAccountGroupId(const string& _accountGroupId)
{
    m_accountGroupId = _accountGroupId;
    m_accountGroupIdHasBeenSet = true;
}

bool ConfigRule::AccountGroupIdHasBeenSet() const
{
    return m_accountGroupIdHasBeenSet;
}

string ConfigRule::GetAccountGroupName() const
{
    return m_accountGroupName;
}

void ConfigRule::SetAccountGroupName(const string& _accountGroupName)
{
    m_accountGroupName = _accountGroupName;
    m_accountGroupNameHasBeenSet = true;
}

bool ConfigRule::AccountGroupNameHasBeenSet() const
{
    return m_accountGroupNameHasBeenSet;
}

uint64_t ConfigRule::GetRuleOwnerId() const
{
    return m_ruleOwnerId;
}

void ConfigRule::SetRuleOwnerId(const uint64_t& _ruleOwnerId)
{
    m_ruleOwnerId = _ruleOwnerId;
    m_ruleOwnerIdHasBeenSet = true;
}

bool ConfigRule::RuleOwnerIdHasBeenSet() const
{
    return m_ruleOwnerIdHasBeenSet;
}

vector<string> ConfigRule::GetManageTriggerType() const
{
    return m_manageTriggerType;
}

void ConfigRule::SetManageTriggerType(const vector<string>& _manageTriggerType)
{
    m_manageTriggerType = _manageTriggerType;
    m_manageTriggerTypeHasBeenSet = true;
}

bool ConfigRule::ManageTriggerTypeHasBeenSet() const
{
    return m_manageTriggerTypeHasBeenSet;
}

