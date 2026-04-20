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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_MODIFYCONNECTRESOURCEREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_MODIFYCONNECTRESOURCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/DtsModifyConnectParam.h>
#include <tencentcloud/ckafka/v20190819/model/MongoDBModifyConnectParam.h>
#include <tencentcloud/ckafka/v20190819/model/EsModifyConnectParam.h>
#include <tencentcloud/ckafka/v20190819/model/ClickHouseModifyConnectParam.h>
#include <tencentcloud/ckafka/v20190819/model/MySQLModifyConnectParam.h>
#include <tencentcloud/ckafka/v20190819/model/PostgreSQLModifyConnectParam.h>
#include <tencentcloud/ckafka/v20190819/model/MariaDBModifyConnectParam.h>
#include <tencentcloud/ckafka/v20190819/model/SQLServerModifyConnectParam.h>
#include <tencentcloud/ckafka/v20190819/model/CtsdbModifyConnectParam.h>
#include <tencentcloud/ckafka/v20190819/model/DorisModifyConnectParam.h>
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
                * ModifyConnectResource请求参数结构体
                */
                class ModifyConnectResourceRequest : public AbstractModel
                {
                public:
                    ModifyConnectResourceRequest();
                    ~ModifyConnectResourceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>连接源的Id</p>
                     * @return ResourceId <p>连接源的Id</p>
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置<p>连接源的Id</p>
                     * @param _resourceId <p>连接源的Id</p>
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取<p>连接源名称，为空时不修改</p>
                     * @return ResourceName <p>连接源名称，为空时不修改</p>
                     * 
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置<p>连接源名称，为空时不修改</p>
                     * @param _resourceName <p>连接源名称，为空时不修改</p>
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
                     * 获取<p>连接源描述，为空时不修改</p>
                     * @return Description <p>连接源描述，为空时不修改</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>连接源描述，为空时不修改</p>
                     * @param _description <p>连接源描述，为空时不修改</p>
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
                     * 获取<p>连接源类型，修改数据源参数时，需要与原Type相同，否则编辑数据源无效</p>
                     * @return Type <p>连接源类型，修改数据源参数时，需要与原Type相同，否则编辑数据源无效</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>连接源类型，修改数据源参数时，需要与原Type相同，否则编辑数据源无效</p>
                     * @param _type <p>连接源类型，修改数据源参数时，需要与原Type相同，否则编辑数据源无效</p>
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
                     * 获取<p>Dts配置，Type为DTS时必填</p>
                     * @return DtsConnectParam <p>Dts配置，Type为DTS时必填</p>
                     * 
                     */
                    DtsModifyConnectParam GetDtsConnectParam() const;

                    /**
                     * 设置<p>Dts配置，Type为DTS时必填</p>
                     * @param _dtsConnectParam <p>Dts配置，Type为DTS时必填</p>
                     * 
                     */
                    void SetDtsConnectParam(const DtsModifyConnectParam& _dtsConnectParam);

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
                    MongoDBModifyConnectParam GetMongoDBConnectParam() const;

                    /**
                     * 设置<p>MongoDB配置，Type为MONGODB时必填</p>
                     * @param _mongoDBConnectParam <p>MongoDB配置，Type为MONGODB时必填</p>
                     * 
                     */
                    void SetMongoDBConnectParam(const MongoDBModifyConnectParam& _mongoDBConnectParam);

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
                    EsModifyConnectParam GetEsConnectParam() const;

                    /**
                     * 设置<p>Es配置，Type为ES时必填</p>
                     * @param _esConnectParam <p>Es配置，Type为ES时必填</p>
                     * 
                     */
                    void SetEsConnectParam(const EsModifyConnectParam& _esConnectParam);

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
                    ClickHouseModifyConnectParam GetClickHouseConnectParam() const;

                    /**
                     * 设置<p>ClickHouse配置，Type为CLICKHOUSE时必填</p>
                     * @param _clickHouseConnectParam <p>ClickHouse配置，Type为CLICKHOUSE时必填</p>
                     * 
                     */
                    void SetClickHouseConnectParam(const ClickHouseModifyConnectParam& _clickHouseConnectParam);

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
                    MySQLModifyConnectParam GetMySQLConnectParam() const;

                    /**
                     * 设置<p>MySQL配置，Type为MYSQL或TDSQL_C_MYSQL时必填</p>
                     * @param _mySQLConnectParam <p>MySQL配置，Type为MYSQL或TDSQL_C_MYSQL时必填</p>
                     * 
                     */
                    void SetMySQLConnectParam(const MySQLModifyConnectParam& _mySQLConnectParam);

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
                    PostgreSQLModifyConnectParam GetPostgreSQLConnectParam() const;

                    /**
                     * 设置<p>PostgreSQL配置，Type为POSTGRESQL或TDSQL_C_POSTGRESQL时必填</p>
                     * @param _postgreSQLConnectParam <p>PostgreSQL配置，Type为POSTGRESQL或TDSQL_C_POSTGRESQL时必填</p>
                     * 
                     */
                    void SetPostgreSQLConnectParam(const PostgreSQLModifyConnectParam& _postgreSQLConnectParam);

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
                    MariaDBModifyConnectParam GetMariaDBConnectParam() const;

                    /**
                     * 设置<p>MariaDB配置，Type为MARIADB时必填</p>
                     * @param _mariaDBConnectParam <p>MariaDB配置，Type为MARIADB时必填</p>
                     * 
                     */
                    void SetMariaDBConnectParam(const MariaDBModifyConnectParam& _mariaDBConnectParam);

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
                    SQLServerModifyConnectParam GetSQLServerConnectParam() const;

                    /**
                     * 设置<p>SQLServer配置，Type为SQLSERVER时必填</p>
                     * @param _sQLServerConnectParam <p>SQLServer配置，Type为SQLSERVER时必填</p>
                     * 
                     */
                    void SetSQLServerConnectParam(const SQLServerModifyConnectParam& _sQLServerConnectParam);

                    /**
                     * 判断参数 SQLServerConnectParam 是否已赋值
                     * @return SQLServerConnectParam 是否已赋值
                     * 
                     */
                    bool SQLServerConnectParamHasBeenSet() const;

                    /**
                     * 获取<p>Ctsdb配置，Type为CTSDB</p>
                     * @return CtsdbConnectParam <p>Ctsdb配置，Type为CTSDB</p>
                     * 
                     */
                    CtsdbModifyConnectParam GetCtsdbConnectParam() const;

                    /**
                     * 设置<p>Ctsdb配置，Type为CTSDB</p>
                     * @param _ctsdbConnectParam <p>Ctsdb配置，Type为CTSDB</p>
                     * 
                     */
                    void SetCtsdbConnectParam(const CtsdbModifyConnectParam& _ctsdbConnectParam);

                    /**
                     * 判断参数 CtsdbConnectParam 是否已赋值
                     * @return CtsdbConnectParam 是否已赋值
                     * 
                     */
                    bool CtsdbConnectParamHasBeenSet() const;

                    /**
                     * 获取<p>Doris配置，Type为DORIS</p>
                     * @return DorisConnectParam <p>Doris配置，Type为DORIS</p>
                     * 
                     */
                    DorisModifyConnectParam GetDorisConnectParam() const;

                    /**
                     * 设置<p>Doris配置，Type为DORIS</p>
                     * @param _dorisConnectParam <p>Doris配置，Type为DORIS</p>
                     * 
                     */
                    void SetDorisConnectParam(const DorisModifyConnectParam& _dorisConnectParam);

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

                private:

                    /**
                     * <p>连接源的Id</p>
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * <p>连接源名称，为空时不修改</p>
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * <p>连接源描述，为空时不修改</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>连接源类型，修改数据源参数时，需要与原Type相同，否则编辑数据源无效</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Dts配置，Type为DTS时必填</p>
                     */
                    DtsModifyConnectParam m_dtsConnectParam;
                    bool m_dtsConnectParamHasBeenSet;

                    /**
                     * <p>MongoDB配置，Type为MONGODB时必填</p>
                     */
                    MongoDBModifyConnectParam m_mongoDBConnectParam;
                    bool m_mongoDBConnectParamHasBeenSet;

                    /**
                     * <p>Es配置，Type为ES时必填</p>
                     */
                    EsModifyConnectParam m_esConnectParam;
                    bool m_esConnectParamHasBeenSet;

                    /**
                     * <p>ClickHouse配置，Type为CLICKHOUSE时必填</p>
                     */
                    ClickHouseModifyConnectParam m_clickHouseConnectParam;
                    bool m_clickHouseConnectParamHasBeenSet;

                    /**
                     * <p>MySQL配置，Type为MYSQL或TDSQL_C_MYSQL时必填</p>
                     */
                    MySQLModifyConnectParam m_mySQLConnectParam;
                    bool m_mySQLConnectParamHasBeenSet;

                    /**
                     * <p>PostgreSQL配置，Type为POSTGRESQL或TDSQL_C_POSTGRESQL时必填</p>
                     */
                    PostgreSQLModifyConnectParam m_postgreSQLConnectParam;
                    bool m_postgreSQLConnectParamHasBeenSet;

                    /**
                     * <p>MariaDB配置，Type为MARIADB时必填</p>
                     */
                    MariaDBModifyConnectParam m_mariaDBConnectParam;
                    bool m_mariaDBConnectParamHasBeenSet;

                    /**
                     * <p>SQLServer配置，Type为SQLSERVER时必填</p>
                     */
                    SQLServerModifyConnectParam m_sQLServerConnectParam;
                    bool m_sQLServerConnectParamHasBeenSet;

                    /**
                     * <p>Ctsdb配置，Type为CTSDB</p>
                     */
                    CtsdbModifyConnectParam m_ctsdbConnectParam;
                    bool m_ctsdbConnectParamHasBeenSet;

                    /**
                     * <p>Doris配置，Type为DORIS</p>
                     */
                    DorisModifyConnectParam m_dorisConnectParam;
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_MODIFYCONNECTRESOURCEREQUEST_H_
