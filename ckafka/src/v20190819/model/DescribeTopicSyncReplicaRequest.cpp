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

#include <tencentcloud/ckafka/v20190819/model/DescribeTopicSyncReplicaRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

DescribeTopicSyncReplicaRequest::DescribeTopicSyncReplicaRequest() :
    m_instanceIdHasBeenSet(false),
    m_topicNameHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_outOfSyncReplicaOnlyHasBeenSet(false)
{
}

string DescribeTopicSyncReplicaRequest::ToJsonString() const
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

    if (m_topicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_topicName.c_str(), allocator).Move(), allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_outOfSyncReplicaOnlyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutOfSyncReplicaOnly";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_outOfSyncReplicaOnly, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeTopicSyncReplicaRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeTopicSyncReplicaRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeTopicSyncReplicaRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeTopicSyncReplicaRequest::GetTopicName() const
{
    return m_topicName;
}

void DescribeTopicSyncReplicaRequest::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool DescribeTopicSyncReplicaRequest::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

uint64_t DescribeTopicSyncReplicaRequest::GetOffset() const
{
    return m_offset;
}

void DescribeTopicSyncReplicaRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeTopicSyncReplicaRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeTopicSyncReplicaRequest::GetLimit() const
{
    return m_limit;
}

void DescribeTopicSyncReplicaRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeTopicSyncReplicaRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

bool DescribeTopicSyncReplicaRequest::GetOutOfSyncReplicaOnly() const
{
    return m_outOfSyncReplicaOnly;
}

void DescribeTopicSyncReplicaRequest::SetOutOfSyncReplicaOnly(const bool& _outOfSyncReplicaOnly)
{
    m_outOfSyncReplicaOnly = _outOfSyncReplicaOnly;
    m_outOfSyncReplicaOnlyHasBeenSet = true;
}

bool DescribeTopicSyncReplicaRequest::OutOfSyncReplicaOnlyHasBeenSet() const
{
    return m_outOfSyncReplicaOnlyHasBeenSet;
}


