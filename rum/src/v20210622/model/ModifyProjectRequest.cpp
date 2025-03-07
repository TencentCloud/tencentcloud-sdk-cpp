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

#include <tencentcloud/rum/v20210622/model/ModifyProjectRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

ModifyProjectRequest::ModifyProjectRequest() :
    m_iDHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_uRLHasBeenSet(false),
    m_repoHasBeenSet(false),
    m_instanceIDHasBeenSet(false),
    m_rateHasBeenSet(false),
    m_enableURLGroupHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_descHasBeenSet(false),
    m_enableKafkaHasBeenSet(false),
    m_kafkaHostHasBeenSet(false),
    m_kafkaTopicHasBeenSet(false),
    m_kafkaVersionHasBeenSet(false),
    m_saslUserNameHasBeenSet(false),
    m_saslPasswordHasBeenSet(false),
    m_saslMechanismHasBeenSet(false),
    m_sinkIdHasBeenSet(false)
{
}

string ModifyProjectRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_iD, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_uRLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "URL";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_uRL.c_str(), allocator).Move(), allocator);
    }

    if (m_repoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Repo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_repo.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceID.c_str(), allocator).Move(), allocator);
    }

    if (m_rateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_rate.c_str(), allocator).Move(), allocator);
    }

    if (m_enableURLGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableURLGroup";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableURLGroup, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_descHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Desc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_desc.c_str(), allocator).Move(), allocator);
    }

    if (m_enableKafkaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableKafka";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableKafka, allocator);
    }

    if (m_kafkaHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KafkaHost";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_kafkaHost.c_str(), allocator).Move(), allocator);
    }

    if (m_kafkaTopicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KafkaTopic";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_kafkaTopic.c_str(), allocator).Move(), allocator);
    }

    if (m_kafkaVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KafkaVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_kafkaVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_saslUserNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SaslUserName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_saslUserName.c_str(), allocator).Move(), allocator);
    }

    if (m_saslPasswordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SaslPassword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_saslPassword.c_str(), allocator).Move(), allocator);
    }

    if (m_saslMechanismHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SaslMechanism";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_saslMechanism.c_str(), allocator).Move(), allocator);
    }

    if (m_sinkIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SinkId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sinkId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ModifyProjectRequest::GetID() const
{
    return m_iD;
}

void ModifyProjectRequest::SetID(const uint64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool ModifyProjectRequest::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string ModifyProjectRequest::GetName() const
{
    return m_name;
}

void ModifyProjectRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyProjectRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyProjectRequest::GetURL() const
{
    return m_uRL;
}

void ModifyProjectRequest::SetURL(const string& _uRL)
{
    m_uRL = _uRL;
    m_uRLHasBeenSet = true;
}

bool ModifyProjectRequest::URLHasBeenSet() const
{
    return m_uRLHasBeenSet;
}

string ModifyProjectRequest::GetRepo() const
{
    return m_repo;
}

void ModifyProjectRequest::SetRepo(const string& _repo)
{
    m_repo = _repo;
    m_repoHasBeenSet = true;
}

bool ModifyProjectRequest::RepoHasBeenSet() const
{
    return m_repoHasBeenSet;
}

string ModifyProjectRequest::GetInstanceID() const
{
    return m_instanceID;
}

void ModifyProjectRequest::SetInstanceID(const string& _instanceID)
{
    m_instanceID = _instanceID;
    m_instanceIDHasBeenSet = true;
}

bool ModifyProjectRequest::InstanceIDHasBeenSet() const
{
    return m_instanceIDHasBeenSet;
}

string ModifyProjectRequest::GetRate() const
{
    return m_rate;
}

void ModifyProjectRequest::SetRate(const string& _rate)
{
    m_rate = _rate;
    m_rateHasBeenSet = true;
}

bool ModifyProjectRequest::RateHasBeenSet() const
{
    return m_rateHasBeenSet;
}

uint64_t ModifyProjectRequest::GetEnableURLGroup() const
{
    return m_enableURLGroup;
}

void ModifyProjectRequest::SetEnableURLGroup(const uint64_t& _enableURLGroup)
{
    m_enableURLGroup = _enableURLGroup;
    m_enableURLGroupHasBeenSet = true;
}

bool ModifyProjectRequest::EnableURLGroupHasBeenSet() const
{
    return m_enableURLGroupHasBeenSet;
}

string ModifyProjectRequest::GetType() const
{
    return m_type;
}

void ModifyProjectRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ModifyProjectRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ModifyProjectRequest::GetDesc() const
{
    return m_desc;
}

void ModifyProjectRequest::SetDesc(const string& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool ModifyProjectRequest::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}

uint64_t ModifyProjectRequest::GetEnableKafka() const
{
    return m_enableKafka;
}

void ModifyProjectRequest::SetEnableKafka(const uint64_t& _enableKafka)
{
    m_enableKafka = _enableKafka;
    m_enableKafkaHasBeenSet = true;
}

bool ModifyProjectRequest::EnableKafkaHasBeenSet() const
{
    return m_enableKafkaHasBeenSet;
}

string ModifyProjectRequest::GetKafkaHost() const
{
    return m_kafkaHost;
}

void ModifyProjectRequest::SetKafkaHost(const string& _kafkaHost)
{
    m_kafkaHost = _kafkaHost;
    m_kafkaHostHasBeenSet = true;
}

bool ModifyProjectRequest::KafkaHostHasBeenSet() const
{
    return m_kafkaHostHasBeenSet;
}

string ModifyProjectRequest::GetKafkaTopic() const
{
    return m_kafkaTopic;
}

void ModifyProjectRequest::SetKafkaTopic(const string& _kafkaTopic)
{
    m_kafkaTopic = _kafkaTopic;
    m_kafkaTopicHasBeenSet = true;
}

bool ModifyProjectRequest::KafkaTopicHasBeenSet() const
{
    return m_kafkaTopicHasBeenSet;
}

string ModifyProjectRequest::GetKafkaVersion() const
{
    return m_kafkaVersion;
}

void ModifyProjectRequest::SetKafkaVersion(const string& _kafkaVersion)
{
    m_kafkaVersion = _kafkaVersion;
    m_kafkaVersionHasBeenSet = true;
}

bool ModifyProjectRequest::KafkaVersionHasBeenSet() const
{
    return m_kafkaVersionHasBeenSet;
}

string ModifyProjectRequest::GetSaslUserName() const
{
    return m_saslUserName;
}

void ModifyProjectRequest::SetSaslUserName(const string& _saslUserName)
{
    m_saslUserName = _saslUserName;
    m_saslUserNameHasBeenSet = true;
}

bool ModifyProjectRequest::SaslUserNameHasBeenSet() const
{
    return m_saslUserNameHasBeenSet;
}

string ModifyProjectRequest::GetSaslPassword() const
{
    return m_saslPassword;
}

void ModifyProjectRequest::SetSaslPassword(const string& _saslPassword)
{
    m_saslPassword = _saslPassword;
    m_saslPasswordHasBeenSet = true;
}

bool ModifyProjectRequest::SaslPasswordHasBeenSet() const
{
    return m_saslPasswordHasBeenSet;
}

string ModifyProjectRequest::GetSaslMechanism() const
{
    return m_saslMechanism;
}

void ModifyProjectRequest::SetSaslMechanism(const string& _saslMechanism)
{
    m_saslMechanism = _saslMechanism;
    m_saslMechanismHasBeenSet = true;
}

bool ModifyProjectRequest::SaslMechanismHasBeenSet() const
{
    return m_saslMechanismHasBeenSet;
}

uint64_t ModifyProjectRequest::GetSinkId() const
{
    return m_sinkId;
}

void ModifyProjectRequest::SetSinkId(const uint64_t& _sinkId)
{
    m_sinkId = _sinkId;
    m_sinkIdHasBeenSet = true;
}

bool ModifyProjectRequest::SinkIdHasBeenSet() const
{
    return m_sinkIdHasBeenSet;
}


