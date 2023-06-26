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

#include <tencentcloud/trp/v20210515/model/DescribeScanLogsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trp::V20210515::Model;
using namespace std;

DescribeScanLogsRequest::DescribeScanLogsRequest() :
    m_corpIdHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_codeHasBeenSet(false),
    m_openidHasBeenSet(false)
{
}

string DescribeScanLogsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_corpIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CorpId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_corpId, allocator);
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

    if (m_codeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_code.c_str(), allocator).Move(), allocator);
    }

    if (m_openidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Openid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_openid.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeScanLogsRequest::GetCorpId() const
{
    return m_corpId;
}

void DescribeScanLogsRequest::SetCorpId(const uint64_t& _corpId)
{
    m_corpId = _corpId;
    m_corpIdHasBeenSet = true;
}

bool DescribeScanLogsRequest::CorpIdHasBeenSet() const
{
    return m_corpIdHasBeenSet;
}

uint64_t DescribeScanLogsRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeScanLogsRequest::SetPageSize(const uint64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeScanLogsRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

uint64_t DescribeScanLogsRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void DescribeScanLogsRequest::SetPageNumber(const uint64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool DescribeScanLogsRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

string DescribeScanLogsRequest::GetCode() const
{
    return m_code;
}

void DescribeScanLogsRequest::SetCode(const string& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool DescribeScanLogsRequest::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

string DescribeScanLogsRequest::GetOpenid() const
{
    return m_openid;
}

void DescribeScanLogsRequest::SetOpenid(const string& _openid)
{
    m_openid = _openid;
    m_openidHasBeenSet = true;
}

bool DescribeScanLogsRequest::OpenidHasBeenSet() const
{
    return m_openidHasBeenSet;
}


