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

#include <tencentcloud/acp/v20220105/model/DescribeScanTaskListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Acp::V20220105::Model;
using namespace std;

DescribeScanTaskListRequest::DescribeScanTaskListRequest() :
    m_sourceHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_taskStatusesHasBeenSet(false),
    m_taskTypesHasBeenSet(false),
    m_pageNoHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_appNameHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

string DescribeScanTaskListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_source, allocator);
    }

    if (m_platformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Platform";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_platform, allocator);
    }

    if (m_taskStatusesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskStatuses";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskStatuses.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskTypes.c_str(), allocator).Move(), allocator);
    }

    if (m_pageNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageNo, allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_appNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appName.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeScanTaskListRequest::GetSource() const
{
    return m_source;
}

void DescribeScanTaskListRequest::SetSource(const int64_t& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool DescribeScanTaskListRequest::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

int64_t DescribeScanTaskListRequest::GetPlatform() const
{
    return m_platform;
}

void DescribeScanTaskListRequest::SetPlatform(const int64_t& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool DescribeScanTaskListRequest::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

string DescribeScanTaskListRequest::GetTaskStatuses() const
{
    return m_taskStatuses;
}

void DescribeScanTaskListRequest::SetTaskStatuses(const string& _taskStatuses)
{
    m_taskStatuses = _taskStatuses;
    m_taskStatusesHasBeenSet = true;
}

bool DescribeScanTaskListRequest::TaskStatusesHasBeenSet() const
{
    return m_taskStatusesHasBeenSet;
}

string DescribeScanTaskListRequest::GetTaskTypes() const
{
    return m_taskTypes;
}

void DescribeScanTaskListRequest::SetTaskTypes(const string& _taskTypes)
{
    m_taskTypes = _taskTypes;
    m_taskTypesHasBeenSet = true;
}

bool DescribeScanTaskListRequest::TaskTypesHasBeenSet() const
{
    return m_taskTypesHasBeenSet;
}

int64_t DescribeScanTaskListRequest::GetPageNo() const
{
    return m_pageNo;
}

void DescribeScanTaskListRequest::SetPageNo(const int64_t& _pageNo)
{
    m_pageNo = _pageNo;
    m_pageNoHasBeenSet = true;
}

bool DescribeScanTaskListRequest::PageNoHasBeenSet() const
{
    return m_pageNoHasBeenSet;
}

int64_t DescribeScanTaskListRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeScanTaskListRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeScanTaskListRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

string DescribeScanTaskListRequest::GetAppName() const
{
    return m_appName;
}

void DescribeScanTaskListRequest::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool DescribeScanTaskListRequest::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

string DescribeScanTaskListRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeScanTaskListRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeScanTaskListRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeScanTaskListRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeScanTaskListRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeScanTaskListRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}


