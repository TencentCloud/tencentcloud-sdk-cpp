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

#include <tencentcloud/pts/v20210728/model/DescribeJobsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Pts::V20210728::Model;
using namespace std;

DescribeJobsRequest::DescribeJobsRequest() :
    m_scenarioIdsHasBeenSet(false),
    m_projectIdsHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_jobIdsHasBeenSet(false),
    m_orderByHasBeenSet(false),
    m_ascendHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_debugHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

string DescribeJobsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_scenarioIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScenarioIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_scenarioIds.begin(); itr != m_scenarioIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_projectIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_projectIds.begin(); itr != m_projectIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

    if (m_jobIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_jobIds.begin(); itr != m_jobIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_orderByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderBy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderBy.c_str(), allocator).Move(), allocator);
    }

    if (m_ascendHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ascend";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ascend, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_debugHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Debug";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_debug, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_status.begin(); itr != m_status.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DescribeJobsRequest::GetScenarioIds() const
{
    return m_scenarioIds;
}

void DescribeJobsRequest::SetScenarioIds(const vector<string>& _scenarioIds)
{
    m_scenarioIds = _scenarioIds;
    m_scenarioIdsHasBeenSet = true;
}

bool DescribeJobsRequest::ScenarioIdsHasBeenSet() const
{
    return m_scenarioIdsHasBeenSet;
}

vector<string> DescribeJobsRequest::GetProjectIds() const
{
    return m_projectIds;
}

void DescribeJobsRequest::SetProjectIds(const vector<string>& _projectIds)
{
    m_projectIds = _projectIds;
    m_projectIdsHasBeenSet = true;
}

bool DescribeJobsRequest::ProjectIdsHasBeenSet() const
{
    return m_projectIdsHasBeenSet;
}

int64_t DescribeJobsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeJobsRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeJobsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeJobsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeJobsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeJobsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

vector<string> DescribeJobsRequest::GetJobIds() const
{
    return m_jobIds;
}

void DescribeJobsRequest::SetJobIds(const vector<string>& _jobIds)
{
    m_jobIds = _jobIds;
    m_jobIdsHasBeenSet = true;
}

bool DescribeJobsRequest::JobIdsHasBeenSet() const
{
    return m_jobIdsHasBeenSet;
}

string DescribeJobsRequest::GetOrderBy() const
{
    return m_orderBy;
}

void DescribeJobsRequest::SetOrderBy(const string& _orderBy)
{
    m_orderBy = _orderBy;
    m_orderByHasBeenSet = true;
}

bool DescribeJobsRequest::OrderByHasBeenSet() const
{
    return m_orderByHasBeenSet;
}

bool DescribeJobsRequest::GetAscend() const
{
    return m_ascend;
}

void DescribeJobsRequest::SetAscend(const bool& _ascend)
{
    m_ascend = _ascend;
    m_ascendHasBeenSet = true;
}

bool DescribeJobsRequest::AscendHasBeenSet() const
{
    return m_ascendHasBeenSet;
}

string DescribeJobsRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeJobsRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeJobsRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeJobsRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeJobsRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeJobsRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

bool DescribeJobsRequest::GetDebug() const
{
    return m_debug;
}

void DescribeJobsRequest::SetDebug(const bool& _debug)
{
    m_debug = _debug;
    m_debugHasBeenSet = true;
}

bool DescribeJobsRequest::DebugHasBeenSet() const
{
    return m_debugHasBeenSet;
}

vector<int64_t> DescribeJobsRequest::GetStatus() const
{
    return m_status;
}

void DescribeJobsRequest::SetStatus(const vector<int64_t>& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeJobsRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}


