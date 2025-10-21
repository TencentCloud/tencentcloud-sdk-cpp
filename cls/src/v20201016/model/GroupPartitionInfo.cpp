/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/cls/v20201016/model/GroupPartitionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

GroupPartitionInfo::GroupPartitionInfo() :
    m_partitionIdHasBeenSet(false),
    m_commitTimestampHasBeenSet(false),
    m_consumerHasBeenSet(false)
{
}

CoreInternalOutcome GroupPartitionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PartitionId") && !value["PartitionId"].IsNull())
    {
        if (!value["PartitionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GroupPartitionInfo.PartitionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_partitionId = value["PartitionId"].GetInt64();
        m_partitionIdHasBeenSet = true;
    }

    if (value.HasMember("CommitTimestamp") && !value["CommitTimestamp"].IsNull())
    {
        if (!value["CommitTimestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GroupPartitionInfo.CommitTimestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_commitTimestamp = value["CommitTimestamp"].GetInt64();
        m_commitTimestampHasBeenSet = true;
    }

    if (value.HasMember("Consumer") && !value["Consumer"].IsNull())
    {
        if (!value["Consumer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupPartitionInfo.Consumer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_consumer = string(value["Consumer"].GetString());
        m_consumerHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GroupPartitionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_partitionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartitionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_partitionId, allocator);
    }

    if (m_commitTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CommitTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_commitTimestamp, allocator);
    }

    if (m_consumerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Consumer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_consumer.c_str(), allocator).Move(), allocator);
    }

}


int64_t GroupPartitionInfo::GetPartitionId() const
{
    return m_partitionId;
}

void GroupPartitionInfo::SetPartitionId(const int64_t& _partitionId)
{
    m_partitionId = _partitionId;
    m_partitionIdHasBeenSet = true;
}

bool GroupPartitionInfo::PartitionIdHasBeenSet() const
{
    return m_partitionIdHasBeenSet;
}

int64_t GroupPartitionInfo::GetCommitTimestamp() const
{
    return m_commitTimestamp;
}

void GroupPartitionInfo::SetCommitTimestamp(const int64_t& _commitTimestamp)
{
    m_commitTimestamp = _commitTimestamp;
    m_commitTimestampHasBeenSet = true;
}

bool GroupPartitionInfo::CommitTimestampHasBeenSet() const
{
    return m_commitTimestampHasBeenSet;
}

string GroupPartitionInfo::GetConsumer() const
{
    return m_consumer;
}

void GroupPartitionInfo::SetConsumer(const string& _consumer)
{
    m_consumer = _consumer;
    m_consumerHasBeenSet = true;
}

bool GroupPartitionInfo::ConsumerHasBeenSet() const
{
    return m_consumerHasBeenSet;
}

