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

#include <tencentcloud/wedata/v20250806/model/ListOpsWorkflowsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

ListOpsWorkflowsRequest::ListOpsWorkflowsRequest() :
    m_projectIdHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_folderIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_workflowTypeHasBeenSet(false),
    m_keyWordHasBeenSet(false),
    m_sortItemHasBeenSet(false),
    m_sortTypeHasBeenSet(false),
    m_createUserUinHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

string ListOpsWorkflowsRequest::ToJsonString() const
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

    if (m_folderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FolderId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_folderId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ownerUin.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workflowType.c_str(), allocator).Move(), allocator);
    }

    if (m_keyWordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyWord";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyWord.c_str(), allocator).Move(), allocator);
    }

    if (m_sortItemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortItem";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sortItem.c_str(), allocator).Move(), allocator);
    }

    if (m_sortTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sortType.c_str(), allocator).Move(), allocator);
    }

    if (m_createUserUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateUserUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_createUserUin.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ListOpsWorkflowsRequest::GetProjectId() const
{
    return m_projectId;
}

void ListOpsWorkflowsRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ListOpsWorkflowsRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

uint64_t ListOpsWorkflowsRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void ListOpsWorkflowsRequest::SetPageNumber(const uint64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool ListOpsWorkflowsRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

uint64_t ListOpsWorkflowsRequest::GetPageSize() const
{
    return m_pageSize;
}

void ListOpsWorkflowsRequest::SetPageSize(const uint64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool ListOpsWorkflowsRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

string ListOpsWorkflowsRequest::GetFolderId() const
{
    return m_folderId;
}

void ListOpsWorkflowsRequest::SetFolderId(const string& _folderId)
{
    m_folderId = _folderId;
    m_folderIdHasBeenSet = true;
}

bool ListOpsWorkflowsRequest::FolderIdHasBeenSet() const
{
    return m_folderIdHasBeenSet;
}

string ListOpsWorkflowsRequest::GetStatus() const
{
    return m_status;
}

void ListOpsWorkflowsRequest::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ListOpsWorkflowsRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ListOpsWorkflowsRequest::GetOwnerUin() const
{
    return m_ownerUin;
}

void ListOpsWorkflowsRequest::SetOwnerUin(const string& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool ListOpsWorkflowsRequest::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

string ListOpsWorkflowsRequest::GetWorkflowType() const
{
    return m_workflowType;
}

void ListOpsWorkflowsRequest::SetWorkflowType(const string& _workflowType)
{
    m_workflowType = _workflowType;
    m_workflowTypeHasBeenSet = true;
}

bool ListOpsWorkflowsRequest::WorkflowTypeHasBeenSet() const
{
    return m_workflowTypeHasBeenSet;
}

string ListOpsWorkflowsRequest::GetKeyWord() const
{
    return m_keyWord;
}

void ListOpsWorkflowsRequest::SetKeyWord(const string& _keyWord)
{
    m_keyWord = _keyWord;
    m_keyWordHasBeenSet = true;
}

bool ListOpsWorkflowsRequest::KeyWordHasBeenSet() const
{
    return m_keyWordHasBeenSet;
}

string ListOpsWorkflowsRequest::GetSortItem() const
{
    return m_sortItem;
}

void ListOpsWorkflowsRequest::SetSortItem(const string& _sortItem)
{
    m_sortItem = _sortItem;
    m_sortItemHasBeenSet = true;
}

bool ListOpsWorkflowsRequest::SortItemHasBeenSet() const
{
    return m_sortItemHasBeenSet;
}

string ListOpsWorkflowsRequest::GetSortType() const
{
    return m_sortType;
}

void ListOpsWorkflowsRequest::SetSortType(const string& _sortType)
{
    m_sortType = _sortType;
    m_sortTypeHasBeenSet = true;
}

bool ListOpsWorkflowsRequest::SortTypeHasBeenSet() const
{
    return m_sortTypeHasBeenSet;
}

string ListOpsWorkflowsRequest::GetCreateUserUin() const
{
    return m_createUserUin;
}

void ListOpsWorkflowsRequest::SetCreateUserUin(const string& _createUserUin)
{
    m_createUserUin = _createUserUin;
    m_createUserUinHasBeenSet = true;
}

bool ListOpsWorkflowsRequest::CreateUserUinHasBeenSet() const
{
    return m_createUserUinHasBeenSet;
}

string ListOpsWorkflowsRequest::GetModifyTime() const
{
    return m_modifyTime;
}

void ListOpsWorkflowsRequest::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool ListOpsWorkflowsRequest::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

string ListOpsWorkflowsRequest::GetCreateTime() const
{
    return m_createTime;
}

void ListOpsWorkflowsRequest::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ListOpsWorkflowsRequest::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}


