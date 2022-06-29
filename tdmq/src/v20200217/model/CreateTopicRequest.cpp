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

#include <tencentcloud/tdmq/v20200217/model/CreateTopicRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

CreateTopicRequest::CreateTopicRequest() :
    m_environmentIdHasBeenSet(false),
    m_topicNameHasBeenSet(false),
    m_partitionsHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_topicTypeHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_pulsarTopicTypeHasBeenSet(false)
{
}

string CreateTopicRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_partitionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Partitions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_partitions, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_topicTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_topicType, allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_pulsarTopicTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PulsarTopicType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pulsarTopicType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateTopicRequest::GetEnvironmentId() const
{
    return m_environmentId;
}

void CreateTopicRequest::SetEnvironmentId(const string& _environmentId)
{
    m_environmentId = _environmentId;
    m_environmentIdHasBeenSet = true;
}

bool CreateTopicRequest::EnvironmentIdHasBeenSet() const
{
    return m_environmentIdHasBeenSet;
}

string CreateTopicRequest::GetTopicName() const
{
    return m_topicName;
}

void CreateTopicRequest::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool CreateTopicRequest::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

uint64_t CreateTopicRequest::GetPartitions() const
{
    return m_partitions;
}

void CreateTopicRequest::SetPartitions(const uint64_t& _partitions)
{
    m_partitions = _partitions;
    m_partitionsHasBeenSet = true;
}

bool CreateTopicRequest::PartitionsHasBeenSet() const
{
    return m_partitionsHasBeenSet;
}

string CreateTopicRequest::GetRemark() const
{
    return m_remark;
}

void CreateTopicRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool CreateTopicRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

uint64_t CreateTopicRequest::GetTopicType() const
{
    return m_topicType;
}

void CreateTopicRequest::SetTopicType(const uint64_t& _topicType)
{
    m_topicType = _topicType;
    m_topicTypeHasBeenSet = true;
}

bool CreateTopicRequest::TopicTypeHasBeenSet() const
{
    return m_topicTypeHasBeenSet;
}

string CreateTopicRequest::GetClusterId() const
{
    return m_clusterId;
}

void CreateTopicRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool CreateTopicRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

int64_t CreateTopicRequest::GetPulsarTopicType() const
{
    return m_pulsarTopicType;
}

void CreateTopicRequest::SetPulsarTopicType(const int64_t& _pulsarTopicType)
{
    m_pulsarTopicType = _pulsarTopicType;
    m_pulsarTopicTypeHasBeenSet = true;
}

bool CreateTopicRequest::PulsarTopicTypeHasBeenSet() const
{
    return m_pulsarTopicTypeHasBeenSet;
}


