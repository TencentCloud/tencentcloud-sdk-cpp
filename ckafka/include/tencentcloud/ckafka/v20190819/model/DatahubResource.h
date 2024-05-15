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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_DATAHUBRESOURCE_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_DATAHUBRESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/KafkaParam.h>
#include <tencentcloud/ckafka/v20190819/model/EventBusParam.h>
#include <tencentcloud/ckafka/v20190819/model/MongoDBParam.h>
#include <tencentcloud/ckafka/v20190819/model/EsParam.h>
#include <tencentcloud/ckafka/v20190819/model/TdwParam.h>
#include <tencentcloud/ckafka/v20190819/model/DtsParam.h>
#include <tencentcloud/ckafka/v20190819/model/ClickHouseParam.h>
#include <tencentcloud/ckafka/v20190819/model/ClsParam.h>
#include <tencentcloud/ckafka/v20190819/model/CosParam.h>
#include <tencentcloud/ckafka/v20190819/model/MySQLParam.h>
#include <tencentcloud/ckafka/v20190819/model/PostgreSQLParam.h>
#include <tencentcloud/ckafka/v20190819/model/TopicParam.h>
#include <tencentcloud/ckafka/v20190819/model/MariaDBParam.h>
#include <tencentcloud/ckafka/v20190819/model/SQLServerParam.h>
#include <tencentcloud/ckafka/v20190819/model/CtsdbParam.h>
#include <tencentcloud/ckafka/v20190819/model/ScfParam.h>
#include <tencentcloud/ckafka/v20190819/model/MqttParam.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * Datahub资源配置
                */
                class DatahubResource : public AbstractModel
                {
                public:
                    DatahubResource();
                    ~DatahubResource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源类型
                     * @return Type 资源类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置资源类型
                     * @param _type 资源类型
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
                     * 获取ckafka配置，Type为KAFKA时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KafkaParam ckafka配置，Type为KAFKA时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    KafkaParam GetKafkaParam() const;

                    /**
                     * 设置ckafka配置，Type为KAFKA时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _kafkaParam ckafka配置，Type为KAFKA时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKafkaParam(const KafkaParam& _kafkaParam);

                    /**
                     * 判断参数 KafkaParam 是否已赋值
                     * @return KafkaParam 是否已赋值
                     * 
                     */
                    bool KafkaParamHasBeenSet() const;

                    /**
                     * 获取EB配置，Type为EB时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EventBusParam EB配置，Type为EB时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    EventBusParam GetEventBusParam() const;

                    /**
                     * 设置EB配置，Type为EB时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eventBusParam EB配置，Type为EB时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEventBusParam(const EventBusParam& _eventBusParam);

                    /**
                     * 判断参数 EventBusParam 是否已赋值
                     * @return EventBusParam 是否已赋值
                     * 
                     */
                    bool EventBusParamHasBeenSet() const;

                    /**
                     * 获取MongoDB配置，Type为MONGODB时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MongoDBParam MongoDB配置，Type为MONGODB时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MongoDBParam GetMongoDBParam() const;

                    /**
                     * 设置MongoDB配置，Type为MONGODB时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mongoDBParam MongoDB配置，Type为MONGODB时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMongoDBParam(const MongoDBParam& _mongoDBParam);

                    /**
                     * 判断参数 MongoDBParam 是否已赋值
                     * @return MongoDBParam 是否已赋值
                     * 
                     */
                    bool MongoDBParamHasBeenSet() const;

                    /**
                     * 获取Es配置，Type为ES时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EsParam Es配置，Type为ES时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    EsParam GetEsParam() const;

                    /**
                     * 设置Es配置，Type为ES时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _esParam Es配置，Type为ES时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEsParam(const EsParam& _esParam);

                    /**
                     * 判断参数 EsParam 是否已赋值
                     * @return EsParam 是否已赋值
                     * 
                     */
                    bool EsParamHasBeenSet() const;

                    /**
                     * 获取Tdw配置，Type为TDW时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TdwParam Tdw配置，Type为TDW时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TdwParam GetTdwParam() const;

                    /**
                     * 设置Tdw配置，Type为TDW时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tdwParam Tdw配置，Type为TDW时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTdwParam(const TdwParam& _tdwParam);

                    /**
                     * 判断参数 TdwParam 是否已赋值
                     * @return TdwParam 是否已赋值
                     * 
                     */
                    bool TdwParamHasBeenSet() const;

                    /**
                     * 获取Dts配置，Type为DTS时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DtsParam Dts配置，Type为DTS时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DtsParam GetDtsParam() const;

                    /**
                     * 设置Dts配置，Type为DTS时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dtsParam Dts配置，Type为DTS时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDtsParam(const DtsParam& _dtsParam);

                    /**
                     * 判断参数 DtsParam 是否已赋值
                     * @return DtsParam 是否已赋值
                     * 
                     */
                    bool DtsParamHasBeenSet() const;

                    /**
                     * 获取ClickHouse配置，Type为CLICKHOUSE时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClickHouseParam ClickHouse配置，Type为CLICKHOUSE时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ClickHouseParam GetClickHouseParam() const;

                    /**
                     * 设置ClickHouse配置，Type为CLICKHOUSE时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clickHouseParam ClickHouse配置，Type为CLICKHOUSE时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClickHouseParam(const ClickHouseParam& _clickHouseParam);

                    /**
                     * 判断参数 ClickHouseParam 是否已赋值
                     * @return ClickHouseParam 是否已赋值
                     * 
                     */
                    bool ClickHouseParamHasBeenSet() const;

                    /**
                     * 获取Cls配置，Type为CLS时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClsParam Cls配置，Type为CLS时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ClsParam GetClsParam() const;

                    /**
                     * 设置Cls配置，Type为CLS时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clsParam Cls配置，Type为CLS时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClsParam(const ClsParam& _clsParam);

                    /**
                     * 判断参数 ClsParam 是否已赋值
                     * @return ClsParam 是否已赋值
                     * 
                     */
                    bool ClsParamHasBeenSet() const;

                    /**
                     * 获取Cos配置，Type为COS时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CosParam Cos配置，Type为COS时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CosParam GetCosParam() const;

                    /**
                     * 设置Cos配置，Type为COS时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cosParam Cos配置，Type为COS时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCosParam(const CosParam& _cosParam);

                    /**
                     * 判断参数 CosParam 是否已赋值
                     * @return CosParam 是否已赋值
                     * 
                     */
                    bool CosParamHasBeenSet() const;

                    /**
                     * 获取MySQL配置，Type为MYSQL时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MySQLParam MySQL配置，Type为MYSQL时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MySQLParam GetMySQLParam() const;

                    /**
                     * 设置MySQL配置，Type为MYSQL时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mySQLParam MySQL配置，Type为MYSQL时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMySQLParam(const MySQLParam& _mySQLParam);

                    /**
                     * 判断参数 MySQLParam 是否已赋值
                     * @return MySQLParam 是否已赋值
                     * 
                     */
                    bool MySQLParamHasBeenSet() const;

                    /**
                     * 获取PostgreSQL配置，Type为POSTGRESQL或TDSQL_C_POSTGRESQL时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PostgreSQLParam PostgreSQL配置，Type为POSTGRESQL或TDSQL_C_POSTGRESQL时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    PostgreSQLParam GetPostgreSQLParam() const;

                    /**
                     * 设置PostgreSQL配置，Type为POSTGRESQL或TDSQL_C_POSTGRESQL时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _postgreSQLParam PostgreSQL配置，Type为POSTGRESQL或TDSQL_C_POSTGRESQL时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPostgreSQLParam(const PostgreSQLParam& _postgreSQLParam);

                    /**
                     * 判断参数 PostgreSQLParam 是否已赋值
                     * @return PostgreSQLParam 是否已赋值
                     * 
                     */
                    bool PostgreSQLParamHasBeenSet() const;

                    /**
                     * 获取Topic配置，Type为Topic时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TopicParam Topic配置，Type为Topic时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TopicParam GetTopicParam() const;

                    /**
                     * 设置Topic配置，Type为Topic时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _topicParam Topic配置，Type为Topic时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTopicParam(const TopicParam& _topicParam);

                    /**
                     * 判断参数 TopicParam 是否已赋值
                     * @return TopicParam 是否已赋值
                     * 
                     */
                    bool TopicParamHasBeenSet() const;

                    /**
                     * 获取MariaDB配置，Type为MARIADB时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MariaDBParam MariaDB配置，Type为MARIADB时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MariaDBParam GetMariaDBParam() const;

                    /**
                     * 设置MariaDB配置，Type为MARIADB时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mariaDBParam MariaDB配置，Type为MARIADB时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMariaDBParam(const MariaDBParam& _mariaDBParam);

                    /**
                     * 判断参数 MariaDBParam 是否已赋值
                     * @return MariaDBParam 是否已赋值
                     * 
                     */
                    bool MariaDBParamHasBeenSet() const;

                    /**
                     * 获取SQLServer配置，Type为SQLSERVER时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SQLServerParam SQLServer配置，Type为SQLSERVER时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SQLServerParam GetSQLServerParam() const;

                    /**
                     * 设置SQLServer配置，Type为SQLSERVER时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sQLServerParam SQLServer配置，Type为SQLSERVER时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSQLServerParam(const SQLServerParam& _sQLServerParam);

                    /**
                     * 判断参数 SQLServerParam 是否已赋值
                     * @return SQLServerParam 是否已赋值
                     * 
                     */
                    bool SQLServerParamHasBeenSet() const;

                    /**
                     * 获取Ctsdb配置，Type为CTSDB时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CtsdbParam Ctsdb配置，Type为CTSDB时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CtsdbParam GetCtsdbParam() const;

                    /**
                     * 设置Ctsdb配置，Type为CTSDB时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ctsdbParam Ctsdb配置，Type为CTSDB时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCtsdbParam(const CtsdbParam& _ctsdbParam);

                    /**
                     * 判断参数 CtsdbParam 是否已赋值
                     * @return CtsdbParam 是否已赋值
                     * 
                     */
                    bool CtsdbParamHasBeenSet() const;

                    /**
                     * 获取Scf配置，Type为SCF时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScfParam Scf配置，Type为SCF时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ScfParam GetScfParam() const;

                    /**
                     * 设置Scf配置，Type为SCF时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scfParam Scf配置，Type为SCF时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScfParam(const ScfParam& _scfParam);

                    /**
                     * 判断参数 ScfParam 是否已赋值
                     * @return ScfParam 是否已赋值
                     * 
                     */
                    bool ScfParamHasBeenSet() const;

                    /**
                     * 获取MQTT配置，Type为 MQTT 时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MqttParam MQTT配置，Type为 MQTT 时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MqttParam GetMqttParam() const;

                    /**
                     * 设置MQTT配置，Type为 MQTT 时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mqttParam MQTT配置，Type为 MQTT 时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMqttParam(const MqttParam& _mqttParam);

                    /**
                     * 判断参数 MqttParam 是否已赋值
                     * @return MqttParam 是否已赋值
                     * 
                     */
                    bool MqttParamHasBeenSet() const;

                private:

                    /**
                     * 资源类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * ckafka配置，Type为KAFKA时必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    KafkaParam m_kafkaParam;
                    bool m_kafkaParamHasBeenSet;

                    /**
                     * EB配置，Type为EB时必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EventBusParam m_eventBusParam;
                    bool m_eventBusParamHasBeenSet;

                    /**
                     * MongoDB配置，Type为MONGODB时必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MongoDBParam m_mongoDBParam;
                    bool m_mongoDBParamHasBeenSet;

                    /**
                     * Es配置，Type为ES时必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EsParam m_esParam;
                    bool m_esParamHasBeenSet;

                    /**
                     * Tdw配置，Type为TDW时必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TdwParam m_tdwParam;
                    bool m_tdwParamHasBeenSet;

                    /**
                     * Dts配置，Type为DTS时必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DtsParam m_dtsParam;
                    bool m_dtsParamHasBeenSet;

                    /**
                     * ClickHouse配置，Type为CLICKHOUSE时必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ClickHouseParam m_clickHouseParam;
                    bool m_clickHouseParamHasBeenSet;

                    /**
                     * Cls配置，Type为CLS时必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ClsParam m_clsParam;
                    bool m_clsParamHasBeenSet;

                    /**
                     * Cos配置，Type为COS时必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CosParam m_cosParam;
                    bool m_cosParamHasBeenSet;

                    /**
                     * MySQL配置，Type为MYSQL时必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MySQLParam m_mySQLParam;
                    bool m_mySQLParamHasBeenSet;

                    /**
                     * PostgreSQL配置，Type为POSTGRESQL或TDSQL_C_POSTGRESQL时必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PostgreSQLParam m_postgreSQLParam;
                    bool m_postgreSQLParamHasBeenSet;

                    /**
                     * Topic配置，Type为Topic时必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TopicParam m_topicParam;
                    bool m_topicParamHasBeenSet;

                    /**
                     * MariaDB配置，Type为MARIADB时必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MariaDBParam m_mariaDBParam;
                    bool m_mariaDBParamHasBeenSet;

                    /**
                     * SQLServer配置，Type为SQLSERVER时必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SQLServerParam m_sQLServerParam;
                    bool m_sQLServerParamHasBeenSet;

                    /**
                     * Ctsdb配置，Type为CTSDB时必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CtsdbParam m_ctsdbParam;
                    bool m_ctsdbParamHasBeenSet;

                    /**
                     * Scf配置，Type为SCF时必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ScfParam m_scfParam;
                    bool m_scfParamHasBeenSet;

                    /**
                     * MQTT配置，Type为 MQTT 时必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MqttParam m_mqttParam;
                    bool m_mqttParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DATAHUBRESOURCE_H_
