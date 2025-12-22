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

#include <tencentcloud/cls/v20201016/model/TopicPartitionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

TopicPartitionInfo::TopicPartitionInfo() :
    m_topicIDHasBeenSet(false),
    m_partitionsHasBeenSet(false)
{
}

CoreInternalOutcome TopicPartitionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TopicID") && !value["TopicID"].IsNull())
    {
        if (!value["TopicID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopicPartitionInfo.TopicID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicID = string(value["TopicID"].GetString());
        m_topicIDHasBeenSet = true;
    }

    if (value.HasMember("Partitions") && !value["Partitions"].IsNull())
    {
        if (!value["Partitions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TopicPartitionInfo.Partitions` is not array type"));

        const rapidjson::Value &tmpValue = value["Partitions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_partitions.push_back((*itr).GetUint64());
        }
        m_partitionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TopicPartitionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_topicIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicID.c_str(), allocator).Move(), allocator);
    }

    if (m_partitionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Partitions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_partitions.begin(); itr != m_partitions.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

}


string TopicPartitionInfo::GetTopicID() const
{
    return m_topicID;
}

void TopicPartitionInfo::SetTopicID(const string& _topicID)
{
    m_topicID = _topicID;
    m_topicIDHasBeenSet = true;
}

bool TopicPartitionInfo::TopicIDHasBeenSet() const
{
    return m_topicIDHasBeenSet;
}

vector<uint64_t> TopicPartitionInfo::GetPartitions() const
{
    return m_partitions;
}

void TopicPartitionInfo::SetPartitions(const vector<uint64_t>& _partitions)
{
    m_partitions = _partitions;
    m_partitionsHasBeenSet = true;
}

bool TopicPartitionInfo::PartitionsHasBeenSet() const
{
    return m_partitionsHasBeenSet;
}

