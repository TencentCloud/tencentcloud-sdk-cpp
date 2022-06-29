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

#include <tencentcloud/tdmq/v20200217/model/ReceiveMessageRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

ReceiveMessageRequest::ReceiveMessageRequest() :
    m_topicHasBeenSet(false),
    m_subscriptionNameHasBeenSet(false),
    m_receiverQueueSizeHasBeenSet(false),
    m_subInitialPositionHasBeenSet(false),
    m_maxNumMessagesHasBeenSet(false),
    m_maxNumBytesHasBeenSet(false),
    m_timeoutHasBeenSet(false)
{
}

string ReceiveMessageRequest::ToJsonString() const
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

    if (m_subscriptionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubscriptionName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subscriptionName.c_str(), allocator).Move(), allocator);
    }

    if (m_receiverQueueSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReceiverQueueSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_receiverQueueSize, allocator);
    }

    if (m_subInitialPositionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubInitialPosition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subInitialPosition.c_str(), allocator).Move(), allocator);
    }

    if (m_maxNumMessagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxNumMessages";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxNumMessages, allocator);
    }

    if (m_maxNumBytesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxNumBytes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxNumBytes, allocator);
    }

    if (m_timeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timeout";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeout, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ReceiveMessageRequest::GetTopic() const
{
    return m_topic;
}

void ReceiveMessageRequest::SetTopic(const string& _topic)
{
    m_topic = _topic;
    m_topicHasBeenSet = true;
}

bool ReceiveMessageRequest::TopicHasBeenSet() const
{
    return m_topicHasBeenSet;
}

string ReceiveMessageRequest::GetSubscriptionName() const
{
    return m_subscriptionName;
}

void ReceiveMessageRequest::SetSubscriptionName(const string& _subscriptionName)
{
    m_subscriptionName = _subscriptionName;
    m_subscriptionNameHasBeenSet = true;
}

bool ReceiveMessageRequest::SubscriptionNameHasBeenSet() const
{
    return m_subscriptionNameHasBeenSet;
}

int64_t ReceiveMessageRequest::GetReceiverQueueSize() const
{
    return m_receiverQueueSize;
}

void ReceiveMessageRequest::SetReceiverQueueSize(const int64_t& _receiverQueueSize)
{
    m_receiverQueueSize = _receiverQueueSize;
    m_receiverQueueSizeHasBeenSet = true;
}

bool ReceiveMessageRequest::ReceiverQueueSizeHasBeenSet() const
{
    return m_receiverQueueSizeHasBeenSet;
}

string ReceiveMessageRequest::GetSubInitialPosition() const
{
    return m_subInitialPosition;
}

void ReceiveMessageRequest::SetSubInitialPosition(const string& _subInitialPosition)
{
    m_subInitialPosition = _subInitialPosition;
    m_subInitialPositionHasBeenSet = true;
}

bool ReceiveMessageRequest::SubInitialPositionHasBeenSet() const
{
    return m_subInitialPositionHasBeenSet;
}

int64_t ReceiveMessageRequest::GetMaxNumMessages() const
{
    return m_maxNumMessages;
}

void ReceiveMessageRequest::SetMaxNumMessages(const int64_t& _maxNumMessages)
{
    m_maxNumMessages = _maxNumMessages;
    m_maxNumMessagesHasBeenSet = true;
}

bool ReceiveMessageRequest::MaxNumMessagesHasBeenSet() const
{
    return m_maxNumMessagesHasBeenSet;
}

int64_t ReceiveMessageRequest::GetMaxNumBytes() const
{
    return m_maxNumBytes;
}

void ReceiveMessageRequest::SetMaxNumBytes(const int64_t& _maxNumBytes)
{
    m_maxNumBytes = _maxNumBytes;
    m_maxNumBytesHasBeenSet = true;
}

bool ReceiveMessageRequest::MaxNumBytesHasBeenSet() const
{
    return m_maxNumBytesHasBeenSet;
}

int64_t ReceiveMessageRequest::GetTimeout() const
{
    return m_timeout;
}

void ReceiveMessageRequest::SetTimeout(const int64_t& _timeout)
{
    m_timeout = _timeout;
    m_timeoutHasBeenSet = true;
}

bool ReceiveMessageRequest::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}


