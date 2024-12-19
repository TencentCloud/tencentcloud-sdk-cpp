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

#include <tencentcloud/bi/v20220105/model/DescribeProjectListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bi::V20220105::Model;
using namespace std;

DescribeProjectListRequest::DescribeProjectListRequest() :
    m_pageSizeHasBeenSet(false),
    m_pageNoHasBeenSet(false),
    m_keywordHasBeenSet(false),
    m_allPageHasBeenSet(false),
    m_moduleCollectionHasBeenSet(false),
    m_moduleIdListHasBeenSet(false)
{
}

string DescribeProjectListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_keywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keyword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyword.c_str(), allocator).Move(), allocator);
    }

    if (m_allPageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllPage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_allPage, allocator);
    }

    if (m_moduleCollectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModuleCollection";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_moduleCollection.c_str(), allocator).Move(), allocator);
    }

    if (m_moduleIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModuleIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_moduleIdList.begin(); itr != m_moduleIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeProjectListRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeProjectListRequest::SetPageSize(const uint64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeProjectListRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

uint64_t DescribeProjectListRequest::GetPageNo() const
{
    return m_pageNo;
}

void DescribeProjectListRequest::SetPageNo(const uint64_t& _pageNo)
{
    m_pageNo = _pageNo;
    m_pageNoHasBeenSet = true;
}

bool DescribeProjectListRequest::PageNoHasBeenSet() const
{
    return m_pageNoHasBeenSet;
}

string DescribeProjectListRequest::GetKeyword() const
{
    return m_keyword;
}

void DescribeProjectListRequest::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool DescribeProjectListRequest::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}

bool DescribeProjectListRequest::GetAllPage() const
{
    return m_allPage;
}

void DescribeProjectListRequest::SetAllPage(const bool& _allPage)
{
    m_allPage = _allPage;
    m_allPageHasBeenSet = true;
}

bool DescribeProjectListRequest::AllPageHasBeenSet() const
{
    return m_allPageHasBeenSet;
}

string DescribeProjectListRequest::GetModuleCollection() const
{
    return m_moduleCollection;
}

void DescribeProjectListRequest::SetModuleCollection(const string& _moduleCollection)
{
    m_moduleCollection = _moduleCollection;
    m_moduleCollectionHasBeenSet = true;
}

bool DescribeProjectListRequest::ModuleCollectionHasBeenSet() const
{
    return m_moduleCollectionHasBeenSet;
}

vector<string> DescribeProjectListRequest::GetModuleIdList() const
{
    return m_moduleIdList;
}

void DescribeProjectListRequest::SetModuleIdList(const vector<string>& _moduleIdList)
{
    m_moduleIdList = _moduleIdList;
    m_moduleIdListHasBeenSet = true;
}

bool DescribeProjectListRequest::ModuleIdListHasBeenSet() const
{
    return m_moduleIdListHasBeenSet;
}


