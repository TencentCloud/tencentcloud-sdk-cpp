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

#include <tencentcloud/wedata/v20250806/model/QualityRuleInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

QualityRuleInfo::QualityRuleInfo() :
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_datasourceIdHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_compareRuleHasBeenSet(false),
    m_alarmLevelHasBeenSet(false),
    m_sourceEngineTypesHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_ruleTemplateIdHasBeenSet(false),
    m_qualityDimHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_ruleGroupIdHasBeenSet(false),
    m_tableIdHasBeenSet(false),
    m_sourceObjectDataTypeNameHasBeenSet(false),
    m_sourceObjectValueHasBeenSet(false),
    m_conditionTypeHasBeenSet(false),
    m_conditionExpressionHasBeenSet(false),
    m_customSqlHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_databaseIdHasBeenSet(false),
    m_targetDatabaseIdHasBeenSet(false),
    m_targetTableIdHasBeenSet(false),
    m_targetConditionExprHasBeenSet(false),
    m_relConditionExprHasBeenSet(false),
    m_fieldConfigHasBeenSet(false),
    m_targetObjectValueHasBeenSet(false),
    m_indexHasBeenSet(false),
    m_schemaNameHasBeenSet(false),
    m_targetSchemaNameHasBeenSet(false),
    m_targetDatabaseNameHasBeenSet(false),
    m_targetTableNameHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_catalogNameHasBeenSet(false),
    m_targetCatalogNameHasBeenSet(false)
{
}

