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

#include <tencentcloud/wedata/v20250806/model/ListWorkflowsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

ListWorkflowsRequest::ListWorkflowsRequest() :
    m_projectIdHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_keywordHasBeenSet(false),
    m_parentFolderPathHasBeenSet(false),
    m_workflowTypeHasBeenSet(false),
    m_bundleIdHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_createUserUinHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

string ListWorkflowsRequest::ToJsonString() const
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

    if (m_keywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keyword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyword.c_str(), allocator).Move(), allocator);
    }

    if (m_parentFolderPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentFolderPath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_parentFolderPath.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workflowType.c_str(), allocator).Move(), allocator);
    }

    if (m_bundleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BundleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bundleId.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ownerUin.c_str(), allocator).Move(), allocator);
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
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_modifyTime.begin(); itr != m_modifyTime.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_createTime.begin(); itr != m_createTime.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ListWorkflowsRequest::GetProjectId() const
{
    return m_projectId;
}

void ListWorkflowsRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ListWorkflowsRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

int64_t ListWorkflowsRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void ListWorkflowsRequest::SetPageNumber(const int64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool ListWorkflowsRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

int64_t ListWorkflowsRequest::GetPageSize() const
{
    return m_pageSize;
}

void ListWorkflowsRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool ListWorkflowsRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

string ListWorkflowsRequest::GetKeyword() const
{
    return m_keyword;
}

void ListWorkflowsRequest::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool ListWorkflowsRequest::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}

string ListWorkflowsRequest::GetParentFolderPath() const
{
    return m_parentFolderPath;
}

void ListWorkflowsRequest::SetParentFolderPath(const string& _parentFolderPath)
{
    m_parentFolderPath = _parentFolderPath;
    m_parentFolderPathHasBeenSet = true;
}

bool ListWorkflowsRequest::ParentFolderPathHasBeenSet() const
{
    return m_parentFolderPathHasBeenSet;
}

string ListWorkflowsRequest::GetWorkflowType() const
{
    return m_workflowType;
}

void ListWorkflowsRequest::SetWorkflowType(const string& _workflowType)
{
    m_workflowType = _workflowType;
    m_workflowTypeHasBeenSet = true;
}

bool ListWorkflowsRequest::WorkflowTypeHasBeenSet() const
{
    return m_workflowTypeHasBeenSet;
}

string ListWorkflowsRequest::GetBundleId() const
{
    return m_bundleId;
}

void ListWorkflowsRequest::SetBundleId(const string& _bundleId)
{
    m_bundleId = _bundleId;
    m_bundleIdHasBeenSet = true;
}

bool ListWorkflowsRequest::BundleIdHasBeenSet() const
{
    return m_bundleIdHasBeenSet;
}

string ListWorkflowsRequest::GetOwnerUin() const
{
    return m_ownerUin;
}

void ListWorkflowsRequest::SetOwnerUin(const string& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool ListWorkflowsRequest::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

string ListWorkflowsRequest::GetCreateUserUin() const
{
    return m_createUserUin;
}

void ListWorkflowsRequest::SetCreateUserUin(const string& _createUserUin)
{
    m_createUserUin = _createUserUin;
    m_createUserUinHasBeenSet = true;
}

bool ListWorkflowsRequest::CreateUserUinHasBeenSet() const
{
    return m_createUserUinHasBeenSet;
}

vector<string> ListWorkflowsRequest::GetModifyTime() const
{
    return m_modifyTime;
}

void ListWorkflowsRequest::SetModifyTime(const vector<string>& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool ListWorkflowsRequest::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

vector<string> ListWorkflowsRequest::GetCreateTime() const
{
    return m_createTime;
}

void ListWorkflowsRequest::SetCreateTime(const vector<string>& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ListWorkflowsRequest::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}


