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

#include <tencentcloud/goosefs/v20220519/model/ListLoadTasksRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Goosefs::V20220519::Model;
using namespace std;

ListLoadTasksRequest::ListLoadTasksRequest() :
    m_clusterIdHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_startTimestampHasBeenSet(false),
    m_endTimestampHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_priorityHasBeenSet(false)
{
}

string ListLoadTasksRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_startTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTimestamp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startTimestamp, allocator);
    }

    if (m_endTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTimestamp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endTimestamp, allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_priorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Priority";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_priority, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ListLoadTasksRequest::GetClusterId() const
{
    return m_clusterId;
}

void ListLoadTasksRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ListLoadTasksRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

uint64_t ListLoadTasksRequest::GetOffset() const
{
    return m_offset;
}

void ListLoadTasksRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool ListLoadTasksRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t ListLoadTasksRequest::GetLimit() const
{
    return m_limit;
}

void ListLoadTasksRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool ListLoadTasksRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t ListLoadTasksRequest::GetStartTimestamp() const
{
    return m_startTimestamp;
}

void ListLoadTasksRequest::SetStartTimestamp(const uint64_t& _startTimestamp)
{
    m_startTimestamp = _startTimestamp;
    m_startTimestampHasBeenSet = true;
}

bool ListLoadTasksRequest::StartTimestampHasBeenSet() const
{
    return m_startTimestampHasBeenSet;
}

uint64_t ListLoadTasksRequest::GetEndTimestamp() const
{
    return m_endTimestamp;
}

void ListLoadTasksRequest::SetEndTimestamp(const uint64_t& _endTimestamp)
{
    m_endTimestamp = _endTimestamp;
    m_endTimestampHasBeenSet = true;
}

bool ListLoadTasksRequest::EndTimestampHasBeenSet() const
{
    return m_endTimestampHasBeenSet;
}

string ListLoadTasksRequest::GetState() const
{
    return m_state;
}

void ListLoadTasksRequest::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool ListLoadTasksRequest::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

uint64_t ListLoadTasksRequest::GetPriority() const
{
    return m_priority;
}

void ListLoadTasksRequest::SetPriority(const uint64_t& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool ListLoadTasksRequest::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}


