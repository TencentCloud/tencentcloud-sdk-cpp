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

#include <tencentcloud/rum/v20210622/model/DescribeTDEMFunnelListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

DescribeTDEMFunnelListRequest::DescribeTDEMFunnelListRequest() :
    m_appIdHasBeenSet(false),
    m_keywordHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_pageHasBeenSet(false),
    m_pageSizeHasBeenSet(false)
{
}

string DescribeTDEMFunnelListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_keywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keyword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyword.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeTDEMFunnelListRequest::GetAppId() const
{
    return m_appId;
}

void DescribeTDEMFunnelListRequest::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool DescribeTDEMFunnelListRequest::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string DescribeTDEMFunnelListRequest::GetKeyword() const
{
    return m_keyword;
}

void DescribeTDEMFunnelListRequest::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool DescribeTDEMFunnelListRequest::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}

string DescribeTDEMFunnelListRequest::GetStatus() const
{
    return m_status;
}

void DescribeTDEMFunnelListRequest::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeTDEMFunnelListRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t DescribeTDEMFunnelListRequest::GetPage() const
{
    return m_page;
}

void DescribeTDEMFunnelListRequest::SetPage(const int64_t& _page)
{
    m_page = _page;
    m_pageHasBeenSet = true;
}

bool DescribeTDEMFunnelListRequest::PageHasBeenSet() const
{
    return m_pageHasBeenSet;
}

int64_t DescribeTDEMFunnelListRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeTDEMFunnelListRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeTDEMFunnelListRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}


