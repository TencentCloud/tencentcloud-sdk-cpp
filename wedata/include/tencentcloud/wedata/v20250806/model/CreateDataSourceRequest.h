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
                     * 获取数据源项目ID
                     * @return ProjectId 数据源项目ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置数据源项目ID
                     * @param _projectId 数据源项目ID
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
                     * 获取数据源名称
                     * @return Name 数据源名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置数据源名称
                     * @param _name 数据源名称
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
                     * 获取数据源类型:枚举值

- MYSQL
- TENCENT_MYSQL
- POSTGRE
- ORACLE
- SQLSERVER
- FTP
- HIVE
- HUDI
- HDFS
- ICEBERG
- KAFKA
- DTS_KAFKA
- HBASE
- SPARK
- TBASE
- DB2
- DM
- GAUSSDB
- GBASE
- IMPALA
- ES
- TENCENT_ES
- GREENPLUM
- SAP_HANA
- SFTP
- OCEANBASE
- CLICKHOUSE
- KUDU
- VERTICA
- REDIS
- COS
- DLC
- DORIS
- CKAFKA
- S3_DATAINSIGHT
- TDSQL
- TDSQL_MYSQL
- MONGODB
- TENCENT_MONGODB
- REST_API
- TiDB
- StarRocks
- Trino
- Kyuubi
- TCHOUSE_X
- TCHOUSE_P
- TCHOUSE_C
- TCHOUSE_D
- INFLUXDB
- BIG_QUERY
- SSH
- BLOB
- TDSQL_POSTGRE
- GDB
- TDENGINE
- TDSQLC
- FileSystem

                     * @return Type 数据源类型:枚举值

- MYSQL
- TENCENT_MYSQL
- POSTGRE
- ORACLE
- SQLSERVER
- FTP
- HIVE
- HUDI
- HDFS
- ICEBERG
- KAFKA
- DTS_KAFKA
- HBASE
- SPARK
- TBASE
- DB2
- DM
- GAUSSDB
- GBASE
- IMPALA
- ES
- TENCENT_ES
- GREENPLUM
- SAP_HANA
- SFTP
- OCEANBASE
- CLICKHOUSE
- KUDU
- VERTICA
- REDIS
- COS
- DLC
- DORIS
- CKAFKA
- S3_DATAINSIGHT
- TDSQL
- TDSQL_MYSQL
- MONGODB
- TENCENT_MONGODB
- REST_API
- TiDB
- StarRocks
- Trino
- Kyuubi
- TCHOUSE_X
- TCHOUSE_P
- TCHOUSE_C
- TCHOUSE_D
- INFLUXDB
- BIG_QUERY
- SSH
- BLOB
- TDSQL_POSTGRE
- GDB
- TDENGINE
- TDSQLC
- FileSystem

                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置数据源类型:枚举值

- MYSQL
- TENCENT_MYSQL
- POSTGRE
- ORACLE
- SQLSERVER
- FTP
- HIVE
- HUDI
- HDFS
- ICEBERG
- KAFKA
- DTS_KAFKA
- HBASE
- SPARK
- TBASE
- DB2
- DM
- GAUSSDB
- GBASE
- IMPALA
- ES
- TENCENT_ES
- GREENPLUM
- SAP_HANA
- SFTP
- OCEANBASE
- CLICKHOUSE
- KUDU
- VERTICA
- REDIS
- COS
- DLC
- DORIS
- CKAFKA
- S3_DATAINSIGHT
- TDSQL
- TDSQL_MYSQL
- MONGODB
- TENCENT_MONGODB
- REST_API
- TiDB
- StarRocks
- Trino
- Kyuubi
- TCHOUSE_X
- TCHOUSE_P
- TCHOUSE_C
- TCHOUSE_D
- INFLUXDB
- BIG_QUERY
- SSH
- BLOB
- TDSQL_POSTGRE
- GDB
- TDENGINE
- TDSQLC
- FileSystem

                     * @param _type 数据源类型:枚举值

