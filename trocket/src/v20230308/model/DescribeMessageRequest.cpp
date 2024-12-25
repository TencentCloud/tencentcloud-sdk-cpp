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

#include <tencentcloud/trocket/v20230308/model/DescribeMessageRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trocket::V20230308::Model;
using namespace std;

DescribeMessageRequest::DescribeMessageRequest() :
    m_instanceIdHasBeenSet(false),
    m_topicHasBeenSet(false),
    m_msgIdHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_queryDeadLetterMessageHasBeenSet(false),
    m_queryDelayMessageHasBeenSet(false)
{
}

string DescribeMessageRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_topicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Topic";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_topic.c_str(), allocator).Move(), allocator);
    }

    if (m_msgIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_msgId.c_str(), allocator).Move(), allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_queryDeadLetterMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryDeadLetterMessage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_queryDeadLetterMessage, allocator);
    }

    if (m_queryDelayMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryDelayMessage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_queryDelayMessage, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeMessageRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeMessageRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeMessageRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeMessageRequest::GetTopic() const
{
    return m_topic;
}

void DescribeMessageRequest::SetTopic(const string& _topic)
{
    m_topic = _topic;
    m_topicHasBeenSet = true;
}

bool DescribeMessageRequest::TopicHasBeenSet() const
{
    return m_topicHasBeenSet;
}

string DescribeMessageRequest::GetMsgId() const
{
    return m_msgId;
}

void DescribeMessageRequest::SetMsgId(const string& _msgId)
{
    m_msgId = _msgId;
    m_msgIdHasBeenSet = true;
}

bool DescribeMessageRequest::MsgIdHasBeenSet() const
{
    return m_msgIdHasBeenSet;
}

int64_t DescribeMessageRequest::GetOffset() const
{
    return m_offset;
}

void DescribeMessageRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeMessageRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeMessageRequest::GetLimit() const
{
    return m_limit;
}

void DescribeMessageRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeMessageRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

bool DescribeMessageRequest::GetQueryDeadLetterMessage() const
{
    return m_queryDeadLetterMessage;
}

void DescribeMessageRequest::SetQueryDeadLetterMessage(const bool& _queryDeadLetterMessage)
{
    m_queryDeadLetterMessage = _queryDeadLetterMessage;
    m_queryDeadLetterMessageHasBeenSet = true;
}

bool DescribeMessageRequest::QueryDeadLetterMessageHasBeenSet() const
{
    return m_queryDeadLetterMessageHasBeenSet;
}

bool DescribeMessageRequest::GetQueryDelayMessage() const
{
    return m_queryDelayMessage;
}

void DescribeMessageRequest::SetQueryDelayMessage(const bool& _queryDelayMessage)
{
    m_queryDelayMessage = _queryDelayMessage;
    m_queryDelayMessageHasBeenSet = true;
}

bool DescribeMessageRequest::QueryDelayMessageHasBeenSet() const
{
    return m_queryDelayMessageHasBeenSet;
}


