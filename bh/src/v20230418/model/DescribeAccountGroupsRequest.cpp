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

#include <tencentcloud/bh/v20230418/model/DescribeAccountGroupsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bh::V20230418::Model;
using namespace std;

DescribeAccountGroupsRequest::DescribeAccountGroupsRequest() :
    m_deepInHasBeenSet(false),
    m_parentIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_pageNumHasBeenSet(false)
{
}

string DescribeAccountGroupsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_deepInHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeepIn";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deepIn, allocator);
    }

    if (m_parentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_parentId, allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_pageNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageNum, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeAccountGroupsRequest::GetDeepIn() const
{
    return m_deepIn;
}

void DescribeAccountGroupsRequest::SetDeepIn(const int64_t& _deepIn)
{
    m_deepIn = _deepIn;
    m_deepInHasBeenSet = true;
}

bool DescribeAccountGroupsRequest::DeepInHasBeenSet() const
{
    return m_deepInHasBeenSet;
}

int64_t DescribeAccountGroupsRequest::GetParentId() const
{
    return m_parentId;
}

void DescribeAccountGroupsRequest::SetParentId(const int64_t& _parentId)
{
    m_parentId = _parentId;
    m_parentIdHasBeenSet = true;
}

bool DescribeAccountGroupsRequest::ParentIdHasBeenSet() const
{
    return m_parentIdHasBeenSet;
}

string DescribeAccountGroupsRequest::GetGroupName() const
{
    return m_groupName;
}

void DescribeAccountGroupsRequest::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool DescribeAccountGroupsRequest::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

int64_t DescribeAccountGroupsRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeAccountGroupsRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeAccountGroupsRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

int64_t DescribeAccountGroupsRequest::GetPageNum() const
{
    return m_pageNum;
}

void DescribeAccountGroupsRequest::SetPageNum(const int64_t& _pageNum)
{
    m_pageNum = _pageNum;
    m_pageNumHasBeenSet = true;
}

bool DescribeAccountGroupsRequest::PageNumHasBeenSet() const
{
    return m_pageNumHasBeenSet;
}


