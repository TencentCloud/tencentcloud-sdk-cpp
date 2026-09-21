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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_POSTGRESSPACEOBJECTITEM_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_POSTGRESSPACEOBJECTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * PostgreSQL 产品空间对象项。字段语义与 MySQL 不同：使用 pg_relation_size / pg_total_relation_size 等 PG 特有指标。库级查询时不包含 TableSchema/TableName 字段；表级查询时包含全部字段。
                */
                class PostgresSpaceObjectItem : public AbstractModel
                {
                public:
                    PostgresSpaceObjectItem();
                    ~PostgresSpaceObjectItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>数据库名（PostgreSQL 顶层 catalog）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableCatalog <p>数据库名（PostgreSQL 顶层 catalog）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableCatalog() const;

                    /**
                     * 设置<p>数据库名（PostgreSQL 顶层 catalog）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableCatalog <p>数据库名（PostgreSQL 顶层 catalog）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTableCatalog(const std::string& _tableCatalog);

                    /**
                     * 判断参数 TableCatalog 是否已赋值
                     * @return TableCatalog 是否已赋值
                     * 
                     */
                    bool TableCatalogHasBeenSet() const;

                    /**
                     * 获取<p>Schema 名（Level=TABLE 时返回）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableSchema <p>Schema 名（Level=TABLE 时返回）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableSchema() const;

                    /**
                     * 设置<p>Schema 名（Level=TABLE 时返回）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableSchema <p>Schema 名（Level=TABLE 时返回）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTableSchema(const std::string& _tableSchema);

                    /**
                     * 判断参数 TableSchema 是否已赋值
                     * @return TableSchema 是否已赋值
                     * 
                     */
                    bool TableSchemaHasBeenSet() const;

                    /**
                     * 获取<p>表名（Level=TABLE 时返回）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableName <p>表名（Level=TABLE 时返回）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置<p>表名（Level=TABLE 时返回）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableName <p>表名（Level=TABLE 时返回）。</p>
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
                     * 获取<p>表本身大小（MB），对应 pg_relation_size。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RelationSize <p>表本身大小（MB），对应 pg_relation_size。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetRelationSize() const;

                    /**
                     * 设置<p>表本身大小（MB），对应 pg_relation_size。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _relationSize <p>表本身大小（MB），对应 pg_relation_size。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRelationSize(const double& _relationSize);

                    /**
                     * 判断参数 RelationSize 是否已赋值
                     * @return RelationSize 是否已赋值
                     * 
                     */
                    bool RelationSizeHasBeenSet() const;

                    /**
                     * 获取<p>表数据大小（MB），含 TOAST 但不含索引，对应 pg_table_size。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableSize <p>表数据大小（MB），含 TOAST 但不含索引，对应 pg_table_size。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetTableSize() const;

                    /**
                     * 设置<p>表数据大小（MB），含 TOAST 但不含索引，对应 pg_table_size。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableSize <p>表数据大小（MB），含 TOAST 但不含索引，对应 pg_table_size。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTableSize(const double& _tableSize);

                    /**
                     * 判断参数 TableSize 是否已赋值
                     * @return TableSize 是否已赋值
                     * 
                     */
                    bool TableSizeHasBeenSet() const;

                    /**
                     * 获取<p>索引大小（MB），对应 pg_indexes_size。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndexSize <p>索引大小（MB），对应 pg_indexes_size。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetIndexSize() const;

                    /**
                     * 设置<p>索引大小（MB），对应 pg_indexes_size。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indexSize <p>索引大小（MB），对应 pg_indexes_size。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIndexSize(const double& _indexSize);

                    /**
                     * 判断参数 IndexSize 是否已赋值
                     * @return IndexSize 是否已赋值
                     * 
                     */
                    bool IndexSizeHasBeenSet() const;

                    /**
                     * 获取<p>总大小（MB），含数据、索引、TOAST，对应 pg_total_relation_size。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalRelationSize <p>总大小（MB），含数据、索引、TOAST，对应 pg_total_relation_size。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetTotalRelationSize() const;

                    /**
                     * 设置<p>总大小（MB），含数据、索引、TOAST，对应 pg_total_relation_size。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalRelationSize <p>总大小（MB），含数据、索引、TOAST，对应 pg_total_relation_size。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotalRelationSize(const double& _totalRelationSize);

                    /**
                     * 判断参数 TotalRelationSize 是否已赋值
                     * @return TotalRelationSize 是否已赋值
                     * 
                     */
                    bool TotalRelationSizeHasBeenSet() const;

                    /**
                     * 获取<p>表膨胀率（PostgreSQL 特有指标）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableBloat <p>表膨胀率（PostgreSQL 特有指标）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetTableBloat() const;

                    /**
                     * 设置<p>表膨胀率（PostgreSQL 特有指标）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableBloat <p>表膨胀率（PostgreSQL 特有指标）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTableBloat(const double& _tableBloat);

                    /**
                     * 判断参数 TableBloat 是否已赋值
                     * @return TableBloat 是否已赋值
                     * 
                     */
                    bool TableBloatHasBeenSet() const;

                    /**
                     * 获取<p>表行数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableRows <p>表行数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTableRows() const;

                    /**
                     * 设置<p>表行数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableRows <p>表行数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTableRows(const int64_t& _tableRows);

                    /**
                     * 判断参数 TableRows 是否已赋值
                     * @return TableRows 是否已赋值
                     * 
                     */
                    bool TableRowsHasBeenSet() const;

                private:

                    /**
                     * <p>数据库名（PostgreSQL 顶层 catalog）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableCatalog;
                    bool m_tableCatalogHasBeenSet;

                    /**
                     * <p>Schema 名（Level=TABLE 时返回）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableSchema;
                    bool m_tableSchemaHasBeenSet;

                    /**
                     * <p>表名（Level=TABLE 时返回）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * <p>表本身大小（MB），对应 pg_relation_size。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_relationSize;
                    bool m_relationSizeHasBeenSet;

                    /**
                     * <p>表数据大小（MB），含 TOAST 但不含索引，对应 pg_table_size。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_tableSize;
                    bool m_tableSizeHasBeenSet;

                    /**
                     * <p>索引大小（MB），对应 pg_indexes_size。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_indexSize;
                    bool m_indexSizeHasBeenSet;

                    /**
                     * <p>总大小（MB），含数据、索引、TOAST，对应 pg_total_relation_size。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_totalRelationSize;
                    bool m_totalRelationSizeHasBeenSet;

                    /**
                     * <p>表膨胀率（PostgreSQL 特有指标）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_tableBloat;
                    bool m_tableBloatHasBeenSet;

                    /**
                     * <p>表行数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_tableRows;
                    bool m_tableRowsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_POSTGRESSPACEOBJECTITEM_H_
