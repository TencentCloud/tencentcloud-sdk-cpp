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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDMSPARTITIONSREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDMSPARTITIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeDMSPartitions请求参数结构体
                */
                class DescribeDMSPartitionsRequest : public AbstractModel
                {
                public:
                    DescribeDMSPartitionsRequest();
                    ~DescribeDMSPartitionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数据库名
                     * @return DatabaseName 数据库名
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置数据库名
                     * @param _databaseName 数据库名
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
                     * 获取表名称
                     * @return TableName 表名称
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置表名称
                     * @param _tableName 表名称
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
                     * 获取schema名称
                     * @return SchemaName schema名称
                     * 
                     */
                    std::string GetSchemaName() const;

                    /**
                     * 设置schema名称
                     * @param _schemaName schema名称
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
                     * 获取名称
                     * @return Name 名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称
                     * @param _name 名称
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
                     * 获取单个分区名称，精准匹配
                     * @return Values 单个分区名称，精准匹配
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置单个分区名称，精准匹配
                     * @param _values 单个分区名称，精准匹配
                     * 
                     */
                    void SetValues(const std::vector<std::string>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     * 
                     */
                    bool ValuesHasBeenSet() const;

                    /**
                     * 获取多个分区名称，精准匹配
                     * @return PartitionNames 多个分区名称，精准匹配
                     * 
                     */
                    std::vector<std::string> GetPartitionNames() const;

                    /**
                     * 设置多个分区名称，精准匹配
                     * @param _partitionNames 多个分区名称，精准匹配
                     * 
                     */
                    void SetPartitionNames(const std::vector<std::string>& _partitionNames);

                    /**
                     * 判断参数 PartitionNames 是否已赋值
                     * @return PartitionNames 是否已赋值
                     * 
                     */
                    bool PartitionNamesHasBeenSet() const;

                    /**
                     * 获取多个分区字段的匹配，模糊匹配
                     * @return PartValues 多个分区字段的匹配，模糊匹配
                     * 
                     */
                    std::vector<std::string> GetPartValues() const;

                    /**
                     * 设置多个分区字段的匹配，模糊匹配
                     * @param _partValues 多个分区字段的匹配，模糊匹配
                     * 
                     */
                    void SetPartValues(const std::vector<std::string>& _partValues);

                    /**
                     * 判断参数 PartValues 是否已赋值
                     * @return PartValues 是否已赋值
                     * 
                     */
                    bool PartValuesHasBeenSet() const;

                    /**
                     * 获取过滤SQL
                     * @return Filter 过滤SQL
                     * 
                     */
                    std::string GetFilter() const;

                    /**
                     * 设置过滤SQL
                     * @param _filter 过滤SQL
                     * 
                     */
                    void SetFilter(const std::string& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                    /**
                     * 获取最大分区数量
                     * @return MaxParts 最大分区数量
                     * 
                     */
                    int64_t GetMaxParts() const;

                    /**
                     * 设置最大分区数量
                     * @param _maxParts 最大分区数量
                     * 
                     */
                    void SetMaxParts(const int64_t& _maxParts);

                    /**
                     * 判断参数 MaxParts 是否已赋值
                     * @return MaxParts 是否已赋值
                     * 
                     */
                    bool MaxPartsHasBeenSet() const;

                    /**
                     * 获取翻页跳过数量
                     * @return Offset 翻页跳过数量
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置翻页跳过数量
                     * @param _offset 翻页跳过数量
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取页面数量
                     * @return Limit 页面数量
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置页面数量
                     * @param _limit 页面数量
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取表达式
                     * @return Expression 表达式
                     * 
                     */
                    std::string GetExpression() const;

                    /**
                     * 设置表达式
                     * @param _expression 表达式
                     * 
                     */
                    void SetExpression(const std::string& _expression);

                    /**
                     * 判断参数 Expression 是否已赋值
                     * @return Expression 是否已赋值
                     * 
                     */
                    bool ExpressionHasBeenSet() const;

                    /**
                     * 获取数据源连接名
                     * @return DatasourceConnectionName 数据源连接名
                     * 
                     */
                    std::string GetDatasourceConnectionName() const;

                    /**
                     * 设置数据源连接名
                     * @param _datasourceConnectionName 数据源连接名
                     * 
                     */
                    void SetDatasourceConnectionName(const std::string& _datasourceConnectionName);

                    /**
                     * 判断参数 DatasourceConnectionName 是否已赋值
                     * @return DatasourceConnectionName 是否已赋值
                     * 
                     */
                    bool DatasourceConnectionNameHasBeenSet() const;

                private:

                    /**
                     * 数据库名
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * 表名称
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * schema名称
                     */
                    std::string m_schemaName;
                    bool m_schemaNameHasBeenSet;

                    /**
                     * 名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 单个分区名称，精准匹配
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                    /**
                     * 多个分区名称，精准匹配
                     */
                    std::vector<std::string> m_partitionNames;
                    bool m_partitionNamesHasBeenSet;

                    /**
                     * 多个分区字段的匹配，模糊匹配
                     */
                    std::vector<std::string> m_partValues;
                    bool m_partValuesHasBeenSet;

                    /**
                     * 过滤SQL
                     */
                    std::string m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * 最大分区数量
                     */
                    int64_t m_maxParts;
                    bool m_maxPartsHasBeenSet;

                    /**
                     * 翻页跳过数量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 页面数量
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 表达式
                     */
                    std::string m_expression;
                    bool m_expressionHasBeenSet;

                    /**
                     * 数据源连接名
                     */
                    std::string m_datasourceConnectionName;
                    bool m_datasourceConnectionNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDMSPARTITIONSREQUEST_H_
