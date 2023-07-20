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

#include <tencentcloud/wedata/v20210820/model/DescribeDrInstancePageRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeDrInstancePageRequest::DescribeDrInstancePageRequest() :
    m_projectIdHasBeenSet(false),
    m_taskSourceHasBeenSet(false),
    m_pageIndexHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_folderIdsHasBeenSet(false),
    m_workflowIdsHasBeenSet(false),
    m_justMeHasBeenSet(false),
    m_taskTypesHasBeenSet(false),
    m_submitUsersHasBeenSet(false),
    m_statusListHasBeenSet(false)
{
}

string DescribeDrInstancePageRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskSource";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskSource.c_str(), allocator).Move(), allocator);
    }

    if (m_pageIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageIndex";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageIndex, allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
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

    if (m_folderIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FolderIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_folderIds.begin(); itr != m_folderIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_workflowIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_workflowIds.begin(); itr != m_workflowIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_justMeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JustMe";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_justMe, allocator);
    }

    if (m_taskTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_taskTypes.begin(); itr != m_taskTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_submitUsersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubmitUsers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_submitUsers.begin(); itr != m_submitUsers.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_statusListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_statusList.begin(); itr != m_statusList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeDrInstancePageRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeDrInstancePageRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeDrInstancePageRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string DescribeDrInstancePageRequest::GetTaskSource() const
{
    return m_taskSource;
}

void DescribeDrInstancePageRequest::SetTaskSource(const string& _taskSource)
{
    m_taskSource = _taskSource;
    m_taskSourceHasBeenSet = true;
}

bool DescribeDrInstancePageRequest::TaskSourceHasBeenSet() const
{
    return m_taskSourceHasBeenSet;
}

int64_t DescribeDrInstancePageRequest::GetPageIndex() const
{
    return m_pageIndex;
}

void DescribeDrInstancePageRequest::SetPageIndex(const int64_t& _pageIndex)
{
    m_pageIndex = _pageIndex;
    m_pageIndexHasBeenSet = true;
}

bool DescribeDrInstancePageRequest::PageIndexHasBeenSet() const
{
    return m_pageIndexHasBeenSet;
}

int64_t DescribeDrInstancePageRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeDrInstancePageRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeDrInstancePageRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

string DescribeDrInstancePageRequest::GetTaskName() const
{
    return m_taskName;
}

void DescribeDrInstancePageRequest::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool DescribeDrInstancePageRequest::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string DescribeDrInstancePageRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeDrInstancePageRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeDrInstancePageRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeDrInstancePageRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeDrInstancePageRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeDrInstancePageRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

vector<string> DescribeDrInstancePageRequest::GetFolderIds() const
{
    return m_folderIds;
}

void DescribeDrInstancePageRequest::SetFolderIds(const vector<string>& _folderIds)
{
    m_folderIds = _folderIds;
    m_folderIdsHasBeenSet = true;
}

bool DescribeDrInstancePageRequest::FolderIdsHasBeenSet() const
{
    return m_folderIdsHasBeenSet;
}

vector<string> DescribeDrInstancePageRequest::GetWorkflowIds() const
{
    return m_workflowIds;
}

void DescribeDrInstancePageRequest::SetWorkflowIds(const vector<string>& _workflowIds)
{
    m_workflowIds = _workflowIds;
    m_workflowIdsHasBeenSet = true;
}

bool DescribeDrInstancePageRequest::WorkflowIdsHasBeenSet() const
{
    return m_workflowIdsHasBeenSet;
}

bool DescribeDrInstancePageRequest::GetJustMe() const
{
    return m_justMe;
}

void DescribeDrInstancePageRequest::SetJustMe(const bool& _justMe)
{
    m_justMe = _justMe;
    m_justMeHasBeenSet = true;
}

bool DescribeDrInstancePageRequest::JustMeHasBeenSet() const
{
    return m_justMeHasBeenSet;
}

vector<string> DescribeDrInstancePageRequest::GetTaskTypes() const
{
    return m_taskTypes;
}

void DescribeDrInstancePageRequest::SetTaskTypes(const vector<string>& _taskTypes)
{
    m_taskTypes = _taskTypes;
    m_taskTypesHasBeenSet = true;
}

bool DescribeDrInstancePageRequest::TaskTypesHasBeenSet() const
{
    return m_taskTypesHasBeenSet;
}

vector<string> DescribeDrInstancePageRequest::GetSubmitUsers() const
{
    return m_submitUsers;
}

void DescribeDrInstancePageRequest::SetSubmitUsers(const vector<string>& _submitUsers)
{
    m_submitUsers = _submitUsers;
    m_submitUsersHasBeenSet = true;
}

bool DescribeDrInstancePageRequest::SubmitUsersHasBeenSet() const
{
    return m_submitUsersHasBeenSet;
}

vector<string> DescribeDrInstancePageRequest::GetStatusList() const
{
    return m_statusList;
}

void DescribeDrInstancePageRequest::SetStatusList(const vector<string>& _statusList)
{
    m_statusList = _statusList;
    m_statusListHasBeenSet = true;
}

bool DescribeDrInstancePageRequest::StatusListHasBeenSet() const
{
    return m_statusListHasBeenSet;
}


