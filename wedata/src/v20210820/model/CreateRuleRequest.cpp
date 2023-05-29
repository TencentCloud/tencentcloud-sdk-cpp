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

#include <tencentcloud/wedata/v20210820/model/CreateRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

CreateRuleRequest::CreateRuleRequest() :
    m_projectIdHasBeenSet(false),
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
    m_datasourceIdHasBeenSet(false),
    m_databaseIdHasBeenSet(false),
    m_targetDatabaseIdHasBeenSet(false),
    m_targetTableIdHasBeenSet(false),
    m_targetConditionExprHasBeenSet(false),
    m_relConditionExprHasBeenSet(false),
    m_fieldConfigHasBeenSet(false),
    m_targetObjectValueHasBeenSet(false),
    m_sourceEngineTypesHasBeenSet(false)
{
}

string CreateRuleRequest::ToJsonString() const
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

    if (m_datasourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_datasourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_databaseIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_databaseId.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateRuleRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateRuleRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateRuleRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

uint64_t CreateRuleRequest::GetRuleGroupId() const
{
    return m_ruleGroupId;
}

void CreateRuleRequest::SetRuleGroupId(const uint64_t& _ruleGroupId)
{
    m_ruleGroupId = _ruleGroupId;
    m_ruleGroupIdHasBeenSet = true;
}

bool CreateRuleRequest::RuleGroupIdHasBeenSet() const
{
    return m_ruleGroupIdHasBeenSet;
}

string CreateRuleRequest::GetName() const
{
    return m_name;
}

void CreateRuleRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateRuleRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateRuleRequest::GetTableId() const
{
    return m_tableId;
}

void CreateRuleRequest::SetTableId(const string& _tableId)
{
    m_tableId = _tableId;
    m_tableIdHasBeenSet = true;
}

bool CreateRuleRequest::TableIdHasBeenSet() const
{
    return m_tableIdHasBeenSet;
}

uint64_t CreateRuleRequest::GetRuleTemplateId() const
{
    return m_ruleTemplateId;
}

void CreateRuleRequest::SetRuleTemplateId(const uint64_t& _ruleTemplateId)
{
    m_ruleTemplateId = _ruleTemplateId;
    m_ruleTemplateIdHasBeenSet = true;
}

bool CreateRuleRequest::RuleTemplateIdHasBeenSet() const
{
    return m_ruleTemplateIdHasBeenSet;
}

uint64_t CreateRuleRequest::GetType() const
{
    return m_type;
}

void CreateRuleRequest::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CreateRuleRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

uint64_t CreateRuleRequest::GetQualityDim() const
{
    return m_qualityDim;
}

void CreateRuleRequest::SetQualityDim(const uint64_t& _qualityDim)
{
    m_qualityDim = _qualityDim;
    m_qualityDimHasBeenSet = true;
}

bool CreateRuleRequest::QualityDimHasBeenSet() const
{
    return m_qualityDimHasBeenSet;
}

string CreateRuleRequest::GetSourceObjectDataTypeName() const
{
    return m_sourceObjectDataTypeName;
}

void CreateRuleRequest::SetSourceObjectDataTypeName(const string& _sourceObjectDataTypeName)
{
    m_sourceObjectDataTypeName = _sourceObjectDataTypeName;
    m_sourceObjectDataTypeNameHasBeenSet = true;
}

bool CreateRuleRequest::SourceObjectDataTypeNameHasBeenSet() const
{
    return m_sourceObjectDataTypeNameHasBeenSet;
}

string CreateRuleRequest::GetSourceObjectValue() const
{
    return m_sourceObjectValue;
}

void CreateRuleRequest::SetSourceObjectValue(const string& _sourceObjectValue)
{
    m_sourceObjectValue = _sourceObjectValue;
    m_sourceObjectValueHasBeenSet = true;
}

bool CreateRuleRequest::SourceObjectValueHasBeenSet() const
{
    return m_sourceObjectValueHasBeenSet;
}

uint64_t CreateRuleRequest::GetConditionType() const
{
    return m_conditionType;
}

void CreateRuleRequest::SetConditionType(const uint64_t& _conditionType)
{
    m_conditionType = _conditionType;
    m_conditionTypeHasBeenSet = true;
}

bool CreateRuleRequest::ConditionTypeHasBeenSet() const
{
    return m_conditionTypeHasBeenSet;
}

string CreateRuleRequest::GetConditionExpression() const
{
    return m_conditionExpression;
}

void CreateRuleRequest::SetConditionExpression(const string& _conditionExpression)
{
    m_conditionExpression = _conditionExpression;
    m_conditionExpressionHasBeenSet = true;
}

bool CreateRuleRequest::ConditionExpressionHasBeenSet() const
{
    return m_conditionExpressionHasBeenSet;
}

string CreateRuleRequest::GetCustomSql() const
{
    return m_customSql;
}

void CreateRuleRequest::SetCustomSql(const string& _customSql)
{
    m_customSql = _customSql;
    m_customSqlHasBeenSet = true;
}

bool CreateRuleRequest::CustomSqlHasBeenSet() const
{
    return m_customSqlHasBeenSet;
}

CompareRule CreateRuleRequest::GetCompareRule() const
{
    return m_compareRule;
}

void CreateRuleRequest::SetCompareRule(const CompareRule& _compareRule)
{
    m_compareRule = _compareRule;
    m_compareRuleHasBeenSet = true;
}

bool CreateRuleRequest::CompareRuleHasBeenSet() const
{
    return m_compareRuleHasBeenSet;
}

uint64_t CreateRuleRequest::GetAlarmLevel() const
{
    return m_alarmLevel;
}

void CreateRuleRequest::SetAlarmLevel(const uint64_t& _alarmLevel)
{
    m_alarmLevel = _alarmLevel;
    m_alarmLevelHasBeenSet = true;
}

bool CreateRuleRequest::AlarmLevelHasBeenSet() const
{
    return m_alarmLevelHasBeenSet;
}

string CreateRuleRequest::GetDescription() const
{
    return m_description;
}

void CreateRuleRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateRuleRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string CreateRuleRequest::GetDatasourceId() const
{
    return m_datasourceId;
}

void CreateRuleRequest::SetDatasourceId(const string& _datasourceId)
{
    m_datasourceId = _datasourceId;
    m_datasourceIdHasBeenSet = true;
}

bool CreateRuleRequest::DatasourceIdHasBeenSet() const
{
    return m_datasourceIdHasBeenSet;
}

string CreateRuleRequest::GetDatabaseId() const
{
    return m_databaseId;
}

void CreateRuleRequest::SetDatabaseId(const string& _databaseId)
{
    m_databaseId = _databaseId;
    m_databaseIdHasBeenSet = true;
}

bool CreateRuleRequest::DatabaseIdHasBeenSet() const
{
    return m_databaseIdHasBeenSet;
}

string CreateRuleRequest::GetTargetDatabaseId() const
{
    return m_targetDatabaseId;
}

void CreateRuleRequest::SetTargetDatabaseId(const string& _targetDatabaseId)
{
    m_targetDatabaseId = _targetDatabaseId;
    m_targetDatabaseIdHasBeenSet = true;
}

bool CreateRuleRequest::TargetDatabaseIdHasBeenSet() const
{
    return m_targetDatabaseIdHasBeenSet;
}

string CreateRuleRequest::GetTargetTableId() const
{
    return m_targetTableId;
}

void CreateRuleRequest::SetTargetTableId(const string& _targetTableId)
{
    m_targetTableId = _targetTableId;
    m_targetTableIdHasBeenSet = true;
}

bool CreateRuleRequest::TargetTableIdHasBeenSet() const
{
    return m_targetTableIdHasBeenSet;
}

string CreateRuleRequest::GetTargetConditionExpr() const
{
    return m_targetConditionExpr;
}

void CreateRuleRequest::SetTargetConditionExpr(const string& _targetConditionExpr)
{
    m_targetConditionExpr = _targetConditionExpr;
    m_targetConditionExprHasBeenSet = true;
}

bool CreateRuleRequest::TargetConditionExprHasBeenSet() const
{
    return m_targetConditionExprHasBeenSet;
}

string CreateRuleRequest::GetRelConditionExpr() const
{
    return m_relConditionExpr;
}

void CreateRuleRequest::SetRelConditionExpr(const string& _relConditionExpr)
{
    m_relConditionExpr = _relConditionExpr;
    m_relConditionExprHasBeenSet = true;
}

bool CreateRuleRequest::RelConditionExprHasBeenSet() const
{
    return m_relConditionExprHasBeenSet;
}

RuleFieldConfig CreateRuleRequest::GetFieldConfig() const
{
    return m_fieldConfig;
}

void CreateRuleRequest::SetFieldConfig(const RuleFieldConfig& _fieldConfig)
{
    m_fieldConfig = _fieldConfig;
    m_fieldConfigHasBeenSet = true;
}

bool CreateRuleRequest::FieldConfigHasBeenSet() const
{
    return m_fieldConfigHasBeenSet;
}

string CreateRuleRequest::GetTargetObjectValue() const
{
    return m_targetObjectValue;
}

void CreateRuleRequest::SetTargetObjectValue(const string& _targetObjectValue)
{
    m_targetObjectValue = _targetObjectValue;
    m_targetObjectValueHasBeenSet = true;
}

bool CreateRuleRequest::TargetObjectValueHasBeenSet() const
{
    return m_targetObjectValueHasBeenSet;
}

vector<uint64_t> CreateRuleRequest::GetSourceEngineTypes() const
{
    return m_sourceEngineTypes;
}

void CreateRuleRequest::SetSourceEngineTypes(const vector<uint64_t>& _sourceEngineTypes)
{
    m_sourceEngineTypes = _sourceEngineTypes;
    m_sourceEngineTypesHasBeenSet = true;
}

bool CreateRuleRequest::SourceEngineTypesHasBeenSet() const
{
    return m_sourceEngineTypesHasBeenSet;
}


