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

#include <tencentcloud/cfg/v20210820/model/DescribeTaskListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfg::V20210820::Model;
using namespace std;

DescribeTaskListRequest::DescribeTaskListRequest() :
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_taskTitleHasBeenSet(false),
    m_taskTagHasBeenSet(false),
    m_taskStatusHasBeenSet(false),
    m_taskStartTimeHasBeenSet(false),
    m_taskEndTimeHasBeenSet(false),
    m_taskUpdateTimeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_applicationIdHasBeenSet(false),
    m_applicationNameHasBeenSet(false),
    m_taskStatusListHasBeenSet(false),
    m_archIdHasBeenSet(false),
    m_archNameHasBeenSet(false)
{
}

string DescribeTaskListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_taskTitleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskTitle";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskTitle.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskTag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_taskTag.begin(); itr != m_taskTag.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_taskStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_taskStatus, allocator);
    }

    if (m_taskStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskStartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_taskEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskEndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_taskUpdateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskUpdateTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskUpdateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
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

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_taskId.begin(); itr != m_taskId.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_applicationId.begin(); itr != m_applicationId.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_applicationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_applicationName.begin(); itr != m_applicationName.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_taskStatusListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskStatusList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_taskStatusList.begin(); itr != m_taskStatusList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_archIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ArchId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_archId.c_str(), allocator).Move(), allocator);
    }

    if (m_archNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ArchName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_archName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeTaskListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeTaskListRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeTaskListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeTaskListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeTaskListRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeTaskListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribeTaskListRequest::GetTaskTitle() const
{
    return m_taskTitle;
}

void DescribeTaskListRequest::SetTaskTitle(const string& _taskTitle)
{
    m_taskTitle = _taskTitle;
    m_taskTitleHasBeenSet = true;
}

bool DescribeTaskListRequest::TaskTitleHasBeenSet() const
{
    return m_taskTitleHasBeenSet;
}

vector<string> DescribeTaskListRequest::GetTaskTag() const
{
    return m_taskTag;
}

void DescribeTaskListRequest::SetTaskTag(const vector<string>& _taskTag)
{
    m_taskTag = _taskTag;
    m_taskTagHasBeenSet = true;
}

bool DescribeTaskListRequest::TaskTagHasBeenSet() const
{
    return m_taskTagHasBeenSet;
}

int64_t DescribeTaskListRequest::GetTaskStatus() const
{
    return m_taskStatus;
}

void DescribeTaskListRequest::SetTaskStatus(const int64_t& _taskStatus)
{
    m_taskStatus = _taskStatus;
    m_taskStatusHasBeenSet = true;
}

bool DescribeTaskListRequest::TaskStatusHasBeenSet() const
{
    return m_taskStatusHasBeenSet;
}

string DescribeTaskListRequest::GetTaskStartTime() const
{
    return m_taskStartTime;
}

void DescribeTaskListRequest::SetTaskStartTime(const string& _taskStartTime)
{
    m_taskStartTime = _taskStartTime;
    m_taskStartTimeHasBeenSet = true;
}

bool DescribeTaskListRequest::TaskStartTimeHasBeenSet() const
{
    return m_taskStartTimeHasBeenSet;
}

string DescribeTaskListRequest::GetTaskEndTime() const
{
    return m_taskEndTime;
}

void DescribeTaskListRequest::SetTaskEndTime(const string& _taskEndTime)
{
    m_taskEndTime = _taskEndTime;
    m_taskEndTimeHasBeenSet = true;
}

bool DescribeTaskListRequest::TaskEndTimeHasBeenSet() const
{
    return m_taskEndTimeHasBeenSet;
}

string DescribeTaskListRequest::GetTaskUpdateTime() const
{
    return m_taskUpdateTime;
}

void DescribeTaskListRequest::SetTaskUpdateTime(const string& _taskUpdateTime)
{
    m_taskUpdateTime = _taskUpdateTime;
    m_taskUpdateTimeHasBeenSet = true;
}

bool DescribeTaskListRequest::TaskUpdateTimeHasBeenSet() const
{
    return m_taskUpdateTimeHasBeenSet;
}

vector<TagWithDescribe> DescribeTaskListRequest::GetTags() const
{
    return m_tags;
}

void DescribeTaskListRequest::SetTags(const vector<TagWithDescribe>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool DescribeTaskListRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

vector<ActionFilter> DescribeTaskListRequest::GetFilters() const
{
    return m_filters;
}

void DescribeTaskListRequest::SetFilters(const vector<ActionFilter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeTaskListRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

vector<uint64_t> DescribeTaskListRequest::GetTaskId() const
{
    return m_taskId;
}

void DescribeTaskListRequest::SetTaskId(const vector<uint64_t>& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool DescribeTaskListRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

vector<string> DescribeTaskListRequest::GetApplicationId() const
{
    return m_applicationId;
}

void DescribeTaskListRequest::SetApplicationId(const vector<string>& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool DescribeTaskListRequest::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

vector<string> DescribeTaskListRequest::GetApplicationName() const
{
    return m_applicationName;
}

void DescribeTaskListRequest::SetApplicationName(const vector<string>& _applicationName)
{
    m_applicationName = _applicationName;
    m_applicationNameHasBeenSet = true;
}

bool DescribeTaskListRequest::ApplicationNameHasBeenSet() const
{
    return m_applicationNameHasBeenSet;
}

vector<uint64_t> DescribeTaskListRequest::GetTaskStatusList() const
{
    return m_taskStatusList;
}

void DescribeTaskListRequest::SetTaskStatusList(const vector<uint64_t>& _taskStatusList)
{
    m_taskStatusList = _taskStatusList;
    m_taskStatusListHasBeenSet = true;
}

bool DescribeTaskListRequest::TaskStatusListHasBeenSet() const
{
    return m_taskStatusListHasBeenSet;
}

string DescribeTaskListRequest::GetArchId() const
{
    return m_archId;
}

void DescribeTaskListRequest::SetArchId(const string& _archId)
{
    m_archId = _archId;
    m_archIdHasBeenSet = true;
}

bool DescribeTaskListRequest::ArchIdHasBeenSet() const
{
    return m_archIdHasBeenSet;
}

string DescribeTaskListRequest::GetArchName() const
{
    return m_archName;
}

void DescribeTaskListRequest::SetArchName(const string& _archName)
{
    m_archName = _archName;
    m_archNameHasBeenSet = true;
}

bool DescribeTaskListRequest::ArchNameHasBeenSet() const
{
    return m_archNameHasBeenSet;
}


