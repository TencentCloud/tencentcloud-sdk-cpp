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

#include <tencentcloud/trocket/v20230308/model/ResetConsumerGroupOffsetRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trocket::V20230308::Model;
using namespace std;

ResetConsumerGroupOffsetRequest::ResetConsumerGroupOffsetRequest() :
    m_instanceIdHasBeenSet(false),
    m_topicHasBeenSet(false),
    m_resetTimestampHasBeenSet(false),
    m_consumerGroupHasBeenSet(false)
{
}

string ResetConsumerGroupOffsetRequest::ToJsonString() const
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

    if (m_resetTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResetTimestamp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_resetTimestamp, allocator);
    }

    if (m_consumerGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumerGroup";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_consumerGroup.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ResetConsumerGroupOffsetRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ResetConsumerGroupOffsetRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ResetConsumerGroupOffsetRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ResetConsumerGroupOffsetRequest::GetTopic() const
{
    return m_topic;
}

void ResetConsumerGroupOffsetRequest::SetTopic(const string& _topic)
{
    m_topic = _topic;
    m_topicHasBeenSet = true;
}

bool ResetConsumerGroupOffsetRequest::TopicHasBeenSet() const
{
    return m_topicHasBeenSet;
}

int64_t ResetConsumerGroupOffsetRequest::GetResetTimestamp() const
{
    return m_resetTimestamp;
}

void ResetConsumerGroupOffsetRequest::SetResetTimestamp(const int64_t& _resetTimestamp)
{
    m_resetTimestamp = _resetTimestamp;
    m_resetTimestampHasBeenSet = true;
}

bool ResetConsumerGroupOffsetRequest::ResetTimestampHasBeenSet() const
{
    return m_resetTimestampHasBeenSet;
}

string ResetConsumerGroupOffsetRequest::GetConsumerGroup() const
{
    return m_consumerGroup;
}

void ResetConsumerGroupOffsetRequest::SetConsumerGroup(const string& _consumerGroup)
{
    m_consumerGroup = _consumerGroup;
    m_consumerGroupHasBeenSet = true;
}

bool ResetConsumerGroupOffsetRequest::ConsumerGroupHasBeenSet() const
{
    return m_consumerGroupHasBeenSet;
}


