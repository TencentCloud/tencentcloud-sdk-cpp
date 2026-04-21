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

#include <tencentcloud/bi/v20220105/model/DescribeUserGroupMemberListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bi::V20220105::Model;
using namespace std;

DescribeUserGroupMemberListRequest::DescribeUserGroupMemberListRequest() :
    m_groupIdsHasBeenSet(false),
    m_createdOnOrderHasBeenSet(false),
    m_keywordHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_pageNoHasBeenSet(false),
    m_allPageHasBeenSet(false)
{
}

string DescribeUserGroupMemberListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_groupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_groupIds.begin(); itr != m_groupIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_createdOnOrderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedOnOrder";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_createdOnOrder.c_str(), allocator).Move(), allocator);
    }

    if (m_keywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keyword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyword.c_str(), allocator).Move(), allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_pageNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageNo, allocator);
    }

    if (m_allPageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllPage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_allPage, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<int64_t> DescribeUserGroupMemberListRequest::GetGroupIds() const
{
    return m_groupIds;
}

void DescribeUserGroupMemberListRequest::SetGroupIds(const vector<int64_t>& _groupIds)
{
    m_groupIds = _groupIds;
    m_groupIdsHasBeenSet = true;
}

bool DescribeUserGroupMemberListRequest::GroupIdsHasBeenSet() const
{
    return m_groupIdsHasBeenSet;
}

string DescribeUserGroupMemberListRequest::GetCreatedOnOrder() const
{
    return m_createdOnOrder;
}

void DescribeUserGroupMemberListRequest::SetCreatedOnOrder(const string& _createdOnOrder)
{
    m_createdOnOrder = _createdOnOrder;
    m_createdOnOrderHasBeenSet = true;
}

bool DescribeUserGroupMemberListRequest::CreatedOnOrderHasBeenSet() const
{
    return m_createdOnOrderHasBeenSet;
}

string DescribeUserGroupMemberListRequest::GetKeyword() const
{
    return m_keyword;
}

void DescribeUserGroupMemberListRequest::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool DescribeUserGroupMemberListRequest::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}

uint64_t DescribeUserGroupMemberListRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeUserGroupMemberListRequest::SetPageSize(const uint64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeUserGroupMemberListRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

uint64_t DescribeUserGroupMemberListRequest::GetPageNo() const
{
    return m_pageNo;
}

void DescribeUserGroupMemberListRequest::SetPageNo(const uint64_t& _pageNo)
{
    m_pageNo = _pageNo;
    m_pageNoHasBeenSet = true;
}

bool DescribeUserGroupMemberListRequest::PageNoHasBeenSet() const
{
    return m_pageNoHasBeenSet;
}

bool DescribeUserGroupMemberListRequest::GetAllPage() const
{
    return m_allPage;
}

void DescribeUserGroupMemberListRequest::SetAllPage(const bool& _allPage)
{
    m_allPage = _allPage;
    m_allPageHasBeenSet = true;
}

bool DescribeUserGroupMemberListRequest::AllPageHasBeenSet() const
{
    return m_allPageHasBeenSet;
}


