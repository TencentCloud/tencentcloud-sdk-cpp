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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDATASOURCEINFOLISTREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDATASOURCEINFOLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/Filter.h>
#include <tencentcloud/wedata/v20210820/model/OrderField.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeDataSourceInfoList请求参数结构体
                */
                class DescribeDataSourceInfoListRequest : public AbstractModel
                {
                public:
                    DescribeDataSourceInfoListRequest();
                    ~DescribeDataSourceInfoListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目id
                     * @return ProjectId 项目id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
                     * @param _projectId 项目id
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
                     * 获取页码
                     * @return PageNumber 页码
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置页码
                     * @param _pageNumber 页码
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
                     * 获取页数
                     * @return PageSize 页数
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置页数
                     * @param _pageSize 页数
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
                     * 获取过滤条件（暂不支持）
                     * @return Filters 过滤条件（暂不支持）
                     * 
                     */
                    Filter GetFilters() const;

                    /**
                     * 设置过滤条件（暂不支持）
                     * @param _filters 过滤条件（暂不支持）
                     * 
                     */
                    void SetFilters(const Filter& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取排序配置
                     * @return OrderFields 排序配置
                     * 
                     */
                    OrderField GetOrderFields() const;

                    /**
                     * 设置排序配置
                     * @param _orderFields 排序配置
                     * 
                     */
                    void SetOrderFields(const OrderField& _orderFields);

                    /**
                     * 判断参数 OrderFields 是否已赋值
                     * @return OrderFields 是否已赋值
                     * 
                     */
                    bool OrderFieldsHasBeenSet() const;

                    /**
                     * 获取数据源类型，MYSQL,TENCENT_MYSQL,TDSQL_MYSQL,HIVE,KAFKA,POSTGRE,CDW,ORACLE,SQLSERVER,FTP,HDFS,ICEBERG,HBASE,TDSQL,TDSQLC,SPARK,VIRTUAL,TBASE,DB2,DM,TDENGINE,GAUSSDB,GBASE,IMPALA,ES,TENCENT_ES,S3_DATAINSIGHT,GREENPLUM,PHOENIX,SAP_HANA,SFTP,OCEANBASE,CLICKHOUSE,TCHOUSE_C,KUDU,VERTICA,REDIS,COS,S3,DLC,DORIS,CKAFKA,TDMQ_PULSAR,MONGODB,TENCENT_MONGODB,FTP_FILE,HDFS_FILE,DTS_KAFKA,REST_API,FILE,TIDB,SYBASE,TCHOUSE_X,TDSQL_POSTGRE,TCHOUSE_P,TCHOUSE_D,STARROCKS,EMR_STARROCKS,TBDS_STARROCKS,TRINO,KYUUBI,GDB,INFLUXDB,BIG_QUERY,BLOB,FILESYSTEM,SHAREPOINT,KINGBASEES,HUDI等
                     * @return Type 数据源类型，MYSQL,TENCENT_MYSQL,TDSQL_MYSQL,HIVE,KAFKA,POSTGRE,CDW,ORACLE,SQLSERVER,FTP,HDFS,ICEBERG,HBASE,TDSQL,TDSQLC,SPARK,VIRTUAL,TBASE,DB2,DM,TDENGINE,GAUSSDB,GBASE,IMPALA,ES,TENCENT_ES,S3_DATAINSIGHT,GREENPLUM,PHOENIX,SAP_HANA,SFTP,OCEANBASE,CLICKHOUSE,TCHOUSE_C,KUDU,VERTICA,REDIS,COS,S3,DLC,DORIS,CKAFKA,TDMQ_PULSAR,MONGODB,TENCENT_MONGODB,FTP_FILE,HDFS_FILE,DTS_KAFKA,REST_API,FILE,TIDB,SYBASE,TCHOUSE_X,TDSQL_POSTGRE,TCHOUSE_P,TCHOUSE_D,STARROCKS,EMR_STARROCKS,TBDS_STARROCKS,TRINO,KYUUBI,GDB,INFLUXDB,BIG_QUERY,BLOB,FILESYSTEM,SHAREPOINT,KINGBASEES,HUDI等
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置数据源类型，MYSQL,TENCENT_MYSQL,TDSQL_MYSQL,HIVE,KAFKA,POSTGRE,CDW,ORACLE,SQLSERVER,FTP,HDFS,ICEBERG,HBASE,TDSQL,TDSQLC,SPARK,VIRTUAL,TBASE,DB2,DM,TDENGINE,GAUSSDB,GBASE,IMPALA,ES,TENCENT_ES,S3_DATAINSIGHT,GREENPLUM,PHOENIX,SAP_HANA,SFTP,OCEANBASE,CLICKHOUSE,TCHOUSE_C,KUDU,VERTICA,REDIS,COS,S3,DLC,DORIS,CKAFKA,TDMQ_PULSAR,MONGODB,TENCENT_MONGODB,FTP_FILE,HDFS_FILE,DTS_KAFKA,REST_API,FILE,TIDB,SYBASE,TCHOUSE_X,TDSQL_POSTGRE,TCHOUSE_P,TCHOUSE_D,STARROCKS,EMR_STARROCKS,TBDS_STARROCKS,TRINO,KYUUBI,GDB,INFLUXDB,BIG_QUERY,BLOB,FILESYSTEM,SHAREPOINT,KINGBASEES,HUDI等
                     * @param _type 数据源类型，MYSQL,TENCENT_MYSQL,TDSQL_MYSQL,HIVE,KAFKA,POSTGRE,CDW,ORACLE,SQLSERVER,FTP,HDFS,ICEBERG,HBASE,TDSQL,TDSQLC,SPARK,VIRTUAL,TBASE,DB2,DM,TDENGINE,GAUSSDB,GBASE,IMPALA,ES,TENCENT_ES,S3_DATAINSIGHT,GREENPLUM,PHOENIX,SAP_HANA,SFTP,OCEANBASE,CLICKHOUSE,TCHOUSE_C,KUDU,VERTICA,REDIS,COS,S3,DLC,DORIS,CKAFKA,TDMQ_PULSAR,MONGODB,TENCENT_MONGODB,FTP_FILE,HDFS_FILE,DTS_KAFKA,REST_API,FILE,TIDB,SYBASE,TCHOUSE_X,TDSQL_POSTGRE,TCHOUSE_P,TCHOUSE_D,STARROCKS,EMR_STARROCKS,TBDS_STARROCKS,TRINO,KYUUBI,GDB,INFLUXDB,BIG_QUERY,BLOB,FILESYSTEM,SHAREPOINT,KINGBASEES,HUDI等
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
                     * 获取数据源名称过滤
                     * @return DatasourceName 数据源名称过滤
                     * 
                     */
                    std::string GetDatasourceName() const;

                    /**
                     * 设置数据源名称过滤
                     * @param _datasourceName 数据源名称过滤
                     * 
                     */
                    void SetDatasourceName(const std::string& _datasourceName);

                    /**
                     * 判断参数 DatasourceName 是否已赋值
                     * @return DatasourceName 是否已赋值
                     * 
                     */
                    bool DatasourceNameHasBeenSet() const;

                private:

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 页码
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 页数
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 过滤条件（暂不支持）
                     */
                    Filter m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 排序配置
                     */
                    OrderField m_orderFields;
                    bool m_orderFieldsHasBeenSet;

                    /**
                     * 数据源类型，MYSQL,TENCENT_MYSQL,TDSQL_MYSQL,HIVE,KAFKA,POSTGRE,CDW,ORACLE,SQLSERVER,FTP,HDFS,ICEBERG,HBASE,TDSQL,TDSQLC,SPARK,VIRTUAL,TBASE,DB2,DM,TDENGINE,GAUSSDB,GBASE,IMPALA,ES,TENCENT_ES,S3_DATAINSIGHT,GREENPLUM,PHOENIX,SAP_HANA,SFTP,OCEANBASE,CLICKHOUSE,TCHOUSE_C,KUDU,VERTICA,REDIS,COS,S3,DLC,DORIS,CKAFKA,TDMQ_PULSAR,MONGODB,TENCENT_MONGODB,FTP_FILE,HDFS_FILE,DTS_KAFKA,REST_API,FILE,TIDB,SYBASE,TCHOUSE_X,TDSQL_POSTGRE,TCHOUSE_P,TCHOUSE_D,STARROCKS,EMR_STARROCKS,TBDS_STARROCKS,TRINO,KYUUBI,GDB,INFLUXDB,BIG_QUERY,BLOB,FILESYSTEM,SHAREPOINT,KINGBASEES,HUDI等
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 数据源名称过滤
                     */
                    std::string m_datasourceName;
                    bool m_datasourceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDATASOURCEINFOLISTREQUEST_H_
