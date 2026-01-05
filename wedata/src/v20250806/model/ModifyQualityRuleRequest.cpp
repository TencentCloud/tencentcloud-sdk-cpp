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

#include <tencentcloud/wedata/v20250806/model/ModifyQualityRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

ModifyQualityRuleRequest::ModifyQualityRuleRequest() :
    m_projectIdHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_compareRuleHasBeenSet(false),
    m_alarmLevelHasBeenSet(false),
    m_tableIdHasBeenSet(false),
    m_ruleTemplateIdHasBeenSet(false),
    m_qualityDimHasBeenSet(false),
    m_ruleGroupIdHasBeenSet(false),
    m_sourceObjectDataTypeNameHasBeenSet(false),
    m_sourceObjectValueHasBeenSet(false),
    m_conditionTypeHasBeenSet(false),
    m_conditionExpressionHasBeenSet(false),
    m_customSqlHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_targetDatabaseIdHasBeenSet(false),
    m_targetTableIdHasBeenSet(false),
    m_targetConditionExprHasBeenSet(false),
    m_relConditionExprHasBeenSet(false),
    m_fieldConfigHasBeenSet(false),
    m_targetObjectValueHasBeenSet(false),
    m_sourceEngineTypesHasBeenSet(false),
    m_targetDatabaseNameHasBeenSet(false),
    m_targetSchemaNameHasBeenSet(false),
    m_targetTableNameHasBeenSet(false),
    m_catalogNameHasBeenSet(false),
    m_targetCatalogNameHasBeenSet(false)
{
}

string ModifyQualityRuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ruleId, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_type, allocator);
    }

    if (m_compareRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompareRule";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_compareRule.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_alarmLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmLevel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_alarmLevel, allocator);
    }

    if (m_tableIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tableId.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleTemplateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleTemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ruleTemplateId, allocator);
    }

    if (m_qualityDimHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QualityDim";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_qualityDim, allocator);
    }

    if (m_ruleGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ruleGroupId, allocator);
    }

    if (m_sourceObjectDataTypeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceObjectDataTypeName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceObjectDataTypeName.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceObjectValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceObjectValue";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceObjectValue.c_str(), allocator).Move(), allocator);
    }

    if (m_conditionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConditionType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_conditionType, allocator);
    }

    if (m_conditionExpressionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConditionExpression";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_conditionExpression.c_str(), allocator).Move(), allocator);
    }

    if (m_customSqlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomSql";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_customSql.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_targetDatabaseIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetDatabaseId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetDatabaseId.c_str(), allocator).Move(), allocator);
    }

    if (m_targetTableIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetTableId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetTableId.c_str(), allocator).Move(), allocator);
    }

    if (m_targetConditionExprHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetConditionExpr";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetConditionExpr.c_str(), allocator).Move(), allocator);
    }

    if (m_relConditionExprHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelConditionExpr";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_relConditionExpr.c_str(), allocator).Move(), allocator);
    }

    if (m_fieldConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FieldConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_fieldConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_targetObjectValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetObjectValue";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetObjectValue.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceEngineTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceEngineTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sourceEngineTypes.begin(); itr != m_sourceEngineTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_targetDatabaseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetDatabaseName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetDatabaseName.c_str(), allocator).Move(), allocator);
    }

    if (m_targetSchemaNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetSchemaName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetSchemaName.c_str(), allocator).Move(), allocator);
    }

    if (m_targetTableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetTableName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetTableName.c_str(), allocator).Move(), allocator);
    }

    if (m_catalogNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CatalogName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_catalogName.c_str(), allocator).Move(), allocator);
    }

    if (m_targetCatalogNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetCatalogName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetCatalogName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyQualityRuleRequest::GetProjectId() const
{
    return m_projectId;
}

void ModifyQualityRuleRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ModifyQualityRuleRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

uint64_t ModifyQualityRuleRequest::GetRuleId() const
{
    return m_ruleId;
}

void ModifyQualityRuleRequest::SetRuleId(const uint64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool ModifyQualityRuleRequest::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string ModifyQualityRuleRequest::GetName() const
{
    return m_name;
}

void ModifyQualityRuleRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyQualityRuleRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t ModifyQualityRuleRequest::GetType() const
{
    return m_type;
}

void ModifyQualityRuleRequest::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ModifyQualityRuleRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

QualityCompareRule ModifyQualityRuleRequest::GetCompareRule() const
{
    return m_compareRule;
}

void ModifyQualityRuleRequest::SetCompareRule(const QualityCompareRule& _compareRule)
{
    m_compareRule = _compareRule;
    m_compareRuleHasBeenSet = true;
}

bool ModifyQualityRuleRequest::CompareRuleHasBeenSet() const
{
    return m_compareRuleHasBeenSet;
}

uint64_t ModifyQualityRuleRequest::GetAlarmLevel() const
{
    return m_alarmLevel;
}

void ModifyQualityRuleRequest::SetAlarmLevel(const uint64_t& _alarmLevel)
{
    m_alarmLevel = _alarmLevel;
    m_alarmLevelHasBeenSet = true;
}

bool ModifyQualityRuleRequest::AlarmLevelHasBeenSet() const
{
    return m_alarmLevelHasBeenSet;
}

string ModifyQualityRuleRequest::GetTableId() const
{
    return m_tableId;
}

void ModifyQualityRuleRequest::SetTableId(const string& _tableId)
{
    m_tableId = _tableId;
    m_tableIdHasBeenSet = true;
}

bool ModifyQualityRuleRequest::TableIdHasBeenSet() const
{
    return m_tableIdHasBeenSet;
}

uint64_t ModifyQualityRuleRequest::GetRuleTemplateId() const
{
    return m_ruleTemplateId;
}

void ModifyQualityRuleRequest::SetRuleTemplateId(const uint64_t& _ruleTemplateId)
{
    m_ruleTemplateId = _ruleTemplateId;
    m_ruleTemplateIdHasBeenSet = true;
}

bool ModifyQualityRuleRequest::RuleTemplateIdHasBeenSet() const
{
    return m_ruleTemplateIdHasBeenSet;
}

uint64_t ModifyQualityRuleRequest::GetQualityDim() const
{
    return m_qualityDim;
}

void ModifyQualityRuleRequest::SetQualityDim(const uint64_t& _qualityDim)
{
    m_qualityDim = _qualityDim;
    m_qualityDimHasBeenSet = true;
}

bool ModifyQualityRuleRequest::QualityDimHasBeenSet() const
{
    return m_qualityDimHasBeenSet;
}

uint64_t ModifyQualityRuleRequest::GetRuleGroupId() const
{
    return m_ruleGroupId;
}

void ModifyQualityRuleRequest::SetRuleGroupId(const uint64_t& _ruleGroupId)
{
    m_ruleGroupId = _ruleGroupId;
    m_ruleGroupIdHasBeenSet = true;
}

bool ModifyQualityRuleRequest::RuleGroupIdHasBeenSet() const
{
    return m_ruleGroupIdHasBeenSet;
}

string ModifyQualityRuleRequest::GetSourceObjectDataTypeName() const
{
    return m_sourceObjectDataTypeName;
}

void ModifyQualityRuleRequest::SetSourceObjectDataTypeName(const string& _sourceObjectDataTypeName)
{
    m_sourceObjectDataTypeName = _sourceObjectDataTypeName;
    m_sourceObjectDataTypeNameHasBeenSet = true;
}

bool ModifyQualityRuleRequest::SourceObjectDataTypeNameHasBeenSet() const
{
    return m_sourceObjectDataTypeNameHasBeenSet;
}

string ModifyQualityRuleRequest::GetSourceObjectValue() const
{
    return m_sourceObjectValue;
}

void ModifyQualityRuleRequest::SetSourceObjectValue(const string& _sourceObjectValue)
{
    m_sourceObjectValue = _sourceObjectValue;
    m_sourceObjectValueHasBeenSet = true;
}

bool ModifyQualityRuleRequest::SourceObjectValueHasBeenSet() const
{
    return m_sourceObjectValueHasBeenSet;
}

uint64_t ModifyQualityRuleRequest::GetConditionType() const
{
    return m_conditionType;
}

void ModifyQualityRuleRequest::SetConditionType(const uint64_t& _conditionType)
{
    m_conditionType = _conditionType;
    m_conditionTypeHasBeenSet = true;
}

bool ModifyQualityRuleRequest::ConditionTypeHasBeenSet() const
{
    return m_conditionTypeHasBeenSet;
}

string ModifyQualityRuleRequest::GetConditionExpression() const
{
    return m_conditionExpression;
}

void ModifyQualityRuleRequest::SetConditionExpression(const string& _conditionExpression)
{
    m_conditionExpression = _conditionExpression;
    m_conditionExpressionHasBeenSet = true;
}

bool ModifyQualityRuleRequest::ConditionExpressionHasBeenSet() const
{
    return m_conditionExpressionHasBeenSet;
}

string ModifyQualityRuleRequest::GetCustomSql() const
{
    return m_customSql;
}

void ModifyQualityRuleRequest::SetCustomSql(const string& _customSql)
{
    m_customSql = _customSql;
    m_customSqlHasBeenSet = true;
}

bool ModifyQualityRuleRequest::CustomSqlHasBeenSet() const
{
    return m_customSqlHasBeenSet;
}

string ModifyQualityRuleRequest::GetDescription() const
{
    return m_description;
}

void ModifyQualityRuleRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifyQualityRuleRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string ModifyQualityRuleRequest::GetTargetDatabaseId() const
{
    return m_targetDatabaseId;
}

void ModifyQualityRuleRequest::SetTargetDatabaseId(const string& _targetDatabaseId)
{
    m_targetDatabaseId = _targetDatabaseId;
    m_targetDatabaseIdHasBeenSet = true;
}

bool ModifyQualityRuleRequest::TargetDatabaseIdHasBeenSet() const
{
    return m_targetDatabaseIdHasBeenSet;
}

string ModifyQualityRuleRequest::GetTargetTableId() const
{
    return m_targetTableId;
}

void ModifyQualityRuleRequest::SetTargetTableId(const string& _targetTableId)
{
    m_targetTableId = _targetTableId;
    m_targetTableIdHasBeenSet = true;
}

bool ModifyQualityRuleRequest::TargetTableIdHasBeenSet() const
{
    return m_targetTableIdHasBeenSet;
}

string ModifyQualityRuleRequest::GetTargetConditionExpr() const
{
    return m_targetConditionExpr;
}

void ModifyQualityRuleRequest::SetTargetConditionExpr(const string& _targetConditionExpr)
{
    m_targetConditionExpr = _targetConditionExpr;
    m_targetConditionExprHasBeenSet = true;
}

bool ModifyQualityRuleRequest::TargetConditionExprHasBeenSet() const
{
    return m_targetConditionExprHasBeenSet;
}

string ModifyQualityRuleRequest::GetRelConditionExpr() const
{
    return m_relConditionExpr;
}

void ModifyQualityRuleRequest::SetRelConditionExpr(const string& _relConditionExpr)
{
    m_relConditionExpr = _relConditionExpr;
    m_relConditionExprHasBeenSet = true;
}

bool ModifyQualityRuleRequest::RelConditionExprHasBeenSet() const
{
    return m_relConditionExprHasBeenSet;
}

QualityRuleFieldConfig ModifyQualityRuleRequest::GetFieldConfig() const
{
    return m_fieldConfig;
}

void ModifyQualityRuleRequest::SetFieldConfig(const QualityRuleFieldConfig& _fieldConfig)
{
    m_fieldConfig = _fieldConfig;
    m_fieldConfigHasBeenSet = true;
}

bool ModifyQualityRuleRequest::FieldConfigHasBeenSet() const
{
    return m_fieldConfigHasBeenSet;
}

string ModifyQualityRuleRequest::GetTargetObjectValue() const
{
    return m_targetObjectValue;
}

void ModifyQualityRuleRequest::SetTargetObjectValue(const string& _targetObjectValue)
{
    m_targetObjectValue = _targetObjectValue;
    m_targetObjectValueHasBeenSet = true;
}

bool ModifyQualityRuleRequest::TargetObjectValueHasBeenSet() const
{
    return m_targetObjectValueHasBeenSet;
}

vector<uint64_t> ModifyQualityRuleRequest::GetSourceEngineTypes() const
{
    return m_sourceEngineTypes;
}

void ModifyQualityRuleRequest::SetSourceEngineTypes(const vector<uint64_t>& _sourceEngineTypes)
{
    m_sourceEngineTypes = _sourceEngineTypes;
    m_sourceEngineTypesHasBeenSet = true;
}

bool ModifyQualityRuleRequest::SourceEngineTypesHasBeenSet() const
{
    return m_sourceEngineTypesHasBeenSet;
}

string ModifyQualityRuleRequest::GetTargetDatabaseName() const
{
    return m_targetDatabaseName;
}

void ModifyQualityRuleRequest::SetTargetDatabaseName(const string& _targetDatabaseName)
{
    m_targetDatabaseName = _targetDatabaseName;
    m_targetDatabaseNameHasBeenSet = true;
}

bool ModifyQualityRuleRequest::TargetDatabaseNameHasBeenSet() const
{
    return m_targetDatabaseNameHasBeenSet;
}

string ModifyQualityRuleRequest::GetTargetSchemaName() const
{
    return m_targetSchemaName;
}

void ModifyQualityRuleRequest::SetTargetSchemaName(const string& _targetSchemaName)
{
    m_targetSchemaName = _targetSchemaName;
    m_targetSchemaNameHasBeenSet = true;
}

bool ModifyQualityRuleRequest::TargetSchemaNameHasBeenSet() const
{
    return m_targetSchemaNameHasBeenSet;
}

string ModifyQualityRuleRequest::GetTargetTableName() const
{
    return m_targetTableName;
}

void ModifyQualityRuleRequest::SetTargetTableName(const string& _targetTableName)
{
    m_targetTableName = _targetTableName;
    m_targetTableNameHasBeenSet = true;
}

bool ModifyQualityRuleRequest::TargetTableNameHasBeenSet() const
{
    return m_targetTableNameHasBeenSet;
}

string ModifyQualityRuleRequest::GetCatalogName() const
{
    return m_catalogName;
}

void ModifyQualityRuleRequest::SetCatalogName(const string& _catalogName)
{
    m_catalogName = _catalogName;
    m_catalogNameHasBeenSet = true;
}

bool ModifyQualityRuleRequest::CatalogNameHasBeenSet() const
{
    return m_catalogNameHasBeenSet;
}

string ModifyQualityRuleRequest::GetTargetCatalogName() const
{
    return m_targetCatalogName;
}

void ModifyQualityRuleRequest::SetTargetCatalogName(const string& _targetCatalogName)
{
    m_targetCatalogName = _targetCatalogName;
    m_targetCatalogNameHasBeenSet = true;
}

bool ModifyQualityRuleRequest::TargetCatalogNameHasBeenSet() const
{
    return m_targetCatalogNameHasBeenSet;
}


