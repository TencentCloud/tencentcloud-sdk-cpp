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

#include <tencentcloud/dlc/v20210125/model/ListTaskJobLogDetailRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

ListTaskJobLogDetailRequest::ListTaskJobLogDetailRequest() :
    m_taskIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_contextHasBeenSet(false),
    m_ascHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_batchIdHasBeenSet(false)
{
}

string ListTaskJobLogDetailRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
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

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_contextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Context";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_context.c_str(), allocator).Move(), allocator);
    }

    if (m_ascHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Asc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_asc, allocator);
    }

    if (m_filtersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_filters.begin(); itr != m_filters.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_batchIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_batchId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ListTaskJobLogDetailRequest::GetTaskId() const
{
    return m_taskId;
}

void ListTaskJobLogDetailRequest::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool ListTaskJobLogDetailRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

int64_t ListTaskJobLogDetailRequest::GetStartTime() const
{
    return m_startTime;
}

void ListTaskJobLogDetailRequest::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool ListTaskJobLogDetailRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t ListTaskJobLogDetailRequest::GetEndTime() const
{
    return m_endTime;
}

void ListTaskJobLogDetailRequest::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool ListTaskJobLogDetailRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t ListTaskJobLogDetailRequest::GetLimit() const
{
    return m_limit;
}

void ListTaskJobLogDetailRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool ListTaskJobLogDetailRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string ListTaskJobLogDetailRequest::GetContext() const
{
    return m_context;
}

void ListTaskJobLogDetailRequest::SetContext(const string& _context)
{
    m_context = _context;
    m_contextHasBeenSet = true;
}

bool ListTaskJobLogDetailRequest::ContextHasBeenSet() const
{
    return m_contextHasBeenSet;
}

bool ListTaskJobLogDetailRequest::GetAsc() const
{
    return m_asc;
}

void ListTaskJobLogDetailRequest::SetAsc(const bool& _asc)
{
    m_asc = _asc;
    m_ascHasBeenSet = true;
}

bool ListTaskJobLogDetailRequest::AscHasBeenSet() const
{
    return m_ascHasBeenSet;
}

vector<Filter> ListTaskJobLogDetailRequest::GetFilters() const
{
    return m_filters;
}

void ListTaskJobLogDetailRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool ListTaskJobLogDetailRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

string ListTaskJobLogDetailRequest::GetBatchId() const
{
    return m_batchId;
}

void ListTaskJobLogDetailRequest::SetBatchId(const string& _batchId)
{
    m_batchId = _batchId;
    m_batchIdHasBeenSet = true;
}

bool ListTaskJobLogDetailRequest::BatchIdHasBeenSet() const
{
    return m_batchIdHasBeenSet;
}


