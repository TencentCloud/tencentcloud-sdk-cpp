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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_GENHIVETABLEDDLSQLREQUEST_H_
