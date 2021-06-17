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

#include <tencentcloud/tdmq/v20200217/model/AcknowledgeMessageRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

AcknowledgeMessageRequest::AcknowledgeMessageRequest() :
    m_messageIdHasBeenSet(false),
    m_ackTopicHasBeenSet(false),
    m_subNameHasBeenSet(false)
{
}

string AcknowledgeMessageRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_messageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MessageId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_messageId.c_str(), allocator).Move(), allocator);
    }

    if (m_ackTopicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AckTopic";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ackTopic.c_str(), allocator).Move(), allocator);
    }

    if (m_subNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AcknowledgeMessageRequest::GetMessageId() const
{
    return m_messageId;
}

void AcknowledgeMessageRequest::SetMessageId(const string& _messageId)
{
    m_messageId = _messageId;
    m_messageIdHasBeenSet = true;
}

bool AcknowledgeMessageRequest::MessageIdHasBeenSet() const
{
    return m_messageIdHasBeenSet;
}

string AcknowledgeMessageRequest::GetAckTopic() const
{
    return m_ackTopic;
}

void AcknowledgeMessageRequest::SetAckTopic(const string& _ackTopic)
{
    m_ackTopic = _ackTopic;
    m_ackTopicHasBeenSet = true;
}

bool AcknowledgeMessageRequest::AckTopicHasBeenSet() const
{
    return m_ackTopicHasBeenSet;
}

string AcknowledgeMessageRequest::GetSubName() const
{
    return m_subName;
}

void AcknowledgeMessageRequest::SetSubName(const string& _subName)
{
    m_subName = _subName;
    m_subNameHasBeenSet = true;
}

bool AcknowledgeMessageRequest::SubNameHasBeenSet() const
{
    return m_subNameHasBeenSet;
}


