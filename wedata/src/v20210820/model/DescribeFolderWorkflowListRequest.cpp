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

#include <tencentcloud/wedata/v20210820/model/DescribeFolderWorkflowListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeFolderWorkflowListRequest::DescribeFolderWorkflowListRequest() :
    m_projectIdHasBeenSet(false),
    m_parentsFolderIdHasBeenSet(false),
    m_keyWordsHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false)
{
}

string DescribeFolderWorkflowListRequest::ToJsonString() const
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

    if (m_parentsFolderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentsFolderId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_parentsFolderId.c_str(), allocator).Move(), allocator);
    }

    if (m_keyWordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyWords";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyWords.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeFolderWorkflowListRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeFolderWorkflowListRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeFolderWorkflowListRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string DescribeFolderWorkflowListRequest::GetParentsFolderId() const
{
    return m_parentsFolderId;
}

void DescribeFolderWorkflowListRequest::SetParentsFolderId(const string& _parentsFolderId)
{
    m_parentsFolderId = _parentsFolderId;
    m_parentsFolderIdHasBeenSet = true;
}

bool DescribeFolderWorkflowListRequest::ParentsFolderIdHasBeenSet() const
{
    return m_parentsFolderIdHasBeenSet;
}

string DescribeFolderWorkflowListRequest::GetKeyWords() const
{
    return m_keyWords;
}

void DescribeFolderWorkflowListRequest::SetKeyWords(const string& _keyWords)
{
    m_keyWords = _keyWords;
    m_keyWordsHasBeenSet = true;
}

bool DescribeFolderWorkflowListRequest::KeyWordsHasBeenSet() const
{
    return m_keyWordsHasBeenSet;
}

int64_t DescribeFolderWorkflowListRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void DescribeFolderWorkflowListRequest::SetPageNumber(const int64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool DescribeFolderWorkflowListRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

int64_t DescribeFolderWorkflowListRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeFolderWorkflowListRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeFolderWorkflowListRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}