CoreInternalOutcome QualityRuleInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleInfo.Type` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetUint64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("DatasourceId") && !value["DatasourceId"].IsNull())
    {
        if (!value["DatasourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleInfo.DatasourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasourceId = string(value["DatasourceId"].GetString());
        m_datasourceIdHasBeenSet = true;
    }

    if (value.HasMember("DatabaseName") && !value["DatabaseName"].IsNull())
    {
        if (!value["DatabaseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleInfo.DatabaseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseName = string(value["DatabaseName"].GetString());
        m_databaseNameHasBeenSet = true;
    }

    if (value.HasMember("CompareRule") && !value["CompareRule"].IsNull())
    {
        if (!value["CompareRule"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleInfo.CompareRule` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `QualityRuleInfo.AlarmLevel` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmLevel = value["AlarmLevel"].GetUint64();
        m_alarmLevelHasBeenSet = true;
    }

    if (value.HasMember("SourceEngineTypes") && !value["SourceEngineTypes"].IsNull())
    {
        if (!value["SourceEngineTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `QualityRuleInfo.SourceEngineTypes` is not array type"));

        const rapidjson::Value &tmpValue = value["SourceEngineTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_sourceEngineTypes.push_back((*itr).GetUint64());
        }
        m_sourceEngineTypesHasBeenSet = true;
    }

    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleInfo.TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(value["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }

    if (value.HasMember("RuleTemplateId") && !value["RuleTemplateId"].IsNull())
    {
        if (!value["RuleTemplateId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleInfo.RuleTemplateId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleTemplateId = value["RuleTemplateId"].GetUint64();
        m_ruleTemplateIdHasBeenSet = true;
    }

    if (value.HasMember("QualityDim") && !value["QualityDim"].IsNull())
    {
        if (!value["QualityDim"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleInfo.QualityDim` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_qualityDim = value["QualityDim"].GetUint64();
        m_qualityDimHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleInfo.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("RuleGroupId") && !value["RuleGroupId"].IsNull())
    {
        if (!value["RuleGroupId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleInfo.RuleGroupId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleGroupId = value["RuleGroupId"].GetUint64();
        m_ruleGroupIdHasBeenSet = true;
    }

    if (value.HasMember("TableId") && !value["TableId"].IsNull())
    {
        if (!value["TableId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleInfo.TableId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableId = string(value["TableId"].GetString());
        m_tableIdHasBeenSet = true;
    }

    if (value.HasMember("SourceObjectDataTypeName") && !value["SourceObjectDataTypeName"].IsNull())
    {
        if (!value["SourceObjectDataTypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleInfo.SourceObjectDataTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceObjectDataTypeName = string(value["SourceObjectDataTypeName"].GetString());
        m_sourceObjectDataTypeNameHasBeenSet = true;
    }

    if (value.HasMember("SourceObjectValue") && !value["SourceObjectValue"].IsNull())
    {
        if (!value["SourceObjectValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleInfo.SourceObjectValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceObjectValue = string(value["SourceObjectValue"].GetString());
        m_sourceObjectValueHasBeenSet = true;
    }

    if (value.HasMember("ConditionType") && !value["ConditionType"].IsNull())
    {
        if (!value["ConditionType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleInfo.ConditionType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_conditionType = value["ConditionType"].GetUint64();
        m_conditionTypeHasBeenSet = true;
    }

    if (value.HasMember("ConditionExpression") && !value["ConditionExpression"].IsNull())
    {
        if (!value["ConditionExpression"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleInfo.ConditionExpression` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_conditionExpression = string(value["ConditionExpression"].GetString());
        m_conditionExpressionHasBeenSet = true;
    }

    if (value.HasMember("CustomSql") && !value["CustomSql"].IsNull())
    {
        if (!value["CustomSql"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleInfo.CustomSql` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customSql = string(value["CustomSql"].GetString());
        m_customSqlHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("DatabaseId") && !value["DatabaseId"].IsNull())
    {
        if (!value["DatabaseId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleInfo.DatabaseId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseId = string(value["DatabaseId"].GetString());
        m_databaseIdHasBeenSet = true;
    }

    if (value.HasMember("TargetDatabaseId") && !value["TargetDatabaseId"].IsNull())
    {
        if (!value["TargetDatabaseId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleInfo.TargetDatabaseId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetDatabaseId = string(value["TargetDatabaseId"].GetString());
        m_targetDatabaseIdHasBeenSet = true;
    }

    if (value.HasMember("TargetTableId") && !value["TargetTableId"].IsNull())
    {
        if (!value["TargetTableId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleInfo.TargetTableId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetTableId = string(value["TargetTableId"].GetString());
        m_targetTableIdHasBeenSet = true;
    }

    if (value.HasMember("TargetConditionExpr") && !value["TargetConditionExpr"].IsNull())
    {
        if (!value["TargetConditionExpr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleInfo.TargetConditionExpr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetConditionExpr = string(value["TargetConditionExpr"].GetString());
        m_targetConditionExprHasBeenSet = true;
    }

    if (value.HasMember("RelConditionExpr") && !value["RelConditionExpr"].IsNull())
    {
        if (!value["RelConditionExpr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleInfo.RelConditionExpr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_relConditionExpr = string(value["RelConditionExpr"].GetString());
        m_relConditionExprHasBeenSet = true;
    }

    if (value.HasMember("FieldConfig") && !value["FieldConfig"].IsNull())
    {
        if (!value["FieldConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleInfo.FieldConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_fieldConfig.Deserialize(value["FieldConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_fieldConfigHasBeenSet = true;
    }

    if (value.HasMember("TargetObjectValue") && !value["TargetObjectValue"].IsNull())
    {
        if (!value["TargetObjectValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleInfo.TargetObjectValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetObjectValue = string(value["TargetObjectValue"].GetString());
        m_targetObjectValueHasBeenSet = true;
    }

    if (value.HasMember("Index") && !value["Index"].IsNull())
    {
        if (!value["Index"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleInfo.Index` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_index = string(value["Index"].GetString());
        m_indexHasBeenSet = true;
    }

    if (value.HasMember("SchemaName") && !value["SchemaName"].IsNull())
    {
        if (!value["SchemaName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleInfo.SchemaName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schemaName = string(value["SchemaName"].GetString());
        m_schemaNameHasBeenSet = true;
    }

    if (value.HasMember("TargetSchemaName") && !value["TargetSchemaName"].IsNull())
    {
        if (!value["TargetSchemaName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleInfo.TargetSchemaName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetSchemaName = string(value["TargetSchemaName"].GetString());
        m_targetSchemaNameHasBeenSet = true;
    }

    if (value.HasMember("TargetDatabaseName") && !value["TargetDatabaseName"].IsNull())
    {
        if (!value["TargetDatabaseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleInfo.TargetDatabaseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetDatabaseName = string(value["TargetDatabaseName"].GetString());
        m_targetDatabaseNameHasBeenSet = true;
    }

    if (value.HasMember("TargetTableName") && !value["TargetTableName"].IsNull())
    {
        if (!value["TargetTableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleInfo.TargetTableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetTableName = string(value["TargetTableName"].GetString());
        m_targetTableNameHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleInfo.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("CatalogName") && !value["CatalogName"].IsNull())
    {
        if (!value["CatalogName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleInfo.CatalogName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_catalogName = string(value["CatalogName"].GetString());
        m_catalogNameHasBeenSet = true;
    }

    if (value.HasMember("TargetCatalogName") && !value["TargetCatalogName"].IsNull())
    {
        if (!value["TargetCatalogName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleInfo.TargetCatalogName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetCatalogName = string(value["TargetCatalogName"].GetString());
        m_targetCatalogNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QualityRuleInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_datasourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datasourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_databaseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_databaseName.c_str(), allocator).Move(), allocator);
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

    if (m_tableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableName.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleTemplateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleTemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleTemplateId, allocator);
    }

    if (m_qualityDimHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QualityDim";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_qualityDim, allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
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

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_databaseIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_databaseId.c_str(), allocator).Move(), allocator);
    }

    if (m_targetDatabaseIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetDatabaseId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetDatabaseId.c_str(), allocator).Move(), allocator);
    }

    if (m_targetTableIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetTableId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetTableId.c_str(), allocator).Move(), allocator);
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

    if (m_targetObjectValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetObjectValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetObjectValue.c_str(), allocator).Move(), allocator);
    }

    if (m_indexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Index";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_index.c_str(), allocator).Move(), allocator);
    }

    if (m_schemaNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchemaName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_schemaName.c_str(), allocator).Move(), allocator);
    }

    if (m_targetSchemaNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetSchemaName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetSchemaName.c_str(), allocator).Move(), allocator);
    }

    if (m_targetDatabaseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetDatabaseName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetDatabaseName.c_str(), allocator).Move(), allocator);
    }

    if (m_targetTableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetTableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetTableName.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_catalogNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CatalogName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_catalogName.c_str(), allocator).Move(), allocator);
    }

    if (m_targetCatalogNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetCatalogName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetCatalogName.c_str(), allocator).Move(), allocator);
    }

}


