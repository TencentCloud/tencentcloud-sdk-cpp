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

#include <tencentcloud/wedata/v20210820/model/FindFuzzyTasksDsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

FindFuzzyTasksDsRequest::FindFuzzyTasksDsRequest() :
    m_projectIdHasBeenSet(false),
    m_pageNumHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_queryKeyHasBeenSet(false)
{
}

string FindFuzzyTasksDsRequest::ToJsonString() const
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

    if (m_pageNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageNum, allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_queryKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_queryKey.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string FindFuzzyTasksDsRequest::GetProjectId() const
{
    return m_projectId;
}

void FindFuzzyTasksDsRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool FindFuzzyTasksDsRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

uint64_t FindFuzzyTasksDsRequest::GetPageNum() const
{
    return m_pageNum;
}

void FindFuzzyTasksDsRequest::SetPageNum(const uint64_t& _pageNum)
{
    m_pageNum = _pageNum;
    m_pageNumHasBeenSet = true;
}

bool FindFuzzyTasksDsRequest::PageNumHasBeenSet() const
{
    return m_pageNumHasBeenSet;
}

uint64_t FindFuzzyTasksDsRequest::GetPageSize() const
{
    return m_pageSize;
}

void FindFuzzyTasksDsRequest::SetPageSize(const uint64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool FindFuzzyTasksDsRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

string FindFuzzyTasksDsRequest::GetQueryKey() const
{
    return m_queryKey;
}

void FindFuzzyTasksDsRequest::SetQueryKey(const string& _queryKey)
{
    m_queryKey = _queryKey;
    m_queryKeyHasBeenSet = true;
}

bool FindFuzzyTasksDsRequest::QueryKeyHasBeenSet() const
{
    return m_queryKeyHasBeenSet;
}


