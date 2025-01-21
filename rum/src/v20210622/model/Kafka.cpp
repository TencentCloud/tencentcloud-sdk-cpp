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

#include <tencentcloud/rum/v20210622/model/Kafka.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

Kafka::Kafka() :
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

CoreInternalOutcome Kafka::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EnableKafka") && !value["EnableKafka"].IsNull())
    {
        if (!value["EnableKafka"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Kafka.EnableKafka` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_enableKafka = value["EnableKafka"].GetUint64();
        m_enableKafkaHasBeenSet = true;
    }

    if (value.HasMember("KafkaHost") && !value["KafkaHost"].IsNull())
    {
        if (!value["KafkaHost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Kafka.KafkaHost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kafkaHost = string(value["KafkaHost"].GetString());
        m_kafkaHostHasBeenSet = true;
    }

    if (value.HasMember("KafkaTopic") && !value["KafkaTopic"].IsNull())
    {
        if (!value["KafkaTopic"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Kafka.KafkaTopic` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kafkaTopic = string(value["KafkaTopic"].GetString());
        m_kafkaTopicHasBeenSet = true;
    }

    if (value.HasMember("KafkaVersion") && !value["KafkaVersion"].IsNull())
    {
        if (!value["KafkaVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Kafka.KafkaVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kafkaVersion = string(value["KafkaVersion"].GetString());
        m_kafkaVersionHasBeenSet = true;
    }

    if (value.HasMember("SaslUserName") && !value["SaslUserName"].IsNull())
    {
        if (!value["SaslUserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Kafka.SaslUserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_saslUserName = string(value["SaslUserName"].GetString());
        m_saslUserNameHasBeenSet = true;
    }

    if (value.HasMember("SaslPassword") && !value["SaslPassword"].IsNull())
    {
        if (!value["SaslPassword"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Kafka.SaslPassword` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_saslPassword = string(value["SaslPassword"].GetString());
        m_saslPasswordHasBeenSet = true;
    }

    if (value.HasMember("SaslMechanism") && !value["SaslMechanism"].IsNull())
    {
        if (!value["SaslMechanism"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Kafka.SaslMechanism` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_saslMechanism = string(value["SaslMechanism"].GetString());
        m_saslMechanismHasBeenSet = true;
    }

    if (value.HasMember("SinkId") && !value["SinkId"].IsNull())
    {
        if (!value["SinkId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Kafka.SinkId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sinkId = value["SinkId"].GetUint64();
        m_sinkIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Kafka::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enableKafkaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableKafka";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableKafka, allocator);
    }

    if (m_kafkaHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KafkaHost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kafkaHost.c_str(), allocator).Move(), allocator);
    }

    if (m_kafkaTopicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KafkaTopic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kafkaTopic.c_str(), allocator).Move(), allocator);
    }

    if (m_kafkaVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KafkaVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kafkaVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_saslUserNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SaslUserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_saslUserName.c_str(), allocator).Move(), allocator);
    }

    if (m_saslPasswordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SaslPassword";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_saslPassword.c_str(), allocator).Move(), allocator);
    }

    if (m_saslMechanismHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SaslMechanism";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_saslMechanism.c_str(), allocator).Move(), allocator);
    }

    if (m_sinkIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SinkId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sinkId, allocator);
    }

}


uint64_t Kafka::GetEnableKafka() const
{
    return m_enableKafka;
}

void Kafka::SetEnableKafka(const uint64_t& _enableKafka)
{
    m_enableKafka = _enableKafka;
    m_enableKafkaHasBeenSet = true;
}

bool Kafka::EnableKafkaHasBeenSet() const
{
    return m_enableKafkaHasBeenSet;
}

string Kafka::GetKafkaHost() const
{
    return m_kafkaHost;
}

void Kafka::SetKafkaHost(const string& _kafkaHost)
{
    m_kafkaHost = _kafkaHost;
    m_kafkaHostHasBeenSet = true;
}

bool Kafka::KafkaHostHasBeenSet() const
{
    return m_kafkaHostHasBeenSet;
}

string Kafka::GetKafkaTopic() const
{
    return m_kafkaTopic;
}

void Kafka::SetKafkaTopic(const string& _kafkaTopic)
{
    m_kafkaTopic = _kafkaTopic;
    m_kafkaTopicHasBeenSet = true;
}

bool Kafka::KafkaTopicHasBeenSet() const
{
    return m_kafkaTopicHasBeenSet;
}

string Kafka::GetKafkaVersion() const
{
    return m_kafkaVersion;
}

void Kafka::SetKafkaVersion(const string& _kafkaVersion)
{
    m_kafkaVersion = _kafkaVersion;
    m_kafkaVersionHasBeenSet = true;
}

bool Kafka::KafkaVersionHasBeenSet() const
{
    return m_kafkaVersionHasBeenSet;
}

string Kafka::GetSaslUserName() const
{
    return m_saslUserName;
}

void Kafka::SetSaslUserName(const string& _saslUserName)
{
    m_saslUserName = _saslUserName;
    m_saslUserNameHasBeenSet = true;
}

bool Kafka::SaslUserNameHasBeenSet() const
{
    return m_saslUserNameHasBeenSet;
}

string Kafka::GetSaslPassword() const
{
    return m_saslPassword;
}

void Kafka::SetSaslPassword(const string& _saslPassword)
{
    m_saslPassword = _saslPassword;
    m_saslPasswordHasBeenSet = true;
}

bool Kafka::SaslPasswordHasBeenSet() const
{
    return m_saslPasswordHasBeenSet;
}

string Kafka::GetSaslMechanism() const
{
    return m_saslMechanism;
}

void Kafka::SetSaslMechanism(const string& _saslMechanism)
{
    m_saslMechanism = _saslMechanism;
    m_saslMechanismHasBeenSet = true;
}

bool Kafka::SaslMechanismHasBeenSet() const
{
    return m_saslMechanismHasBeenSet;
}

uint64_t Kafka::GetSinkId() const
{
    return m_sinkId;
}

void Kafka::SetSinkId(const uint64_t& _sinkId)
{
    m_sinkId = _sinkId;
    m_sinkIdHasBeenSet = true;
}

bool Kafka::SinkIdHasBeenSet() const
{
    return m_sinkIdHasBeenSet;
}

