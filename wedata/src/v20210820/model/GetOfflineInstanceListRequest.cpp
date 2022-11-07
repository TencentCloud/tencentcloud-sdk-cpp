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

#include <tencentcloud/wedata/v20210820/model/GetOfflineInstanceListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

GetOfflineInstanceListRequest::GetOfflineInstanceListRequest() :
    m_pageIndexHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_searchConditionHasBeenSet(false)
{
}

string GetOfflineInstanceListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_pageIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageIndex";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pageIndex.c_str(), allocator).Move(), allocator);
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

    if (m_searchConditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchCondition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_searchCondition.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetOfflineInstanceListRequest::GetPageIndex() const
{
    return m_pageIndex;
}

void GetOfflineInstanceListRequest::SetPageIndex(const string& _pageIndex)
{
    m_pageIndex = _pageIndex;
    m_pageIndexHasBeenSet = true;
}

bool GetOfflineInstanceListRequest::PageIndexHasBeenSet() const
{
    return m_pageIndexHasBeenSet;
}

uint64_t GetOfflineInstanceListRequest::GetPageSize() const
{
    return m_pageSize;
}

void GetOfflineInstanceListRequest::SetPageSize(const uint64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool GetOfflineInstanceListRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

string GetOfflineInstanceListRequest::GetProjectId() const
{
    return m_projectId;
}

void GetOfflineInstanceListRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool GetOfflineInstanceListRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

SearchCondition GetOfflineInstanceListRequest::GetSearchCondition() const
{
    return m_searchCondition;
}

void GetOfflineInstanceListRequest::SetSearchCondition(const SearchCondition& _searchCondition)
{
    m_searchCondition = _searchCondition;
    m_searchConditionHasBeenSet = true;
}

bool GetOfflineInstanceListRequest::SearchConditionHasBeenSet() const
{
    return m_searchConditionHasBeenSet;
}


