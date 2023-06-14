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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATERULEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATERULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateRule请求参数结构体
                */
                class CreateRuleRequest : public AbstractModel
                {
                public:
                    CreateRuleRequest();
                    ~CreateRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目id
                     * @return ProjectId 项目id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
                     * @param _projectId 项目id
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
                     * 获取规则组Id
                     * @return RuleGroupId 规则组Id
                     * 
                     */
                    uint64_t GetRuleGroupId() const;

                    /**
                     * 设置规则组Id
                     * @param _ruleGroupId 规则组Id
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
                     * 获取规则名称
                     * @return Name 规则名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置规则名称
                     * @param _name 规则名称
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
                     * 获取数据表ID
                     * @return TableId 数据表ID
                     * 
                     */
                    std::string GetTableId() const;

                    /**
                     * 设置数据表ID
                     * @param _tableId 数据表ID
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
                     * 获取规则模板列表
                     * @return RuleTemplateId 规则模板列表
                     * 
                     */
                    uint64_t GetRuleTemplateId() const;

                    /**
                     * 设置规则模板列表
                     * @param _ruleTemplateId 规则模板列表
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
                     * 获取规则类型 1.系统模版, 2.自定义模版, 3.自定义SQL
                     * @return Type 规则类型 1.系统模版, 2.自定义模版, 3.自定义SQL
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置规则类型 1.系统模版, 2.自定义模版, 3.自定义SQL
                     * @param _type 规则类型 1.系统模版, 2.自定义模版, 3.自定义SQL
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
                     * 获取规则所属质量维度（1：准确性，2：唯一性，3：完整性，4：一致性，5：及时性，6：有效性
                     * @return QualityDim 规则所属质量维度（1：准确性，2：唯一性，3：完整性，4：一致性，5：及时性，6：有效性
                     * 
                     */
                    uint64_t GetQualityDim() const;

                    /**
                     * 设置规则所属质量维度（1：准确性，2：唯一性，3：完整性，4：一致性，5：及时性，6：有效性
                     * @param _qualityDim 规则所属质量维度（1：准确性，2：唯一性，3：完整性，4：一致性，5：及时性，6：有效性
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
                     * 获取源字段详细类型，int、string
                     * @return SourceObjectDataTypeName 源字段详细类型，int、string
                     * 
                     */
                    std::string GetSourceObjectDataTypeName() const;

                    /**
                     * 设置源字段详细类型，int、string
                     * @param _sourceObjectDataTypeName 源字段详细类型，int、string
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
                     * @return SourceObjectValue 源字段名称
                     * 
                     */
                    std::string GetSourceObjectValue() const;

                    /**
                     * 设置源字段名称
                     * @param _sourceObjectValue 源字段名称
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
                     * 获取检测范围 1.全表   2.条件扫描
                     * @return ConditionType 检测范围 1.全表   2.条件扫描
                     * 
                     */
                    uint64_t GetConditionType() const;

                    /**
                     * 设置检测范围 1.全表   2.条件扫描
                     * @param _conditionType 检测范围 1.全表   2.条件扫描
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
                     * @return ConditionExpression 条件扫描WHERE条件表达式
                     * 
                     */
                    std::string GetConditionExpression() const;

                    /**
                     * 设置条件扫描WHERE条件表达式
                     * @param _conditionExpression 条件扫描WHERE条件表达式
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
                     * @return CustomSql 自定义SQL
                     * 
                     */
                    std::string GetCustomSql() const;

                    /**
                     * 设置自定义SQL
                     * @param _customSql 自定义SQL
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
                     * @return CompareRule 报警触发条件
                     * 
                     */
                    CompareRule GetCompareRule() const;

                    /**
                     * 设置报警触发条件
                     * @param _compareRule 报警触发条件
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
                     * @return AlarmLevel 报警触发级别 1.低, 2.中, 3.高
                     * 
                     */
                    uint64_t GetAlarmLevel() const;

                    /**
                     * 设置报警触发级别 1.低, 2.中, 3.高
                     * @param _alarmLevel 报警触发级别 1.低, 2.中, 3.高
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
                     * @return Description 规则描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置规则描述
                     * @param _description 规则描述
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
                     * 获取数据源Id
                     * @return DatasourceId 数据源Id
                     * 
                     */
                    std::string GetDatasourceId() const;

                    /**
                     * 设置数据源Id
                     * @param _datasourceId 数据源Id
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
                     * 获取数据库Id
                     * @return DatabaseId 数据库Id
                     * 
                     */
                    std::string GetDatabaseId() const;

                    /**
                     * 设置数据库Id
                     * @param _databaseId 数据库Id
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
                     * 获取目标库Id
                     * @return TargetDatabaseId 目标库Id
                     * 
                     */
                    std::string GetTargetDatabaseId() const;

                    /**
                     * 设置目标库Id
                     * @param _targetDatabaseId 目标库Id
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
                     * 获取目标表Id
                     * @return TargetTableId 目标表Id
                     * 
                     */
                    std::string GetTargetTableId() const;

                    /**
                     * 设置目标表Id
                     * @param _targetTableId 目标表Id
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
                     * 获取目标过滤条件表达式
                     * @return TargetConditionExpr 目标过滤条件表达式
                     * 
                     */
                    std::string GetTargetConditionExpr() const;

                    /**
                     * 设置目标过滤条件表达式
                     * @param _targetConditionExpr 目标过滤条件表达式
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
                     * @return RelConditionExpr 源字段与目标字段关联条件on表达式
                     * 
                     */
                    std::string GetRelConditionExpr() const;

                    /**
                     * 设置源字段与目标字段关联条件on表达式
                     * @param _relConditionExpr 源字段与目标字段关联条件on表达式
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
                     * 获取自定义模版sql表达式字段替换参数
                     * @return FieldConfig 自定义模版sql表达式字段替换参数
                     * 
                     */
                    RuleFieldConfig GetFieldConfig() const;

                    /**
                     * 设置自定义模版sql表达式字段替换参数
                     * @param _fieldConfig 自定义模版sql表达式字段替换参数
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
                     * 获取目标字段名称  CITY
                     * @return TargetObjectValue 目标字段名称  CITY
                     * 
                     */
                    std::string GetTargetObjectValue() const;

                    /**
                     * 设置目标字段名称  CITY
                     * @param _targetObjectValue 目标字段名称  CITY
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
                     * 获取该规则支持的执行引擎列表
                     * @return SourceEngineTypes 该规则支持的执行引擎列表
                     * 
                     */
                    std::vector<uint64_t> GetSourceEngineTypes() const;

                    /**
                     * 设置该规则支持的执行引擎列表
                     * @param _sourceEngineTypes 该规则支持的执行引擎列表
                     * 
                     */
                    void SetSourceEngineTypes(const std::vector<uint64_t>& _sourceEngineTypes);

                    /**
                     * 判断参数 SourceEngineTypes 是否已赋值
                     * @return SourceEngineTypes 是否已赋值
                     * 
                     */
                    bool SourceEngineTypesHasBeenSet() const;

                private:

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 规则组Id
                     */
                    uint64_t m_ruleGroupId;
                    bool m_ruleGroupIdHasBeenSet;

                    /**
                     * 规则名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 数据表ID
                     */
                    std::string m_tableId;
                    bool m_tableIdHasBeenSet;

                    /**
                     * 规则模板列表
                     */
                    uint64_t m_ruleTemplateId;
                    bool m_ruleTemplateIdHasBeenSet;

                    /**
                     * 规则类型 1.系统模版, 2.自定义模版, 3.自定义SQL
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 规则所属质量维度（1：准确性，2：唯一性，3：完整性，4：一致性，5：及时性，6：有效性
                     */
                    uint64_t m_qualityDim;
                    bool m_qualityDimHasBeenSet;

                    /**
                     * 源字段详细类型，int、string
                     */
                    std::string m_sourceObjectDataTypeName;
                    bool m_sourceObjectDataTypeNameHasBeenSet;

                    /**
                     * 源字段名称
                     */
                    std::string m_sourceObjectValue;
                    bool m_sourceObjectValueHasBeenSet;

                    /**
                     * 检测范围 1.全表   2.条件扫描
                     */
                    uint64_t m_conditionType;
                    bool m_conditionTypeHasBeenSet;

                    /**
                     * 条件扫描WHERE条件表达式
                     */
                    std::string m_conditionExpression;
                    bool m_conditionExpressionHasBeenSet;

                    /**
                     * 自定义SQL
                     */
                    std::string m_customSql;
                    bool m_customSqlHasBeenSet;

                    /**
                     * 报警触发条件
                     */
                    CompareRule m_compareRule;
                    bool m_compareRuleHasBeenSet;

                    /**
                     * 报警触发级别 1.低, 2.中, 3.高
                     */
                    uint64_t m_alarmLevel;
                    bool m_alarmLevelHasBeenSet;

                    /**
                     * 规则描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 数据源Id
                     */
                    std::string m_datasourceId;
                    bool m_datasourceIdHasBeenSet;

                    /**
                     * 数据库Id
                     */
                    std::string m_databaseId;
                    bool m_databaseIdHasBeenSet;

                    /**
                     * 目标库Id
                     */
                    std::string m_targetDatabaseId;
                    bool m_targetDatabaseIdHasBeenSet;

                    /**
                     * 目标表Id
                     */
                    std::string m_targetTableId;
                    bool m_targetTableIdHasBeenSet;

                    /**
                     * 目标过滤条件表达式
                     */
                    std::string m_targetConditionExpr;
                    bool m_targetConditionExprHasBeenSet;

                    /**
                     * 源字段与目标字段关联条件on表达式
                     */
                    std::string m_relConditionExpr;
                    bool m_relConditionExprHasBeenSet;

                    /**
                     * 自定义模版sql表达式字段替换参数
                     */
                    RuleFieldConfig m_fieldConfig;
                    bool m_fieldConfigHasBeenSet;

                    /**
                     * 目标字段名称  CITY
                     */
                    std::string m_targetObjectValue;
                    bool m_targetObjectValueHasBeenSet;

                    /**
                     * 该规则支持的执行引擎列表
                     */
                    std::vector<uint64_t> m_sourceEngineTypes;
                    bool m_sourceEngineTypesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATERULEREQUEST_H_
