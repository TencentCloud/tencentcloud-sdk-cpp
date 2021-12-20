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

#include <tencentcloud/ckafka/v20190819/model/BatchModifyGroupOffsetsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

BatchModifyGroupOffsetsRequest::BatchModifyGroupOffsetsRequest() :
    m_groupNameHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_partitionsHasBeenSet(false),
    m_topicNameHasBeenSet(false)
{
}

string BatchModifyGroupOffsetsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_partitionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Partitions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_partitions.begin(); itr != m_partitions.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_topicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_topicName.begin(); itr != m_topicName.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string BatchModifyGroupOffsetsRequest::GetGroupName() const
{
    return m_groupName;
}

void BatchModifyGroupOffsetsRequest::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool BatchModifyGroupOffsetsRequest::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

string BatchModifyGroupOffsetsRequest::GetInstanceId() const
{
    return m_instanceId;
}

void BatchModifyGroupOffsetsRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool BatchModifyGroupOffsetsRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

vector<Partitions> BatchModifyGroupOffsetsRequest::GetPartitions() const
{
    return m_partitions;
}

void BatchModifyGroupOffsetsRequest::SetPartitions(const vector<Partitions>& _partitions)
{
    m_partitions = _partitions;
    m_partitionsHasBeenSet = true;
}

bool BatchModifyGroupOffsetsRequest::PartitionsHasBeenSet() const
{
    return m_partitionsHasBeenSet;
}

vector<string> BatchModifyGroupOffsetsRequest::GetTopicName() const
{
    return m_topicName;
}

void BatchModifyGroupOffsetsRequest::SetTopicName(const vector<string>& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool BatchModifyGroupOffsetsRequest::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}


