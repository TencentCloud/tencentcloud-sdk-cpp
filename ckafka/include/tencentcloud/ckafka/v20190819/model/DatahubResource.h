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
#include <tencentcloud/ckafka/v20190819/model/IcebergParam.h>


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
                     * 获取<p>资源类型  type类型如下:<br>KAFKA,<br>EB_ES,<br>EB_COS,<br>EB_CLS,<br>EB_,<br>MONGODB,<br>HTTP,<br>TDW,<br>ES,<br>CLICKHOUSE,<br>DTS,<br>CLS,<br>COS,<br>TOPIC,<br>MYSQL,<br>MQTT,<br>MYSQL_DATA,<br>DORIS,<br>POSTGRESQL,<br>TDSQL_C_POSTGRESQL,<br>TDSQL_POSTGRESQL,<br>WAREHOUSE_POSTGRESQL,<br>TDSQL_C_MYSQL,<br>MARIADB,<br>SQLSERVER,<br>CTSDB,<br>SCF</p>
                     * @return Type <p>资源类型  type类型如下:<br>KAFKA,<br>EB_ES,<br>EB_COS,<br>EB_CLS,<br>EB_,<br>MONGODB,<br>HTTP,<br>TDW,<br>ES,<br>CLICKHOUSE,<br>DTS,<br>CLS,<br>COS,<br>TOPIC,<br>MYSQL,<br>MQTT,<br>MYSQL_DATA,<br>DORIS,<br>POSTGRESQL,<br>TDSQL_C_POSTGRESQL,<br>TDSQL_POSTGRESQL,<br>WAREHOUSE_POSTGRESQL,<br>TDSQL_C_MYSQL,<br>MARIADB,<br>SQLSERVER,<br>CTSDB,<br>SCF</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>资源类型  type类型如下:<br>KAFKA,<br>EB_ES,<br>EB_COS,<br>EB_CLS,<br>EB_,<br>MONGODB,<br>HTTP,<br>TDW,<br>ES,<br>CLICKHOUSE,<br>DTS,<br>CLS,<br>COS,<br>TOPIC,<br>MYSQL,<br>MQTT,<br>MYSQL_DATA,<br>DORIS,<br>POSTGRESQL,<br>TDSQL_C_POSTGRESQL,<br>TDSQL_POSTGRESQL,<br>WAREHOUSE_POSTGRESQL,<br>TDSQL_C_MYSQL,<br>MARIADB,<br>SQLSERVER,<br>CTSDB,<br>SCF</p>
                     * @param _type <p>资源类型  type类型如下:<br>KAFKA,<br>EB_ES,<br>EB_COS,<br>EB_CLS,<br>EB_,<br>MONGODB,<br>HTTP,<br>TDW,<br>ES,<br>CLICKHOUSE,<br>DTS,<br>CLS,<br>COS,<br>TOPIC,<br>MYSQL,<br>MQTT,<br>MYSQL_DATA,<br>DORIS,<br>POSTGRESQL,<br>TDSQL_C_POSTGRESQL,<br>TDSQL_POSTGRESQL,<br>WAREHOUSE_POSTGRESQL,<br>TDSQL_C_MYSQL,<br>MARIADB,<br>SQLSERVER,<br>CTSDB,<br>SCF</p>
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
                     * 获取<p>ckafka配置，Type为KAFKA时必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KafkaParam <p>ckafka配置，Type为KAFKA时必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    KafkaParam GetKafkaParam() const;

                    /**
                     * 设置<p>ckafka配置，Type为KAFKA时必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _kafkaParam <p>ckafka配置，Type为KAFKA时必填</p>
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
                     * 获取<p>EB配置，Type为EB时必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EventBusParam <p>EB配置，Type为EB时必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    EventBusParam GetEventBusParam() const;

                    /**
                     * 设置<p>EB配置，Type为EB时必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eventBusParam <p>EB配置，Type为EB时必填</p>
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
                     * 获取<p>MongoDB配置，Type为MONGODB时必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MongoDBParam <p>MongoDB配置，Type为MONGODB时必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MongoDBParam GetMongoDBParam() const;

                    /**
                     * 设置<p>MongoDB配置，Type为MONGODB时必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mongoDBParam <p>MongoDB配置，Type为MONGODB时必填</p>
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
                     * 获取<p>Es配置，Type为ES时必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EsParam <p>Es配置，Type为ES时必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    EsParam GetEsParam() const;

                    /**
                     * 设置<p>Es配置，Type为ES时必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _esParam <p>Es配置，Type为ES时必填</p>
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
                     * 获取<p>Tdw配置，Type为TDW时必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TdwParam <p>Tdw配置，Type为TDW时必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TdwParam GetTdwParam() const;

                    /**
                     * 设置<p>Tdw配置，Type为TDW时必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tdwParam <p>Tdw配置，Type为TDW时必填</p>
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
                     * 获取<p>Dts配置，Type为DTS时必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DtsParam <p>Dts配置，Type为DTS时必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DtsParam GetDtsParam() const;

                    /**
                     * 设置<p>Dts配置，Type为DTS时必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dtsParam <p>Dts配置，Type为DTS时必填</p>
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
                     * 获取<p>ClickHouse配置，Type为CLICKHOUSE时必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClickHouseParam <p>ClickHouse配置，Type为CLICKHOUSE时必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ClickHouseParam GetClickHouseParam() const;

                    /**
                     * 设置<p>ClickHouse配置，Type为CLICKHOUSE时必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clickHouseParam <p>ClickHouse配置，Type为CLICKHOUSE时必填</p>
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
                     * 获取<p>Cls配置，Type为CLS时必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClsParam <p>Cls配置，Type为CLS时必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ClsParam GetClsParam() const;

                    /**
                     * 设置<p>Cls配置，Type为CLS时必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clsParam <p>Cls配置，Type为CLS时必填</p>
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
                     * 获取<p>Cos配置，Type为COS时必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CosParam <p>Cos配置，Type为COS时必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CosParam GetCosParam() const;

                    /**
                     * 设置<p>Cos配置，Type为COS时必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cosParam <p>Cos配置，Type为COS时必填</p>
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
                     * 获取<p>MySQL配置，Type为MYSQL时必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MySQLParam <p>MySQL配置，Type为MYSQL时必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MySQLParam GetMySQLParam() const;

                    /**
                     * 设置<p>MySQL配置，Type为MYSQL时必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mySQLParam <p>MySQL配置，Type为MYSQL时必填</p>
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
                     * 获取<p>PostgreSQL配置，Type为POSTGRESQL或TDSQL_C_POSTGRESQL时必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PostgreSQLParam <p>PostgreSQL配置，Type为POSTGRESQL或TDSQL_C_POSTGRESQL时必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    PostgreSQLParam GetPostgreSQLParam() const;

                    /**
                     * 设置<p>PostgreSQL配置，Type为POSTGRESQL或TDSQL_C_POSTGRESQL时必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _postgreSQLParam <p>PostgreSQL配置，Type为POSTGRESQL或TDSQL_C_POSTGRESQL时必填</p>
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
                     * 获取<p>Topic配置，Type为Topic时必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TopicParam <p>Topic配置，Type为Topic时必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TopicParam GetTopicParam() const;

                    /**
                     * 设置<p>Topic配置，Type为Topic时必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _topicParam <p>Topic配置，Type为Topic时必填</p>
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
                     * 获取<p>MariaDB配置，Type为MARIADB时必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MariaDBParam <p>MariaDB配置，Type为MARIADB时必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MariaDBParam GetMariaDBParam() const;

                    /**
                     * 设置<p>MariaDB配置，Type为MARIADB时必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mariaDBParam <p>MariaDB配置，Type为MARIADB时必填</p>
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
                     * 获取<p>SQLServer配置，Type为SQLSERVER时必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SQLServerParam <p>SQLServer配置，Type为SQLSERVER时必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SQLServerParam GetSQLServerParam() const;

                    /**
                     * 设置<p>SQLServer配置，Type为SQLSERVER时必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sQLServerParam <p>SQLServer配置，Type为SQLSERVER时必填</p>
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
                     * 获取<p>Ctsdb配置，Type为CTSDB时必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CtsdbParam <p>Ctsdb配置，Type为CTSDB时必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CtsdbParam GetCtsdbParam() const;

                    /**
                     * 设置<p>Ctsdb配置，Type为CTSDB时必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ctsdbParam <p>Ctsdb配置，Type为CTSDB时必填</p>
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
                     * 获取<p>Scf配置，Type为SCF时必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScfParam <p>Scf配置，Type为SCF时必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ScfParam GetScfParam() const;

                    /**
                     * 设置<p>Scf配置，Type为SCF时必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scfParam <p>Scf配置，Type为SCF时必填</p>
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
                     * 获取<p>MQTT配置，Type为 MQTT 时必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MqttParam <p>MQTT配置，Type为 MQTT 时必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MqttParam GetMqttParam() const;

                    /**
                     * 设置<p>MQTT配置，Type为 MQTT 时必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mqttParam <p>MQTT配置，Type为 MQTT 时必填</p>
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

                    /**
                     * 获取<p>IceBerg配置</p>
                     * @return IcebergParam <p>IceBerg配置</p>
                     * 
                     */
                    IcebergParam GetIcebergParam() const;

                    /**
                     * 设置<p>IceBerg配置</p>
                     * @param _icebergParam <p>IceBerg配置</p>
                     * 
                     */
                    void SetIcebergParam(const IcebergParam& _icebergParam);

                    /**
                     * 判断参数 IcebergParam 是否已赋值
                     * @return IcebergParam 是否已赋值
                     * 
                     */
                    bool IcebergParamHasBeenSet() const;

                private:

                    /**
                     * <p>资源类型  type类型如下:<br>KAFKA,<br>EB_ES,<br>EB_COS,<br>EB_CLS,<br>EB_,<br>MONGODB,<br>HTTP,<br>TDW,<br>ES,<br>CLICKHOUSE,<br>DTS,<br>CLS,<br>COS,<br>TOPIC,<br>MYSQL,<br>MQTT,<br>MYSQL_DATA,<br>DORIS,<br>POSTGRESQL,<br>TDSQL_C_POSTGRESQL,<br>TDSQL_POSTGRESQL,<br>WAREHOUSE_POSTGRESQL,<br>TDSQL_C_MYSQL,<br>MARIADB,<br>SQLSERVER,<br>CTSDB,<br>SCF</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>ckafka配置，Type为KAFKA时必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    KafkaParam m_kafkaParam;
                    bool m_kafkaParamHasBeenSet;

                    /**
                     * <p>EB配置，Type为EB时必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EventBusParam m_eventBusParam;
                    bool m_eventBusParamHasBeenSet;

                    /**
                     * <p>MongoDB配置，Type为MONGODB时必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MongoDBParam m_mongoDBParam;
                    bool m_mongoDBParamHasBeenSet;

                    /**
                     * <p>Es配置，Type为ES时必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EsParam m_esParam;
                    bool m_esParamHasBeenSet;

                    /**
                     * <p>Tdw配置，Type为TDW时必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TdwParam m_tdwParam;
                    bool m_tdwParamHasBeenSet;

                    /**
                     * <p>Dts配置，Type为DTS时必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DtsParam m_dtsParam;
                    bool m_dtsParamHasBeenSet;

                    /**
                     * <p>ClickHouse配置，Type为CLICKHOUSE时必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ClickHouseParam m_clickHouseParam;
                    bool m_clickHouseParamHasBeenSet;

                    /**
                     * <p>Cls配置，Type为CLS时必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ClsParam m_clsParam;
                    bool m_clsParamHasBeenSet;

                    /**
                     * <p>Cos配置，Type为COS时必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CosParam m_cosParam;
                    bool m_cosParamHasBeenSet;

                    /**
                     * <p>MySQL配置，Type为MYSQL时必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MySQLParam m_mySQLParam;
                    bool m_mySQLParamHasBeenSet;

                    /**
                     * <p>PostgreSQL配置，Type为POSTGRESQL或TDSQL_C_POSTGRESQL时必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PostgreSQLParam m_postgreSQLParam;
                    bool m_postgreSQLParamHasBeenSet;

                    /**
                     * <p>Topic配置，Type为Topic时必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TopicParam m_topicParam;
                    bool m_topicParamHasBeenSet;

                    /**
                     * <p>MariaDB配置，Type为MARIADB时必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MariaDBParam m_mariaDBParam;
                    bool m_mariaDBParamHasBeenSet;

                    /**
                     * <p>SQLServer配置，Type为SQLSERVER时必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SQLServerParam m_sQLServerParam;
                    bool m_sQLServerParamHasBeenSet;

                    /**
                     * <p>Ctsdb配置，Type为CTSDB时必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CtsdbParam m_ctsdbParam;
                    bool m_ctsdbParamHasBeenSet;

                    /**
                     * <p>Scf配置，Type为SCF时必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ScfParam m_scfParam;
                    bool m_scfParamHasBeenSet;

                    /**
                     * <p>MQTT配置，Type为 MQTT 时必填</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MqttParam m_mqttParam;
                    bool m_mqttParamHasBeenSet;

                    /**
                     * <p>IceBerg配置</p>
                     */
                    IcebergParam m_icebergParam;
                    bool m_icebergParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DATAHUBRESOURCE_H_
