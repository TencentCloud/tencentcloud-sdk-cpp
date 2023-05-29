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

#include <tencentcloud/wedata/v20210820/model/Rule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

Rule::Rule() :
    m_ruleIdHasBeenSet(false),
    m_ruleGroupIdHasBeenSet(false),
    m_tableIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_ruleTemplateIdHasBeenSet(false),
    m_ruleTemplateContentHasBeenSet(false),
    m_qualityDimHasBeenSet(false),
    m_sourceObjectTypeHasBeenSet(false),
    m_sourceObjectDataTypeHasBeenSet(false),
    m_sourceObjectDataTypeNameHasBeenSet(false),
    m_sourceObjectValueHasBeenSet(false),
    m_conditionTypeHasBeenSet(false),
    m_conditionExpressionHasBeenSet(false),
    m_customSqlHasBeenSet(false),
    m_compareRuleHasBeenSet(false),
    m_alarmLevelHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_targetDatabaseIdHasBeenSet(false),
    m_targetDatabaseNameHasBeenSet(false),
    m_targetTableIdHasBeenSet(false),
    m_targetTableNameHasBeenSet(false),
    m_targetConditionExprHasBeenSet(false),
    m_relConditionExprHasBeenSet(false),
    m_fieldConfigHasBeenSet(false),
    m_multiSourceFlagHasBeenSet(false),
    m_whereFlagHasBeenSet(false),
    m_templateSqlHasBeenSet(false),
    m_subQualityDimHasBeenSet(false),
    m_targetObjectTypeHasBeenSet(false),
    m_targetObjectDataTypeHasBeenSet(false),
    m_targetObjectDataTypeNameHasBeenSet(false),
    m_targetObjectValueHasBeenSet(false),
    m_sourceEngineTypesHasBeenSet(false)
{
}

