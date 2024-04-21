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

#include <tencentcloud/trocket/v20230308/model/PacketStatistics.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trocket::V20230308::Model;
using namespace std;

PacketStatistics::PacketStatistics() :
    m_messageTypeHasBeenSet(false),
    m_qosHasBeenSet(false),
    m_countHasBeenSet(false)
{
}

CoreInternalOutcome PacketStatistics::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MessageType") && !value["MessageType"].IsNull())
    {
        if (!value["MessageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PacketStatistics.MessageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_messageType = string(value["MessageType"].GetString());
        m_messageTypeHasBeenSet = true;
    }

    if (value.HasMember("Qos") && !value["Qos"].IsNull())
    {
        if (!value["Qos"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PacketStatistics.Qos` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_qos = value["Qos"].GetInt64();
        m_qosHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PacketStatistics.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PacketStatistics::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_messageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MessageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_messageType.c_str(), allocator).Move(), allocator);
    }

    if (m_qosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Qos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_qos, allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

}


string PacketStatistics::GetMessageType() const
{
    return m_messageType;
}

void PacketStatistics::SetMessageType(const string& _messageType)
{
    m_messageType = _messageType;
    m_messageTypeHasBeenSet = true;
}

bool PacketStatistics::MessageTypeHasBeenSet() const
{
    return m_messageTypeHasBeenSet;
}

int64_t PacketStatistics::GetQos() const
{
    return m_qos;
}

void PacketStatistics::SetQos(const int64_t& _qos)
{
    m_qos = _qos;
    m_qosHasBeenSet = true;
}

bool PacketStatistics::QosHasBeenSet() const
{
    return m_qosHasBeenSet;
}

int64_t PacketStatistics::GetCount() const
{
    return m_count;
}

void PacketStatistics::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool PacketStatistics::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

