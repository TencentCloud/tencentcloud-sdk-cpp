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

#include <tencentcloud/solar/v20181011/model/DescribeProjectsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Solar::V20181011::Model;
using namespace std;

DescribeProjectsRequest::DescribeProjectsRequest() :
    m_pageNoHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_searchWordHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_projectStatusHasBeenSet(false)
{
}

string DescribeProjectsRequest::ToJsonString() const
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

    if (m_searchWordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchWord";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_searchWord.c_str(), allocator).Move(), allocator);
    }

    if (m_filtersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_filters.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_projectStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectStatus, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeProjectsRequest::GetPageNo() const
{
    return m_pageNo;
}

void DescribeProjectsRequest::SetPageNo(const uint64_t& _pageNo)
{
    m_pageNo = _pageNo;
    m_pageNoHasBeenSet = true;
}

bool DescribeProjectsRequest::PageNoHasBeenSet() const
{
    return m_pageNoHasBeenSet;
}

uint64_t DescribeProjectsRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeProjectsRequest::SetPageSize(const uint64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeProjectsRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

string DescribeProjectsRequest::GetSearchWord() const
{
    return m_searchWord;
}

void DescribeProjectsRequest::SetSearchWord(const string& _searchWord)
{
    m_searchWord = _searchWord;
    m_searchWordHasBeenSet = true;
}

bool DescribeProjectsRequest::SearchWordHasBeenSet() const
{
    return m_searchWordHasBeenSet;
}

Filters DescribeProjectsRequest::GetFilters() const
{
    return m_filters;
}

void DescribeProjectsRequest::SetFilters(const Filters& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeProjectsRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

int64_t DescribeProjectsRequest::GetProjectStatus() const
{
    return m_projectStatus;
}

void DescribeProjectsRequest::SetProjectStatus(const int64_t& _projectStatus)
{
    m_projectStatus = _projectStatus;
    m_projectStatusHasBeenSet = true;
}

bool DescribeProjectsRequest::ProjectStatusHasBeenSet() const
{
    return m_projectStatusHasBeenSet;
}


