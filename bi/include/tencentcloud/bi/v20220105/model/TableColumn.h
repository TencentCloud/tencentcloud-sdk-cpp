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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_TABLECOLUMN_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_TABLECOLUMN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bi/v20220105/model/EmptyValueConfig.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * 表的列数据抽象
                */
                class TableColumn : public AbstractModel
                {
                public:
                    TableColumn();
                    ~TableColumn() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取列名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DbName 列名字
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置列名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dbName 列名字
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDbName(const std::string& _dbName);

                    /**
                     * 判断参数 DbName 是否已赋值
                     * @return DbName 是否已赋值
                     * 
                     */
                    bool DbNameHasBeenSet() const;

                    /**
                     * 获取列的别名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AliasName 列的别名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAliasName() const;

                    /**
                     * 设置列的别名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _aliasName 列的别名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAliasName(const std::string& _aliasName);

                    /**
                     * 判断参数 AliasName 是否已赋值
                     * @return AliasName 是否已赋值
                     * 
                     */
                    bool AliasNameHasBeenSet() const;

                    /**
                     * 获取列的类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DbType 列的类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDbType() const;

                    /**
                     * 设置列的类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dbType 列的类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDbType(const std::string& _dbType);

                    /**
                     * 判断参数 DbType 是否已赋值
                     * @return DbType 是否已赋值
                     * 
                     */
                    bool DbTypeHasBeenSet() const;

                    /**
                     * 获取段类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FieldType 段类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFieldType() const;

                    /**
                     * 设置段类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fieldType 段类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFieldType(const std::string& _fieldType);

                    /**
                     * 判断参数 FieldType 是否已赋值
                     * @return FieldType 是否已赋值
                     * 
                     */
                    bool FieldTypeHasBeenSet() const;

                    /**
                     * 获取备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Mark 备注
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMark() const;

                    /**
                     * 设置备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mark 备注
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMark(const std::string& _mark);

                    /**
                     * 判断参数 Mark 是否已赋值
                     * @return Mark 是否已赋值
                     * 
                     */
                    bool MarkHasBeenSet() const;

                    /**
                     * 获取excel名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExcelName excel名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExcelName() const;

                    /**
                     * 设置excel名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _excelName excel名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExcelName(const std::string& _excelName);

                    /**
                     * 判断参数 ExcelName 是否已赋值
                     * @return ExcelName 是否已赋值
                     * 
                     */
                    bool ExcelNameHasBeenSet() const;

                    /**
                     * 获取关联的字典表Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DictId 关联的字典表Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDictId() const;

                    /**
                     * 设置关联的字典表Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dictId 关联的字典表Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDictId(const int64_t& _dictId);

                    /**
                     * 判断参数 DictId 是否已赋值
                     * @return DictId 是否已赋值
                     * 
                     */
                    bool DictIdHasBeenSet() const;

                    /**
                     * 获取关联的字典表表名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DictName 关联的字典表表名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDictName() const;

                    /**
                     * 设置关联的字典表表名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dictName 关联的字典表表名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDictName(const std::string& _dictName);

                    /**
                     * 判断参数 DictName 是否已赋值
                     * @return DictName 是否已赋值
                     * 
                     */
                    bool DictNameHasBeenSet() const;

                    /**
                     * 获取多表关联新增字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableNodeId 多表关联新增字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableNodeId() const;

                    /**
                     * 设置多表关联新增字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableNodeId 多表关联新增字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTableNodeId(const std::string& _tableNodeId);

                    /**
                     * 判断参数 TableNodeId 是否已赋值
                     * @return TableNodeId 是否已赋值
                     * 
                     */
                    bool TableNodeIdHasBeenSet() const;

                    /**
                     * 获取字段所属的表名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableName 字段所属的表名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置字段所属的表名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableName 字段所属的表名
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
                     * 获取用户设置的带格式的目标复杂格式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FieldComplexType 用户设置的带格式的目标复杂格式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFieldComplexType() const;

                    /**
                     * 设置用户设置的带格式的目标复杂格式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fieldComplexType 用户设置的带格式的目标复杂格式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFieldComplexType(const std::string& _fieldComplexType);

                    /**
                     * 判断参数 FieldComplexType 是否已赋值
                     * @return FieldComplexType 是否已赋值
                     * 
                     */
                    bool FieldComplexTypeHasBeenSet() const;

                    /**
                     * 获取格式规则
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FormatRule 格式规则
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFormatRule() const;

                    /**
                     * 设置格式规则
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _formatRule 格式规则
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFormatRule(const std::string& _formatRule);

                    /**
                     * 判断参数 FormatRule 是否已赋值
                     * @return FormatRule 是否已赋值
                     * 
                     */
                    bool FormatRuleHasBeenSet() const;

                    /**
                     * 获取数据字段是否过滤空值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsFilter 数据字段是否过滤空值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsFilter() const;

                    /**
                     * 设置数据字段是否过滤空值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isFilter 数据字段是否过滤空值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsFilter(const bool& _isFilter);

                    /**
                     * 判断参数 IsFilter 是否已赋值
                     * @return IsFilter 是否已赋值
                     * 
                     */
                    bool IsFilterHasBeenSet() const;

                    /**
                     * 获取计算字段类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CalcType 计算字段类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCalcType() const;

                    /**
                     * 设置计算字段类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _calcType 计算字段类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCalcType(const std::string& _calcType);

                    /**
                     * 判断参数 CalcType 是否已赋值
                     * @return CalcType 是否已赋值
                     * 
                     */
                    bool CalcTypeHasBeenSet() const;

                    /**
                     * 获取计算字段的公式内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CalcFormula 计算字段的公式内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCalcFormula() const;

                    /**
                     * 设置计算字段的公式内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _calcFormula 计算字段的公式内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCalcFormula(const std::string& _calcFormula);

                    /**
                     * 判断参数 CalcFormula 是否已赋值
                     * @return CalcFormula 是否已赋值
                     * 
                     */
                    bool CalcFormulaHasBeenSet() const;

                    /**
                     * 获取计算字段的中文公式内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CalcDesc 计算字段的中文公式内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCalcDesc() const;

                    /**
                     * 设置计算字段的中文公式内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _calcDesc 计算字段的中文公式内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCalcDesc(const std::string& _calcDesc);

                    /**
                     * 判断参数 CalcDesc 是否已赋值
                     * @return CalcDesc 是否已赋值
                     * 
                     */
                    bool CalcDescHasBeenSet() const;

                    /**
                     * 获取Api数据源json路径名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JsonPathName Api数据源json路径名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetJsonPathName() const;

                    /**
                     * 设置Api数据源json路径名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _jsonPathName Api数据源json路径名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetJsonPathName(const std::string& _jsonPathName);

                    /**
                     * 判断参数 JsonPathName 是否已赋值
                     * @return JsonPathName 是否已赋值
                     * 
                     */
                    bool JsonPathNameHasBeenSet() const;

                    /**
                     * 获取地理类型标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Granularity 地理类型标识
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGranularity() const;

                    /**
                     * 设置地理类型标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _granularity 地理类型标识
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGranularity(const std::string& _granularity);

                    /**
                     * 判断参数 Granularity 是否已赋值
                     * @return Granularity 是否已赋值
                     * 
                     */
                    bool GranularityHasBeenSet() const;

                    /**
                     * 获取自定义地图Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GeoJsonId 自定义地图Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetGeoJsonId() const;

                    /**
                     * 设置自定义地图Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _geoJsonId 自定义地图Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGeoJsonId(const uint64_t& _geoJsonId);

                    /**
                     * 判断参数 GeoJsonId 是否已赋值
                     * @return GeoJsonId 是否已赋值
                     * 
                     */
                    bool GeoJsonIdHasBeenSet() const;

                    /**
                     * 获取空值展示样式配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EmptyValueConfig 空值展示样式配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    EmptyValueConfig GetEmptyValueConfig() const;

                    /**
                     * 设置空值展示样式配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _emptyValueConfig 空值展示样式配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEmptyValueConfig(const EmptyValueConfig& _emptyValueConfig);

                    /**
                     * 判断参数 EmptyValueConfig 是否已赋值
                     * @return EmptyValueConfig 是否已赋值
                     * 
                     */
                    bool EmptyValueConfigHasBeenSet() const;

                    /**
                     * 获取原列名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DbFieldName 原列名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDbFieldName() const;

                    /**
                     * 设置原列名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dbFieldName 原列名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDbFieldName(const std::string& _dbFieldName);

                    /**
                     * 判断参数 DbFieldName 是否已赋值
                     * @return DbFieldName 是否已赋值
                     * 
                     */
                    bool DbFieldNameHasBeenSet() const;

                    /**
                     * 获取是否是复制字段操作
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsCopyOperation 是否是复制字段操作
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsCopyOperation() const;

                    /**
                     * 设置是否是复制字段操作
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isCopyOperation 是否是复制字段操作
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsCopyOperation(const bool& _isCopyOperation);

                    /**
                     * 判断参数 IsCopyOperation 是否已赋值
                     * @return IsCopyOperation 是否已赋值
                     * 
                     */
                    bool IsCopyOperationHasBeenSet() const;

                    /**
                     * 获取是否从普通字段复制
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsCopyFromNormal 是否从普通字段复制
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsCopyFromNormal() const;

                    /**
                     * 设置是否从普通字段复制
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isCopyFromNormal 是否从普通字段复制
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsCopyFromNormal(const bool& _isCopyFromNormal);

                    /**
                     * 判断参数 IsCopyFromNormal 是否已赋值
                     * @return IsCopyFromNormal 是否已赋值
                     * 
                     */
                    bool IsCopyFromNormalHasBeenSet() const;

                private:

                    /**
                     * 列名字
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * 列的别名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_aliasName;
                    bool m_aliasNameHasBeenSet;

                    /**
                     * 列的类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dbType;
                    bool m_dbTypeHasBeenSet;

                    /**
                     * 段类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fieldType;
                    bool m_fieldTypeHasBeenSet;

                    /**
                     * 备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_mark;
                    bool m_markHasBeenSet;

                    /**
                     * excel名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_excelName;
                    bool m_excelNameHasBeenSet;

                    /**
                     * 关联的字典表Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_dictId;
                    bool m_dictIdHasBeenSet;

                    /**
                     * 关联的字典表表名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dictName;
                    bool m_dictNameHasBeenSet;

                    /**
                     * 多表关联新增字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableNodeId;
                    bool m_tableNodeIdHasBeenSet;

                    /**
                     * 字段所属的表名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * 用户设置的带格式的目标复杂格式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fieldComplexType;
                    bool m_fieldComplexTypeHasBeenSet;

                    /**
                     * 格式规则
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_formatRule;
                    bool m_formatRuleHasBeenSet;

                    /**
                     * 数据字段是否过滤空值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isFilter;
                    bool m_isFilterHasBeenSet;

                    /**
                     * 计算字段类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_calcType;
                    bool m_calcTypeHasBeenSet;

                    /**
                     * 计算字段的公式内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_calcFormula;
                    bool m_calcFormulaHasBeenSet;

                    /**
                     * 计算字段的中文公式内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_calcDesc;
                    bool m_calcDescHasBeenSet;

                    /**
                     * Api数据源json路径名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_jsonPathName;
                    bool m_jsonPathNameHasBeenSet;

                    /**
                     * 地理类型标识
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_granularity;
                    bool m_granularityHasBeenSet;

                    /**
                     * 自定义地图Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_geoJsonId;
                    bool m_geoJsonIdHasBeenSet;

                    /**
                     * 空值展示样式配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EmptyValueConfig m_emptyValueConfig;
                    bool m_emptyValueConfigHasBeenSet;

                    /**
                     * 原列名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dbFieldName;
                    bool m_dbFieldNameHasBeenSet;

                    /**
                     * 是否是复制字段操作
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isCopyOperation;
                    bool m_isCopyOperationHasBeenSet;

                    /**
                     * 是否从普通字段复制
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isCopyFromNormal;
                    bool m_isCopyFromNormalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_TABLECOLUMN_H_
