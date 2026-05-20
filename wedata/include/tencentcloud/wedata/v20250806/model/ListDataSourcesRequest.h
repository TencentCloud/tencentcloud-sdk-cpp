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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTDATASOURCESREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTDATASOURCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ListDataSources请求参数结构体
                */
                class ListDataSourcesRequest : public AbstractModel
                {
                public:
                    ListDataSourcesRequest();
                    ~ListDataSourcesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>项目id</p>
                     * @return ProjectId <p>项目id</p>
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置<p>项目id</p>
                     * @param _projectId <p>项目id</p>
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取<p>返回数量，默认10</p>
                     * @return PageSize <p>返回数量，默认10</p>
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置<p>返回数量，默认10</p>
                     * @param _pageSize <p>返回数量，默认10</p>
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取<p>页码，默认1</p>
                     * @return PageNumber <p>页码，默认1</p>
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置<p>页码，默认1</p>
                     * @param _pageNumber <p>页码，默认1</p>
                     * 
                     */
                    void SetPageNumber(const uint64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取<p>数据源名称</p>
                     * @return Name <p>数据源名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>数据源名称</p>
                     * @param _name <p>数据源名称</p>
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
                     * 获取<p>数据源展示名</p>
                     * @return DisplayName <p>数据源展示名</p>
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置<p>数据源展示名</p>
                     * @param _displayName <p>数据源展示名</p>
                     * 
                     */
                    void SetDisplayName(const std::string& _displayName);

                    /**
                     * 判断参数 DisplayName 是否已赋值
                     * @return DisplayName 是否已赋值
                     * 
                     */
                    bool DisplayNameHasBeenSet() const;

                    /**
                     * 获取<p>数据源类型:枚举值</p><ul><li>MYSQL</li><li>TENCENT_MYSQL</li><li>POSTGRE</li><li>ORACLE</li><li>SQLSERVER</li><li>FTP</li><li>HIVE</li><li>HUDI</li><li>HDFS</li><li>ICEBERG</li><li>KAFKA</li><li>HBASE</li><li>SPARK</li><li>VIRTUAL</li><li>TBASE</li><li>DB2</li><li>DM</li><li>GAUSSDB</li><li>GBASE</li><li>IMPALA</li><li>ES</li><li>TENCENT_ES</li><li>GREENPLUM</li><li>PHOENIX</li><li>SAP_HANA</li><li>SFTP</li><li>OCEANBASE</li><li>CLICKHOUSE</li><li>KUDU</li><li>VERTICA</li><li>REDIS</li><li>COS</li><li>DLC</li><li>DORIS</li><li>CKAFKA</li><li>S3</li><li>TDSQL</li><li>TDSQL_MYSQL</li><li>MONGODB</li><li>TENCENT_MONGODB</li><li>REST_API</li><li>SuperSQL</li><li>PRESTO</li><li>TiDB</li><li>StarRocks</li><li>Trino</li><li>Kyuubi</li><li>TCHOUSE_X</li><li>TCHOUSE_P</li><li>TCHOUSE_C</li><li>TCHOUSE_D</li><li>INFLUXDB</li><li>BIG_QUERY</li><li>SSH</li><li>BLOB</li></ul>
                     * @return Type <p>数据源类型:枚举值</p><ul><li>MYSQL</li><li>TENCENT_MYSQL</li><li>POSTGRE</li><li>ORACLE</li><li>SQLSERVER</li><li>FTP</li><li>HIVE</li><li>HUDI</li><li>HDFS</li><li>ICEBERG</li><li>KAFKA</li><li>HBASE</li><li>SPARK</li><li>VIRTUAL</li><li>TBASE</li><li>DB2</li><li>DM</li><li>GAUSSDB</li><li>GBASE</li><li>IMPALA</li><li>ES</li><li>TENCENT_ES</li><li>GREENPLUM</li><li>PHOENIX</li><li>SAP_HANA</li><li>SFTP</li><li>OCEANBASE</li><li>CLICKHOUSE</li><li>KUDU</li><li>VERTICA</li><li>REDIS</li><li>COS</li><li>DLC</li><li>DORIS</li><li>CKAFKA</li><li>S3</li><li>TDSQL</li><li>TDSQL_MYSQL</li><li>MONGODB</li><li>TENCENT_MONGODB</li><li>REST_API</li><li>SuperSQL</li><li>PRESTO</li><li>TiDB</li><li>StarRocks</li><li>Trino</li><li>Kyuubi</li><li>TCHOUSE_X</li><li>TCHOUSE_P</li><li>TCHOUSE_C</li><li>TCHOUSE_D</li><li>INFLUXDB</li><li>BIG_QUERY</li><li>SSH</li><li>BLOB</li></ul>
                     * 
                     */
                    std::vector<std::string> GetType() const;

                    /**
                     * 设置<p>数据源类型:枚举值</p><ul><li>MYSQL</li><li>TENCENT_MYSQL</li><li>POSTGRE</li><li>ORACLE</li><li>SQLSERVER</li><li>FTP</li><li>HIVE</li><li>HUDI</li><li>HDFS</li><li>ICEBERG</li><li>KAFKA</li><li>HBASE</li><li>SPARK</li><li>VIRTUAL</li><li>TBASE</li><li>DB2</li><li>DM</li><li>GAUSSDB</li><li>GBASE</li><li>IMPALA</li><li>ES</li><li>TENCENT_ES</li><li>GREENPLUM</li><li>PHOENIX</li><li>SAP_HANA</li><li>SFTP</li><li>OCEANBASE</li><li>CLICKHOUSE</li><li>KUDU</li><li>VERTICA</li><li>REDIS</li><li>COS</li><li>DLC</li><li>DORIS</li><li>CKAFKA</li><li>S3</li><li>TDSQL</li><li>TDSQL_MYSQL</li><li>MONGODB</li><li>TENCENT_MONGODB</li><li>REST_API</li><li>SuperSQL</li><li>PRESTO</li><li>TiDB</li><li>StarRocks</li><li>Trino</li><li>Kyuubi</li><li>TCHOUSE_X</li><li>TCHOUSE_P</li><li>TCHOUSE_C</li><li>TCHOUSE_D</li><li>INFLUXDB</li><li>BIG_QUERY</li><li>SSH</li><li>BLOB</li></ul>
                     * @param _type <p>数据源类型:枚举值</p><ul><li>MYSQL</li><li>TENCENT_MYSQL</li><li>POSTGRE</li><li>ORACLE</li><li>SQLSERVER</li><li>FTP</li><li>HIVE</li><li>HUDI</li><li>HDFS</li><li>ICEBERG</li><li>KAFKA</li><li>HBASE</li><li>SPARK</li><li>VIRTUAL</li><li>TBASE</li><li>DB2</li><li>DM</li><li>GAUSSDB</li><li>GBASE</li><li>IMPALA</li><li>ES</li><li>TENCENT_ES</li><li>GREENPLUM</li><li>PHOENIX</li><li>SAP_HANA</li><li>SFTP</li><li>OCEANBASE</li><li>CLICKHOUSE</li><li>KUDU</li><li>VERTICA</li><li>REDIS</li><li>COS</li><li>DLC</li><li>DORIS</li><li>CKAFKA</li><li>S3</li><li>TDSQL</li><li>TDSQL_MYSQL</li><li>MONGODB</li><li>TENCENT_MONGODB</li><li>REST_API</li><li>SuperSQL</li><li>PRESTO</li><li>TiDB</li><li>StarRocks</li><li>Trino</li><li>Kyuubi</li><li>TCHOUSE_X</li><li>TCHOUSE_P</li><li>TCHOUSE_C</li><li>TCHOUSE_D</li><li>INFLUXDB</li><li>BIG_QUERY</li><li>SSH</li><li>BLOB</li></ul>
                     * 
                     */
                    void SetType(const std::vector<std::string>& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>创建人</p>
                     * @return Creator <p>创建人</p>
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置<p>创建人</p>
                     * @param _creator <p>创建人</p>
                     * 
                     */
                    void SetCreator(const std::string& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                private:

                    /**
                     * <p>项目id</p>
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>返回数量，默认10</p>
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>页码，默认1</p>
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * <p>数据源名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>数据源展示名</p>
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * <p>数据源类型:枚举值</p><ul><li>MYSQL</li><li>TENCENT_MYSQL</li><li>POSTGRE</li><li>ORACLE</li><li>SQLSERVER</li><li>FTP</li><li>HIVE</li><li>HUDI</li><li>HDFS</li><li>ICEBERG</li><li>KAFKA</li><li>HBASE</li><li>SPARK</li><li>VIRTUAL</li><li>TBASE</li><li>DB2</li><li>DM</li><li>GAUSSDB</li><li>GBASE</li><li>IMPALA</li><li>ES</li><li>TENCENT_ES</li><li>GREENPLUM</li><li>PHOENIX</li><li>SAP_HANA</li><li>SFTP</li><li>OCEANBASE</li><li>CLICKHOUSE</li><li>KUDU</li><li>VERTICA</li><li>REDIS</li><li>COS</li><li>DLC</li><li>DORIS</li><li>CKAFKA</li><li>S3</li><li>TDSQL</li><li>TDSQL_MYSQL</li><li>MONGODB</li><li>TENCENT_MONGODB</li><li>REST_API</li><li>SuperSQL</li><li>PRESTO</li><li>TiDB</li><li>StarRocks</li><li>Trino</li><li>Kyuubi</li><li>TCHOUSE_X</li><li>TCHOUSE_P</li><li>TCHOUSE_C</li><li>TCHOUSE_D</li><li>INFLUXDB</li><li>BIG_QUERY</li><li>SSH</li><li>BLOB</li></ul>
                     */
                    std::vector<std::string> m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>创建人</p>
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTDATASOURCESREQUEST_H_
