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

#include <tencentcloud/wedata/v20210820/model/RuleExecResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

RuleExecResult::RuleExecResult() :
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
    m_triggerConditionHasBeenSet(false)
{
}

CoreInternalOutcome RuleExecResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleExecId") && !value["RuleExecId"].IsNull())
    {
        if (!value["RuleExecId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleExecResult.RuleExecId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleExecId = value["RuleExecId"].GetUint64();
        m_ruleExecIdHasBeenSet = true;
    }

    if (value.HasMember("RuleGroupExecId") && !value["RuleGroupExecId"].IsNull())
    {
        if (!value["RuleGroupExecId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleExecResult.RuleGroupExecId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleGroupExecId = value["RuleGroupExecId"].GetUint64();
        m_ruleGroupExecIdHasBeenSet = true;
    }

    if (value.HasMember("RuleGroupId") && !value["RuleGroupId"].IsNull())
    {
        if (!value["RuleGroupId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleExecResult.RuleGroupId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleGroupId = value["RuleGroupId"].GetUint64();
        m_ruleGroupIdHasBeenSet = true;
    }

    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleExecResult.RuleId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = value["RuleId"].GetUint64();
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleExecResult.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("RuleType") && !value["RuleType"].IsNull())
    {
        if (!value["RuleType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleExecResult.RuleType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleType = value["RuleType"].GetUint64();
        m_ruleTypeHasBeenSet = true;
    }

    if (value.HasMember("SourceObjectDataTypeName") && !value["SourceObjectDataTypeName"].IsNull())
    {
        if (!value["SourceObjectDataTypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleExecResult.SourceObjectDataTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceObjectDataTypeName = string(value["SourceObjectDataTypeName"].GetString());
        m_sourceObjectDataTypeNameHasBeenSet = true;
    }

    if (value.HasMember("SourceObjectValue") && !value["SourceObjectValue"].IsNull())
    {
        if (!value["SourceObjectValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleExecResult.SourceObjectValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceObjectValue = string(value["SourceObjectValue"].GetString());
        m_sourceObjectValueHasBeenSet = true;
    }

    if (value.HasMember("ConditionExpression") && !value["ConditionExpression"].IsNull())
    {
        if (!value["ConditionExpression"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleExecResult.ConditionExpression` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_conditionExpression = string(value["ConditionExpression"].GetString());
        m_conditionExpressionHasBeenSet = true;
    }

    if (value.HasMember("ExecResultStatus") && !value["ExecResultStatus"].IsNull())
    {
        if (!value["ExecResultStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleExecResult.ExecResultStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_execResultStatus = value["ExecResultStatus"].GetUint64();
        m_execResultStatusHasBeenSet = true;
    }

    if (value.HasMember("TriggerResult") && !value["TriggerResult"].IsNull())
    {
        if (!value["TriggerResult"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleExecResult.TriggerResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_triggerResult = string(value["TriggerResult"].GetString());
        m_triggerResultHasBeenSet = true;
    }

    if (value.HasMember("CompareResult") && !value["CompareResult"].IsNull())
    {
        if (!value["CompareResult"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RuleExecResult.CompareResult` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `RuleExecResult.TemplateName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateName = string(value["TemplateName"].GetString());
        m_templateNameHasBeenSet = true;
    }

    if (value.HasMember("QualityDim") && !value["QualityDim"].IsNull())
    {
        if (!value["QualityDim"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleExecResult.QualityDim` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_qualityDim = value["QualityDim"].GetUint64();
        m_qualityDimHasBeenSet = true;
    }

    if (value.HasMember("TargetDBTableName") && !value["TargetDBTableName"].IsNull())
    {
        if (!value["TargetDBTableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleExecResult.TargetDBTableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetDBTableName = string(value["TargetDBTableName"].GetString());
        m_targetDBTableNameHasBeenSet = true;
    }

    if (value.HasMember("TargetObjectValue") && !value["TargetObjectValue"].IsNull())
    {
        if (!value["TargetObjectValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleExecResult.TargetObjectValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetObjectValue = string(value["TargetObjectValue"].GetString());
        m_targetObjectValueHasBeenSet = true;
    }

    if (value.HasMember("TargetObjectDataType") && !value["TargetObjectDataType"].IsNull())
    {
        if (!value["TargetObjectDataType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleExecResult.TargetObjectDataType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetObjectDataType = string(value["TargetObjectDataType"].GetString());
        m_targetObjectDataTypeHasBeenSet = true;
    }

    if (value.HasMember("FieldConfig") && !value["FieldConfig"].IsNull())
    {
        if (!value["FieldConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RuleExecResult.FieldConfig` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `RuleExecResult.RelConditionExpr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_relConditionExpr = string(value["RelConditionExpr"].GetString());
        m_relConditionExprHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleExecResult.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("AlarmLevel") && !value["AlarmLevel"].IsNull())
    {
        if (!value["AlarmLevel"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleExecResult.AlarmLevel` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmLevel = value["AlarmLevel"].GetUint64();
        m_alarmLevelHasBeenSet = true;
    }

    if (value.HasMember("TriggerCondition") && !value["TriggerCondition"].IsNull())
    {
        if (!value["TriggerCondition"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleExecResult.TriggerCondition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_triggerCondition = string(value["TriggerCondition"].GetString());
        m_triggerConditionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RuleExecResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

}


uint64_t RuleExecResult::GetRuleExecId() const
{
    return m_ruleExecId;
}

void RuleExecResult::SetRuleExecId(const uint64_t& _ruleExecId)
{
    m_ruleExecId = _ruleExecId;
    m_ruleExecIdHasBeenSet = true;
}

bool RuleExecResult::RuleExecIdHasBeenSet() const
{
    return m_ruleExecIdHasBeenSet;
}

uint64_t RuleExecResult::GetRuleGroupExecId() const
{
    return m_ruleGroupExecId;
}

void RuleExecResult::SetRuleGroupExecId(const uint64_t& _ruleGroupExecId)
{
    m_ruleGroupExecId = _ruleGroupExecId;
    m_ruleGroupExecIdHasBeenSet = true;
}

bool RuleExecResult::RuleGroupExecIdHasBeenSet() const
{
    return m_ruleGroupExecIdHasBeenSet;
}

uint64_t RuleExecResult::GetRuleGroupId() const
{
    return m_ruleGroupId;
}

void RuleExecResult::SetRuleGroupId(const uint64_t& _ruleGroupId)
{
    m_ruleGroupId = _ruleGroupId;
    m_ruleGroupIdHasBeenSet = true;
}

bool RuleExecResult::RuleGroupIdHasBeenSet() const
{
    return m_ruleGroupIdHasBeenSet;
}

uint64_t RuleExecResult::GetRuleId() const
{
    return m_ruleId;
}

void RuleExecResult::SetRuleId(const uint64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool RuleExecResult::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string RuleExecResult::GetRuleName() const
{
    return m_ruleName;
}

void RuleExecResult::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool RuleExecResult::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

uint64_t RuleExecResult::GetRuleType() const
{
    return m_ruleType;
}

void RuleExecResult::SetRuleType(const uint64_t& _ruleType)
{
    m_ruleType = _ruleType;
    m_ruleTypeHasBeenSet = true;
}

bool RuleExecResult::RuleTypeHasBeenSet() const
{
    return m_ruleTypeHasBeenSet;
}

string RuleExecResult::GetSourceObjectDataTypeName() const
{
    return m_sourceObjectDataTypeName;
}

void RuleExecResult::SetSourceObjectDataTypeName(const string& _sourceObjectDataTypeName)
{
    m_sourceObjectDataTypeName = _sourceObjectDataTypeName;
    m_sourceObjectDataTypeNameHasBeenSet = true;
}

bool RuleExecResult::SourceObjectDataTypeNameHasBeenSet() const
{
    return m_sourceObjectDataTypeNameHasBeenSet;
}

string RuleExecResult::GetSourceObjectValue() const
{
    return m_sourceObjectValue;
}

void RuleExecResult::SetSourceObjectValue(const string& _sourceObjectValue)
{
    m_sourceObjectValue = _sourceObjectValue;
    m_sourceObjectValueHasBeenSet = true;
}

bool RuleExecResult::SourceObjectValueHasBeenSet() const
{
    return m_sourceObjectValueHasBeenSet;
}

string RuleExecResult::GetConditionExpression() const
{
    return m_conditionExpression;
}

void RuleExecResult::SetConditionExpression(const string& _conditionExpression)
{
    m_conditionExpression = _conditionExpression;
    m_conditionExpressionHasBeenSet = true;
}

bool RuleExecResult::ConditionExpressionHasBeenSet() const
{
    return m_conditionExpressionHasBeenSet;
}

uint64_t RuleExecResult::GetExecResultStatus() const
{
    return m_execResultStatus;
}

void RuleExecResult::SetExecResultStatus(const uint64_t& _execResultStatus)
{
    m_execResultStatus = _execResultStatus;
    m_execResultStatusHasBeenSet = true;
}

bool RuleExecResult::ExecResultStatusHasBeenSet() const
{
    return m_execResultStatusHasBeenSet;
}

string RuleExecResult::GetTriggerResult() const
{
    return m_triggerResult;
}

void RuleExecResult::SetTriggerResult(const string& _triggerResult)
{
    m_triggerResult = _triggerResult;
    m_triggerResultHasBeenSet = true;
}

bool RuleExecResult::TriggerResultHasBeenSet() const
{
    return m_triggerResultHasBeenSet;
}

CompareResult RuleExecResult::GetCompareResult() const
{
    return m_compareResult;
}

void RuleExecResult::SetCompareResult(const CompareResult& _compareResult)
{
    m_compareResult = _compareResult;
    m_compareResultHasBeenSet = true;
}

bool RuleExecResult::CompareResultHasBeenSet() const
{
    return m_compareResultHasBeenSet;
}

string RuleExecResult::GetTemplateName() const
{
    return m_templateName;
}

void RuleExecResult::SetTemplateName(const string& _templateName)
{
    m_templateName = _templateName;
    m_templateNameHasBeenSet = true;
}

bool RuleExecResult::TemplateNameHasBeenSet() const
{
    return m_templateNameHasBeenSet;
}

uint64_t RuleExecResult::GetQualityDim() const
{
    return m_qualityDim;
}

void RuleExecResult::SetQualityDim(const uint64_t& _qualityDim)
{
    m_qualityDim = _qualityDim;
    m_qualityDimHasBeenSet = true;
}

bool RuleExecResult::QualityDimHasBeenSet() const
{
    return m_qualityDimHasBeenSet;
}

string RuleExecResult::GetTargetDBTableName() const
{
    return m_targetDBTableName;
}

void RuleExecResult::SetTargetDBTableName(const string& _targetDBTableName)
{
    m_targetDBTableName = _targetDBTableName;
    m_targetDBTableNameHasBeenSet = true;
}

bool RuleExecResult::TargetDBTableNameHasBeenSet() const
{
    return m_targetDBTableNameHasBeenSet;
}

string RuleExecResult::GetTargetObjectValue() const
{
    return m_targetObjectValue;
}

void RuleExecResult::SetTargetObjectValue(const string& _targetObjectValue)
{
    m_targetObjectValue = _targetObjectValue;
    m_targetObjectValueHasBeenSet = true;
}

bool RuleExecResult::TargetObjectValueHasBeenSet() const
{
    return m_targetObjectValueHasBeenSet;
}

string RuleExecResult::GetTargetObjectDataType() const
{
    return m_targetObjectDataType;
}

void RuleExecResult::SetTargetObjectDataType(const string& _targetObjectDataType)
{
    m_targetObjectDataType = _targetObjectDataType;
    m_targetObjectDataTypeHasBeenSet = true;
}

bool RuleExecResult::TargetObjectDataTypeHasBeenSet() const
{
    return m_targetObjectDataTypeHasBeenSet;
}

RuleFieldConfig RuleExecResult::GetFieldConfig() const
{
    return m_fieldConfig;
}

void RuleExecResult::SetFieldConfig(const RuleFieldConfig& _fieldConfig)
{
    m_fieldConfig = _fieldConfig;
    m_fieldConfigHasBeenSet = true;
}

bool RuleExecResult::FieldConfigHasBeenSet() const
{
    return m_fieldConfigHasBeenSet;
}

string RuleExecResult::GetRelConditionExpr() const
{
    return m_relConditionExpr;
}

void RuleExecResult::SetRelConditionExpr(const string& _relConditionExpr)
{
    m_relConditionExpr = _relConditionExpr;
    m_relConditionExprHasBeenSet = true;
}

bool RuleExecResult::RelConditionExprHasBeenSet() const
{
    return m_relConditionExprHasBeenSet;
}

string RuleExecResult::GetStartTime() const
{
    return m_startTime;
}

void RuleExecResult::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool RuleExecResult::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

uint64_t RuleExecResult::GetAlarmLevel() const
{
    return m_alarmLevel;
}

void RuleExecResult::SetAlarmLevel(const uint64_t& _alarmLevel)
{
    m_alarmLevel = _alarmLevel;
    m_alarmLevelHasBeenSet = true;
}

bool RuleExecResult::AlarmLevelHasBeenSet() const
{
    return m_alarmLevelHasBeenSet;
}

string RuleExecResult::GetTriggerCondition() const
{
    return m_triggerCondition;
}

void RuleExecResult::SetTriggerCondition(const string& _triggerCondition)
{
    m_triggerCondition = _triggerCondition;
    m_triggerConditionHasBeenSet = true;
}

bool RuleExecResult::TriggerConditionHasBeenSet() const
{
    return m_triggerConditionHasBeenSet;
}

