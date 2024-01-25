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

#include <tencentcloud/wedata/v20210820/model/DescribeCodeSearchInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeCodeSearchInfoRequest::DescribeCodeSearchInfoRequest() :
    m_keywordHasBeenSet(false),
    m_searchScopeHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_searchScopesHasBeenSet(false),
    m_ownerIdsHasBeenSet(false),
    m_fileTypesHasBeenSet(false),
    m_taskTypesHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_workflowIdsHasBeenSet(false),
    m_folderIdsHasBeenSet(false),
    m_datasourceIdsHasBeenSet(false),
    m_folderPathsHasBeenSet(false),
    m_taskStatusHasBeenSet(false)
{
}

string DescribeCodeSearchInfoRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_keywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keyword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyword.c_str(), allocator).Move(), allocator);
    }

    if (m_searchScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchScope";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_searchScope.c_str(), allocator).Move(), allocator);
    }

    if (m_pageNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageNumber, allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_searchScopesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchScopes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_searchScopes.begin(); itr != m_searchScopes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_ownerIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ownerIds.begin(); itr != m_ownerIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_fileTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_fileTypes.begin(); itr != m_fileTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
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

    if (m_datasourceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_datasourceIds.begin(); itr != m_datasourceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_folderPathsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FolderPaths";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_folderPaths.begin(); itr != m_folderPaths.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_taskStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_taskStatus.begin(); itr != m_taskStatus.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeCodeSearchInfoRequest::GetKeyword() const
{
    return m_keyword;
}

void DescribeCodeSearchInfoRequest::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool DescribeCodeSearchInfoRequest::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}

string DescribeCodeSearchInfoRequest::GetSearchScope() const
{
    return m_searchScope;
}

void DescribeCodeSearchInfoRequest::SetSearchScope(const string& _searchScope)
{
    m_searchScope = _searchScope;
    m_searchScopeHasBeenSet = true;
}

bool DescribeCodeSearchInfoRequest::SearchScopeHasBeenSet() const
{
    return m_searchScopeHasBeenSet;
}

uint64_t DescribeCodeSearchInfoRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void DescribeCodeSearchInfoRequest::SetPageNumber(const uint64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool DescribeCodeSearchInfoRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

uint64_t DescribeCodeSearchInfoRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeCodeSearchInfoRequest::SetPageSize(const uint64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeCodeSearchInfoRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

string DescribeCodeSearchInfoRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeCodeSearchInfoRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeCodeSearchInfoRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

vector<string> DescribeCodeSearchInfoRequest::GetSearchScopes() const
{
    return m_searchScopes;
}

void DescribeCodeSearchInfoRequest::SetSearchScopes(const vector<string>& _searchScopes)
{
    m_searchScopes = _searchScopes;
    m_searchScopesHasBeenSet = true;
}

bool DescribeCodeSearchInfoRequest::SearchScopesHasBeenSet() const
{
    return m_searchScopesHasBeenSet;
}

vector<string> DescribeCodeSearchInfoRequest::GetOwnerIds() const
{
    return m_ownerIds;
}

void DescribeCodeSearchInfoRequest::SetOwnerIds(const vector<string>& _ownerIds)
{
    m_ownerIds = _ownerIds;
    m_ownerIdsHasBeenSet = true;
}

bool DescribeCodeSearchInfoRequest::OwnerIdsHasBeenSet() const
{
    return m_ownerIdsHasBeenSet;
}

vector<string> DescribeCodeSearchInfoRequest::GetFileTypes() const
{
    return m_fileTypes;
}

void DescribeCodeSearchInfoRequest::SetFileTypes(const vector<string>& _fileTypes)
{
    m_fileTypes = _fileTypes;
    m_fileTypesHasBeenSet = true;
}

bool DescribeCodeSearchInfoRequest::FileTypesHasBeenSet() const
{
    return m_fileTypesHasBeenSet;
}

vector<string> DescribeCodeSearchInfoRequest::GetTaskTypes() const
{
    return m_taskTypes;
}

void DescribeCodeSearchInfoRequest::SetTaskTypes(const vector<string>& _taskTypes)
{
    m_taskTypes = _taskTypes;
    m_taskTypesHasBeenSet = true;
}

bool DescribeCodeSearchInfoRequest::TaskTypesHasBeenSet() const
{
    return m_taskTypesHasBeenSet;
}

string DescribeCodeSearchInfoRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeCodeSearchInfoRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeCodeSearchInfoRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeCodeSearchInfoRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeCodeSearchInfoRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeCodeSearchInfoRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeCodeSearchInfoRequest::GetStatus() const
{
    return m_status;
}

void DescribeCodeSearchInfoRequest::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeCodeSearchInfoRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<string> DescribeCodeSearchInfoRequest::GetWorkflowIds() const
{
    return m_workflowIds;
}

void DescribeCodeSearchInfoRequest::SetWorkflowIds(const vector<string>& _workflowIds)
{
    m_workflowIds = _workflowIds;
    m_workflowIdsHasBeenSet = true;
}

bool DescribeCodeSearchInfoRequest::WorkflowIdsHasBeenSet() const
{
    return m_workflowIdsHasBeenSet;
}

vector<string> DescribeCodeSearchInfoRequest::GetFolderIds() const
{
    return m_folderIds;
}

void DescribeCodeSearchInfoRequest::SetFolderIds(const vector<string>& _folderIds)
{
    m_folderIds = _folderIds;
    m_folderIdsHasBeenSet = true;
}

bool DescribeCodeSearchInfoRequest::FolderIdsHasBeenSet() const
{
    return m_folderIdsHasBeenSet;
}

vector<string> DescribeCodeSearchInfoRequest::GetDatasourceIds() const
{
    return m_datasourceIds;
}

void DescribeCodeSearchInfoRequest::SetDatasourceIds(const vector<string>& _datasourceIds)
{
    m_datasourceIds = _datasourceIds;
    m_datasourceIdsHasBeenSet = true;
}

bool DescribeCodeSearchInfoRequest::DatasourceIdsHasBeenSet() const
{
    return m_datasourceIdsHasBeenSet;
}

vector<string> DescribeCodeSearchInfoRequest::GetFolderPaths() const
{
    return m_folderPaths;
}

void DescribeCodeSearchInfoRequest::SetFolderPaths(const vector<string>& _folderPaths)
{
    m_folderPaths = _folderPaths;
    m_folderPathsHasBeenSet = true;
}

bool DescribeCodeSearchInfoRequest::FolderPathsHasBeenSet() const
{
    return m_folderPathsHasBeenSet;
}

vector<string> DescribeCodeSearchInfoRequest::GetTaskStatus() const
{
    return m_taskStatus;
}

void DescribeCodeSearchInfoRequest::SetTaskStatus(const vector<string>& _taskStatus)
{
    m_taskStatus = _taskStatus;
    m_taskStatusHasBeenSet = true;
}

bool DescribeCodeSearchInfoRequest::TaskStatusHasBeenSet() const
{
    return m_taskStatusHasBeenSet;
}


