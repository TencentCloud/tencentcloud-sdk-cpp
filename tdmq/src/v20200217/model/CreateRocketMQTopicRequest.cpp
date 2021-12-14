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

#include <tencentcloud/tdmq/v20200217/model/CreateRocketMQTopicRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

CreateRocketMQTopicRequest::CreateRocketMQTopicRequest() :
    m_topicHasBeenSet(false),
    m_namespacesHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_partitionNumHasBeenSet(false)
{
}

string CreateRocketMQTopicRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_topicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Topic";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_topic.c_str(), allocator).Move(), allocator);
    }

    if (m_namespacesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespaces";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_namespaces.begin(); itr != m_namespaces.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_partitionNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartitionNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_partitionNum, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateRocketMQTopicRequest::GetTopic() const
{
    return m_topic;
}

void CreateRocketMQTopicRequest::SetTopic(const string& _topic)
{
    m_topic = _topic;
    m_topicHasBeenSet = true;
}

bool CreateRocketMQTopicRequest::TopicHasBeenSet() const
{
    return m_topicHasBeenSet;
}

vector<string> CreateRocketMQTopicRequest::GetNamespaces() const
{
    return m_namespaces;
}

void CreateRocketMQTopicRequest::SetNamespaces(const vector<string>& _namespaces)
{
    m_namespaces = _namespaces;
    m_namespacesHasBeenSet = true;
}

bool CreateRocketMQTopicRequest::NamespacesHasBeenSet() const
{
    return m_namespacesHasBeenSet;
}

string CreateRocketMQTopicRequest::GetType() const
{
    return m_type;
}

void CreateRocketMQTopicRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CreateRocketMQTopicRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string CreateRocketMQTopicRequest::GetClusterId() const
{
    return m_clusterId;
}

void CreateRocketMQTopicRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool CreateRocketMQTopicRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string CreateRocketMQTopicRequest::GetRemark() const
{
    return m_remark;
}

void CreateRocketMQTopicRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool CreateRocketMQTopicRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

int64_t CreateRocketMQTopicRequest::GetPartitionNum() const
{
    return m_partitionNum;
}

void CreateRocketMQTopicRequest::SetPartitionNum(const int64_t& _partitionNum)
{
    m_partitionNum = _partitionNum;
    m_partitionNumHasBeenSet = true;
}

bool CreateRocketMQTopicRequest::PartitionNumHasBeenSet() const
{
    return m_partitionNumHasBeenSet;
}


