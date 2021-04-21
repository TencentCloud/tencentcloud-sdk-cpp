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

#include <tencentcloud/dbbrain/v20191016/model/DescribeDBDiagReportTasksRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dbbrain::V20191016::Model;
using namespace rapidjson;
using namespace std;

DescribeDBDiagReportTasksRequest::DescribeDBDiagReportTasksRequest() :
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_instanceIdsHasBeenSet(false),
    m_sourcesHasBeenSet(false),
    m_healthLevelsHasBeenSet(false),
    m_taskStatusesHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_productHasBeenSet(false)
{
}

string DescribeDBDiagReportTasksRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_sourcesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Sources";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_sources.begin(); itr != m_sources.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_healthLevelsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "HealthLevels";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_healthLevels.c_str(), allocator).Move(), allocator);
    }

    if (m_taskStatusesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TaskStatuses";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_taskStatuses.c_str(), allocator).Move(), allocator);
    }

    if (m_offsetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_productHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Product";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_product.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeDBDiagReportTasksRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeDBDiagReportTasksRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeDBDiagReportTasksRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeDBDiagReportTasksRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeDBDiagReportTasksRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeDBDiagReportTasksRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

vector<string> DescribeDBDiagReportTasksRequest::GetInstanceIds() const
{
    return m_instanceIds;
}

void DescribeDBDiagReportTasksRequest::SetInstanceIds(const vector<string>& _instanceIds)
{
    m_instanceIds = _instanceIds;
    m_instanceIdsHasBeenSet = true;
}

bool DescribeDBDiagReportTasksRequest::InstanceIdsHasBeenSet() const
{
    return m_instanceIdsHasBeenSet;
}

vector<string> DescribeDBDiagReportTasksRequest::GetSources() const
{
    return m_sources;
}

void DescribeDBDiagReportTasksRequest::SetSources(const vector<string>& _sources)
{
    m_sources = _sources;
    m_sourcesHasBeenSet = true;
}

bool DescribeDBDiagReportTasksRequest::SourcesHasBeenSet() const
{
    return m_sourcesHasBeenSet;
}

string DescribeDBDiagReportTasksRequest::GetHealthLevels() const
{
    return m_healthLevels;
}

void DescribeDBDiagReportTasksRequest::SetHealthLevels(const string& _healthLevels)
{
    m_healthLevels = _healthLevels;
    m_healthLevelsHasBeenSet = true;
}

bool DescribeDBDiagReportTasksRequest::HealthLevelsHasBeenSet() const
{
    return m_healthLevelsHasBeenSet;
}

string DescribeDBDiagReportTasksRequest::GetTaskStatuses() const
{
    return m_taskStatuses;
}

void DescribeDBDiagReportTasksRequest::SetTaskStatuses(const string& _taskStatuses)
{
    m_taskStatuses = _taskStatuses;
    m_taskStatusesHasBeenSet = true;
}

bool DescribeDBDiagReportTasksRequest::TaskStatusesHasBeenSet() const
{
    return m_taskStatusesHasBeenSet;
}

int64_t DescribeDBDiagReportTasksRequest::GetOffset() const
{
    return m_offset;
}

void DescribeDBDiagReportTasksRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeDBDiagReportTasksRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeDBDiagReportTasksRequest::GetLimit() const
{
    return m_limit;
}

void DescribeDBDiagReportTasksRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeDBDiagReportTasksRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeDBDiagReportTasksRequest::GetProduct() const
{
    return m_product;
}

void DescribeDBDiagReportTasksRequest::SetProduct(const string& _product)
{
    m_product = _product;
    m_productHasBeenSet = true;
}

bool DescribeDBDiagReportTasksRequest::ProductHasBeenSet() const
{
    return m_productHasBeenSet;
}