string QualityRuleInfo::GetName() const
{
    return m_name;
}

void QualityRuleInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool QualityRuleInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t QualityRuleInfo::GetType() const
{
    return m_type;
}

void QualityRuleInfo::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool QualityRuleInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string QualityRuleInfo::GetDatasourceId() const
{
    return m_datasourceId;
}

void QualityRuleInfo::SetDatasourceId(const string& _datasourceId)
{
    m_datasourceId = _datasourceId;
    m_datasourceIdHasBeenSet = true;
}

bool QualityRuleInfo::DatasourceIdHasBeenSet() const
{
    return m_datasourceIdHasBeenSet;
}

string QualityRuleInfo::GetDatabaseName() const
{
    return m_databaseName;
}

void QualityRuleInfo::SetDatabaseName(const string& _databaseName)
{
    m_databaseName = _databaseName;
    m_databaseNameHasBeenSet = true;
}

bool QualityRuleInfo::DatabaseNameHasBeenSet() const
{
    return m_databaseNameHasBeenSet;
}

QualityCompareRule QualityRuleInfo::GetCompareRule() const
{
    return m_compareRule;
}

void QualityRuleInfo::SetCompareRule(const QualityCompareRule& _compareRule)
{
    m_compareRule = _compareRule;
    m_compareRuleHasBeenSet = true;
}

