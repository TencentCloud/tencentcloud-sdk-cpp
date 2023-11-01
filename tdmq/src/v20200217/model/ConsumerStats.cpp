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

#include <tencentcloud/tdmq/v20200217/model/ConsumerStats.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

ConsumerStats::ConsumerStats() :
    m_topicNameHasBeenSet(false),
    m_brokerNameHasBeenSet(false),
    m_queueIdHasBeenSet(false),
    m_consumerClientIdHasBeenSet(false),
    m_consumerOffsetHasBeenSet(false),
    m_brokerOffsetHasBeenSet(false),
    m_diffTotalHasBeenSet(false),
    m_lastTimestampHasBeenSet(false)
{
}

CoreInternalOutcome ConsumerStats::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TopicName") && !value["TopicName"].IsNull())
    {
        if (!value["TopicName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumerStats.TopicName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicName = string(value["TopicName"].GetString());
        m_topicNameHasBeenSet = true;
    }

    if (value.HasMember("BrokerName") && !value["BrokerName"].IsNull())
    {
        if (!value["BrokerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumerStats.BrokerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_brokerName = string(value["BrokerName"].GetString());
        m_brokerNameHasBeenSet = true;
    }

    if (value.HasMember("QueueId") && !value["QueueId"].IsNull())
    {
        if (!value["QueueId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumerStats.QueueId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_queueId = value["QueueId"].GetInt64();
        m_queueIdHasBeenSet = true;
    }

    if (value.HasMember("ConsumerClientId") && !value["ConsumerClientId"].IsNull())
    {
        if (!value["ConsumerClientId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumerStats.ConsumerClientId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_consumerClientId = string(value["ConsumerClientId"].GetString());
        m_consumerClientIdHasBeenSet = true;
    }

    if (value.HasMember("ConsumerOffset") && !value["ConsumerOffset"].IsNull())
    {
        if (!value["ConsumerOffset"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumerStats.ConsumerOffset` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_consumerOffset = value["ConsumerOffset"].GetInt64();
        m_consumerOffsetHasBeenSet = true;
    }

    if (value.HasMember("BrokerOffset") && !value["BrokerOffset"].IsNull())
    {
        if (!value["BrokerOffset"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumerStats.BrokerOffset` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_brokerOffset = value["BrokerOffset"].GetInt64();
        m_brokerOffsetHasBeenSet = true;
    }

    if (value.HasMember("DiffTotal") && !value["DiffTotal"].IsNull())
    {
        if (!value["DiffTotal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumerStats.DiffTotal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_diffTotal = value["DiffTotal"].GetInt64();
        m_diffTotalHasBeenSet = true;
    }

    if (value.HasMember("LastTimestamp") && !value["LastTimestamp"].IsNull())
    {
        if (!value["LastTimestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumerStats.LastTimestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lastTimestamp = value["LastTimestamp"].GetInt64();
        m_lastTimestampHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConsumerStats::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_topicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicName.c_str(), allocator).Move(), allocator);
    }

    if (m_brokerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BrokerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_brokerName.c_str(), allocator).Move(), allocator);
    }

    if (m_queueIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueueId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_queueId, allocator);
    }

    if (m_consumerClientIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumerClientId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_consumerClientId.c_str(), allocator).Move(), allocator);
    }

    if (m_consumerOffsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumerOffset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_consumerOffset, allocator);
    }

    if (m_brokerOffsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BrokerOffset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_brokerOffset, allocator);
    }

    if (m_diffTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiffTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diffTotal, allocator);
    }

    if (m_lastTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastTimestamp, allocator);
    }

}


string ConsumerStats::GetTopicName() const
{
    return m_topicName;
}

void ConsumerStats::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool ConsumerStats::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

string ConsumerStats::GetBrokerName() const
{
    return m_brokerName;
}

void ConsumerStats::SetBrokerName(const string& _brokerName)
{
    m_brokerName = _brokerName;
    m_brokerNameHasBeenSet = true;
}

bool ConsumerStats::BrokerNameHasBeenSet() const
{
    return m_brokerNameHasBeenSet;
}

int64_t ConsumerStats::GetQueueId() const
{
    return m_queueId;
}

void ConsumerStats::SetQueueId(const int64_t& _queueId)
{
    m_queueId = _queueId;
    m_queueIdHasBeenSet = true;
}

bool ConsumerStats::QueueIdHasBeenSet() const
{
    return m_queueIdHasBeenSet;
}

string ConsumerStats::GetConsumerClientId() const
{
    return m_consumerClientId;
}

void ConsumerStats::SetConsumerClientId(const string& _consumerClientId)
{
    m_consumerClientId = _consumerClientId;
    m_consumerClientIdHasBeenSet = true;
}

bool ConsumerStats::ConsumerClientIdHasBeenSet() const
{
    return m_consumerClientIdHasBeenSet;
}

int64_t ConsumerStats::GetConsumerOffset() const
{
    return m_consumerOffset;
}

void ConsumerStats::SetConsumerOffset(const int64_t& _consumerOffset)
{
    m_consumerOffset = _consumerOffset;
    m_consumerOffsetHasBeenSet = true;
}

bool ConsumerStats::ConsumerOffsetHasBeenSet() const
{
    return m_consumerOffsetHasBeenSet;
}

int64_t ConsumerStats::GetBrokerOffset() const
{
    return m_brokerOffset;
}

void ConsumerStats::SetBrokerOffset(const int64_t& _brokerOffset)
{
    m_brokerOffset = _brokerOffset;
    m_brokerOffsetHasBeenSet = true;
}

bool ConsumerStats::BrokerOffsetHasBeenSet() const
{
    return m_brokerOffsetHasBeenSet;
}

int64_t ConsumerStats::GetDiffTotal() const
{
    return m_diffTotal;
}

void ConsumerStats::SetDiffTotal(const int64_t& _diffTotal)
{
    m_diffTotal = _diffTotal;
    m_diffTotalHasBeenSet = true;
}

bool ConsumerStats::DiffTotalHasBeenSet() const
{
    return m_diffTotalHasBeenSet;
}

int64_t ConsumerStats::GetLastTimestamp() const
{
    return m_lastTimestamp;
}

void ConsumerStats::SetLastTimestamp(const int64_t& _lastTimestamp)
{
    m_lastTimestamp = _lastTimestamp;
    m_lastTimestampHasBeenSet = true;
}

bool ConsumerStats::LastTimestampHasBeenSet() const
{
    return m_lastTimestampHasBeenSet;
}

