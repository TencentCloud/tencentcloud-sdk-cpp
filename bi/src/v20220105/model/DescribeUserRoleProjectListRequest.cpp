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

#include <tencentcloud/bi/v20220105/model/DescribeUserRoleProjectListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bi::V20220105::Model;
using namespace std;

DescribeUserRoleProjectListRequest::DescribeUserRoleProjectListRequest() :
    m_pageNoHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_projectIdHasBeenSet(false)
{
}

string DescribeUserRoleProjectListRequest::ToJsonString() const
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

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeUserRoleProjectListRequest::GetPageNo() const
{
    return m_pageNo;
}

void DescribeUserRoleProjectListRequest::SetPageNo(const int64_t& _pageNo)
{
    m_pageNo = _pageNo;
    m_pageNoHasBeenSet = true;
}

bool DescribeUserRoleProjectListRequest::PageNoHasBeenSet() const
{
    return m_pageNoHasBeenSet;
}

int64_t DescribeUserRoleProjectListRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeUserRoleProjectListRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeUserRoleProjectListRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

int64_t DescribeUserRoleProjectListRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeUserRoleProjectListRequest::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeUserRoleProjectListRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}


