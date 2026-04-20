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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATECONNECTRESOURCEREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATECONNECTRESOURCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/DtsConnectParam.h>
#include <tencentcloud/ckafka/v20190819/model/MongoDBConnectParam.h>
#include <tencentcloud/ckafka/v20190819/model/EsConnectParam.h>
#include <tencentcloud/ckafka/v20190819/model/ClickHouseConnectParam.h>
#include <tencentcloud/ckafka/v20190819/model/MySQLConnectParam.h>
#include <tencentcloud/ckafka/v20190819/model/PostgreSQLConnectParam.h>
#include <tencentcloud/ckafka/v20190819/model/MariaDBConnectParam.h>
#include <tencentcloud/ckafka/v20190819/model/SQLServerConnectParam.h>
#include <tencentcloud/ckafka/v20190819/model/DorisConnectParam.h>
#include <tencentcloud/ckafka/v20190819/model/KafkaConnectParam.h>
#include <tencentcloud/ckafka/v20190819/model/MqttConnectParam.h>
#include <tencentcloud/ckafka/v20190819/model/Tag.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * CreateConnectResource请求参数结构体
                */
                class CreateConnectResourceRequest : public AbstractModel
                {
                public:
                    CreateConnectResourceRequest();
                    ~CreateConnectResourceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>连接源名称</p>
                     * @return ResourceName <p>连接源名称</p>
                     * 
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置<p>连接源名称</p>
                     * @param _resourceName <p>连接源名称</p>
                     * 
                     */
                    void SetResourceName(const std::string& _resourceName);

                    /**
                     * 判断参数 ResourceName 是否已赋值
                     * @return ResourceName 是否已赋值
                     * 
                     */
                    bool ResourceNameHasBeenSet() const;

                    /**
                     * 获取<p>连接源类型</p>
                     * @return Type <p>连接源类型</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>连接源类型</p>
                     * @param _type <p>连接源类型</p>
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
                     * 获取<p>连接源描述</p>
                     * @return Description <p>连接源描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>连接源描述</p>
                     * @param _description <p>连接源描述</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>Dts配置，Type为DTS时必填</p>
                     * @return DtsConnectParam <p>Dts配置，Type为DTS时必填</p>
                     * 
                     */
                    DtsConnectParam GetDtsConnectParam() const;

                    /**
                     * 设置<p>Dts配置，Type为DTS时必填</p>
                     * @param _dtsConnectParam <p>Dts配置，Type为DTS时必填</p>
                     * 
                     */
                    void SetDtsConnectParam(const DtsConnectParam& _dtsConnectParam);

                    /**
                     * 判断参数 DtsConnectParam 是否已赋值
                     * @return DtsConnectParam 是否已赋值
                     * 
                     */
                    bool DtsConnectParamHasBeenSet() const;

                    /**
                     * 获取<p>MongoDB配置，Type为MONGODB时必填</p>
                     * @return MongoDBConnectParam <p>MongoDB配置，Type为MONGODB时必填</p>
                     * 
                     */
                    MongoDBConnectParam GetMongoDBConnectParam() const;

                    /**
                     * 设置<p>MongoDB配置，Type为MONGODB时必填</p>
                     * @param _mongoDBConnectParam <p>MongoDB配置，Type为MONGODB时必填</p>
                     * 
                     */
                    void SetMongoDBConnectParam(const MongoDBConnectParam& _mongoDBConnectParam);

                    /**
                     * 判断参数 MongoDBConnectParam 是否已赋值
                     * @return MongoDBConnectParam 是否已赋值
                     * 
                     */
                    bool MongoDBConnectParamHasBeenSet() const;

                    /**
                     * 获取<p>Es配置，Type为ES时必填</p>
                     * @return EsConnectParam <p>Es配置，Type为ES时必填</p>
                     * 
                     */
                    EsConnectParam GetEsConnectParam() const;

                    /**
                     * 设置<p>Es配置，Type为ES时必填</p>
                     * @param _esConnectParam <p>Es配置，Type为ES时必填</p>
                     * 
                     */
                    void SetEsConnectParam(const EsConnectParam& _esConnectParam);

                    /**
                     * 判断参数 EsConnectParam 是否已赋值
                     * @return EsConnectParam 是否已赋值
                     * 
                     */
                    bool EsConnectParamHasBeenSet() const;

                    /**
                     * 获取<p>ClickHouse配置，Type为CLICKHOUSE时必填</p>
                     * @return ClickHouseConnectParam <p>ClickHouse配置，Type为CLICKHOUSE时必填</p>
                     * 
                     */
                    ClickHouseConnectParam GetClickHouseConnectParam() const;

                    /**
                     * 设置<p>ClickHouse配置，Type为CLICKHOUSE时必填</p>
                     * @param _clickHouseConnectParam <p>ClickHouse配置，Type为CLICKHOUSE时必填</p>
                     * 
                     */
                    void SetClickHouseConnectParam(const ClickHouseConnectParam& _clickHouseConnectParam);

                    /**
                     * 判断参数 ClickHouseConnectParam 是否已赋值
                     * @return ClickHouseConnectParam 是否已赋值
                     * 
                     */
                    bool ClickHouseConnectParamHasBeenSet() const;

                    /**
                     * 获取<p>MySQL配置，Type为MYSQL或TDSQL_C_MYSQL时必填</p>
                     * @return MySQLConnectParam <p>MySQL配置，Type为MYSQL或TDSQL_C_MYSQL时必填</p>
                     * 
                     */
                    MySQLConnectParam GetMySQLConnectParam() const;

                    /**
                     * 设置<p>MySQL配置，Type为MYSQL或TDSQL_C_MYSQL时必填</p>
                     * @param _mySQLConnectParam <p>MySQL配置，Type为MYSQL或TDSQL_C_MYSQL时必填</p>
                     * 
                     */
                    void SetMySQLConnectParam(const MySQLConnectParam& _mySQLConnectParam);

                    /**
                     * 判断参数 MySQLConnectParam 是否已赋值
                     * @return MySQLConnectParam 是否已赋值
                     * 
                     */
                    bool MySQLConnectParamHasBeenSet() const;

                    /**
                     * 获取<p>PostgreSQL配置，Type为POSTGRESQL或TDSQL_C_POSTGRESQL时必填</p>
                     * @return PostgreSQLConnectParam <p>PostgreSQL配置，Type为POSTGRESQL或TDSQL_C_POSTGRESQL时必填</p>
                     * 
                     */
                    PostgreSQLConnectParam GetPostgreSQLConnectParam() const;

                    /**
                     * 设置<p>PostgreSQL配置，Type为POSTGRESQL或TDSQL_C_POSTGRESQL时必填</p>
                     * @param _postgreSQLConnectParam <p>PostgreSQL配置，Type为POSTGRESQL或TDSQL_C_POSTGRESQL时必填</p>
                     * 
                     */
                    void SetPostgreSQLConnectParam(const PostgreSQLConnectParam& _postgreSQLConnectParam);

                    /**
                     * 判断参数 PostgreSQLConnectParam 是否已赋值
                     * @return PostgreSQLConnectParam 是否已赋值
                     * 
                     */
                    bool PostgreSQLConnectParamHasBeenSet() const;

                    /**
                     * 获取<p>MariaDB配置，Type为MARIADB时必填</p>
                     * @return MariaDBConnectParam <p>MariaDB配置，Type为MARIADB时必填</p>
                     * 
                     */
                    MariaDBConnectParam GetMariaDBConnectParam() const;

                    /**
                     * 设置<p>MariaDB配置，Type为MARIADB时必填</p>
                     * @param _mariaDBConnectParam <p>MariaDB配置，Type为MARIADB时必填</p>
                     * 
                     */
                    void SetMariaDBConnectParam(const MariaDBConnectParam& _mariaDBConnectParam);

                    /**
                     * 判断参数 MariaDBConnectParam 是否已赋值
                     * @return MariaDBConnectParam 是否已赋值
                     * 
                     */
                    bool MariaDBConnectParamHasBeenSet() const;

                    /**
                     * 获取<p>SQLServer配置，Type为SQLSERVER时必填</p>
                     * @return SQLServerConnectParam <p>SQLServer配置，Type为SQLSERVER时必填</p>
                     * 
                     */
                    SQLServerConnectParam GetSQLServerConnectParam() const;

                    /**
                     * 设置<p>SQLServer配置，Type为SQLSERVER时必填</p>
                     * @param _sQLServerConnectParam <p>SQLServer配置，Type为SQLSERVER时必填</p>
                     * 
                     */
                    void SetSQLServerConnectParam(const SQLServerConnectParam& _sQLServerConnectParam);

                    /**
                     * 判断参数 SQLServerConnectParam 是否已赋值
                     * @return SQLServerConnectParam 是否已赋值
                     * 
                     */
                    bool SQLServerConnectParamHasBeenSet() const;

                    /**
                     * 获取<p>Doris 配置，Type为 DORIS 时必填</p>
                     * @return DorisConnectParam <p>Doris 配置，Type为 DORIS 时必填</p>
                     * 
                     */
                    DorisConnectParam GetDorisConnectParam() const;

                    /**
                     * 设置<p>Doris 配置，Type为 DORIS 时必填</p>
                     * @param _dorisConnectParam <p>Doris 配置，Type为 DORIS 时必填</p>
                     * 
                     */
                    void SetDorisConnectParam(const DorisConnectParam& _dorisConnectParam);

                    /**
                     * 判断参数 DorisConnectParam 是否已赋值
                     * @return DorisConnectParam 是否已赋值
                     * 
                     */
                    bool DorisConnectParamHasBeenSet() const;

                    /**
                     * 获取<p>Kafka配置，Type为 KAFKA 时必填</p>
                     * @return KafkaConnectParam <p>Kafka配置，Type为 KAFKA 时必填</p>
                     * 
                     */
                    KafkaConnectParam GetKafkaConnectParam() const;

                    /**
                     * 设置<p>Kafka配置，Type为 KAFKA 时必填</p>
                     * @param _kafkaConnectParam <p>Kafka配置，Type为 KAFKA 时必填</p>
                     * 
                     */
                    void SetKafkaConnectParam(const KafkaConnectParam& _kafkaConnectParam);

                    /**
                     * 判断参数 KafkaConnectParam 是否已赋值
                     * @return KafkaConnectParam 是否已赋值
                     * 
                     */
                    bool KafkaConnectParamHasBeenSet() const;

                    /**
                     * 获取<p>MQTT配置，Type为 MQTT 时必填</p>
                     * @return MqttConnectParam <p>MQTT配置，Type为 MQTT 时必填</p>
                     * 
                     */
                    MqttConnectParam GetMqttConnectParam() const;

                    /**
                     * 设置<p>MQTT配置，Type为 MQTT 时必填</p>
                     * @param _mqttConnectParam <p>MQTT配置，Type为 MQTT 时必填</p>
                     * 
                     */
                    void SetMqttConnectParam(const MqttConnectParam& _mqttConnectParam);

                    /**
                     * 判断参数 MqttConnectParam 是否已赋值
                     * @return MqttConnectParam 是否已赋值
                     * 
                     */
                    bool MqttConnectParamHasBeenSet() const;

                    /**
                     * 获取<p>标签列表</p>
                     * @return Tags <p>标签列表</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>标签列表</p>
                     * @param _tags <p>标签列表</p>
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * <p>连接源名称</p>
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * <p>连接源类型</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>连接源描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Dts配置，Type为DTS时必填</p>
                     */
                    DtsConnectParam m_dtsConnectParam;
                    bool m_dtsConnectParamHasBeenSet;

                    /**
                     * <p>MongoDB配置，Type为MONGODB时必填</p>
                     */
                    MongoDBConnectParam m_mongoDBConnectParam;
                    bool m_mongoDBConnectParamHasBeenSet;

                    /**
                     * <p>Es配置，Type为ES时必填</p>
                     */
                    EsConnectParam m_esConnectParam;
                    bool m_esConnectParamHasBeenSet;

                    /**
                     * <p>ClickHouse配置，Type为CLICKHOUSE时必填</p>
                     */
                    ClickHouseConnectParam m_clickHouseConnectParam;
                    bool m_clickHouseConnectParamHasBeenSet;

                    /**
                     * <p>MySQL配置，Type为MYSQL或TDSQL_C_MYSQL时必填</p>
                     */
                    MySQLConnectParam m_mySQLConnectParam;
                    bool m_mySQLConnectParamHasBeenSet;

                    /**
                     * <p>PostgreSQL配置，Type为POSTGRESQL或TDSQL_C_POSTGRESQL时必填</p>
                     */
                    PostgreSQLConnectParam m_postgreSQLConnectParam;
                    bool m_postgreSQLConnectParamHasBeenSet;

                    /**
                     * <p>MariaDB配置，Type为MARIADB时必填</p>
                     */
                    MariaDBConnectParam m_mariaDBConnectParam;
                    bool m_mariaDBConnectParamHasBeenSet;

                    /**
                     * <p>SQLServer配置，Type为SQLSERVER时必填</p>
                     */
                    SQLServerConnectParam m_sQLServerConnectParam;
                    bool m_sQLServerConnectParamHasBeenSet;

                    /**
                     * <p>Doris 配置，Type为 DORIS 时必填</p>
                     */
                    DorisConnectParam m_dorisConnectParam;
                    bool m_dorisConnectParamHasBeenSet;

                    /**
                     * <p>Kafka配置，Type为 KAFKA 时必填</p>
                     */
                    KafkaConnectParam m_kafkaConnectParam;
                    bool m_kafkaConnectParamHasBeenSet;

                    /**
                     * <p>MQTT配置，Type为 MQTT 时必填</p>
                     */
                    MqttConnectParam m_mqttConnectParam;
                    bool m_mqttConnectParamHasBeenSet;

                    /**
                     * <p>标签列表</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATECONNECTRESOURCEREQUEST_H_
