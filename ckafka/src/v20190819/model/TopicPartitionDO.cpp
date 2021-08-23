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

#include <tencentcloud/ckafka/v20190819/model/TopicPartitionDO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

TopicPartitionDO::TopicPartitionDO() :
    m_partitionHasBeenSet(false),
    m_leaderStatusHasBeenSet(false),
    m_isrNumHasBeenSet(false),
    m_replicaNumHasBeenSet(false)
{
}

CoreInternalOutcome TopicPartitionDO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Partition") && !value["Partition"].IsNull())
    {
        if (!value["Partition"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TopicPartitionDO.Partition` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_partition = value["Partition"].GetInt64();
        m_partitionHasBeenSet = true;
    }

    if (value.HasMember("LeaderStatus") && !value["LeaderStatus"].IsNull())
    {
        if (!value["LeaderStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TopicPartitionDO.LeaderStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_leaderStatus = value["LeaderStatus"].GetInt64();
        m_leaderStatusHasBeenSet = true;
    }

    if (value.HasMember("IsrNum") && !value["IsrNum"].IsNull())
    {
        if (!value["IsrNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TopicPartitionDO.IsrNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isrNum = value["IsrNum"].GetInt64();
        m_isrNumHasBeenSet = true;
    }

    if (value.HasMember("ReplicaNum") && !value["ReplicaNum"].IsNull())
    {
        if (!value["ReplicaNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TopicPartitionDO.ReplicaNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_replicaNum = value["ReplicaNum"].GetInt64();
        m_replicaNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TopicPartitionDO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_partitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Partition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_partition, allocator);
    }

    if (m_leaderStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LeaderStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_leaderStatus, allocator);
    }

    if (m_isrNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsrNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isrNum, allocator);
    }

    if (m_replicaNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplicaNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_replicaNum, allocator);
    }

}


int64_t TopicPartitionDO::GetPartition() const
{
    return m_partition;
}

void TopicPartitionDO::SetPartition(const int64_t& _partition)
{
    m_partition = _partition;
    m_partitionHasBeenSet = true;
}

bool TopicPartitionDO::PartitionHasBeenSet() const
{
    return m_partitionHasBeenSet;
}

int64_t TopicPartitionDO::GetLeaderStatus() const
{
    return m_leaderStatus;
}

void TopicPartitionDO::SetLeaderStatus(const int64_t& _leaderStatus)
{
    m_leaderStatus = _leaderStatus;
    m_leaderStatusHasBeenSet = true;
}

bool TopicPartitionDO::LeaderStatusHasBeenSet() const
{
    return m_leaderStatusHasBeenSet;
}

int64_t TopicPartitionDO::GetIsrNum() const
{
    return m_isrNum;
}

void TopicPartitionDO::SetIsrNum(const int64_t& _isrNum)
{
    m_isrNum = _isrNum;
    m_isrNumHasBeenSet = true;
}

bool TopicPartitionDO::IsrNumHasBeenSet() const
{
    return m_isrNumHasBeenSet;
}

int64_t TopicPartitionDO::GetReplicaNum() const
{
    return m_replicaNum;
}

void TopicPartitionDO::SetReplicaNum(const int64_t& _replicaNum)
{
    m_replicaNum = _replicaNum;
    m_replicaNumHasBeenSet = true;
}

bool TopicPartitionDO::ReplicaNumHasBeenSet() const
{
    return m_replicaNumHasBeenSet;
}

