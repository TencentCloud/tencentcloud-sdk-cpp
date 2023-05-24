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
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 设置规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RuleId 规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRuleId(const uint64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取规则组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleGroupId 规则组ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetRuleGroupId() const;

                    /**
                     * 设置规则组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RuleGroupId 规则组ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRuleGroupId(const uint64_t& _ruleGroupId);

                    /**
                     * 判断参数 RuleGroupId 是否已赋值
                     * @return RuleGroupId 是否已赋值
                     */
                    bool RuleGroupIdHasBeenSet() const;

                    /**
                     * 获取数据表Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableId 数据表Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTableId() const;

                    /**
                     * 设置数据表Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TableId 数据表Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTableId(const std::string& _tableId);

                    /**
                     * 判断参数 TableId 是否已赋值
                     * @return TableId 是否已赋值
                     */
                    bool TableIdHasBeenSet() const;

                    /**
                     * 获取规则名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 规则名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetName() const;

                    /**
                     * 设置规则名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Name 规则名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取规则类型 1.系统模版, 2.自定义模版, 3.自定义SQL
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 规则类型 1.系统模版, 2.自定义模版, 3.自定义SQL
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置规则类型 1.系统模版, 2.自定义模版, 3.自定义SQL
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Type 规则类型 1.系统模版, 2.自定义模版, 3.自定义SQL
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取规则模板Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleTemplateId 规则模板Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetRuleTemplateId() const;

                    /**
                     * 设置规则模板Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RuleTemplateId 规则模板Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRuleTemplateId(const uint64_t& _ruleTemplateId);

                    /**
                     * 判断参数 RuleTemplateId 是否已赋值
                     * @return RuleTemplateId 是否已赋值
                     */
                    bool RuleTemplateIdHasBeenSet() const;

                    /**
                     * 获取规则模板概述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleTemplateContent 规则模板概述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRuleTemplateContent() const;

                    /**
                     * 设置规则模板概述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RuleTemplateContent 规则模板概述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRuleTemplateContent(const std::string& _ruleTemplateContent);

                    /**
                     * 判断参数 RuleTemplateContent 是否已赋值
                     * @return RuleTemplateContent 是否已赋值
                     */
                    bool RuleTemplateContentHasBeenSet() const;

                    /**
                     * 获取规则所属质量维度 1：准确性，2：唯一性，3：完整性，4：一致性，5：及时性，6：有效性
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QualityDim 规则所属质量维度 1：准确性，2：唯一性，3：完整性，4：一致性，5：及时性，6：有效性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetQualityDim() const;

                    /**
                     * 设置规则所属质量维度 1：准确性，2：唯一性，3：完整性，4：一致性，5：及时性，6：有效性
注意：此字段可能返回 null，表示取不到有效值。
                     * @param QualityDim 规则所属质量维度 1：准确性，2：唯一性，3：完整性，4：一致性，5：及时性，6：有效性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetQualityDim(const uint64_t& _qualityDim);

                    /**
                     * 判断参数 QualityDim 是否已赋值
                     * @return QualityDim 是否已赋值
                     */
                    bool QualityDimHasBeenSet() const;

                    /**
                     * 获取规则适用的源数据对象类型（1：常量，2：离线表级，3：离线字段级别）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceObjectType 规则适用的源数据对象类型（1：常量，2：离线表级，3：离线字段级别）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetSourceObjectType() const;

                    /**
                     * 设置规则适用的源数据对象类型（1：常量，2：离线表级，3：离线字段级别）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SourceObjectType 规则适用的源数据对象类型（1：常量，2：离线表级，3：离线字段级别）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSourceObjectType(const uint64_t& _sourceObjectType);

                    /**
                     * 判断参数 SourceObjectType 是否已赋值
                     * @return SourceObjectType 是否已赋值
                     */
                    bool SourceObjectTypeHasBeenSet() const;

                    /**
                     * 获取规则适用的源数据对象类型（1：数值，2：字符串）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceObjectDataType 规则适用的源数据对象类型（1：数值，2：字符串）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetSourceObjectDataType() const;

                    /**
                     * 设置规则适用的源数据对象类型（1：数值，2：字符串）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SourceObjectDataType 规则适用的源数据对象类型（1：数值，2：字符串）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSourceObjectDataType(const uint64_t& _sourceObjectDataType);

                    /**
                     * 判断参数 SourceObjectDataType 是否已赋值
                     * @return SourceObjectDataType 是否已赋值
                     */
                    bool SourceObjectDataTypeHasBeenSet() const;

                    /**
                     * 获取源字段详细类型，INT、STRING
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceObjectDataTypeName 源字段详细类型，INT、STRING
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSourceObjectDataTypeName() const;

                    /**
                     * 设置源字段详细类型，INT、STRING
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SourceObjectDataTypeName 源字段详细类型，INT、STRING
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSourceObjectDataTypeName(const std::string& _sourceObjectDataTypeName);

                    /**
                     * 判断参数 SourceObjectDataTypeName 是否已赋值
                     * @return SourceObjectDataTypeName 是否已赋值
                     */
                    bool SourceObjectDataTypeNameHasBeenSet() const;

                    /**
                     * 获取源字段名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceObjectValue 源字段名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSourceObjectValue() const;

                    /**
                     * 设置源字段名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SourceObjectValue 源字段名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSourceObjectValue(const std::string& _sourceObjectValue);

                    /**
                     * 判断参数 SourceObjectValue 是否已赋值
                     * @return SourceObjectValue 是否已赋值
                     */
                    bool SourceObjectValueHasBeenSet() const;

                    /**
                     * 获取检测范围 1.全表, 2.条件扫描
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConditionType 检测范围 1.全表, 2.条件扫描
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetConditionType() const;

                    /**
                     * 设置检测范围 1.全表, 2.条件扫描
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ConditionType 检测范围 1.全表, 2.条件扫描
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetConditionType(const uint64_t& _conditionType);

                    /**
                     * 判断参数 ConditionType 是否已赋值
                     * @return ConditionType 是否已赋值
                     */
                    bool ConditionTypeHasBeenSet() const;

                    /**
                     * 获取条件扫描WHERE条件表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConditionExpression 条件扫描WHERE条件表达式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetConditionExpression() const;

                    /**
                     * 设置条件扫描WHERE条件表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ConditionExpression 条件扫描WHERE条件表达式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetConditionExpression(const std::string& _conditionExpression);

                    /**
                     * 判断参数 ConditionExpression 是否已赋值
                     * @return ConditionExpression 是否已赋值
                     */
                    bool ConditionExpressionHasBeenSet() const;

                    /**
                     * 获取自定义SQL
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CustomSql 自定义SQL
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCustomSql() const;

                    /**
                     * 设置自定义SQL
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CustomSql 自定义SQL
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCustomSql(const std::string& _customSql);

                    /**
                     * 判断参数 CustomSql 是否已赋值
                     * @return CustomSql 是否已赋值
                     */
                    bool CustomSqlHasBeenSet() const;

                    /**
                     * 获取报警触发条件
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CompareRule 报警触发条件
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CompareRule GetCompareRule() const;

                    /**
                     * 设置报警触发条件
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CompareRule 报警触发条件
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCompareRule(const CompareRule& _compareRule);

                    /**
                     * 判断参数 CompareRule 是否已赋值
                     * @return CompareRule 是否已赋值
                     */
                    bool CompareRuleHasBeenSet() const;

                    /**
                     * 获取报警触发级别 1.低, 2.中, 3.高
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlarmLevel 报警触发级别 1.低, 2.中, 3.高
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetAlarmLevel() const;

                    /**
                     * 设置报警触发级别 1.低, 2.中, 3.高
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AlarmLevel 报警触发级别 1.低, 2.中, 3.高
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAlarmLevel(const uint64_t& _alarmLevel);

                    /**
                     * 判断参数 AlarmLevel 是否已赋值
                     * @return AlarmLevel 是否已赋值
                     */
                    bool AlarmLevelHasBeenSet() const;

                    /**
                     * 获取规则描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 规则描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置规则描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Description 规则描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取规则配置人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Operator 规则配置人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置规则配置人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Operator 规则配置人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取目标库Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetDatabaseId 目标库Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTargetDatabaseId() const;

                    /**
                     * 设置目标库Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TargetDatabaseId 目标库Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTargetDatabaseId(const std::string& _targetDatabaseId);

                    /**
                     * 判断参数 TargetDatabaseId 是否已赋值
                     * @return TargetDatabaseId 是否已赋值
                     */
                    bool TargetDatabaseIdHasBeenSet() const;

                    /**
                     * 获取目标库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetDatabaseName 目标库名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTargetDatabaseName() const;

                    /**
                     * 设置目标库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TargetDatabaseName 目标库名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTargetDatabaseName(const std::string& _targetDatabaseName);

                    /**
                     * 判断参数 TargetDatabaseName 是否已赋值
                     * @return TargetDatabaseName 是否已赋值
                     */
                    bool TargetDatabaseNameHasBeenSet() const;

                    /**
                     * 获取目标表Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetTableId 目标表Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTargetTableId() const;

                    /**
                     * 设置目标表Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TargetTableId 目标表Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTargetTableId(const std::string& _targetTableId);

                    /**
                     * 判断参数 TargetTableId 是否已赋值
                     * @return TargetTableId 是否已赋值
                     */
                    bool TargetTableIdHasBeenSet() const;

                    /**
                     * 获取目标表名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetTableName 目标表名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTargetTableName() const;

                    /**
                     * 设置目标表名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TargetTableName 目标表名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTargetTableName(const std::string& _targetTableName);

                    /**
                     * 判断参数 TargetTableName 是否已赋值
                     * @return TargetTableName 是否已赋值
                     */
                    bool TargetTableNameHasBeenSet() const;

                    /**
                     * 获取目标字段过滤条件表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetConditionExpr 目标字段过滤条件表达式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTargetConditionExpr() const;

                    /**
                     * 设置目标字段过滤条件表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TargetConditionExpr 目标字段过滤条件表达式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTargetConditionExpr(const std::string& _targetConditionExpr);

                    /**
                     * 判断参数 TargetConditionExpr 是否已赋值
                     * @return TargetConditionExpr 是否已赋值
                     */
                    bool TargetConditionExprHasBeenSet() const;

                    /**
                     * 获取源字段与目标字段关联条件on表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RelConditionExpr 源字段与目标字段关联条件on表达式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRelConditionExpr() const;

                    /**
                     * 设置源字段与目标字段关联条件on表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RelConditionExpr 源字段与目标字段关联条件on表达式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRelConditionExpr(const std::string& _relConditionExpr);

                    /**
                     * 判断参数 RelConditionExpr 是否已赋值
                     * @return RelConditionExpr 是否已赋值
                     */
                    bool RelConditionExprHasBeenSet() const;

                    /**
                     * 获取自定义模版sql表达式参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FieldConfig 自定义模版sql表达式参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RuleFieldConfig GetFieldConfig() const;

                    /**
                     * 设置自定义模版sql表达式参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FieldConfig 自定义模版sql表达式参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFieldConfig(const RuleFieldConfig& _fieldConfig);

                    /**
                     * 判断参数 FieldConfig 是否已赋值
                     * @return FieldConfig 是否已赋值
                     */
                    bool FieldConfigHasBeenSet() const;

                    /**
                     * 获取是否关联多表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MultiSourceFlag 是否关联多表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetMultiSourceFlag() const;

                    /**
                     * 设置是否关联多表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MultiSourceFlag 是否关联多表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMultiSourceFlag(const bool& _multiSourceFlag);

                    /**
                     * 判断参数 MultiSourceFlag 是否已赋值
                     * @return MultiSourceFlag 是否已赋值
                     */
                    bool MultiSourceFlagHasBeenSet() const;

                    /**
                     * 获取是否where参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WhereFlag 是否where参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetWhereFlag() const;

                    /**
                     * 设置是否where参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param WhereFlag 是否where参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetWhereFlag(const bool& _whereFlag);

                    /**
                     * 判断参数 WhereFlag 是否已赋值
                     * @return WhereFlag 是否已赋值
                     */
                    bool WhereFlagHasBeenSet() const;

                    /**
                     * 获取模版原始SQL
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TemplateSql 模版原始SQL
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTemplateSql() const;

                    /**
                     * 设置模版原始SQL
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TemplateSql 模版原始SQL
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTemplateSql(const std::string& _templateSql);

                    /**
                     * 判断参数 TemplateSql 是否已赋值
                     * @return TemplateSql 是否已赋值
                     */
                    bool TemplateSqlHasBeenSet() const;

                    /**
                     * 获取模版子维度：0.父维度类型,1.一致性: 枚举范围一致性,2.一致性：数值范围一致性,3.一致性：字段数据相关性
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubQualityDim 模版子维度：0.父维度类型,1.一致性: 枚举范围一致性,2.一致性：数值范围一致性,3.一致性：字段数据相关性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetSubQualityDim() const;

                    /**
                     * 设置模版子维度：0.父维度类型,1.一致性: 枚举范围一致性,2.一致性：数值范围一致性,3.一致性：字段数据相关性
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SubQualityDim 模版子维度：0.父维度类型,1.一致性: 枚举范围一致性,2.一致性：数值范围一致性,3.一致性：字段数据相关性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSubQualityDim(const uint64_t& _subQualityDim);

                    /**
                     * 判断参数 SubQualityDim 是否已赋值
                     * @return SubQualityDim 是否已赋值
                     */
                    bool SubQualityDimHasBeenSet() const;

                    /**
                     * 获取规则适用的目标数据对象类型（1：常量，2：离线表级，3：离线字段级别）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetObjectType 规则适用的目标数据对象类型（1：常量，2：离线表级，3：离线字段级别）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetTargetObjectType() const;

                    /**
                     * 设置规则适用的目标数据对象类型（1：常量，2：离线表级，3：离线字段级别）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TargetObjectType 规则适用的目标数据对象类型（1：常量，2：离线表级，3：离线字段级别）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTargetObjectType(const uint64_t& _targetObjectType);

                    /**
                     * 判断参数 TargetObjectType 是否已赋值
                     * @return TargetObjectType 是否已赋值
                     */
                    bool TargetObjectTypeHasBeenSet() const;

                    /**
                     * 获取规则适用的目标数据对象类型（1：数值，2：字符串）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetObjectDataType 规则适用的目标数据对象类型（1：数值，2：字符串）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetTargetObjectDataType() const;

                    /**
                     * 设置规则适用的目标数据对象类型（1：数值，2：字符串）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TargetObjectDataType 规则适用的目标数据对象类型（1：数值，2：字符串）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTargetObjectDataType(const uint64_t& _targetObjectDataType);

                    /**
                     * 判断参数 TargetObjectDataType 是否已赋值
                     * @return TargetObjectDataType 是否已赋值
                     */
                    bool TargetObjectDataTypeHasBeenSet() const;

                    /**
                     * 获取目标字段详细类型，INT、STRING
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetObjectDataTypeName 目标字段详细类型，INT、STRING
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTargetObjectDataTypeName() const;

                    /**
                     * 设置目标字段详细类型，INT、STRING
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TargetObjectDataTypeName 目标字段详细类型，INT、STRING
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTargetObjectDataTypeName(const std::string& _targetObjectDataTypeName);

                    /**
                     * 判断参数 TargetObjectDataTypeName 是否已赋值
                     * @return TargetObjectDataTypeName 是否已赋值
                     */
                    bool TargetObjectDataTypeNameHasBeenSet() const;

                    /**
                     * 获取目标字段名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetObjectValue 目标字段名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTargetObjectValue() const;

                    /**
                     * 设置目标字段名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TargetObjectValue 目标字段名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTargetObjectValue(const std::string& _targetObjectValue);

                    /**
                     * 判断参数 TargetObjectValue 是否已赋值
                     * @return TargetObjectValue 是否已赋值
                     */
                    bool TargetObjectValueHasBeenSet() const;

                    /**
                     * 获取源端对应的引擎类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceEngineTypes 源端对应的引擎类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<uint64_t> GetSourceEngineTypes() const;

                    /**
                     * 设置源端对应的引擎类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SourceEngineTypes 源端对应的引擎类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSourceEngineTypes(const std::vector<uint64_t>& _sourceEngineTypes);

                    /**
                     * 判断参数 SourceEngineTypes 是否已赋值
                     * @return SourceEngineTypes 是否已赋值
                     */
                    bool SourceEngineTypesHasBeenSet() const;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_RULE_H_
