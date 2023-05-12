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

#include <tencentcloud/ckafka/v20190819/model/TopicFlowRanking.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

TopicFlowRanking::TopicFlowRanking() :
    m_topicIdHasBeenSet(false),
    m_topicNameHasBeenSet(false),
    m_partitionNumHasBeenSet(false),
    m_replicaNumHasBeenSet(false),
    m_topicTrafficHasBeenSet(false),
    m_messageHeapHasBeenSet(false)
{
}

CoreInternalOutcome TopicFlowRanking::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TopicId") && !value["TopicId"].IsNull())
    {
        if (!value["TopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopicFlowRanking.TopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicId = string(value["TopicId"].GetString());
        m_topicIdHasBeenSet = true;
    }

    if (value.HasMember("TopicName") && !value["TopicName"].IsNull())
    {
        if (!value["TopicName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopicFlowRanking.TopicName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicName = string(value["TopicName"].GetString());
        m_topicNameHasBeenSet = true;
    }

    if (value.HasMember("PartitionNum") && !value["PartitionNum"].IsNull())
    {
        if (!value["PartitionNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TopicFlowRanking.PartitionNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_partitionNum = value["PartitionNum"].GetUint64();
        m_partitionNumHasBeenSet = true;
    }

    if (value.HasMember("ReplicaNum") && !value["ReplicaNum"].IsNull())
    {
        if (!value["ReplicaNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TopicFlowRanking.ReplicaNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_replicaNum = value["ReplicaNum"].GetUint64();
        m_replicaNumHasBeenSet = true;
    }

    if (value.HasMember("TopicTraffic") && !value["TopicTraffic"].IsNull())
    {
        if (!value["TopicTraffic"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopicFlowRanking.TopicTraffic` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicTraffic = string(value["TopicTraffic"].GetString());
        m_topicTrafficHasBeenSet = true;
    }

    if (value.HasMember("MessageHeap") && !value["MessageHeap"].IsNull())
    {
        if (!value["MessageHeap"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TopicFlowRanking.MessageHeap` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_messageHeap = value["MessageHeap"].GetUint64();
        m_messageHeapHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TopicFlowRanking::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_topicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicName.c_str(), allocator).Move(), allocator);
    }

    if (m_partitionNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartitionNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_partitionNum, allocator);
    }

    if (m_replicaNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplicaNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_replicaNum, allocator);
    }

    if (m_topicTrafficHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicTraffic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicTraffic.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHeapHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MessageHeap";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_messageHeap, allocator);
    }

}


string TopicFlowRanking::GetTopicId() const
{
    return m_topicId;
}

void TopicFlowRanking::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool TopicFlowRanking::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

string TopicFlowRanking::GetTopicName() const
{
    return m_topicName;
}

void TopicFlowRanking::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool TopicFlowRanking::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

uint64_t TopicFlowRanking::GetPartitionNum() const
{
    return m_partitionNum;
}

void TopicFlowRanking::SetPartitionNum(const uint64_t& _partitionNum)
{
    m_partitionNum = _partitionNum;
    m_partitionNumHasBeenSet = true;
}

bool TopicFlowRanking::PartitionNumHasBeenSet() const
{
    return m_partitionNumHasBeenSet;
}

uint64_t TopicFlowRanking::GetReplicaNum() const
{
    return m_replicaNum;
}

void TopicFlowRanking::SetReplicaNum(const uint64_t& _replicaNum)
{
    m_replicaNum = _replicaNum;
    m_replicaNumHasBeenSet = true;
}

bool TopicFlowRanking::ReplicaNumHasBeenSet() const
{
    return m_replicaNumHasBeenSet;
}

string TopicFlowRanking::GetTopicTraffic() const
{
    return m_topicTraffic;
}

void TopicFlowRanking::SetTopicTraffic(const string& _topicTraffic)
{
    m_topicTraffic = _topicTraffic;
    m_topicTrafficHasBeenSet = true;
}

bool TopicFlowRanking::TopicTrafficHasBeenSet() const
{
    return m_topicTrafficHasBeenSet;
}

uint64_t TopicFlowRanking::GetMessageHeap() const
{
    return m_messageHeap;
}

void TopicFlowRanking::SetMessageHeap(const uint64_t& _messageHeap)
{
    m_messageHeap = _messageHeap;
    m_messageHeapHasBeenSet = true;
}

bool TopicFlowRanking::MessageHeapHasBeenSet() const
{
    return m_messageHeapHasBeenSet;
}

