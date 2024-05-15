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

#include <tencentcloud/ckafka/v20190819/model/DatahubResource.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

DatahubResource::DatahubResource() :
    m_typeHasBeenSet(false),
    m_kafkaParamHasBeenSet(false),
    m_eventBusParamHasBeenSet(false),
    m_mongoDBParamHasBeenSet(false),
    m_esParamHasBeenSet(false),
    m_tdwParamHasBeenSet(false),
    m_dtsParamHasBeenSet(false),
    m_clickHouseParamHasBeenSet(false),
    m_clsParamHasBeenSet(false),
    m_cosParamHasBeenSet(false),
    m_mySQLParamHasBeenSet(false),
    m_postgreSQLParamHasBeenSet(false),
    m_topicParamHasBeenSet(false),
    m_mariaDBParamHasBeenSet(false),
    m_sQLServerParamHasBeenSet(false),
    m_ctsdbParamHasBeenSet(false),
    m_scfParamHasBeenSet(false),
    m_mqttParamHasBeenSet(false)
{
}

CoreInternalOutcome DatahubResource::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatahubResource.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("KafkaParam") && !value["KafkaParam"].IsNull())
    {
        if (!value["KafkaParam"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DatahubResource.KafkaParam` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_kafkaParam.Deserialize(value["KafkaParam"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_kafkaParamHasBeenSet = true;
    }

    if (value.HasMember("EventBusParam") && !value["EventBusParam"].IsNull())
    {
        if (!value["EventBusParam"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DatahubResource.EventBusParam` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_eventBusParam.Deserialize(value["EventBusParam"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_eventBusParamHasBeenSet = true;
    }

    if (value.HasMember("MongoDBParam") && !value["MongoDBParam"].IsNull())
    {
        if (!value["MongoDBParam"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DatahubResource.MongoDBParam` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_mongoDBParam.Deserialize(value["MongoDBParam"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_mongoDBParamHasBeenSet = true;
    }

    if (value.HasMember("EsParam") && !value["EsParam"].IsNull())
    {
        if (!value["EsParam"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DatahubResource.EsParam` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_esParam.Deserialize(value["EsParam"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_esParamHasBeenSet = true;
    }

    if (value.HasMember("TdwParam") && !value["TdwParam"].IsNull())
    {
        if (!value["TdwParam"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DatahubResource.TdwParam` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tdwParam.Deserialize(value["TdwParam"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tdwParamHasBeenSet = true;
    }

    if (value.HasMember("DtsParam") && !value["DtsParam"].IsNull())
    {
        if (!value["DtsParam"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DatahubResource.DtsParam` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dtsParam.Deserialize(value["DtsParam"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dtsParamHasBeenSet = true;
    }

    if (value.HasMember("ClickHouseParam") && !value["ClickHouseParam"].IsNull())
    {
        if (!value["ClickHouseParam"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DatahubResource.ClickHouseParam` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_clickHouseParam.Deserialize(value["ClickHouseParam"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_clickHouseParamHasBeenSet = true;
    }

    if (value.HasMember("ClsParam") && !value["ClsParam"].IsNull())
    {
        if (!value["ClsParam"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DatahubResource.ClsParam` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_clsParam.Deserialize(value["ClsParam"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_clsParamHasBeenSet = true;
    }

    if (value.HasMember("CosParam") && !value["CosParam"].IsNull())
    {
        if (!value["CosParam"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DatahubResource.CosParam` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cosParam.Deserialize(value["CosParam"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cosParamHasBeenSet = true;
    }

    if (value.HasMember("MySQLParam") && !value["MySQLParam"].IsNull())
    {
        if (!value["MySQLParam"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DatahubResource.MySQLParam` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_mySQLParam.Deserialize(value["MySQLParam"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_mySQLParamHasBeenSet = true;
    }

    if (value.HasMember("PostgreSQLParam") && !value["PostgreSQLParam"].IsNull())
    {
        if (!value["PostgreSQLParam"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DatahubResource.PostgreSQLParam` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_postgreSQLParam.Deserialize(value["PostgreSQLParam"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_postgreSQLParamHasBeenSet = true;
    }

    if (value.HasMember("TopicParam") && !value["TopicParam"].IsNull())
    {
        if (!value["TopicParam"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DatahubResource.TopicParam` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_topicParam.Deserialize(value["TopicParam"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_topicParamHasBeenSet = true;
    }

    if (value.HasMember("MariaDBParam") && !value["MariaDBParam"].IsNull())
    {
        if (!value["MariaDBParam"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DatahubResource.MariaDBParam` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_mariaDBParam.Deserialize(value["MariaDBParam"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_mariaDBParamHasBeenSet = true;
    }

    if (value.HasMember("SQLServerParam") && !value["SQLServerParam"].IsNull())
    {
        if (!value["SQLServerParam"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DatahubResource.SQLServerParam` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sQLServerParam.Deserialize(value["SQLServerParam"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sQLServerParamHasBeenSet = true;
    }

    if (value.HasMember("CtsdbParam") && !value["CtsdbParam"].IsNull())
    {
        if (!value["CtsdbParam"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DatahubResource.CtsdbParam` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ctsdbParam.Deserialize(value["CtsdbParam"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ctsdbParamHasBeenSet = true;
    }

    if (value.HasMember("ScfParam") && !value["ScfParam"].IsNull())
    {
        if (!value["ScfParam"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DatahubResource.ScfParam` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_scfParam.Deserialize(value["ScfParam"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_scfParamHasBeenSet = true;
    }

    if (value.HasMember("MqttParam") && !value["MqttParam"].IsNull())
    {
        if (!value["MqttParam"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DatahubResource.MqttParam` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_mqttParam.Deserialize(value["MqttParam"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_mqttParamHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DatahubResource::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_kafkaParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KafkaParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_kafkaParam.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_eventBusParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventBusParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_eventBusParam.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_mongoDBParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MongoDBParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mongoDBParam.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_esParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EsParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_esParam.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tdwParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TdwParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tdwParam.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_dtsParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DtsParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dtsParam.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_clickHouseParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClickHouseParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_clickHouseParam.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_clsParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClsParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_clsParam.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cosParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cosParam.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_mySQLParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MySQLParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mySQLParam.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_postgreSQLParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PostgreSQLParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_postgreSQLParam.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_topicParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_topicParam.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_mariaDBParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MariaDBParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mariaDBParam.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_sQLServerParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SQLServerParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sQLServerParam.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_ctsdbParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CtsdbParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ctsdbParam.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_scfParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScfParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_scfParam.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_mqttParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MqttParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mqttParam.ToJsonObject(value[key.c_str()], allocator);
    }

}


string DatahubResource::GetType() const
{
    return m_type;
}

void DatahubResource::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DatahubResource::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

KafkaParam DatahubResource::GetKafkaParam() const
{
    return m_kafkaParam;
}

void DatahubResource::SetKafkaParam(const KafkaParam& _kafkaParam)
{
    m_kafkaParam = _kafkaParam;
    m_kafkaParamHasBeenSet = true;
}

bool DatahubResource::KafkaParamHasBeenSet() const
{
    return m_kafkaParamHasBeenSet;
}

EventBusParam DatahubResource::GetEventBusParam() const
{
    return m_eventBusParam;
}

void DatahubResource::SetEventBusParam(const EventBusParam& _eventBusParam)
{
    m_eventBusParam = _eventBusParam;
    m_eventBusParamHasBeenSet = true;
}

bool DatahubResource::EventBusParamHasBeenSet() const
{
    return m_eventBusParamHasBeenSet;
}

MongoDBParam DatahubResource::GetMongoDBParam() const
{
    return m_mongoDBParam;
}

void DatahubResource::SetMongoDBParam(const MongoDBParam& _mongoDBParam)
{
    m_mongoDBParam = _mongoDBParam;
    m_mongoDBParamHasBeenSet = true;
}

bool DatahubResource::MongoDBParamHasBeenSet() const
{
    return m_mongoDBParamHasBeenSet;
}

EsParam DatahubResource::GetEsParam() const
{
    return m_esParam;
}

void DatahubResource::SetEsParam(const EsParam& _esParam)
{
    m_esParam = _esParam;
    m_esParamHasBeenSet = true;
}

bool DatahubResource::EsParamHasBeenSet() const
{
    return m_esParamHasBeenSet;
}

TdwParam DatahubResource::GetTdwParam() const
{
    return m_tdwParam;
}

void DatahubResource::SetTdwParam(const TdwParam& _tdwParam)
{
    m_tdwParam = _tdwParam;
    m_tdwParamHasBeenSet = true;
}

bool DatahubResource::TdwParamHasBeenSet() const
{
    return m_tdwParamHasBeenSet;
}

DtsParam DatahubResource::GetDtsParam() const
{
    return m_dtsParam;
}

void DatahubResource::SetDtsParam(const DtsParam& _dtsParam)
{
    m_dtsParam = _dtsParam;
    m_dtsParamHasBeenSet = true;
}

bool DatahubResource::DtsParamHasBeenSet() const
{
    return m_dtsParamHasBeenSet;
}

ClickHouseParam DatahubResource::GetClickHouseParam() const
{
    return m_clickHouseParam;
}

void DatahubResource::SetClickHouseParam(const ClickHouseParam& _clickHouseParam)
{
    m_clickHouseParam = _clickHouseParam;
    m_clickHouseParamHasBeenSet = true;
}

bool DatahubResource::ClickHouseParamHasBeenSet() const
{
    return m_clickHouseParamHasBeenSet;
}

ClsParam DatahubResource::GetClsParam() const
{
    return m_clsParam;
}

void DatahubResource::SetClsParam(const ClsParam& _clsParam)
{
    m_clsParam = _clsParam;
    m_clsParamHasBeenSet = true;
}

bool DatahubResource::ClsParamHasBeenSet() const
{
    return m_clsParamHasBeenSet;
}

CosParam DatahubResource::GetCosParam() const
{
    return m_cosParam;
}

void DatahubResource::SetCosParam(const CosParam& _cosParam)
{
    m_cosParam = _cosParam;
    m_cosParamHasBeenSet = true;
}

bool DatahubResource::CosParamHasBeenSet() const
{
    return m_cosParamHasBeenSet;
}

MySQLParam DatahubResource::GetMySQLParam() const
{
    return m_mySQLParam;
}

void DatahubResource::SetMySQLParam(const MySQLParam& _mySQLParam)
{
    m_mySQLParam = _mySQLParam;
    m_mySQLParamHasBeenSet = true;
}

bool DatahubResource::MySQLParamHasBeenSet() const
{
    return m_mySQLParamHasBeenSet;
}

PostgreSQLParam DatahubResource::GetPostgreSQLParam() const
{
    return m_postgreSQLParam;
}

void DatahubResource::SetPostgreSQLParam(const PostgreSQLParam& _postgreSQLParam)
{
    m_postgreSQLParam = _postgreSQLParam;
    m_postgreSQLParamHasBeenSet = true;
}

bool DatahubResource::PostgreSQLParamHasBeenSet() const
{
    return m_postgreSQLParamHasBeenSet;
}

TopicParam DatahubResource::GetTopicParam() const
{
    return m_topicParam;
}

void DatahubResource::SetTopicParam(const TopicParam& _topicParam)
{
    m_topicParam = _topicParam;
    m_topicParamHasBeenSet = true;
}

bool DatahubResource::TopicParamHasBeenSet() const
{
    return m_topicParamHasBeenSet;
}

MariaDBParam DatahubResource::GetMariaDBParam() const
{
    return m_mariaDBParam;
}

void DatahubResource::SetMariaDBParam(const MariaDBParam& _mariaDBParam)
{
    m_mariaDBParam = _mariaDBParam;
    m_mariaDBParamHasBeenSet = true;
}

bool DatahubResource::MariaDBParamHasBeenSet() const
{
    return m_mariaDBParamHasBeenSet;
}

SQLServerParam DatahubResource::GetSQLServerParam() const
{
    return m_sQLServerParam;
}

void DatahubResource::SetSQLServerParam(const SQLServerParam& _sQLServerParam)
{
    m_sQLServerParam = _sQLServerParam;
    m_sQLServerParamHasBeenSet = true;
}

bool DatahubResource::SQLServerParamHasBeenSet() const
{
    return m_sQLServerParamHasBeenSet;
}

CtsdbParam DatahubResource::GetCtsdbParam() const
{
    return m_ctsdbParam;
}

void DatahubResource::SetCtsdbParam(const CtsdbParam& _ctsdbParam)
{
    m_ctsdbParam = _ctsdbParam;
    m_ctsdbParamHasBeenSet = true;
}

bool DatahubResource::CtsdbParamHasBeenSet() const
{
    return m_ctsdbParamHasBeenSet;
}

ScfParam DatahubResource::GetScfParam() const
{
    return m_scfParam;
}

void DatahubResource::SetScfParam(const ScfParam& _scfParam)
{
    m_scfParam = _scfParam;
    m_scfParamHasBeenSet = true;
}

bool DatahubResource::ScfParamHasBeenSet() const
{
    return m_scfParamHasBeenSet;
}

MqttParam DatahubResource::GetMqttParam() const
{
    return m_mqttParam;
}

void DatahubResource::SetMqttParam(const MqttParam& _mqttParam)
{
    m_mqttParam = _mqttParam;
    m_mqttParamHasBeenSet = true;
}

bool DatahubResource::MqttParamHasBeenSet() const
{
    return m_mqttParamHasBeenSet;
}

