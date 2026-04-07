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

#include <tencentcloud/mps/v20190612/model/DescribeStreamPackageLinearAssemblyProgramSchedulesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

DescribeStreamPackageLinearAssemblyProgramSchedulesRequest::DescribeStreamPackageLinearAssemblyProgramSchedulesRequest() :
    m_channelIdHasBeenSet(false),
    m_timeWindowHasBeenSet(false),
    m_pageNumHasBeenSet(false),
    m_pageSizeHasBeenSet(false)
{
}

string DescribeStreamPackageLinearAssemblyProgramSchedulesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_channelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channelId.c_str(), allocator).Move(), allocator);
    }

    if (m_timeWindowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeWindow";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeWindow, allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeStreamPackageLinearAssemblyProgramSchedulesRequest::GetChannelId() const
{
    return m_channelId;
}

void DescribeStreamPackageLinearAssemblyProgramSchedulesRequest::SetChannelId(const string& _channelId)
{
    m_channelId = _channelId;
    m_channelIdHasBeenSet = true;
}

bool DescribeStreamPackageLinearAssemblyProgramSchedulesRequest::ChannelIdHasBeenSet() const
{
    return m_channelIdHasBeenSet;
}

uint64_t DescribeStreamPackageLinearAssemblyProgramSchedulesRequest::GetTimeWindow() const
{
    return m_timeWindow;
}

void DescribeStreamPackageLinearAssemblyProgramSchedulesRequest::SetTimeWindow(const uint64_t& _timeWindow)
{
    m_timeWindow = _timeWindow;
    m_timeWindowHasBeenSet = true;
}

bool DescribeStreamPackageLinearAssemblyProgramSchedulesRequest::TimeWindowHasBeenSet() const
{
    return m_timeWindowHasBeenSet;
}

uint64_t DescribeStreamPackageLinearAssemblyProgramSchedulesRequest::GetPageNum() const
{
    return m_pageNum;
}

void DescribeStreamPackageLinearAssemblyProgramSchedulesRequest::SetPageNum(const uint64_t& _pageNum)
{
    m_pageNum = _pageNum;
    m_pageNumHasBeenSet = true;
}

bool DescribeStreamPackageLinearAssemblyProgramSchedulesRequest::PageNumHasBeenSet() const
{
    return m_pageNumHasBeenSet;
}

uint64_t DescribeStreamPackageLinearAssemblyProgramSchedulesRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeStreamPackageLinearAssemblyProgramSchedulesRequest::SetPageSize(const uint64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeStreamPackageLinearAssemblyProgramSchedulesRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}