bool QualityRuleInfo::CompareRuleHasBeenSet() const
{
    return m_compareRuleHasBeenSet;
}

uint64_t QualityRuleInfo::GetAlarmLevel() const
{
    return m_alarmLevel;
}

void QualityRuleInfo::SetAlarmLevel(const uint64_t& _alarmLevel)
{
    m_alarmLevel = _alarmLevel;
    m_alarmLevelHasBeenSet = true;
}

bool QualityRuleInfo::AlarmLevelHasBeenSet() const
{
    return m_alarmLevelHasBeenSet;
}

vector<uint64_t> QualityRuleInfo::GetSourceEngineTypes() const
{
    return m_sourceEngineTypes;
}

void QualityRuleInfo::SetSourceEngineTypes(const vector<uint64_t>& _sourceEngineTypes)
{
    m_sourceEngineTypes = _sourceEngineTypes;
    m_sourceEngineTypesHasBeenSet = true;
}

bool QualityRuleInfo::SourceEngineTypesHasBeenSet() const
{
    return m_sourceEngineTypesHasBeenSet;
}

string QualityRuleInfo::GetTableName() const
{
    return m_tableName;
}

void QualityRuleInfo::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool QualityRuleInfo::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

uint64_t QualityRuleInfo::GetRuleTemplateId() const
{
    return m_ruleTemplateId;
}

void QualityRuleInfo::SetRuleTemplateId(const uint64_t& _ruleTemplateId)
{
    m_ruleTemplateId = _ruleTemplateId;
    m_ruleTemplateIdHasBeenSet = true;
}

bool QualityRuleInfo::RuleTemplateIdHasBeenSet() const
{
    return m_ruleTemplateIdHasBeenSet;
}

uint64_t QualityRuleInfo::GetQualityDim() const
{
    return m_qualityDim;
}

void QualityRuleInfo::SetQualityDim(const uint64_t& _qualityDim)
{
    m_qualityDim = _qualityDim;
    m_qualityDimHasBeenSet = true;
}

bool QualityRuleInfo::QualityDimHasBeenSet() const
{
    return m_qualityDimHasBeenSet;
}

string QualityRuleInfo::GetProjectId() const
{
    return m_projectId;
}

void QualityRuleInfo::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool QualityRuleInfo::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

uint64_t QualityRuleInfo::GetRuleGroupId() const
{
    return m_ruleGroupId;
}

void QualityRuleInfo::SetRuleGroupId(const uint64_t& _ruleGroupId)
{
    m_ruleGroupId = _ruleGroupId;
    m_ruleGroupIdHasBeenSet = true;
}

bool QualityRuleInfo::RuleGroupIdHasBeenSet() const
{
    return m_ruleGroupIdHasBeenSet;
}

string QualityRuleInfo::GetTableId() const
{
    return m_tableId;
}

void QualityRuleInfo::SetTableId(const string& _tableId)
{
    m_tableId = _tableId;
    m_tableIdHasBeenSet = true;
}

bool QualityRuleInfo::TableIdHasBeenSet() const
{
    return m_tableIdHasBeenSet;
}

string QualityRuleInfo::GetSourceObjectDataTypeName() const
{
    return m_sourceObjectDataTypeName;
}

void QualityRuleInfo::SetSourceObjectDataTypeName(const string& _sourceObjectDataTypeName)
{
    m_sourceObjectDataTypeName = _sourceObjectDataTypeName;
    m_sourceObjectDataTypeNameHasBeenSet = true;
}

bool QualityRuleInfo::SourceObjectDataTypeNameHasBeenSet() const
{
    return m_sourceObjectDataTypeNameHasBeenSet;
}

