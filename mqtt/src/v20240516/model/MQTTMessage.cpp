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

#include <tencentcloud/mqtt/v20240516/model/MQTTMessage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mqtt::V20240516::Model;
using namespace std;

MQTTMessage::MQTTMessage() :
    m_messageIdHasBeenSet(false),
    m_clientIdHasBeenSet(false),
    m_qosHasBeenSet(false),
    m_storeTimestampHasBeenSet(false),
    m_originTopicHasBeenSet(false)
{
}

CoreInternalOutcome MQTTMessage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MessageId") && !value["MessageId"].IsNull())
    {
        if (!value["MessageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MQTTMessage.MessageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_messageId = string(value["MessageId"].GetString());
        m_messageIdHasBeenSet = true;
    }

    if (value.HasMember("ClientId") && !value["ClientId"].IsNull())
    {
        if (!value["ClientId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MQTTMessage.ClientId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientId = string(value["ClientId"].GetString());
        m_clientIdHasBeenSet = true;
    }

    if (value.HasMember("Qos") && !value["Qos"].IsNull())
    {
        if (!value["Qos"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MQTTMessage.Qos` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_qos = string(value["Qos"].GetString());
        m_qosHasBeenSet = true;
    }

    if (value.HasMember("StoreTimestamp") && !value["StoreTimestamp"].IsNull())
    {
        if (!value["StoreTimestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MQTTMessage.StoreTimestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storeTimestamp = value["StoreTimestamp"].GetInt64();
        m_storeTimestampHasBeenSet = true;
    }

    if (value.HasMember("OriginTopic") && !value["OriginTopic"].IsNull())
    {
        if (!value["OriginTopic"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MQTTMessage.OriginTopic` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originTopic = string(value["OriginTopic"].GetString());
        m_originTopicHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MQTTMessage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_messageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MessageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_messageId.c_str(), allocator).Move(), allocator);
    }

    if (m_clientIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientId.c_str(), allocator).Move(), allocator);
    }

    if (m_qosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Qos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_qos.c_str(), allocator).Move(), allocator);
    }

    if (m_storeTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StoreTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storeTimestamp, allocator);
    }

    if (m_originTopicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginTopic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originTopic.c_str(), allocator).Move(), allocator);
    }

}


string MQTTMessage::GetMessageId() const
{
    return m_messageId;
}

void MQTTMessage::SetMessageId(const string& _messageId)
{
    m_messageId = _messageId;
    m_messageIdHasBeenSet = true;
}

bool MQTTMessage::MessageIdHasBeenSet() const
{
    return m_messageIdHasBeenSet;
}

string MQTTMessage::GetClientId() const
{
    return m_clientId;
}

void MQTTMessage::SetClientId(const string& _clientId)
{
    m_clientId = _clientId;
    m_clientIdHasBeenSet = true;
}

bool MQTTMessage::ClientIdHasBeenSet() const
{
    return m_clientIdHasBeenSet;
}

string MQTTMessage::GetQos() const
{
    return m_qos;
}

void MQTTMessage::SetQos(const string& _qos)
{
    m_qos = _qos;
    m_qosHasBeenSet = true;
}

bool MQTTMessage::QosHasBeenSet() const
{
    return m_qosHasBeenSet;
}

int64_t MQTTMessage::GetStoreTimestamp() const
{
    return m_storeTimestamp;
}

void MQTTMessage::SetStoreTimestamp(const int64_t& _storeTimestamp)
{
    m_storeTimestamp = _storeTimestamp;
    m_storeTimestampHasBeenSet = true;
}

bool MQTTMessage::StoreTimestampHasBeenSet() const
{
    return m_storeTimestampHasBeenSet;
}

string MQTTMessage::GetOriginTopic() const
{
    return m_originTopic;
}

void MQTTMessage::SetOriginTopic(const string& _originTopic)
{
    m_originTopic = _originTopic;
    m_originTopicHasBeenSet = true;
}

bool MQTTMessage::OriginTopicHasBeenSet() const
{
    return m_originTopicHasBeenSet;
}

