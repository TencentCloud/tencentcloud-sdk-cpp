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

#include <tencentcloud/monitor/v20230616/model/DescribeDispenseExternalRuleListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Monitor::V20230616::Model;
using namespace std;

DescribeDispenseExternalRuleListRequest::DescribeDispenseExternalRuleListRequest() :
    m_pageHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_dispenseRegionsHasBeenSet(false),
    m_keywordHasBeenSet(false)
{
}

string DescribeDispenseExternalRuleListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_pageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Page";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_page, allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_dispenseRegionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DispenseRegions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dispenseRegions.begin(); itr != m_dispenseRegions.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
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


uint64_t DescribeDispenseExternalRuleListRequest::GetPage() const
{
    return m_page;
}

void DescribeDispenseExternalRuleListRequest::SetPage(const uint64_t& _page)
{
    m_page = _page;
    m_pageHasBeenSet = true;
}

bool DescribeDispenseExternalRuleListRequest::PageHasBeenSet() const
{
    return m_pageHasBeenSet;
}

uint64_t DescribeDispenseExternalRuleListRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeDispenseExternalRuleListRequest::SetPageSize(const uint64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeDispenseExternalRuleListRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

vector<string> DescribeDispenseExternalRuleListRequest::GetDispenseRegions() const
{
    return m_dispenseRegions;
}

void DescribeDispenseExternalRuleListRequest::SetDispenseRegions(const vector<string>& _dispenseRegions)
{
    m_dispenseRegions = _dispenseRegions;
    m_dispenseRegionsHasBeenSet = true;
}

bool DescribeDispenseExternalRuleListRequest::DispenseRegionsHasBeenSet() const
{
    return m_dispenseRegionsHasBeenSet;
}

string DescribeDispenseExternalRuleListRequest::GetKeyword() const
{
    return m_keyword;
}

void DescribeDispenseExternalRuleListRequest::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool DescribeDispenseExternalRuleListRequest::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}


