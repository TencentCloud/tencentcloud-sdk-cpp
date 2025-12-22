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

#include <tencentcloud/cls/v20201016/model/CommitConsumerOffsetsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

CommitConsumerOffsetsRequest::CommitConsumerOffsetsRequest() :
    m_consumerGroupHasBeenSet(false),
    m_consumerHasBeenSet(false),
    m_logsetIdHasBeenSet(false),
    m_topicPartitionOffsetsInfoHasBeenSet(false)
{
}

string CommitConsumerOffsetsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_consumerGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumerGroup";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_consumerGroup.c_str(), allocator).Move(), allocator);
    }

    if (m_consumerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Consumer";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_consumer.c_str(), allocator).Move(), allocator);
    }

    if (m_logsetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogsetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logsetId.c_str(), allocator).Move(), allocator);
    }

    if (m_topicPartitionOffsetsInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicPartitionOffsetsInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_topicPartitionOffsetsInfo.begin(); itr != m_topicPartitionOffsetsInfo.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CommitConsumerOffsetsRequest::GetConsumerGroup() const
{
    return m_consumerGroup;
}

void CommitConsumerOffsetsRequest::SetConsumerGroup(const string& _consumerGroup)
{
    m_consumerGroup = _consumerGroup;
    m_consumerGroupHasBeenSet = true;
}

bool CommitConsumerOffsetsRequest::ConsumerGroupHasBeenSet() const
{
    return m_consumerGroupHasBeenSet;
}

string CommitConsumerOffsetsRequest::GetConsumer() const
{
    return m_consumer;
}

void CommitConsumerOffsetsRequest::SetConsumer(const string& _consumer)
{
    m_consumer = _consumer;
    m_consumerHasBeenSet = true;
}

bool CommitConsumerOffsetsRequest::ConsumerHasBeenSet() const
{
    return m_consumerHasBeenSet;
}

string CommitConsumerOffsetsRequest::GetLogsetId() const
{
    return m_logsetId;
}

void CommitConsumerOffsetsRequest::SetLogsetId(const string& _logsetId)
{
    m_logsetId = _logsetId;
    m_logsetIdHasBeenSet = true;
}

bool CommitConsumerOffsetsRequest::LogsetIdHasBeenSet() const
{
    return m_logsetIdHasBeenSet;
}

vector<TopicPartitionOffsetInfo> CommitConsumerOffsetsRequest::GetTopicPartitionOffsetsInfo() const
{
    return m_topicPartitionOffsetsInfo;
}

void CommitConsumerOffsetsRequest::SetTopicPartitionOffsetsInfo(const vector<TopicPartitionOffsetInfo>& _topicPartitionOffsetsInfo)
{
    m_topicPartitionOffsetsInfo = _topicPartitionOffsetsInfo;
    m_topicPartitionOffsetsInfoHasBeenSet = true;
}

bool CommitConsumerOffsetsRequest::TopicPartitionOffsetsInfoHasBeenSet() const
{
    return m_topicPartitionOffsetsInfoHasBeenSet;
}


