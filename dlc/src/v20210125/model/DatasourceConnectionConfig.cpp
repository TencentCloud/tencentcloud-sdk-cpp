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

#include <tencentcloud/dlc/v20210125/model/DatasourceConnectionConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

DatasourceConnectionConfig::DatasourceConnectionConfig() :
    m_mysqlHasBeenSet(false),
    m_hiveHasBeenSet(false),
    m_kafkaHasBeenSet(false),
    m_otherDatasourceConnectionHasBeenSet(false),
    m_postgreSqlHasBeenSet(false),
    m_sqlServerHasBeenSet(false),
    m_clickHouseHasBeenSet(false),
    m_elasticsearchHasBeenSet(false),
    m_tDSQLPostgreSqlHasBeenSet(false),
    m_tCHouseDHasBeenSet(false),
    m_tccHiveHasBeenSet(false)
{
}

CoreInternalOutcome DatasourceConnectionConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Mysql") && !value["Mysql"].IsNull())
    {
        if (!value["Mysql"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DatasourceConnectionConfig.Mysql` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_mysql.Deserialize(value["Mysql"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_mysqlHasBeenSet = true;
    }

    if (value.HasMember("Hive") && !value["Hive"].IsNull())
    {
        if (!value["Hive"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DatasourceConnectionConfig.Hive` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_hive.Deserialize(value["Hive"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_hiveHasBeenSet = true;
    }

    if (value.HasMember("Kafka") && !value["Kafka"].IsNull())
    {
        if (!value["Kafka"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DatasourceConnectionConfig.Kafka` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_kafka.Deserialize(value["Kafka"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_kafkaHasBeenSet = true;
    }

    if (value.HasMember("OtherDatasourceConnection") && !value["OtherDatasourceConnection"].IsNull())
    {
        if (!value["OtherDatasourceConnection"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DatasourceConnectionConfig.OtherDatasourceConnection` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_otherDatasourceConnection.Deserialize(value["OtherDatasourceConnection"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_otherDatasourceConnectionHasBeenSet = true;
    }

    if (value.HasMember("PostgreSql") && !value["PostgreSql"].IsNull())
    {
        if (!value["PostgreSql"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DatasourceConnectionConfig.PostgreSql` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_postgreSql.Deserialize(value["PostgreSql"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_postgreSqlHasBeenSet = true;
    }

    if (value.HasMember("SqlServer") && !value["SqlServer"].IsNull())
    {
        if (!value["SqlServer"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DatasourceConnectionConfig.SqlServer` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sqlServer.Deserialize(value["SqlServer"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sqlServerHasBeenSet = true;
    }

    if (value.HasMember("ClickHouse") && !value["ClickHouse"].IsNull())
    {
        if (!value["ClickHouse"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DatasourceConnectionConfig.ClickHouse` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_clickHouse.Deserialize(value["ClickHouse"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_clickHouseHasBeenSet = true;
    }

    if (value.HasMember("Elasticsearch") && !value["Elasticsearch"].IsNull())
    {
        if (!value["Elasticsearch"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DatasourceConnectionConfig.Elasticsearch` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_elasticsearch.Deserialize(value["Elasticsearch"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_elasticsearchHasBeenSet = true;
    }

    if (value.HasMember("TDSQLPostgreSql") && !value["TDSQLPostgreSql"].IsNull())
    {
        if (!value["TDSQLPostgreSql"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DatasourceConnectionConfig.TDSQLPostgreSql` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tDSQLPostgreSql.Deserialize(value["TDSQLPostgreSql"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tDSQLPostgreSqlHasBeenSet = true;
    }

    if (value.HasMember("TCHouseD") && !value["TCHouseD"].IsNull())
    {
        if (!value["TCHouseD"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DatasourceConnectionConfig.TCHouseD` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tCHouseD.Deserialize(value["TCHouseD"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tCHouseDHasBeenSet = true;
    }

    if (value.HasMember("TccHive") && !value["TccHive"].IsNull())
    {
        if (!value["TccHive"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DatasourceConnectionConfig.TccHive` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tccHive.Deserialize(value["TccHive"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tccHiveHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DatasourceConnectionConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_mysqlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mysql";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mysql.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_hiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Hive";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_hive.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_kafkaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Kafka";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_kafka.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_otherDatasourceConnectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OtherDatasourceConnection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_otherDatasourceConnection.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_postgreSqlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PostgreSql";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_postgreSql.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_sqlServerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SqlServer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sqlServer.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_clickHouseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClickHouse";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_clickHouse.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_elasticsearchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Elasticsearch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_elasticsearch.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tDSQLPostgreSqlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TDSQLPostgreSql";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tDSQLPostgreSql.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tCHouseDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TCHouseD";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tCHouseD.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tccHiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TccHive";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tccHive.ToJsonObject(value[key.c_str()], allocator);
    }

}


MysqlInfo DatasourceConnectionConfig::GetMysql() const
{
    return m_mysql;
}

void DatasourceConnectionConfig::SetMysql(const MysqlInfo& _mysql)
{
    m_mysql = _mysql;
    m_mysqlHasBeenSet = true;
}

bool DatasourceConnectionConfig::MysqlHasBeenSet() const
{
    return m_mysqlHasBeenSet;
}

HiveInfo DatasourceConnectionConfig::GetHive() const
{
    return m_hive;
}

void DatasourceConnectionConfig::SetHive(const HiveInfo& _hive)
{
    m_hive = _hive;
    m_hiveHasBeenSet = true;
}

bool DatasourceConnectionConfig::HiveHasBeenSet() const
{
    return m_hiveHasBeenSet;
}

KafkaInfo DatasourceConnectionConfig::GetKafka() const
{
    return m_kafka;
}

void DatasourceConnectionConfig::SetKafka(const KafkaInfo& _kafka)
{
    m_kafka = _kafka;
    m_kafkaHasBeenSet = true;
}

bool DatasourceConnectionConfig::KafkaHasBeenSet() const
{
    return m_kafkaHasBeenSet;
}

OtherDatasourceConnection DatasourceConnectionConfig::GetOtherDatasourceConnection() const
{
    return m_otherDatasourceConnection;
}

void DatasourceConnectionConfig::SetOtherDatasourceConnection(const OtherDatasourceConnection& _otherDatasourceConnection)
{
    m_otherDatasourceConnection = _otherDatasourceConnection;
    m_otherDatasourceConnectionHasBeenSet = true;
}

bool DatasourceConnectionConfig::OtherDatasourceConnectionHasBeenSet() const
{
    return m_otherDatasourceConnectionHasBeenSet;
}

DataSourceInfo DatasourceConnectionConfig::GetPostgreSql() const
{
    return m_postgreSql;
}

void DatasourceConnectionConfig::SetPostgreSql(const DataSourceInfo& _postgreSql)
{
    m_postgreSql = _postgreSql;
    m_postgreSqlHasBeenSet = true;
}

bool DatasourceConnectionConfig::PostgreSqlHasBeenSet() const
{
    return m_postgreSqlHasBeenSet;
}

DataSourceInfo DatasourceConnectionConfig::GetSqlServer() const
{
    return m_sqlServer;
}

void DatasourceConnectionConfig::SetSqlServer(const DataSourceInfo& _sqlServer)
{
    m_sqlServer = _sqlServer;
    m_sqlServerHasBeenSet = true;
}

bool DatasourceConnectionConfig::SqlServerHasBeenSet() const
{
    return m_sqlServerHasBeenSet;
}

DataSourceInfo DatasourceConnectionConfig::GetClickHouse() const
{
    return m_clickHouse;
}

void DatasourceConnectionConfig::SetClickHouse(const DataSourceInfo& _clickHouse)
{
    m_clickHouse = _clickHouse;
    m_clickHouseHasBeenSet = true;
}

bool DatasourceConnectionConfig::ClickHouseHasBeenSet() const
{
    return m_clickHouseHasBeenSet;
}

ElasticsearchInfo DatasourceConnectionConfig::GetElasticsearch() const
{
    return m_elasticsearch;
}

void DatasourceConnectionConfig::SetElasticsearch(const ElasticsearchInfo& _elasticsearch)
{
    m_elasticsearch = _elasticsearch;
    m_elasticsearchHasBeenSet = true;
}

bool DatasourceConnectionConfig::ElasticsearchHasBeenSet() const
{
    return m_elasticsearchHasBeenSet;
}

DataSourceInfo DatasourceConnectionConfig::GetTDSQLPostgreSql() const
{
    return m_tDSQLPostgreSql;
}

void DatasourceConnectionConfig::SetTDSQLPostgreSql(const DataSourceInfo& _tDSQLPostgreSql)
{
    m_tDSQLPostgreSql = _tDSQLPostgreSql;
    m_tDSQLPostgreSqlHasBeenSet = true;
}

bool DatasourceConnectionConfig::TDSQLPostgreSqlHasBeenSet() const
{
    return m_tDSQLPostgreSqlHasBeenSet;
}

TCHouseD DatasourceConnectionConfig::GetTCHouseD() const
{
    return m_tCHouseD;
}

void DatasourceConnectionConfig::SetTCHouseD(const TCHouseD& _tCHouseD)
{
    m_tCHouseD = _tCHouseD;
    m_tCHouseDHasBeenSet = true;
}

bool DatasourceConnectionConfig::TCHouseDHasBeenSet() const
{
    return m_tCHouseDHasBeenSet;
}

TccHive DatasourceConnectionConfig::GetTccHive() const
{
    return m_tccHive;
}

void DatasourceConnectionConfig::SetTccHive(const TccHive& _tccHive)
{
    m_tccHive = _tccHive;
    m_tccHiveHasBeenSet = true;
}

bool DatasourceConnectionConfig::TccHiveHasBeenSet() const
{
    return m_tccHiveHasBeenSet;
}

