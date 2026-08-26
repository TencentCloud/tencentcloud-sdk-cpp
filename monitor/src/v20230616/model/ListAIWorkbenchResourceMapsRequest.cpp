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

#include <tencentcloud/monitor/v20230616/model/ListAIWorkbenchResourceMapsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Monitor::V20230616::Model;
using namespace std;

ListAIWorkbenchResourceMapsRequest::ListAIWorkbenchResourceMapsRequest() :
    m_perPageHasBeenSet(false),
    m_pageNoHasBeenSet(false),
    m_keywordHasBeenSet(false)
{
}

string ListAIWorkbenchResourceMapsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_perPageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PerPage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_perPage, allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ListAIWorkbenchResourceMapsRequest::GetPerPage() const
{
    return m_perPage;
}

void ListAIWorkbenchResourceMapsRequest::SetPerPage(const int64_t& _perPage)
{
    m_perPage = _perPage;
    m_perPageHasBeenSet = true;
}

bool ListAIWorkbenchResourceMapsRequest::PerPageHasBeenSet() const
{
    return m_perPageHasBeenSet;
}

int64_t ListAIWorkbenchResourceMapsRequest::GetPageNo() const
{
    return m_pageNo;
}

void ListAIWorkbenchResourceMapsRequest::SetPageNo(const int64_t& _pageNo)
{
    m_pageNo = _pageNo;
    m_pageNoHasBeenSet = true;
}

bool ListAIWorkbenchResourceMapsRequest::PageNoHasBeenSet() const
{
    return m_pageNoHasBeenSet;
}

string ListAIWorkbenchResourceMapsRequest::GetKeyword() const
{
    return m_keyword;
}

void ListAIWorkbenchResourceMapsRequest::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool ListAIWorkbenchResourceMapsRequest::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}


