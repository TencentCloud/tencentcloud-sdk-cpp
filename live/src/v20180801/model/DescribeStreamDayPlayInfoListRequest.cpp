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

#include <tencentcloud/live/v20180801/model/DescribeStreamDayPlayInfoListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Live::V20180801::Model;
using namespace rapidjson;
using namespace std;

DescribeStreamDayPlayInfoListRequest::DescribeStreamDayPlayInfoListRequest() :
    m_dayTimeHasBeenSet(false),
    m_playDomainHasBeenSet(false),
    m_pageNumHasBeenSet(false),
    m_pageSizeHasBeenSet(false)
{
}

string DescribeStreamDayPlayInfoListRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dayTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DayTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_dayTime.c_str(), allocator).Move(), allocator);
    }

    if (m_playDomainHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PlayDomain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_playDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_pageNumHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PageNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageNum, allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeStreamDayPlayInfoListRequest::GetDayTime() const
{
    return m_dayTime;
}

void DescribeStreamDayPlayInfoListRequest::SetDayTime(const string& _dayTime)
{
    m_dayTime = _dayTime;
    m_dayTimeHasBeenSet = true;
}

bool DescribeStreamDayPlayInfoListRequest::DayTimeHasBeenSet() const
{
    return m_dayTimeHasBeenSet;
}

string DescribeStreamDayPlayInfoListRequest::GetPlayDomain() const
{
    return m_playDomain;
}

void DescribeStreamDayPlayInfoListRequest::SetPlayDomain(const string& _playDomain)
{
    m_playDomain = _playDomain;
    m_playDomainHasBeenSet = true;
}

bool DescribeStreamDayPlayInfoListRequest::PlayDomainHasBeenSet() const
{
    return m_playDomainHasBeenSet;
}

uint64_t DescribeStreamDayPlayInfoListRequest::GetPageNum() const
{
    return m_pageNum;
}

void DescribeStreamDayPlayInfoListRequest::SetPageNum(const uint64_t& _pageNum)
{
    m_pageNum = _pageNum;
    m_pageNumHasBeenSet = true;
}

bool DescribeStreamDayPlayInfoListRequest::PageNumHasBeenSet() const
{
    return m_pageNumHasBeenSet;
}

uint64_t DescribeStreamDayPlayInfoListRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeStreamDayPlayInfoListRequest::SetPageSize(const uint64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeStreamDayPlayInfoListRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}


