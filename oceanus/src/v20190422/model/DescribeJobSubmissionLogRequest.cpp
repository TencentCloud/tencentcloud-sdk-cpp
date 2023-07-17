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

#include <tencentcloud/oceanus/v20190422/model/DescribeJobSubmissionLogRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace std;

DescribeJobSubmissionLogRequest::DescribeJobSubmissionLogRequest() :
    m_jobIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_runningOrderIdHasBeenSet(false),
    m_keywordHasBeenSet(false),
    m_cursorHasBeenSet(false),
    m_orderTypeHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

string DescribeJobSubmissionLogRequest::ToJsonString() const
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

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endTime, allocator);
    }

    if (m_runningOrderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunningOrderId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_runningOrderId, allocator);
    }

    if (m_keywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keyword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyword.c_str(), allocator).Move(), allocator);
    }

    if (m_cursorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cursor";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cursor.c_str(), allocator).Move(), allocator);
    }

    if (m_orderTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderType.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeJobSubmissionLogRequest::GetJobId() const
{
    return m_jobId;
}

void DescribeJobSubmissionLogRequest::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool DescribeJobSubmissionLogRequest::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

int64_t DescribeJobSubmissionLogRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeJobSubmissionLogRequest::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeJobSubmissionLogRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t DescribeJobSubmissionLogRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeJobSubmissionLogRequest::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeJobSubmissionLogRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t DescribeJobSubmissionLogRequest::GetRunningOrderId() const
{
    return m_runningOrderId;
}

void DescribeJobSubmissionLogRequest::SetRunningOrderId(const int64_t& _runningOrderId)
{
    m_runningOrderId = _runningOrderId;
    m_runningOrderIdHasBeenSet = true;
}

bool DescribeJobSubmissionLogRequest::RunningOrderIdHasBeenSet() const
{
    return m_runningOrderIdHasBeenSet;
}

string DescribeJobSubmissionLogRequest::GetKeyword() const
{
    return m_keyword;
}

void DescribeJobSubmissionLogRequest::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool DescribeJobSubmissionLogRequest::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}

string DescribeJobSubmissionLogRequest::GetCursor() const
{
    return m_cursor;
}

void DescribeJobSubmissionLogRequest::SetCursor(const string& _cursor)
{
    m_cursor = _cursor;
    m_cursorHasBeenSet = true;
}

bool DescribeJobSubmissionLogRequest::CursorHasBeenSet() const
{
    return m_cursorHasBeenSet;
}

string DescribeJobSubmissionLogRequest::GetOrderType() const
{
    return m_orderType;
}

void DescribeJobSubmissionLogRequest::SetOrderType(const string& _orderType)
{
    m_orderType = _orderType;
    m_orderTypeHasBeenSet = true;
}

bool DescribeJobSubmissionLogRequest::OrderTypeHasBeenSet() const
{
    return m_orderTypeHasBeenSet;
}

int64_t DescribeJobSubmissionLogRequest::GetLimit() const
{
    return m_limit;
}

void DescribeJobSubmissionLogRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeJobSubmissionLogRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}


