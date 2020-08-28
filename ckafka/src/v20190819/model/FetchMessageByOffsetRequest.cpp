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

#include <tencentcloud/ckafka/v20190819/model/FetchMessageByOffsetRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace rapidjson;
using namespace std;

FetchMessageByOffsetRequest::FetchMessageByOffsetRequest() :
    m_instanceIdHasBeenSet(false),
    m_topicHasBeenSet(false),
    m_partitionHasBeenSet(false),
    m_offsetHasBeenSet(false)
{
}

string FetchMessageByOffsetRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_topicHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Topic";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_topic.c_str(), allocator).Move(), allocator);
    }

    if (m_partitionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Partition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_partition, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string FetchMessageByOffsetRequest::GetInstanceId() const
{
    return m_instanceId;
}

void FetchMessageByOffsetRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool FetchMessageByOffsetRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string FetchMessageByOffsetRequest::GetTopic() const
{
    return m_topic;
}

void FetchMessageByOffsetRequest::SetTopic(const string& _topic)
{
    m_topic = _topic;
    m_topicHasBeenSet = true;
}

bool FetchMessageByOffsetRequest::TopicHasBeenSet() const
{
    return m_topicHasBeenSet;
}

int64_t FetchMessageByOffsetRequest::GetPartition() const
{
    return m_partition;
}

void FetchMessageByOffsetRequest::SetPartition(const int64_t& _partition)
{
    m_partition = _partition;
    m_partitionHasBeenSet = true;
}

bool FetchMessageByOffsetRequest::PartitionHasBeenSet() const
{
    return m_partitionHasBeenSet;
}

int64_t FetchMessageByOffsetRequest::GetOffset() const
{
    return m_offset;
}

void FetchMessageByOffsetRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool FetchMessageByOffsetRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}


