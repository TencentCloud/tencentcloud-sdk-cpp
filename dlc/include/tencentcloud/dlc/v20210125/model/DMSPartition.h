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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DMSPARTITION_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DMSPARTITION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/KVPair.h>
#include <tencentcloud/dlc/v20210125/model/DMSSds.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 迁移元数据分区对象
                */
                class DMSPartition : public AbstractModel
                {
                public:
                    DMSPartition();
                    ~DMSPartition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据库名称
                     * @return DatabaseName 数据库名称
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置数据库名称
                     * @param _databaseName 数据库名称
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
                     * 获取数据目录名称
                     * @return SchemaName 数据目录名称
                     * 
                     */
                    std::string GetSchemaName() const;

                    /**
                     * 设置数据目录名称
                     * @param _schemaName 数据目录名称
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
                     * 获取数据版本
                     * @return DataVersion 数据版本
                     * 
                     */
                    int64_t GetDataVersion() const;

                    /**
                     * 设置数据版本
                     * @param _dataVersion 数据版本
                     * 
                     */
                    void SetDataVersion(const int64_t& _dataVersion);

                    /**
                     * 判断参数 DataVersion 是否已赋值
                     * @return DataVersion 是否已赋值
                     * 
                     */
                    bool DataVersionHasBeenSet() const;

                    /**
                     * 获取分区名称
                     * @return Name 分区名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置分区名称
                     * @param _name 分区名称
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
                     * 获取值列表
                     * @return Values 值列表
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置值列表
                     * @param _values 值列表
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
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取修改时间
                     * @return ModifiedTime 修改时间
                     * 
                     */
                    std::string GetModifiedTime() const;

                    /**
                     * 设置修改时间
                     * @param _modifiedTime 修改时间
                     * 
                     */
                    void SetModifiedTime(const std::string& _modifiedTime);

                    /**
                     * 判断参数 ModifiedTime 是否已赋值
                     * @return ModifiedTime 是否已赋值
                     * 
                     */
                    bool ModifiedTimeHasBeenSet() const;

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
                     * 获取附件属性
                     * @return Params 附件属性
                     * 
                     */
                    std::vector<KVPair> GetParams() const;

                    /**
                     * 设置附件属性
                     * @param _params 附件属性
                     * 
                     */
                    void SetParams(const std::vector<KVPair>& _params);

                    /**
                     * 判断参数 Params 是否已赋值
                     * @return Params 是否已赋值
                     * 
                     */
                    bool ParamsHasBeenSet() const;

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
                     * 数据库名称
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * 数据目录名称
                     */
                    std::string m_schemaName;
                    bool m_schemaNameHasBeenSet;

                    /**
                     * 表名称
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * 数据版本
                     */
                    int64_t m_dataVersion;
                    bool m_dataVersionHasBeenSet;

                    /**
                     * 分区名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 值列表
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

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
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 修改时间
                     */
                    std::string m_modifiedTime;
                    bool m_modifiedTimeHasBeenSet;

                    /**
                     * 最后访问时间
                     */
                    std::string m_lastAccessTime;
                    bool m_lastAccessTimeHasBeenSet;

                    /**
                     * 附件属性
                     */
                    std::vector<KVPair> m_params;
                    bool m_paramsHasBeenSet;

                    /**
                     * 存储对象
                     */
                    DMSSds m_sds;
                    bool m_sdsHasBeenSet;

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

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DMSPARTITION_H_
