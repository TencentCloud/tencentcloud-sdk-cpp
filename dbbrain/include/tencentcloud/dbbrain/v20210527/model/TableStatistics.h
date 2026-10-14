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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_TABLESTATISTICS_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_TABLESTATISTICS_H_

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
                * 表统计信息明细
                */
                class TableStatistics : public AbstractModel
                {
                public:
                    TableStatistics();
                    ~TableStatistics() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>表名。</p>
                     * @return TableName <p>表名。</p>
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置<p>表名。</p>
                     * @param _tableName <p>表名。</p>
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
                     * 获取<p>Schema 名。</p>
                     * @return TableSchema <p>Schema 名。</p>
                     * 
                     */
                    std::string GetTableSchema() const;

                    /**
                     * 设置<p>Schema 名。</p>
                     * @param _tableSchema <p>Schema 名。</p>
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
                     * 获取<p>库名（catalog）。</p>
                     * @return DatabaseName <p>库名（catalog）。</p>
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置<p>库名（catalog）。</p>
                     * @param _databaseName <p>库名（catalog）。</p>
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
                     * 获取<p>存储引擎。</p>
                     * @return Engine <p>存储引擎。</p>
                     * 
                     */
                    std::string GetEngine() const;

                    /**
                     * 设置<p>存储引擎。</p>
                     * @param _engine <p>存储引擎。</p>
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
                     * 获取<p>数据空间。</p><p>单位：MB</p>
                     * @return DataLength <p>数据空间。</p><p>单位：MB</p>
                     * 
                     */
                    double GetDataLength() const;

                    /**
                     * 设置<p>数据空间。</p><p>单位：MB</p>
                     * @param _dataLength <p>数据空间。</p><p>单位：MB</p>
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
                     * 获取<p>索引空间。</p><p>单位：MB</p>
                     * @return IndexLength <p>索引空间。</p><p>单位：MB</p>
                     * 
                     */
                    double GetIndexLength() const;

                    /**
                     * 设置<p>索引空间。</p><p>单位：MB</p>
                     * @param _indexLength <p>索引空间。</p><p>单位：MB</p>
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
                     * 获取<p>总分配空间。</p><p>单位：MB</p>
                     * @return TotalLength <p>总分配空间。</p><p>单位：MB</p>
                     * 
                     */
                    double GetTotalLength() const;

                    /**
                     * 设置<p>总分配空间。</p><p>单位：MB</p>
                     * @param _totalLength <p>总分配空间。</p><p>单位：MB</p>
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
                     * 获取<p>已用空间。</p><p>单位：MB</p>
                     * @return UsedLength <p>已用空间。</p><p>单位：MB</p>
                     * 
                     */
                    double GetUsedLength() const;

                    /**
                     * 设置<p>已用空间。</p><p>单位：MB</p>
                     * @param _usedLength <p>已用空间。</p><p>单位：MB</p>
                     * 
                     */
                    void SetUsedLength(const double& _usedLength);

                    /**
                     * 判断参数 UsedLength 是否已赋值
                     * @return UsedLength 是否已赋值
                     * 
                     */
                    bool UsedLengthHasBeenSet() const;

                    /**
                     * 获取<p>碎片空间。</p><p>单位：MB</p>
                     * @return DataFree <p>碎片空间。</p><p>单位：MB</p>
                     * 
                     */
                    double GetDataFree() const;

                    /**
                     * 设置<p>碎片空间。</p><p>单位：MB</p>
                     * @param _dataFree <p>碎片空间。</p><p>单位：MB</p>
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
                     * 获取<p>行数。</p>
                     * @return TableRows <p>行数。</p>
                     * 
                     */
                    int64_t GetTableRows() const;

                    /**
                     * 设置<p>行数。</p>
                     * @param _tableRows <p>行数。</p>
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
                     * 获取<p>碎片率（%）。</p>
                     * @return FragRatio <p>碎片率（%）。</p>
                     * 
                     */
                    double GetFragRatio() const;

                    /**
                     * 设置<p>碎片率（%）。</p>
                     * @param _fragRatio <p>碎片率（%）。</p>
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
                     * 获取<p>物理文件大小。</p><p>单位：MB</p>
                     * @return PhysicalFileSize <p>物理文件大小。</p><p>单位：MB</p>
                     * 
                     */
                    double GetPhysicalFileSize() const;

                    /**
                     * 设置<p>物理文件大小。</p><p>单位：MB</p>
                     * @param _physicalFileSize <p>物理文件大小。</p><p>单位：MB</p>
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
                     * <p>表名。</p>
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * <p>Schema 名。</p>
                     */
                    std::string m_tableSchema;
                    bool m_tableSchemaHasBeenSet;

                    /**
                     * <p>库名（catalog）。</p>
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * <p>存储引擎。</p>
                     */
                    std::string m_engine;
                    bool m_engineHasBeenSet;

                    /**
                     * <p>数据空间。</p><p>单位：MB</p>
                     */
                    double m_dataLength;
                    bool m_dataLengthHasBeenSet;

                    /**
                     * <p>索引空间。</p><p>单位：MB</p>
                     */
                    double m_indexLength;
                    bool m_indexLengthHasBeenSet;

                    /**
                     * <p>总分配空间。</p><p>单位：MB</p>
                     */
                    double m_totalLength;
                    bool m_totalLengthHasBeenSet;

                    /**
                     * <p>已用空间。</p><p>单位：MB</p>
                     */
                    double m_usedLength;
                    bool m_usedLengthHasBeenSet;

                    /**
                     * <p>碎片空间。</p><p>单位：MB</p>
                     */
                    double m_dataFree;
                    bool m_dataFreeHasBeenSet;

                    /**
                     * <p>行数。</p>
                     */
                    int64_t m_tableRows;
                    bool m_tableRowsHasBeenSet;

                    /**
                     * <p>碎片率（%）。</p>
                     */
                    double m_fragRatio;
                    bool m_fragRatioHasBeenSet;

                    /**
                     * <p>物理文件大小。</p><p>单位：MB</p>
                     */
                    double m_physicalFileSize;
                    bool m_physicalFileSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_TABLESTATISTICS_H_
