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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DATASOURCECONNECTIONCONFIG_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DATASOURCECONNECTIONCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/MysqlInfo.h>
#include <tencentcloud/dlc/v20210125/model/HiveInfo.h>
#include <tencentcloud/dlc/v20210125/model/KafkaInfo.h>
#include <tencentcloud/dlc/v20210125/model/OtherDatasourceConnection.h>
#include <tencentcloud/dlc/v20210125/model/DataSourceInfo.h>
#include <tencentcloud/dlc/v20210125/model/ElasticsearchInfo.h>
#include <tencentcloud/dlc/v20210125/model/TCHouseD.h>
#include <tencentcloud/dlc/v20210125/model/TccHive.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 数据源属性
                */
                class DatasourceConnectionConfig : public AbstractModel
                {
                public:
                    DatasourceConnectionConfig();
                    ~DatasourceConnectionConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Mysql数据源连接的属性
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Mysql Mysql数据源连接的属性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MysqlInfo GetMysql() const;

                    /**
                     * 设置Mysql数据源连接的属性
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mysql Mysql数据源连接的属性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMysql(const MysqlInfo& _mysql);

                    /**
                     * 判断参数 Mysql 是否已赋值
                     * @return Mysql 是否已赋值
                     * 
                     */
                    bool MysqlHasBeenSet() const;

                    /**
                     * 获取Hive数据源连接的属性
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Hive Hive数据源连接的属性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    HiveInfo GetHive() const;

                    /**
                     * 设置Hive数据源连接的属性
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hive Hive数据源连接的属性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHive(const HiveInfo& _hive);

                    /**
                     * 判断参数 Hive 是否已赋值
                     * @return Hive 是否已赋值
                     * 
                     */
                    bool HiveHasBeenSet() const;

                    /**
                     * 获取Kafka数据源连接的属性
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Kafka Kafka数据源连接的属性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    KafkaInfo GetKafka() const;

                    /**
                     * 设置Kafka数据源连接的属性
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _kafka Kafka数据源连接的属性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKafka(const KafkaInfo& _kafka);

                    /**
                     * 判断参数 Kafka 是否已赋值
                     * @return Kafka 是否已赋值
                     * 
                     */
                    bool KafkaHasBeenSet() const;

                    /**
                     * 获取其他数据源连接的属性
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OtherDatasourceConnection 其他数据源连接的属性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    OtherDatasourceConnection GetOtherDatasourceConnection() const;

                    /**
                     * 设置其他数据源连接的属性
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _otherDatasourceConnection 其他数据源连接的属性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOtherDatasourceConnection(const OtherDatasourceConnection& _otherDatasourceConnection);

                    /**
                     * 判断参数 OtherDatasourceConnection 是否已赋值
                     * @return OtherDatasourceConnection 是否已赋值
                     * 
                     */
                    bool OtherDatasourceConnectionHasBeenSet() const;

                    /**
                     * 获取PostgreSQL数据源连接的属性
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PostgreSql PostgreSQL数据源连接的属性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DataSourceInfo GetPostgreSql() const;

                    /**
                     * 设置PostgreSQL数据源连接的属性
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _postgreSql PostgreSQL数据源连接的属性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPostgreSql(const DataSourceInfo& _postgreSql);

                    /**
                     * 判断参数 PostgreSql 是否已赋值
                     * @return PostgreSql 是否已赋值
                     * 
                     */
                    bool PostgreSqlHasBeenSet() const;

                    /**
                     * 获取SQLServer数据源连接的属性
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SqlServer SQLServer数据源连接的属性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DataSourceInfo GetSqlServer() const;

                    /**
                     * 设置SQLServer数据源连接的属性
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sqlServer SQLServer数据源连接的属性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSqlServer(const DataSourceInfo& _sqlServer);

                    /**
                     * 判断参数 SqlServer 是否已赋值
                     * @return SqlServer 是否已赋值
                     * 
                     */
                    bool SqlServerHasBeenSet() const;

                    /**
                     * 获取ClickHouse数据源连接的属性
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClickHouse ClickHouse数据源连接的属性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DataSourceInfo GetClickHouse() const;

                    /**
                     * 设置ClickHouse数据源连接的属性
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clickHouse ClickHouse数据源连接的属性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClickHouse(const DataSourceInfo& _clickHouse);

                    /**
                     * 判断参数 ClickHouse 是否已赋值
                     * @return ClickHouse 是否已赋值
                     * 
                     */
                    bool ClickHouseHasBeenSet() const;

                    /**
                     * 获取Elasticsearch数据源连接的属性
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Elasticsearch Elasticsearch数据源连接的属性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ElasticsearchInfo GetElasticsearch() const;

                    /**
                     * 设置Elasticsearch数据源连接的属性
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _elasticsearch Elasticsearch数据源连接的属性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetElasticsearch(const ElasticsearchInfo& _elasticsearch);

                    /**
                     * 判断参数 Elasticsearch 是否已赋值
                     * @return Elasticsearch 是否已赋值
                     * 
                     */
                    bool ElasticsearchHasBeenSet() const;

                    /**
                     * 获取TDSQL-PostgreSQL数据源连接的属性
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TDSQLPostgreSql TDSQL-PostgreSQL数据源连接的属性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DataSourceInfo GetTDSQLPostgreSql() const;

                    /**
                     * 设置TDSQL-PostgreSQL数据源连接的属性
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tDSQLPostgreSql TDSQL-PostgreSQL数据源连接的属性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTDSQLPostgreSql(const DataSourceInfo& _tDSQLPostgreSql);

                    /**
                     * 判断参数 TDSQLPostgreSql 是否已赋值
                     * @return TDSQLPostgreSql 是否已赋值
                     * 
                     */
                    bool TDSQLPostgreSqlHasBeenSet() const;

                    /**
                     * 获取Doris数据源连接的属性
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TCHouseD Doris数据源连接的属性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TCHouseD GetTCHouseD() const;

                    /**
                     * 设置Doris数据源连接的属性
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tCHouseD Doris数据源连接的属性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTCHouseD(const TCHouseD& _tCHouseD);

                    /**
                     * 判断参数 TCHouseD 是否已赋值
                     * @return TCHouseD 是否已赋值
                     * 
                     */
                    bool TCHouseDHasBeenSet() const;

                    /**
                     * 获取TccHive数据目录连接信息
                     * @return TccHive TccHive数据目录连接信息
                     * 
                     */
                    TccHive GetTccHive() const;

                    /**
                     * 设置TccHive数据目录连接信息
                     * @param _tccHive TccHive数据目录连接信息
                     * 
                     */
                    void SetTccHive(const TccHive& _tccHive);

                    /**
                     * 判断参数 TccHive 是否已赋值
                     * @return TccHive 是否已赋值
                     * 
                     */
                    bool TccHiveHasBeenSet() const;

                private:

                    /**
                     * Mysql数据源连接的属性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MysqlInfo m_mysql;
                    bool m_mysqlHasBeenSet;

                    /**
                     * Hive数据源连接的属性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    HiveInfo m_hive;
                    bool m_hiveHasBeenSet;

                    /**
                     * Kafka数据源连接的属性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    KafkaInfo m_kafka;
                    bool m_kafkaHasBeenSet;

                    /**
                     * 其他数据源连接的属性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    OtherDatasourceConnection m_otherDatasourceConnection;
                    bool m_otherDatasourceConnectionHasBeenSet;

                    /**
                     * PostgreSQL数据源连接的属性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DataSourceInfo m_postgreSql;
                    bool m_postgreSqlHasBeenSet;

                    /**
                     * SQLServer数据源连接的属性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DataSourceInfo m_sqlServer;
                    bool m_sqlServerHasBeenSet;

                    /**
                     * ClickHouse数据源连接的属性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DataSourceInfo m_clickHouse;
                    bool m_clickHouseHasBeenSet;

                    /**
                     * Elasticsearch数据源连接的属性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ElasticsearchInfo m_elasticsearch;
                    bool m_elasticsearchHasBeenSet;

                    /**
                     * TDSQL-PostgreSQL数据源连接的属性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DataSourceInfo m_tDSQLPostgreSql;
                    bool m_tDSQLPostgreSqlHasBeenSet;

                    /**
                     * Doris数据源连接的属性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TCHouseD m_tCHouseD;
                    bool m_tCHouseDHasBeenSet;

                    /**
                     * TccHive数据目录连接信息
                     */
                    TccHive m_tccHive;
                    bool m_tccHiveHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DATASOURCECONNECTIONCONFIG_H_
