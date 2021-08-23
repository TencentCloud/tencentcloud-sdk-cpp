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

#include <tencentcloud/ckafka/v20190819/model/ConsumerGroupResponse.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

ConsumerGroupResponse::ConsumerGroupResponse() :
    m_totalCountHasBeenSet(false),
    m_topicListHasBeenSet(false),
    m_groupListHasBeenSet(false),
    m_totalPartitionHasBeenSet(false),
    m_partitionListForMonitorHasBeenSet(false),
    m_totalTopicHasBeenSet(false),
    m_topicListForMonitorHasBeenSet(false),
    m_groupListForMonitorHasBeenSet(false)
{
}

CoreInternalOutcome ConsumerGroupResponse::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumerGroupResponse.TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (value.HasMember("TopicList") && !value["TopicList"].IsNull())
    {
        if (!value["TopicList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ConsumerGroupResponse.TopicList` is not array type"));

        const rapidjson::Value &tmpValue = value["TopicList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ConsumerGroupTopic item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_topicList.push_back(item);
        }
        m_topicListHasBeenSet = true;
    }

    if (value.HasMember("GroupList") && !value["GroupList"].IsNull())
    {
        if (!value["GroupList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ConsumerGroupResponse.GroupList` is not array type"));

        const rapidjson::Value &tmpValue = value["GroupList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ConsumerGroup item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_groupList.push_back(item);
        }
        m_groupListHasBeenSet = true;
    }

    if (value.HasMember("TotalPartition") && !value["TotalPartition"].IsNull())
    {
        if (!value["TotalPartition"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumerGroupResponse.TotalPartition` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalPartition = value["TotalPartition"].GetInt64();
        m_totalPartitionHasBeenSet = true;
    }

    if (value.HasMember("PartitionListForMonitor") && !value["PartitionListForMonitor"].IsNull())
    {
        if (!value["PartitionListForMonitor"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ConsumerGroupResponse.PartitionListForMonitor` is not array type"));

        const rapidjson::Value &tmpValue = value["PartitionListForMonitor"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Partition item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_partitionListForMonitor.push_back(item);
        }
        m_partitionListForMonitorHasBeenSet = true;
    }

    if (value.HasMember("TotalTopic") && !value["TotalTopic"].IsNull())
    {
        if (!value["TotalTopic"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumerGroupResponse.TotalTopic` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalTopic = value["TotalTopic"].GetInt64();
        m_totalTopicHasBeenSet = true;
    }

    if (value.HasMember("TopicListForMonitor") && !value["TopicListForMonitor"].IsNull())
    {
        if (!value["TopicListForMonitor"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ConsumerGroupResponse.TopicListForMonitor` is not array type"));

        const rapidjson::Value &tmpValue = value["TopicListForMonitor"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ConsumerGroupTopic item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_topicListForMonitor.push_back(item);
        }
        m_topicListForMonitorHasBeenSet = true;
    }

    if (value.HasMember("GroupListForMonitor") && !value["GroupListForMonitor"].IsNull())
    {
        if (!value["GroupListForMonitor"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ConsumerGroupResponse.GroupListForMonitor` is not array type"));

        const rapidjson::Value &tmpValue = value["GroupListForMonitor"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Group item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_groupListForMonitor.push_back(item);
        }
        m_groupListForMonitorHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConsumerGroupResponse::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_topicListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_topicList.begin(); itr != m_topicList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_groupListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_groupList.begin(); itr != m_groupList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_totalPartitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalPartition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalPartition, allocator);
    }

    if (m_partitionListForMonitorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartitionListForMonitor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_partitionListForMonitor.begin(); itr != m_partitionListForMonitor.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_totalTopicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalTopic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalTopic, allocator);
    }

    if (m_topicListForMonitorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicListForMonitor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_topicListForMonitor.begin(); itr != m_topicListForMonitor.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_groupListForMonitorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupListForMonitor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_groupListForMonitor.begin(); itr != m_groupListForMonitor.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t ConsumerGroupResponse::GetTotalCount() const
{
    return m_totalCount;
}

void ConsumerGroupResponse::SetTotalCount(const int64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool ConsumerGroupResponse::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

vector<ConsumerGroupTopic> ConsumerGroupResponse::GetTopicList() const
{
    return m_topicList;
}

void ConsumerGroupResponse::SetTopicList(const vector<ConsumerGroupTopic>& _topicList)
{
    m_topicList = _topicList;
    m_topicListHasBeenSet = true;
}

bool ConsumerGroupResponse::TopicListHasBeenSet() const
{
    return m_topicListHasBeenSet;
}

vector<ConsumerGroup> ConsumerGroupResponse::GetGroupList() const
{
    return m_groupList;
}

void ConsumerGroupResponse::SetGroupList(const vector<ConsumerGroup>& _groupList)
{
    m_groupList = _groupList;
    m_groupListHasBeenSet = true;
}

bool ConsumerGroupResponse::GroupListHasBeenSet() const
{
    return m_groupListHasBeenSet;
}

int64_t ConsumerGroupResponse::GetTotalPartition() const
{
    return m_totalPartition;
}

void ConsumerGroupResponse::SetTotalPartition(const int64_t& _totalPartition)
{
    m_totalPartition = _totalPartition;
    m_totalPartitionHasBeenSet = true;
}

bool ConsumerGroupResponse::TotalPartitionHasBeenSet() const
{
    return m_totalPartitionHasBeenSet;
}

vector<Partition> ConsumerGroupResponse::GetPartitionListForMonitor() const
{
    return m_partitionListForMonitor;
}

void ConsumerGroupResponse::SetPartitionListForMonitor(const vector<Partition>& _partitionListForMonitor)
{
    m_partitionListForMonitor = _partitionListForMonitor;
    m_partitionListForMonitorHasBeenSet = true;
}

bool ConsumerGroupResponse::PartitionListForMonitorHasBeenSet() const
{
    return m_partitionListForMonitorHasBeenSet;
}

int64_t ConsumerGroupResponse::GetTotalTopic() const
{
    return m_totalTopic;
}

void ConsumerGroupResponse::SetTotalTopic(const int64_t& _totalTopic)
{
    m_totalTopic = _totalTopic;
    m_totalTopicHasBeenSet = true;
}

bool ConsumerGroupResponse::TotalTopicHasBeenSet() const
{
    return m_totalTopicHasBeenSet;
}

vector<ConsumerGroupTopic> ConsumerGroupResponse::GetTopicListForMonitor() const
{
    return m_topicListForMonitor;
}

void ConsumerGroupResponse::SetTopicListForMonitor(const vector<ConsumerGroupTopic>& _topicListForMonitor)
{
    m_topicListForMonitor = _topicListForMonitor;
    m_topicListForMonitorHasBeenSet = true;
}

bool ConsumerGroupResponse::TopicListForMonitorHasBeenSet() const
{
    return m_topicListForMonitorHasBeenSet;
}

vector<Group> ConsumerGroupResponse::GetGroupListForMonitor() const
{
    return m_groupListForMonitor;
}

void ConsumerGroupResponse::SetGroupListForMonitor(const vector<Group>& _groupListForMonitor)
{
    m_groupListForMonitor = _groupListForMonitor;
    m_groupListForMonitorHasBeenSet = true;
}

bool ConsumerGroupResponse::GroupListForMonitorHasBeenSet() const
{
    return m_groupListForMonitorHasBeenSet;
}