- MYSQL
- TENCENT_MYSQL
- POSTGRE
- ORACLE
- SQLSERVER
- FTP
- HIVE
- HUDI
- HDFS
- ICEBERG
- KAFKA
- DTS_KAFKA
- HBASE
- SPARK
- TBASE
- DB2
- DM
- GAUSSDB
- GBASE
- IMPALA
- ES
- TENCENT_ES
- GREENPLUM
- SAP_HANA
- SFTP
- OCEANBASE
- CLICKHOUSE
- KUDU
- VERTICA
- REDIS
- COS
- DLC
- DORIS
- CKAFKA
- S3_DATAINSIGHT
- TDSQL
- TDSQL_MYSQL
- MONGODB
- TENCENT_MONGODB
- REST_API
- TiDB
- StarRocks
- Trino
- Kyuubi
- TCHOUSE_X
- TCHOUSE_P
- TCHOUSE_C
- TCHOUSE_D
- INFLUXDB
- BIG_QUERY
- SSH
- BLOB
- TDSQL_POSTGRE
- GDB
- TDENGINE
- TDSQLC
- FileSystem

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
                     * 获取数据源的配置信息，以JSON KV存储，根据每个数据源类型不同，而KV存储信息不同

> deployType: 
CONNSTR_PUBLICDB(公网实例) 
CONNSTR_CVMDB(自建实例)
INSTANCE(云实例)

```
mysql: 自建实例
{
    "deployType": "CONNSTR_CVMDB",
    "url": "jdbc:mysql://1.1.1.1:1111/database",
    "username": "root",
    "password": "root",
    "region": "ap-shanghai",
    "vpcId": "vpc-kprq42yo",
    "type": "MYSQL"
}
mysql: 云实例
{
    "instanceid": "cdb-12uxdo5e",
    "db": "db",
    "region": "ap-shanghai",
    "username": "msyql",
    "password": "mysql",
    "deployType": "INSTANCE",
    "type": "TENCENT_MYSQL"
}
sql_server: 
{
    "deployType": "CONNSTR_PUBLICDB",
    "url": "jdbc:sqlserver://1.1.1.1:223;DatabaseName=database",
    "username": "user_1",
    "password": "pass_2",
    "type": "SQLSERVER"
}
redis:
    redisType:
    -NO_ACCOUT(免账号)
    -SELF_ACCOUNT(自定义账号)
{
    "deployType": "CONNSTR_PUBLICDB",
    "username":""
    "password": "pass",
    "ip": "1.1.1.1",
    "port": "6379",
    "redisType": "NO_ACCOUT",
    "type": "REDIS"
}
oracle: 
{
    "deployType": "CONNSTR_CVMDB",
    "url": "jdbc:oracle:thin:@1.1.1.1:1521:prod",
    "username": "oracle",
    "password": "pass",
    "region": "ap-shanghai",
    "vpcId": "vpc-kprq42yo",
    "type": "ORACLE"
}
mongodb:
    advanceParams(自定义参数，会拼接至url后)
{
    "advanceParams": [
        {
            "key": "authSource",
            "value": "auth"
        }
    ],
    "db": "admin",
    "deployType": "CONNSTR_PUBLICDB",
    "username": "user",
    "password": "pass",
    "type": "MONGODB",
    "host": "1.1.1.1:9200"
}
postgresql:
{
    "deployType": "CONNSTR_PUBLICDB",
    "url": "jdbc:postgresql://1.1.1.1:1921/database",
    "username": "user",
    "password": "pass",
    "type": "POSTGRE"
}
kafka:
    authType:
        - sasl
        - jaas
        - sasl_plaintext
        - sasl_ssl
        - GSSAPI
    ssl:
        -PLAIN
        -GSSAPI
{
    "deployType": "CONNSTR_PUBLICDB",
    "host": "1.1.1.1:9092",
    "ssl": "GSSAPI",
    "authType": "sasl",
    "type": "KAFKA",
    "principal": "aaaa",
    "serviceName": "kafka"
}

cos:
{
    "region": "ap-shanghai",
    "deployType": "INSTANCE",
    "secretId": "aaaaa",
    "secretKey": "sssssss",
    "bucket": "aaa",
    "type": "COS"
}

```
                     * @return ProdConProperties 数据源的配置信息，以JSON KV存储，根据每个数据源类型不同，而KV存储信息不同

