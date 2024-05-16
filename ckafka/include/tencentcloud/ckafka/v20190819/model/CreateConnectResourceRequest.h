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
                     * 获取连接源名称
                     * @return ResourceName 连接源名称
                     * 
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置连接源名称
                     * @param _resourceName 连接源名称
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
                     * 获取连接源类型
                     * @return Type 连接源类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置连接源类型
                     * @param _type 连接源类型
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
                     * 获取连接源描述
                     * @return Description 连接源描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置连接源描述
                     * @param _description 连接源描述
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
                     * 获取Dts配置，Type为DTS时必填
                     * @return DtsConnectParam Dts配置，Type为DTS时必填
                     * 
                     */
                    DtsConnectParam GetDtsConnectParam() const;

                    /**
                     * 设置Dts配置，Type为DTS时必填
                     * @param _dtsConnectParam Dts配置，Type为DTS时必填
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
                     * 获取MongoDB配置，Type为MONGODB时必填
                     * @return MongoDBConnectParam MongoDB配置，Type为MONGODB时必填
                     * 
                     */
                    MongoDBConnectParam GetMongoDBConnectParam() const;

                    /**
                     * 设置MongoDB配置，Type为MONGODB时必填
                     * @param _mongoDBConnectParam MongoDB配置，Type为MONGODB时必填
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
                     * 获取Es配置，Type为ES时必填
                     * @return EsConnectParam Es配置，Type为ES时必填
                     * 
                     */
                    EsConnectParam GetEsConnectParam() const;

                    /**
                     * 设置Es配置，Type为ES时必填
                     * @param _esConnectParam Es配置，Type为ES时必填
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
                     * 获取ClickHouse配置，Type为CLICKHOUSE时必填
                     * @return ClickHouseConnectParam ClickHouse配置，Type为CLICKHOUSE时必填
                     * 
                     */
                    ClickHouseConnectParam GetClickHouseConnectParam() const;

                    /**
                     * 设置ClickHouse配置，Type为CLICKHOUSE时必填
                     * @param _clickHouseConnectParam ClickHouse配置，Type为CLICKHOUSE时必填
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
                     * 获取MySQL配置，Type为MYSQL或TDSQL_C_MYSQL时必填
                     * @return MySQLConnectParam MySQL配置，Type为MYSQL或TDSQL_C_MYSQL时必填
                     * 
                     */
                    MySQLConnectParam GetMySQLConnectParam() const;

                    /**
                     * 设置MySQL配置，Type为MYSQL或TDSQL_C_MYSQL时必填
                     * @param _mySQLConnectParam MySQL配置，Type为MYSQL或TDSQL_C_MYSQL时必填
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
                     * 获取PostgreSQL配置，Type为POSTGRESQL或TDSQL_C_POSTGRESQL时必填
                     * @return PostgreSQLConnectParam PostgreSQL配置，Type为POSTGRESQL或TDSQL_C_POSTGRESQL时必填
                     * 
                     */
                    PostgreSQLConnectParam GetPostgreSQLConnectParam() const;

                    /**
                     * 设置PostgreSQL配置，Type为POSTGRESQL或TDSQL_C_POSTGRESQL时必填
                     * @param _postgreSQLConnectParam PostgreSQL配置，Type为POSTGRESQL或TDSQL_C_POSTGRESQL时必填
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
                     * 获取MariaDB配置，Type为MARIADB时必填
                     * @return MariaDBConnectParam MariaDB配置，Type为MARIADB时必填
                     * 
                     */
                    MariaDBConnectParam GetMariaDBConnectParam() const;

                    /**
                     * 设置MariaDB配置，Type为MARIADB时必填
                     * @param _mariaDBConnectParam MariaDB配置，Type为MARIADB时必填
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
                     * 获取SQLServer配置，Type为SQLSERVER时必填
                     * @return SQLServerConnectParam SQLServer配置，Type为SQLSERVER时必填
                     * 
                     */
                    SQLServerConnectParam GetSQLServerConnectParam() const;

                    /**
                     * 设置SQLServer配置，Type为SQLSERVER时必填
                     * @param _sQLServerConnectParam SQLServer配置，Type为SQLSERVER时必填
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
                     * 获取Doris 配置，Type为 DORIS 时必填
                     * @return DorisConnectParam Doris 配置，Type为 DORIS 时必填
                     * 
                     */
                    DorisConnectParam GetDorisConnectParam() const;

                    /**
                     * 设置Doris 配置，Type为 DORIS 时必填
                     * @param _dorisConnectParam Doris 配置，Type为 DORIS 时必填
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
                     * 获取Kafka配置，Type为 KAFKA 时必填
                     * @return KafkaConnectParam Kafka配置，Type为 KAFKA 时必填
                     * 
                     */
                    KafkaConnectParam GetKafkaConnectParam() const;

                    /**
                     * 设置Kafka配置，Type为 KAFKA 时必填
                     * @param _kafkaConnectParam Kafka配置，Type为 KAFKA 时必填
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
                     * 获取MQTT配置，Type为 MQTT 时必填
                     * @return MqttConnectParam MQTT配置，Type为 MQTT 时必填
                     * 
                     */
                    MqttConnectParam GetMqttConnectParam() const;

                    /**
                     * 设置MQTT配置，Type为 MQTT 时必填
                     * @param _mqttConnectParam MQTT配置，Type为 MQTT 时必填
                     * 
                     */
                    void SetMqttConnectParam(const MqttConnectParam& _mqttConnectParam);

                    /**
                     * 判断参数 MqttConnectParam 是否已赋值
                     * @return MqttConnectParam 是否已赋值
                     * 
                     */
                    bool MqttConnectParamHasBeenSet() const;

                private:

                    /**
                     * 连接源名称
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * 连接源类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 连接源描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Dts配置，Type为DTS时必填
                     */
                    DtsConnectParam m_dtsConnectParam;
                    bool m_dtsConnectParamHasBeenSet;

                    /**
                     * MongoDB配置，Type为MONGODB时必填
                     */
                    MongoDBConnectParam m_mongoDBConnectParam;
                    bool m_mongoDBConnectParamHasBeenSet;

                    /**
                     * Es配置，Type为ES时必填
                     */
                    EsConnectParam m_esConnectParam;
                    bool m_esConnectParamHasBeenSet;

                    /**
                     * ClickHouse配置，Type为CLICKHOUSE时必填
                     */
                    ClickHouseConnectParam m_clickHouseConnectParam;
                    bool m_clickHouseConnectParamHasBeenSet;

                    /**
                     * MySQL配置，Type为MYSQL或TDSQL_C_MYSQL时必填
                     */
                    MySQLConnectParam m_mySQLConnectParam;
                    bool m_mySQLConnectParamHasBeenSet;

                    /**
                     * PostgreSQL配置，Type为POSTGRESQL或TDSQL_C_POSTGRESQL时必填
                     */
                    PostgreSQLConnectParam m_postgreSQLConnectParam;
                    bool m_postgreSQLConnectParamHasBeenSet;

                    /**
                     * MariaDB配置，Type为MARIADB时必填
                     */
                    MariaDBConnectParam m_mariaDBConnectParam;
                    bool m_mariaDBConnectParamHasBeenSet;

                    /**
                     * SQLServer配置，Type为SQLSERVER时必填
                     */
                    SQLServerConnectParam m_sQLServerConnectParam;
                    bool m_sQLServerConnectParamHasBeenSet;

                    /**
                     * Doris 配置，Type为 DORIS 时必填
                     */
                    DorisConnectParam m_dorisConnectParam;
                    bool m_dorisConnectParamHasBeenSet;

                    /**
                     * Kafka配置，Type为 KAFKA 时必填
                     */
                    KafkaConnectParam m_kafkaConnectParam;
                    bool m_kafkaConnectParamHasBeenSet;

                    /**
                     * MQTT配置，Type为 MQTT 时必填
                     */
                    MqttConnectParam m_mqttConnectParam;
                    bool m_mqttConnectParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATECONNECTRESOURCEREQUEST_H_
