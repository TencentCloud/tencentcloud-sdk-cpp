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

#include <tencentcloud/trro/v20220325/model/DescribePolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trro::V20220325::Model;
using namespace std;

DescribePolicyRequest::DescribePolicyRequest() :
    m_projectIdHasBeenSet(false),
    m_policyModeHasBeenSet(false),
    m_searchModeHasBeenSet(false),
    m_searchWordsHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_pageNumberHasBeenSet(false)
{
}

string DescribePolicyRequest::ToJsonString() const
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

    if (m_policyModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_policyMode.c_str(), allocator).Move(), allocator);
    }

    if (m_searchModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_searchMode.c_str(), allocator).Move(), allocator);
    }

    if (m_searchWordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchWords";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_searchWords.c_str(), allocator).Move(), allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_pageNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageNumber, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribePolicyRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribePolicyRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribePolicyRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string DescribePolicyRequest::GetPolicyMode() const
{
    return m_policyMode;
}

void DescribePolicyRequest::SetPolicyMode(const string& _policyMode)
{
    m_policyMode = _policyMode;
    m_policyModeHasBeenSet = true;
}

bool DescribePolicyRequest::PolicyModeHasBeenSet() const
{
    return m_policyModeHasBeenSet;
}

string DescribePolicyRequest::GetSearchMode() const
{
    return m_searchMode;
}

void DescribePolicyRequest::SetSearchMode(const string& _searchMode)
{
    m_searchMode = _searchMode;
    m_searchModeHasBeenSet = true;
}

bool DescribePolicyRequest::SearchModeHasBeenSet() const
{
    return m_searchModeHasBeenSet;
}

string DescribePolicyRequest::GetSearchWords() const
{
    return m_searchWords;
}

void DescribePolicyRequest::SetSearchWords(const string& _searchWords)
{
    m_searchWords = _searchWords;
    m_searchWordsHasBeenSet = true;
}

bool DescribePolicyRequest::SearchWordsHasBeenSet() const
{
    return m_searchWordsHasBeenSet;
}

int64_t DescribePolicyRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribePolicyRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribePolicyRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

int64_t DescribePolicyRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void DescribePolicyRequest::SetPageNumber(const int64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool DescribePolicyRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}


