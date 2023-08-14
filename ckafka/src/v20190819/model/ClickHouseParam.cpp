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

#include <tencentcloud/ckafka/v20190819/model/ClickHouseParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

ClickHouseParam::ClickHouseParam() :
    m_clusterHasBeenSet(false),
    m_databaseHasBeenSet(false),
    m_tableHasBeenSet(false),
    m_schemaHasBeenSet(false),
    m_resourceHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_portHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_serviceVipHasBeenSet(false),
    m_uniqVpcIdHasBeenSet(false),
    m_selfBuiltHasBeenSet(false),
    m_dropInvalidMessageHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_dropClsHasBeenSet(false),
    m_batchSizeHasBeenSet(false),
    m_consumerFetchMinBytesHasBeenSet(false),
    m_consumerFetchMaxWaitMsHasBeenSet(false)
{
}

CoreInternalOutcome ClickHouseParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Cluster") && !value["Cluster"].IsNull())
    {
        if (!value["Cluster"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClickHouseParam.Cluster` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cluster = string(value["Cluster"].GetString());
        m_clusterHasBeenSet = true;
    }

    if (value.HasMember("Database") && !value["Database"].IsNull())
    {
        if (!value["Database"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClickHouseParam.Database` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_database = string(value["Database"].GetString());
        m_databaseHasBeenSet = true;
    }

    if (value.HasMember("Table") && !value["Table"].IsNull())
    {
        if (!value["Table"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClickHouseParam.Table` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_table = string(value["Table"].GetString());
        m_tableHasBeenSet = true;
    }

    if (value.HasMember("Schema") && !value["Schema"].IsNull())
    {
        if (!value["Schema"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClickHouseParam.Schema` is not array type"));

        const rapidjson::Value &tmpValue = value["Schema"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ClickHouseSchema item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_schema.push_back(item);
        }
        m_schemaHasBeenSet = true;
    }

    if (value.HasMember("Resource") && !value["Resource"].IsNull())
    {
        if (!value["Resource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClickHouseParam.Resource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resource = string(value["Resource"].GetString());
        m_resourceHasBeenSet = true;
    }

    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClickHouseParam.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClickHouseParam.Port` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetInt64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClickHouseParam.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("Password") && !value["Password"].IsNull())
    {
        if (!value["Password"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClickHouseParam.Password` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_password = string(value["Password"].GetString());
        m_passwordHasBeenSet = true;
    }

    if (value.HasMember("ServiceVip") && !value["ServiceVip"].IsNull())
    {
        if (!value["ServiceVip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClickHouseParam.ServiceVip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceVip = string(value["ServiceVip"].GetString());
        m_serviceVipHasBeenSet = true;
    }

    if (value.HasMember("UniqVpcId") && !value["UniqVpcId"].IsNull())
    {
        if (!value["UniqVpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClickHouseParam.UniqVpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniqVpcId = string(value["UniqVpcId"].GetString());
        m_uniqVpcIdHasBeenSet = true;
    }

    if (value.HasMember("SelfBuilt") && !value["SelfBuilt"].IsNull())
    {
        if (!value["SelfBuilt"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ClickHouseParam.SelfBuilt` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_selfBuilt = value["SelfBuilt"].GetBool();
        m_selfBuiltHasBeenSet = true;
    }

    if (value.HasMember("DropInvalidMessage") && !value["DropInvalidMessage"].IsNull())
    {
        if (!value["DropInvalidMessage"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ClickHouseParam.DropInvalidMessage` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_dropInvalidMessage = value["DropInvalidMessage"].GetBool();
        m_dropInvalidMessageHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClickHouseParam.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("DropCls") && !value["DropCls"].IsNull())
    {
        if (!value["DropCls"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ClickHouseParam.DropCls` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dropCls.Deserialize(value["DropCls"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dropClsHasBeenSet = true;
    }

    if (value.HasMember("BatchSize") && !value["BatchSize"].IsNull())
    {
        if (!value["BatchSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClickHouseParam.BatchSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_batchSize = value["BatchSize"].GetInt64();
        m_batchSizeHasBeenSet = true;
    }

    if (value.HasMember("ConsumerFetchMinBytes") && !value["ConsumerFetchMinBytes"].IsNull())
    {
        if (!value["ConsumerFetchMinBytes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClickHouseParam.ConsumerFetchMinBytes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_consumerFetchMinBytes = value["ConsumerFetchMinBytes"].GetInt64();
        m_consumerFetchMinBytesHasBeenSet = true;
    }

    if (value.HasMember("ConsumerFetchMaxWaitMs") && !value["ConsumerFetchMaxWaitMs"].IsNull())
    {
        if (!value["ConsumerFetchMaxWaitMs"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClickHouseParam.ConsumerFetchMaxWaitMs` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_consumerFetchMaxWaitMs = value["ConsumerFetchMaxWaitMs"].GetInt64();
        m_consumerFetchMaxWaitMsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClickHouseParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clusterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cluster";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cluster.c_str(), allocator).Move(), allocator);
    }

    if (m_databaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Database";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_database.c_str(), allocator).Move(), allocator);
    }

    if (m_tableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Table";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_table.c_str(), allocator).Move(), allocator);
    }

    if (m_schemaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Schema";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_schema.begin(); itr != m_schema.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_resourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resource.c_str(), allocator).Move(), allocator);
    }

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_port, allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceVipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceVip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceVip.c_str(), allocator).Move(), allocator);
    }

    if (m_uniqVpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqVpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uniqVpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_selfBuiltHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelfBuilt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_selfBuilt, allocator);
    }

    if (m_dropInvalidMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DropInvalidMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dropInvalidMessage, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_dropClsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DropCls";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dropCls.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_batchSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_batchSize, allocator);
    }

    if (m_consumerFetchMinBytesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumerFetchMinBytes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_consumerFetchMinBytes, allocator);
    }

    if (m_consumerFetchMaxWaitMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumerFetchMaxWaitMs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_consumerFetchMaxWaitMs, allocator);
    }

}


string ClickHouseParam::GetCluster() const
{
    return m_cluster;
}

void ClickHouseParam::SetCluster(const string& _cluster)
{
    m_cluster = _cluster;
    m_clusterHasBeenSet = true;
}

bool ClickHouseParam::ClusterHasBeenSet() const
{
    return m_clusterHasBeenSet;
}

string ClickHouseParam::GetDatabase() const
{
    return m_database;
}

void ClickHouseParam::SetDatabase(const string& _database)
{
    m_database = _database;
    m_databaseHasBeenSet = true;
}

bool ClickHouseParam::DatabaseHasBeenSet() const
{
    return m_databaseHasBeenSet;
}

string ClickHouseParam::GetTable() const
{
    return m_table;
}

void ClickHouseParam::SetTable(const string& _table)
{
    m_table = _table;
    m_tableHasBeenSet = true;
}

bool ClickHouseParam::TableHasBeenSet() const
{
    return m_tableHasBeenSet;
}

vector<ClickHouseSchema> ClickHouseParam::GetSchema() const
{
    return m_schema;
}

void ClickHouseParam::SetSchema(const vector<ClickHouseSchema>& _schema)
{
    m_schema = _schema;
    m_schemaHasBeenSet = true;
}

bool ClickHouseParam::SchemaHasBeenSet() const
{
    return m_schemaHasBeenSet;
}

string ClickHouseParam::GetResource() const
{
    return m_resource;
}

void ClickHouseParam::SetResource(const string& _resource)
{
    m_resource = _resource;
    m_resourceHasBeenSet = true;
}

bool ClickHouseParam::ResourceHasBeenSet() const
{
    return m_resourceHasBeenSet;
}

string ClickHouseParam::GetIp() const
{
    return m_ip;
}

void ClickHouseParam::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool ClickHouseParam::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

int64_t ClickHouseParam::GetPort() const
{
    return m_port;
}

void ClickHouseParam::SetPort(const int64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool ClickHouseParam::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string ClickHouseParam::GetUserName() const
{
    return m_userName;
}

void ClickHouseParam::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool ClickHouseParam::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string ClickHouseParam::GetPassword() const
{
    return m_password;
}

void ClickHouseParam::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool ClickHouseParam::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

string ClickHouseParam::GetServiceVip() const
{
    return m_serviceVip;
}

void ClickHouseParam::SetServiceVip(const string& _serviceVip)
{
    m_serviceVip = _serviceVip;
    m_serviceVipHasBeenSet = true;
}

bool ClickHouseParam::ServiceVipHasBeenSet() const
{
    return m_serviceVipHasBeenSet;
}

string ClickHouseParam::GetUniqVpcId() const
{
    return m_uniqVpcId;
}

void ClickHouseParam::SetUniqVpcId(const string& _uniqVpcId)
{
    m_uniqVpcId = _uniqVpcId;
    m_uniqVpcIdHasBeenSet = true;
}

bool ClickHouseParam::UniqVpcIdHasBeenSet() const
{
    return m_uniqVpcIdHasBeenSet;
}

bool ClickHouseParam::GetSelfBuilt() const
{
    return m_selfBuilt;
}

void ClickHouseParam::SetSelfBuilt(const bool& _selfBuilt)
{
    m_selfBuilt = _selfBuilt;
    m_selfBuiltHasBeenSet = true;
}

bool ClickHouseParam::SelfBuiltHasBeenSet() const
{
    return m_selfBuiltHasBeenSet;
}

bool ClickHouseParam::GetDropInvalidMessage() const
{
    return m_dropInvalidMessage;
}

void ClickHouseParam::SetDropInvalidMessage(const bool& _dropInvalidMessage)
{
    m_dropInvalidMessage = _dropInvalidMessage;
    m_dropInvalidMessageHasBeenSet = true;
}

bool ClickHouseParam::DropInvalidMessageHasBeenSet() const
{
    return m_dropInvalidMessageHasBeenSet;
}

string ClickHouseParam::GetType() const
{
    return m_type;
}

void ClickHouseParam::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ClickHouseParam::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

DropCls ClickHouseParam::GetDropCls() const
{
    return m_dropCls;
}

void ClickHouseParam::SetDropCls(const DropCls& _dropCls)
{
    m_dropCls = _dropCls;
    m_dropClsHasBeenSet = true;
}

bool ClickHouseParam::DropClsHasBeenSet() const
{
    return m_dropClsHasBeenSet;
}

int64_t ClickHouseParam::GetBatchSize() const
{
    return m_batchSize;
}

void ClickHouseParam::SetBatchSize(const int64_t& _batchSize)
{
    m_batchSize = _batchSize;
    m_batchSizeHasBeenSet = true;
}

bool ClickHouseParam::BatchSizeHasBeenSet() const
{
    return m_batchSizeHasBeenSet;
}

int64_t ClickHouseParam::GetConsumerFetchMinBytes() const
{
    return m_consumerFetchMinBytes;
}

void ClickHouseParam::SetConsumerFetchMinBytes(const int64_t& _consumerFetchMinBytes)
{
    m_consumerFetchMinBytes = _consumerFetchMinBytes;
    m_consumerFetchMinBytesHasBeenSet = true;
}

bool ClickHouseParam::ConsumerFetchMinBytesHasBeenSet() const
{
    return m_consumerFetchMinBytesHasBeenSet;
}

int64_t ClickHouseParam::GetConsumerFetchMaxWaitMs() const
{
    return m_consumerFetchMaxWaitMs;
}

void ClickHouseParam::SetConsumerFetchMaxWaitMs(const int64_t& _consumerFetchMaxWaitMs)
{
    m_consumerFetchMaxWaitMs = _consumerFetchMaxWaitMs;
    m_consumerFetchMaxWaitMsHasBeenSet = true;
}

bool ClickHouseParam::ConsumerFetchMaxWaitMsHasBeenSet() const
{
    return m_consumerFetchMaxWaitMsHasBeenSet;
}

