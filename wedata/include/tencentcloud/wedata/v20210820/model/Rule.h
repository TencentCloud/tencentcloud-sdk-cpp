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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_RULE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_RULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/CompareRule.h>
#include <tencentcloud/wedata/v20210820/model/RuleFieldConfig.h>
#include <tencentcloud/wedata/v20210820/model/RuleGroupExecStrategy.h>
#include <tencentcloud/wedata/v20210820/model/RuleGroupSubscribe.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 数据质量规则
                */
                class Rule : public AbstractModel
                {
                public:
                    Rule();
                    ~Rule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取数据表Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableId 数据表Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableId() const;

                    /**
                     * 设置数据表Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableId 数据表Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTableId(const std::string& _tableId);

                    /**
                     * 判断参数 TableId 是否已赋值
                     * @return TableId 是否已赋值
                     * 
                     */
                    bool TableIdHasBeenSet() const;

                    /**
                     * 获取规则名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 规则名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置规则名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 规则名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取规则类型 1.系统模版, 2.自定义模版, 3.自定义SQL
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 规则类型 1.系统模版, 2.自定义模版, 3.自定义SQL
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置规则类型 1.系统模版, 2.自定义模版, 3.自定义SQL
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type 规则类型 1.系统模版, 2.自定义模版, 3.自定义SQL
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取规则模板Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleTemplateId 规则模板Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRuleTemplateId() const;

                    /**
                     * 设置规则模板Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleTemplateId 规则模板Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRuleTemplateId(const uint64_t& _ruleTemplateId);

                    /**
                     * 判断参数 RuleTemplateId 是否已赋值
                     * @return RuleTemplateId 是否已赋值
                     * 
                     */
                    bool RuleTemplateIdHasBeenSet() const;

                    /**
                     * 获取规则模板概述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleTemplateContent 规则模板概述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRuleTemplateContent() const;

                    /**
                     * 设置规则模板概述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleTemplateContent 规则模板概述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRuleTemplateContent(const std::string& _ruleTemplateContent);

                    /**
                     * 判断参数 RuleTemplateContent 是否已赋值
                     * @return RuleTemplateContent 是否已赋值
                     * 
                     */
                    bool RuleTemplateContentHasBeenSet() const;

                    /**
                     * 获取规则所属质量维度 1：准确性，2：唯一性，3：完整性，4：一致性，5：及时性，6：有效性
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QualityDim 规则所属质量维度 1：准确性，2：唯一性，3：完整性，4：一致性，5：及时性，6：有效性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetQualityDim() const;

                    /**
                     * 设置规则所属质量维度 1：准确性，2：唯一性，3：完整性，4：一致性，5：及时性，6：有效性
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _qualityDim 规则所属质量维度 1：准确性，2：唯一性，3：完整性，4：一致性，5：及时性，6：有效性
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
                     * 获取规则适用的源数据对象类型（1：常量，2：离线表级，3：离线字段级别）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceObjectType 规则适用的源数据对象类型（1：常量，2：离线表级，3：离线字段级别）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetSourceObjectType() const;

                    /**
                     * 设置规则适用的源数据对象类型（1：常量，2：离线表级，3：离线字段级别）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceObjectType 规则适用的源数据对象类型（1：常量，2：离线表级，3：离线字段级别）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSourceObjectType(const uint64_t& _sourceObjectType);

                    /**
                     * 判断参数 SourceObjectType 是否已赋值
                     * @return SourceObjectType 是否已赋值
                     * 
                     */
                    bool SourceObjectTypeHasBeenSet() const;

                    /**
                     * 获取规则适用的源数据对象类型（1：数值，2：字符串）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceObjectDataType 规则适用的源数据对象类型（1：数值，2：字符串）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetSourceObjectDataType() const;

                    /**
                     * 设置规则适用的源数据对象类型（1：数值，2：字符串）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceObjectDataType 规则适用的源数据对象类型（1：数值，2：字符串）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSourceObjectDataType(const uint64_t& _sourceObjectDataType);

                    /**
                     * 判断参数 SourceObjectDataType 是否已赋值
                     * @return SourceObjectDataType 是否已赋值
                     * 
                     */
                    bool SourceObjectDataTypeHasBeenSet() const;

                    /**
                     * 获取源字段详细类型，INT、STRING
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceObjectDataTypeName 源字段详细类型，INT、STRING
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSourceObjectDataTypeName() const;

                    /**
                     * 设置源字段详细类型，INT、STRING
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceObjectDataTypeName 源字段详细类型，INT、STRING
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
                     * 获取检测范围 1.全表, 2.条件扫描
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConditionType 检测范围 1.全表, 2.条件扫描
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetConditionType() const;

                    /**
                     * 设置检测范围 1.全表, 2.条件扫描
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _conditionType 检测范围 1.全表, 2.条件扫描
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConditionType(const uint64_t& _conditionType);

                    /**
                     * 判断参数 ConditionType 是否已赋值
                     * @return ConditionType 是否已赋值
                     * 
                     */
                    bool ConditionTypeHasBeenSet() const;

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
                     * 获取自定义SQL
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CustomSql 自定义SQL
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCustomSql() const;

                    /**
                     * 设置自定义SQL
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _customSql 自定义SQL
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCustomSql(const std::string& _customSql);

                    /**
                     * 判断参数 CustomSql 是否已赋值
                     * @return CustomSql 是否已赋值
                     * 
                     */
                    bool CustomSqlHasBeenSet() const;

                    /**
                     * 获取报警触发条件
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CompareRule 报警触发条件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CompareRule GetCompareRule() const;

                    /**
                     * 设置报警触发条件
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _compareRule 报警触发条件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCompareRule(const CompareRule& _compareRule);

                    /**
                     * 判断参数 CompareRule 是否已赋值
                     * @return CompareRule 是否已赋值
                     * 
                     */
                    bool CompareRuleHasBeenSet() const;

                    /**
                     * 获取报警触发级别 1.低, 2.中, 3.高
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlarmLevel 报警触发级别 1.低, 2.中, 3.高
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetAlarmLevel() const;

                    /**
                     * 设置报警触发级别 1.低, 2.中, 3.高
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _alarmLevel 报警触发级别 1.低, 2.中, 3.高
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
                     * 获取规则描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 规则描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置规则描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 规则描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取规则配置人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Operator 规则配置人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置规则配置人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _operator 规则配置人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取目标库Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetDatabaseId 目标库Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetDatabaseId() const;

                    /**
                     * 设置目标库Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetDatabaseId 目标库Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetDatabaseId(const std::string& _targetDatabaseId);

                    /**
                     * 判断参数 TargetDatabaseId 是否已赋值
                     * @return TargetDatabaseId 是否已赋值
                     * 
                     */
                    bool TargetDatabaseIdHasBeenSet() const;

                    /**
                     * 获取目标库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetDatabaseName 目标库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetDatabaseName() const;

                    /**
                     * 设置目标库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetDatabaseName 目标库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetDatabaseName(const std::string& _targetDatabaseName);

                    /**
                     * 判断参数 TargetDatabaseName 是否已赋值
                     * @return TargetDatabaseName 是否已赋值
                     * 
                     */
                    bool TargetDatabaseNameHasBeenSet() const;

                    /**
                     * 获取目标表Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetTableId 目标表Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetTableId() const;

                    /**
                     * 设置目标表Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetTableId 目标表Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetTableId(const std::string& _targetTableId);

                    /**
                     * 判断参数 TargetTableId 是否已赋值
                     * @return TargetTableId 是否已赋值
                     * 
                     */
                    bool TargetTableIdHasBeenSet() const;

                    /**
                     * 获取目标表名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetTableName 目标表名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetTableName() const;

                    /**
                     * 设置目标表名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetTableName 目标表名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetTableName(const std::string& _targetTableName);

                    /**
                     * 判断参数 TargetTableName 是否已赋值
                     * @return TargetTableName 是否已赋值
                     * 
                     */
                    bool TargetTableNameHasBeenSet() const;

                    /**
                     * 获取目标字段过滤条件表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetConditionExpr 目标字段过滤条件表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetConditionExpr() const;

                    /**
                     * 设置目标字段过滤条件表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetConditionExpr 目标字段过滤条件表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetConditionExpr(const std::string& _targetConditionExpr);

                    /**
                     * 判断参数 TargetConditionExpr 是否已赋值
                     * @return TargetConditionExpr 是否已赋值
                     * 
                     */
                    bool TargetConditionExprHasBeenSet() const;

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
                     * 获取是否关联多表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MultiSourceFlag 是否关联多表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetMultiSourceFlag() const;

                    /**
                     * 设置是否关联多表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _multiSourceFlag 是否关联多表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMultiSourceFlag(const bool& _multiSourceFlag);

                    /**
                     * 判断参数 MultiSourceFlag 是否已赋值
                     * @return MultiSourceFlag 是否已赋值
                     * 
                     */
                    bool MultiSourceFlagHasBeenSet() const;

                    /**
                     * 获取是否where参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WhereFlag 是否where参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetWhereFlag() const;

                    /**
                     * 设置是否where参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _whereFlag 是否where参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWhereFlag(const bool& _whereFlag);

                    /**
                     * 判断参数 WhereFlag 是否已赋值
                     * @return WhereFlag 是否已赋值
                     * 
                     */
                    bool WhereFlagHasBeenSet() const;

                    /**
                     * 获取模版原始SQL
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TemplateSql 模版原始SQL
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTemplateSql() const;

                    /**
                     * 设置模版原始SQL
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _templateSql 模版原始SQL
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTemplateSql(const std::string& _templateSql);

                    /**
                     * 判断参数 TemplateSql 是否已赋值
                     * @return TemplateSql 是否已赋值
                     * 
                     */
                    bool TemplateSqlHasBeenSet() const;

                    /**
                     * 获取模版子维度：0.父维度类型,1.一致性: 枚举范围一致性,2.一致性：数值范围一致性,3.一致性：字段数据相关性
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubQualityDim 模版子维度：0.父维度类型,1.一致性: 枚举范围一致性,2.一致性：数值范围一致性,3.一致性：字段数据相关性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetSubQualityDim() const;

                    /**
                     * 设置模版子维度：0.父维度类型,1.一致性: 枚举范围一致性,2.一致性：数值范围一致性,3.一致性：字段数据相关性
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subQualityDim 模版子维度：0.父维度类型,1.一致性: 枚举范围一致性,2.一致性：数值范围一致性,3.一致性：字段数据相关性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubQualityDim(const uint64_t& _subQualityDim);

                    /**
                     * 判断参数 SubQualityDim 是否已赋值
                     * @return SubQualityDim 是否已赋值
                     * 
                     */
                    bool SubQualityDimHasBeenSet() const;

                    /**
                     * 获取规则适用的目标数据对象类型（1：常量，2：离线表级，3：离线字段级别）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetObjectType 规则适用的目标数据对象类型（1：常量，2：离线表级，3：离线字段级别）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTargetObjectType() const;

                    /**
                     * 设置规则适用的目标数据对象类型（1：常量，2：离线表级，3：离线字段级别）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetObjectType 规则适用的目标数据对象类型（1：常量，2：离线表级，3：离线字段级别）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetObjectType(const uint64_t& _targetObjectType);

                    /**
                     * 判断参数 TargetObjectType 是否已赋值
                     * @return TargetObjectType 是否已赋值
                     * 
                     */
                    bool TargetObjectTypeHasBeenSet() const;

                    /**
                     * 获取规则适用的目标数据对象类型（1：数值，2：字符串）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetObjectDataType 规则适用的目标数据对象类型（1：数值，2：字符串）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTargetObjectDataType() const;

                    /**
                     * 设置规则适用的目标数据对象类型（1：数值，2：字符串）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetObjectDataType 规则适用的目标数据对象类型（1：数值，2：字符串）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetObjectDataType(const uint64_t& _targetObjectDataType);

                    /**
                     * 判断参数 TargetObjectDataType 是否已赋值
                     * @return TargetObjectDataType 是否已赋值
                     * 
                     */
                    bool TargetObjectDataTypeHasBeenSet() const;

                    /**
                     * 获取目标字段详细类型，INT、STRING
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetObjectDataTypeName 目标字段详细类型，INT、STRING
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetObjectDataTypeName() const;

                    /**
                     * 设置目标字段详细类型，INT、STRING
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetObjectDataTypeName 目标字段详细类型，INT、STRING
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetObjectDataTypeName(const std::string& _targetObjectDataTypeName);

                    /**
                     * 判断参数 TargetObjectDataTypeName 是否已赋值
                     * @return TargetObjectDataTypeName 是否已赋值
                     * 
                     */
                    bool TargetObjectDataTypeNameHasBeenSet() const;

                    /**
                     * 获取目标字段名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetObjectValue 目标字段名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetObjectValue() const;

                    /**
                     * 设置目标字段名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetObjectValue 目标字段名称
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
                     * 获取源端对应的引擎类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceEngineTypes 源端对应的引擎类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<uint64_t> GetSourceEngineTypes() const;

                    /**
                     * 设置源端对应的引擎类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceEngineTypes 源端对应的引擎类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSourceEngineTypes(const std::vector<uint64_t>& _sourceEngineTypes);

                    /**
                     * 判断参数 SourceEngineTypes 是否已赋值
                     * @return SourceEngineTypes 是否已赋值
                     * 
                     */
                    bool SourceEngineTypesHasBeenSet() const;

                    /**
                     * 获取表名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableName 表名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置表名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableName 表名称
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
                     * 获取表负责人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableOwnerName 表负责人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableOwnerName() const;

                    /**
                     * 设置表负责人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableOwnerName 表负责人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTableOwnerName(const std::string& _tableOwnerName);

                    /**
                     * 判断参数 TableOwnerName 是否已赋值
                     * @return TableOwnerName 是否已赋值
                     * 
                     */
                    bool TableOwnerNameHasBeenSet() const;

                    /**
                     * 获取执行策略信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecStrategy 执行策略信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    RuleGroupExecStrategy GetExecStrategy() const;

                    /**
                     * 设置执行策略信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _execStrategy 执行策略信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecStrategy(const RuleGroupExecStrategy& _execStrategy);

                    /**
                     * 判断参数 ExecStrategy 是否已赋值
                     * @return ExecStrategy 是否已赋值
                     * 
                     */
                    bool ExecStrategyHasBeenSet() const;

                    /**
                     * 获取订阅信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Subscription 订阅信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    RuleGroupSubscribe GetSubscription() const;

                    /**
                     * 设置订阅信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subscription 订阅信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubscription(const RuleGroupSubscribe& _subscription);

                    /**
                     * 判断参数 Subscription 是否已赋值
                     * @return Subscription 是否已赋值
                     * 
                     */
                    bool SubscriptionHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取数据源 id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatasourceId 数据源 id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetDatasourceId() const;

                    /**
                     * 设置数据源 id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _datasourceId 数据源 id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDatasourceId(const uint64_t& _datasourceId);

                    /**
                     * 判断参数 DatasourceId 是否已赋值
                     * @return DatasourceId 是否已赋值
                     * 
                     */
                    bool DatasourceIdHasBeenSet() const;

                    /**
                     * 获取数据库 id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatabaseId 数据库 id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDatabaseId() const;

                    /**
                     * 设置数据库 id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _databaseId 数据库 id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDatabaseId(const std::string& _databaseId);

                    /**
                     * 判断参数 DatabaseId 是否已赋值
                     * @return DatabaseId 是否已赋值
                     * 
                     */
                    bool DatabaseIdHasBeenSet() const;

                    /**
                     * 获取监控是否开启.0false,1true
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MonitorStatus 监控是否开启.0false,1true
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMonitorStatus() const;

                    /**
                     * 设置监控是否开启.0false,1true
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _monitorStatus 监控是否开启.0false,1true
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMonitorStatus(const int64_t& _monitorStatus);

                    /**
                     * 判断参数 MonitorStatus 是否已赋值
                     * @return MonitorStatus 是否已赋值
                     * 
                     */
                    bool MonitorStatusHasBeenSet() const;

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

                    /**
                     * 获取0或者未返回或者null：未定义，1：生产，2：开发
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DsEnvType 0或者未返回或者null：未定义，1：生产，2：开发
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDsEnvType() const;

                    /**
                     * 设置0或者未返回或者null：未定义，1：生产，2：开发
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dsEnvType 0或者未返回或者null：未定义，1：生产，2：开发
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDsEnvType(const int64_t& _dsEnvType);

                    /**
                     * 判断参数 DsEnvType 是否已赋值
                     * @return DsEnvType 是否已赋值
                     * 
                     */
                    bool DsEnvTypeHasBeenSet() const;

                    /**
                     * 获取数据源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatasourceType 数据源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDatasourceType() const;

                    /**
                     * 设置数据源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _datasourceType 数据源类型
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
                     * 获取模式名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SchemaName 模式名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSchemaName() const;

                    /**
                     * 设置模式名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _schemaName 模式名称
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
                     * 获取目标模式名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetSchemaName 目标模式名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetSchemaName() const;

                    /**
                     * 设置目标模式名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetSchemaName 目标模式名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetSchemaName(const std::string& _targetSchemaName);

                    /**
                     * 判断参数 TargetSchemaName 是否已赋值
                     * @return TargetSchemaName 是否已赋值
                     * 
                     */
                    bool TargetSchemaNameHasBeenSet() const;

                    /**
                     * 获取项目id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectId 项目id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectId 项目id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取项目名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectName 项目名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置项目名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectName 项目名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     * 
                     */
                    bool ProjectNameHasBeenSet() const;

                    /**
                     * 获取更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 规则组ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_ruleGroupId;
                    bool m_ruleGroupIdHasBeenSet;

                    /**
                     * 数据表Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableId;
                    bool m_tableIdHasBeenSet;

                    /**
                     * 规则名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 规则类型 1.系统模版, 2.自定义模版, 3.自定义SQL
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 规则模板Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_ruleTemplateId;
                    bool m_ruleTemplateIdHasBeenSet;

                    /**
                     * 规则模板概述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ruleTemplateContent;
                    bool m_ruleTemplateContentHasBeenSet;

                    /**
                     * 规则所属质量维度 1：准确性，2：唯一性，3：完整性，4：一致性，5：及时性，6：有效性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_qualityDim;
                    bool m_qualityDimHasBeenSet;

                    /**
                     * 规则适用的源数据对象类型（1：常量，2：离线表级，3：离线字段级别）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_sourceObjectType;
                    bool m_sourceObjectTypeHasBeenSet;

                    /**
                     * 规则适用的源数据对象类型（1：数值，2：字符串）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_sourceObjectDataType;
                    bool m_sourceObjectDataTypeHasBeenSet;

                    /**
                     * 源字段详细类型，INT、STRING
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
                     * 检测范围 1.全表, 2.条件扫描
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_conditionType;
                    bool m_conditionTypeHasBeenSet;

                    /**
                     * 条件扫描WHERE条件表达式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_conditionExpression;
                    bool m_conditionExpressionHasBeenSet;

                    /**
                     * 自定义SQL
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_customSql;
                    bool m_customSqlHasBeenSet;

                    /**
                     * 报警触发条件
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CompareRule m_compareRule;
                    bool m_compareRuleHasBeenSet;

                    /**
                     * 报警触发级别 1.低, 2.中, 3.高
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_alarmLevel;
                    bool m_alarmLevelHasBeenSet;

                    /**
                     * 规则描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 规则配置人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 目标库Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetDatabaseId;
                    bool m_targetDatabaseIdHasBeenSet;

                    /**
                     * 目标库名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetDatabaseName;
                    bool m_targetDatabaseNameHasBeenSet;

                    /**
                     * 目标表Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetTableId;
                    bool m_targetTableIdHasBeenSet;

                    /**
                     * 目标表名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetTableName;
                    bool m_targetTableNameHasBeenSet;

                    /**
                     * 目标字段过滤条件表达式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetConditionExpr;
                    bool m_targetConditionExprHasBeenSet;

                    /**
                     * 源字段与目标字段关联条件on表达式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_relConditionExpr;
                    bool m_relConditionExprHasBeenSet;

                    /**
                     * 自定义模版sql表达式参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RuleFieldConfig m_fieldConfig;
                    bool m_fieldConfigHasBeenSet;

                    /**
                     * 是否关联多表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_multiSourceFlag;
                    bool m_multiSourceFlagHasBeenSet;

                    /**
                     * 是否where参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_whereFlag;
                    bool m_whereFlagHasBeenSet;

                    /**
                     * 模版原始SQL
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_templateSql;
                    bool m_templateSqlHasBeenSet;

                    /**
                     * 模版子维度：0.父维度类型,1.一致性: 枚举范围一致性,2.一致性：数值范围一致性,3.一致性：字段数据相关性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_subQualityDim;
                    bool m_subQualityDimHasBeenSet;

                    /**
                     * 规则适用的目标数据对象类型（1：常量，2：离线表级，3：离线字段级别）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_targetObjectType;
                    bool m_targetObjectTypeHasBeenSet;

                    /**
                     * 规则适用的目标数据对象类型（1：数值，2：字符串）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_targetObjectDataType;
                    bool m_targetObjectDataTypeHasBeenSet;

                    /**
                     * 目标字段详细类型，INT、STRING
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetObjectDataTypeName;
                    bool m_targetObjectDataTypeNameHasBeenSet;

                    /**
                     * 目标字段名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetObjectValue;
                    bool m_targetObjectValueHasBeenSet;

                    /**
                     * 源端对应的引擎类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<uint64_t> m_sourceEngineTypes;
                    bool m_sourceEngineTypesHasBeenSet;

                    /**
                     * 表名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * 表负责人名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableOwnerName;
                    bool m_tableOwnerNameHasBeenSet;

                    /**
                     * 执行策略信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RuleGroupExecStrategy m_execStrategy;
                    bool m_execStrategyHasBeenSet;

                    /**
                     * 订阅信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RuleGroupSubscribe m_subscription;
                    bool m_subscriptionHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 数据源 id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_datasourceId;
                    bool m_datasourceIdHasBeenSet;

                    /**
                     * 数据库 id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_databaseId;
                    bool m_databaseIdHasBeenSet;

                    /**
                     * 监控是否开启.0false,1true
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_monitorStatus;
                    bool m_monitorStatusHasBeenSet;

                    /**
                     * 触发条件
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_triggerCondition;
                    bool m_triggerConditionHasBeenSet;

                    /**
                     * 0或者未返回或者null：未定义，1：生产，2：开发
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_dsEnvType;
                    bool m_dsEnvTypeHasBeenSet;

                    /**
                     * 数据源类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_datasourceType;
                    bool m_datasourceTypeHasBeenSet;

                    /**
                     * 模式名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_schemaName;
                    bool m_schemaNameHasBeenSet;

                    /**
                     * 目标模式名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetSchemaName;
                    bool m_targetSchemaNameHasBeenSet;

                    /**
                     * 项目id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 项目名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_RULE_H_
