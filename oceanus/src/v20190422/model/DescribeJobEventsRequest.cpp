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

#include <tencentcloud/oceanus/v20190422/model/DescribeJobEventsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace std;

DescribeJobEventsRequest::DescribeJobEventsRequest() :
    m_jobIdHasBeenSet(false),
    m_startTimestampHasBeenSet(false),
    m_endTimestampHasBeenSet(false),
    m_typesHasBeenSet(false),
    m_runningOrderIdsHasBeenSet(false),
    m_workSpaceIdHasBeenSet(false)
{
}

string DescribeJobEventsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_jobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_jobId.c_str(), allocator).Move(), allocator);
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

    if (m_typesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Types";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_types.begin(); itr != m_types.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_runningOrderIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunningOrderIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_runningOrderIds.begin(); itr != m_runningOrderIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_workSpaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkSpaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workSpaceId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeJobEventsRequest::GetJobId() const
{
    return m_jobId;
}

void DescribeJobEventsRequest::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool DescribeJobEventsRequest::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

uint64_t DescribeJobEventsRequest::GetStartTimestamp() const
{
    return m_startTimestamp;
}

void DescribeJobEventsRequest::SetStartTimestamp(const uint64_t& _startTimestamp)
{
    m_startTimestamp = _startTimestamp;
    m_startTimestampHasBeenSet = true;
}

bool DescribeJobEventsRequest::StartTimestampHasBeenSet() const
{
    return m_startTimestampHasBeenSet;
}

uint64_t DescribeJobEventsRequest::GetEndTimestamp() const
{
    return m_endTimestamp;
}

void DescribeJobEventsRequest::SetEndTimestamp(const uint64_t& _endTimestamp)
{
    m_endTimestamp = _endTimestamp;
    m_endTimestampHasBeenSet = true;
}

bool DescribeJobEventsRequest::EndTimestampHasBeenSet() const
{
    return m_endTimestampHasBeenSet;
}

vector<string> DescribeJobEventsRequest::GetTypes() const
{
    return m_types;
}

void DescribeJobEventsRequest::SetTypes(const vector<string>& _types)
{
    m_types = _types;
    m_typesHasBeenSet = true;
}

bool DescribeJobEventsRequest::TypesHasBeenSet() const
{
    return m_typesHasBeenSet;
}

vector<uint64_t> DescribeJobEventsRequest::GetRunningOrderIds() const
{
    return m_runningOrderIds;
}

void DescribeJobEventsRequest::SetRunningOrderIds(const vector<uint64_t>& _runningOrderIds)
{
    m_runningOrderIds = _runningOrderIds;
    m_runningOrderIdsHasBeenSet = true;
}

bool DescribeJobEventsRequest::RunningOrderIdsHasBeenSet() const
{
    return m_runningOrderIdsHasBeenSet;
}

string DescribeJobEventsRequest::GetWorkSpaceId() const
{
    return m_workSpaceId;
}

void DescribeJobEventsRequest::SetWorkSpaceId(const string& _workSpaceId)
{
    m_workSpaceId = _workSpaceId;
    m_workSpaceIdHasBeenSet = true;
}

bool DescribeJobEventsRequest::WorkSpaceIdHasBeenSet() const
{
    return m_workSpaceIdHasBeenSet;
}


