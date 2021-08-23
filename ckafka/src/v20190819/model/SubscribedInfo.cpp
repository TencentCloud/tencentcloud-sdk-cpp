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

#include <tencentcloud/ckafka/v20190819/model/SubscribedInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

SubscribedInfo::SubscribedInfo() :
    m_topicNameHasBeenSet(false),
    m_partitionHasBeenSet(false),
    m_partitionOffsetHasBeenSet(false),
    m_topicIdHasBeenSet(false)
{
}

CoreInternalOutcome SubscribedInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TopicName") && !value["TopicName"].IsNull())
    {
        if (!value["TopicName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubscribedInfo.TopicName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicName = string(value["TopicName"].GetString());
        m_topicNameHasBeenSet = true;
    }

    if (value.HasMember("Partition") && !value["Partition"].IsNull())
    {
        if (!value["Partition"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SubscribedInfo.Partition` is not array type"));

        const rapidjson::Value &tmpValue = value["Partition"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_partition.push_back((*itr).GetInt64());
        }
        m_partitionHasBeenSet = true;
    }

    if (value.HasMember("PartitionOffset") && !value["PartitionOffset"].IsNull())
    {
        if (!value["PartitionOffset"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SubscribedInfo.PartitionOffset` is not array type"));

        const rapidjson::Value &tmpValue = value["PartitionOffset"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PartitionOffset item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_partitionOffset.push_back(item);
        }
        m_partitionOffsetHasBeenSet = true;
    }

    if (value.HasMember("TopicId") && !value["TopicId"].IsNull())
    {
        if (!value["TopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubscribedInfo.TopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicId = string(value["TopicId"].GetString());
        m_topicIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SubscribedInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_topicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicName.c_str(), allocator).Move(), allocator);
    }

    if (m_partitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Partition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_partition.begin(); itr != m_partition.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_partitionOffsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartitionOffset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_partitionOffset.begin(); itr != m_partitionOffset.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

}


string SubscribedInfo::GetTopicName() const
{
    return m_topicName;
}

void SubscribedInfo::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool SubscribedInfo::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

vector<int64_t> SubscribedInfo::GetPartition() const
{
    return m_partition;
}

void SubscribedInfo::SetPartition(const vector<int64_t>& _partition)
{
    m_partition = _partition;
    m_partitionHasBeenSet = true;
}

bool SubscribedInfo::PartitionHasBeenSet() const
{
    return m_partitionHasBeenSet;
}

vector<PartitionOffset> SubscribedInfo::GetPartitionOffset() const
{
    return m_partitionOffset;
}

void SubscribedInfo::SetPartitionOffset(const vector<PartitionOffset>& _partitionOffset)
{
    m_partitionOffset = _partitionOffset;
    m_partitionOffsetHasBeenSet = true;
}

bool SubscribedInfo::PartitionOffsetHasBeenSet() const
{
    return m_partitionOffsetHasBeenSet;
}

string SubscribedInfo::GetTopicId() const
{
    return m_topicId;
}

void SubscribedInfo::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool SubscribedInfo::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

