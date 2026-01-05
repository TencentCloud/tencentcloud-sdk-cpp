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

#include <tencentcloud/wedata/v20250806/model/QualityRuleExecResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

QualityRuleExecResult::QualityRuleExecResult() :
    m_ruleExecIdHasBeenSet(false),
    m_ruleGroupExecIdHasBeenSet(false),
    m_ruleGroupIdHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_ruleTypeHasBeenSet(false),
    m_sourceObjectDataTypeNameHasBeenSet(false),
    m_sourceObjectValueHasBeenSet(false),
    m_conditionExpressionHasBeenSet(false),
    m_execResultStatusHasBeenSet(false),
    m_triggerResultHasBeenSet(false),
    m_compareResultHasBeenSet(false),
    m_templateNameHasBeenSet(false),
    m_qualityDimHasBeenSet(false),
    m_targetDBTableNameHasBeenSet(false),
    m_targetObjectValueHasBeenSet(false),
    m_targetObjectDataTypeHasBeenSet(false),
    m_fieldConfigHasBeenSet(false),
    m_relConditionExprHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_alarmLevelHasBeenSet(false),
    m_triggerConditionHasBeenSet(false),
    m_ruleGroupNameHasBeenSet(false),
    m_datasourceIdHasBeenSet(false),
    m_datasourceNameHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_schemaNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_ruleGroupExistHasBeenSet(false),
    m_datasourceTypeHasBeenSet(false),
    m_ruleGroupTableIdHasBeenSet(false),
    m_monitorTypeHasBeenSet(false),
    m_finishTimeHasBeenSet(false),
    m_groupTypeHasBeenSet(false),
    m_aspectTaskIdHasBeenSet(false),
    m_catalogNameHasBeenSet(false)
{
}

