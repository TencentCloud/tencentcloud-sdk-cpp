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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATEDATASOURCEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATEDATASOURCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/DataSourceFileUpload.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * CreateDataSource请求参数结构体
                */
                class CreateDataSourceRequest : public AbstractModel
                {
                public:
                    CreateDataSourceRequest();
                    ~CreateDataSourceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>数据源项目ID</p>
                     * @return ProjectId <p>数据源项目ID</p>
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置<p>数据源项目ID</p>
                     * @param _projectId <p>数据源项目ID</p>
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
                     * 获取<p>数据源类型:枚举值- MYSQL- TENCENT_MYSQL- POSTGRE- ORACLE- SQLSERVER- FTP- HIVE- HUDI- HDFS- ICEBERG- KAFKA- DTS_KAFKA- HBASE- SPARK- TBASE- DB2- DM- GAUSSDB- GBASE- IMPALA- ES- TENCENT_ES- GREENPLUM- SAP_HANA- SFTP- OCEANBASE- CLICKHOUSE- KUDU- VERTICA- REDIS- COS- DLC- DORIS- CKAFKA- S3_DATAINSIGHT- TDSQL- TDSQL_MYSQL- MONGODB- TENCENT_MONGODB- REST_API- TiDB- StarRocks- Trino- Kyuubi- TCHOUSE_X- TCHOUSE_P- TCHOUSE_C- TCHOUSE_D- INFLUXDB- BIG_QUERY- SSH- BLOB- TDSQL_POSTGRE- GDB- TDENGINE- TDSQLC- FileSystem- TCLake- TDSQL_BOUNDLESS</p>
                     * @return Type <p>数据源类型:枚举值- MYSQL- TENCENT_MYSQL- POSTGRE- ORACLE- SQLSERVER- FTP- HIVE- HUDI- HDFS- ICEBERG- KAFKA- DTS_KAFKA- HBASE- SPARK- TBASE- DB2- DM- GAUSSDB- GBASE- IMPALA- ES- TENCENT_ES- GREENPLUM- SAP_HANA- SFTP- OCEANBASE- CLICKHOUSE- KUDU- VERTICA- REDIS- COS- DLC- DORIS- CKAFKA- S3_DATAINSIGHT- TDSQL- TDSQL_MYSQL- MONGODB- TENCENT_MONGODB- REST_API- TiDB- StarRocks- Trino- Kyuubi- TCHOUSE_X- TCHOUSE_P- TCHOUSE_C- TCHOUSE_D- INFLUXDB- BIG_QUERY- SSH- BLOB- TDSQL_POSTGRE- GDB- TDENGINE- TDSQLC- FileSystem- TCLake- TDSQL_BOUNDLESS</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>数据源类型:枚举值- MYSQL- TENCENT_MYSQL- POSTGRE- ORACLE- SQLSERVER- FTP- HIVE- HUDI- HDFS- ICEBERG- KAFKA- DTS_KAFKA- HBASE- SPARK- TBASE- DB2- DM- GAUSSDB- GBASE- IMPALA- ES- TENCENT_ES- GREENPLUM- SAP_HANA- SFTP- OCEANBASE- CLICKHOUSE- KUDU- VERTICA- REDIS- COS- DLC- DORIS- CKAFKA- S3_DATAINSIGHT- TDSQL- TDSQL_MYSQL- MONGODB- TENCENT_MONGODB- REST_API- TiDB- StarRocks- Trino- Kyuubi- TCHOUSE_X- TCHOUSE_P- TCHOUSE_C- TCHOUSE_D- INFLUXDB- BIG_QUERY- SSH- BLOB- TDSQL_POSTGRE- GDB- TDENGINE- TDSQLC- FileSystem- TCLake- TDSQL_BOUNDLESS</p>
                     * @param _type <p>数据源类型:枚举值- MYSQL- TENCENT_MYSQL- POSTGRE- ORACLE- SQLSERVER- FTP- HIVE- HUDI- HDFS- ICEBERG- KAFKA- DTS_KAFKA- HBASE- SPARK- TBASE- DB2- DM- GAUSSDB- GBASE- IMPALA- ES- TENCENT_ES- GREENPLUM- SAP_HANA- SFTP- OCEANBASE- CLICKHOUSE- KUDU- VERTICA- REDIS- COS- DLC- DORIS- CKAFKA- S3_DATAINSIGHT- TDSQL- TDSQL_MYSQL- MONGODB- TENCENT_MONGODB- REST_API- TiDB- StarRocks- Trino- Kyuubi- TCHOUSE_X- TCHOUSE_P- TCHOUSE_C- TCHOUSE_D- INFLUXDB- BIG_QUERY- SSH- BLOB- TDSQL_POSTGRE- GDB- TDENGINE- TDSQLC- FileSystem- TCLake- TDSQL_BOUNDLESS</p>
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
                     * 获取<p>数据源的配置信息，以JSON KV存储，根据每个数据源类型不同，而KV存储信息不同</p><blockquote><p>deployType:<br>CONNSTR_PUBLICDB(公网实例)<br>CONNSTR_CVMDB(自建实例)<br>INSTANCE(云实例)</p></blockquote><p><pre><code>mysql: 自建实例{    &quot;deployType&quot;: &quot;CONNSTR_CVMDB&quot;,    &quot;url&quot;: &quot;jdbc:mysql://1.1.1.1:1111/example#test#123456&quot;,    &quot;username&quot;: &quot;root&quot;,    &quot;password&quot;: &quot;example#test#123456&quot;,    &quot;region&quot;: &quot;ap-shanghai&quot;,    &quot;vpcId&quot;: &quot;vpc-kprq42yo&quot;,    &quot;type&quot;: &quot;MYSQL&quot;}mysql: 云实例{    &quot;instanceid&quot;: &quot;cdb-12uxdo5e&quot;,    &quot;db&quot;: &quot;db&quot;,    &quot;region&quot;: &quot;ap-shanghai&quot;,    &quot;username&quot;: &quot;msyql&quot;,    &quot;password&quot;: &quot;example#test#123456&quot;,    &quot;deployType&quot;: &quot;INSTANCE&quot;,    &quot;type&quot;: &quot;TENCENT_MYSQL&quot;}sql_server: {    &quot;deployType&quot;: &quot;CONNSTR_PUBLICDB&quot;,    &quot;url&quot;: &quot;jdbc:sqlserver://1.1.1.1:223;example#test#123456&quot;,    &quot;username&quot;: &quot;user_1&quot;,    &quot;password&quot;: &quot;example#test#123456&quot;,    &quot;type&quot;: &quot;SQLSERVER&quot;}redis:    redisType:    -NO_ACCOUT(免账号)    -SELF_ACCOUNT(自定义账号){    &quot;deployType&quot;: &quot;CONNSTR_PUBLICDB&quot;,    &quot;username&quot;:&quot;&quot;    &quot;password&quot;: &quot;example#test#123456&quot;,    &quot;ip&quot;: &quot;1.1.1.1&quot;,    &quot;port&quot;: &quot;6379&quot;,    &quot;redisType&quot;: &quot;NO_ACCOUT&quot;,    &quot;type&quot;: &quot;REDIS&quot;}oracle: {    &quot;deployType&quot;: &quot;CONNSTR_CVMDB&quot;,    &quot;url&quot;: &quot;jdbc:oracle:thin:@1.1.1.1:1521:example#test#123456&quot;,    &quot;username&quot;: &quot;oracle&quot;,    &quot;password&quot;: &quot;example#test#123456&quot;,    &quot;region&quot;: &quot;ap-shanghai&quot;,    &quot;vpcId&quot;: &quot;vpc-kprq42yo&quot;,    &quot;type&quot;: &quot;ORACLE&quot;}mongodb:    advanceParams(自定义参数，会拼接至url后){    &quot;advanceParams&quot;: [        {            &quot;key&quot;: &quot;authSource&quot;,            &quot;value&quot;: &quot;auth&quot;        }    ],    &quot;db&quot;: &quot;admin&quot;,    &quot;deployType&quot;: &quot;CONNSTR_PUBLICDB&quot;,    &quot;username&quot;: &quot;user&quot;,    &quot;password&quot;: &quot;example#test#123456&quot;,    &quot;type&quot;: &quot;MONGODB&quot;,    &quot;host&quot;: &quot;1.1.1.1:9200&quot;}postgresql:{    &quot;deployType&quot;: &quot;CONNSTR_PUBLICDB&quot;,    &quot;url&quot;: &quot;jdbc:postgresql://1.1.1.1:1921/example#test#123456&quot;,    &quot;username&quot;: &quot;user&quot;,    &quot;password&quot;: &quot;example#test#123456&quot;,    &quot;type&quot;: &quot;POSTGRE&quot;}kafka:    authType:        - sasl        - jaas        - sasl_plaintext        - sasl_ssl        - GSSAPI    ssl:        -PLAIN        -GSSAPI{    &quot;deployType&quot;: &quot;CONNSTR_PUBLICDB&quot;,    &quot;host&quot;: &quot;1.1.1.1:9092&quot;,    &quot;ssl&quot;: &quot;GSSAPI&quot;,    &quot;authType&quot;: &quot;sasl&quot;,    &quot;type&quot;: &quot;KAFKA&quot;,    &quot;principal&quot;: &quot;aaaa&quot;,    &quot;serviceName&quot;: &quot;kafka&quot;}cos:{    &quot;region&quot;: &quot;ap-shanghai&quot;,    &quot;deployType&quot;: &quot;INSTANCE&quot;,    &quot;secretId&quot;: &quot;aaaaa&quot;,    &quot;secretKey&quot;: &quot;example#test#123456&quot;,    &quot;bucket&quot;: &quot;aaa&quot;,    &quot;type&quot;: &quot;COS&quot;}</code></pre></p>
                     * @return ProdConProperties <p>数据源的配置信息，以JSON KV存储，根据每个数据源类型不同，而KV存储信息不同</p><blockquote><p>deployType:<br>CONNSTR_PUBLICDB(公网实例)<br>CONNSTR_CVMDB(自建实例)<br>INSTANCE(云实例)</p></blockquote><p><pre><code>mysql: 自建实例{    &quot;deployType&quot;: &quot;CONNSTR_CVMDB&quot;,    &quot;url&quot;: &quot;jdbc:mysql://1.1.1.1:1111/example#test#123456&quot;,    &quot;username&quot;: &quot;root&quot;,    &quot;password&quot;: &quot;example#test#123456&quot;,    &quot;region&quot;: &quot;ap-shanghai&quot;,    &quot;vpcId&quot;: &quot;vpc-kprq42yo&quot;,    &quot;type&quot;: &quot;MYSQL&quot;}mysql: 云实例{    &quot;instanceid&quot;: &quot;cdb-12uxdo5e&quot;,    &quot;db&quot;: &quot;db&quot;,    &quot;region&quot;: &quot;ap-shanghai&quot;,    &quot;username&quot;: &quot;msyql&quot;,    &quot;password&quot;: &quot;example#test#123456&quot;,    &quot;deployType&quot;: &quot;INSTANCE&quot;,    &quot;type&quot;: &quot;TENCENT_MYSQL&quot;}sql_server: {    &quot;deployType&quot;: &quot;CONNSTR_PUBLICDB&quot;,    &quot;url&quot;: &quot;jdbc:sqlserver://1.1.1.1:223;example#test#123456&quot;,    &quot;username&quot;: &quot;user_1&quot;,    &quot;password&quot;: &quot;example#test#123456&quot;,    &quot;type&quot;: &quot;SQLSERVER&quot;}redis:    redisType:    -NO_ACCOUT(免账号)    -SELF_ACCOUNT(自定义账号){    &quot;deployType&quot;: &quot;CONNSTR_PUBLICDB&quot;,    &quot;username&quot;:&quot;&quot;    &quot;password&quot;: &quot;example#test#123456&quot;,    &quot;ip&quot;: &quot;1.1.1.1&quot;,    &quot;port&quot;: &quot;6379&quot;,    &quot;redisType&quot;: &quot;NO_ACCOUT&quot;,    &quot;type&quot;: &quot;REDIS&quot;}oracle: {    &quot;deployType&quot;: &quot;CONNSTR_CVMDB&quot;,    &quot;url&quot;: &quot;jdbc:oracle:thin:@1.1.1.1:1521:example#test#123456&quot;,    &quot;username&quot;: &quot;oracle&quot;,    &quot;password&quot;: &quot;example#test#123456&quot;,    &quot;region&quot;: &quot;ap-shanghai&quot;,    &quot;vpcId&quot;: &quot;vpc-kprq42yo&quot;,    &quot;type&quot;: &quot;ORACLE&quot;}mongodb:    advanceParams(自定义参数，会拼接至url后){    &quot;advanceParams&quot;: [        {            &quot;key&quot;: &quot;authSource&quot;,            &quot;value&quot;: &quot;auth&quot;        }    ],    &quot;db&quot;: &quot;admin&quot;,    &quot;deployType&quot;: &quot;CONNSTR_PUBLICDB&quot;,    &quot;username&quot;: &quot;user&quot;,    &quot;password&quot;: &quot;example#test#123456&quot;,    &quot;type&quot;: &quot;MONGODB&quot;,    &quot;host&quot;: &quot;1.1.1.1:9200&quot;}postgresql:{    &quot;deployType&quot;: &quot;CONNSTR_PUBLICDB&quot;,    &quot;url&quot;: &quot;jdbc:postgresql://1.1.1.1:1921/example#test#123456&quot;,    &quot;username&quot;: &quot;user&quot;,    &quot;password&quot;: &quot;example#test#123456&quot;,    &quot;type&quot;: &quot;POSTGRE&quot;}kafka:    authType:        - sasl        - jaas        - sasl_plaintext        - sasl_ssl        - GSSAPI    ssl:        -PLAIN        -GSSAPI{    &quot;deployType&quot;: &quot;CONNSTR_PUBLICDB&quot;,    &quot;host&quot;: &quot;1.1.1.1:9092&quot;,    &quot;ssl&quot;: &quot;GSSAPI&quot;,    &quot;authType&quot;: &quot;sasl&quot;,    &quot;type&quot;: &quot;KAFKA&quot;,    &quot;principal&quot;: &quot;aaaa&quot;,    &quot;serviceName&quot;: &quot;kafka&quot;}cos:{    &quot;region&quot;: &quot;ap-shanghai&quot;,    &quot;deployType&quot;: &quot;INSTANCE&quot;,    &quot;secretId&quot;: &quot;aaaaa&quot;,    &quot;secretKey&quot;: &quot;example#test#123456&quot;,    &quot;bucket&quot;: &quot;aaa&quot;,    &quot;type&quot;: &quot;COS&quot;}</code></pre></p>
                     * 
                     */
                    std::string GetProdConProperties() const;

                    /**
                     * 设置<p>数据源的配置信息，以JSON KV存储，根据每个数据源类型不同，而KV存储信息不同</p><blockquote><p>deployType:<br>CONNSTR_PUBLICDB(公网实例)<br>CONNSTR_CVMDB(自建实例)<br>INSTANCE(云实例)</p></blockquote><p><pre><code>mysql: 自建实例{    &quot;deployType&quot;: &quot;CONNSTR_CVMDB&quot;,    &quot;url&quot;: &quot;jdbc:mysql://1.1.1.1:1111/example#test#123456&quot;,    &quot;username&quot;: &quot;root&quot;,    &quot;password&quot;: &quot;example#test#123456&quot;,    &quot;region&quot;: &quot;ap-shanghai&quot;,    &quot;vpcId&quot;: &quot;vpc-kprq42yo&quot;,    &quot;type&quot;: &quot;MYSQL&quot;}mysql: 云实例{    &quot;instanceid&quot;: &quot;cdb-12uxdo5e&quot;,    &quot;db&quot;: &quot;db&quot;,    &quot;region&quot;: &quot;ap-shanghai&quot;,    &quot;username&quot;: &quot;msyql&quot;,    &quot;password&quot;: &quot;example#test#123456&quot;,    &quot;deployType&quot;: &quot;INSTANCE&quot;,    &quot;type&quot;: &quot;TENCENT_MYSQL&quot;}sql_server: {    &quot;deployType&quot;: &quot;CONNSTR_PUBLICDB&quot;,    &quot;url&quot;: &quot;jdbc:sqlserver://1.1.1.1:223;example#test#123456&quot;,    &quot;username&quot;: &quot;user_1&quot;,    &quot;password&quot;: &quot;example#test#123456&quot;,    &quot;type&quot;: &quot;SQLSERVER&quot;}redis:    redisType:    -NO_ACCOUT(免账号)    -SELF_ACCOUNT(自定义账号){    &quot;deployType&quot;: &quot;CONNSTR_PUBLICDB&quot;,    &quot;username&quot;:&quot;&quot;    &quot;password&quot;: &quot;example#test#123456&quot;,    &quot;ip&quot;: &quot;1.1.1.1&quot;,    &quot;port&quot;: &quot;6379&quot;,    &quot;redisType&quot;: &quot;NO_ACCOUT&quot;,    &quot;type&quot;: &quot;REDIS&quot;}oracle: {    &quot;deployType&quot;: &quot;CONNSTR_CVMDB&quot;,    &quot;url&quot;: &quot;jdbc:oracle:thin:@1.1.1.1:1521:example#test#123456&quot;,    &quot;username&quot;: &quot;oracle&quot;,    &quot;password&quot;: &quot;example#test#123456&quot;,    &quot;region&quot;: &quot;ap-shanghai&quot;,    &quot;vpcId&quot;: &quot;vpc-kprq42yo&quot;,    &quot;type&quot;: &quot;ORACLE&quot;}mongodb:    advanceParams(自定义参数，会拼接至url后){    &quot;advanceParams&quot;: [        {            &quot;key&quot;: &quot;authSource&quot;,            &quot;value&quot;: &quot;auth&quot;        }    ],    &quot;db&quot;: &quot;admin&quot;,    &quot;deployType&quot;: &quot;CONNSTR_PUBLICDB&quot;,    &quot;username&quot;: &quot;user&quot;,    &quot;password&quot;: &quot;example#test#123456&quot;,    &quot;type&quot;: &quot;MONGODB&quot;,    &quot;host&quot;: &quot;1.1.1.1:9200&quot;}postgresql:{    &quot;deployType&quot;: &quot;CONNSTR_PUBLICDB&quot;,    &quot;url&quot;: &quot;jdbc:postgresql://1.1.1.1:1921/example#test#123456&quot;,    &quot;username&quot;: &quot;user&quot;,    &quot;password&quot;: &quot;example#test#123456&quot;,    &quot;type&quot;: &quot;POSTGRE&quot;}kafka:    authType:        - sasl        - jaas        - sasl_plaintext        - sasl_ssl        - GSSAPI    ssl:        -PLAIN        -GSSAPI{    &quot;deployType&quot;: &quot;CONNSTR_PUBLICDB&quot;,    &quot;host&quot;: &quot;1.1.1.1:9092&quot;,    &quot;ssl&quot;: &quot;GSSAPI&quot;,    &quot;authType&quot;: &quot;sasl&quot;,    &quot;type&quot;: &quot;KAFKA&quot;,    &quot;principal&quot;: &quot;aaaa&quot;,    &quot;serviceName&quot;: &quot;kafka&quot;}cos:{    &quot;region&quot;: &quot;ap-shanghai&quot;,    &quot;deployType&quot;: &quot;INSTANCE&quot;,    &quot;secretId&quot;: &quot;aaaaa&quot;,    &quot;secretKey&quot;: &quot;example#test#123456&quot;,    &quot;bucket&quot;: &quot;aaa&quot;,    &quot;type&quot;: &quot;COS&quot;}</code></pre></p>
                     * @param _prodConProperties <p>数据源的配置信息，以JSON KV存储，根据每个数据源类型不同，而KV存储信息不同</p><blockquote><p>deployType:<br>CONNSTR_PUBLICDB(公网实例)<br>CONNSTR_CVMDB(自建实例)<br>INSTANCE(云实例)</p></blockquote><p><pre><code>mysql: 自建实例{    &quot;deployType&quot;: &quot;CONNSTR_CVMDB&quot;,    &quot;url&quot;: &quot;jdbc:mysql://1.1.1.1:1111/example#test#123456&quot;,    &quot;username&quot;: &quot;root&quot;,    &quot;password&quot;: &quot;example#test#123456&quot;,    &quot;region&quot;: &quot;ap-shanghai&quot;,    &quot;vpcId&quot;: &quot;vpc-kprq42yo&quot;,    &quot;type&quot;: &quot;MYSQL&quot;}mysql: 云实例{    &quot;instanceid&quot;: &quot;cdb-12uxdo5e&quot;,    &quot;db&quot;: &quot;db&quot;,    &quot;region&quot;: &quot;ap-shanghai&quot;,    &quot;username&quot;: &quot;msyql&quot;,    &quot;password&quot;: &quot;example#test#123456&quot;,    &quot;deployType&quot;: &quot;INSTANCE&quot;,    &quot;type&quot;: &quot;TENCENT_MYSQL&quot;}sql_server: {    &quot;deployType&quot;: &quot;CONNSTR_PUBLICDB&quot;,    &quot;url&quot;: &quot;jdbc:sqlserver://1.1.1.1:223;example#test#123456&quot;,    &quot;username&quot;: &quot;user_1&quot;,    &quot;password&quot;: &quot;example#test#123456&quot;,    &quot;type&quot;: &quot;SQLSERVER&quot;}redis:    redisType:    -NO_ACCOUT(免账号)    -SELF_ACCOUNT(自定义账号){    &quot;deployType&quot;: &quot;CONNSTR_PUBLICDB&quot;,    &quot;username&quot;:&quot;&quot;    &quot;password&quot;: &quot;example#test#123456&quot;,    &quot;ip&quot;: &quot;1.1.1.1&quot;,    &quot;port&quot;: &quot;6379&quot;,    &quot;redisType&quot;: &quot;NO_ACCOUT&quot;,    &quot;type&quot;: &quot;REDIS&quot;}oracle: {    &quot;deployType&quot;: &quot;CONNSTR_CVMDB&quot;,    &quot;url&quot;: &quot;jdbc:oracle:thin:@1.1.1.1:1521:example#test#123456&quot;,    &quot;username&quot;: &quot;oracle&quot;,    &quot;password&quot;: &quot;example#test#123456&quot;,    &quot;region&quot;: &quot;ap-shanghai&quot;,    &quot;vpcId&quot;: &quot;vpc-kprq42yo&quot;,    &quot;type&quot;: &quot;ORACLE&quot;}mongodb:    advanceParams(自定义参数，会拼接至url后){    &quot;advanceParams&quot;: [        {            &quot;key&quot;: &quot;authSource&quot;,            &quot;value&quot;: &quot;auth&quot;        }    ],    &quot;db&quot;: &quot;admin&quot;,    &quot;deployType&quot;: &quot;CONNSTR_PUBLICDB&quot;,    &quot;username&quot;: &quot;user&quot;,    &quot;password&quot;: &quot;example#test#123456&quot;,    &quot;type&quot;: &quot;MONGODB&quot;,    &quot;host&quot;: &quot;1.1.1.1:9200&quot;}postgresql:{    &quot;deployType&quot;: &quot;CONNSTR_PUBLICDB&quot;,    &quot;url&quot;: &quot;jdbc:postgresql://1.1.1.1:1921/example#test#123456&quot;,    &quot;username&quot;: &quot;user&quot;,    &quot;password&quot;: &quot;example#test#123456&quot;,    &quot;type&quot;: &quot;POSTGRE&quot;}kafka:    authType:        - sasl        - jaas        - sasl_plaintext        - sasl_ssl        - GSSAPI    ssl:        -PLAIN        -GSSAPI{    &quot;deployType&quot;: &quot;CONNSTR_PUBLICDB&quot;,    &quot;host&quot;: &quot;1.1.1.1:9092&quot;,    &quot;ssl&quot;: &quot;GSSAPI&quot;,    &quot;authType&quot;: &quot;sasl&quot;,    &quot;type&quot;: &quot;KAFKA&quot;,    &quot;principal&quot;: &quot;aaaa&quot;,    &quot;serviceName&quot;: &quot;kafka&quot;}cos:{    &quot;region&quot;: &quot;ap-shanghai&quot;,    &quot;deployType&quot;: &quot;INSTANCE&quot;,    &quot;secretId&quot;: &quot;aaaaa&quot;,    &quot;secretKey&quot;: &quot;example#test#123456&quot;,    &quot;bucket&quot;: &quot;aaa&quot;,    &quot;type&quot;: &quot;COS&quot;}</code></pre></p>
                     * 
                     */
                    void SetProdConProperties(const std::string& _prodConProperties);

                    /**
                     * 判断参数 ProdConProperties 是否已赋值
                     * @return ProdConProperties 是否已赋值
                     * 
                     */
                    bool ProdConPropertiesHasBeenSet() const;

                    /**
                     * 获取<p>开发环境数据源配置信息，若项目为标准模式，则此字段必填</p>
                     * @return DevConProperties <p>开发环境数据源配置信息，若项目为标准模式，则此字段必填</p>
                     * 
                     */
                    std::string GetDevConProperties() const;

                    /**
                     * 设置<p>开发环境数据源配置信息，若项目为标准模式，则此字段必填</p>
                     * @param _devConProperties <p>开发环境数据源配置信息，若项目为标准模式，则此字段必填</p>
                     * 
                     */
                    void SetDevConProperties(const std::string& _devConProperties);

                    /**
                     * 判断参数 DevConProperties 是否已赋值
                     * @return DevConProperties 是否已赋值
                     * 
                     */
                    bool DevConPropertiesHasBeenSet() const;

                    /**
                     * 获取<p>生产环境数据源文件上传</p>
                     * @return ProdFileUpload <p>生产环境数据源文件上传</p>
                     * 
                     */
                    DataSourceFileUpload GetProdFileUpload() const;

                    /**
                     * 设置<p>生产环境数据源文件上传</p>
                     * @param _prodFileUpload <p>生产环境数据源文件上传</p>
                     * 
                     */
                    void SetProdFileUpload(const DataSourceFileUpload& _prodFileUpload);

                    /**
                     * 判断参数 ProdFileUpload 是否已赋值
                     * @return ProdFileUpload 是否已赋值
                     * 
                     */
                    bool ProdFileUploadHasBeenSet() const;

                    /**
                     * 获取<p>开发环境数据源文件上传</p>
                     * @return DevFileUpload <p>开发环境数据源文件上传</p>
                     * 
                     */
                    DataSourceFileUpload GetDevFileUpload() const;

                    /**
                     * 设置<p>开发环境数据源文件上传</p>
                     * @param _devFileUpload <p>开发环境数据源文件上传</p>
                     * 
                     */
                    void SetDevFileUpload(const DataSourceFileUpload& _devFileUpload);

                    /**
                     * 判断参数 DevFileUpload 是否已赋值
                     * @return DevFileUpload 是否已赋值
                     * 
                     */
                    bool DevFileUploadHasBeenSet() const;

                    /**
                     * 获取<p>数据源展示名，为了可视化查看</p>
                     * @return DisplayName <p>数据源展示名，为了可视化查看</p>
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置<p>数据源展示名，为了可视化查看</p>
                     * @param _displayName <p>数据源展示名，为了可视化查看</p>
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
                     * 获取<p>数据源描述信息</p>
                     * @return Description <p>数据源描述信息</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>数据源描述信息</p>
                     * @param _description <p>数据源描述信息</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * <p>数据源项目ID</p>
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>数据源名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>数据源类型:枚举值- MYSQL- TENCENT_MYSQL- POSTGRE- ORACLE- SQLSERVER- FTP- HIVE- HUDI- HDFS- ICEBERG- KAFKA- DTS_KAFKA- HBASE- SPARK- TBASE- DB2- DM- GAUSSDB- GBASE- IMPALA- ES- TENCENT_ES- GREENPLUM- SAP_HANA- SFTP- OCEANBASE- CLICKHOUSE- KUDU- VERTICA- REDIS- COS- DLC- DORIS- CKAFKA- S3_DATAINSIGHT- TDSQL- TDSQL_MYSQL- MONGODB- TENCENT_MONGODB- REST_API- TiDB- StarRocks- Trino- Kyuubi- TCHOUSE_X- TCHOUSE_P- TCHOUSE_C- TCHOUSE_D- INFLUXDB- BIG_QUERY- SSH- BLOB- TDSQL_POSTGRE- GDB- TDENGINE- TDSQLC- FileSystem- TCLake- TDSQL_BOUNDLESS</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>数据源的配置信息，以JSON KV存储，根据每个数据源类型不同，而KV存储信息不同</p><blockquote><p>deployType:<br>CONNSTR_PUBLICDB(公网实例)<br>CONNSTR_CVMDB(自建实例)<br>INSTANCE(云实例)</p></blockquote><p><pre><code>mysql: 自建实例{    &quot;deployType&quot;: &quot;CONNSTR_CVMDB&quot;,    &quot;url&quot;: &quot;jdbc:mysql://1.1.1.1:1111/example#test#123456&quot;,    &quot;username&quot;: &quot;root&quot;,    &quot;password&quot;: &quot;example#test#123456&quot;,    &quot;region&quot;: &quot;ap-shanghai&quot;,    &quot;vpcId&quot;: &quot;vpc-kprq42yo&quot;,    &quot;type&quot;: &quot;MYSQL&quot;}mysql: 云实例{    &quot;instanceid&quot;: &quot;cdb-12uxdo5e&quot;,    &quot;db&quot;: &quot;db&quot;,    &quot;region&quot;: &quot;ap-shanghai&quot;,    &quot;username&quot;: &quot;msyql&quot;,    &quot;password&quot;: &quot;example#test#123456&quot;,    &quot;deployType&quot;: &quot;INSTANCE&quot;,    &quot;type&quot;: &quot;TENCENT_MYSQL&quot;}sql_server: {    &quot;deployType&quot;: &quot;CONNSTR_PUBLICDB&quot;,    &quot;url&quot;: &quot;jdbc:sqlserver://1.1.1.1:223;example#test#123456&quot;,    &quot;username&quot;: &quot;user_1&quot;,    &quot;password&quot;: &quot;example#test#123456&quot;,    &quot;type&quot;: &quot;SQLSERVER&quot;}redis:    redisType:    -NO_ACCOUT(免账号)    -SELF_ACCOUNT(自定义账号){    &quot;deployType&quot;: &quot;CONNSTR_PUBLICDB&quot;,    &quot;username&quot;:&quot;&quot;    &quot;password&quot;: &quot;example#test#123456&quot;,    &quot;ip&quot;: &quot;1.1.1.1&quot;,    &quot;port&quot;: &quot;6379&quot;,    &quot;redisType&quot;: &quot;NO_ACCOUT&quot;,    &quot;type&quot;: &quot;REDIS&quot;}oracle: {    &quot;deployType&quot;: &quot;CONNSTR_CVMDB&quot;,    &quot;url&quot;: &quot;jdbc:oracle:thin:@1.1.1.1:1521:example#test#123456&quot;,    &quot;username&quot;: &quot;oracle&quot;,    &quot;password&quot;: &quot;example#test#123456&quot;,    &quot;region&quot;: &quot;ap-shanghai&quot;,    &quot;vpcId&quot;: &quot;vpc-kprq42yo&quot;,    &quot;type&quot;: &quot;ORACLE&quot;}mongodb:    advanceParams(自定义参数，会拼接至url后){    &quot;advanceParams&quot;: [        {            &quot;key&quot;: &quot;authSource&quot;,            &quot;value&quot;: &quot;auth&quot;        }    ],    &quot;db&quot;: &quot;admin&quot;,    &quot;deployType&quot;: &quot;CONNSTR_PUBLICDB&quot;,    &quot;username&quot;: &quot;user&quot;,    &quot;password&quot;: &quot;example#test#123456&quot;,    &quot;type&quot;: &quot;MONGODB&quot;,    &quot;host&quot;: &quot;1.1.1.1:9200&quot;}postgresql:{    &quot;deployType&quot;: &quot;CONNSTR_PUBLICDB&quot;,    &quot;url&quot;: &quot;jdbc:postgresql://1.1.1.1:1921/example#test#123456&quot;,    &quot;username&quot;: &quot;user&quot;,    &quot;password&quot;: &quot;example#test#123456&quot;,    &quot;type&quot;: &quot;POSTGRE&quot;}kafka:    authType:        - sasl        - jaas        - sasl_plaintext        - sasl_ssl        - GSSAPI    ssl:        -PLAIN        -GSSAPI{    &quot;deployType&quot;: &quot;CONNSTR_PUBLICDB&quot;,    &quot;host&quot;: &quot;1.1.1.1:9092&quot;,    &quot;ssl&quot;: &quot;GSSAPI&quot;,    &quot;authType&quot;: &quot;sasl&quot;,    &quot;type&quot;: &quot;KAFKA&quot;,    &quot;principal&quot;: &quot;aaaa&quot;,    &quot;serviceName&quot;: &quot;kafka&quot;}cos:{    &quot;region&quot;: &quot;ap-shanghai&quot;,    &quot;deployType&quot;: &quot;INSTANCE&quot;,    &quot;secretId&quot;: &quot;aaaaa&quot;,    &quot;secretKey&quot;: &quot;example#test#123456&quot;,    &quot;bucket&quot;: &quot;aaa&quot;,    &quot;type&quot;: &quot;COS&quot;}</code></pre></p>
                     */
                    std::string m_prodConProperties;
                    bool m_prodConPropertiesHasBeenSet;

                    /**
                     * <p>开发环境数据源配置信息，若项目为标准模式，则此字段必填</p>
                     */
                    std::string m_devConProperties;
                    bool m_devConPropertiesHasBeenSet;

                    /**
                     * <p>生产环境数据源文件上传</p>
                     */
                    DataSourceFileUpload m_prodFileUpload;
                    bool m_prodFileUploadHasBeenSet;

                    /**
                     * <p>开发环境数据源文件上传</p>
                     */
                    DataSourceFileUpload m_devFileUpload;
                    bool m_devFileUploadHasBeenSet;

                    /**
                     * <p>数据源展示名，为了可视化查看</p>
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * <p>数据源描述信息</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATEDATASOURCEREQUEST_H_
