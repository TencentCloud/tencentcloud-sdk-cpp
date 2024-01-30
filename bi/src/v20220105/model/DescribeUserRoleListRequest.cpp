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

#include <tencentcloud/bi/v20220105/model/DescribeUserRoleListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bi::V20220105::Model;
using namespace std;

DescribeUserRoleListRequest::DescribeUserRoleListRequest() :
    m_pageNoHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_allPageHasBeenSet(false),
    m_userTypeHasBeenSet(false),
    m_keywordHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_isOnlyBindAppUserHasBeenSet(false)
{
}

string DescribeUserRoleListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_allPageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllPage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_allPage, allocator);
    }

    if (m_userTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userType.c_str(), allocator).Move(), allocator);
    }

    if (m_keywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keyword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyword.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_isOnlyBindAppUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsOnlyBindAppUser";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isOnlyBindAppUser, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeUserRoleListRequest::GetPageNo() const
{
    return m_pageNo;
}

void DescribeUserRoleListRequest::SetPageNo(const int64_t& _pageNo)
{
    m_pageNo = _pageNo;
    m_pageNoHasBeenSet = true;
}

bool DescribeUserRoleListRequest::PageNoHasBeenSet() const
{
    return m_pageNoHasBeenSet;
}

int64_t DescribeUserRoleListRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeUserRoleListRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeUserRoleListRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

bool DescribeUserRoleListRequest::GetAllPage() const
{
    return m_allPage;
}

void DescribeUserRoleListRequest::SetAllPage(const bool& _allPage)
{
    m_allPage = _allPage;
    m_allPageHasBeenSet = true;
}

bool DescribeUserRoleListRequest::AllPageHasBeenSet() const
{
    return m_allPageHasBeenSet;
}

string DescribeUserRoleListRequest::GetUserType() const
{
    return m_userType;
}

void DescribeUserRoleListRequest::SetUserType(const string& _userType)
{
    m_userType = _userType;
    m_userTypeHasBeenSet = true;
}

bool DescribeUserRoleListRequest::UserTypeHasBeenSet() const
{
    return m_userTypeHasBeenSet;
}

string DescribeUserRoleListRequest::GetKeyword() const
{
    return m_keyword;
}

void DescribeUserRoleListRequest::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool DescribeUserRoleListRequest::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}

string DescribeUserRoleListRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeUserRoleListRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeUserRoleListRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

bool DescribeUserRoleListRequest::GetIsOnlyBindAppUser() const
{
    return m_isOnlyBindAppUser;
}

void DescribeUserRoleListRequest::SetIsOnlyBindAppUser(const bool& _isOnlyBindAppUser)
{
    m_isOnlyBindAppUser = _isOnlyBindAppUser;
    m_isOnlyBindAppUserHasBeenSet = true;
}

bool DescribeUserRoleListRequest::IsOnlyBindAppUserHasBeenSet() const
{
    return m_isOnlyBindAppUserHasBeenSet;
}


