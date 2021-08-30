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

#include <tencentcloud/ckafka/v20190819/model/TopicInSyncReplicaInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

TopicInSyncReplicaInfo::TopicInSyncReplicaInfo() :
    m_partitionHasBeenSet(false),
    m_leaderHasBeenSet(false),
    m_replicaHasBeenSet(false),
    m_inSyncReplicaHasBeenSet(false),
    m_beginOffsetHasBeenSet(false),
    m_endOffsetHasBeenSet(false),
    m_messageCountHasBeenSet(false),
    m_outOfSyncReplicaHasBeenSet(false)
{
}

CoreInternalOutcome TopicInSyncReplicaInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Partition") && !value["Partition"].IsNull())
    {
        if (!value["Partition"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopicInSyncReplicaInfo.Partition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_partition = string(value["Partition"].GetString());
        m_partitionHasBeenSet = true;
    }

    if (value.HasMember("Leader") && !value["Leader"].IsNull())
    {
        if (!value["Leader"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TopicInSyncReplicaInfo.Leader` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_leader = value["Leader"].GetUint64();
        m_leaderHasBeenSet = true;
    }

    if (value.HasMember("Replica") && !value["Replica"].IsNull())
    {
        if (!value["Replica"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopicInSyncReplicaInfo.Replica` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_replica = string(value["Replica"].GetString());
        m_replicaHasBeenSet = true;
    }

    if (value.HasMember("InSyncReplica") && !value["InSyncReplica"].IsNull())
    {
        if (!value["InSyncReplica"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopicInSyncReplicaInfo.InSyncReplica` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inSyncReplica = string(value["InSyncReplica"].GetString());
        m_inSyncReplicaHasBeenSet = true;
    }

    if (value.HasMember("BeginOffset") && !value["BeginOffset"].IsNull())
    {
        if (!value["BeginOffset"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TopicInSyncReplicaInfo.BeginOffset` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_beginOffset = value["BeginOffset"].GetUint64();
        m_beginOffsetHasBeenSet = true;
    }

    if (value.HasMember("EndOffset") && !value["EndOffset"].IsNull())
    {
        if (!value["EndOffset"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TopicInSyncReplicaInfo.EndOffset` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_endOffset = value["EndOffset"].GetUint64();
        m_endOffsetHasBeenSet = true;
    }

    if (value.HasMember("MessageCount") && !value["MessageCount"].IsNull())
    {
        if (!value["MessageCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TopicInSyncReplicaInfo.MessageCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_messageCount = value["MessageCount"].GetUint64();
        m_messageCountHasBeenSet = true;
    }

    if (value.HasMember("OutOfSyncReplica") && !value["OutOfSyncReplica"].IsNull())
    {
        if (!value["OutOfSyncReplica"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopicInSyncReplicaInfo.OutOfSyncReplica` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outOfSyncReplica = string(value["OutOfSyncReplica"].GetString());
        m_outOfSyncReplicaHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TopicInSyncReplicaInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_partitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Partition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_partition.c_str(), allocator).Move(), allocator);
    }

    if (m_leaderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Leader";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_leader, allocator);
    }

    if (m_replicaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Replica";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_replica.c_str(), allocator).Move(), allocator);
    }

    if (m_inSyncReplicaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InSyncReplica";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inSyncReplica.c_str(), allocator).Move(), allocator);
    }

    if (m_beginOffsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginOffset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_beginOffset, allocator);
    }

    if (m_endOffsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndOffset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endOffset, allocator);
    }

    if (m_messageCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MessageCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_messageCount, allocator);
    }

    if (m_outOfSyncReplicaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutOfSyncReplica";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outOfSyncReplica.c_str(), allocator).Move(), allocator);
    }

}


string TopicInSyncReplicaInfo::GetPartition() const
{
    return m_partition;
}

void TopicInSyncReplicaInfo::SetPartition(const string& _partition)
{
    m_partition = _partition;
    m_partitionHasBeenSet = true;
}

bool TopicInSyncReplicaInfo::PartitionHasBeenSet() const
{
    return m_partitionHasBeenSet;
}

uint64_t TopicInSyncReplicaInfo::GetLeader() const
{
    return m_leader;
}

void TopicInSyncReplicaInfo::SetLeader(const uint64_t& _leader)
{
    m_leader = _leader;
    m_leaderHasBeenSet = true;
}

bool TopicInSyncReplicaInfo::LeaderHasBeenSet() const
{
    return m_leaderHasBeenSet;
}

string TopicInSyncReplicaInfo::GetReplica() const
{
    return m_replica;
}

void TopicInSyncReplicaInfo::SetReplica(const string& _replica)
{
    m_replica = _replica;
    m_replicaHasBeenSet = true;
}

bool TopicInSyncReplicaInfo::ReplicaHasBeenSet() const
{
    return m_replicaHasBeenSet;
}

string TopicInSyncReplicaInfo::GetInSyncReplica() const
{
    return m_inSyncReplica;
}

void TopicInSyncReplicaInfo::SetInSyncReplica(const string& _inSyncReplica)
{
    m_inSyncReplica = _inSyncReplica;
    m_inSyncReplicaHasBeenSet = true;
}

bool TopicInSyncReplicaInfo::InSyncReplicaHasBeenSet() const
{
    return m_inSyncReplicaHasBeenSet;
}

uint64_t TopicInSyncReplicaInfo::GetBeginOffset() const
{
    return m_beginOffset;
}

void TopicInSyncReplicaInfo::SetBeginOffset(const uint64_t& _beginOffset)
{
    m_beginOffset = _beginOffset;
    m_beginOffsetHasBeenSet = true;
}

bool TopicInSyncReplicaInfo::BeginOffsetHasBeenSet() const
{
    return m_beginOffsetHasBeenSet;
}

uint64_t TopicInSyncReplicaInfo::GetEndOffset() const
{
    return m_endOffset;
}

void TopicInSyncReplicaInfo::SetEndOffset(const uint64_t& _endOffset)
{
    m_endOffset = _endOffset;
    m_endOffsetHasBeenSet = true;
}

bool TopicInSyncReplicaInfo::EndOffsetHasBeenSet() const
{
    return m_endOffsetHasBeenSet;
}

uint64_t TopicInSyncReplicaInfo::GetMessageCount() const
{
    return m_messageCount;
}

void TopicInSyncReplicaInfo::SetMessageCount(const uint64_t& _messageCount)
{
    m_messageCount = _messageCount;
    m_messageCountHasBeenSet = true;
}

bool TopicInSyncReplicaInfo::MessageCountHasBeenSet() const
{
    return m_messageCountHasBeenSet;
}

string TopicInSyncReplicaInfo::GetOutOfSyncReplica() const
{
    return m_outOfSyncReplica;
}

void TopicInSyncReplicaInfo::SetOutOfSyncReplica(const string& _outOfSyncReplica)
{
    m_outOfSyncReplica = _outOfSyncReplica;
    m_outOfSyncReplicaHasBeenSet = true;
}

bool TopicInSyncReplicaInfo::OutOfSyncReplicaHasBeenSet() const
{
    return m_outOfSyncReplicaHasBeenSet;
}