string QualityRuleInfo::GetSourceObjectValue() const
{
    return m_sourceObjectValue;
}

void QualityRuleInfo::SetSourceObjectValue(const string& _sourceObjectValue)
{
    m_sourceObjectValue = _sourceObjectValue;
    m_sourceObjectValueHasBeenSet = true;
}

bool QualityRuleInfo::SourceObjectValueHasBeenSet() const
{
    return m_sourceObjectValueHasBeenSet;
}

uint64_t QualityRuleInfo::GetConditionType() const
{
    return m_conditionType;
}

void QualityRuleInfo::SetConditionType(const uint64_t& _conditionType)
{
    m_conditionType = _conditionType;
    m_conditionTypeHasBeenSet = true;
}

bool QualityRuleInfo::ConditionTypeHasBeenSet() const
{
    return m_conditionTypeHasBeenSet;
}

string QualityRuleInfo::GetConditionExpression() const
{
    return m_conditionExpression;
}

void QualityRuleInfo::SetConditionExpression(const string& _conditionExpression)
{
    m_conditionExpression = _conditionExpression;
    m_conditionExpressionHasBeenSet = true;
}

bool QualityRuleInfo::ConditionExpressionHasBeenSet() const
{
    return m_conditionExpressionHasBeenSet;
}

string QualityRuleInfo::GetCustomSql() const
{
    return m_customSql;
}

void QualityRuleInfo::SetCustomSql(const string& _customSql)
{
    m_customSql = _customSql;
    m_customSqlHasBeenSet = true;
}

bool QualityRuleInfo::CustomSqlHasBeenSet() const
{
    return m_customSqlHasBeenSet;
}

string QualityRuleInfo::GetDescription() const
{
    return m_description;
}

void QualityRuleInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool QualityRuleInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string QualityRuleInfo::GetDatabaseId() const
{
    return m_databaseId;
}

void QualityRuleInfo::SetDatabaseId(const string& _databaseId)
{
    m_databaseId = _databaseId;
    m_databaseIdHasBeenSet = true;
}

bool QualityRuleInfo::DatabaseIdHasBeenSet() const
{
    return m_databaseIdHasBeenSet;
}

string QualityRuleInfo::GetTargetDatabaseId() const
{
    return m_targetDatabaseId;
}

void QualityRuleInfo::SetTargetDatabaseId(const string& _targetDatabaseId)
{
    m_targetDatabaseId = _targetDatabaseId;
    m_targetDatabaseIdHasBeenSet = true;
}

bool QualityRuleInfo::TargetDatabaseIdHasBeenSet() const
{
    return m_targetDatabaseIdHasBeenSet;
}

string QualityRuleInfo::GetTargetTableId() const
{
    return m_targetTableId;
}

void QualityRuleInfo::SetTargetTableId(const string& _targetTableId)
{
    m_targetTableId = _targetTableId;
    m_targetTableIdHasBeenSet = true;
}

bool QualityRuleInfo::TargetTableIdHasBeenSet() const
{
    return m_targetTableIdHasBeenSet;
}

string QualityRuleInfo::GetTargetConditionExpr() const
{
    return m_targetConditionExpr;
}

void QualityRuleInfo::SetTargetConditionExpr(const string& _targetConditionExpr)
{
    m_targetConditionExpr = _targetConditionExpr;
    m_targetConditionExprHasBeenSet = true;
}

bool QualityRuleInfo::TargetConditionExprHasBeenSet() const
{
    return m_targetConditionExprHasBeenSet;
}

string QualityRuleInfo::GetRelConditionExpr() const
{
    return m_relConditionExpr;
}

void QualityRuleInfo::SetRelConditionExpr(const string& _relConditionExpr)
{
    m_relConditionExpr = _relConditionExpr;
    m_relConditionExprHasBeenSet = true;
}

bool QualityRuleInfo::RelConditionExprHasBeenSet() const
{
    return m_relConditionExprHasBeenSet;
}

