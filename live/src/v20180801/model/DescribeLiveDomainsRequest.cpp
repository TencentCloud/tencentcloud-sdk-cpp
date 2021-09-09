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

#include <tencentcloud/live/v20180801/model/DescribeLiveDomainsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

DescribeLiveDomainsRequest::DescribeLiveDomainsRequest() :
    m_domainStatusHasBeenSet(false),
    m_domainTypeHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_pageNumHasBeenSet(false),
    m_isDelayLiveHasBeenSet(false),
    m_domainPrefixHasBeenSet(false),
    m_playTypeHasBeenSet(false)
{
}

string DescribeLiveDomainsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_domainStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_domainStatus, allocator);
    }

    if (m_domainTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_domainType, allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_pageNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageNum, allocator);
    }

    if (m_isDelayLiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDelayLive";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isDelayLive, allocator);
    }

    if (m_domainPrefixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainPrefix";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domainPrefix.c_str(), allocator).Move(), allocator);
    }

    if (m_playTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlayType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_playType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeLiveDomainsRequest::GetDomainStatus() const
{
    return m_domainStatus;
}

void DescribeLiveDomainsRequest::SetDomainStatus(const uint64_t& _domainStatus)
{
    m_domainStatus = _domainStatus;
    m_domainStatusHasBeenSet = true;
}

bool DescribeLiveDomainsRequest::DomainStatusHasBeenSet() const
{
    return m_domainStatusHasBeenSet;
}

uint64_t DescribeLiveDomainsRequest::GetDomainType() const
{
    return m_domainType;
}

void DescribeLiveDomainsRequest::SetDomainType(const uint64_t& _domainType)
{
    m_domainType = _domainType;
    m_domainTypeHasBeenSet = true;
}

bool DescribeLiveDomainsRequest::DomainTypeHasBeenSet() const
{
    return m_domainTypeHasBeenSet;
}

uint64_t DescribeLiveDomainsRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeLiveDomainsRequest::SetPageSize(const uint64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeLiveDomainsRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

uint64_t DescribeLiveDomainsRequest::GetPageNum() const
{
    return m_pageNum;
}

void DescribeLiveDomainsRequest::SetPageNum(const uint64_t& _pageNum)
{
    m_pageNum = _pageNum;
    m_pageNumHasBeenSet = true;
}

bool DescribeLiveDomainsRequest::PageNumHasBeenSet() const
{
    return m_pageNumHasBeenSet;
}

uint64_t DescribeLiveDomainsRequest::GetIsDelayLive() const
{
    return m_isDelayLive;
}

void DescribeLiveDomainsRequest::SetIsDelayLive(const uint64_t& _isDelayLive)
{
    m_isDelayLive = _isDelayLive;
    m_isDelayLiveHasBeenSet = true;
}

bool DescribeLiveDomainsRequest::IsDelayLiveHasBeenSet() const
{
    return m_isDelayLiveHasBeenSet;
}

string DescribeLiveDomainsRequest::GetDomainPrefix() const
{
    return m_domainPrefix;
}

void DescribeLiveDomainsRequest::SetDomainPrefix(const string& _domainPrefix)
{
    m_domainPrefix = _domainPrefix;
    m_domainPrefixHasBeenSet = true;
}

bool DescribeLiveDomainsRequest::DomainPrefixHasBeenSet() const
{
    return m_domainPrefixHasBeenSet;
}

uint64_t DescribeLiveDomainsRequest::GetPlayType() const
{
    return m_playType;
}

void DescribeLiveDomainsRequest::SetPlayType(const uint64_t& _playType)
{
    m_playType = _playType;
    m_playTypeHasBeenSet = true;
}

bool DescribeLiveDomainsRequest::PlayTypeHasBeenSet() const
{
    return m_playTypeHasBeenSet;
}


