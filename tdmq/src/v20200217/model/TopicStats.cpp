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

#include <tencentcloud/tdmq/v20200217/model/TopicStats.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

TopicStats::TopicStats() :
    m_brokerNameHasBeenSet(false),
    m_queueIdHasBeenSet(false),
    m_minOffsetHasBeenSet(false),
    m_maxOffsetHasBeenSet(false),
    m_messageCountHasBeenSet(false),
    m_lastUpdateTimestampHasBeenSet(false)
{
}

CoreInternalOutcome TopicStats::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BrokerName") && !value["BrokerName"].IsNull())
    {
        if (!value["BrokerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopicStats.BrokerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_brokerName = string(value["BrokerName"].GetString());
        m_brokerNameHasBeenSet = true;
    }

    if (value.HasMember("QueueId") && !value["QueueId"].IsNull())
    {
        if (!value["QueueId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TopicStats.QueueId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_queueId = value["QueueId"].GetInt64();
        m_queueIdHasBeenSet = true;
    }

    if (value.HasMember("MinOffset") && !value["MinOffset"].IsNull())
    {
        if (!value["MinOffset"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TopicStats.MinOffset` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_minOffset = value["MinOffset"].GetInt64();
        m_minOffsetHasBeenSet = true;
    }

    if (value.HasMember("MaxOffset") && !value["MaxOffset"].IsNull())
    {
        if (!value["MaxOffset"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TopicStats.MaxOffset` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxOffset = value["MaxOffset"].GetInt64();
        m_maxOffsetHasBeenSet = true;
    }

    if (value.HasMember("MessageCount") && !value["MessageCount"].IsNull())
    {
        if (!value["MessageCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TopicStats.MessageCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_messageCount = value["MessageCount"].GetInt64();
        m_messageCountHasBeenSet = true;
    }

    if (value.HasMember("LastUpdateTimestamp") && !value["LastUpdateTimestamp"].IsNull())
    {
        if (!value["LastUpdateTimestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TopicStats.LastUpdateTimestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lastUpdateTimestamp = value["LastUpdateTimestamp"].GetInt64();
        m_lastUpdateTimestampHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TopicStats::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_minOffsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinOffset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minOffset, allocator);
    }

    if (m_maxOffsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxOffset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxOffset, allocator);
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


string TopicStats::GetBrokerName() const
{
    return m_brokerName;
}

void TopicStats::SetBrokerName(const string& _brokerName)
{
    m_brokerName = _brokerName;
    m_brokerNameHasBeenSet = true;
}

bool TopicStats::BrokerNameHasBeenSet() const
{
    return m_brokerNameHasBeenSet;
}

int64_t TopicStats::GetQueueId() const
{
    return m_queueId;
}

void TopicStats::SetQueueId(const int64_t& _queueId)
{
    m_queueId = _queueId;
    m_queueIdHasBeenSet = true;
}

bool TopicStats::QueueIdHasBeenSet() const
{
    return m_queueIdHasBeenSet;
}

int64_t TopicStats::GetMinOffset() const
{
    return m_minOffset;
}

void TopicStats::SetMinOffset(const int64_t& _minOffset)
{
    m_minOffset = _minOffset;
    m_minOffsetHasBeenSet = true;
}

bool TopicStats::MinOffsetHasBeenSet() const
{
    return m_minOffsetHasBeenSet;
}

int64_t TopicStats::GetMaxOffset() const
{
    return m_maxOffset;
}

void TopicStats::SetMaxOffset(const int64_t& _maxOffset)
{
    m_maxOffset = _maxOffset;
    m_maxOffsetHasBeenSet = true;
}

bool TopicStats::MaxOffsetHasBeenSet() const
{
    return m_maxOffsetHasBeenSet;
}

int64_t TopicStats::GetMessageCount() const
{
    return m_messageCount;
}

void TopicStats::SetMessageCount(const int64_t& _messageCount)
{
    m_messageCount = _messageCount;
    m_messageCountHasBeenSet = true;
}

bool TopicStats::MessageCountHasBeenSet() const
{
    return m_messageCountHasBeenSet;
}

int64_t TopicStats::GetLastUpdateTimestamp() const
{
    return m_lastUpdateTimestamp;
}

void TopicStats::SetLastUpdateTimestamp(const int64_t& _lastUpdateTimestamp)
{
    m_lastUpdateTimestamp = _lastUpdateTimestamp;
    m_lastUpdateTimestampHasBeenSet = true;
}

bool TopicStats::LastUpdateTimestampHasBeenSet() const
{
    return m_lastUpdateTimestampHasBeenSet;
}

