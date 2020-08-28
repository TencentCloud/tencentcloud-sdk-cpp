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

#include <tencentcloud/ckafka/v20190819/model/FetchMessageListByTimestampRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace rapidjson;
using namespace std;

FetchMessageListByTimestampRequest::FetchMessageListByTimestampRequest() :
    m_instanceIdHasBeenSet(false),
    m_topicHasBeenSet(false),
    m_partitionHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_singlePartitionRecordNumberHasBeenSet(false)
{
}

string FetchMessageListByTimestampRequest::ToJsonString() const
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

    if (m_startTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startTime, allocator);
    }

    if (m_singlePartitionRecordNumberHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SinglePartitionRecordNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_singlePartitionRecordNumber, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string FetchMessageListByTimestampRequest::GetInstanceId() const
{
    return m_instanceId;
}

void FetchMessageListByTimestampRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool FetchMessageListByTimestampRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string FetchMessageListByTimestampRequest::GetTopic() const
{
    return m_topic;
}

void FetchMessageListByTimestampRequest::SetTopic(const string& _topic)
{
    m_topic = _topic;
    m_topicHasBeenSet = true;
}

bool FetchMessageListByTimestampRequest::TopicHasBeenSet() const
{
    return m_topicHasBeenSet;
}

int64_t FetchMessageListByTimestampRequest::GetPartition() const
{
    return m_partition;
}

void FetchMessageListByTimestampRequest::SetPartition(const int64_t& _partition)
{
    m_partition = _partition;
    m_partitionHasBeenSet = true;
}

bool FetchMessageListByTimestampRequest::PartitionHasBeenSet() const
{
    return m_partitionHasBeenSet;
}

int64_t FetchMessageListByTimestampRequest::GetStartTime() const
{
    return m_startTime;
}

void FetchMessageListByTimestampRequest::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool FetchMessageListByTimestampRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t FetchMessageListByTimestampRequest::GetSinglePartitionRecordNumber() const
{
    return m_singlePartitionRecordNumber;
}

void FetchMessageListByTimestampRequest::SetSinglePartitionRecordNumber(const int64_t& _singlePartitionRecordNumber)
{
    m_singlePartitionRecordNumber = _singlePartitionRecordNumber;
    m_singlePartitionRecordNumberHasBeenSet = true;
}

bool FetchMessageListByTimestampRequest::SinglePartitionRecordNumberHasBeenSet() const
{
    return m_singlePartitionRecordNumberHasBeenSet;
}


