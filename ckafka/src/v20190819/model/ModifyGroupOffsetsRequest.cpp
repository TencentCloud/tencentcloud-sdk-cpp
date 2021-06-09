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

#include <tencentcloud/ckafka/v20190819/model/ModifyGroupOffsetsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

ModifyGroupOffsetsRequest::ModifyGroupOffsetsRequest() :
    m_instanceIdHasBeenSet(false),
    m_groupHasBeenSet(false),
    m_strategyHasBeenSet(false),
    m_topicsHasBeenSet(false),
    m_shiftHasBeenSet(false),
    m_shiftTimestampHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_partitionsHasBeenSet(false)
{
}

string ModifyGroupOffsetsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Group";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_group.c_str(), allocator).Move(), allocator);
    }

    if (m_strategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Strategy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_strategy, allocator);
    }

    if (m_topicsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Topics";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_topics.begin(); itr != m_topics.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_shiftHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Shift";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_shift, allocator);
    }

    if (m_shiftTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShiftTimestamp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_shiftTimestamp, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_partitionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Partitions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_partitions.begin(); itr != m_partitions.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyGroupOffsetsRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyGroupOffsetsRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyGroupOffsetsRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ModifyGroupOffsetsRequest::GetGroup() const
{
    return m_group;
}

void ModifyGroupOffsetsRequest::SetGroup(const string& _group)
{
    m_group = _group;
    m_groupHasBeenSet = true;
}

bool ModifyGroupOffsetsRequest::GroupHasBeenSet() const
{
    return m_groupHasBeenSet;
}

int64_t ModifyGroupOffsetsRequest::GetStrategy() const
{
    return m_strategy;
}

void ModifyGroupOffsetsRequest::SetStrategy(const int64_t& _strategy)
{
    m_strategy = _strategy;
    m_strategyHasBeenSet = true;
}

bool ModifyGroupOffsetsRequest::StrategyHasBeenSet() const
{
    return m_strategyHasBeenSet;
}

vector<string> ModifyGroupOffsetsRequest::GetTopics() const
{
    return m_topics;
}

void ModifyGroupOffsetsRequest::SetTopics(const vector<string>& _topics)
{
    m_topics = _topics;
    m_topicsHasBeenSet = true;
}

bool ModifyGroupOffsetsRequest::TopicsHasBeenSet() const
{
    return m_topicsHasBeenSet;
}

int64_t ModifyGroupOffsetsRequest::GetShift() const
{
    return m_shift;
}

void ModifyGroupOffsetsRequest::SetShift(const int64_t& _shift)
{
    m_shift = _shift;
    m_shiftHasBeenSet = true;
}

bool ModifyGroupOffsetsRequest::ShiftHasBeenSet() const
{
    return m_shiftHasBeenSet;
}

int64_t ModifyGroupOffsetsRequest::GetShiftTimestamp() const
{
    return m_shiftTimestamp;
}

void ModifyGroupOffsetsRequest::SetShiftTimestamp(const int64_t& _shiftTimestamp)
{
    m_shiftTimestamp = _shiftTimestamp;
    m_shiftTimestampHasBeenSet = true;
}

bool ModifyGroupOffsetsRequest::ShiftTimestampHasBeenSet() const
{
    return m_shiftTimestampHasBeenSet;
}

int64_t ModifyGroupOffsetsRequest::GetOffset() const
{
    return m_offset;
}

void ModifyGroupOffsetsRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool ModifyGroupOffsetsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

vector<int64_t> ModifyGroupOffsetsRequest::GetPartitions() const
{
    return m_partitions;
}

void ModifyGroupOffsetsRequest::SetPartitions(const vector<int64_t>& _partitions)
{
    m_partitions = _partitions;
    m_partitionsHasBeenSet = true;
}

bool ModifyGroupOffsetsRequest::PartitionsHasBeenSet() const
{
    return m_partitionsHasBeenSet;
}


