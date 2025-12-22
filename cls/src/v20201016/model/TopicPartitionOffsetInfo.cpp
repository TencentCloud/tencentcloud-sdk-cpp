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

#include <tencentcloud/cls/v20201016/model/TopicPartitionOffsetInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

TopicPartitionOffsetInfo::TopicPartitionOffsetInfo() :
    m_topicIDHasBeenSet(false),
    m_partitionOffsetsHasBeenSet(false)
{
}

CoreInternalOutcome TopicPartitionOffsetInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TopicID") && !value["TopicID"].IsNull())
    {
        if (!value["TopicID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopicPartitionOffsetInfo.TopicID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicID = string(value["TopicID"].GetString());
        m_topicIDHasBeenSet = true;
    }

    if (value.HasMember("PartitionOffsets") && !value["PartitionOffsets"].IsNull())
    {
        if (!value["PartitionOffsets"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TopicPartitionOffsetInfo.PartitionOffsets` is not array type"));

        const rapidjson::Value &tmpValue = value["PartitionOffsets"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PartitionOffsetInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_partitionOffsets.push_back(item);
        }
        m_partitionOffsetsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TopicPartitionOffsetInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_topicIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicID.c_str(), allocator).Move(), allocator);
    }

    if (m_partitionOffsetsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartitionOffsets";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_partitionOffsets.begin(); itr != m_partitionOffsets.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string TopicPartitionOffsetInfo::GetTopicID() const
{
    return m_topicID;
}

void TopicPartitionOffsetInfo::SetTopicID(const string& _topicID)
{
    m_topicID = _topicID;
    m_topicIDHasBeenSet = true;
}

bool TopicPartitionOffsetInfo::TopicIDHasBeenSet() const
{
    return m_topicIDHasBeenSet;
}

vector<PartitionOffsetInfo> TopicPartitionOffsetInfo::GetPartitionOffsets() const
{
    return m_partitionOffsets;
}

void TopicPartitionOffsetInfo::SetPartitionOffsets(const vector<PartitionOffsetInfo>& _partitionOffsets)
{
    m_partitionOffsets = _partitionOffsets;
    m_partitionOffsetsHasBeenSet = true;
}

bool TopicPartitionOffsetInfo::PartitionOffsetsHasBeenSet() const
{
    return m_partitionOffsetsHasBeenSet;
}