QualityRuleFieldConfig QualityRuleInfo::GetFieldConfig() const
{
    return m_fieldConfig;
}

void QualityRuleInfo::SetFieldConfig(const QualityRuleFieldConfig& _fieldConfig)
{
    m_fieldConfig = _fieldConfig;
    m_fieldConfigHasBeenSet = true;
}

bool QualityRuleInfo::FieldConfigHasBeenSet() const
{
    return m_fieldConfigHasBeenSet;
}

string QualityRuleInfo::GetTargetObjectValue() const
{
    return m_targetObjectValue;
}

void QualityRuleInfo::SetTargetObjectValue(const string& _targetObjectValue)
{
    m_targetObjectValue = _targetObjectValue;
    m_targetObjectValueHasBeenSet = true;
}

bool QualityRuleInfo::TargetObjectValueHasBeenSet() const
{
    return m_targetObjectValueHasBeenSet;
}

string QualityRuleInfo::GetIndex() const
{
    return m_index;
}

void QualityRuleInfo::SetIndex(const string& _index)
{
    m_index = _index;
    m_indexHasBeenSet = true;
}

bool QualityRuleInfo::IndexHasBeenSet() const
{
    return m_indexHasBeenSet;
}

string QualityRuleInfo::GetSchemaName() const
{
    return m_schemaName;
}

void QualityRuleInfo::SetSchemaName(const string& _schemaName)
{
    m_schemaName = _schemaName;
    m_schemaNameHasBeenSet = true;
}

bool QualityRuleInfo::SchemaNameHasBeenSet() const
{
    return m_schemaNameHasBeenSet;
}

string QualityRuleInfo::GetTargetSchemaName() const
{
    return m_targetSchemaName;
}

void QualityRuleInfo::SetTargetSchemaName(const string& _targetSchemaName)
{
    m_targetSchemaName = _targetSchemaName;
    m_targetSchemaNameHasBeenSet = true;
}

bool QualityRuleInfo::TargetSchemaNameHasBeenSet() const
{
    return m_targetSchemaNameHasBeenSet;
}

string QualityRuleInfo::GetTargetDatabaseName() const
{
    return m_targetDatabaseName;
}

void QualityRuleInfo::SetTargetDatabaseName(const string& _targetDatabaseName)
{
    m_targetDatabaseName = _targetDatabaseName;
    m_targetDatabaseNameHasBeenSet = true;
}

bool QualityRuleInfo::TargetDatabaseNameHasBeenSet() const
{
    return m_targetDatabaseNameHasBeenSet;
}

string QualityRuleInfo::GetTargetTableName() const
{
    return m_targetTableName;
}

void QualityRuleInfo::SetTargetTableName(const string& _targetTableName)
{
    m_targetTableName = _targetTableName;
    m_targetTableNameHasBeenSet = true;
}

bool QualityRuleInfo::TargetTableNameHasBeenSet() const
{
    return m_targetTableNameHasBeenSet;
}

string QualityRuleInfo::GetTaskId() const
{
    return m_taskId;
}

void QualityRuleInfo::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool QualityRuleInfo::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string QualityRuleInfo::GetCatalogName() const
{
    return m_catalogName;
}

void QualityRuleInfo::SetCatalogName(const string& _catalogName)
{
    m_catalogName = _catalogName;
    m_catalogNameHasBeenSet = true;
}

bool QualityRuleInfo::CatalogNameHasBeenSet() const
{
    return m_catalogNameHasBeenSet;
}

string QualityRuleInfo::GetTargetCatalogName() const
{
    return m_targetCatalogName;
}

void QualityRuleInfo::SetTargetCatalogName(const string& _targetCatalogName)
{
    m_targetCatalogName = _targetCatalogName;
    m_targetCatalogNameHasBeenSet = true;
}

bool QualityRuleInfo::TargetCatalogNameHasBeenSet() const
{
    return m_targetCatalogNameHasBeenSet;
}

