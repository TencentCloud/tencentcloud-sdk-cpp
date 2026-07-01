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

#include <tencentcloud/trocket/v20230308/model/TopicStatsDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trocket::V20230308::Model;
using namespace std;

TopicStatsDetail::TopicStatsDetail() :
    m_brokerNameHasBeenSet(false),
    m_queueIdHasBeenSet(false),
    m_brokerOffsetHasBeenSet(false),
    m_commitOffsetHasBeenSet(false),
    m_messageCountHasBeenSet(false),
    m_lastUpdateTimestampHasBeenSet(false)
{
}

CoreInternalOutcome TopicStatsDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BrokerName") && !value["BrokerName"].IsNull())
    {
        if (!value["BrokerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopicStatsDetail.BrokerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_brokerName = string(value["BrokerName"].GetString());
        m_brokerNameHasBeenSet = true;
    }

    if (value.HasMember("QueueId") && !value["QueueId"].IsNull())
    {
        if (!value["QueueId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TopicStatsDetail.QueueId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_queueId = value["QueueId"].GetInt64();
        m_queueIdHasBeenSet = true;
    }

    if (value.HasMember("BrokerOffset") && !value["BrokerOffset"].IsNull())
    {
        if (!value["BrokerOffset"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TopicStatsDetail.BrokerOffset` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_brokerOffset = value["BrokerOffset"].GetInt64();
        m_brokerOffsetHasBeenSet = true;
    }

    if (value.HasMember("CommitOffset") && !value["CommitOffset"].IsNull())
    {
        if (!value["CommitOffset"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TopicStatsDetail.CommitOffset` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_commitOffset = value["CommitOffset"].GetInt64();
        m_commitOffsetHasBeenSet = true;
    }

    if (value.HasMember("MessageCount") && !value["MessageCount"].IsNull())
    {
        if (!value["MessageCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TopicStatsDetail.MessageCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_messageCount = value["MessageCount"].GetInt64();
        m_messageCountHasBeenSet = true;
    }

    if (value.HasMember("LastUpdateTimestamp") && !value["LastUpdateTimestamp"].IsNull())
    {
        if (!value["LastUpdateTimestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TopicStatsDetail.LastUpdateTimestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lastUpdateTimestamp = value["LastUpdateTimestamp"].GetInt64();
        m_lastUpdateTimestampHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TopicStatsDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_brokerOffsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BrokerOffset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_brokerOffset, allocator);
    }

    if (m_commitOffsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CommitOffset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_commitOffset, allocator);
    }

    if (m_messageCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MessageCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_messageCount, allocator);
    }

    if (m_lastUpdateTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastUpdateTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastUpdateTimestamp, allocator);
    }

}


string TopicStatsDetail::GetBrokerName() const
{
    return m_brokerName;
}

void TopicStatsDetail::SetBrokerName(const string& _brokerName)
{
    m_brokerName = _brokerName;
    m_brokerNameHasBeenSet = true;
}

bool TopicStatsDetail::BrokerNameHasBeenSet() const
{
    return m_brokerNameHasBeenSet;
}

int64_t TopicStatsDetail::GetQueueId() const
{
    return m_queueId;
}

void TopicStatsDetail::SetQueueId(const int64_t& _queueId)
{
    m_queueId = _queueId;
    m_queueIdHasBeenSet = true;
}

bool TopicStatsDetail::QueueIdHasBeenSet() const
{
    return m_queueIdHasBeenSet;
}

int64_t TopicStatsDetail::GetBrokerOffset() const
{
    return m_brokerOffset;
}

void TopicStatsDetail::SetBrokerOffset(const int64_t& _brokerOffset)
{
    m_brokerOffset = _brokerOffset;
    m_brokerOffsetHasBeenSet = true;
}

bool TopicStatsDetail::BrokerOffsetHasBeenSet() const
{
    return m_brokerOffsetHasBeenSet;
}

int64_t TopicStatsDetail::GetCommitOffset() const
{
    return m_commitOffset;
}

void TopicStatsDetail::SetCommitOffset(const int64_t& _commitOffset)
{
    m_commitOffset = _commitOffset;
    m_commitOffsetHasBeenSet = true;
}

bool TopicStatsDetail::CommitOffsetHasBeenSet() const
{
    return m_commitOffsetHasBeenSet;
}

int64_t TopicStatsDetail::GetMessageCount() const
{
    return m_messageCount;
}

void TopicStatsDetail::SetMessageCount(const int64_t& _messageCount)
{
    m_messageCount = _messageCount;
    m_messageCountHasBeenSet = true;
}

bool TopicStatsDetail::MessageCountHasBeenSet() const
{
    return m_messageCountHasBeenSet;
}

int64_t TopicStatsDetail::GetLastUpdateTimestamp() const
{
    return m_lastUpdateTimestamp;
}

void TopicStatsDetail::SetLastUpdateTimestamp(const int64_t& _lastUpdateTimestamp)
{
    m_lastUpdateTimestamp = _lastUpdateTimestamp;
    m_lastUpdateTimestampHasBeenSet = true;
}

bool TopicStatsDetail::LastUpdateTimestampHasBeenSet() const
{
    return m_lastUpdateTimestampHasBeenSet;
}

