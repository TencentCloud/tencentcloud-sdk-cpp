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

#include <tencentcloud/wedata/v20210820/model/GetOfflineDIInstanceListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

GetOfflineDIInstanceListRequest::GetOfflineDIInstanceListRequest() :
    m_pageIndexHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_searchConditionHasBeenSet(false)
{
}

string GetOfflineDIInstanceListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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


uint64_t GetOfflineDIInstanceListRequest::GetPageIndex() const
{
    return m_pageIndex;
}

void GetOfflineDIInstanceListRequest::SetPageIndex(const uint64_t& _pageIndex)
{
    m_pageIndex = _pageIndex;
    m_pageIndexHasBeenSet = true;
}

bool GetOfflineDIInstanceListRequest::PageIndexHasBeenSet() const
{
    return m_pageIndexHasBeenSet;
}

uint64_t GetOfflineDIInstanceListRequest::GetPageSize() const
{
    return m_pageSize;
}

void GetOfflineDIInstanceListRequest::SetPageSize(const uint64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool GetOfflineDIInstanceListRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

string GetOfflineDIInstanceListRequest::GetProjectId() const
{
    return m_projectId;
}

void GetOfflineDIInstanceListRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool GetOfflineDIInstanceListRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

SearchConditionNew GetOfflineDIInstanceListRequest::GetSearchCondition() const
{
    return m_searchCondition;
}

void GetOfflineDIInstanceListRequest::SetSearchCondition(const SearchConditionNew& _searchCondition)
{
    m_searchCondition = _searchCondition;
    m_searchConditionHasBeenSet = true;
}

bool GetOfflineDIInstanceListRequest::SearchConditionHasBeenSet() const
{
    return m_searchConditionHasBeenSet;
}


