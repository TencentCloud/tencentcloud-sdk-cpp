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

#ifndef TENCENTCLOUD_DBBRAIN_V20191016_MODEL_TABLESPACEDATA_H_
#define TENCENTCLOUD_DBBRAIN_V20191016_MODEL_TABLESPACEDATA_H_

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
        namespace V20191016
        {
            namespace Model
            {
                /**
                * 库表空间统计数据。
                */
                class TableSpaceData : public AbstractModel
                {
                public:
                    TableSpaceData();
                    ~TableSpaceData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取表名。
                     * @return TableName 表名。
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置表名。
                     * @param _tableName 表名。
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
                     * 获取库名。
                     * @return TableSchema 库名。
                     * 
                     */
                    std::string GetTableSchema() const;

                    /**
                     * 设置库名。
                     * @param _tableSchema 库名。
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
                     * 获取库表的存储引擎。
                     * @return Engine 库表的存储引擎。
                     * 
                     */
                    std::string GetEngine() const;

                    /**
                     * 设置库表的存储引擎。
                     * @param _engine 库表的存储引擎。
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
                     * 获取数据空间（MB）。
                     * @return DataLength 数据空间（MB）。
                     * 
                     */
                    double GetDataLength() const;

                    /**
                     * 设置数据空间（MB）。
                     * @param _dataLength 数据空间（MB）。
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
                     * 获取索引空间（MB）。
                     * @return IndexLength 索引空间（MB）。
                     * 
                     */
                    double GetIndexLength() const;

                    /**
                     * 设置索引空间（MB）。
                     * @param _indexLength 索引空间（MB）。
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
                     * 获取碎片空间（MB）。
                     * @return DataFree 碎片空间（MB）。
                     * 
                     */
                    double GetDataFree() const;

                    /**
                     * 设置碎片空间（MB）。
                     * @param _dataFree 碎片空间（MB）。
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
                     * 获取总使用空间（MB）。
                     * @return TotalLength 总使用空间（MB）。
                     * 
                     */
                    double GetTotalLength() const;

                    /**
                     * 设置总使用空间（MB）。
                     * @param _totalLength 总使用空间（MB）。
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
                     * 获取碎片率（%）。
                     * @return FragRatio 碎片率（%）。
                     * 
                     */
                    double GetFragRatio() const;

                    /**
                     * 设置碎片率（%）。
                     * @param _fragRatio 碎片率（%）。
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
                     * 获取行数。
                     * @return TableRows 行数。
                     * 
                     */
                    int64_t GetTableRows() const;

                    /**
                     * 设置行数。
                     * @param _tableRows 行数。
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
                     * 获取表对应的独立物理文件大小（MB）。
                     * @return PhysicalFileSize 表对应的独立物理文件大小（MB）。
                     * 
                     */
                    double GetPhysicalFileSize() const;

                    /**
                     * 设置表对应的独立物理文件大小（MB）。
                     * @param _physicalFileSize 表对应的独立物理文件大小（MB）。
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
                     * 表名。
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * 库名。
                     */
                    std::string m_tableSchema;
                    bool m_tableSchemaHasBeenSet;

                    /**
                     * 库表的存储引擎。
                     */
                    std::string m_engine;
                    bool m_engineHasBeenSet;

                    /**
                     * 数据空间（MB）。
                     */
                    double m_dataLength;
                    bool m_dataLengthHasBeenSet;

                    /**
                     * 索引空间（MB）。
                     */
                    double m_indexLength;
                    bool m_indexLengthHasBeenSet;

                    /**
                     * 碎片空间（MB）。
                     */
                    double m_dataFree;
                    bool m_dataFreeHasBeenSet;

                    /**
                     * 总使用空间（MB）。
                     */
                    double m_totalLength;
                    bool m_totalLengthHasBeenSet;

                    /**
                     * 碎片率（%）。
                     */
                    double m_fragRatio;
                    bool m_fragRatioHasBeenSet;

                    /**
                     * 行数。
                     */
                    int64_t m_tableRows;
                    bool m_tableRowsHasBeenSet;

                    /**
                     * 表对应的独立物理文件大小（MB）。
                     */
                    double m_physicalFileSize;
                    bool m_physicalFileSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20191016_MODEL_TABLESPACEDATA_H_
