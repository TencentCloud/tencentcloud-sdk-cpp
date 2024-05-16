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

#include <tencentcloud/ckafka/v20190819/model/ModifyConnectResourceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

ModifyConnectResourceRequest::ModifyConnectResourceRequest() :
    m_resourceIdHasBeenSet(false),
    m_resourceNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_dtsConnectParamHasBeenSet(false),
    m_mongoDBConnectParamHasBeenSet(false),
    m_esConnectParamHasBeenSet(false),
    m_clickHouseConnectParamHasBeenSet(false),
    m_mySQLConnectParamHasBeenSet(false),
    m_postgreSQLConnectParamHasBeenSet(false),
    m_mariaDBConnectParamHasBeenSet(false),
    m_sQLServerConnectParamHasBeenSet(false),
    m_ctsdbConnectParamHasBeenSet(false),
    m_dorisConnectParamHasBeenSet(false),
    m_kafkaConnectParamHasBeenSet(false),
    m_mqttConnectParamHasBeenSet(false)
{
}

string ModifyConnectResourceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_dtsConnectParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DtsConnectParam";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dtsConnectParam.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_mongoDBConnectParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MongoDBConnectParam";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mongoDBConnectParam.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_esConnectParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EsConnectParam";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_esConnectParam.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_clickHouseConnectParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClickHouseConnectParam";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_clickHouseConnectParam.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_mySQLConnectParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MySQLConnectParam";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mySQLConnectParam.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_postgreSQLConnectParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PostgreSQLConnectParam";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_postgreSQLConnectParam.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_mariaDBConnectParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MariaDBConnectParam";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mariaDBConnectParam.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_sQLServerConnectParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SQLServerConnectParam";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sQLServerConnectParam.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_ctsdbConnectParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CtsdbConnectParam";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ctsdbConnectParam.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_dorisConnectParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DorisConnectParam";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dorisConnectParam.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_kafkaConnectParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KafkaConnectParam";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_kafkaConnectParam.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_mqttConnectParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MqttConnectParam";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mqttConnectParam.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyConnectResourceRequest::GetResourceId() const
{
    return m_resourceId;
}

void ModifyConnectResourceRequest::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool ModifyConnectResourceRequest::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string ModifyConnectResourceRequest::GetResourceName() const
{
    return m_resourceName;
}

void ModifyConnectResourceRequest::SetResourceName(const string& _resourceName)
{
    m_resourceName = _resourceName;
    m_resourceNameHasBeenSet = true;
}

bool ModifyConnectResourceRequest::ResourceNameHasBeenSet() const
{
    return m_resourceNameHasBeenSet;
}

string ModifyConnectResourceRequest::GetDescription() const
{
    return m_description;
}

void ModifyConnectResourceRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifyConnectResourceRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string ModifyConnectResourceRequest::GetType() const
{
    return m_type;
}

void ModifyConnectResourceRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ModifyConnectResourceRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

DtsModifyConnectParam ModifyConnectResourceRequest::GetDtsConnectParam() const
{
    return m_dtsConnectParam;
}

void ModifyConnectResourceRequest::SetDtsConnectParam(const DtsModifyConnectParam& _dtsConnectParam)
{
    m_dtsConnectParam = _dtsConnectParam;
    m_dtsConnectParamHasBeenSet = true;
}

bool ModifyConnectResourceRequest::DtsConnectParamHasBeenSet() const
{
    return m_dtsConnectParamHasBeenSet;
}

MongoDBModifyConnectParam ModifyConnectResourceRequest::GetMongoDBConnectParam() const
{
    return m_mongoDBConnectParam;
}

void ModifyConnectResourceRequest::SetMongoDBConnectParam(const MongoDBModifyConnectParam& _mongoDBConnectParam)
{
    m_mongoDBConnectParam = _mongoDBConnectParam;
    m_mongoDBConnectParamHasBeenSet = true;
}

bool ModifyConnectResourceRequest::MongoDBConnectParamHasBeenSet() const
{
    return m_mongoDBConnectParamHasBeenSet;
}

EsModifyConnectParam ModifyConnectResourceRequest::GetEsConnectParam() const
{
    return m_esConnectParam;
}

void ModifyConnectResourceRequest::SetEsConnectParam(const EsModifyConnectParam& _esConnectParam)
{
    m_esConnectParam = _esConnectParam;
    m_esConnectParamHasBeenSet = true;
}

bool ModifyConnectResourceRequest::EsConnectParamHasBeenSet() const
{
    return m_esConnectParamHasBeenSet;
}

ClickHouseModifyConnectParam ModifyConnectResourceRequest::GetClickHouseConnectParam() const
{
    return m_clickHouseConnectParam;
}

void ModifyConnectResourceRequest::SetClickHouseConnectParam(const ClickHouseModifyConnectParam& _clickHouseConnectParam)
{
    m_clickHouseConnectParam = _clickHouseConnectParam;
    m_clickHouseConnectParamHasBeenSet = true;
}

