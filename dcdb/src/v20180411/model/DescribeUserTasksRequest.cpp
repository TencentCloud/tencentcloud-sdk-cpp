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

#include <tencentcloud/dcdb/v20180411/model/DescribeUserTasksRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dcdb::V20180411::Model;
using namespace rapidjson;
using namespace std;

DescribeUserTasksRequest::DescribeUserTasksRequest() :
    m_statusesHasBeenSet(false),
    m_instanceIdsHasBeenSet(false),
    m_flowTypesHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_uTaskIdsHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false)
{
}

string DescribeUserTasksRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_statusesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Statuses";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_statuses.begin(); itr != m_statuses.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetInt64(*itr), allocator);
        }
    }

    if (m_instanceIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_instanceIds.begin(); itr != m_instanceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_flowTypesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FlowTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_flowTypes.begin(); itr != m_flowTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetInt64(*itr), allocator);
        }
    }

    if (m_startTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_uTaskIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UTaskIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_uTaskIds.begin(); itr != m_uTaskIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetInt64(*itr), allocator);
        }
    }

    if (m_limitHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<int64_t> DescribeUserTasksRequest::GetStatuses() const
{
    return m_statuses;
}

void DescribeUserTasksRequest::SetStatuses(const vector<int64_t>& _statuses)
{
    m_statuses = _statuses;
    m_statusesHasBeenSet = true;
}

bool DescribeUserTasksRequest::StatusesHasBeenSet() const
{
    return m_statusesHasBeenSet;
}

vector<string> DescribeUserTasksRequest::GetInstanceIds() const
{
    return m_instanceIds;
}

void DescribeUserTasksRequest::SetInstanceIds(const vector<string>& _instanceIds)
{
    m_instanceIds = _instanceIds;
    m_instanceIdsHasBeenSet = true;
}

bool DescribeUserTasksRequest::InstanceIdsHasBeenSet() const
{
    return m_instanceIdsHasBeenSet;
}

vector<int64_t> DescribeUserTasksRequest::GetFlowTypes() const
{
    return m_flowTypes;
}

void DescribeUserTasksRequest::SetFlowTypes(const vector<int64_t>& _flowTypes)
{
    m_flowTypes = _flowTypes;
    m_flowTypesHasBeenSet = true;
}

bool DescribeUserTasksRequest::FlowTypesHasBeenSet() const
{
    return m_flowTypesHasBeenSet;
}

string DescribeUserTasksRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeUserTasksRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeUserTasksRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeUserTasksRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeUserTasksRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeUserTasksRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

vector<int64_t> DescribeUserTasksRequest::GetUTaskIds() const
{
    return m_uTaskIds;
}

void DescribeUserTasksRequest::SetUTaskIds(const vector<int64_t>& _uTaskIds)
{
    m_uTaskIds = _uTaskIds;
    m_uTaskIdsHasBeenSet = true;
}

bool DescribeUserTasksRequest::UTaskIdsHasBeenSet() const
{
    return m_uTaskIdsHasBeenSet;
}

int64_t DescribeUserTasksRequest::GetLimit() const
{
    return m_limit;
}

void DescribeUserTasksRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeUserTasksRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeUserTasksRequest::GetOffset() const
{
    return m_offset;
}

void DescribeUserTasksRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeUserTasksRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}


