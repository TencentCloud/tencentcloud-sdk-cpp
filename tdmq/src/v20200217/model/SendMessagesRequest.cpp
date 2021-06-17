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

#include <tencentcloud/tdmq/v20200217/model/SendMessagesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

SendMessagesRequest::SendMessagesRequest() :
    m_topicHasBeenSet(false),
    m_payloadHasBeenSet(false),
    m_stringTokenHasBeenSet(false),
    m_producerNameHasBeenSet(false),
    m_sendTimeoutHasBeenSet(false),
    m_maxPendingMessagesHasBeenSet(false)
{
}

string SendMessagesRequest::ToJsonString() const
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SendMessagesRequest::GetTopic() const
{
    return m_topic;
}

void SendMessagesRequest::SetTopic(const string& _topic)
{
    m_topic = _topic;
    m_topicHasBeenSet = true;
}

bool SendMessagesRequest::TopicHasBeenSet() const
{
    return m_topicHasBeenSet;
}

string SendMessagesRequest::GetPayload() const
{
    return m_payload;
}

void SendMessagesRequest::SetPayload(const string& _payload)
{
    m_payload = _payload;
    m_payloadHasBeenSet = true;
}

bool SendMessagesRequest::PayloadHasBeenSet() const
{
    return m_payloadHasBeenSet;
}

string SendMessagesRequest::GetStringToken() const
{
    return m_stringToken;
}

void SendMessagesRequest::SetStringToken(const string& _stringToken)
{
    m_stringToken = _stringToken;
    m_stringTokenHasBeenSet = true;
}

bool SendMessagesRequest::StringTokenHasBeenSet() const
{
    return m_stringTokenHasBeenSet;
}

string SendMessagesRequest::GetProducerName() const
{
    return m_producerName;
}

void SendMessagesRequest::SetProducerName(const string& _producerName)
{
    m_producerName = _producerName;
    m_producerNameHasBeenSet = true;
}

bool SendMessagesRequest::ProducerNameHasBeenSet() const
{
    return m_producerNameHasBeenSet;
}

int64_t SendMessagesRequest::GetSendTimeout() const
{
    return m_sendTimeout;
}

void SendMessagesRequest::SetSendTimeout(const int64_t& _sendTimeout)
{
    m_sendTimeout = _sendTimeout;
    m_sendTimeoutHasBeenSet = true;
}

bool SendMessagesRequest::SendTimeoutHasBeenSet() const
{
    return m_sendTimeoutHasBeenSet;
}

int64_t SendMessagesRequest::GetMaxPendingMessages() const
{
    return m_maxPendingMessages;
}

void SendMessagesRequest::SetMaxPendingMessages(const int64_t& _maxPendingMessages)
{
    m_maxPendingMessages = _maxPendingMessages;
    m_maxPendingMessagesHasBeenSet = true;
}

bool SendMessagesRequest::MaxPendingMessagesHasBeenSet() const
{
    return m_maxPendingMessagesHasBeenSet;
}


