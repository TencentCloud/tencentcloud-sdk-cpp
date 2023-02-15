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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_GENHIVETABLEDDLSQLREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_GENHIVETABLEDDLSQLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/SourceFieldInfo.h>
#include <tencentcloud/wedata/v20210820/model/Partition.h>
#include <tencentcloud/wedata/v20210820/model/Property.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * GenHiveTableDDLSql请求参数结构体
                */
                class GenHiveTableDDLSqlRequest : public AbstractModel
                {
                public:
                    GenHiveTableDDLSqlRequest();
                    ~GenHiveTableDDLSqlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目id
                     * @return ProjectId 项目id
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
                     * @param ProjectId 项目id
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取目标数据库
                     * @return SinkDatabase 目标数据库
                     */
                    std::string GetSinkDatabase() const;

                    /**
                     * 设置目标数据库
                     * @param SinkDatabase 目标数据库
                     */
                    void SetSinkDatabase(const std::string& _sinkDatabase);

                    /**
                     * 判断参数 SinkDatabase 是否已赋值
                     * @return SinkDatabase 是否已赋值
                     */
                    bool SinkDatabaseHasBeenSet() const;

                    /**
                     * 获取节点id
                     * @return Id 节点id
                     */
                    std::string GetId() const;

                    /**
                     * 设置节点id
                     * @param Id 节点id
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取元数据类型(MYSQL、ORACLE)
                     * @return MsType 元数据类型(MYSQL、ORACLE)
                     */
                    std::string GetMsType() const;

                    /**
                     * 设置元数据类型(MYSQL、ORACLE)
                     * @param MsType 元数据类型(MYSQL、ORACLE)
                     */
                    void SetMsType(const std::string& _msType);

                    /**
                     * 判断参数 MsType 是否已赋值
                     * @return MsType 是否已赋值
                     */
                    bool MsTypeHasBeenSet() const;

                    /**
                     * 获取数据源id
                     * @return DatasourceId 数据源id
                     */
                    std::string GetDatasourceId() const;

                    /**
                     * 设置数据源id
                     * @param DatasourceId 数据源id
                     */
                    void SetDatasourceId(const std::string& _datasourceId);

                    /**
                     * 判断参数 DatasourceId 是否已赋值
                     * @return DatasourceId 是否已赋值
                     */
                    bool DatasourceIdHasBeenSet() const;

                    /**
                     * 获取来源库
                     * @return SourceDatabase 来源库
                     */
                    std::string GetSourceDatabase() const;

                    /**
                     * 设置来源库
                     * @param SourceDatabase 来源库
                     */
                    void SetSourceDatabase(const std::string& _sourceDatabase);

                    /**
                     * 判断参数 SourceDatabase 是否已赋值
                     * @return SourceDatabase 是否已赋值
                     */
                    bool SourceDatabaseHasBeenSet() const;

                    /**
                     * 获取来源表
                     * @return TableName 来源表
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置来源表
                     * @param TableName 来源表
                     */
                    void SetTableName(const std::string& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     */
                    bool TableNameHasBeenSet() const;

                    /**
                     * 获取目标表元数据类型(HIVE、GBASE)
                     * @return SinkType 目标表元数据类型(HIVE、GBASE)
                     */
                    std::string GetSinkType() const;

                    /**
                     * 设置目标表元数据类型(HIVE、GBASE)
                     * @param SinkType 目标表元数据类型(HIVE、GBASE)
                     */
                    void SetSinkType(const std::string& _sinkType);

                    /**
                     * 判断参数 SinkType 是否已赋值
                     * @return SinkType 是否已赋值
                     */
                    bool SinkTypeHasBeenSet() const;

                    /**
                     * 获取schema名称
                     * @return SchemaName schema名称
                     */
                    std::string GetSchemaName() const;

                    /**
                     * 设置schema名称
                     * @param SchemaName schema名称
                     */
                    void SetSchemaName(const std::string& _schemaName);

                    /**
                     * 判断参数 SchemaName 是否已赋值
                     * @return SchemaName 是否已赋值
                     */
                    bool SchemaNameHasBeenSet() const;

                    /**
                     * 获取上游节点的字段信息
                     * @return SourceFieldInfoList 上游节点的字段信息
                     */
                    std::vector<SourceFieldInfo> GetSourceFieldInfoList() const;

                    /**
                     * 设置上游节点的字段信息
                     * @param SourceFieldInfoList 上游节点的字段信息
                     */
                    void SetSourceFieldInfoList(const std::vector<SourceFieldInfo>& _sourceFieldInfoList);

                    /**
                     * 判断参数 SourceFieldInfoList 是否已赋值
                     * @return SourceFieldInfoList 是否已赋值
                     */
                    bool SourceFieldInfoListHasBeenSet() const;

                    /**
                     * 获取分区字段
                     * @return Partitions 分区字段
                     */
                    std::vector<Partition> GetPartitions() const;

                    /**
                     * 设置分区字段
                     * @param Partitions 分区字段
                     */
                    void SetPartitions(const std::vector<Partition>& _partitions);

                    /**
                     * 判断参数 Partitions 是否已赋值
                     * @return Partitions 是否已赋值
                     */
                    bool PartitionsHasBeenSet() const;

                    /**
                     * 获取建表属性
                     * @return Properties 建表属性
                     */
                    std::vector<Property> GetProperties() const;

                    /**
                     * 设置建表属性
                     * @param Properties 建表属性
                     */
                    void SetProperties(const std::vector<Property>& _properties);

                    /**
                     * 判断参数 Properties 是否已赋值
                     * @return Properties 是否已赋值
                     */
                    bool PropertiesHasBeenSet() const;

                    /**
                     * 获取建表模式，0:向导模式，1:ddl
                     * @return TableMode 建表模式，0:向导模式，1:ddl
                     */
                    int64_t GetTableMode() const;

                    /**
                     * 设置建表模式，0:向导模式，1:ddl
                     * @param TableMode 建表模式，0:向导模式，1:ddl
                     */
                    void SetTableMode(const int64_t& _tableMode);

                    /**
                     * 判断参数 TableMode 是否已赋值
                     * @return TableMode 是否已赋值
                     */
                    bool TableModeHasBeenSet() const;

                    /**
                     * 获取DLC表版本，v1/v2
                     * @return TableVersion DLC表版本，v1/v2
                     */
                    std::string GetTableVersion() const;

                    /**
                     * 设置DLC表版本，v1/v2
                     * @param TableVersion DLC表版本，v1/v2
                     */
                    void SetTableVersion(const std::string& _tableVersion);

                    /**
                     * 判断参数 TableVersion 是否已赋值
                     * @return TableVersion 是否已赋值
                     */
                    bool TableVersionHasBeenSet() const;

                    /**
                     * 获取是否upsert写入
                     * @return UpsertFlag 是否upsert写入
                     */
                    bool GetUpsertFlag() const;

                    /**
                     * 设置是否upsert写入
                     * @param UpsertFlag 是否upsert写入
                     */
                    void SetUpsertFlag(const bool& _upsertFlag);

                    /**
                     * 判断参数 UpsertFlag 是否已赋值
                     * @return UpsertFlag 是否已赋值
                     */
                    bool UpsertFlagHasBeenSet() const;

                    /**
                     * 获取表描述信息
                     * @return TableComment 表描述信息
                     */
                    std::string GetTableComment() const;

                    /**
                     * 设置表描述信息
                     * @param TableComment 表描述信息
                     */
                    void SetTableComment(const std::string& _tableComment);

                    /**
                     * 判断参数 TableComment 是否已赋值
                     * @return TableComment 是否已赋值
                     */
                    bool TableCommentHasBeenSet() const;

                    /**
                     * 获取增加的文件数量阈值, 超过值将触发小文件合并
                     * @return AddDataFiles 增加的文件数量阈值, 超过值将触发小文件合并
                     */
                    int64_t GetAddDataFiles() const;

                    /**
                     * 设置增加的文件数量阈值, 超过值将触发小文件合并
                     * @param AddDataFiles 增加的文件数量阈值, 超过值将触发小文件合并
                     */
                    void SetAddDataFiles(const int64_t& _addDataFiles);

                    /**
                     * 判断参数 AddDataFiles 是否已赋值
                     * @return AddDataFiles 是否已赋值
                     */
                    bool AddDataFilesHasBeenSet() const;

                    /**
                     * 获取增加的Equality delete数量阈值, 超过值将触发小文件合并
                     * @return AddEqualityDeletes 增加的Equality delete数量阈值, 超过值将触发小文件合并
                     */
                    int64_t GetAddEqualityDeletes() const;

                    /**
                     * 设置增加的Equality delete数量阈值, 超过值将触发小文件合并
                     * @param AddEqualityDeletes 增加的Equality delete数量阈值, 超过值将触发小文件合并
                     */
                    void SetAddEqualityDeletes(const int64_t& _addEqualityDeletes);

                    /**
                     * 判断参数 AddEqualityDeletes 是否已赋值
                     * @return AddEqualityDeletes 是否已赋值
                     */
                    bool AddEqualityDeletesHasBeenSet() const;

                    /**
                     * 获取增加的Position delete数量阈值, 超过值将触发小文件合并
                     * @return AddPositionDeletes 增加的Position delete数量阈值, 超过值将触发小文件合并
                     */
                    int64_t GetAddPositionDeletes() const;

                    /**
                     * 设置增加的Position delete数量阈值, 超过值将触发小文件合并
                     * @param AddPositionDeletes 增加的Position delete数量阈值, 超过值将触发小文件合并
                     */
                    void SetAddPositionDeletes(const int64_t& _addPositionDeletes);

                    /**
                     * 判断参数 AddPositionDeletes 是否已赋值
                     * @return AddPositionDeletes 是否已赋值
                     */
                    bool AddPositionDeletesHasBeenSet() const;

                    /**
                     * 获取增加的delete file数量阈值
                     * @return AddDeleteFiles 增加的delete file数量阈值
                     */
                    int64_t GetAddDeleteFiles() const;

                    /**
                     * 设置增加的delete file数量阈值
                     * @param AddDeleteFiles 增加的delete file数量阈值
                     */
                    void SetAddDeleteFiles(const int64_t& _addDeleteFiles);

                    /**
                     * 判断参数 AddDeleteFiles 是否已赋值
                     * @return AddDeleteFiles 是否已赋值
                     */
                    bool AddDeleteFilesHasBeenSet() const;

                private:

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 目标数据库
                     */
                    std::string m_sinkDatabase;
                    bool m_sinkDatabaseHasBeenSet;

                    /**
                     * 节点id
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 元数据类型(MYSQL、ORACLE)
                     */
                    std::string m_msType;
                    bool m_msTypeHasBeenSet;

                    /**
                     * 数据源id
                     */
                    std::string m_datasourceId;
                    bool m_datasourceIdHasBeenSet;

                    /**
                     * 来源库
                     */
                    std::string m_sourceDatabase;
                    bool m_sourceDatabaseHasBeenSet;

                    /**
                     * 来源表
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * 目标表元数据类型(HIVE、GBASE)
                     */
                    std::string m_sinkType;
                    bool m_sinkTypeHasBeenSet;

                    /**
                     * schema名称
                     */
                    std::string m_schemaName;
                    bool m_schemaNameHasBeenSet;

                    /**
                     * 上游节点的字段信息
                     */
                    std::vector<SourceFieldInfo> m_sourceFieldInfoList;
                    bool m_sourceFieldInfoListHasBeenSet;

                    /**
                     * 分区字段
                     */
                    std::vector<Partition> m_partitions;
                    bool m_partitionsHasBeenSet;

                    /**
                     * 建表属性
                     */
                    std::vector<Property> m_properties;
                    bool m_propertiesHasBeenSet;

                    /**
                     * 建表模式，0:向导模式，1:ddl
                     */
                    int64_t m_tableMode;
                    bool m_tableModeHasBeenSet;

                    /**
                     * DLC表版本，v1/v2
                     */
                    std::string m_tableVersion;
                    bool m_tableVersionHasBeenSet;

                    /**
                     * 是否upsert写入
                     */
                    bool m_upsertFlag;
                    bool m_upsertFlagHasBeenSet;

                    /**
                     * 表描述信息
                     */
                    std::string m_tableComment;
                    bool m_tableCommentHasBeenSet;

                    /**
                     * 增加的文件数量阈值, 超过值将触发小文件合并
                     */
                    int64_t m_addDataFiles;
                    bool m_addDataFilesHasBeenSet;

                    /**
                     * 增加的Equality delete数量阈值, 超过值将触发小文件合并
                     */
                    int64_t m_addEqualityDeletes;
                    bool m_addEqualityDeletesHasBeenSet;

                    /**
                     * 增加的Position delete数量阈值, 超过值将触发小文件合并
                     */
                    int64_t m_addPositionDeletes;
                    bool m_addPositionDeletesHasBeenSet;

                    /**
                     * 增加的delete file数量阈值
                     */
                    int64_t m_addDeleteFiles;
                    bool m_addDeleteFilesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_GENHIVETABLEDDLSQLREQUEST_H_
