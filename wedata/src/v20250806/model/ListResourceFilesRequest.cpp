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

#include <tencentcloud/wedata/v20250806/model/ListResourceFilesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

ListResourceFilesRequest::ListResourceFilesRequest() :
    m_projectIdHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_resourceNameHasBeenSet(false),
    m_parentFolderPathHasBeenSet(false),
    m_createUserUinHasBeenSet(false),
    m_modifyTimeStartHasBeenSet(false),
    m_modifyTimeEndHasBeenSet(false),
    m_createTimeStartHasBeenSet(false),
    m_createTimeEndHasBeenSet(false)
{
}

string ListResourceFilesRequest::ToJsonString() const
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

    if (m_resourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_parentFolderPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentFolderPath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_parentFolderPath.c_str(), allocator).Move(), allocator);
    }

    if (m_createUserUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateUserUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_createUserUin.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyTimeStartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTimeStart";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modifyTimeStart.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyTimeEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTimeEnd";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modifyTimeEnd.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeStartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTimeStart";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_createTimeStart.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTimeEnd";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_createTimeEnd.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ListResourceFilesRequest::GetProjectId() const
{
    return m_projectId;
}

void ListResourceFilesRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ListResourceFilesRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

uint64_t ListResourceFilesRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void ListResourceFilesRequest::SetPageNumber(const uint64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool ListResourceFilesRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

uint64_t ListResourceFilesRequest::GetPageSize() const
{
    return m_pageSize;
}

void ListResourceFilesRequest::SetPageSize(const uint64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool ListResourceFilesRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

string ListResourceFilesRequest::GetResourceName() const
{
    return m_resourceName;
}

void ListResourceFilesRequest::SetResourceName(const string& _resourceName)
{
    m_resourceName = _resourceName;
    m_resourceNameHasBeenSet = true;
}

bool ListResourceFilesRequest::ResourceNameHasBeenSet() const
{
    return m_resourceNameHasBeenSet;
}

string ListResourceFilesRequest::GetParentFolderPath() const
{
    return m_parentFolderPath;
}

void ListResourceFilesRequest::SetParentFolderPath(const string& _parentFolderPath)
{
    m_parentFolderPath = _parentFolderPath;
    m_parentFolderPathHasBeenSet = true;
}

bool ListResourceFilesRequest::ParentFolderPathHasBeenSet() const
{
    return m_parentFolderPathHasBeenSet;
}

string ListResourceFilesRequest::GetCreateUserUin() const
{
    return m_createUserUin;
}

void ListResourceFilesRequest::SetCreateUserUin(const string& _createUserUin)
{
    m_createUserUin = _createUserUin;
    m_createUserUinHasBeenSet = true;
}

bool ListResourceFilesRequest::CreateUserUinHasBeenSet() const
{
    return m_createUserUinHasBeenSet;
}

string ListResourceFilesRequest::GetModifyTimeStart() const
{
    return m_modifyTimeStart;
}

void ListResourceFilesRequest::SetModifyTimeStart(const string& _modifyTimeStart)
{
    m_modifyTimeStart = _modifyTimeStart;
    m_modifyTimeStartHasBeenSet = true;
}

bool ListResourceFilesRequest::ModifyTimeStartHasBeenSet() const
{
    return m_modifyTimeStartHasBeenSet;
}

string ListResourceFilesRequest::GetModifyTimeEnd() const
{
    return m_modifyTimeEnd;
}

void ListResourceFilesRequest::SetModifyTimeEnd(const string& _modifyTimeEnd)
{
    m_modifyTimeEnd = _modifyTimeEnd;
    m_modifyTimeEndHasBeenSet = true;
}

bool ListResourceFilesRequest::ModifyTimeEndHasBeenSet() const
{
    return m_modifyTimeEndHasBeenSet;
}

string ListResourceFilesRequest::GetCreateTimeStart() const
{
    return m_createTimeStart;
}

void ListResourceFilesRequest::SetCreateTimeStart(const string& _createTimeStart)
{
    m_createTimeStart = _createTimeStart;
    m_createTimeStartHasBeenSet = true;
}

bool ListResourceFilesRequest::CreateTimeStartHasBeenSet() const
{
    return m_createTimeStartHasBeenSet;
}

string ListResourceFilesRequest::GetCreateTimeEnd() const
{
    return m_createTimeEnd;
}

void ListResourceFilesRequest::SetCreateTimeEnd(const string& _createTimeEnd)
{
    m_createTimeEnd = _createTimeEnd;
    m_createTimeEndHasBeenSet = true;
}

bool ListResourceFilesRequest::CreateTimeEndHasBeenSet() const
{
    return m_createTimeEndHasBeenSet;
}


