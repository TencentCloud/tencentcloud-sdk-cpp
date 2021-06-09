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

#include <tencentcloud/live/v20180801/model/DescribeLiveStreamEventListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

DescribeLiveStreamEventListRequest::DescribeLiveStreamEventListRequest() :
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_appNameHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_streamNameHasBeenSet(false),
    m_pageNumHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_isFilterHasBeenSet(false),
    m_isStrictHasBeenSet(false),
    m_isAscHasBeenSet(false)
{
}

string DescribeLiveStreamEventListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_appNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appName.c_str(), allocator).Move(), allocator);
    }

    if (m_domainNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domainName.c_str(), allocator).Move(), allocator);
    }

    if (m_streamNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_streamName.c_str(), allocator).Move(), allocator);
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

    if (m_isFilterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsFilter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isFilter, allocator);
    }

    if (m_isStrictHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsStrict";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isStrict, allocator);
    }

    if (m_isAscHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAsc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isAsc, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeLiveStreamEventListRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeLiveStreamEventListRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeLiveStreamEventListRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeLiveStreamEventListRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeLiveStreamEventListRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeLiveStreamEventListRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeLiveStreamEventListRequest::GetAppName() const
{
    return m_appName;
}

void DescribeLiveStreamEventListRequest::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool DescribeLiveStreamEventListRequest::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

string DescribeLiveStreamEventListRequest::GetDomainName() const
{
    return m_domainName;
}

void DescribeLiveStreamEventListRequest::SetDomainName(const string& _domainName)
{
    m_domainName = _domainName;
    m_domainNameHasBeenSet = true;
}

bool DescribeLiveStreamEventListRequest::DomainNameHasBeenSet() const
{
    return m_domainNameHasBeenSet;
}

string DescribeLiveStreamEventListRequest::GetStreamName() const
{
    return m_streamName;
}

void DescribeLiveStreamEventListRequest::SetStreamName(const string& _streamName)
{
    m_streamName = _streamName;
    m_streamNameHasBeenSet = true;
}

bool DescribeLiveStreamEventListRequest::StreamNameHasBeenSet() const
{
    return m_streamNameHasBeenSet;
}

uint64_t DescribeLiveStreamEventListRequest::GetPageNum() const
{
    return m_pageNum;
}

void DescribeLiveStreamEventListRequest::SetPageNum(const uint64_t& _pageNum)
{
    m_pageNum = _pageNum;
    m_pageNumHasBeenSet = true;
}

bool DescribeLiveStreamEventListRequest::PageNumHasBeenSet() const
{
    return m_pageNumHasBeenSet;
}

uint64_t DescribeLiveStreamEventListRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeLiveStreamEventListRequest::SetPageSize(const uint64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeLiveStreamEventListRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

int64_t DescribeLiveStreamEventListRequest::GetIsFilter() const
{
    return m_isFilter;
}

void DescribeLiveStreamEventListRequest::SetIsFilter(const int64_t& _isFilter)
{
    m_isFilter = _isFilter;
    m_isFilterHasBeenSet = true;
}

bool DescribeLiveStreamEventListRequest::IsFilterHasBeenSet() const
{
    return m_isFilterHasBeenSet;
}

int64_t DescribeLiveStreamEventListRequest::GetIsStrict() const
{
    return m_isStrict;
}

void DescribeLiveStreamEventListRequest::SetIsStrict(const int64_t& _isStrict)
{
    m_isStrict = _isStrict;
    m_isStrictHasBeenSet = true;
}

bool DescribeLiveStreamEventListRequest::IsStrictHasBeenSet() const
{
    return m_isStrictHasBeenSet;
}

int64_t DescribeLiveStreamEventListRequest::GetIsAsc() const
{
    return m_isAsc;
}

void DescribeLiveStreamEventListRequest::SetIsAsc(const int64_t& _isAsc)
{
    m_isAsc = _isAsc;
    m_isAscHasBeenSet = true;
}

bool DescribeLiveStreamEventListRequest::IsAscHasBeenSet() const
{
    return m_isAscHasBeenSet;
}


