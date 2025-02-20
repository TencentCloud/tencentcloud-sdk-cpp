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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_ALTERDMSTABLEREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_ALTERDMSTABLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/Asset.h>
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
                * AlterDMSTable请求参数结构体
                */
                class AlterDMSTableRequest : public AbstractModel
                {
                public:
                    AlterDMSTableRequest();
                    ~AlterDMSTableRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取当前名称
                     * @return CurrentName 当前名称
                     * 
                     */
                    std::string GetCurrentName() const;

                    /**
                     * 设置当前名称
                     * @param _currentName 当前名称
                     * 
                     */
                    void SetCurrentName(const std::string& _currentName);

                    /**
                     * 判断参数 CurrentName 是否已赋值
                     * @return CurrentName 是否已赋值
                     * 
                     */
                    bool CurrentNameHasBeenSet() const;

                    /**
                     * 获取当前数据库名称
                     * @return CurrentDbName 当前数据库名称
                     * 
                     */
                    std::string GetCurrentDbName() const;

                    /**
                     * 设置当前数据库名称
                     * @param _currentDbName 当前数据库名称
                     * 
                     */
                    void SetCurrentDbName(const std::string& _currentDbName);

                    /**
                     * 判断参数 CurrentDbName 是否已赋值
                     * @return CurrentDbName 是否已赋值
                     * 
                     */
                    bool CurrentDbNameHasBeenSet() const;

                    /**
                     * 获取基础对象
                     * @return Asset 基础对象
                     * 
                     */
                    Asset GetAsset() const;

                    /**
                     * 设置基础对象
                     * @param _asset 基础对象
                     * 
                     */
                    void SetAsset(const Asset& _asset);

                    /**
                     * 判断参数 Asset 是否已赋值
                     * @return Asset 是否已赋值
                     * 
                     */
                    bool AssetHasBeenSet() const;

                    /**
                     * 获取表类型
                     * @return Type 表类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置表类型
                     * @param _type 表类型
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
                     * @return DbName 数据库名称
                     * 
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置数据库名称
                     * @param _dbName 数据库名称
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
                     * 获取存储大小
                     * @return StorageSize 存储大小
                     * 
                     */
                    int64_t GetStorageSize() const;

                    /**
                     * 设置存储大小
                     * @param _storageSize 存储大小
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
                     * @return RecordCount 记录数量
                     * 
                     */
                    int64_t GetRecordCount() const;

                    /**
                     * 设置记录数量
                     * @param _recordCount 记录数量
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
                     * @return LifeTime 生命周期
                     * 
                     */
                    int64_t GetLifeTime() const;

                    /**
                     * 设置生命周期
                     * @param _lifeTime 生命周期
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
                     * 获取数据更新时间
                     * @return DataUpdateTime 数据更新时间
                     * 
                     */
                    std::string GetDataUpdateTime() const;

                    /**
                     * 设置数据更新时间
                     * @param _dataUpdateTime 数据更新时间
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
                     * @return StructUpdateTime 结构更新时间
                     * 
                     */
                    std::string GetStructUpdateTime() const;

                    /**
                     * 设置结构更新时间
                     * @param _structUpdateTime 结构更新时间
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
                     * 获取最后访问时间
                     * @return LastAccessTime 最后访问时间
                     * 
                     */
                    std::string GetLastAccessTime() const;

                    /**
                     * 设置最后访问时间
                     * @param _lastAccessTime 最后访问时间
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
                     * 获取存储对象
                     * @return Sds 存储对象
                     * 
                     */
                    DMSSds GetSds() const;

                    /**
                     * 设置存储对象
                     * @param _sds 存储对象
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
                     * 获取列
                     * @return Columns 列
                     * 
                     */
                    std::vector<DMSColumn> GetColumns() const;

                    /**
                     * 设置列
                     * @param _columns 列
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
                     * 获取分区键值
                     * @return PartitionKeys 分区键值
                     * 
                     */
                    std::vector<DMSColumn> GetPartitionKeys() const;

                    /**
                     * 设置分区键值
                     * @param _partitionKeys 分区键值
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
                     * 获取视图文本
                     * @return ViewOriginalText 视图文本
                     * 
                     */
                    std::string GetViewOriginalText() const;

                    /**
                     * 设置视图文本
                     * @param _viewOriginalText 视图文本
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
                     * @return ViewExpandedText 视图文本
                     * 
                     */
                    std::string GetViewExpandedText() const;

                    /**
                     * 设置视图文本
                     * @param _viewExpandedText 视图文本
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
                     * 获取分区
                     * @return Partitions 分区
                     * 
                     */
                    std::vector<DMSPartition> GetPartitions() const;

                    /**
                     * 设置分区
                     * @param _partitions 分区
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
                     * 获取当前表名
                     * @return Name 当前表名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置当前表名
                     * @param _name 当前表名
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
                     * 当前名称
                     */
                    std::string m_currentName;
                    bool m_currentNameHasBeenSet;

                    /**
                     * 当前数据库名称
                     */
                    std::string m_currentDbName;
                    bool m_currentDbNameHasBeenSet;

                    /**
                     * 基础对象
                     */
                    Asset m_asset;
                    bool m_assetHasBeenSet;

                    /**
                     * 表类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 数据库名称
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * 存储大小
                     */
                    int64_t m_storageSize;
                    bool m_storageSizeHasBeenSet;

                    /**
                     * 记录数量
                     */
                    int64_t m_recordCount;
                    bool m_recordCountHasBeenSet;

                    /**
                     * 生命周期
                     */
                    int64_t m_lifeTime;
                    bool m_lifeTimeHasBeenSet;

                    /**
                     * 数据更新时间
                     */
                    std::string m_dataUpdateTime;
                    bool m_dataUpdateTimeHasBeenSet;

                    /**
                     * 结构更新时间
                     */
                    std::string m_structUpdateTime;
                    bool m_structUpdateTimeHasBeenSet;

                    /**
                     * 最后访问时间
                     */
                    std::string m_lastAccessTime;
                    bool m_lastAccessTimeHasBeenSet;

                    /**
                     * 存储对象
                     */
                    DMSSds m_sds;
                    bool m_sdsHasBeenSet;

                    /**
                     * 列
                     */
                    std::vector<DMSColumn> m_columns;
                    bool m_columnsHasBeenSet;

                    /**
                     * 分区键值
                     */
                    std::vector<DMSColumn> m_partitionKeys;
                    bool m_partitionKeysHasBeenSet;

                    /**
                     * 视图文本
                     */
                    std::string m_viewOriginalText;
                    bool m_viewOriginalTextHasBeenSet;

                    /**
                     * 视图文本
                     */
                    std::string m_viewExpandedText;
                    bool m_viewExpandedTextHasBeenSet;

                    /**
                     * 分区
                     */
                    std::vector<DMSPartition> m_partitions;
                    bool m_partitionsHasBeenSet;

                    /**
                     * 当前表名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

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

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_ALTERDMSTABLEREQUEST_H_