CoreInternalOutcome QualityRuleExecResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleExecId") && !value["RuleExecId"].IsNull())
    {
        if (!value["RuleExecId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleExecResult.RuleExecId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleExecId = value["RuleExecId"].GetUint64();
        m_ruleExecIdHasBeenSet = true;
    }

    if (value.HasMember("RuleGroupExecId") && !value["RuleGroupExecId"].IsNull())
    {
        if (!value["RuleGroupExecId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleExecResult.RuleGroupExecId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleGroupExecId = value["RuleGroupExecId"].GetUint64();
        m_ruleGroupExecIdHasBeenSet = true;
    }

    if (value.HasMember("RuleGroupId") && !value["RuleGroupId"].IsNull())
    {
        if (!value["RuleGroupId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleExecResult.RuleGroupId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleGroupId = value["RuleGroupId"].GetUint64();
        m_ruleGroupIdHasBeenSet = true;
    }

    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleExecResult.RuleId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = value["RuleId"].GetUint64();
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleExecResult.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("RuleType") && !value["RuleType"].IsNull())
    {
        if (!value["RuleType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleExecResult.RuleType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleType = value["RuleType"].GetUint64();
        m_ruleTypeHasBeenSet = true;
    }

    if (value.HasMember("SourceObjectDataTypeName") && !value["SourceObjectDataTypeName"].IsNull())
    {
        if (!value["SourceObjectDataTypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleExecResult.SourceObjectDataTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceObjectDataTypeName = string(value["SourceObjectDataTypeName"].GetString());
        m_sourceObjectDataTypeNameHasBeenSet = true;
    }

    if (value.HasMember("SourceObjectValue") && !value["SourceObjectValue"].IsNull())
    {
        if (!value["SourceObjectValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleExecResult.SourceObjectValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceObjectValue = string(value["SourceObjectValue"].GetString());
        m_sourceObjectValueHasBeenSet = true;
    }

    if (value.HasMember("ConditionExpression") && !value["ConditionExpression"].IsNull())
    {
        if (!value["ConditionExpression"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleExecResult.ConditionExpression` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_conditionExpression = string(value["ConditionExpression"].GetString());
        m_conditionExpressionHasBeenSet = true;
    }

    if (value.HasMember("ExecResultStatus") && !value["ExecResultStatus"].IsNull())
    {
        if (!value["ExecResultStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleExecResult.ExecResultStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_execResultStatus = value["ExecResultStatus"].GetUint64();
        m_execResultStatusHasBeenSet = true;
    }

    if (value.HasMember("TriggerResult") && !value["TriggerResult"].IsNull())
    {
        if (!value["TriggerResult"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleExecResult.TriggerResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_triggerResult = string(value["TriggerResult"].GetString());
        m_triggerResultHasBeenSet = true;
    }

    if (value.HasMember("CompareResult") && !value["CompareResult"].IsNull())
    {
        if (!value["CompareResult"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleExecResult.CompareResult` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_compareResult.Deserialize(value["CompareResult"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_compareResultHasBeenSet = true;
    }

    if (value.HasMember("TemplateName") && !value["TemplateName"].IsNull())
    {
        if (!value["TemplateName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleExecResult.TemplateName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateName = string(value["TemplateName"].GetString());
        m_templateNameHasBeenSet = true;
    }

    if (value.HasMember("QualityDim") && !value["QualityDim"].IsNull())
    {
        if (!value["QualityDim"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleExecResult.QualityDim` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_qualityDim = value["QualityDim"].GetUint64();
        m_qualityDimHasBeenSet = true;
    }

    if (value.HasMember("TargetDBTableName") && !value["TargetDBTableName"].IsNull())
    {
        if (!value["TargetDBTableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleExecResult.TargetDBTableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetDBTableName = string(value["TargetDBTableName"].GetString());
        m_targetDBTableNameHasBeenSet = true;
    }

    if (value.HasMember("TargetObjectValue") && !value["TargetObjectValue"].IsNull())
    {
        if (!value["TargetObjectValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleExecResult.TargetObjectValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetObjectValue = string(value["TargetObjectValue"].GetString());
        m_targetObjectValueHasBeenSet = true;
    }

    if (value.HasMember("TargetObjectDataType") && !value["TargetObjectDataType"].IsNull())
    {
        if (!value["TargetObjectDataType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleExecResult.TargetObjectDataType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetObjectDataType = string(value["TargetObjectDataType"].GetString());
        m_targetObjectDataTypeHasBeenSet = true;
    }

    if (value.HasMember("FieldConfig") && !value["FieldConfig"].IsNull())
    {
        if (!value["FieldConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleExecResult.FieldConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_fieldConfig.Deserialize(value["FieldConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_fieldConfigHasBeenSet = true;
    }

    if (value.HasMember("RelConditionExpr") && !value["RelConditionExpr"].IsNull())
    {
        if (!value["RelConditionExpr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleExecResult.RelConditionExpr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_relConditionExpr = string(value["RelConditionExpr"].GetString());
        m_relConditionExprHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleExecResult.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("AlarmLevel") && !value["AlarmLevel"].IsNull())
    {
        if (!value["AlarmLevel"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleExecResult.AlarmLevel` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmLevel = value["AlarmLevel"].GetUint64();
        m_alarmLevelHasBeenSet = true;
    }

    if (value.HasMember("TriggerCondition") && !value["TriggerCondition"].IsNull())
    {
        if (!value["TriggerCondition"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleExecResult.TriggerCondition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_triggerCondition = string(value["TriggerCondition"].GetString());
        m_triggerConditionHasBeenSet = true;
    }

    if (value.HasMember("RuleGroupName") && !value["RuleGroupName"].IsNull())
    {
        if (!value["RuleGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleExecResult.RuleGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleGroupName = string(value["RuleGroupName"].GetString());
        m_ruleGroupNameHasBeenSet = true;
    }

    if (value.HasMember("DatasourceId") && !value["DatasourceId"].IsNull())
    {
        if (!value["DatasourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleExecResult.DatasourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasourceId = string(value["DatasourceId"].GetString());
        m_datasourceIdHasBeenSet = true;
    }

    if (value.HasMember("DatasourceName") && !value["DatasourceName"].IsNull())
    {
        if (!value["DatasourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleExecResult.DatasourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasourceName = string(value["DatasourceName"].GetString());
        m_datasourceNameHasBeenSet = true;
    }

    if (value.HasMember("DatabaseName") && !value["DatabaseName"].IsNull())
    {
        if (!value["DatabaseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleExecResult.DatabaseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseName = string(value["DatabaseName"].GetString());
        m_databaseNameHasBeenSet = true;
    }

    if (value.HasMember("SchemaName") && !value["SchemaName"].IsNull())
    {
        if (!value["SchemaName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleExecResult.SchemaName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schemaName = string(value["SchemaName"].GetString());
        m_schemaNameHasBeenSet = true;
    }

    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleExecResult.TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(value["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }

    if (value.HasMember("RuleGroupExist") && !value["RuleGroupExist"].IsNull())
    {
        if (!value["RuleGroupExist"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleExecResult.RuleGroupExist` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleGroupExist = value["RuleGroupExist"].GetInt64();
        m_ruleGroupExistHasBeenSet = true;
    }

    if (value.HasMember("DatasourceType") && !value["DatasourceType"].IsNull())
    {
        if (!value["DatasourceType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleExecResult.DatasourceType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_datasourceType = value["DatasourceType"].GetInt64();
        m_datasourceTypeHasBeenSet = true;
    }

    if (value.HasMember("RuleGroupTableId") && !value["RuleGroupTableId"].IsNull())
    {
        if (!value["RuleGroupTableId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleExecResult.RuleGroupTableId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleGroupTableId = value["RuleGroupTableId"].GetUint64();
        m_ruleGroupTableIdHasBeenSet = true;
    }

    if (value.HasMember("MonitorType") && !value["MonitorType"].IsNull())
    {
        if (!value["MonitorType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleExecResult.MonitorType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_monitorType = value["MonitorType"].GetInt64();
        m_monitorTypeHasBeenSet = true;
    }

    if (value.HasMember("FinishTime") && !value["FinishTime"].IsNull())
    {
        if (!value["FinishTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleExecResult.FinishTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_finishTime = string(value["FinishTime"].GetString());
        m_finishTimeHasBeenSet = true;
    }

    if (value.HasMember("GroupType") && !value["GroupType"].IsNull())
    {
        if (!value["GroupType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleExecResult.GroupType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupType = string(value["GroupType"].GetString());
        m_groupTypeHasBeenSet = true;
    }

    if (value.HasMember("AspectTaskId") && !value["AspectTaskId"].IsNull())
    {
        if (!value["AspectTaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleExecResult.AspectTaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aspectTaskId = string(value["AspectTaskId"].GetString());
        m_aspectTaskIdHasBeenSet = true;
    }

    if (value.HasMember("CatalogName") && !value["CatalogName"].IsNull())
    {
        if (!value["CatalogName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityRuleExecResult.CatalogName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_catalogName = string(value["CatalogName"].GetString());
        m_catalogNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QualityRuleExecResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleExecIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleExecId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleExecId, allocator);
    }

    if (m_ruleGroupExecIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleGroupExecId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleGroupExecId, allocator);
    }

    if (m_ruleGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleGroupId, allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleId, allocator);
    }

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleType, allocator);
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

    if (m_conditionExpressionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConditionExpression";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_conditionExpression.c_str(), allocator).Move(), allocator);
    }

    if (m_execResultStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecResultStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_execResultStatus, allocator);
    }

    if (m_triggerResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_triggerResult.c_str(), allocator).Move(), allocator);
    }

    if (m_compareResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompareResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_compareResult.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_templateNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateName.c_str(), allocator).Move(), allocator);
    }

    if (m_qualityDimHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QualityDim";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_qualityDim, allocator);
    }

    if (m_targetDBTableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetDBTableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetDBTableName.c_str(), allocator).Move(), allocator);
    }

    if (m_targetObjectValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetObjectValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetObjectValue.c_str(), allocator).Move(), allocator);
    }

    if (m_targetObjectDataTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetObjectDataType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetObjectDataType.c_str(), allocator).Move(), allocator);
    }

    if (m_fieldConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FieldConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_fieldConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_relConditionExprHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelConditionExpr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_relConditionExpr.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alarmLevel, allocator);
    }

    if (m_triggerConditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerCondition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_triggerCondition.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_datasourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datasourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_datasourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datasourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_databaseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_databaseName.c_str(), allocator).Move(), allocator);
    }

    if (m_schemaNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchemaName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_schemaName.c_str(), allocator).Move(), allocator);
    }

    if (m_tableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableName.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleGroupExistHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleGroupExist";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleGroupExist, allocator);
    }

    if (m_datasourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_datasourceType, allocator);
    }

    if (m_ruleGroupTableIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleGroupTableId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleGroupTableId, allocator);
    }

    if (m_monitorTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_monitorType, allocator);
    }

    if (m_finishTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FinishTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_finishTime.c_str(), allocator).Move(), allocator);
    }

    if (m_groupTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupType.c_str(), allocator).Move(), allocator);
    }

    if (m_aspectTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AspectTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aspectTaskId.c_str(), allocator).Move(), allocator);
    }

    if (m_catalogNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CatalogName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_catalogName.c_str(), allocator).Move(), allocator);
    }

}


uint64_t QualityRuleExecResult::GetRuleExecId() const
{
    return m_ruleExecId;
}

void QualityRuleExecResult::SetRuleExecId(const uint64_t& _ruleExecId)
{
    m_ruleExecId = _ruleExecId;
    m_ruleExecIdHasBeenSet = true;
}

bool QualityRuleExecResult::RuleExecIdHasBeenSet() const
{
    return m_ruleExecIdHasBeenSet;
}

uint64_t QualityRuleExecResult::GetRuleGroupExecId() const
{
    return m_ruleGroupExecId;
}

void QualityRuleExecResult::SetRuleGroupExecId(const uint64_t& _ruleGroupExecId)
{
    m_ruleGroupExecId = _ruleGroupExecId;
    m_ruleGroupExecIdHasBeenSet = true;
}

bool QualityRuleExecResult::RuleGroupExecIdHasBeenSet() const
{
    return m_ruleGroupExecIdHasBeenSet;
}

uint64_t QualityRuleExecResult::GetRuleGroupId() const
{
    return m_ruleGroupId;
}

void QualityRuleExecResult::SetRuleGroupId(const uint64_t& _ruleGroupId)
{
    m_ruleGroupId = _ruleGroupId;
    m_ruleGroupIdHasBeenSet = true;
}

bool QualityRuleExecResult::RuleGroupIdHasBeenSet() const
{
    return m_ruleGroupIdHasBeenSet;
}

uint64_t QualityRuleExecResult::GetRuleId() const
{
    return m_ruleId;
}

void QualityRuleExecResult::SetRuleId(const uint64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool QualityRuleExecResult::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string QualityRuleExecResult::GetRuleName() const
{
    return m_ruleName;
}

void QualityRuleExecResult::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool QualityRuleExecResult::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

uint64_t QualityRuleExecResult::GetRuleType() const
{
    return m_ruleType;
}

void QualityRuleExecResult::SetRuleType(const uint64_t& _ruleType)
{
    m_ruleType = _ruleType;
    m_ruleTypeHasBeenSet = true;
}

bool QualityRuleExecResult::RuleTypeHasBeenSet() const
{
    return m_ruleTypeHasBeenSet;
}

string QualityRuleExecResult::GetSourceObjectDataTypeName() const
{
    return m_sourceObjectDataTypeName;
}

void QualityRuleExecResult::SetSourceObjectDataTypeName(const string& _sourceObjectDataTypeName)
{
    m_sourceObjectDataTypeName = _sourceObjectDataTypeName;
    m_sourceObjectDataTypeNameHasBeenSet = true;
}

bool QualityRuleExecResult::SourceObjectDataTypeNameHasBeenSet() const
{
    return m_sourceObjectDataTypeNameHasBeenSet;
}

string QualityRuleExecResult::GetSourceObjectValue() const
{
    return m_sourceObjectValue;
}

void QualityRuleExecResult::SetSourceObjectValue(const string& _sourceObjectValue)
{
    m_sourceObjectValue = _sourceObjectValue;
    m_sourceObjectValueHasBeenSet = true;
}

bool QualityRuleExecResult::SourceObjectValueHasBeenSet() const
{
    return m_sourceObjectValueHasBeenSet;
}

string QualityRuleExecResult::GetConditionExpression() const
{
    return m_conditionExpression;
}

void QualityRuleExecResult::SetConditionExpression(const string& _conditionExpression)
{
    m_conditionExpression = _conditionExpression;
    m_conditionExpressionHasBeenSet = true;
}

bool QualityRuleExecResult::ConditionExpressionHasBeenSet() const
{
    return m_conditionExpressionHasBeenSet;
}

uint64_t QualityRuleExecResult::GetExecResultStatus() const
{
    return m_execResultStatus;
}

void QualityRuleExecResult::SetExecResultStatus(const uint64_t& _execResultStatus)
{
    m_execResultStatus = _execResultStatus;
    m_execResultStatusHasBeenSet = true;
}

bool QualityRuleExecResult::ExecResultStatusHasBeenSet() const
{
    return m_execResultStatusHasBeenSet;
}

string QualityRuleExecResult::GetTriggerResult() const
{
    return m_triggerResult;
}

void QualityRuleExecResult::SetTriggerResult(const string& _triggerResult)
{
    m_triggerResult = _triggerResult;
    m_triggerResultHasBeenSet = true;
}

bool QualityRuleExecResult::TriggerResultHasBeenSet() const
{
    return m_triggerResultHasBeenSet;
}

CompareQualityResult QualityRuleExecResult::GetCompareResult() const
{
    return m_compareResult;
}

void QualityRuleExecResult::SetCompareResult(const CompareQualityResult& _compareResult)
{
    m_compareResult = _compareResult;
    m_compareResultHasBeenSet = true;
}

bool QualityRuleExecResult::CompareResultHasBeenSet() const
{
    return m_compareResultHasBeenSet;
}

string QualityRuleExecResult::GetTemplateName() const
{
    return m_templateName;
}

void QualityRuleExecResult::SetTemplateName(const string& _templateName)
{
    m_templateName = _templateName;
    m_templateNameHasBeenSet = true;
}

bool QualityRuleExecResult::TemplateNameHasBeenSet() const
{
    return m_templateNameHasBeenSet;
}

uint64_t QualityRuleExecResult::GetQualityDim() const
{
    return m_qualityDim;
}

void QualityRuleExecResult::SetQualityDim(const uint64_t& _qualityDim)
{
    m_qualityDim = _qualityDim;
    m_qualityDimHasBeenSet = true;
}

bool QualityRuleExecResult::QualityDimHasBeenSet() const
{
    return m_qualityDimHasBeenSet;
}

string QualityRuleExecResult::GetTargetDBTableName() const
{
    return m_targetDBTableName;
}

void QualityRuleExecResult::SetTargetDBTableName(const string& _targetDBTableName)
{
    m_targetDBTableName = _targetDBTableName;
    m_targetDBTableNameHasBeenSet = true;
}

bool QualityRuleExecResult::TargetDBTableNameHasBeenSet() const
{
    return m_targetDBTableNameHasBeenSet;
}

string QualityRuleExecResult::GetTargetObjectValue() const
{
    return m_targetObjectValue;
}

void QualityRuleExecResult::SetTargetObjectValue(const string& _targetObjectValue)
{
    m_targetObjectValue = _targetObjectValue;
    m_targetObjectValueHasBeenSet = true;
}

bool QualityRuleExecResult::TargetObjectValueHasBeenSet() const
{
    return m_targetObjectValueHasBeenSet;
}

string QualityRuleExecResult::GetTargetObjectDataType() const
{
    return m_targetObjectDataType;
}

void QualityRuleExecResult::SetTargetObjectDataType(const string& _targetObjectDataType)
{
    m_targetObjectDataType = _targetObjectDataType;
    m_targetObjectDataTypeHasBeenSet = true;
}

bool QualityRuleExecResult::TargetObjectDataTypeHasBeenSet() const
{
    return m_targetObjectDataTypeHasBeenSet;
}

QualityRuleFieldConfig QualityRuleExecResult::GetFieldConfig() const
{
    return m_fieldConfig;
}

void QualityRuleExecResult::SetFieldConfig(const QualityRuleFieldConfig& _fieldConfig)
{
    m_fieldConfig = _fieldConfig;
    m_fieldConfigHasBeenSet = true;
}

bool QualityRuleExecResult::FieldConfigHasBeenSet() const
{
    return m_fieldConfigHasBeenSet;
}

string QualityRuleExecResult::GetRelConditionExpr() const
{
    return m_relConditionExpr;
}

void QualityRuleExecResult::SetRelConditionExpr(const string& _relConditionExpr)
{
    m_relConditionExpr = _relConditionExpr;
    m_relConditionExprHasBeenSet = true;
}

bool QualityRuleExecResult::RelConditionExprHasBeenSet() const
{
    return m_relConditionExprHasBeenSet;
}

string QualityRuleExecResult::GetStartTime() const
{
    return m_startTime;
}

void QualityRuleExecResult::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool QualityRuleExecResult::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

uint64_t QualityRuleExecResult::GetAlarmLevel() const
{
    return m_alarmLevel;
}

void QualityRuleExecResult::SetAlarmLevel(const uint64_t& _alarmLevel)
{
    m_alarmLevel = _alarmLevel;
    m_alarmLevelHasBeenSet = true;
}

bool QualityRuleExecResult::AlarmLevelHasBeenSet() const
{
    return m_alarmLevelHasBeenSet;
}

string QualityRuleExecResult::GetTriggerCondition() const
{
    return m_triggerCondition;
}

void QualityRuleExecResult::SetTriggerCondition(const string& _triggerCondition)
{
    m_triggerCondition = _triggerCondition;
    m_triggerConditionHasBeenSet = true;
}

bool QualityRuleExecResult::TriggerConditionHasBeenSet() const
{
    return m_triggerConditionHasBeenSet;
}

string QualityRuleExecResult::GetRuleGroupName() const
{
    return m_ruleGroupName;
}

void QualityRuleExecResult::SetRuleGroupName(const string& _ruleGroupName)
{
    m_ruleGroupName = _ruleGroupName;
    m_ruleGroupNameHasBeenSet = true;
}

bool QualityRuleExecResult::RuleGroupNameHasBeenSet() const
{
    return m_ruleGroupNameHasBeenSet;
}

string QualityRuleExecResult::GetDatasourceId() const
{
    return m_datasourceId;
}

void QualityRuleExecResult::SetDatasourceId(const string& _datasourceId)
{
    m_datasourceId = _datasourceId;
    m_datasourceIdHasBeenSet = true;
}

bool QualityRuleExecResult::DatasourceIdHasBeenSet() const
{
    return m_datasourceIdHasBeenSet;
}

string QualityRuleExecResult::GetDatasourceName() const
{
    return m_datasourceName;
}

void QualityRuleExecResult::SetDatasourceName(const string& _datasourceName)
{
    m_datasourceName = _datasourceName;
    m_datasourceNameHasBeenSet = true;
}

bool QualityRuleExecResult::DatasourceNameHasBeenSet() const
{
    return m_datasourceNameHasBeenSet;
}

string QualityRuleExecResult::GetDatabaseName() const
{
    return m_databaseName;
}

void QualityRuleExecResult::SetDatabaseName(const string& _databaseName)
{
    m_databaseName = _databaseName;
    m_databaseNameHasBeenSet = true;
}

bool QualityRuleExecResult::DatabaseNameHasBeenSet() const
{
    return m_databaseNameHasBeenSet;
}

string QualityRuleExecResult::GetSchemaName() const
{
    return m_schemaName;
}

void QualityRuleExecResult::SetSchemaName(const string& _schemaName)
{
    m_schemaName = _schemaName;
    m_schemaNameHasBeenSet = true;
}

bool QualityRuleExecResult::SchemaNameHasBeenSet() const
{
    return m_schemaNameHasBeenSet;
}

string QualityRuleExecResult::GetTableName() const
{
    return m_tableName;
}

void QualityRuleExecResult::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool QualityRuleExecResult::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

int64_t QualityRuleExecResult::GetRuleGroupExist() const
{
    return m_ruleGroupExist;
}

void QualityRuleExecResult::SetRuleGroupExist(const int64_t& _ruleGroupExist)
{
    m_ruleGroupExist = _ruleGroupExist;
    m_ruleGroupExistHasBeenSet = true;
}

bool QualityRuleExecResult::RuleGroupExistHasBeenSet() const
{
    return m_ruleGroupExistHasBeenSet;
}

int64_t QualityRuleExecResult::GetDatasourceType() const
{
    return m_datasourceType;
}

void QualityRuleExecResult::SetDatasourceType(const int64_t& _datasourceType)
{
    m_datasourceType = _datasourceType;
    m_datasourceTypeHasBeenSet = true;
}

bool QualityRuleExecResult::DatasourceTypeHasBeenSet() const
{
    return m_datasourceTypeHasBeenSet;
}

uint64_t QualityRuleExecResult::GetRuleGroupTableId() const
{
    return m_ruleGroupTableId;
}

void QualityRuleExecResult::SetRuleGroupTableId(const uint64_t& _ruleGroupTableId)
{
    m_ruleGroupTableId = _ruleGroupTableId;
    m_ruleGroupTableIdHasBeenSet = true;
}

bool QualityRuleExecResult::RuleGroupTableIdHasBeenSet() const
{
    return m_ruleGroupTableIdHasBeenSet;
}

int64_t QualityRuleExecResult::GetMonitorType() const
{
    return m_monitorType;
}

void QualityRuleExecResult::SetMonitorType(const int64_t& _monitorType)
{
    m_monitorType = _monitorType;
    m_monitorTypeHasBeenSet = true;
}

bool QualityRuleExecResult::MonitorTypeHasBeenSet() const
{
    return m_monitorTypeHasBeenSet;
}

string QualityRuleExecResult::GetFinishTime() const
{
    return m_finishTime;
}

void QualityRuleExecResult::SetFinishTime(const string& _finishTime)
{
    m_finishTime = _finishTime;
    m_finishTimeHasBeenSet = true;
}

bool QualityRuleExecResult::FinishTimeHasBeenSet() const
{
    return m_finishTimeHasBeenSet;
}

string QualityRuleExecResult::GetGroupType() const
{
    return m_groupType;
}

void QualityRuleExecResult::SetGroupType(const string& _groupType)
{
    m_groupType = _groupType;
    m_groupTypeHasBeenSet = true;
}

bool QualityRuleExecResult::GroupTypeHasBeenSet() const
{
    return m_groupTypeHasBeenSet;
}

string QualityRuleExecResult::GetAspectTaskId() const
{
    return m_aspectTaskId;
}

void QualityRuleExecResult::SetAspectTaskId(const string& _aspectTaskId)
{
    m_aspectTaskId = _aspectTaskId;
    m_aspectTaskIdHasBeenSet = true;
}

bool QualityRuleExecResult::AspectTaskIdHasBeenSet() const
{
    return m_aspectTaskIdHasBeenSet;
}

string QualityRuleExecResult::GetCatalogName() const
{
    return m_catalogName;
}

void QualityRuleExecResult::SetCatalogName(const string& _catalogName)
{
    m_catalogName = _catalogName;
    m_catalogNameHasBeenSet = true;
}

bool QualityRuleExecResult::CatalogNameHasBeenSet() const
{
    return m_catalogNameHasBeenSet;
}

