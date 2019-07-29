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

#include <tencentcloud/live/v20180801/model/DescribeVisitTopSumInfoListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Live::V20180801::Model;
using namespace rapidjson;
using namespace std;

DescribeVisitTopSumInfoListRequest::DescribeVisitTopSumInfoListRequest() :
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_topIndexHasBeenSet(false),
    m_playDomainsHasBeenSet(false),
    m_pageNumHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_orderParamHasBeenSet(false)
{
}

string DescribeVisitTopSumInfoListRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_startTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_topIndexHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TopIndex";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_topIndex.c_str(), allocator).Move(), allocator);
    }

    if (m_playDomainsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PlayDomains";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_playDomains.begin(); itr != m_playDomains.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

    if (m_orderParamHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OrderParam";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_orderParam.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeVisitTopSumInfoListRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeVisitTopSumInfoListRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeVisitTopSumInfoListRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeVisitTopSumInfoListRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeVisitTopSumInfoListRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeVisitTopSumInfoListRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeVisitTopSumInfoListRequest::GetTopIndex() const
{
    return m_topIndex;
}

void DescribeVisitTopSumInfoListRequest::SetTopIndex(const string& _topIndex)
{
    m_topIndex = _topIndex;
    m_topIndexHasBeenSet = true;
}

bool DescribeVisitTopSumInfoListRequest::TopIndexHasBeenSet() const
{
    return m_topIndexHasBeenSet;
}

vector<string> DescribeVisitTopSumInfoListRequest::GetPlayDomains() const
{
    return m_playDomains;
}

void DescribeVisitTopSumInfoListRequest::SetPlayDomains(const vector<string>& _playDomains)
{
    m_playDomains = _playDomains;
    m_playDomainsHasBeenSet = true;
}

bool DescribeVisitTopSumInfoListRequest::PlayDomainsHasBeenSet() const
{
    return m_playDomainsHasBeenSet;
}

uint64_t DescribeVisitTopSumInfoListRequest::GetPageNum() const
{
    return m_pageNum;
}

void DescribeVisitTopSumInfoListRequest::SetPageNum(const uint64_t& _pageNum)
{
    m_pageNum = _pageNum;
    m_pageNumHasBeenSet = true;
}

bool DescribeVisitTopSumInfoListRequest::PageNumHasBeenSet() const
{
    return m_pageNumHasBeenSet;
}

uint64_t DescribeVisitTopSumInfoListRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeVisitTopSumInfoListRequest::SetPageSize(const uint64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeVisitTopSumInfoListRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

string DescribeVisitTopSumInfoListRequest::GetOrderParam() const
{
    return m_orderParam;
}

void DescribeVisitTopSumInfoListRequest::SetOrderParam(const string& _orderParam)
{
    m_orderParam = _orderParam;
    m_orderParamHasBeenSet = true;
}

bool DescribeVisitTopSumInfoListRequest::OrderParamHasBeenSet() const
{
    return m_orderParamHasBeenSet;
}


