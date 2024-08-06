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

#include <tencentcloud/wedata/v20210820/model/ModifyRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

ModifyRuleRequest::ModifyRuleRequest() :
    m_projectIdHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_ruleGroupIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_tableIdHasBeenSet(false),
    m_ruleTemplateIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_qualityDimHasBeenSet(false),
    m_sourceObjectDataTypeNameHasBeenSet(false),
    m_sourceObjectValueHasBeenSet(false),
    m_conditionTypeHasBeenSet(false),
    m_conditionExpressionHasBeenSet(false),
    m_customSqlHasBeenSet(false),
    m_compareRuleHasBeenSet(false),
    m_alarmLevelHasBeenSet(false),
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
    m_targetTableNameHasBeenSet(false)
{
}

string ModifyRuleRequest::ToJsonString() const
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

    if (m_ruleGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ruleGroupId, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
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

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_type, allocator);
    }

    if (m_qualityDimHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QualityDim";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_qualityDim, allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyRuleRequest::GetProjectId() const
{
    return m_projectId;
}

void ModifyRuleRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ModifyRuleRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

uint64_t ModifyRuleRequest::GetRuleId() const
{
    return m_ruleId;
}

void ModifyRuleRequest::SetRuleId(const uint64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool ModifyRuleRequest::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

uint64_t ModifyRuleRequest::GetRuleGroupId() const
{
    return m_ruleGroupId;
}

void ModifyRuleRequest::SetRuleGroupId(const uint64_t& _ruleGroupId)
{
    m_ruleGroupId = _ruleGroupId;
    m_ruleGroupIdHasBeenSet = true;
}

bool ModifyRuleRequest::RuleGroupIdHasBeenSet() const
{
    return m_ruleGroupIdHasBeenSet;
}

string ModifyRuleRequest::GetName() const
{
    return m_name;
}

void ModifyRuleRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyRuleRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyRuleRequest::GetTableId() const
{
    return m_tableId;
}

void ModifyRuleRequest::SetTableId(const string& _tableId)
{
    m_tableId = _tableId;
    m_tableIdHasBeenSet = true;
}

bool ModifyRuleRequest::TableIdHasBeenSet() const
{
    return m_tableIdHasBeenSet;
}

uint64_t ModifyRuleRequest::GetRuleTemplateId() const
{
    return m_ruleTemplateId;
}

void ModifyRuleRequest::SetRuleTemplateId(const uint64_t& _ruleTemplateId)
{
    m_ruleTemplateId = _ruleTemplateId;
    m_ruleTemplateIdHasBeenSet = true;
}

bool ModifyRuleRequest::RuleTemplateIdHasBeenSet() const
{
    return m_ruleTemplateIdHasBeenSet;
}

uint64_t ModifyRuleRequest::GetType() const
{
    return m_type;
}

void ModifyRuleRequest::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ModifyRuleRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

uint64_t ModifyRuleRequest::GetQualityDim() const
{
    return m_qualityDim;
}

void ModifyRuleRequest::SetQualityDim(const uint64_t& _qualityDim)
{
    m_qualityDim = _qualityDim;
    m_qualityDimHasBeenSet = true;
}

bool ModifyRuleRequest::QualityDimHasBeenSet() const
{
    return m_qualityDimHasBeenSet;
}

string ModifyRuleRequest::GetSourceObjectDataTypeName() const
{
    return m_sourceObjectDataTypeName;
}

void ModifyRuleRequest::SetSourceObjectDataTypeName(const string& _sourceObjectDataTypeName)
{
    m_sourceObjectDataTypeName = _sourceObjectDataTypeName;
    m_sourceObjectDataTypeNameHasBeenSet = true;
}

bool ModifyRuleRequest::SourceObjectDataTypeNameHasBeenSet() const
{
    return m_sourceObjectDataTypeNameHasBeenSet;
}

string ModifyRuleRequest::GetSourceObjectValue() const
{
    return m_sourceObjectValue;
}

void ModifyRuleRequest::SetSourceObjectValue(const string& _sourceObjectValue)
{
    m_sourceObjectValue = _sourceObjectValue;
    m_sourceObjectValueHasBeenSet = true;
}

bool ModifyRuleRequest::SourceObjectValueHasBeenSet() const
{
    return m_sourceObjectValueHasBeenSet;
}

uint64_t ModifyRuleRequest::GetConditionType() const
{
    return m_conditionType;
}

void ModifyRuleRequest::SetConditionType(const uint64_t& _conditionType)
{
    m_conditionType = _conditionType;
    m_conditionTypeHasBeenSet = true;
}

bool ModifyRuleRequest::ConditionTypeHasBeenSet() const
{
    return m_conditionTypeHasBeenSet;
}

string ModifyRuleRequest::GetConditionExpression() const
{
    return m_conditionExpression;
}

void ModifyRuleRequest::SetConditionExpression(const string& _conditionExpression)
{
    m_conditionExpression = _conditionExpression;
    m_conditionExpressionHasBeenSet = true;
}

bool ModifyRuleRequest::ConditionExpressionHasBeenSet() const
{
    return m_conditionExpressionHasBeenSet;
}

string ModifyRuleRequest::GetCustomSql() const
{
    return m_customSql;
}

void ModifyRuleRequest::SetCustomSql(const string& _customSql)
{
    m_customSql = _customSql;
    m_customSqlHasBeenSet = true;
}

bool ModifyRuleRequest::CustomSqlHasBeenSet() const
{
    return m_customSqlHasBeenSet;
}

CompareRule ModifyRuleRequest::GetCompareRule() const
{
    return m_compareRule;
}

void ModifyRuleRequest::SetCompareRule(const CompareRule& _compareRule)
{
    m_compareRule = _compareRule;
    m_compareRuleHasBeenSet = true;
}

bool ModifyRuleRequest::CompareRuleHasBeenSet() const
{
    return m_compareRuleHasBeenSet;
}

uint64_t ModifyRuleRequest::GetAlarmLevel() const
{
    return m_alarmLevel;
}

void ModifyRuleRequest::SetAlarmLevel(const uint64_t& _alarmLevel)
{
    m_alarmLevel = _alarmLevel;
    m_alarmLevelHasBeenSet = true;
}

bool ModifyRuleRequest::AlarmLevelHasBeenSet() const
{
    return m_alarmLevelHasBeenSet;
}

string ModifyRuleRequest::GetDescription() const
{
    return m_description;
}

void ModifyRuleRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifyRuleRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string ModifyRuleRequest::GetTargetDatabaseId() const
{
    return m_targetDatabaseId;
}

void ModifyRuleRequest::SetTargetDatabaseId(const string& _targetDatabaseId)
{
    m_targetDatabaseId = _targetDatabaseId;
    m_targetDatabaseIdHasBeenSet = true;
}

bool ModifyRuleRequest::TargetDatabaseIdHasBeenSet() const
{
    return m_targetDatabaseIdHasBeenSet;
}

string ModifyRuleRequest::GetTargetTableId() const
{
    return m_targetTableId;
}

void ModifyRuleRequest::SetTargetTableId(const string& _targetTableId)
{
    m_targetTableId = _targetTableId;
    m_targetTableIdHasBeenSet = true;
}

bool ModifyRuleRequest::TargetTableIdHasBeenSet() const
{
    return m_targetTableIdHasBeenSet;
}

string ModifyRuleRequest::GetTargetConditionExpr() const
{
    return m_targetConditionExpr;
}

void ModifyRuleRequest::SetTargetConditionExpr(const string& _targetConditionExpr)
{
    m_targetConditionExpr = _targetConditionExpr;
    m_targetConditionExprHasBeenSet = true;
}

bool ModifyRuleRequest::TargetConditionExprHasBeenSet() const
{
    return m_targetConditionExprHasBeenSet;
}

string ModifyRuleRequest::GetRelConditionExpr() const
{
    return m_relConditionExpr;
}

void ModifyRuleRequest::SetRelConditionExpr(const string& _relConditionExpr)
{
    m_relConditionExpr = _relConditionExpr;
    m_relConditionExprHasBeenSet = true;
}

bool ModifyRuleRequest::RelConditionExprHasBeenSet() const
{
    return m_relConditionExprHasBeenSet;
}

RuleFieldConfig ModifyRuleRequest::GetFieldConfig() const
{
    return m_fieldConfig;
}

void ModifyRuleRequest::SetFieldConfig(const RuleFieldConfig& _fieldConfig)
{
    m_fieldConfig = _fieldConfig;
    m_fieldConfigHasBeenSet = true;
}

bool ModifyRuleRequest::FieldConfigHasBeenSet() const
{
    return m_fieldConfigHasBeenSet;
}

string ModifyRuleRequest::GetTargetObjectValue() const
{
    return m_targetObjectValue;
}

void ModifyRuleRequest::SetTargetObjectValue(const string& _targetObjectValue)
{
    m_targetObjectValue = _targetObjectValue;
    m_targetObjectValueHasBeenSet = true;
}

bool ModifyRuleRequest::TargetObjectValueHasBeenSet() const
{
    return m_targetObjectValueHasBeenSet;
}

vector<uint64_t> ModifyRuleRequest::GetSourceEngineTypes() const
{
    return m_sourceEngineTypes;
}

void ModifyRuleRequest::SetSourceEngineTypes(const vector<uint64_t>& _sourceEngineTypes)
{
    m_sourceEngineTypes = _sourceEngineTypes;
    m_sourceEngineTypesHasBeenSet = true;
}

bool ModifyRuleRequest::SourceEngineTypesHasBeenSet() const
{
    return m_sourceEngineTypesHasBeenSet;
}

string ModifyRuleRequest::GetTargetDatabaseName() const
{
    return m_targetDatabaseName;
}

void ModifyRuleRequest::SetTargetDatabaseName(const string& _targetDatabaseName)
{
    m_targetDatabaseName = _targetDatabaseName;
    m_targetDatabaseNameHasBeenSet = true;
}

bool ModifyRuleRequest::TargetDatabaseNameHasBeenSet() const
{
    return m_targetDatabaseNameHasBeenSet;
}

string ModifyRuleRequest::GetTargetSchemaName() const
{
    return m_targetSchemaName;
}

void ModifyRuleRequest::SetTargetSchemaName(const string& _targetSchemaName)
{
    m_targetSchemaName = _targetSchemaName;
    m_targetSchemaNameHasBeenSet = true;
}

bool ModifyRuleRequest::TargetSchemaNameHasBeenSet() const
{
    return m_targetSchemaNameHasBeenSet;
}

string ModifyRuleRequest::GetTargetTableName() const
{
    return m_targetTableName;
}

void ModifyRuleRequest::SetTargetTableName(const string& _targetTableName)
{
    m_targetTableName = _targetTableName;
    m_targetTableNameHasBeenSet = true;
}

bool ModifyRuleRequest::TargetTableNameHasBeenSet() const
{
    return m_targetTableNameHasBeenSet;
}


