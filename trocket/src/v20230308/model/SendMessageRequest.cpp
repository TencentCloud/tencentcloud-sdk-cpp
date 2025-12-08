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

#include <tencentcloud/trocket/v20230308/model/SendMessageRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trocket::V20230308::Model;
using namespace std;

SendMessageRequest::SendMessageRequest() :
    m_instanceIdHasBeenSet(false),
    m_topicHasBeenSet(false),
    m_msgBodyHasBeenSet(false),
    m_msgKeyHasBeenSet(false),
    m_msgTagHasBeenSet(false)
{
}

string SendMessageRequest::ToJsonString() const
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

    if (m_msgBodyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgBody";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_msgBody.c_str(), allocator).Move(), allocator);
    }

    if (m_msgKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_msgKey.c_str(), allocator).Move(), allocator);
    }

    if (m_msgTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgTag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_msgTag.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SendMessageRequest::GetInstanceId() const
{
    return m_instanceId;
}

void SendMessageRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool SendMessageRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string SendMessageRequest::GetTopic() const
{
    return m_topic;
}

void SendMessageRequest::SetTopic(const string& _topic)
{
    m_topic = _topic;
    m_topicHasBeenSet = true;
}

bool SendMessageRequest::TopicHasBeenSet() const
{
    return m_topicHasBeenSet;
}

string SendMessageRequest::GetMsgBody() const
{
    return m_msgBody;
}

void SendMessageRequest::SetMsgBody(const string& _msgBody)
{
    m_msgBody = _msgBody;
    m_msgBodyHasBeenSet = true;
}

bool SendMessageRequest::MsgBodyHasBeenSet() const
{
    return m_msgBodyHasBeenSet;
}

string SendMessageRequest::GetMsgKey() const
{
    return m_msgKey;
}

void SendMessageRequest::SetMsgKey(const string& _msgKey)
{
    m_msgKey = _msgKey;
    m_msgKeyHasBeenSet = true;
}

bool SendMessageRequest::MsgKeyHasBeenSet() const
{
    return m_msgKeyHasBeenSet;
}

string SendMessageRequest::GetMsgTag() const
{
    return m_msgTag;
}

void SendMessageRequest::SetMsgTag(const string& _msgTag)
{
    m_msgTag = _msgTag;
    m_msgTagHasBeenSet = true;
}

bool SendMessageRequest::MsgTagHasBeenSet() const
{
    return m_msgTagHasBeenSet;
}


