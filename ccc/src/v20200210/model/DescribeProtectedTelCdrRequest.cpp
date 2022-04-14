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

#include <tencentcloud/ccc/v20200210/model/DescribeProtectedTelCdrRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

DescribeProtectedTelCdrRequest::DescribeProtectedTelCdrRequest() :
    m_startTimeStampHasBeenSet(false),
    m_endTimeStampHasBeenSet(false),
    m_sdkAppIdHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_pageNumberHasBeenSet(false)
{
}

string DescribeProtectedTelCdrRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_startTimeStampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTimeStamp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startTimeStamp, allocator);
    }

    if (m_endTimeStampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTimeStamp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endTimeStamp, allocator);
    }

    if (m_sdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sdkAppId, allocator);
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


int64_t DescribeProtectedTelCdrRequest::GetStartTimeStamp() const
{
    return m_startTimeStamp;
}

void DescribeProtectedTelCdrRequest::SetStartTimeStamp(const int64_t& _startTimeStamp)
{
    m_startTimeStamp = _startTimeStamp;
    m_startTimeStampHasBeenSet = true;
}

bool DescribeProtectedTelCdrRequest::StartTimeStampHasBeenSet() const
{
    return m_startTimeStampHasBeenSet;
}

int64_t DescribeProtectedTelCdrRequest::GetEndTimeStamp() const
{
    return m_endTimeStamp;
}

void DescribeProtectedTelCdrRequest::SetEndTimeStamp(const int64_t& _endTimeStamp)
{
    m_endTimeStamp = _endTimeStamp;
    m_endTimeStampHasBeenSet = true;
}

bool DescribeProtectedTelCdrRequest::EndTimeStampHasBeenSet() const
{
    return m_endTimeStampHasBeenSet;
}

uint64_t DescribeProtectedTelCdrRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void DescribeProtectedTelCdrRequest::SetSdkAppId(const uint64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool DescribeProtectedTelCdrRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

uint64_t DescribeProtectedTelCdrRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeProtectedTelCdrRequest::SetPageSize(const uint64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeProtectedTelCdrRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

uint64_t DescribeProtectedTelCdrRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void DescribeProtectedTelCdrRequest::SetPageNumber(const uint64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool DescribeProtectedTelCdrRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}


