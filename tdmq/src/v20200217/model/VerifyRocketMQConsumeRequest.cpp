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

#include <tencentcloud/tdmq/v20200217/model/VerifyRocketMQConsumeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

VerifyRocketMQConsumeRequest::VerifyRocketMQConsumeRequest() :
    m_clusterIdHasBeenSet(false),
    m_namespaceIdHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_msgIdHasBeenSet(false),
    m_clientIdHasBeenSet(false),
    m_topicNameHasBeenSet(false)
{
}

string VerifyRocketMQConsumeRequest::ToJsonString() const
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

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_msgIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_msgId.c_str(), allocator).Move(), allocator);
    }

    if (m_clientIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clientId.c_str(), allocator).Move(), allocator);
    }

    if (m_topicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_topicName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string VerifyRocketMQConsumeRequest::GetClusterId() const
{
    return m_clusterId;
}

void VerifyRocketMQConsumeRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool VerifyRocketMQConsumeRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string VerifyRocketMQConsumeRequest::GetNamespaceId() const
{
    return m_namespaceId;
}

void VerifyRocketMQConsumeRequest::SetNamespaceId(const string& _namespaceId)
{
    m_namespaceId = _namespaceId;
    m_namespaceIdHasBeenSet = true;
}

bool VerifyRocketMQConsumeRequest::NamespaceIdHasBeenSet() const
{
    return m_namespaceIdHasBeenSet;
}

string VerifyRocketMQConsumeRequest::GetGroupId() const
{
    return m_groupId;
}

void VerifyRocketMQConsumeRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool VerifyRocketMQConsumeRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string VerifyRocketMQConsumeRequest::GetMsgId() const
{
    return m_msgId;
}

void VerifyRocketMQConsumeRequest::SetMsgId(const string& _msgId)
{
    m_msgId = _msgId;
    m_msgIdHasBeenSet = true;
}

bool VerifyRocketMQConsumeRequest::MsgIdHasBeenSet() const
{
    return m_msgIdHasBeenSet;
}

string VerifyRocketMQConsumeRequest::GetClientId() const
{
    return m_clientId;
}

void VerifyRocketMQConsumeRequest::SetClientId(const string& _clientId)
{
    m_clientId = _clientId;
    m_clientIdHasBeenSet = true;
}

bool VerifyRocketMQConsumeRequest::ClientIdHasBeenSet() const
{
    return m_clientIdHasBeenSet;
}

string VerifyRocketMQConsumeRequest::GetTopicName() const
{
    return m_topicName;
}

void VerifyRocketMQConsumeRequest::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool VerifyRocketMQConsumeRequest::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}


