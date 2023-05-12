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

#include <tencentcloud/ckafka/v20190819/model/TopicMessageHeapRanking.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

TopicMessageHeapRanking::TopicMessageHeapRanking() :
    m_topicIdHasBeenSet(false),
    m_topicNameHasBeenSet(false),
    m_partitionNumHasBeenSet(false),
    m_replicaNumHasBeenSet(false),
    m_topicTrafficHasBeenSet(false),
    m_messageHeapHasBeenSet(false)
{
}

CoreInternalOutcome TopicMessageHeapRanking::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TopicId") && !value["TopicId"].IsNull())
    {
        if (!value["TopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopicMessageHeapRanking.TopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicId = string(value["TopicId"].GetString());
        m_topicIdHasBeenSet = true;
    }

    if (value.HasMember("TopicName") && !value["TopicName"].IsNull())
    {
        if (!value["TopicName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopicMessageHeapRanking.TopicName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicName = string(value["TopicName"].GetString());
        m_topicNameHasBeenSet = true;
    }

    if (value.HasMember("PartitionNum") && !value["PartitionNum"].IsNull())
    {
        if (!value["PartitionNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TopicMessageHeapRanking.PartitionNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_partitionNum = value["PartitionNum"].GetUint64();
        m_partitionNumHasBeenSet = true;
    }

    if (value.HasMember("ReplicaNum") && !value["ReplicaNum"].IsNull())
    {
        if (!value["ReplicaNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TopicMessageHeapRanking.ReplicaNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_replicaNum = value["ReplicaNum"].GetUint64();
        m_replicaNumHasBeenSet = true;
    }

    if (value.HasMember("TopicTraffic") && !value["TopicTraffic"].IsNull())
    {
        if (!value["TopicTraffic"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopicMessageHeapRanking.TopicTraffic` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicTraffic = string(value["TopicTraffic"].GetString());
        m_topicTrafficHasBeenSet = true;
    }

    if (value.HasMember("MessageHeap") && !value["MessageHeap"].IsNull())
    {
        if (!value["MessageHeap"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TopicMessageHeapRanking.MessageHeap` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_messageHeap = value["MessageHeap"].GetUint64();
        m_messageHeapHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TopicMessageHeapRanking::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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


string TopicMessageHeapRanking::GetTopicId() const
{
    return m_topicId;
}

void TopicMessageHeapRanking::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool TopicMessageHeapRanking::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

string TopicMessageHeapRanking::GetTopicName() const
{
    return m_topicName;
}

void TopicMessageHeapRanking::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool TopicMessageHeapRanking::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

uint64_t TopicMessageHeapRanking::GetPartitionNum() const
{
    return m_partitionNum;
}

void TopicMessageHeapRanking::SetPartitionNum(const uint64_t& _partitionNum)
{
    m_partitionNum = _partitionNum;
    m_partitionNumHasBeenSet = true;
}

bool TopicMessageHeapRanking::PartitionNumHasBeenSet() const
{
    return m_partitionNumHasBeenSet;
}

uint64_t TopicMessageHeapRanking::GetReplicaNum() const
{
    return m_replicaNum;
}

void TopicMessageHeapRanking::SetReplicaNum(const uint64_t& _replicaNum)
{
    m_replicaNum = _replicaNum;
    m_replicaNumHasBeenSet = true;
}

bool TopicMessageHeapRanking::ReplicaNumHasBeenSet() const
{
    return m_replicaNumHasBeenSet;
}

string TopicMessageHeapRanking::GetTopicTraffic() const
{
    return m_topicTraffic;
}

void TopicMessageHeapRanking::SetTopicTraffic(const string& _topicTraffic)
{
    m_topicTraffic = _topicTraffic;
    m_topicTrafficHasBeenSet = true;
}

bool TopicMessageHeapRanking::TopicTrafficHasBeenSet() const
{
    return m_topicTrafficHasBeenSet;
}

uint64_t TopicMessageHeapRanking::GetMessageHeap() const
{
    return m_messageHeap;
}

void TopicMessageHeapRanking::SetMessageHeap(const uint64_t& _messageHeap)
{
    m_messageHeap = _messageHeap;
    m_messageHeapHasBeenSet = true;
}

bool TopicMessageHeapRanking::MessageHeapHasBeenSet() const
{
    return m_messageHeapHasBeenSet;
}

