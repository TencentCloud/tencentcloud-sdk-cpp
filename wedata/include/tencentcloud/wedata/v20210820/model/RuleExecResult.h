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
                     * 获取规则执行ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleExecId 规则执行ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRuleExecId() const;

                    /**
                     * 设置规则执行ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleExecId 规则执行ID
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
                     * 获取规则组执行ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleGroupExecId 规则组执行ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRuleGroupExecId() const;

                    /**
                     * 设置规则组执行ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleGroupExecId 规则组执行ID
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
                     * 获取规则组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleGroupId 规则组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRuleGroupId() const;

                    /**
                     * 设置规则组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleGroupId 规则组ID
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
                     * 获取规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleId 规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 设置规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleId 规则ID
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
                     * 获取规则名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleName 规则名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置规则名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleName 规则名称
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
                     * 获取规则类型 1.系统模版, 2.自定义模版, 3.自定义SQL
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleType 规则类型 1.系统模版, 2.自定义模版, 3.自定义SQL
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRuleType() const;

                    /**
                     * 设置规则类型 1.系统模版, 2.自定义模版, 3.自定义SQL
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleType 规则类型 1.系统模版, 2.自定义模版, 3.自定义SQL
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
                     * 获取源字段详细类型，int string
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceObjectDataTypeName 源字段详细类型，int string
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSourceObjectDataTypeName() const;

                    /**
                     * 设置源字段详细类型，int string
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceObjectDataTypeName 源字段详细类型，int string
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
                     * 获取源字段名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceObjectValue 源字段名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSourceObjectValue() const;

                    /**
                     * 设置源字段名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceObjectValue 源字段名称
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
                     * 获取条件扫描WHERE条件表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConditionExpression 条件扫描WHERE条件表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetConditionExpression() const;

                    /**
                     * 设置条件扫描WHERE条件表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _conditionExpression 条件扫描WHERE条件表达式
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
                     * 获取检测结果（1:检测通过，2：触发规则，3：检测失败）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecResultStatus 检测结果（1:检测通过，2：触发规则，3：检测失败）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetExecResultStatus() const;

                    /**
                     * 设置检测结果（1:检测通过，2：触发规则，3：检测失败）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _execResultStatus 检测结果（1:检测通过，2：触发规则，3：检测失败）
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
                     * 获取触发结果，告警发送成功, 阻断任务成功
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TriggerResult 触发结果，告警发送成功, 阻断任务成功
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTriggerResult() const;

                    /**
                     * 设置触发结果，告警发送成功, 阻断任务成功
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _triggerResult 触发结果，告警发送成功, 阻断任务成功
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
                     * 获取对比结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CompareResult 对比结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CompareResult GetCompareResult() const;

                    /**
                     * 设置对比结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _compareResult 对比结果
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
                     * 获取模版名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TemplateName 模版名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置模版名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _templateName 模版名称
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
                     * 获取质量维度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QualityDim 质量维度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetQualityDim() const;

                    /**
                     * 设置质量维度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _qualityDim 质量维度
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
                     * 获取目标表-库表名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetDBTableName 目标表-库表名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetDBTableName() const;

                    /**
                     * 设置目标表-库表名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetDBTableName 目标表-库表名称
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
                     * 获取目标表-字段名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetObjectValue 目标表-字段名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetObjectValue() const;

                    /**
                     * 设置目标表-字段名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetObjectValue 目标表-字段名称
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
                     * 获取目标表-字段类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetObjectDataType 目标表-字段类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetObjectDataType() const;

                    /**
                     * 设置目标表-字段类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetObjectDataType 目标表-字段类型
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
                     * 获取自定义模版sql表达式参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FieldConfig 自定义模版sql表达式参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    RuleFieldConfig GetFieldConfig() const;

                    /**
                     * 设置自定义模版sql表达式参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fieldConfig 自定义模版sql表达式参数
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
                     * 获取源字段与目标字段关联条件on表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RelConditionExpr 源字段与目标字段关联条件on表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRelConditionExpr() const;

                    /**
                     * 设置源字段与目标字段关联条件on表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _relConditionExpr 源字段与目标字段关联条件on表达式
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
                     * 获取执行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime 执行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置执行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTime 执行时间
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
                     * 获取1/2/3:低/中/高
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlarmLevel 1/2/3:低/中/高
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetAlarmLevel() const;

                    /**
                     * 设置1/2/3:低/中/高
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _alarmLevel 1/2/3:低/中/高
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
                     * 获取触发条件
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TriggerCondition 触发条件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTriggerCondition() const;

                    /**
                     * 设置触发条件
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _triggerCondition 触发条件
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

                private:

                    /**
                     * 规则执行ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_ruleExecId;
                    bool m_ruleExecIdHasBeenSet;

                    /**
                     * 规则组执行ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_ruleGroupExecId;
                    bool m_ruleGroupExecIdHasBeenSet;

                    /**
                     * 规则组ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_ruleGroupId;
                    bool m_ruleGroupIdHasBeenSet;

                    /**
                     * 规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 规则名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 规则类型 1.系统模版, 2.自定义模版, 3.自定义SQL
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * 源字段详细类型，int string
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sourceObjectDataTypeName;
                    bool m_sourceObjectDataTypeNameHasBeenSet;

                    /**
                     * 源字段名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sourceObjectValue;
                    bool m_sourceObjectValueHasBeenSet;

                    /**
                     * 条件扫描WHERE条件表达式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_conditionExpression;
                    bool m_conditionExpressionHasBeenSet;

                    /**
                     * 检测结果（1:检测通过，2：触发规则，3：检测失败）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_execResultStatus;
                    bool m_execResultStatusHasBeenSet;

                    /**
                     * 触发结果，告警发送成功, 阻断任务成功
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_triggerResult;
                    bool m_triggerResultHasBeenSet;

                    /**
                     * 对比结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CompareResult m_compareResult;
                    bool m_compareResultHasBeenSet;

                    /**
                     * 模版名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * 质量维度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_qualityDim;
                    bool m_qualityDimHasBeenSet;

                    /**
                     * 目标表-库表名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetDBTableName;
                    bool m_targetDBTableNameHasBeenSet;

                    /**
                     * 目标表-字段名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetObjectValue;
                    bool m_targetObjectValueHasBeenSet;

                    /**
                     * 目标表-字段类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetObjectDataType;
                    bool m_targetObjectDataTypeHasBeenSet;

                    /**
                     * 自定义模版sql表达式参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RuleFieldConfig m_fieldConfig;
                    bool m_fieldConfigHasBeenSet;

                    /**
                     * 源字段与目标字段关联条件on表达式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_relConditionExpr;
                    bool m_relConditionExprHasBeenSet;

                    /**
                     * 执行时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 1/2/3:低/中/高
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_alarmLevel;
                    bool m_alarmLevelHasBeenSet;

                    /**
                     * 触发条件
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_triggerCondition;
                    bool m_triggerConditionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEEXECRESULT_H_
