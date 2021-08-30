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

#include <tencentcloud/ckafka/v20190819/model/TopicInSyncReplicaResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

TopicInSyncReplicaResult::TopicInSyncReplicaResult() :
    m_topicInSyncReplicaListHasBeenSet(false),
    m_totalCountHasBeenSet(false)
{
}

CoreInternalOutcome TopicInSyncReplicaResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TopicInSyncReplicaList") && !value["TopicInSyncReplicaList"].IsNull())
    {
        if (!value["TopicInSyncReplicaList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TopicInSyncReplicaResult.TopicInSyncReplicaList` is not array type"));

        const rapidjson::Value &tmpValue = value["TopicInSyncReplicaList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TopicInSyncReplicaInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_topicInSyncReplicaList.push_back(item);
        }
        m_topicInSyncReplicaListHasBeenSet = true;
    }

    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TopicInSyncReplicaResult.TotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetUint64();
        m_totalCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TopicInSyncReplicaResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_topicInSyncReplicaListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicInSyncReplicaList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_topicInSyncReplicaList.begin(); itr != m_topicInSyncReplicaList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

}


vector<TopicInSyncReplicaInfo> TopicInSyncReplicaResult::GetTopicInSyncReplicaList() const
{
    return m_topicInSyncReplicaList;
}

void TopicInSyncReplicaResult::SetTopicInSyncReplicaList(const vector<TopicInSyncReplicaInfo>& _topicInSyncReplicaList)
{
    m_topicInSyncReplicaList = _topicInSyncReplicaList;
    m_topicInSyncReplicaListHasBeenSet = true;
}

bool TopicInSyncReplicaResult::TopicInSyncReplicaListHasBeenSet() const
{
    return m_topicInSyncReplicaListHasBeenSet;
}

uint64_t TopicInSyncReplicaResult::GetTotalCount() const
{
    return m_totalCount;
}

void TopicInSyncReplicaResult::SetTotalCount(const uint64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool TopicInSyncReplicaResult::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