CoreInternalOutcome Rule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Rule.RuleId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = value["RuleId"].GetUint64();
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("RuleGroupId") && !value["RuleGroupId"].IsNull())
    {
        if (!value["RuleGroupId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Rule.RuleGroupId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleGroupId = value["RuleGroupId"].GetUint64();
        m_ruleGroupIdHasBeenSet = true;
    }

    if (value.HasMember("TableId") && !value["TableId"].IsNull())
    {
        if (!value["TableId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Rule.TableId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableId = string(value["TableId"].GetString());
        m_tableIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Rule.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Rule.Type` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetUint64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("RuleTemplateId") && !value["RuleTemplateId"].IsNull())
    {
        if (!value["RuleTemplateId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Rule.RuleTemplateId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleTemplateId = value["RuleTemplateId"].GetUint64();
        m_ruleTemplateIdHasBeenSet = true;
    }

    if (value.HasMember("RuleTemplateContent") && !value["RuleTemplateContent"].IsNull())
    {
        if (!value["RuleTemplateContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Rule.RuleTemplateContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleTemplateContent = string(value["RuleTemplateContent"].GetString());
        m_ruleTemplateContentHasBeenSet = true;
    }

    if (value.HasMember("QualityDim") && !value["QualityDim"].IsNull())
    {
        if (!value["QualityDim"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Rule.QualityDim` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_qualityDim = value["QualityDim"].GetUint64();
        m_qualityDimHasBeenSet = true;
    }

    if (value.HasMember("SourceObjectType") && !value["SourceObjectType"].IsNull())
    {
        if (!value["SourceObjectType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Rule.SourceObjectType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sourceObjectType = value["SourceObjectType"].GetUint64();
        m_sourceObjectTypeHasBeenSet = true;
    }

    if (value.HasMember("SourceObjectDataType") && !value["SourceObjectDataType"].IsNull())
    {
        if (!value["SourceObjectDataType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Rule.SourceObjectDataType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sourceObjectDataType = value["SourceObjectDataType"].GetUint64();
        m_sourceObjectDataTypeHasBeenSet = true;
    }

    if (value.HasMember("SourceObjectDataTypeName") && !value["SourceObjectDataTypeName"].IsNull())
    {
        if (!value["SourceObjectDataTypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Rule.SourceObjectDataTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceObjectDataTypeName = string(value["SourceObjectDataTypeName"].GetString());
        m_sourceObjectDataTypeNameHasBeenSet = true;
    }

    if (value.HasMember("SourceObjectValue") && !value["SourceObjectValue"].IsNull())
    {
        if (!value["SourceObjectValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Rule.SourceObjectValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceObjectValue = string(value["SourceObjectValue"].GetString());
        m_sourceObjectValueHasBeenSet = true;
    }

    if (value.HasMember("ConditionType") && !value["ConditionType"].IsNull())
    {
        if (!value["ConditionType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Rule.ConditionType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_conditionType = value["ConditionType"].GetUint64();
        m_conditionTypeHasBeenSet = true;
    }

    if (value.HasMember("ConditionExpression") && !value["ConditionExpression"].IsNull())
    {
        if (!value["ConditionExpression"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Rule.ConditionExpression` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_conditionExpression = string(value["ConditionExpression"].GetString());
        m_conditionExpressionHasBeenSet = true;
    }

    if (value.HasMember("CustomSql") && !value["CustomSql"].IsNull())
    {
        if (!value["CustomSql"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Rule.CustomSql` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customSql = string(value["CustomSql"].GetString());
        m_customSqlHasBeenSet = true;
    }

    if (value.HasMember("CompareRule") && !value["CompareRule"].IsNull())
    {
        if (!value["CompareRule"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Rule.CompareRule` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_compareRule.Deserialize(value["CompareRule"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_compareRuleHasBeenSet = true;
    }

    if (value.HasMember("AlarmLevel") && !value["AlarmLevel"].IsNull())
    {
        if (!value["AlarmLevel"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Rule.AlarmLevel` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmLevel = value["AlarmLevel"].GetUint64();
        m_alarmLevelHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Rule.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Operator") && !value["Operator"].IsNull())
    {
        if (!value["Operator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Rule.Operator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operator = string(value["Operator"].GetString());
        m_operatorHasBeenSet = true;
    }

    if (value.HasMember("TargetDatabaseId") && !value["TargetDatabaseId"].IsNull())
    {
        if (!value["TargetDatabaseId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Rule.TargetDatabaseId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetDatabaseId = string(value["TargetDatabaseId"].GetString());
        m_targetDatabaseIdHasBeenSet = true;
    }

    if (value.HasMember("TargetDatabaseName") && !value["TargetDatabaseName"].IsNull())
    {
        if (!value["TargetDatabaseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Rule.TargetDatabaseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetDatabaseName = string(value["TargetDatabaseName"].GetString());
        m_targetDatabaseNameHasBeenSet = true;
    }

    if (value.HasMember("TargetTableId") && !value["TargetTableId"].IsNull())
    {
        if (!value["TargetTableId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Rule.TargetTableId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetTableId = string(value["TargetTableId"].GetString());
        m_targetTableIdHasBeenSet = true;
    }

    if (value.HasMember("TargetTableName") && !value["TargetTableName"].IsNull())
    {
        if (!value["TargetTableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Rule.TargetTableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetTableName = string(value["TargetTableName"].GetString());
        m_targetTableNameHasBeenSet = true;
    }

    if (value.HasMember("TargetConditionExpr") && !value["TargetConditionExpr"].IsNull())
    {
        if (!value["TargetConditionExpr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Rule.TargetConditionExpr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetConditionExpr = string(value["TargetConditionExpr"].GetString());
        m_targetConditionExprHasBeenSet = true;
    }

    if (value.HasMember("RelConditionExpr") && !value["RelConditionExpr"].IsNull())
    {
        if (!value["RelConditionExpr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Rule.RelConditionExpr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_relConditionExpr = string(value["RelConditionExpr"].GetString());
        m_relConditionExprHasBeenSet = true;
    }

    if (value.HasMember("FieldConfig") && !value["FieldConfig"].IsNull())
    {
        if (!value["FieldConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Rule.FieldConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_fieldConfig.Deserialize(value["FieldConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_fieldConfigHasBeenSet = true;
    }

    if (value.HasMember("MultiSourceFlag") && !value["MultiSourceFlag"].IsNull())
    {
        if (!value["MultiSourceFlag"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Rule.MultiSourceFlag` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_multiSourceFlag = value["MultiSourceFlag"].GetBool();
        m_multiSourceFlagHasBeenSet = true;
    }

    if (value.HasMember("WhereFlag") && !value["WhereFlag"].IsNull())
    {
        if (!value["WhereFlag"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Rule.WhereFlag` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_whereFlag = value["WhereFlag"].GetBool();
        m_whereFlagHasBeenSet = true;
    }

    if (value.HasMember("TemplateSql") && !value["TemplateSql"].IsNull())
    {
        if (!value["TemplateSql"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Rule.TemplateSql` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateSql = string(value["TemplateSql"].GetString());
        m_templateSqlHasBeenSet = true;
    }

    if (value.HasMember("SubQualityDim") && !value["SubQualityDim"].IsNull())
    {
        if (!value["SubQualityDim"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Rule.SubQualityDim` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_subQualityDim = value["SubQualityDim"].GetUint64();
        m_subQualityDimHasBeenSet = true;
    }

    if (value.HasMember("TargetObjectType") && !value["TargetObjectType"].IsNull())
    {
        if (!value["TargetObjectType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Rule.TargetObjectType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_targetObjectType = value["TargetObjectType"].GetUint64();
        m_targetObjectTypeHasBeenSet = true;
    }

    if (value.HasMember("TargetObjectDataType") && !value["TargetObjectDataType"].IsNull())
    {
        if (!value["TargetObjectDataType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Rule.TargetObjectDataType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_targetObjectDataType = value["TargetObjectDataType"].GetUint64();
        m_targetObjectDataTypeHasBeenSet = true;
    }

    if (value.HasMember("TargetObjectDataTypeName") && !value["TargetObjectDataTypeName"].IsNull())
    {
        if (!value["TargetObjectDataTypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Rule.TargetObjectDataTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetObjectDataTypeName = string(value["TargetObjectDataTypeName"].GetString());
        m_targetObjectDataTypeNameHasBeenSet = true;
    }

    if (value.HasMember("TargetObjectValue") && !value["TargetObjectValue"].IsNull())
    {
        if (!value["TargetObjectValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Rule.TargetObjectValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetObjectValue = string(value["TargetObjectValue"].GetString());
        m_targetObjectValueHasBeenSet = true;
    }

    if (value.HasMember("SourceEngineTypes") && !value["SourceEngineTypes"].IsNull())
    {
        if (!value["SourceEngineTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Rule.SourceEngineTypes` is not array type"));

        const rapidjson::Value &tmpValue = value["SourceEngineTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_sourceEngineTypes.push_back((*itr).GetUint64());
        }
        m_sourceEngineTypesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Rule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleId, allocator);
    }

    if (m_ruleGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleGroupId, allocator);
    }

    if (m_tableIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_ruleTemplateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleTemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleTemplateId, allocator);
    }

    if (m_ruleTemplateContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleTemplateContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleTemplateContent.c_str(), allocator).Move(), allocator);
    }

    if (m_qualityDimHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QualityDim";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_qualityDim, allocator);
    }

    if (m_sourceObjectTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceObjectType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sourceObjectType, allocator);
    }

    if (m_sourceObjectDataTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceObjectDataType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sourceObjectDataType, allocator);
    }

    if (m_sourceObjectDataTypeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceObjectDataTypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceObjectDataTypeName.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceObjectValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceObjectValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceObjectValue.c_str(), allocator).Move(), allocator);
    }

    if (m_conditionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConditionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_conditionType, allocator);
    }

    if (m_conditionExpressionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConditionExpression";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_conditionExpression.c_str(), allocator).Move(), allocator);
    }

    if (m_customSqlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomSql";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customSql.c_str(), allocator).Move(), allocator);
    }

    if (m_compareRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompareRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_compareRule.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_alarmLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alarmLevel, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operator.c_str(), allocator).Move(), allocator);
    }

    if (m_targetDatabaseIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetDatabaseId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetDatabaseId.c_str(), allocator).Move(), allocator);
    }

    if (m_targetDatabaseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetDatabaseName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetDatabaseName.c_str(), allocator).Move(), allocator);
    }

    if (m_targetTableIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetTableId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetTableId.c_str(), allocator).Move(), allocator);
    }

    if (m_targetTableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetTableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetTableName.c_str(), allocator).Move(), allocator);
    }

    if (m_targetConditionExprHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetConditionExpr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetConditionExpr.c_str(), allocator).Move(), allocator);
    }

    if (m_relConditionExprHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelConditionExpr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_relConditionExpr.c_str(), allocator).Move(), allocator);
    }

    if (m_fieldConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FieldConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_fieldConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_multiSourceFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MultiSourceFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_multiSourceFlag, allocator);
    }

    if (m_whereFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WhereFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_whereFlag, allocator);
    }

    if (m_templateSqlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateSql";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateSql.c_str(), allocator).Move(), allocator);
    }

    if (m_subQualityDimHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubQualityDim";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_subQualityDim, allocator);
    }

    if (m_targetObjectTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetObjectType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_targetObjectType, allocator);
    }

    if (m_targetObjectDataTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetObjectDataType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_targetObjectDataType, allocator);
    }

    if (m_targetObjectDataTypeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetObjectDataTypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetObjectDataTypeName.c_str(), allocator).Move(), allocator);
    }

    if (m_targetObjectValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetObjectValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetObjectValue.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceEngineTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceEngineTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sourceEngineTypes.begin(); itr != m_sourceEngineTypes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

}


uint64_t Rule::GetRuleId() const
{
    return m_ruleId;
}

void Rule::SetRuleId(const uint64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool Rule::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

uint64_t Rule::GetRuleGroupId() const
{
    return m_ruleGroupId;
}

void Rule::SetRuleGroupId(const uint64_t& _ruleGroupId)
{
    m_ruleGroupId = _ruleGroupId;
    m_ruleGroupIdHasBeenSet = true;
}

bool Rule::RuleGroupIdHasBeenSet() const
{
    return m_ruleGroupIdHasBeenSet;
}

string Rule::GetTableId() const
{
    return m_tableId;
}

void Rule::SetTableId(const string& _tableId)
{
    m_tableId = _tableId;
    m_tableIdHasBeenSet = true;
}

bool Rule::TableIdHasBeenSet() const
{
    return m_tableIdHasBeenSet;
}

string Rule::GetName() const
{
    return m_name;
}

void Rule::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Rule::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t Rule::GetType() const
{
    return m_type;
}

void Rule::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool Rule::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

uint64_t Rule::GetRuleTemplateId() const
{
    return m_ruleTemplateId;
}

void Rule::SetRuleTemplateId(const uint64_t& _ruleTemplateId)
{
    m_ruleTemplateId = _ruleTemplateId;
    m_ruleTemplateIdHasBeenSet = true;
}

bool Rule::RuleTemplateIdHasBeenSet() const
{
    return m_ruleTemplateIdHasBeenSet;
}

string Rule::GetRuleTemplateContent() const
{
    return m_ruleTemplateContent;
}

void Rule::SetRuleTemplateContent(const string& _ruleTemplateContent)
{
    m_ruleTemplateContent = _ruleTemplateContent;
    m_ruleTemplateContentHasBeenSet = true;
}

bool Rule::RuleTemplateContentHasBeenSet() const
{
    return m_ruleTemplateContentHasBeenSet;
}

uint64_t Rule::GetQualityDim() const
{
    return m_qualityDim;
}

void Rule::SetQualityDim(const uint64_t& _qualityDim)
{
    m_qualityDim = _qualityDim;
    m_qualityDimHasBeenSet = true;
}

bool Rule::QualityDimHasBeenSet() const
{
    return m_qualityDimHasBeenSet;
}

uint64_t Rule::GetSourceObjectType() const
{
    return m_sourceObjectType;
}

void Rule::SetSourceObjectType(const uint64_t& _sourceObjectType)
{
    m_sourceObjectType = _sourceObjectType;
    m_sourceObjectTypeHasBeenSet = true;
}

bool Rule::SourceObjectTypeHasBeenSet() const
{
    return m_sourceObjectTypeHasBeenSet;
}

uint64_t Rule::GetSourceObjectDataType() const
{
    return m_sourceObjectDataType;
}

void Rule::SetSourceObjectDataType(const uint64_t& _sourceObjectDataType)
{
    m_sourceObjectDataType = _sourceObjectDataType;
    m_sourceObjectDataTypeHasBeenSet = true;
}

bool Rule::SourceObjectDataTypeHasBeenSet() const
{
    return m_sourceObjectDataTypeHasBeenSet;
}

string Rule::GetSourceObjectDataTypeName() const
{
    return m_sourceObjectDataTypeName;
}

void Rule::SetSourceObjectDataTypeName(const string& _sourceObjectDataTypeName)
{
    m_sourceObjectDataTypeName = _sourceObjectDataTypeName;
    m_sourceObjectDataTypeNameHasBeenSet = true;
}

bool Rule::SourceObjectDataTypeNameHasBeenSet() const
{
    return m_sourceObjectDataTypeNameHasBeenSet;
}

string Rule::GetSourceObjectValue() const
{
    return m_sourceObjectValue;
}

void Rule::SetSourceObjectValue(const string& _sourceObjectValue)
{
    m_sourceObjectValue = _sourceObjectValue;
    m_sourceObjectValueHasBeenSet = true;
}

bool Rule::SourceObjectValueHasBeenSet() const
{
    return m_sourceObjectValueHasBeenSet;
}

uint64_t Rule::GetConditionType() const
{
    return m_conditionType;
}

void Rule::SetConditionType(const uint64_t& _conditionType)
{
    m_conditionType = _conditionType;
    m_conditionTypeHasBeenSet = true;
}

bool Rule::ConditionTypeHasBeenSet() const
{
    return m_conditionTypeHasBeenSet;
}

string Rule::GetConditionExpression() const
{
    return m_conditionExpression;
}

void Rule::SetConditionExpression(const string& _conditionExpression)
{
    m_conditionExpression = _conditionExpression;
    m_conditionExpressionHasBeenSet = true;
}

bool Rule::ConditionExpressionHasBeenSet() const
{
    return m_conditionExpressionHasBeenSet;
}

string Rule::GetCustomSql() const
{
    return m_customSql;
}

void Rule::SetCustomSql(const string& _customSql)
{
    m_customSql = _customSql;
    m_customSqlHasBeenSet = true;
}

bool Rule::CustomSqlHasBeenSet() const
{
    return m_customSqlHasBeenSet;
}

CompareRule Rule::GetCompareRule() const
{
    return m_compareRule;
}

void Rule::SetCompareRule(const CompareRule& _compareRule)
{
    m_compareRule = _compareRule;
    m_compareRuleHasBeenSet = true;
}

bool Rule::CompareRuleHasBeenSet() const
{
    return m_compareRuleHasBeenSet;
}

uint64_t Rule::GetAlarmLevel() const
{
    return m_alarmLevel;
}

void Rule::SetAlarmLevel(const uint64_t& _alarmLevel)
{
    m_alarmLevel = _alarmLevel;
    m_alarmLevelHasBeenSet = true;
}

bool Rule::AlarmLevelHasBeenSet() const
{
    return m_alarmLevelHasBeenSet;
}

string Rule::GetDescription() const
{
    return m_description;
}

void Rule::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool Rule::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string Rule::GetOperator() const
{
    return m_operator;
}

void Rule::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool Rule::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string Rule::GetTargetDatabaseId() const
{
    return m_targetDatabaseId;
}

void Rule::SetTargetDatabaseId(const string& _targetDatabaseId)
{
    m_targetDatabaseId = _targetDatabaseId;
    m_targetDatabaseIdHasBeenSet = true;
}

bool Rule::TargetDatabaseIdHasBeenSet() const
{
    return m_targetDatabaseIdHasBeenSet;
}

string Rule::GetTargetDatabaseName() const
{
    return m_targetDatabaseName;
}

void Rule::SetTargetDatabaseName(const string& _targetDatabaseName)
{
    m_targetDatabaseName = _targetDatabaseName;
    m_targetDatabaseNameHasBeenSet = true;
}

bool Rule::TargetDatabaseNameHasBeenSet() const
{
    return m_targetDatabaseNameHasBeenSet;
}

string Rule::GetTargetTableId() const
{
    return m_targetTableId;
}

void Rule::SetTargetTableId(const string& _targetTableId)
{
    m_targetTableId = _targetTableId;
    m_targetTableIdHasBeenSet = true;
}

bool Rule::TargetTableIdHasBeenSet() const
{
    return m_targetTableIdHasBeenSet;
}

string Rule::GetTargetTableName() const
{
    return m_targetTableName;
}

void Rule::SetTargetTableName(const string& _targetTableName)
{
    m_targetTableName = _targetTableName;
    m_targetTableNameHasBeenSet = true;
}

bool Rule::TargetTableNameHasBeenSet() const
{
    return m_targetTableNameHasBeenSet;
}

string Rule::GetTargetConditionExpr() const
{
    return m_targetConditionExpr;
}

void Rule::SetTargetConditionExpr(const string& _targetConditionExpr)
{
    m_targetConditionExpr = _targetConditionExpr;
    m_targetConditionExprHasBeenSet = true;
}

bool Rule::TargetConditionExprHasBeenSet() const
{
    return m_targetConditionExprHasBeenSet;
}

string Rule::GetRelConditionExpr() const
{
    return m_relConditionExpr;
}

void Rule::SetRelConditionExpr(const string& _relConditionExpr)
{
    m_relConditionExpr = _relConditionExpr;
    m_relConditionExprHasBeenSet = true;
}

bool Rule::RelConditionExprHasBeenSet() const
{
    return m_relConditionExprHasBeenSet;
}

RuleFieldConfig Rule::GetFieldConfig() const
{
    return m_fieldConfig;
}

void Rule::SetFieldConfig(const RuleFieldConfig& _fieldConfig)
{
    m_fieldConfig = _fieldConfig;
    m_fieldConfigHasBeenSet = true;
}

bool Rule::FieldConfigHasBeenSet() const
{
    return m_fieldConfigHasBeenSet;
}

bool Rule::GetMultiSourceFlag() const
{
    return m_multiSourceFlag;
}

void Rule::SetMultiSourceFlag(const bool& _multiSourceFlag)
{
    m_multiSourceFlag = _multiSourceFlag;
    m_multiSourceFlagHasBeenSet = true;
}

bool Rule::MultiSourceFlagHasBeenSet() const
{
    return m_multiSourceFlagHasBeenSet;
}

bool Rule::GetWhereFlag() const
{
    return m_whereFlag;
}

void Rule::SetWhereFlag(const bool& _whereFlag)
{
    m_whereFlag = _whereFlag;
    m_whereFlagHasBeenSet = true;
}

bool Rule::WhereFlagHasBeenSet() const
{
    return m_whereFlagHasBeenSet;
}

string Rule::GetTemplateSql() const
{
    return m_templateSql;
}

void Rule::SetTemplateSql(const string& _templateSql)
{
    m_templateSql = _templateSql;
    m_templateSqlHasBeenSet = true;
}

bool Rule::TemplateSqlHasBeenSet() const
{
    return m_templateSqlHasBeenSet;
}

uint64_t Rule::GetSubQualityDim() const
{
    return m_subQualityDim;
}

void Rule::SetSubQualityDim(const uint64_t& _subQualityDim)
{
    m_subQualityDim = _subQualityDim;
    m_subQualityDimHasBeenSet = true;
}

bool Rule::SubQualityDimHasBeenSet() const
{
    return m_subQualityDimHasBeenSet;
}

uint64_t Rule::GetTargetObjectType() const
{
    return m_targetObjectType;
}

void Rule::SetTargetObjectType(const uint64_t& _targetObjectType)
{
    m_targetObjectType = _targetObjectType;
    m_targetObjectTypeHasBeenSet = true;
}

bool Rule::TargetObjectTypeHasBeenSet() const
{
    return m_targetObjectTypeHasBeenSet;
}

uint64_t Rule::GetTargetObjectDataType() const
{
    return m_targetObjectDataType;
}

void Rule::SetTargetObjectDataType(const uint64_t& _targetObjectDataType)
{
    m_targetObjectDataType = _targetObjectDataType;
    m_targetObjectDataTypeHasBeenSet = true;
}

bool Rule::TargetObjectDataTypeHasBeenSet() const
{
    return m_targetObjectDataTypeHasBeenSet;
}

string Rule::GetTargetObjectDataTypeName() const
{
    return m_targetObjectDataTypeName;
}

void Rule::SetTargetObjectDataTypeName(const string& _targetObjectDataTypeName)
{
    m_targetObjectDataTypeName = _targetObjectDataTypeName;
    m_targetObjectDataTypeNameHasBeenSet = true;
}

bool Rule::TargetObjectDataTypeNameHasBeenSet() const
{
    return m_targetObjectDataTypeNameHasBeenSet;
}

string Rule::GetTargetObjectValue() const
{
    return m_targetObjectValue;
}

void Rule::SetTargetObjectValue(const string& _targetObjectValue)
{
    m_targetObjectValue = _targetObjectValue;
    m_targetObjectValueHasBeenSet = true;
}

bool Rule::TargetObjectValueHasBeenSet() const
{
    return m_targetObjectValueHasBeenSet;
}

vector<uint64_t> Rule::GetSourceEngineTypes() const
{
    return m_sourceEngineTypes;
}

void Rule::SetSourceEngineTypes(const vector<uint64_t>& _sourceEngineTypes)
{
    m_sourceEngineTypes = _sourceEngineTypes;
    m_sourceEngineTypesHasBeenSet = true;
}

bool Rule::SourceEngineTypesHasBeenSet() const
{
    return m_sourceEngineTypesHasBeenSet;
}

