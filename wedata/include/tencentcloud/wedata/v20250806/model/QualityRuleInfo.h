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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_QUALITYRULEINFO_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_QUALITYRULEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/QualityCompareRule.h>
#include <tencentcloud/wedata/v20250806/model/QualityRuleFieldConfig.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * 数据质量规则
                */
                class QualityRuleInfo : public AbstractModel
                {
                public:
                    QualityRuleInfo();
                    ~QualityRuleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取规则类型 
1：系统模版
2：自定义模版
3：自定义SQL
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 规则类型 
1：系统模版
2：自定义模版
3：自定义SQL
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置规则类型 
1：系统模版
2：自定义模版
3：自定义SQL
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type 规则类型 
1：系统模版
2：自定义模版
3：自定义SQL
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
                     * 获取数据源Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatasourceId 数据源Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDatasourceId() const;

                    /**
                     * 设置数据源Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _datasourceId 数据源Id
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
                     * 获取数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatabaseName 数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _databaseName 数据库名称
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
                     * 获取报警触发条件
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CompareRule 报警触发条件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    QualityCompareRule GetCompareRule() const;

                    /**
                     * 设置报警触发条件
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _compareRule 报警触发条件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCompareRule(const QualityCompareRule& _compareRule);

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
                     * 获取该规则支持的执行引擎列表，可选值如下：
1 - MYSQL
2 - HIVE
4 - SPARK
8 - LIVY
16 - DLC
32 - GBASE
64 - TCHouse-P
128 - DORIS
256 - TCHouse-D
512 - EMR_STARROCKS
1024 - TCHouse-X
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceEngineTypes 该规则支持的执行引擎列表，可选值如下：
1 - MYSQL
2 - HIVE
4 - SPARK
8 - LIVY
16 - DLC
32 - GBASE
64 - TCHouse-P
128 - DORIS
256 - TCHouse-D
512 - EMR_STARROCKS
1024 - TCHouse-X
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<uint64_t> GetSourceEngineTypes() const;

                    /**
                     * 设置该规则支持的执行引擎列表，可选值如下：
1 - MYSQL
2 - HIVE
4 - SPARK
8 - LIVY
16 - DLC
32 - GBASE
64 - TCHouse-P
128 - DORIS
256 - TCHouse-D
512 - EMR_STARROCKS
1024 - TCHouse-X
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceEngineTypes 该规则支持的执行引擎列表，可选值如下：
1 - MYSQL
2 - HIVE
4 - SPARK
8 - LIVY
16 - DLC
32 - GBASE
64 - TCHouse-P
128 - DORIS
256 - TCHouse-D
512 - EMR_STARROCKS
1024 - TCHouse-X
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
                     * 获取表名称，TableId和TableName至少填一个
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableName 表名称，TableId和TableName至少填一个
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置表名称，TableId和TableName至少填一个
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableName 表名称，TableId和TableName至少填一个
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
                     * 获取规则模板id，【条件必填】当Type≠3（自定义SQL）时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleTemplateId 规则模板id，【条件必填】当Type≠3（自定义SQL）时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRuleTemplateId() const;

                    /**
                     * 设置规则模板id，【条件必填】当Type≠3（自定义SQL）时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleTemplateId 规则模板id，【条件必填】当Type≠3（自定义SQL）时必填
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
                     * 获取规则所属质量维度，Type=3（自定义SQL）时必填（1：准确性，2：唯一性，3：完整性，4：一致性，5：及时性，6：有效性）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QualityDim 规则所属质量维度，Type=3（自定义SQL）时必填（1：准确性，2：唯一性，3：完整性，4：一致性，5：及时性，6：有效性）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetQualityDim() const;

                    /**
                     * 设置规则所属质量维度，Type=3（自定义SQL）时必填（1：准确性，2：唯一性，3：完整性，4：一致性，5：及时性，6：有效性）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _qualityDim 规则所属质量维度，Type=3（自定义SQL）时必填（1：准确性，2：唯一性，3：完整性，4：一致性，5：及时性，6：有效性）
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
                     * 获取规则组Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleGroupId 规则组Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRuleGroupId() const;

                    /**
                     * 设置规则组Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleGroupId 规则组Id
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
                     * 获取数据表ID，TableId和TableName至少要有一个
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableId 数据表ID，TableId和TableName至少要有一个
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableId() const;

                    /**
                     * 设置数据表ID，TableId和TableName至少要有一个
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableId 数据表ID，TableId和TableName至少要有一个
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
                     * 获取源数据对象（表、字段等）详细类型，【条件必填】当Type=1（系统模板）时必填
表对应固定值“table”（模板是表级的）
字段则是对应字段类型：int、string等（模板是字段级的）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceObjectDataTypeName 源数据对象（表、字段等）详细类型，【条件必填】当Type=1（系统模板）时必填
表对应固定值“table”（模板是表级的）
字段则是对应字段类型：int、string等（模板是字段级的）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSourceObjectDataTypeName() const;

                    /**
                     * 设置源数据对象（表、字段等）详细类型，【条件必填】当Type=1（系统模板）时必填
表对应固定值“table”（模板是表级的）
字段则是对应字段类型：int、string等（模板是字段级的）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceObjectDataTypeName 源数据对象（表、字段等）详细类型，【条件必填】当Type=1（系统模板）时必填
表对应固定值“table”（模板是表级的）
字段则是对应字段类型：int、string等（模板是字段级的）
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
                     * 获取源数据对象（表、字段等）名称，【条件必填】当Type=1（系统模板）时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceObjectValue 源数据对象（表、字段等）名称，【条件必填】当Type=1（系统模板）时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSourceObjectValue() const;

                    /**
                     * 设置源数据对象（表、字段等）名称，【条件必填】当Type=1（系统模板）时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceObjectValue 源数据对象（表、字段等）名称，【条件必填】当Type=1（系统模板）时必填
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
                     * 获取检测范围，【条件必填】当Type=1（系统模板）或2（自定义模板）时必填。 
1.全表
2.条件扫描
注意：CompareType为2（波动值）或 使用用户自定义模板时包含过滤条件${FILTER}时，检测范围必须为2条件扫描
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConditionType 检测范围，【条件必填】当Type=1（系统模板）或2（自定义模板）时必填。 
1.全表
2.条件扫描
注意：CompareType为2（波动值）或 使用用户自定义模板时包含过滤条件${FILTER}时，检测范围必须为2条件扫描
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetConditionType() const;

                    /**
                     * 设置检测范围，【条件必填】当Type=1（系统模板）或2（自定义模板）时必填。 
1.全表
2.条件扫描
注意：CompareType为2（波动值）或 使用用户自定义模板时包含过滤条件${FILTER}时，检测范围必须为2条件扫描
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _conditionType 检测范围，【条件必填】当Type=1（系统模板）或2（自定义模板）时必填。 
1.全表
2.条件扫描
注意：CompareType为2（波动值）或 使用用户自定义模板时包含过滤条件${FILTER}时，检测范围必须为2条件扫描
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
                     * 获取条件扫描WHERE条件表达式，【条件必填】ConditionType=2(条件扫描)时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConditionExpression 条件扫描WHERE条件表达式，【条件必填】ConditionType=2(条件扫描)时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetConditionExpression() const;

                    /**
                     * 设置条件扫描WHERE条件表达式，【条件必填】ConditionType=2(条件扫描)时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _conditionExpression 条件扫描WHERE条件表达式，【条件必填】ConditionType=2(条件扫描)时必填
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
                     * 获取自定义SQL（Base64编码），【条件必填】Type=3（自定义SQL）时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CustomSql 自定义SQL（Base64编码），【条件必填】Type=3（自定义SQL）时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCustomSql() const;

                    /**
                     * 设置自定义SQL（Base64编码），【条件必填】Type=3（自定义SQL）时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _customSql 自定义SQL（Base64编码），【条件必填】Type=3（自定义SQL）时必填
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
                     * 获取数据库Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatabaseId 数据库Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDatabaseId() const;

                    /**
                     * 设置数据库Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _databaseId 数据库Id
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
                     * 获取目标过滤条件表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetConditionExpr 目标过滤条件表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetConditionExpr() const;

                    /**
                     * 设置目标过滤条件表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetConditionExpr 目标过滤条件表达式
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
                     * 获取源字段与目标字段关联条件on表达式，【条件必填】仅在字段数据相关性规则时必填（ruleTemplate中qualityDim=4(一致性) 且 subQualityDim=3(字段数据相关性)），例如sourceTable.model_id=targetTable.model_id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RelConditionExpr 源字段与目标字段关联条件on表达式，【条件必填】仅在字段数据相关性规则时必填（ruleTemplate中qualityDim=4(一致性) 且 subQualityDim=3(字段数据相关性)），例如sourceTable.model_id=targetTable.model_id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRelConditionExpr() const;

                    /**
                     * 设置源字段与目标字段关联条件on表达式，【条件必填】仅在字段数据相关性规则时必填（ruleTemplate中qualityDim=4(一致性) 且 subQualityDim=3(字段数据相关性)），例如sourceTable.model_id=targetTable.model_id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _relConditionExpr 源字段与目标字段关联条件on表达式，【条件必填】仅在字段数据相关性规则时必填（ruleTemplate中qualityDim=4(一致性) 且 subQualityDim=3(字段数据相关性)），例如sourceTable.model_id=targetTable.model_id
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
                     * 获取自定义模版sql表达式字段替换参数，【条件必填】Type=2（自定义模板）时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FieldConfig 自定义模版sql表达式字段替换参数，【条件必填】Type=2（自定义模板）时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    QualityRuleFieldConfig GetFieldConfig() const;

                    /**
                     * 设置自定义模版sql表达式字段替换参数，【条件必填】Type=2（自定义模板）时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fieldConfig 自定义模版sql表达式字段替换参数，【条件必填】Type=2（自定义模板）时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFieldConfig(const QualityRuleFieldConfig& _fieldConfig);

                    /**
                     * 判断参数 FieldConfig 是否已赋值
                     * @return FieldConfig 是否已赋值
                     * 
                     */
                    bool FieldConfigHasBeenSet() const;

                    /**
                     * 获取目标字段名称  CITY
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetObjectValue 目标字段名称  CITY
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetObjectValue() const;

                    /**
                     * 设置目标字段名称  CITY
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetObjectValue 目标字段名称  CITY
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
                     * 获取下标，新增时区分不同数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Index 下标，新增时区分不同数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIndex() const;

                    /**
                     * 设置下标，新增时区分不同数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _index 下标，新增时区分不同数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIndex(const std::string& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     * 
                     */
                    bool IndexHasBeenSet() const;

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
                     * 获取目标schema名称，【条件必填】仅在系统模板的“字段数据相关性”规则以及数据源为TCHouse-P时必填（ruleTemplate的qualityDim=4 且 subQualityDim=3）。用于校验和关联跨表数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetSchemaName 目标schema名称，【条件必填】仅在系统模板的“字段数据相关性”规则以及数据源为TCHouse-P时必填（ruleTemplate的qualityDim=4 且 subQualityDim=3）。用于校验和关联跨表数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetSchemaName() const;

                    /**
                     * 设置目标schema名称，【条件必填】仅在系统模板的“字段数据相关性”规则以及数据源为TCHouse-P时必填（ruleTemplate的qualityDim=4 且 subQualityDim=3）。用于校验和关联跨表数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetSchemaName 目标schema名称，【条件必填】仅在系统模板的“字段数据相关性”规则以及数据源为TCHouse-P时必填（ruleTemplate的qualityDim=4 且 subQualityDim=3）。用于校验和关联跨表数据
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
                     * 获取目标库名称，【条件必填】仅在系统模板的“字段数据相关性”规则时必填（ruleTemplate的qualityDim=4 且 subQualityDim=3）。用于校验和关联跨表数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetDatabaseName 目标库名称，【条件必填】仅在系统模板的“字段数据相关性”规则时必填（ruleTemplate的qualityDim=4 且 subQualityDim=3）。用于校验和关联跨表数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetDatabaseName() const;

                    /**
                     * 设置目标库名称，【条件必填】仅在系统模板的“字段数据相关性”规则时必填（ruleTemplate的qualityDim=4 且 subQualityDim=3）。用于校验和关联跨表数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetDatabaseName 目标库名称，【条件必填】仅在系统模板的“字段数据相关性”规则时必填（ruleTemplate的qualityDim=4 且 subQualityDim=3）。用于校验和关联跨表数据
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
                     * 获取目标表名称，【条件必填】仅在系统模板的“字段数据相关性”规则时必填（ruleTemplate的qualityDim=4 且 subQualityDim=3）。用于校验和关联跨表数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetTableName 目标表名称，【条件必填】仅在系统模板的“字段数据相关性”规则时必填（ruleTemplate的qualityDim=4 且 subQualityDim=3）。用于校验和关联跨表数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetTableName() const;

                    /**
                     * 设置目标表名称，【条件必填】仅在系统模板的“字段数据相关性”规则时必填（ruleTemplate的qualityDim=4 且 subQualityDim=3）。用于校验和关联跨表数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetTableName 目标表名称，【条件必填】仅在系统模板的“字段数据相关性”规则时必填（ruleTemplate的qualityDim=4 且 subQualityDim=3）。用于校验和关联跨表数据
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
                     * 获取任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskId 任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskId 任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取数据目录名称，主要用于dlc数据源
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CatalogName 数据目录名称，主要用于dlc数据源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCatalogName() const;

                    /**
                     * 设置数据目录名称，主要用于dlc数据源
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _catalogName 数据目录名称，主要用于dlc数据源
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
                     * 获取目标数据目录名称，【条件必填】仅在系统模板的“字段数据相关性”规则以及数据源为DLC时必填（ruleTemplate的qualityDim=4 且 subQualityDim=3）。用于校验和关联跨表数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetCatalogName 目标数据目录名称，【条件必填】仅在系统模板的“字段数据相关性”规则以及数据源为DLC时必填（ruleTemplate的qualityDim=4 且 subQualityDim=3）。用于校验和关联跨表数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetCatalogName() const;

                    /**
                     * 设置目标数据目录名称，【条件必填】仅在系统模板的“字段数据相关性”规则以及数据源为DLC时必填（ruleTemplate的qualityDim=4 且 subQualityDim=3）。用于校验和关联跨表数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetCatalogName 目标数据目录名称，【条件必填】仅在系统模板的“字段数据相关性”规则以及数据源为DLC时必填（ruleTemplate的qualityDim=4 且 subQualityDim=3）。用于校验和关联跨表数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetCatalogName(const std::string& _targetCatalogName);

                    /**
                     * 判断参数 TargetCatalogName 是否已赋值
                     * @return TargetCatalogName 是否已赋值
                     * 
                     */
                    bool TargetCatalogNameHasBeenSet() const;

                private:

                    /**
                     * 规则名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 规则类型 
1：系统模版
2：自定义模版
3：自定义SQL
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 数据源Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_datasourceId;
                    bool m_datasourceIdHasBeenSet;

                    /**
                     * 数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * 报警触发条件
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    QualityCompareRule m_compareRule;
                    bool m_compareRuleHasBeenSet;

                    /**
                     * 报警触发级别 1.低, 2.中, 3.高
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_alarmLevel;
                    bool m_alarmLevelHasBeenSet;

                    /**
                     * 该规则支持的执行引擎列表，可选值如下：
1 - MYSQL
2 - HIVE
4 - SPARK
8 - LIVY
16 - DLC
32 - GBASE
64 - TCHouse-P
128 - DORIS
256 - TCHouse-D
512 - EMR_STARROCKS
1024 - TCHouse-X
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<uint64_t> m_sourceEngineTypes;
                    bool m_sourceEngineTypesHasBeenSet;

                    /**
                     * 表名称，TableId和TableName至少填一个
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * 规则模板id，【条件必填】当Type≠3（自定义SQL）时必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_ruleTemplateId;
                    bool m_ruleTemplateIdHasBeenSet;

                    /**
                     * 规则所属质量维度，Type=3（自定义SQL）时必填（1：准确性，2：唯一性，3：完整性，4：一致性，5：及时性，6：有效性）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_qualityDim;
                    bool m_qualityDimHasBeenSet;

                    /**
                     * 项目id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 规则组Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_ruleGroupId;
                    bool m_ruleGroupIdHasBeenSet;

                    /**
                     * 数据表ID，TableId和TableName至少要有一个
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableId;
                    bool m_tableIdHasBeenSet;

                    /**
                     * 源数据对象（表、字段等）详细类型，【条件必填】当Type=1（系统模板）时必填
表对应固定值“table”（模板是表级的）
字段则是对应字段类型：int、string等（模板是字段级的）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sourceObjectDataTypeName;
                    bool m_sourceObjectDataTypeNameHasBeenSet;

                    /**
                     * 源数据对象（表、字段等）名称，【条件必填】当Type=1（系统模板）时必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sourceObjectValue;
                    bool m_sourceObjectValueHasBeenSet;

                    /**
                     * 检测范围，【条件必填】当Type=1（系统模板）或2（自定义模板）时必填。 
1.全表
2.条件扫描
注意：CompareType为2（波动值）或 使用用户自定义模板时包含过滤条件${FILTER}时，检测范围必须为2条件扫描
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_conditionType;
                    bool m_conditionTypeHasBeenSet;

                    /**
                     * 条件扫描WHERE条件表达式，【条件必填】ConditionType=2(条件扫描)时必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_conditionExpression;
                    bool m_conditionExpressionHasBeenSet;

                    /**
                     * 自定义SQL（Base64编码），【条件必填】Type=3（自定义SQL）时必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_customSql;
                    bool m_customSqlHasBeenSet;

                    /**
                     * 规则描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 数据库Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_databaseId;
                    bool m_databaseIdHasBeenSet;

                    /**
                     * 目标库Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetDatabaseId;
                    bool m_targetDatabaseIdHasBeenSet;

                    /**
                     * 目标表Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetTableId;
                    bool m_targetTableIdHasBeenSet;

                    /**
                     * 目标过滤条件表达式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetConditionExpr;
                    bool m_targetConditionExprHasBeenSet;

                    /**
                     * 源字段与目标字段关联条件on表达式，【条件必填】仅在字段数据相关性规则时必填（ruleTemplate中qualityDim=4(一致性) 且 subQualityDim=3(字段数据相关性)），例如sourceTable.model_id=targetTable.model_id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_relConditionExpr;
                    bool m_relConditionExprHasBeenSet;

                    /**
                     * 自定义模版sql表达式字段替换参数，【条件必填】Type=2（自定义模板）时必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    QualityRuleFieldConfig m_fieldConfig;
                    bool m_fieldConfigHasBeenSet;

                    /**
                     * 目标字段名称  CITY
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetObjectValue;
                    bool m_targetObjectValueHasBeenSet;

                    /**
                     * 下标，新增时区分不同数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * 模式名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_schemaName;
                    bool m_schemaNameHasBeenSet;

                    /**
                     * 目标schema名称，【条件必填】仅在系统模板的“字段数据相关性”规则以及数据源为TCHouse-P时必填（ruleTemplate的qualityDim=4 且 subQualityDim=3）。用于校验和关联跨表数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetSchemaName;
                    bool m_targetSchemaNameHasBeenSet;

                    /**
                     * 目标库名称，【条件必填】仅在系统模板的“字段数据相关性”规则时必填（ruleTemplate的qualityDim=4 且 subQualityDim=3）。用于校验和关联跨表数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetDatabaseName;
                    bool m_targetDatabaseNameHasBeenSet;

                    /**
                     * 目标表名称，【条件必填】仅在系统模板的“字段数据相关性”规则时必填（ruleTemplate的qualityDim=4 且 subQualityDim=3）。用于校验和关联跨表数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetTableName;
                    bool m_targetTableNameHasBeenSet;

                    /**
                     * 任务id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 数据目录名称，主要用于dlc数据源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_catalogName;
                    bool m_catalogNameHasBeenSet;

                    /**
                     * 目标数据目录名称，【条件必填】仅在系统模板的“字段数据相关性”规则以及数据源为DLC时必填（ruleTemplate的qualityDim=4 且 subQualityDim=3）。用于校验和关联跨表数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetCatalogName;
                    bool m_targetCatalogNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_QUALITYRULEINFO_H_
