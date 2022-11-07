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

#include <tencentcloud/wedata/v20210820/model/DescribeInstanceListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeInstanceListRequest::DescribeInstanceListRequest() :
    m_projectIdHasBeenSet(false),
    m_pageIndexHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_cycleListHasBeenSet(false),
    m_ownerListHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_sortHasBeenSet(false),
    m_sortColHasBeenSet(false),
    m_taskTypeListHasBeenSet(false),
    m_stateListHasBeenSet(false),
    m_keywordHasBeenSet(false)
{
}

string DescribeInstanceListRequest::ToJsonString() const
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

    if (m_cycleListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_cycleList.begin(); itr != m_cycleList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_ownerListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ownerList.begin(); itr != m_ownerList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_sortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sort";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sort.c_str(), allocator).Move(), allocator);
    }

    if (m_sortColHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortCol";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sortCol.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTypeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskTypeList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_taskTypeList.begin(); itr != m_taskTypeList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_stateListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StateList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_stateList.begin(); itr != m_stateList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
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


string DescribeInstanceListRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeInstanceListRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeInstanceListRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

int64_t DescribeInstanceListRequest::GetPageIndex() const
{
    return m_pageIndex;
}

void DescribeInstanceListRequest::SetPageIndex(const int64_t& _pageIndex)
{
    m_pageIndex = _pageIndex;
    m_pageIndexHasBeenSet = true;
}

bool DescribeInstanceListRequest::PageIndexHasBeenSet() const
{
    return m_pageIndexHasBeenSet;
}

int64_t DescribeInstanceListRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeInstanceListRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeInstanceListRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

vector<string> DescribeInstanceListRequest::GetCycleList() const
{
    return m_cycleList;
}

void DescribeInstanceListRequest::SetCycleList(const vector<string>& _cycleList)
{
    m_cycleList = _cycleList;
    m_cycleListHasBeenSet = true;
}

bool DescribeInstanceListRequest::CycleListHasBeenSet() const
{
    return m_cycleListHasBeenSet;
}

vector<string> DescribeInstanceListRequest::GetOwnerList() const
{
    return m_ownerList;
}

void DescribeInstanceListRequest::SetOwnerList(const vector<string>& _ownerList)
{
    m_ownerList = _ownerList;
    m_ownerListHasBeenSet = true;
}

bool DescribeInstanceListRequest::OwnerListHasBeenSet() const
{
    return m_ownerListHasBeenSet;
}

string DescribeInstanceListRequest::GetInstanceType() const
{
    return m_instanceType;
}

void DescribeInstanceListRequest::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool DescribeInstanceListRequest::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string DescribeInstanceListRequest::GetSort() const
{
    return m_sort;
}

void DescribeInstanceListRequest::SetSort(const string& _sort)
{
    m_sort = _sort;
    m_sortHasBeenSet = true;
}

bool DescribeInstanceListRequest::SortHasBeenSet() const
{
    return m_sortHasBeenSet;
}

string DescribeInstanceListRequest::GetSortCol() const
{
    return m_sortCol;
}

void DescribeInstanceListRequest::SetSortCol(const string& _sortCol)
{
    m_sortCol = _sortCol;
    m_sortColHasBeenSet = true;
}

bool DescribeInstanceListRequest::SortColHasBeenSet() const
{
    return m_sortColHasBeenSet;
}

vector<int64_t> DescribeInstanceListRequest::GetTaskTypeList() const
{
    return m_taskTypeList;
}

void DescribeInstanceListRequest::SetTaskTypeList(const vector<int64_t>& _taskTypeList)
{
    m_taskTypeList = _taskTypeList;
    m_taskTypeListHasBeenSet = true;
}

bool DescribeInstanceListRequest::TaskTypeListHasBeenSet() const
{
    return m_taskTypeListHasBeenSet;
}

vector<int64_t> DescribeInstanceListRequest::GetStateList() const
{
    return m_stateList;
}

void DescribeInstanceListRequest::SetStateList(const vector<int64_t>& _stateList)
{
    m_stateList = _stateList;
    m_stateListHasBeenSet = true;
}

bool DescribeInstanceListRequest::StateListHasBeenSet() const
{
    return m_stateListHasBeenSet;
}

string DescribeInstanceListRequest::GetKeyword() const
{
    return m_keyword;
}

void DescribeInstanceListRequest::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool DescribeInstanceListRequest::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}


