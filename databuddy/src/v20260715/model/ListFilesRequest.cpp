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

#include <tencentcloud/databuddy/v20260715/model/ListFilesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

ListFilesRequest::ListFilesRequest() :
    m_workspaceIdHasBeenSet(false),
    m_parentHasBeenSet(false),
    m_fileTypesHasBeenSet(false),
    m_nameKeywordHasBeenSet(false),
    m_ownerUserUinsHasBeenSet(false),
    m_onlyFolderHasBeenSet(false),
    m_orderBysHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false)
{
}

string ListFilesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_workspaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workspaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_parentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Parent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_parent.ToJsonObject(d[key.c_str()], allocator);
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

    if (m_nameKeywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NameKeyword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nameKeyword.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerUserUinsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUserUins";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ownerUserUins.begin(); itr != m_ownerUserUins.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_onlyFolderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OnlyFolder";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_onlyFolder, allocator);
    }

    if (m_orderBysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderBys";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_orderBys.begin(); itr != m_orderBys.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
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


string ListFilesRequest::GetWorkspaceId() const
{
    return m_workspaceId;
}

void ListFilesRequest::SetWorkspaceId(const string& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool ListFilesRequest::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}

FolderLocator ListFilesRequest::GetParent() const
{
    return m_parent;
}

void ListFilesRequest::SetParent(const FolderLocator& _parent)
{
    m_parent = _parent;
    m_parentHasBeenSet = true;
}

bool ListFilesRequest::ParentHasBeenSet() const
{
    return m_parentHasBeenSet;
}

vector<string> ListFilesRequest::GetFileTypes() const
{
    return m_fileTypes;
}

void ListFilesRequest::SetFileTypes(const vector<string>& _fileTypes)
{
    m_fileTypes = _fileTypes;
    m_fileTypesHasBeenSet = true;
}

bool ListFilesRequest::FileTypesHasBeenSet() const
{
    return m_fileTypesHasBeenSet;
}

string ListFilesRequest::GetNameKeyword() const
{
    return m_nameKeyword;
}

void ListFilesRequest::SetNameKeyword(const string& _nameKeyword)
{
    m_nameKeyword = _nameKeyword;
    m_nameKeywordHasBeenSet = true;
}

bool ListFilesRequest::NameKeywordHasBeenSet() const
{
    return m_nameKeywordHasBeenSet;
}

vector<string> ListFilesRequest::GetOwnerUserUins() const
{
    return m_ownerUserUins;
}

void ListFilesRequest::SetOwnerUserUins(const vector<string>& _ownerUserUins)
{
    m_ownerUserUins = _ownerUserUins;
    m_ownerUserUinsHasBeenSet = true;
}

bool ListFilesRequest::OwnerUserUinsHasBeenSet() const
{
    return m_ownerUserUinsHasBeenSet;
}

bool ListFilesRequest::GetOnlyFolder() const
{
    return m_onlyFolder;
}

void ListFilesRequest::SetOnlyFolder(const bool& _onlyFolder)
{
    m_onlyFolder = _onlyFolder;
    m_onlyFolderHasBeenSet = true;
}

bool ListFilesRequest::OnlyFolderHasBeenSet() const
{
    return m_onlyFolderHasBeenSet;
}

vector<OrderBy> ListFilesRequest::GetOrderBys() const
{
    return m_orderBys;
}

void ListFilesRequest::SetOrderBys(const vector<OrderBy>& _orderBys)
{
    m_orderBys = _orderBys;
    m_orderBysHasBeenSet = true;
}

bool ListFilesRequest::OrderBysHasBeenSet() const
{
    return m_orderBysHasBeenSet;
}

int64_t ListFilesRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void ListFilesRequest::SetPageNumber(const int64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool ListFilesRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

int64_t ListFilesRequest::GetPageSize() const
{
    return m_pageSize;
}

void ListFilesRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool ListFilesRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}


