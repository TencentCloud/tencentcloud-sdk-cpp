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

#include <tencentcloud/ckafka/v20190819/model/FetchMessageListByOffsetRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

FetchMessageListByOffsetRequest::FetchMessageListByOffsetRequest() :
    m_instanceIdHasBeenSet(false),
    m_topicHasBeenSet(false),
    m_partitionHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_singlePartitionRecordNumberHasBeenSet(false)
{
}

string FetchMessageListByOffsetRequest::ToJsonString() const
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

    if (m_partitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Partition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_partition, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_singlePartitionRecordNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SinglePartitionRecordNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_singlePartitionRecordNumber, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string FetchMessageListByOffsetRequest::GetInstanceId() const
{
    return m_instanceId;
}

void FetchMessageListByOffsetRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool FetchMessageListByOffsetRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string FetchMessageListByOffsetRequest::GetTopic() const
{
    return m_topic;
}

void FetchMessageListByOffsetRequest::SetTopic(const string& _topic)
{
    m_topic = _topic;
    m_topicHasBeenSet = true;
}

bool FetchMessageListByOffsetRequest::TopicHasBeenSet() const
{
    return m_topicHasBeenSet;
}

int64_t FetchMessageListByOffsetRequest::GetPartition() const
{
    return m_partition;
}

void FetchMessageListByOffsetRequest::SetPartition(const int64_t& _partition)
{
    m_partition = _partition;
    m_partitionHasBeenSet = true;
}

bool FetchMessageListByOffsetRequest::PartitionHasBeenSet() const
{
    return m_partitionHasBeenSet;
}

int64_t FetchMessageListByOffsetRequest::GetOffset() const
{
    return m_offset;
}

void FetchMessageListByOffsetRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool FetchMessageListByOffsetRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t FetchMessageListByOffsetRequest::GetSinglePartitionRecordNumber() const
{
    return m_singlePartitionRecordNumber;
}

void FetchMessageListByOffsetRequest::SetSinglePartitionRecordNumber(const int64_t& _singlePartitionRecordNumber)
{
    m_singlePartitionRecordNumber = _singlePartitionRecordNumber;
    m_singlePartitionRecordNumberHasBeenSet = true;
}

bool FetchMessageListByOffsetRequest::SinglePartitionRecordNumberHasBeenSet() const
{
    return m_singlePartitionRecordNumberHasBeenSet;
}


