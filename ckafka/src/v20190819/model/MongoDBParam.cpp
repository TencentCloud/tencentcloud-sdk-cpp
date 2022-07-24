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

#include <tencentcloud/ckafka/v20190819/model/MongoDBParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

MongoDBParam::MongoDBParam() :
    m_databaseHasBeenSet(false),
    m_collectionHasBeenSet(false),
    m_copyExistingHasBeenSet(false),
    m_resourceHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_portHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_listeningEventHasBeenSet(false),
    m_readPreferenceHasBeenSet(false),
    m_pipelineHasBeenSet(false),
    m_selfBuiltHasBeenSet(false)
{
}

CoreInternalOutcome MongoDBParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Database") && !value["Database"].IsNull())
    {
        if (!value["Database"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MongoDBParam.Database` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_database = string(value["Database"].GetString());
        m_databaseHasBeenSet = true;
    }

    if (value.HasMember("Collection") && !value["Collection"].IsNull())
    {
        if (!value["Collection"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MongoDBParam.Collection` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_collection = string(value["Collection"].GetString());
        m_collectionHasBeenSet = true;
    }

    if (value.HasMember("CopyExisting") && !value["CopyExisting"].IsNull())
    {
        if (!value["CopyExisting"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `MongoDBParam.CopyExisting` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_copyExisting = value["CopyExisting"].GetBool();
        m_copyExistingHasBeenSet = true;
    }

    if (value.HasMember("Resource") && !value["Resource"].IsNull())
    {
        if (!value["Resource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MongoDBParam.Resource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resource = string(value["Resource"].GetString());
        m_resourceHasBeenSet = true;
    }

    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MongoDBParam.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MongoDBParam.Port` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetInt64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MongoDBParam.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("Password") && !value["Password"].IsNull())
    {
        if (!value["Password"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MongoDBParam.Password` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_password = string(value["Password"].GetString());
        m_passwordHasBeenSet = true;
    }

    if (value.HasMember("ListeningEvent") && !value["ListeningEvent"].IsNull())
    {
        if (!value["ListeningEvent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MongoDBParam.ListeningEvent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_listeningEvent = string(value["ListeningEvent"].GetString());
        m_listeningEventHasBeenSet = true;
    }

    if (value.HasMember("ReadPreference") && !value["ReadPreference"].IsNull())
    {
        if (!value["ReadPreference"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MongoDBParam.ReadPreference` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_readPreference = string(value["ReadPreference"].GetString());
        m_readPreferenceHasBeenSet = true;
    }

    if (value.HasMember("Pipeline") && !value["Pipeline"].IsNull())
    {
        if (!value["Pipeline"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MongoDBParam.Pipeline` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pipeline = string(value["Pipeline"].GetString());
        m_pipelineHasBeenSet = true;
    }

    if (value.HasMember("SelfBuilt") && !value["SelfBuilt"].IsNull())
    {
        if (!value["SelfBuilt"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `MongoDBParam.SelfBuilt` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_selfBuilt = value["SelfBuilt"].GetBool();
        m_selfBuiltHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MongoDBParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_databaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Database";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_database.c_str(), allocator).Move(), allocator);
    }

    if (m_collectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Collection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_collection.c_str(), allocator).Move(), allocator);
    }

    if (m_copyExistingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CopyExisting";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_copyExisting, allocator);
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

    if (m_listeningEventHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListeningEvent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_listeningEvent.c_str(), allocator).Move(), allocator);
    }

    if (m_readPreferenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadPreference";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_readPreference.c_str(), allocator).Move(), allocator);
    }

    if (m_pipelineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pipeline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pipeline.c_str(), allocator).Move(), allocator);
    }

    if (m_selfBuiltHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelfBuilt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_selfBuilt, allocator);
    }

}


string MongoDBParam::GetDatabase() const
{
    return m_database;
}

void MongoDBParam::SetDatabase(const string& _database)
{
    m_database = _database;
    m_databaseHasBeenSet = true;
}

bool MongoDBParam::DatabaseHasBeenSet() const
{
    return m_databaseHasBeenSet;
}

string MongoDBParam::GetCollection() const
{
    return m_collection;
}

void MongoDBParam::SetCollection(const string& _collection)
{
    m_collection = _collection;
    m_collectionHasBeenSet = true;
}

bool MongoDBParam::CollectionHasBeenSet() const
{
    return m_collectionHasBeenSet;
}

bool MongoDBParam::GetCopyExisting() const
{
    return m_copyExisting;
}

void MongoDBParam::SetCopyExisting(const bool& _copyExisting)
{
    m_copyExisting = _copyExisting;
    m_copyExistingHasBeenSet = true;
}

bool MongoDBParam::CopyExistingHasBeenSet() const
{
    return m_copyExistingHasBeenSet;
}

string MongoDBParam::GetResource() const
{
    return m_resource;
}

void MongoDBParam::SetResource(const string& _resource)
{
    m_resource = _resource;
    m_resourceHasBeenSet = true;
}

bool MongoDBParam::ResourceHasBeenSet() const
{
    return m_resourceHasBeenSet;
}

string MongoDBParam::GetIp() const
{
    return m_ip;
}

void MongoDBParam::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool MongoDBParam::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

int64_t MongoDBParam::GetPort() const
{
    return m_port;
}

void MongoDBParam::SetPort(const int64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool MongoDBParam::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string MongoDBParam::GetUserName() const
{
    return m_userName;
}

void MongoDBParam::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool MongoDBParam::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string MongoDBParam::GetPassword() const
{
    return m_password;
}

void MongoDBParam::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool MongoDBParam::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

string MongoDBParam::GetListeningEvent() const
{
    return m_listeningEvent;
}

void MongoDBParam::SetListeningEvent(const string& _listeningEvent)
{
    m_listeningEvent = _listeningEvent;
    m_listeningEventHasBeenSet = true;
}

bool MongoDBParam::ListeningEventHasBeenSet() const
{
    return m_listeningEventHasBeenSet;
}

string MongoDBParam::GetReadPreference() const
{
    return m_readPreference;
}

void MongoDBParam::SetReadPreference(const string& _readPreference)
{
    m_readPreference = _readPreference;
    m_readPreferenceHasBeenSet = true;
}

bool MongoDBParam::ReadPreferenceHasBeenSet() const
{
    return m_readPreferenceHasBeenSet;
}

string MongoDBParam::GetPipeline() const
{
    return m_pipeline;
}

void MongoDBParam::SetPipeline(const string& _pipeline)
{
    m_pipeline = _pipeline;
    m_pipelineHasBeenSet = true;
}

bool MongoDBParam::PipelineHasBeenSet() const
{
    return m_pipelineHasBeenSet;
}

bool MongoDBParam::GetSelfBuilt() const
{
    return m_selfBuilt;
}

void MongoDBParam::SetSelfBuilt(const bool& _selfBuilt)
{
    m_selfBuilt = _selfBuilt;
    m_selfBuiltHasBeenSet = true;
}

bool MongoDBParam::SelfBuiltHasBeenSet() const
{
    return m_selfBuiltHasBeenSet;
}

