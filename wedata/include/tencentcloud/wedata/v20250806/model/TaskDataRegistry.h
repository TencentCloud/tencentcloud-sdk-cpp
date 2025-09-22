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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_TASKDATAREGISTRY_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_TASKDATAREGISTRY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * 任务数据库登记项
                */
                class TaskDataRegistry : public AbstractModel
                {
                public:
                    TaskDataRegistry();
                    ~TaskDataRegistry() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据源ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatasourceId 数据源ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDatasourceId() const;

                    /**
                     * 设置数据源ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _datasourceId 数据源ID
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
                     * 获取分区名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PartitionName 分区名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPartitionName() const;

                    /**
                     * 设置分区名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _partitionName 分区名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPartitionName(const std::string& _partitionName);

                    /**
                     * 判断参数 PartitionName 是否已赋值
                     * @return PartitionName 是否已赋值
                     * 
                     */
                    bool PartitionNameHasBeenSet() const;

                    /**
                     * 获取输入输出表类型
      输入流
 UPSTREAM,
      输出流
  DOWNSTREAM;
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataFlowType 输入输出表类型
      输入流
 UPSTREAM,
      输出流
  DOWNSTREAM;
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDataFlowType() const;

                    /**
                     * 设置输入输出表类型
      输入流
 UPSTREAM,
      输出流
  DOWNSTREAM;
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataFlowType 输入输出表类型
      输入流
 UPSTREAM,
      输出流
  DOWNSTREAM;
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataFlowType(const std::string& _dataFlowType);

                    /**
                     * 判断参数 DataFlowType 是否已赋值
                     * @return DataFlowType 是否已赋值
                     * 
                     */
                    bool DataFlowTypeHasBeenSet() const;

                    /**
                     * 获取表物理唯一ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TablePhysicalId 表物理唯一ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTablePhysicalId() const;

                    /**
                     * 设置表物理唯一ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tablePhysicalId 表物理唯一ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTablePhysicalId(const std::string& _tablePhysicalId);

                    /**
                     * 判断参数 TablePhysicalId 是否已赋值
                     * @return TablePhysicalId 是否已赋值
                     * 
                     */
                    bool TablePhysicalIdHasBeenSet() const;

                    /**
                     * 获取库唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DbGuid 库唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDbGuid() const;

                    /**
                     * 设置库唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dbGuid 库唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDbGuid(const std::string& _dbGuid);

                    /**
                     * 判断参数 DbGuid 是否已赋值
                     * @return DbGuid 是否已赋值
                     * 
                     */
                    bool DbGuidHasBeenSet() const;

                    /**
                     * 获取表唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableGuid 表唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableGuid() const;

                    /**
                     * 设置表唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableGuid 表唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTableGuid(const std::string& _tableGuid);

                    /**
                     * 判断参数 TableGuid 是否已赋值
                     * @return TableGuid 是否已赋值
                     * 
                     */
                    bool TableGuidHasBeenSet() const;

                private:

                    /**
                     * 数据源ID
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
                     * 表名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * 分区名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_partitionName;
                    bool m_partitionNameHasBeenSet;

                    /**
                     * 输入输出表类型
      输入流
 UPSTREAM,
      输出流
  DOWNSTREAM;
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dataFlowType;
                    bool m_dataFlowTypeHasBeenSet;

                    /**
                     * 表物理唯一ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tablePhysicalId;
                    bool m_tablePhysicalIdHasBeenSet;

                    /**
                     * 库唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dbGuid;
                    bool m_dbGuidHasBeenSet;

                    /**
                     * 表唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableGuid;
                    bool m_tableGuidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_TASKDATAREGISTRY_H_
