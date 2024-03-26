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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDATATYPESREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDATATYPESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeDataTypes请求参数结构体
                */
                class DescribeDataTypesRequest : public AbstractModel
                {
                public:
                    DescribeDataTypesRequest();
                    ~DescribeDataTypesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数据源类型，MYSQL|HIVE|KAFKA|POSTGRE|TCHouse-P|ORACLE|SQLSERVER|FTP|HDFS|ICEBERG|HBASE|TDSQL|TDSQLC|SPARK|VIRTUAL|TBASE|DB2|DM|GAUSSDB|GBASE|IMPALA|ES|S3_DATAINSIGHT|GREENPLUM|PHOENIX|SAP_HANA|SFTP|OCEANBASE|CLICKHOUSE|KUDU|VERTICA|REDIS|COS|DLC|DORIS|CKAFKA|MONGODB|FTP_FILE|HDFS_FILE|DTS_KAFKA|REST_API|FILE|TIDB|SYBASE|TCHOUSE_X 等
                     * @return DatasourceType 数据源类型，MYSQL|HIVE|KAFKA|POSTGRE|TCHouse-P|ORACLE|SQLSERVER|FTP|HDFS|ICEBERG|HBASE|TDSQL|TDSQLC|SPARK|VIRTUAL|TBASE|DB2|DM|GAUSSDB|GBASE|IMPALA|ES|S3_DATAINSIGHT|GREENPLUM|PHOENIX|SAP_HANA|SFTP|OCEANBASE|CLICKHOUSE|KUDU|VERTICA|REDIS|COS|DLC|DORIS|CKAFKA|MONGODB|FTP_FILE|HDFS_FILE|DTS_KAFKA|REST_API|FILE|TIDB|SYBASE|TCHOUSE_X 等
                     * 
                     */
                    std::string GetDatasourceType() const;

                    /**
                     * 设置数据源类型，MYSQL|HIVE|KAFKA|POSTGRE|TCHouse-P|ORACLE|SQLSERVER|FTP|HDFS|ICEBERG|HBASE|TDSQL|TDSQLC|SPARK|VIRTUAL|TBASE|DB2|DM|GAUSSDB|GBASE|IMPALA|ES|S3_DATAINSIGHT|GREENPLUM|PHOENIX|SAP_HANA|SFTP|OCEANBASE|CLICKHOUSE|KUDU|VERTICA|REDIS|COS|DLC|DORIS|CKAFKA|MONGODB|FTP_FILE|HDFS_FILE|DTS_KAFKA|REST_API|FILE|TIDB|SYBASE|TCHOUSE_X 等
                     * @param _datasourceType 数据源类型，MYSQL|HIVE|KAFKA|POSTGRE|TCHouse-P|ORACLE|SQLSERVER|FTP|HDFS|ICEBERG|HBASE|TDSQL|TDSQLC|SPARK|VIRTUAL|TBASE|DB2|DM|GAUSSDB|GBASE|IMPALA|ES|S3_DATAINSIGHT|GREENPLUM|PHOENIX|SAP_HANA|SFTP|OCEANBASE|CLICKHOUSE|KUDU|VERTICA|REDIS|COS|DLC|DORIS|CKAFKA|MONGODB|FTP_FILE|HDFS_FILE|DTS_KAFKA|REST_API|FILE|TIDB|SYBASE|TCHOUSE_X 等
                     * 
                     */
                    void SetDatasourceType(const std::string& _datasourceType);

                    /**
                     * 判断参数 DatasourceType 是否已赋值
                     * @return DatasourceType 是否已赋值
                     * 
                     */
                    bool DatasourceTypeHasBeenSet() const;

                    /**
                     * 获取项目ID。
                     * @return ProjectId 项目ID。
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID。
                     * @param _projectId 项目ID。
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                private:

                    /**
                     * 数据源类型，MYSQL|HIVE|KAFKA|POSTGRE|TCHouse-P|ORACLE|SQLSERVER|FTP|HDFS|ICEBERG|HBASE|TDSQL|TDSQLC|SPARK|VIRTUAL|TBASE|DB2|DM|GAUSSDB|GBASE|IMPALA|ES|S3_DATAINSIGHT|GREENPLUM|PHOENIX|SAP_HANA|SFTP|OCEANBASE|CLICKHOUSE|KUDU|VERTICA|REDIS|COS|DLC|DORIS|CKAFKA|MONGODB|FTP_FILE|HDFS_FILE|DTS_KAFKA|REST_API|FILE|TIDB|SYBASE|TCHOUSE_X 等
                     */
                    std::string m_datasourceType;
                    bool m_datasourceTypeHasBeenSet;

                    /**
                     * 项目ID。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDATATYPESREQUEST_H_
