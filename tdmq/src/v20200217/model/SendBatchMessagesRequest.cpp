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

#include <tencentcloud/tdmq/v20200217/model/SendBatchMessagesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

SendBatchMessagesRequest::SendBatchMessagesRequest() :
    m_topicHasBeenSet(false),
    m_payloadHasBeenSet(false),
    m_stringTokenHasBeenSet(false),
    m_producerNameHasBeenSet(false),
    m_sendTimeoutHasBeenSet(false),
    m_maxPendingMessagesHasBeenSet(false),
    m_batchingMaxMessagesHasBeenSet(false),
    m_batchingMaxPublishDelayHasBeenSet(false),
    m_batchingMaxBytesHasBeenSet(false)
{
}

string SendBatchMessagesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_topicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Topic";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_topic.c_str(), allocator).Move(), allocator);
    }

    if (m_payloadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Payload";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_payload.c_str(), allocator).Move(), allocator);
    }

    if (m_stringTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StringToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_stringToken.c_str(), allocator).Move(), allocator);
    }

    if (m_producerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProducerName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_producerName.c_str(), allocator).Move(), allocator);
    }

    if (m_sendTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SendTimeout";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sendTimeout, allocator);
    }

    if (m_maxPendingMessagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxPendingMessages";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxPendingMessages, allocator);
    }

    if (m_batchingMaxMessagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchingMaxMessages";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_batchingMaxMessages, allocator);
    }

    if (m_batchingMaxPublishDelayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchingMaxPublishDelay";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_batchingMaxPublishDelay, allocator);
    }

    if (m_batchingMaxBytesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchingMaxBytes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_batchingMaxBytes, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SendBatchMessagesRequest::GetTopic() const
{
    return m_topic;
}

void SendBatchMessagesRequest::SetTopic(const string& _topic)
{
    m_topic = _topic;
    m_topicHasBeenSet = true;
}

bool SendBatchMessagesRequest::TopicHasBeenSet() const
{
    return m_topicHasBeenSet;
}

string SendBatchMessagesRequest::GetPayload() const
{
    return m_payload;
}

void SendBatchMessagesRequest::SetPayload(const string& _payload)
{
    m_payload = _payload;
    m_payloadHasBeenSet = true;
}

bool SendBatchMessagesRequest::PayloadHasBeenSet() const
{
    return m_payloadHasBeenSet;
}

string SendBatchMessagesRequest::GetStringToken() const
{
    return m_stringToken;
}

void SendBatchMessagesRequest::SetStringToken(const string& _stringToken)
{
    m_stringToken = _stringToken;
    m_stringTokenHasBeenSet = true;
}

bool SendBatchMessagesRequest::StringTokenHasBeenSet() const
{
    return m_stringTokenHasBeenSet;
}

string SendBatchMessagesRequest::GetProducerName() const
{
    return m_producerName;
}

void SendBatchMessagesRequest::SetProducerName(const string& _producerName)
{
    m_producerName = _producerName;
    m_producerNameHasBeenSet = true;
}

bool SendBatchMessagesRequest::ProducerNameHasBeenSet() const
{
    return m_producerNameHasBeenSet;
}

int64_t SendBatchMessagesRequest::GetSendTimeout() const
{
    return m_sendTimeout;
}

void SendBatchMessagesRequest::SetSendTimeout(const int64_t& _sendTimeout)
{
    m_sendTimeout = _sendTimeout;
    m_sendTimeoutHasBeenSet = true;
}

bool SendBatchMessagesRequest::SendTimeoutHasBeenSet() const
{
    return m_sendTimeoutHasBeenSet;
}

int64_t SendBatchMessagesRequest::GetMaxPendingMessages() const
{
    return m_maxPendingMessages;
}

void SendBatchMessagesRequest::SetMaxPendingMessages(const int64_t& _maxPendingMessages)
{
    m_maxPendingMessages = _maxPendingMessages;
    m_maxPendingMessagesHasBeenSet = true;
}

bool SendBatchMessagesRequest::MaxPendingMessagesHasBeenSet() const
{
    return m_maxPendingMessagesHasBeenSet;
}

int64_t SendBatchMessagesRequest::GetBatchingMaxMessages() const
{
    return m_batchingMaxMessages;
}

void SendBatchMessagesRequest::SetBatchingMaxMessages(const int64_t& _batchingMaxMessages)
{
    m_batchingMaxMessages = _batchingMaxMessages;
    m_batchingMaxMessagesHasBeenSet = true;
}

bool SendBatchMessagesRequest::BatchingMaxMessagesHasBeenSet() const
{
    return m_batchingMaxMessagesHasBeenSet;
}

int64_t SendBatchMessagesRequest::GetBatchingMaxPublishDelay() const
{
    return m_batchingMaxPublishDelay;
}

void SendBatchMessagesRequest::SetBatchingMaxPublishDelay(const int64_t& _batchingMaxPublishDelay)
{
    m_batchingMaxPublishDelay = _batchingMaxPublishDelay;
    m_batchingMaxPublishDelayHasBeenSet = true;
}

bool SendBatchMessagesRequest::BatchingMaxPublishDelayHasBeenSet() const
{
    return m_batchingMaxPublishDelayHasBeenSet;
}

int64_t SendBatchMessagesRequest::GetBatchingMaxBytes() const
{
    return m_batchingMaxBytes;
}

void SendBatchMessagesRequest::SetBatchingMaxBytes(const int64_t& _batchingMaxBytes)
{
    m_batchingMaxBytes = _batchingMaxBytes;
    m_batchingMaxBytesHasBeenSet = true;
}

bool SendBatchMessagesRequest::BatchingMaxBytesHasBeenSet() const
{
    return m_batchingMaxBytesHasBeenSet;
}


