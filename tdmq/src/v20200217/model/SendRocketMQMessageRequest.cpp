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

#include <tencentcloud/tdmq/v20200217/model/SendRocketMQMessageRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

SendRocketMQMessageRequest::SendRocketMQMessageRequest() :
    m_clusterIdHasBeenSet(false),
    m_namespaceIdHasBeenSet(false),
    m_topicNameHasBeenSet(false),
    m_msgBodyHasBeenSet(false),
    m_msgKeyHasBeenSet(false),
    m_msgTagHasBeenSet(false)
{
}

string SendRocketMQMessageRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_namespaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_topicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_topicName.c_str(), allocator).Move(), allocator);
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


string SendRocketMQMessageRequest::GetClusterId() const
{
    return m_clusterId;
}

void SendRocketMQMessageRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool SendRocketMQMessageRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string SendRocketMQMessageRequest::GetNamespaceId() const
{
    return m_namespaceId;
}

void SendRocketMQMessageRequest::SetNamespaceId(const string& _namespaceId)
{
    m_namespaceId = _namespaceId;
    m_namespaceIdHasBeenSet = true;
}

bool SendRocketMQMessageRequest::NamespaceIdHasBeenSet() const
{
    return m_namespaceIdHasBeenSet;
}

string SendRocketMQMessageRequest::GetTopicName() const
{
    return m_topicName;
}

void SendRocketMQMessageRequest::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool SendRocketMQMessageRequest::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

string SendRocketMQMessageRequest::GetMsgBody() const
{
    return m_msgBody;
}

void SendRocketMQMessageRequest::SetMsgBody(const string& _msgBody)
{
    m_msgBody = _msgBody;
    m_msgBodyHasBeenSet = true;
}

bool SendRocketMQMessageRequest::MsgBodyHasBeenSet() const
{
    return m_msgBodyHasBeenSet;
}

string SendRocketMQMessageRequest::GetMsgKey() const
{
    return m_msgKey;
}

void SendRocketMQMessageRequest::SetMsgKey(const string& _msgKey)
{
    m_msgKey = _msgKey;
    m_msgKeyHasBeenSet = true;
}

bool SendRocketMQMessageRequest::MsgKeyHasBeenSet() const
{
    return m_msgKeyHasBeenSet;
}

string SendRocketMQMessageRequest::GetMsgTag() const
{
    return m_msgTag;
}

void SendRocketMQMessageRequest::SetMsgTag(const string& _msgTag)
{
    m_msgTag = _msgTag;
    m_msgTagHasBeenSet = true;
}

bool SendRocketMQMessageRequest::MsgTagHasBeenSet() const
{
    return m_msgTagHasBeenSet;
}


