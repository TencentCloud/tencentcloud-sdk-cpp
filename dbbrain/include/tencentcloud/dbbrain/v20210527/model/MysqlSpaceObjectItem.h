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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_MYSQLSPACEOBJECTITEM_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_MYSQLSPACEOBJECTITEM_H_

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
                * MySQL 系列产品空间对象项。库级查询时不包含 TableName/Engine 字段；表级查询时包含全部字段。
                */
                class MysqlSpaceObjectItem : public AbstractModel
                {
                public:
                    MysqlSpaceObjectItem();
                    ~MysqlSpaceObjectItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>数据库名。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableSchema <p>数据库名。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableSchema() const;

                    /**
                     * 设置<p>数据库名。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableSchema <p>数据库名。</p>
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
                     * 获取<p>表名（Level=TABLE时返回）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableName <p>表名（Level=TABLE时返回）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置<p>表名（Level=TABLE时返回）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableName <p>表名（Level=TABLE时返回）。</p>
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
                     * 获取<p>存储引擎（Level=TABLE时返回）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Engine <p>存储引擎（Level=TABLE时返回）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEngine() const;

                    /**
                     * 设置<p>存储引擎（Level=TABLE时返回）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _engine <p>存储引擎（Level=TABLE时返回）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEngine(const std::string& _engine);

                    /**
                     * 判断参数 Engine 是否已赋值
                     * @return Engine 是否已赋值
                     * 
                     */
                    bool EngineHasBeenSet() const;

                    /**
                     * 获取<p>行数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableRows <p>行数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTableRows() const;

                    /**
                     * 设置<p>行数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableRows <p>行数。</p>
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

                    /**
                     * 获取<p>总使用空间（MB）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalLength <p>总使用空间（MB）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetTotalLength() const;

                    /**
                     * 设置<p>总使用空间（MB）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalLength <p>总使用空间（MB）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotalLength(const double& _totalLength);

                    /**
                     * 判断参数 TotalLength 是否已赋值
                     * @return TotalLength 是否已赋值
                     * 
                     */
                    bool TotalLengthHasBeenSet() const;

                    /**
                     * 获取<p>数据空间（MB）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataLength <p>数据空间（MB）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetDataLength() const;

                    /**
                     * 设置<p>数据空间（MB）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataLength <p>数据空间（MB）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataLength(const double& _dataLength);

                    /**
                     * 判断参数 DataLength 是否已赋值
                     * @return DataLength 是否已赋值
                     * 
                     */
                    bool DataLengthHasBeenSet() const;

                    /**
                     * 获取<p>索引空间（MB）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndexLength <p>索引空间（MB）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetIndexLength() const;

                    /**
                     * 设置<p>索引空间（MB）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indexLength <p>索引空间（MB）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIndexLength(const double& _indexLength);

                    /**
                     * 判断参数 IndexLength 是否已赋值
                     * @return IndexLength 是否已赋值
                     * 
                     */
                    bool IndexLengthHasBeenSet() const;

                    /**
                     * 获取<p>碎片空间（MB）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataFree <p>碎片空间（MB）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetDataFree() const;

                    /**
                     * 设置<p>碎片空间（MB）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataFree <p>碎片空间（MB）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataFree(const double& _dataFree);

                    /**
                     * 判断参数 DataFree 是否已赋值
                     * @return DataFree 是否已赋值
                     * 
                     */
                    bool DataFreeHasBeenSet() const;

                    /**
                     * 获取<p>碎片率（%）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FragRatio <p>碎片率（%）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetFragRatio() const;

                    /**
                     * 设置<p>碎片率（%）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fragRatio <p>碎片率（%）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFragRatio(const double& _fragRatio);

                    /**
                     * 判断参数 FragRatio 是否已赋值
                     * @return FragRatio 是否已赋值
                     * 
                     */
                    bool FragRatioHasBeenSet() const;

                    /**
                     * 获取<p>物理文件大小（MB）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PhysicalFileSize <p>物理文件大小（MB）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetPhysicalFileSize() const;

                    /**
                     * 设置<p>物理文件大小（MB）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _physicalFileSize <p>物理文件大小（MB）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPhysicalFileSize(const double& _physicalFileSize);

                    /**
                     * 判断参数 PhysicalFileSize 是否已赋值
                     * @return PhysicalFileSize 是否已赋值
                     * 
                     */
                    bool PhysicalFileSizeHasBeenSet() const;

                private:

                    /**
                     * <p>数据库名。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableSchema;
                    bool m_tableSchemaHasBeenSet;

                    /**
                     * <p>表名（Level=TABLE时返回）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * <p>存储引擎（Level=TABLE时返回）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_engine;
                    bool m_engineHasBeenSet;

                    /**
                     * <p>行数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_tableRows;
                    bool m_tableRowsHasBeenSet;

                    /**
                     * <p>总使用空间（MB）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_totalLength;
                    bool m_totalLengthHasBeenSet;

                    /**
                     * <p>数据空间（MB）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_dataLength;
                    bool m_dataLengthHasBeenSet;

                    /**
                     * <p>索引空间（MB）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_indexLength;
                    bool m_indexLengthHasBeenSet;

                    /**
                     * <p>碎片空间（MB）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_dataFree;
                    bool m_dataFreeHasBeenSet;

                    /**
                     * <p>碎片率（%）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_fragRatio;
                    bool m_fragRatioHasBeenSet;

                    /**
                     * <p>物理文件大小（MB）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_physicalFileSize;
                    bool m_physicalFileSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_MYSQLSPACEOBJECTITEM_H_
