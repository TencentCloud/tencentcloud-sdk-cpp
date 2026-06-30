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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEEXECRESULT_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEEXECRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/CompareResult.h>
#include <tencentcloud/wedata/v20210820/model/RuleFieldConfig.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 规则执行结果
                */
                class RuleExecResult : public AbstractModel
                {
                public:
                    RuleExecResult();
                    ~RuleExecResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>规则执行ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleExecId <p>规则执行ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRuleExecId() const;

                    /**
                     * 设置<p>规则执行ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleExecId <p>规则执行ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRuleExecId(const uint64_t& _ruleExecId);

                    /**
                     * 判断参数 RuleExecId 是否已赋值
                     * @return RuleExecId 是否已赋值
                     * 
                     */
                    bool RuleExecIdHasBeenSet() const;

                    /**
                     * 获取<p>规则组执行ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleGroupExecId <p>规则组执行ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRuleGroupExecId() const;

                    /**
                     * 设置<p>规则组执行ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleGroupExecId <p>规则组执行ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRuleGroupExecId(const uint64_t& _ruleGroupExecId);

                    /**
                     * 判断参数 RuleGroupExecId 是否已赋值
                     * @return RuleGroupExecId 是否已赋值
                     * 
                     */
                    bool RuleGroupExecIdHasBeenSet() const;

                    /**
                     * 获取<p>规则组ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleGroupId <p>规则组ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRuleGroupId() const;

                    /**
                     * 设置<p>规则组ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleGroupId <p>规则组ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRuleGroupId(const uint64_t& _ruleGroupId);

                    /**
                     * 判断参数 RuleGroupId 是否已赋值
                     * @return RuleGroupId 是否已赋值
                     * 
                     */
                    bool RuleGroupIdHasBeenSet() const;

                    /**
                     * 获取<p>规则ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleId <p>规则ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 设置<p>规则ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleId <p>规则ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRuleId(const uint64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取<p>规则名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleName <p>规则名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置<p>规则名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleName <p>规则名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取<p>规则类型 1.系统模版, 2.自定义模版, 3.自定义SQL</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleType <p>规则类型 1.系统模版, 2.自定义模版, 3.自定义SQL</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRuleType() const;

                    /**
                     * 设置<p>规则类型 1.系统模版, 2.自定义模版, 3.自定义SQL</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleType <p>规则类型 1.系统模版, 2.自定义模版, 3.自定义SQL</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRuleType(const uint64_t& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取<p>源字段详细类型，int string</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceObjectDataTypeName <p>源字段详细类型，int string</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSourceObjectDataTypeName() const;

                    /**
                     * 设置<p>源字段详细类型，int string</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceObjectDataTypeName <p>源字段详细类型，int string</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSourceObjectDataTypeName(const std::string& _sourceObjectDataTypeName);

                    /**
                     * 判断参数 SourceObjectDataTypeName 是否已赋值
                     * @return SourceObjectDataTypeName 是否已赋值
                     * 
                     */
                    bool SourceObjectDataTypeNameHasBeenSet() const;

                    /**
                     * 获取<p>源字段名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceObjectValue <p>源字段名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSourceObjectValue() const;

                    /**
                     * 设置<p>源字段名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceObjectValue <p>源字段名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSourceObjectValue(const std::string& _sourceObjectValue);

                    /**
                     * 判断参数 SourceObjectValue 是否已赋值
                     * @return SourceObjectValue 是否已赋值
                     * 
                     */
                    bool SourceObjectValueHasBeenSet() const;

                    /**
                     * 获取<p>条件扫描WHERE条件表达式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConditionExpression <p>条件扫描WHERE条件表达式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetConditionExpression() const;

                    /**
                     * 设置<p>条件扫描WHERE条件表达式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _conditionExpression <p>条件扫描WHERE条件表达式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConditionExpression(const std::string& _conditionExpression);

                    /**
                     * 判断参数 ConditionExpression 是否已赋值
                     * @return ConditionExpression 是否已赋值
                     * 
                     */
                    bool ConditionExpressionHasBeenSet() const;

                    /**
                     * 获取<p>检测结果（1:检测通过，2：触发规则，3：检测失败）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecResultStatus <p>检测结果（1:检测通过，2：触发规则，3：检测失败）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetExecResultStatus() const;

                    /**
                     * 设置<p>检测结果（1:检测通过，2：触发规则，3：检测失败）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _execResultStatus <p>检测结果（1:检测通过，2：触发规则，3：检测失败）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecResultStatus(const uint64_t& _execResultStatus);

                    /**
                     * 判断参数 ExecResultStatus 是否已赋值
                     * @return ExecResultStatus 是否已赋值
                     * 
                     */
                    bool ExecResultStatusHasBeenSet() const;

                    /**
                     * 获取<p>触发结果，告警发送成功, 阻断任务成功</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TriggerResult <p>触发结果，告警发送成功, 阻断任务成功</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTriggerResult() const;

                    /**
                     * 设置<p>触发结果，告警发送成功, 阻断任务成功</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _triggerResult <p>触发结果，告警发送成功, 阻断任务成功</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTriggerResult(const std::string& _triggerResult);

                    /**
                     * 判断参数 TriggerResult 是否已赋值
                     * @return TriggerResult 是否已赋值
                     * 
                     */
                    bool TriggerResultHasBeenSet() const;

                    /**
                     * 获取<p>对比结果</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CompareResult <p>对比结果</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CompareResult GetCompareResult() const;

                    /**
                     * 设置<p>对比结果</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _compareResult <p>对比结果</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCompareResult(const CompareResult& _compareResult);

                    /**
                     * 判断参数 CompareResult 是否已赋值
                     * @return CompareResult 是否已赋值
                     * 
                     */
                    bool CompareResultHasBeenSet() const;

                    /**
                     * 获取<p>模版名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TemplateName <p>模版名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置<p>模版名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _templateName <p>模版名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTemplateName(const std::string& _templateName);

                    /**
                     * 判断参数 TemplateName 是否已赋值
                     * @return TemplateName 是否已赋值
                     * 
                     */
                    bool TemplateNameHasBeenSet() const;

                    /**
                     * 获取<p>质量维度</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QualityDim <p>质量维度</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetQualityDim() const;

                    /**
                     * 设置<p>质量维度</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _qualityDim <p>质量维度</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQualityDim(const uint64_t& _qualityDim);

                    /**
                     * 判断参数 QualityDim 是否已赋值
                     * @return QualityDim 是否已赋值
                     * 
                     */
                    bool QualityDimHasBeenSet() const;

                    /**
                     * 获取<p>目标表-库表名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetDBTableName <p>目标表-库表名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetDBTableName() const;

                    /**
                     * 设置<p>目标表-库表名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetDBTableName <p>目标表-库表名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetDBTableName(const std::string& _targetDBTableName);

                    /**
                     * 判断参数 TargetDBTableName 是否已赋值
                     * @return TargetDBTableName 是否已赋值
                     * 
                     */
                    bool TargetDBTableNameHasBeenSet() const;

                    /**
                     * 获取<p>目标表-字段名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetObjectValue <p>目标表-字段名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetObjectValue() const;

                    /**
                     * 设置<p>目标表-字段名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetObjectValue <p>目标表-字段名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetObjectValue(const std::string& _targetObjectValue);

                    /**
                     * 判断参数 TargetObjectValue 是否已赋值
                     * @return TargetObjectValue 是否已赋值
                     * 
                     */
                    bool TargetObjectValueHasBeenSet() const;

                    /**
                     * 获取<p>目标表-字段类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetObjectDataType <p>目标表-字段类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetObjectDataType() const;

                    /**
                     * 设置<p>目标表-字段类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetObjectDataType <p>目标表-字段类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetObjectDataType(const std::string& _targetObjectDataType);

                    /**
                     * 判断参数 TargetObjectDataType 是否已赋值
                     * @return TargetObjectDataType 是否已赋值
                     * 
                     */
                    bool TargetObjectDataTypeHasBeenSet() const;

                    /**
                     * 获取<p>自定义模版sql表达式参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FieldConfig <p>自定义模版sql表达式参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    RuleFieldConfig GetFieldConfig() const;

                    /**
                     * 设置<p>自定义模版sql表达式参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fieldConfig <p>自定义模版sql表达式参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFieldConfig(const RuleFieldConfig& _fieldConfig);

                    /**
                     * 判断参数 FieldConfig 是否已赋值
                     * @return FieldConfig 是否已赋值
                     * 
                     */
                    bool FieldConfigHasBeenSet() const;

                    /**
                     * 获取<p>源字段与目标字段关联条件on表达式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RelConditionExpr <p>源字段与目标字段关联条件on表达式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRelConditionExpr() const;

                    /**
                     * 设置<p>源字段与目标字段关联条件on表达式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _relConditionExpr <p>源字段与目标字段关联条件on表达式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRelConditionExpr(const std::string& _relConditionExpr);

                    /**
                     * 判断参数 RelConditionExpr 是否已赋值
                     * @return RelConditionExpr 是否已赋值
                     * 
                     */
                    bool RelConditionExprHasBeenSet() const;

                    /**
                     * 获取<p>执行时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime <p>执行时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>执行时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTime <p>执行时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>1/2/3:低/中/高</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlarmLevel <p>1/2/3:低/中/高</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetAlarmLevel() const;

                    /**
                     * 设置<p>1/2/3:低/中/高</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _alarmLevel <p>1/2/3:低/中/高</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAlarmLevel(const uint64_t& _alarmLevel);

                    /**
                     * 判断参数 AlarmLevel 是否已赋值
                     * @return AlarmLevel 是否已赋值
                     * 
                     */
                    bool AlarmLevelHasBeenSet() const;

                    /**
                     * 获取<p>触发条件</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TriggerCondition <p>触发条件</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTriggerCondition() const;

                    /**
                     * 设置<p>触发条件</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _triggerCondition <p>触发条件</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTriggerCondition(const std::string& _triggerCondition);

                    /**
                     * 判断参数 TriggerCondition 是否已赋值
                     * @return TriggerCondition 是否已赋值
                     * 
                     */
                    bool TriggerConditionHasBeenSet() const;

                    /**
                     * 获取<p>任务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleGroupName <p>任务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRuleGroupName() const;

                    /**
                     * 设置<p>任务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleGroupName <p>任务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRuleGroupName(const std::string& _ruleGroupName);

                    /**
                     * 判断参数 RuleGroupName 是否已赋值
                     * @return RuleGroupName 是否已赋值
                     * 
                     */
                    bool RuleGroupNameHasBeenSet() const;

                    /**
                     * 获取<p>数据源ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatasourceId <p>数据源ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDatasourceId() const;

                    /**
                     * 设置<p>数据源ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _datasourceId <p>数据源ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDatasourceId(const std::string& _datasourceId);

                    /**
                     * 判断参数 DatasourceId 是否已赋值
                     * @return DatasourceId 是否已赋值
                     * 
                     */
                    bool DatasourceIdHasBeenSet() const;

                    /**
                     * 获取<p>数据源名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatasourceName <p>数据源名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDatasourceName() const;

                    /**
                     * 设置<p>数据源名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _datasourceName <p>数据源名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDatasourceName(const std::string& _datasourceName);

                    /**
                     * 判断参数 DatasourceName 是否已赋值
                     * @return DatasourceName 是否已赋值
                     * 
                     */
                    bool DatasourceNameHasBeenSet() const;

                    /**
                     * 获取<p>数据库名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatabaseName <p>数据库名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置<p>数据库名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _databaseName <p>数据库名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDatabaseName(const std::string& _databaseName);

                    /**
                     * 判断参数 DatabaseName 是否已赋值
                     * @return DatabaseName 是否已赋值
                     * 
                     */
                    bool DatabaseNameHasBeenSet() const;

                    /**
                     * 获取<p>模式名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SchemaName <p>模式名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSchemaName() const;

                    /**
                     * 设置<p>模式名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _schemaName <p>模式名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSchemaName(const std::string& _schemaName);

                    /**
                     * 判断参数 SchemaName 是否已赋值
                     * @return SchemaName 是否已赋值
                     * 
                     */
                    bool SchemaNameHasBeenSet() const;

                    /**
                     * 获取<p>表名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableName <p>表名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置<p>表名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableName <p>表名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTableName(const std::string& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     * 
                     */
                    bool TableNameHasBeenSet() const;

                    /**
                     * 获取<p>判断是否屏蔽监控 0.屏蔽 1.不屏蔽</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleGroupExist <p>判断是否屏蔽监控 0.屏蔽 1.不屏蔽</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRuleGroupExist() const;

                    /**
                     * 设置<p>判断是否屏蔽监控 0.屏蔽 1.不屏蔽</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleGroupExist <p>判断是否屏蔽监控 0.屏蔽 1.不屏蔽</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRuleGroupExist(const int64_t& _ruleGroupExist);

                    /**
                     * 判断参数 RuleGroupExist 是否已赋值
                     * @return RuleGroupExist 是否已赋值
                     * 
                     */
                    bool RuleGroupExistHasBeenSet() const;

                    /**
                     * 获取<p>数据源类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatasourceType <p>数据源类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDatasourceType() const;

                    /**
                     * 设置<p>数据源类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _datasourceType <p>数据源类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDatasourceType(const int64_t& _datasourceType);

                    /**
                     * 判断参数 DatasourceType 是否已赋值
                     * @return DatasourceType 是否已赋值
                     * 
                     */
                    bool DatasourceTypeHasBeenSet() const;

                    /**
                     * 获取<p>数据表id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleGroupTableId <p>数据表id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRuleGroupTableId() const;

                    /**
                     * 设置<p>数据表id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleGroupTableId <p>数据表id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRuleGroupTableId(const uint64_t& _ruleGroupTableId);

                    /**
                     * 判断参数 RuleGroupTableId 是否已赋值
                     * @return RuleGroupTableId 是否已赋值
                     * 
                     */
                    bool RuleGroupTableIdHasBeenSet() const;

                    /**
                     * 获取<p>监控方式 1.未配置, 2.关联生产调度, 3.离线周期检测</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MonitorType <p>监控方式 1.未配置, 2.关联生产调度, 3.离线周期检测</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMonitorType() const;

                    /**
                     * 设置<p>监控方式 1.未配置, 2.关联生产调度, 3.离线周期检测</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _monitorType <p>监控方式 1.未配置, 2.关联生产调度, 3.离线周期检测</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMonitorType(const int64_t& _monitorType);

                    /**
                     * 判断参数 MonitorType 是否已赋值
                     * @return MonitorType 是否已赋值
                     * 
                     */
                    bool MonitorTypeHasBeenSet() const;

                    /**
                     * 获取<p>执行结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FinishTime <p>执行结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFinishTime() const;

                    /**
                     * 设置<p>执行结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _finishTime <p>执行结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFinishTime(const std::string& _finishTime);

                    /**
                     * 判断参数 FinishTime 是否已赋值
                     * @return FinishTime 是否已赋值
                     * 
                     */
                    bool FinishTimeHasBeenSet() const;

                    /**
                     * 获取<p>任务类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupType <p>任务类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGroupType() const;

                    /**
                     * 设置<p>任务类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groupType <p>任务类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGroupType(const std::string& _groupType);

                    /**
                     * 判断参数 GroupType 是否已赋值
                     * @return GroupType 是否已赋值
                     * 
                     */
                    bool GroupTypeHasBeenSet() const;

                    /**
                     * 获取<p>编排任务id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AspectTaskId <p>编排任务id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAspectTaskId() const;

                    /**
                     * 设置<p>编排任务id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _aspectTaskId <p>编排任务id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAspectTaskId(const std::string& _aspectTaskId);

                    /**
                     * 判断参数 AspectTaskId 是否已赋值
                     * @return AspectTaskId 是否已赋值
                     * 
                     */
                    bool AspectTaskIdHasBeenSet() const;

                    /**
                     * 获取<p>目录</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CatalogName <p>目录</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCatalogName() const;

                    /**
                     * 设置<p>目录</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _catalogName <p>目录</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCatalogName(const std::string& _catalogName);

                    /**
                     * 判断参数 CatalogName 是否已赋值
                     * @return CatalogName 是否已赋值
                     * 
                     */
                    bool CatalogNameHasBeenSet() const;

                    /**
                     * 获取<p>规则执行状态</p><p>枚举值：</p><ul><li>0： 初始状态</li><li>1： 运行中</li><li>2： 运行成功</li><li>3： 运行失败</li><li>4： 被杀死</li></ul>
                     * @return RuleExecStatus <p>规则执行状态</p><p>枚举值：</p><ul><li>0： 初始状态</li><li>1： 运行中</li><li>2： 运行成功</li><li>3： 运行失败</li><li>4： 被杀死</li></ul>
                     * 
                     */
                    int64_t GetRuleExecStatus() const;

                    /**
                     * 设置<p>规则执行状态</p><p>枚举值：</p><ul><li>0： 初始状态</li><li>1： 运行中</li><li>2： 运行成功</li><li>3： 运行失败</li><li>4： 被杀死</li></ul>
                     * @param _ruleExecStatus <p>规则执行状态</p><p>枚举值：</p><ul><li>0： 初始状态</li><li>1： 运行中</li><li>2： 运行成功</li><li>3： 运行失败</li><li>4： 被杀死</li></ul>
                     * 
                     */
                    void SetRuleExecStatus(const int64_t& _ruleExecStatus);

                    /**
                     * 判断参数 RuleExecStatus 是否已赋值
                     * @return RuleExecStatus 是否已赋值
                     * 
                     */
                    bool RuleExecStatusHasBeenSet() const;

                private:

                    /**
                     * <p>规则执行ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_ruleExecId;
                    bool m_ruleExecIdHasBeenSet;

                    /**
                     * <p>规则组执行ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_ruleGroupExecId;
                    bool m_ruleGroupExecIdHasBeenSet;

                    /**
                     * <p>规则组ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_ruleGroupId;
                    bool m_ruleGroupIdHasBeenSet;

                    /**
                     * <p>规则ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * <p>规则名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * <p>规则类型 1.系统模版, 2.自定义模版, 3.自定义SQL</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * <p>源字段详细类型，int string</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sourceObjectDataTypeName;
                    bool m_sourceObjectDataTypeNameHasBeenSet;

                    /**
                     * <p>源字段名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sourceObjectValue;
                    bool m_sourceObjectValueHasBeenSet;

                    /**
                     * <p>条件扫描WHERE条件表达式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_conditionExpression;
                    bool m_conditionExpressionHasBeenSet;

                    /**
                     * <p>检测结果（1:检测通过，2：触发规则，3：检测失败）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_execResultStatus;
                    bool m_execResultStatusHasBeenSet;

                    /**
                     * <p>触发结果，告警发送成功, 阻断任务成功</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_triggerResult;
                    bool m_triggerResultHasBeenSet;

                    /**
                     * <p>对比结果</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CompareResult m_compareResult;
                    bool m_compareResultHasBeenSet;

                    /**
                     * <p>模版名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * <p>质量维度</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_qualityDim;
                    bool m_qualityDimHasBeenSet;

                    /**
                     * <p>目标表-库表名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetDBTableName;
                    bool m_targetDBTableNameHasBeenSet;

                    /**
                     * <p>目标表-字段名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetObjectValue;
                    bool m_targetObjectValueHasBeenSet;

                    /**
                     * <p>目标表-字段类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetObjectDataType;
                    bool m_targetObjectDataTypeHasBeenSet;

                    /**
                     * <p>自定义模版sql表达式参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RuleFieldConfig m_fieldConfig;
                    bool m_fieldConfigHasBeenSet;

                    /**
                     * <p>源字段与目标字段关联条件on表达式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_relConditionExpr;
                    bool m_relConditionExprHasBeenSet;

                    /**
                     * <p>执行时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>1/2/3:低/中/高</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_alarmLevel;
                    bool m_alarmLevelHasBeenSet;

                    /**
                     * <p>触发条件</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_triggerCondition;
                    bool m_triggerConditionHasBeenSet;

                    /**
                     * <p>任务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ruleGroupName;
                    bool m_ruleGroupNameHasBeenSet;

                    /**
                     * <p>数据源ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_datasourceId;
                    bool m_datasourceIdHasBeenSet;

                    /**
                     * <p>数据源名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_datasourceName;
                    bool m_datasourceNameHasBeenSet;

                    /**
                     * <p>数据库名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * <p>模式名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_schemaName;
                    bool m_schemaNameHasBeenSet;

                    /**
                     * <p>表名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * <p>判断是否屏蔽监控 0.屏蔽 1.不屏蔽</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_ruleGroupExist;
                    bool m_ruleGroupExistHasBeenSet;

                    /**
                     * <p>数据源类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_datasourceType;
                    bool m_datasourceTypeHasBeenSet;

                    /**
                     * <p>数据表id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_ruleGroupTableId;
                    bool m_ruleGroupTableIdHasBeenSet;

                    /**
                     * <p>监控方式 1.未配置, 2.关联生产调度, 3.离线周期检测</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_monitorType;
                    bool m_monitorTypeHasBeenSet;

                    /**
                     * <p>执行结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                    /**
                     * <p>任务类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_groupType;
                    bool m_groupTypeHasBeenSet;

                    /**
                     * <p>编排任务id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_aspectTaskId;
                    bool m_aspectTaskIdHasBeenSet;

                    /**
                     * <p>目录</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_catalogName;
                    bool m_catalogNameHasBeenSet;

                    /**
                     * <p>规则执行状态</p><p>枚举值：</p><ul><li>0： 初始状态</li><li>1： 运行中</li><li>2： 运行成功</li><li>3： 运行失败</li><li>4： 被杀死</li></ul>
                     */
                    int64_t m_ruleExecStatus;
                    bool m_ruleExecStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEEXECRESULT_H_
