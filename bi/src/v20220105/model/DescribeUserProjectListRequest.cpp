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

#include <tencentcloud/bi/v20220105/model/DescribeUserProjectListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bi::V20220105::Model;
using namespace std;

DescribeUserProjectListRequest::DescribeUserProjectListRequest() :
    m_projectIdHasBeenSet(false),
    m_allPageHasBeenSet(false),
    m_pageNoHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_isFilterPerAuthUserHasBeenSet(false),
    m_isFilterCurrentUserHasBeenSet(false),
    m_keywordHasBeenSet(false)
{
}

string DescribeUserProjectListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
    }

    if (m_allPageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllPage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_allPage, allocator);
    }

    if (m_pageNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageNo, allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_isFilterPerAuthUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsFilterPerAuthUser";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isFilterPerAuthUser, allocator);
    }

    if (m_isFilterCurrentUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsFilterCurrentUser";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isFilterCurrentUser, allocator);
    }

    if (m_keywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keyword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyword.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeUserProjectListRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeUserProjectListRequest::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeUserProjectListRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

bool DescribeUserProjectListRequest::GetAllPage() const
{
    return m_allPage;
}

void DescribeUserProjectListRequest::SetAllPage(const bool& _allPage)
{
    m_allPage = _allPage;
    m_allPageHasBeenSet = true;
}

bool DescribeUserProjectListRequest::AllPageHasBeenSet() const
{
    return m_allPageHasBeenSet;
}

int64_t DescribeUserProjectListRequest::GetPageNo() const
{
    return m_pageNo;
}

void DescribeUserProjectListRequest::SetPageNo(const int64_t& _pageNo)
{
    m_pageNo = _pageNo;
    m_pageNoHasBeenSet = true;
}

bool DescribeUserProjectListRequest::PageNoHasBeenSet() const
{
    return m_pageNoHasBeenSet;
}

int64_t DescribeUserProjectListRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeUserProjectListRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeUserProjectListRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

bool DescribeUserProjectListRequest::GetIsFilterPerAuthUser() const
{
    return m_isFilterPerAuthUser;
}

void DescribeUserProjectListRequest::SetIsFilterPerAuthUser(const bool& _isFilterPerAuthUser)
{
    m_isFilterPerAuthUser = _isFilterPerAuthUser;
    m_isFilterPerAuthUserHasBeenSet = true;
}

bool DescribeUserProjectListRequest::IsFilterPerAuthUserHasBeenSet() const
{
    return m_isFilterPerAuthUserHasBeenSet;
}

bool DescribeUserProjectListRequest::GetIsFilterCurrentUser() const
{
    return m_isFilterCurrentUser;
}

void DescribeUserProjectListRequest::SetIsFilterCurrentUser(const bool& _isFilterCurrentUser)
{
    m_isFilterCurrentUser = _isFilterCurrentUser;
    m_isFilterCurrentUserHasBeenSet = true;
}

bool DescribeUserProjectListRequest::IsFilterCurrentUserHasBeenSet() const
{
    return m_isFilterCurrentUserHasBeenSet;
}

string DescribeUserProjectListRequest::GetKeyword() const
{
    return m_keyword;
}

void DescribeUserProjectListRequest::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool DescribeUserProjectListRequest::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}


