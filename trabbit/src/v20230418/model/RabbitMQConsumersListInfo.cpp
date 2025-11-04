/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/trabbit/v20230418/model/RabbitMQConsumersListInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trabbit::V20230418::Model;
using namespace std;

RabbitMQConsumersListInfo::RabbitMQConsumersListInfo() :
    m_clientIpHasBeenSet(false),
    m_consumerTagHasBeenSet(false),
    m_queueNameHasBeenSet(false),
    m_ackRequiredHasBeenSet(false),
    m_prefetchCountHasBeenSet(false),
    m_activeHasBeenSet(false),
    m_lastDeliveredTimeHasBeenSet(false),
    m_unAckMsgCountHasBeenSet(false),
    m_channelNameHasBeenSet(false)
{
}

CoreInternalOutcome RabbitMQConsumersListInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClientIp") && !value["ClientIp"].IsNull())
    {
        if (!value["ClientIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQConsumersListInfo.ClientIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientIp = string(value["ClientIp"].GetString());
        m_clientIpHasBeenSet = true;
    }

    if (value.HasMember("ConsumerTag") && !value["ConsumerTag"].IsNull())
    {
        if (!value["ConsumerTag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQConsumersListInfo.ConsumerTag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_consumerTag = string(value["ConsumerTag"].GetString());
        m_consumerTagHasBeenSet = true;
    }

    if (value.HasMember("QueueName") && !value["QueueName"].IsNull())
    {
        if (!value["QueueName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQConsumersListInfo.QueueName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queueName = string(value["QueueName"].GetString());
        m_queueNameHasBeenSet = true;
    }

    if (value.HasMember("AckRequired") && !value["AckRequired"].IsNull())
    {
        if (!value["AckRequired"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQConsumersListInfo.AckRequired` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_ackRequired = value["AckRequired"].GetBool();
        m_ackRequiredHasBeenSet = true;
    }

    if (value.HasMember("PrefetchCount") && !value["PrefetchCount"].IsNull())
    {
        if (!value["PrefetchCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQConsumersListInfo.PrefetchCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_prefetchCount = value["PrefetchCount"].GetUint64();
        m_prefetchCountHasBeenSet = true;
    }

    if (value.HasMember("Active") && !value["Active"].IsNull())
    {
        if (!value["Active"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQConsumersListInfo.Active` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_active = string(value["Active"].GetString());
        m_activeHasBeenSet = true;
    }

    if (value.HasMember("LastDeliveredTime") && !value["LastDeliveredTime"].IsNull())
    {
        if (!value["LastDeliveredTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQConsumersListInfo.LastDeliveredTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastDeliveredTime = string(value["LastDeliveredTime"].GetString());
        m_lastDeliveredTimeHasBeenSet = true;
    }

    if (value.HasMember("UnAckMsgCount") && !value["UnAckMsgCount"].IsNull())
    {
        if (!value["UnAckMsgCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQConsumersListInfo.UnAckMsgCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_unAckMsgCount = value["UnAckMsgCount"].GetInt64();
        m_unAckMsgCountHasBeenSet = true;
    }

    if (value.HasMember("ChannelName") && !value["ChannelName"].IsNull())
    {
        if (!value["ChannelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQConsumersListInfo.ChannelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelName = string(value["ChannelName"].GetString());
        m_channelNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RabbitMQConsumersListInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clientIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientIp.c_str(), allocator).Move(), allocator);
    }

    if (m_consumerTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumerTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_consumerTag.c_str(), allocator).Move(), allocator);
    }

    if (m_queueNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueueName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_queueName.c_str(), allocator).Move(), allocator);
    }

    if (m_ackRequiredHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AckRequired";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ackRequired, allocator);
    }

    if (m_prefetchCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrefetchCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_prefetchCount, allocator);
    }

    if (m_activeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Active";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_active.c_str(), allocator).Move(), allocator);
    }

    if (m_lastDeliveredTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastDeliveredTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastDeliveredTime.c_str(), allocator).Move(), allocator);
    }

    if (m_unAckMsgCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnAckMsgCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unAckMsgCount, allocator);
    }

    if (m_channelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelName.c_str(), allocator).Move(), allocator);
    }

}


string RabbitMQConsumersListInfo::GetClientIp() const
{
    return m_clientIp;
}

void RabbitMQConsumersListInfo::SetClientIp(const string& _clientIp)
{
    m_clientIp = _clientIp;
    m_clientIpHasBeenSet = true;
}

bool RabbitMQConsumersListInfo::ClientIpHasBeenSet() const
{
    return m_clientIpHasBeenSet;
}

string RabbitMQConsumersListInfo::GetConsumerTag() const
{
    return m_consumerTag;
}

void RabbitMQConsumersListInfo::SetConsumerTag(const string& _consumerTag)
{
    m_consumerTag = _consumerTag;
    m_consumerTagHasBeenSet = true;
}

bool RabbitMQConsumersListInfo::ConsumerTagHasBeenSet() const
{
    return m_consumerTagHasBeenSet;
}

string RabbitMQConsumersListInfo::GetQueueName() const
{
    return m_queueName;
}

void RabbitMQConsumersListInfo::SetQueueName(const string& _queueName)
{
    m_queueName = _queueName;
    m_queueNameHasBeenSet = true;
}

bool RabbitMQConsumersListInfo::QueueNameHasBeenSet() const
{
    return m_queueNameHasBeenSet;
}

bool RabbitMQConsumersListInfo::GetAckRequired() const
{
    return m_ackRequired;
}

void RabbitMQConsumersListInfo::SetAckRequired(const bool& _ackRequired)
{
    m_ackRequired = _ackRequired;
    m_ackRequiredHasBeenSet = true;
}

bool RabbitMQConsumersListInfo::AckRequiredHasBeenSet() const
{
    return m_ackRequiredHasBeenSet;
}

uint64_t RabbitMQConsumersListInfo::GetPrefetchCount() const
{
    return m_prefetchCount;
}

void RabbitMQConsumersListInfo::SetPrefetchCount(const uint64_t& _prefetchCount)
{
    m_prefetchCount = _prefetchCount;
    m_prefetchCountHasBeenSet = true;
}

bool RabbitMQConsumersListInfo::PrefetchCountHasBeenSet() const
{
    return m_prefetchCountHasBeenSet;
}

string RabbitMQConsumersListInfo::GetActive() const
{
    return m_active;
}

void RabbitMQConsumersListInfo::SetActive(const string& _active)
{
    m_active = _active;
    m_activeHasBeenSet = true;
}

bool RabbitMQConsumersListInfo::ActiveHasBeenSet() const
{
    return m_activeHasBeenSet;
}

string RabbitMQConsumersListInfo::GetLastDeliveredTime() const
{
    return m_lastDeliveredTime;
}

void RabbitMQConsumersListInfo::SetLastDeliveredTime(const string& _lastDeliveredTime)
{
    m_lastDeliveredTime = _lastDeliveredTime;
    m_lastDeliveredTimeHasBeenSet = true;
}

bool RabbitMQConsumersListInfo::LastDeliveredTimeHasBeenSet() const
{
    return m_lastDeliveredTimeHasBeenSet;
}

int64_t RabbitMQConsumersListInfo::GetUnAckMsgCount() const
{
    return m_unAckMsgCount;
}

void RabbitMQConsumersListInfo::SetUnAckMsgCount(const int64_t& _unAckMsgCount)
{
    m_unAckMsgCount = _unAckMsgCount;
    m_unAckMsgCountHasBeenSet = true;
}

bool RabbitMQConsumersListInfo::UnAckMsgCountHasBeenSet() const
{
    return m_unAckMsgCountHasBeenSet;
}

string RabbitMQConsumersListInfo::GetChannelName() const
{
    return m_channelName;
}

void RabbitMQConsumersListInfo::SetChannelName(const string& _channelName)
{
    m_channelName = _channelName;
    m_channelNameHasBeenSet = true;
}

bool RabbitMQConsumersListInfo::ChannelNameHasBeenSet() const
{
    return m_channelNameHasBeenSet;
}