bool ModifyConnectResourceRequest::ClickHouseConnectParamHasBeenSet() const
{
    return m_clickHouseConnectParamHasBeenSet;
}

MySQLModifyConnectParam ModifyConnectResourceRequest::GetMySQLConnectParam() const
{
    return m_mySQLConnectParam;
}

void ModifyConnectResourceRequest::SetMySQLConnectParam(const MySQLModifyConnectParam& _mySQLConnectParam)
{
    m_mySQLConnectParam = _mySQLConnectParam;
    m_mySQLConnectParamHasBeenSet = true;
}

bool ModifyConnectResourceRequest::MySQLConnectParamHasBeenSet() const
{
    return m_mySQLConnectParamHasBeenSet;
}

PostgreSQLModifyConnectParam ModifyConnectResourceRequest::GetPostgreSQLConnectParam() const
{
    return m_postgreSQLConnectParam;
}

void ModifyConnectResourceRequest::SetPostgreSQLConnectParam(const PostgreSQLModifyConnectParam& _postgreSQLConnectParam)
{
    m_postgreSQLConnectParam = _postgreSQLConnectParam;
    m_postgreSQLConnectParamHasBeenSet = true;
}

bool ModifyConnectResourceRequest::PostgreSQLConnectParamHasBeenSet() const
{
    return m_postgreSQLConnectParamHasBeenSet;
}

MariaDBModifyConnectParam ModifyConnectResourceRequest::GetMariaDBConnectParam() const
{
    return m_mariaDBConnectParam;
}

void ModifyConnectResourceRequest::SetMariaDBConnectParam(const MariaDBModifyConnectParam& _mariaDBConnectParam)
{
    m_mariaDBConnectParam = _mariaDBConnectParam;
    m_mariaDBConnectParamHasBeenSet = true;
}

bool ModifyConnectResourceRequest::MariaDBConnectParamHasBeenSet() const
{
    return m_mariaDBConnectParamHasBeenSet;
}

SQLServerModifyConnectParam ModifyConnectResourceRequest::GetSQLServerConnectParam() const
{
    return m_sQLServerConnectParam;
}

void ModifyConnectResourceRequest::SetSQLServerConnectParam(const SQLServerModifyConnectParam& _sQLServerConnectParam)
{
    m_sQLServerConnectParam = _sQLServerConnectParam;
    m_sQLServerConnectParamHasBeenSet = true;
}

bool ModifyConnectResourceRequest::SQLServerConnectParamHasBeenSet() const
{
    return m_sQLServerConnectParamHasBeenSet;
}

CtsdbModifyConnectParam ModifyConnectResourceRequest::GetCtsdbConnectParam() const
{
    return m_ctsdbConnectParam;
}

void ModifyConnectResourceRequest::SetCtsdbConnectParam(const CtsdbModifyConnectParam& _ctsdbConnectParam)
{
    m_ctsdbConnectParam = _ctsdbConnectParam;
    m_ctsdbConnectParamHasBeenSet = true;
}

bool ModifyConnectResourceRequest::CtsdbConnectParamHasBeenSet() const
{
    return m_ctsdbConnectParamHasBeenSet;
}

DorisModifyConnectParam ModifyConnectResourceRequest::GetDorisConnectParam() const
{
    return m_dorisConnectParam;
}

void ModifyConnectResourceRequest::SetDorisConnectParam(const DorisModifyConnectParam& _dorisConnectParam)
{
    m_dorisConnectParam = _dorisConnectParam;
    m_dorisConnectParamHasBeenSet = true;
}

bool ModifyConnectResourceRequest::DorisConnectParamHasBeenSet() const
{
    return m_dorisConnectParamHasBeenSet;
}

KafkaConnectParam ModifyConnectResourceRequest::GetKafkaConnectParam() const
{
    return m_kafkaConnectParam;
}

void ModifyConnectResourceRequest::SetKafkaConnectParam(const KafkaConnectParam& _kafkaConnectParam)
{
    m_kafkaConnectParam = _kafkaConnectParam;
    m_kafkaConnectParamHasBeenSet = true;
}

bool ModifyConnectResourceRequest::KafkaConnectParamHasBeenSet() const
{
    return m_kafkaConnectParamHasBeenSet;
}

MqttConnectParam ModifyConnectResourceRequest::GetMqttConnectParam() const
{
    return m_mqttConnectParam;
}

void ModifyConnectResourceRequest::SetMqttConnectParam(const MqttConnectParam& _mqttConnectParam)
{
    m_mqttConnectParam = _mqttConnectParam;
    m_mqttConnectParamHasBeenSet = true;
}

bool ModifyConnectResourceRequest::MqttConnectParamHasBeenSet() const
{
    return m_mqttConnectParamHasBeenSet;
}


