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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DMSTABLE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DMSTABLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/DMSSds.h>
#include <tencentcloud/dlc/v20210125/model/DMSColumn.h>
#include <tencentcloud/dlc/v20210125/model/DMSPartition.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DMSTable基本信息
                */
                class DMSTable : public AbstractModel
                {
                public:
                    DMSTable();
                    ~DMSTable() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取视图文本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ViewOriginalText 视图文本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetViewOriginalText() const;

                    /**
                     * 设置视图文本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _viewOriginalText 视图文本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetViewOriginalText(const std::string& _viewOriginalText);

                    /**
                     * 判断参数 ViewOriginalText 是否已赋值
                     * @return ViewOriginalText 是否已赋值
                     * 
                     */
                    bool ViewOriginalTextHasBeenSet() const;

                    /**
                     * 获取视图文本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ViewExpandedText 视图文本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetViewExpandedText() const;

                    /**
                     * 设置视图文本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _viewExpandedText 视图文本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetViewExpandedText(const std::string& _viewExpandedText);

                    /**
                     * 判断参数 ViewExpandedText 是否已赋值
                     * @return ViewExpandedText 是否已赋值
                     * 
                     */
                    bool ViewExpandedTextHasBeenSet() const;

                    /**
                     * 获取hive维护版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Retention hive维护版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRetention() const;

                    /**
                     * 设置hive维护版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _retention hive维护版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRetention(const int64_t& _retention);

                    /**
                     * 判断参数 Retention 是否已赋值
                     * @return Retention 是否已赋值
                     * 
                     */
                    bool RetentionHasBeenSet() const;

                    /**
                     * 获取存储对象
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Sds 存储对象
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DMSSds GetSds() const;

                    /**
                     * 设置存储对象
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sds 存储对象
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSds(const DMSSds& _sds);

                    /**
                     * 判断参数 Sds 是否已赋值
                     * @return Sds 是否已赋值
                     * 
                     */
                    bool SdsHasBeenSet() const;

                    /**
                     * 获取分区列
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PartitionKeys 分区列
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DMSColumn> GetPartitionKeys() const;

                    /**
                     * 设置分区列
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _partitionKeys 分区列
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPartitionKeys(const std::vector<DMSColumn>& _partitionKeys);

                    /**
                     * 判断参数 PartitionKeys 是否已赋值
                     * @return PartitionKeys 是否已赋值
                     * 
                     */
                    bool PartitionKeysHasBeenSet() const;

                    /**
                     * 获取分区
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Partitions 分区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DMSPartition> GetPartitions() const;

                    /**
                     * 设置分区
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _partitions 分区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPartitions(const std::vector<DMSPartition>& _partitions);

                    /**
                     * 判断参数 Partitions 是否已赋值
                     * @return Partitions 是否已赋值
                     * 
                     */
                    bool PartitionsHasBeenSet() const;

                    /**
                     * 获取表类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 表类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置表类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type 表类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DbName 数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dbName 数据库名称
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
                     * 获取Schema名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SchemaName Schema名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSchemaName() const;

                    /**
                     * 设置Schema名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _schemaName Schema名称
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
                     * 获取存储大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StorageSize 存储大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStorageSize() const;

                    /**
                     * 设置存储大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _storageSize 存储大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStorageSize(const int64_t& _storageSize);

                    /**
                     * 判断参数 StorageSize 是否已赋值
                     * @return StorageSize 是否已赋值
                     * 
                     */
                    bool StorageSizeHasBeenSet() const;

                    /**
                     * 获取记录数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RecordCount 记录数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRecordCount() const;

                    /**
                     * 设置记录数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _recordCount 记录数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRecordCount(const int64_t& _recordCount);

                    /**
                     * 判断参数 RecordCount 是否已赋值
                     * @return RecordCount 是否已赋值
                     * 
                     */
                    bool RecordCountHasBeenSet() const;

                    /**
                     * 获取生命周期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LifeTime 生命周期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLifeTime() const;

                    /**
                     * 设置生命周期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lifeTime 生命周期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLifeTime(const int64_t& _lifeTime);

                    /**
                     * 判断参数 LifeTime 是否已赋值
                     * @return LifeTime 是否已赋值
                     * 
                     */
                    bool LifeTimeHasBeenSet() const;

                    /**
                     * 获取最后访问时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastAccessTime 最后访问时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastAccessTime() const;

                    /**
                     * 设置最后访问时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastAccessTime 最后访问时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastAccessTime(const std::string& _lastAccessTime);

                    /**
                     * 判断参数 LastAccessTime 是否已赋值
                     * @return LastAccessTime 是否已赋值
                     * 
                     */
                    bool LastAccessTimeHasBeenSet() const;

                    /**
                     * 获取数据更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataUpdateTime 数据更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDataUpdateTime() const;

                    /**
                     * 设置数据更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataUpdateTime 数据更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataUpdateTime(const std::string& _dataUpdateTime);

                    /**
                     * 判断参数 DataUpdateTime 是否已赋值
                     * @return DataUpdateTime 是否已赋值
                     * 
                     */
                    bool DataUpdateTimeHasBeenSet() const;

                    /**
                     * 获取结构更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StructUpdateTime 结构更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStructUpdateTime() const;

                    /**
                     * 设置结构更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _structUpdateTime 结构更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStructUpdateTime(const std::string& _structUpdateTime);

                    /**
                     * 判断参数 StructUpdateTime 是否已赋值
                     * @return StructUpdateTime 是否已赋值
                     * 
                     */
                    bool StructUpdateTimeHasBeenSet() const;

                    /**
                     * 获取列
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Columns 列
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DMSColumn> GetColumns() const;

                    /**
                     * 设置列
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _columns 列
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetColumns(const std::vector<DMSColumn>& _columns);

                    /**
                     * 判断参数 Columns 是否已赋值
                     * @return Columns 是否已赋值
                     * 
                     */
                    bool ColumnsHasBeenSet() const;

                    /**
                     * 获取表名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 表名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置表名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 表名
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

                private:

                    /**
                     * 视图文本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_viewOriginalText;
                    bool m_viewOriginalTextHasBeenSet;

                    /**
                     * 视图文本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_viewExpandedText;
                    bool m_viewExpandedTextHasBeenSet;

                    /**
                     * hive维护版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_retention;
                    bool m_retentionHasBeenSet;

                    /**
                     * 存储对象
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DMSSds m_sds;
                    bool m_sdsHasBeenSet;

                    /**
                     * 分区列
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DMSColumn> m_partitionKeys;
                    bool m_partitionKeysHasBeenSet;

                    /**
                     * 分区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DMSPartition> m_partitions;
                    bool m_partitionsHasBeenSet;

                    /**
                     * 表类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * Schema名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_schemaName;
                    bool m_schemaNameHasBeenSet;

                    /**
                     * 存储大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_storageSize;
                    bool m_storageSizeHasBeenSet;

                    /**
                     * 记录数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_recordCount;
                    bool m_recordCountHasBeenSet;

                    /**
                     * 生命周期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_lifeTime;
                    bool m_lifeTimeHasBeenSet;

                    /**
                     * 最后访问时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastAccessTime;
                    bool m_lastAccessTimeHasBeenSet;

                    /**
                     * 数据更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dataUpdateTime;
                    bool m_dataUpdateTimeHasBeenSet;

                    /**
                     * 结构更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_structUpdateTime;
                    bool m_structUpdateTimeHasBeenSet;

                    /**
                     * 列
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DMSColumn> m_columns;
                    bool m_columnsHasBeenSet;

                    /**
                     * 表名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DMSTABLE_H_
