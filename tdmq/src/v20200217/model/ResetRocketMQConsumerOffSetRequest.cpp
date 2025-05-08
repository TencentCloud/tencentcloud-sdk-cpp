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

#include <tencentcloud/tdmq/v20200217/model/ResetRocketMQConsumerOffSetRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

ResetRocketMQConsumerOffSetRequest::ResetRocketMQConsumerOffSetRequest() :
    m_clusterIdHasBeenSet(false),
    m_namespaceIdHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_topicHasBeenSet(false),
    m_resetTimestampHasBeenSet(false)
{
}

string ResetRocketMQConsumerOffSetRequest::ToJsonString() const
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

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_type, allocator);
    }

    if (m_topicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Topic";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_topic.c_str(), allocator).Move(), allocator);
    }

    if (m_resetTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResetTimestamp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_resetTimestamp, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ResetRocketMQConsumerOffSetRequest::GetClusterId() const
{
    return m_clusterId;
}

void ResetRocketMQConsumerOffSetRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ResetRocketMQConsumerOffSetRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string ResetRocketMQConsumerOffSetRequest::GetNamespaceId() const
{
    return m_namespaceId;
}

void ResetRocketMQConsumerOffSetRequest::SetNamespaceId(const string& _namespaceId)
{
    m_namespaceId = _namespaceId;
    m_namespaceIdHasBeenSet = true;
}

bool ResetRocketMQConsumerOffSetRequest::NamespaceIdHasBeenSet() const
{
    return m_namespaceIdHasBeenSet;
}

string ResetRocketMQConsumerOffSetRequest::GetGroupId() const
{
    return m_groupId;
}

void ResetRocketMQConsumerOffSetRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool ResetRocketMQConsumerOffSetRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

uint64_t ResetRocketMQConsumerOffSetRequest::GetType() const
{
    return m_type;
}

void ResetRocketMQConsumerOffSetRequest::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ResetRocketMQConsumerOffSetRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ResetRocketMQConsumerOffSetRequest::GetTopic() const
{
    return m_topic;
}

void ResetRocketMQConsumerOffSetRequest::SetTopic(const string& _topic)
{
    m_topic = _topic;
    m_topicHasBeenSet = true;
}

bool ResetRocketMQConsumerOffSetRequest::TopicHasBeenSet() const
{
    return m_topicHasBeenSet;
}

uint64_t ResetRocketMQConsumerOffSetRequest::GetResetTimestamp() const
{
    return m_resetTimestamp;
}

void ResetRocketMQConsumerOffSetRequest::SetResetTimestamp(const uint64_t& _resetTimestamp)
{
    m_resetTimestamp = _resetTimestamp;
    m_resetTimestampHasBeenSet = true;
}

bool ResetRocketMQConsumerOffSetRequest::ResetTimestampHasBeenSet() const
{
    return m_resetTimestampHasBeenSet;
}


