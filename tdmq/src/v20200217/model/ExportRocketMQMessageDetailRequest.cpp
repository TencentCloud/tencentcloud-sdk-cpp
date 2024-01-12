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

#include <tencentcloud/tdmq/v20200217/model/ExportRocketMQMessageDetailRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

ExportRocketMQMessageDetailRequest::ExportRocketMQMessageDetailRequest() :
    m_clusterIdHasBeenSet(false),
    m_environmentIdHasBeenSet(false),
    m_topicNameHasBeenSet(false),
    m_msgIdHasBeenSet(false),
    m_includeMsgBodyHasBeenSet(false),
    m_deadLetterMsgHasBeenSet(false)
{
}

string ExportRocketMQMessageDetailRequest::ToJsonString() const
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

    if (m_environmentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvironmentId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_environmentId.c_str(), allocator).Move(), allocator);
    }

    if (m_topicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_topicName.c_str(), allocator).Move(), allocator);
    }

    if (m_msgIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_msgId.c_str(), allocator).Move(), allocator);
    }

    if (m_includeMsgBodyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncludeMsgBody";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_includeMsgBody, allocator);
    }

    if (m_deadLetterMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeadLetterMsg";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deadLetterMsg, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ExportRocketMQMessageDetailRequest::GetClusterId() const
{
    return m_clusterId;
}

void ExportRocketMQMessageDetailRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ExportRocketMQMessageDetailRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string ExportRocketMQMessageDetailRequest::GetEnvironmentId() const
{
    return m_environmentId;
}

void ExportRocketMQMessageDetailRequest::SetEnvironmentId(const string& _environmentId)
{
    m_environmentId = _environmentId;
    m_environmentIdHasBeenSet = true;
}

bool ExportRocketMQMessageDetailRequest::EnvironmentIdHasBeenSet() const
{
    return m_environmentIdHasBeenSet;
}

string ExportRocketMQMessageDetailRequest::GetTopicName() const
{
    return m_topicName;
}

void ExportRocketMQMessageDetailRequest::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool ExportRocketMQMessageDetailRequest::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

string ExportRocketMQMessageDetailRequest::GetMsgId() const
{
    return m_msgId;
}

void ExportRocketMQMessageDetailRequest::SetMsgId(const string& _msgId)
{
    m_msgId = _msgId;
    m_msgIdHasBeenSet = true;
}

bool ExportRocketMQMessageDetailRequest::MsgIdHasBeenSet() const
{
    return m_msgIdHasBeenSet;
}

bool ExportRocketMQMessageDetailRequest::GetIncludeMsgBody() const
{
    return m_includeMsgBody;
}

void ExportRocketMQMessageDetailRequest::SetIncludeMsgBody(const bool& _includeMsgBody)
{
    m_includeMsgBody = _includeMsgBody;
    m_includeMsgBodyHasBeenSet = true;
}

bool ExportRocketMQMessageDetailRequest::IncludeMsgBodyHasBeenSet() const
{
    return m_includeMsgBodyHasBeenSet;
}

bool ExportRocketMQMessageDetailRequest::GetDeadLetterMsg() const
{
    return m_deadLetterMsg;
}

void ExportRocketMQMessageDetailRequest::SetDeadLetterMsg(const bool& _deadLetterMsg)
{
    m_deadLetterMsg = _deadLetterMsg;
    m_deadLetterMsgHasBeenSet = true;
}

bool ExportRocketMQMessageDetailRequest::DeadLetterMsgHasBeenSet() const
{
    return m_deadLetterMsgHasBeenSet;
}