> deployType: 
CONNSTR_PUBLICDB(公网实例) 
CONNSTR_CVMDB(自建实例)
INSTANCE(云实例)

```
mysql: 自建实例
{
    "deployType": "CONNSTR_CVMDB",
    "url": "jdbc:mysql://1.1.1.1:1111/database",
    "username": "root",
    "password": "root",
    "region": "ap-shanghai",
    "vpcId": "vpc-kprq42yo",
    "type": "MYSQL"
}
mysql: 云实例
{
    "instanceid": "cdb-12uxdo5e",
    "db": "db",
    "region": "ap-shanghai",
    "username": "msyql",
    "password": "mysql",
    "deployType": "INSTANCE",
    "type": "TENCENT_MYSQL"
}
sql_server: 
{
    "deployType": "CONNSTR_PUBLICDB",
    "url": "jdbc:sqlserver://1.1.1.1:223;DatabaseName=database",
    "username": "user_1",
    "password": "pass_2",
    "type": "SQLSERVER"
}
redis:
    redisType:
    -NO_ACCOUT(免账号)
    -SELF_ACCOUNT(自定义账号)
{
    "deployType": "CONNSTR_PUBLICDB",
    "username":""
    "password": "pass",
    "ip": "1.1.1.1",
    "port": "6379",
    "redisType": "NO_ACCOUT",
    "type": "REDIS"
}
oracle: 
{
    "deployType": "CONNSTR_CVMDB",
    "url": "jdbc:oracle:thin:@1.1.1.1:1521:prod",
    "username": "oracle",
    "password": "pass",
    "region": "ap-shanghai",
    "vpcId": "vpc-kprq42yo",
    "type": "ORACLE"
}
mongodb:
    advanceParams(自定义参数，会拼接至url后)
{
    "advanceParams": [
        {
            "key": "authSource",
            "value": "auth"
        }
    ],
    "db": "admin",
    "deployType": "CONNSTR_PUBLICDB",
    "username": "user",
    "password": "pass",
    "type": "MONGODB",
    "host": "1.1.1.1:9200"
}
postgresql:
{
    "deployType": "CONNSTR_PUBLICDB",
    "url": "jdbc:postgresql://1.1.1.1:1921/database",
    "username": "user",
    "password": "pass",
    "type": "POSTGRE"
}
kafka:
    authType:
        - sasl
        - jaas
        - sasl_plaintext
        - sasl_ssl
        - GSSAPI
    ssl:
        -PLAIN
        -GSSAPI
{
    "deployType": "CONNSTR_PUBLICDB",
    "host": "1.1.1.1:9092",
    "ssl": "GSSAPI",
    "authType": "sasl",
    "type": "KAFKA",
    "principal": "aaaa",
    "serviceName": "kafka"
}

cos:
{
    "region": "ap-shanghai",
    "deployType": "INSTANCE",
    "secretId": "aaaaa",
    "secretKey": "sssssss",
    "bucket": "aaa",
    "type": "COS"
}

```
                     * 
                     */
                    std::string GetProdConProperties() const;

                    /**
                     * 设置数据源的配置信息，以JSON KV存储，根据每个数据源类型不同，而KV存储信息不同

> deployType: 
CONNSTR_PUBLICDB(公网实例) 
CONNSTR_CVMDB(自建实例)
INSTANCE(云实例)

```
mysql: 自建实例
{
    "deployType": "CONNSTR_CVMDB",
    "url": "jdbc:mysql://1.1.1.1:1111/database",
    "username": "root",
    "password": "root",
    "region": "ap-shanghai",
    "vpcId": "vpc-kprq42yo",
    "type": "MYSQL"
}
mysql: 云实例
{
    "instanceid": "cdb-12uxdo5e",
    "db": "db",
    "region": "ap-shanghai",
    "username": "msyql",
    "password": "mysql",
    "deployType": "INSTANCE",
    "type": "TENCENT_MYSQL"
}
sql_server: 
{
    "deployType": "CONNSTR_PUBLICDB",
    "url": "jdbc:sqlserver://1.1.1.1:223;DatabaseName=database",
    "username": "user_1",
    "password": "pass_2",
    "type": "SQLSERVER"
}
redis:
    redisType:
    -NO_ACCOUT(免账号)
    -SELF_ACCOUNT(自定义账号)
{
    "deployType": "CONNSTR_PUBLICDB",
    "username":""
    "password": "pass",
    "ip": "1.1.1.1",
    "port": "6379",
    "redisType": "NO_ACCOUT",
    "type": "REDIS"
}
oracle: 
{
    "deployType": "CONNSTR_CVMDB",
    "url": "jdbc:oracle:thin:@1.1.1.1:1521:prod",
    "username": "oracle",
    "password": "pass",
    "region": "ap-shanghai",
    "vpcId": "vpc-kprq42yo",
    "type": "ORACLE"
}
mongodb:
    advanceParams(自定义参数，会拼接至url后)
{
    "advanceParams": [
        {
            "key": "authSource",
            "value": "auth"
        }
    ],
    "db": "admin",
    "deployType": "CONNSTR_PUBLICDB",
    "username": "user",
    "password": "pass",
    "type": "MONGODB",
    "host": "1.1.1.1:9200"
}
postgresql:
{
    "deployType": "CONNSTR_PUBLICDB",
    "url": "jdbc:postgresql://1.1.1.1:1921/database",
    "username": "user",
    "password": "pass",
    "type": "POSTGRE"
}
kafka:
    authType:
        - sasl
        - jaas
        - sasl_plaintext
        - sasl_ssl
        - GSSAPI
    ssl:
        -PLAIN
        -GSSAPI
{
    "deployType": "CONNSTR_PUBLICDB",
    "host": "1.1.1.1:9092",
    "ssl": "GSSAPI",
    "authType": "sasl",
    "type": "KAFKA",
    "principal": "aaaa",
    "serviceName": "kafka"
}

cos:
{
    "region": "ap-shanghai",
    "deployType": "INSTANCE",
    "secretId": "aaaaa",
    "secretKey": "sssssss",
    "bucket": "aaa",
    "type": "COS"
}

```
                     * @param _prodConProperties 数据源的配置信息，以JSON KV存储，根据每个数据源类型不同，而KV存储信息不同

> deployType: 
CONNSTR_PUBLICDB(公网实例) 
CONNSTR_CVMDB(自建实例)
INSTANCE(云实例)

```
mysql: 自建实例
{
    "deployType": "CONNSTR_CVMDB",
    "url": "jdbc:mysql://1.1.1.1:1111/database",
    "username": "root",
    "password": "root",
    "region": "ap-shanghai",
    "vpcId": "vpc-kprq42yo",
    "type": "MYSQL"
}
mysql: 云实例
{
    "instanceid": "cdb-12uxdo5e",
    "db": "db",
    "region": "ap-shanghai",
    "username": "msyql",
    "password": "mysql",
    "deployType": "INSTANCE",
    "type": "TENCENT_MYSQL"
}
sql_server: 
{
    "deployType": "CONNSTR_PUBLICDB",
    "url": "jdbc:sqlserver://1.1.1.1:223;DatabaseName=database",
    "username": "user_1",
    "password": "pass_2",
    "type": "SQLSERVER"
}
redis:
    redisType:
    -NO_ACCOUT(免账号)
    -SELF_ACCOUNT(自定义账号)
{
    "deployType": "CONNSTR_PUBLICDB",
    "username":""
    "password": "pass",
    "ip": "1.1.1.1",
    "port": "6379",
    "redisType": "NO_ACCOUT",
    "type": "REDIS"
}
oracle: 
{
    "deployType": "CONNSTR_CVMDB",
    "url": "jdbc:oracle:thin:@1.1.1.1:1521:prod",
    "username": "oracle",
    "password": "pass",
    "region": "ap-shanghai",
    "vpcId": "vpc-kprq42yo",
    "type": "ORACLE"
}
mongodb:
    advanceParams(自定义参数，会拼接至url后)
{
    "advanceParams": [
        {
            "key": "authSource",
            "value": "auth"
        }
    ],
    "db": "admin",
    "deployType": "CONNSTR_PUBLICDB",
    "username": "user",
    "password": "pass",
    "type": "MONGODB",
    "host": "1.1.1.1:9200"
}
postgresql:
{
    "deployType": "CONNSTR_PUBLICDB",
    "url": "jdbc:postgresql://1.1.1.1:1921/database",
    "username": "user",
    "password": "pass",
    "type": "POSTGRE"
}
kafka:
    authType:
        - sasl
        - jaas
        - sasl_plaintext
        - sasl_ssl
        - GSSAPI
    ssl:
        -PLAIN
        -GSSAPI
{
    "deployType": "CONNSTR_PUBLICDB",
    "host": "1.1.1.1:9092",
    "ssl": "GSSAPI",
    "authType": "sasl",
    "type": "KAFKA",
    "principal": "aaaa",
    "serviceName": "kafka"
}

cos:
{
    "region": "ap-shanghai",
    "deployType": "INSTANCE",
    "secretId": "aaaaa",
    "secretKey": "sssssss",
    "bucket": "aaa",
    "type": "COS"
}

```
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
                     * 获取开发环境数据源配置信息，若项目为标准模式，则此字段必填
                     * @return DevConProperties 开发环境数据源配置信息，若项目为标准模式，则此字段必填
                     * 
                     */
                    std::string GetDevConProperties() const;

                    /**
                     * 设置开发环境数据源配置信息，若项目为标准模式，则此字段必填
                     * @param _devConProperties 开发环境数据源配置信息，若项目为标准模式，则此字段必填
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
                     * 获取生产环境数据源文件上传
                     * @return ProdFileUpload 生产环境数据源文件上传
                     * 
                     */
                    DataSourceFileUpload GetProdFileUpload() const;

                    /**
                     * 设置生产环境数据源文件上传
                     * @param _prodFileUpload 生产环境数据源文件上传
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
                     * 获取开发环境数据源文件上传
                     * @return DevFileUpload 开发环境数据源文件上传
                     * 
                     */
                    DataSourceFileUpload GetDevFileUpload() const;

                    /**
                     * 设置开发环境数据源文件上传
                     * @param _devFileUpload 开发环境数据源文件上传
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
                     * 获取数据源展示名，为了可视化查看
                     * @return DisplayName 数据源展示名，为了可视化查看
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置数据源展示名，为了可视化查看
                     * @param _displayName 数据源展示名，为了可视化查看
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
                     * 获取数据源描述信息
                     * @return Description 数据源描述信息
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置数据源描述信息
                     * @param _description 数据源描述信息
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
                     * 数据源项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 数据源名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 数据源类型:枚举值

- MYSQL
- TENCENT_MYSQL
- POSTGRE
- ORACLE
- SQLSERVER
- FTP
- HIVE
- HUDI
- HDFS
- ICEBERG
- KAFKA
- DTS_KAFKA
- HBASE
- SPARK
- TBASE
- DB2
- DM
- GAUSSDB
- GBASE
- IMPALA
- ES
- TENCENT_ES
- GREENPLUM
- SAP_HANA
- SFTP
- OCEANBASE
- CLICKHOUSE
- KUDU
- VERTICA
- REDIS
- COS
- DLC
- DORIS
- CKAFKA
- S3_DATAINSIGHT
- TDSQL
- TDSQL_MYSQL
- MONGODB
- TENCENT_MONGODB
- REST_API
- TiDB
- StarRocks
- Trino
- Kyuubi
- TCHOUSE_X
- TCHOUSE_P
- TCHOUSE_C
- TCHOUSE_D
- INFLUXDB
- BIG_QUERY
- SSH
- BLOB
- TDSQL_POSTGRE
- GDB
- TDENGINE
- TDSQLC
- FileSystem

                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 数据源的配置信息，以JSON KV存储，根据每个数据源类型不同，而KV存储信息不同

> deployType: 
CONNSTR_PUBLICDB(公网实例) 
CONNSTR_CVMDB(自建实例)
INSTANCE(云实例)

```
mysql: 自建实例
{
    "deployType": "CONNSTR_CVMDB",
    "url": "jdbc:mysql://1.1.1.1:1111/database",
    "username": "root",
    "password": "root",
    "region": "ap-shanghai",
    "vpcId": "vpc-kprq42yo",
    "type": "MYSQL"
}
mysql: 云实例
{
    "instanceid": "cdb-12uxdo5e",
    "db": "db",
    "region": "ap-shanghai",
    "username": "msyql",
    "password": "mysql",
    "deployType": "INSTANCE",
    "type": "TENCENT_MYSQL"
}
sql_server: 
{
    "deployType": "CONNSTR_PUBLICDB",
    "url": "jdbc:sqlserver://1.1.1.1:223;DatabaseName=database",
    "username": "user_1",
    "password": "pass_2",
    "type": "SQLSERVER"
}
redis:
    redisType:
    -NO_ACCOUT(免账号)
    -SELF_ACCOUNT(自定义账号)
{
    "deployType": "CONNSTR_PUBLICDB",
    "username":""
    "password": "pass",
    "ip": "1.1.1.1",
    "port": "6379",
    "redisType": "NO_ACCOUT",
    "type": "REDIS"
}
oracle: 
{
    "deployType": "CONNSTR_CVMDB",
    "url": "jdbc:oracle:thin:@1.1.1.1:1521:prod",
    "username": "oracle",
    "password": "pass",
    "region": "ap-shanghai",
    "vpcId": "vpc-kprq42yo",
    "type": "ORACLE"
}
mongodb:
    advanceParams(自定义参数，会拼接至url后)
{
    "advanceParams": [
        {
            "key": "authSource",
            "value": "auth"
        }
    ],
    "db": "admin",
    "deployType": "CONNSTR_PUBLICDB",
    "username": "user",
    "password": "pass",
    "type": "MONGODB",
    "host": "1.1.1.1:9200"
}
postgresql:
{
    "deployType": "CONNSTR_PUBLICDB",
    "url": "jdbc:postgresql://1.1.1.1:1921/database",
    "username": "user",
    "password": "pass",
    "type": "POSTGRE"
}
kafka:
    authType:
        - sasl
        - jaas
        - sasl_plaintext
        - sasl_ssl
        - GSSAPI
    ssl:
        -PLAIN
        -GSSAPI
{
    "deployType": "CONNSTR_PUBLICDB",
    "host": "1.1.1.1:9092",
    "ssl": "GSSAPI",
    "authType": "sasl",
    "type": "KAFKA",
    "principal": "aaaa",
    "serviceName": "kafka"
}

cos:
{
    "region": "ap-shanghai",
    "deployType": "INSTANCE",
    "secretId": "aaaaa",
    "secretKey": "sssssss",
    "bucket": "aaa",
    "type": "COS"
}

```
                     */
                    std::string m_prodConProperties;
                    bool m_prodConPropertiesHasBeenSet;

                    /**
                     * 开发环境数据源配置信息，若项目为标准模式，则此字段必填
                     */
                    std::string m_devConProperties;
                    bool m_devConPropertiesHasBeenSet;

                    /**
                     * 生产环境数据源文件上传
                     */
                    DataSourceFileUpload m_prodFileUpload;
                    bool m_prodFileUploadHasBeenSet;

                    /**
                     * 开发环境数据源文件上传
                     */
                    DataSourceFileUpload m_devFileUpload;
                    bool m_devFileUploadHasBeenSet;

                    /**
                     * 数据源展示名，为了可视化查看
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * 数据源描述信息
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATEDATASOURCEREQUEST_H_
