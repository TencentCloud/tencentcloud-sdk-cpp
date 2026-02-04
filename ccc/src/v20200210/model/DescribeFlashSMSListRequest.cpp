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

#include <tencentcloud/ccc/v20200210/model/DescribeFlashSMSListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

DescribeFlashSMSListRequest::DescribeFlashSMSListRequest() :
    m_sdkAppIdHasBeenSet(false),
    m_startTimestampHasBeenSet(false),
    m_endTimestampHasBeenSet(false),
    m_deliveryNumberHasBeenSet(false),
    m_servingNumberHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_deliveryStatusHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_pageNumberHasBeenSet(false)
{
}

string DescribeFlashSMSListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sdkAppId, allocator);
    }

    if (m_startTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTimestamp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startTimestamp, allocator);
    }

    if (m_endTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTimestamp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endTimestamp, allocator);
    }

    if (m_deliveryNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeliveryNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deliveryNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_servingNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServingNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_servingNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_deliveryStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeliveryStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deliveryStatus, allocator);
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


int64_t DescribeFlashSMSListRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void DescribeFlashSMSListRequest::SetSdkAppId(const int64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool DescribeFlashSMSListRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

int64_t DescribeFlashSMSListRequest::GetStartTimestamp() const
{
    return m_startTimestamp;
}

void DescribeFlashSMSListRequest::SetStartTimestamp(const int64_t& _startTimestamp)
{
    m_startTimestamp = _startTimestamp;
    m_startTimestampHasBeenSet = true;
}

bool DescribeFlashSMSListRequest::StartTimestampHasBeenSet() const
{
    return m_startTimestampHasBeenSet;
}

int64_t DescribeFlashSMSListRequest::GetEndTimestamp() const
{
    return m_endTimestamp;
}

void DescribeFlashSMSListRequest::SetEndTimestamp(const int64_t& _endTimestamp)
{
    m_endTimestamp = _endTimestamp;
    m_endTimestampHasBeenSet = true;
}

bool DescribeFlashSMSListRequest::EndTimestampHasBeenSet() const
{
    return m_endTimestampHasBeenSet;
}

string DescribeFlashSMSListRequest::GetDeliveryNumber() const
{
    return m_deliveryNumber;
}

void DescribeFlashSMSListRequest::SetDeliveryNumber(const string& _deliveryNumber)
{
    m_deliveryNumber = _deliveryNumber;
    m_deliveryNumberHasBeenSet = true;
}

bool DescribeFlashSMSListRequest::DeliveryNumberHasBeenSet() const
{
    return m_deliveryNumberHasBeenSet;
}

string DescribeFlashSMSListRequest::GetServingNumber() const
{
    return m_servingNumber;
}

void DescribeFlashSMSListRequest::SetServingNumber(const string& _servingNumber)
{
    m_servingNumber = _servingNumber;
    m_servingNumberHasBeenSet = true;
}

bool DescribeFlashSMSListRequest::ServingNumberHasBeenSet() const
{
    return m_servingNumberHasBeenSet;
}

string DescribeFlashSMSListRequest::GetSessionId() const
{
    return m_sessionId;
}

void DescribeFlashSMSListRequest::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool DescribeFlashSMSListRequest::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

int64_t DescribeFlashSMSListRequest::GetDeliveryStatus() const
{
    return m_deliveryStatus;
}

void DescribeFlashSMSListRequest::SetDeliveryStatus(const int64_t& _deliveryStatus)
{
    m_deliveryStatus = _deliveryStatus;
    m_deliveryStatusHasBeenSet = true;
}

bool DescribeFlashSMSListRequest::DeliveryStatusHasBeenSet() const
{
    return m_deliveryStatusHasBeenSet;
}

int64_t DescribeFlashSMSListRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeFlashSMSListRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeFlashSMSListRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

int64_t DescribeFlashSMSListRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void DescribeFlashSMSListRequest::SetPageNumber(const int64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool DescribeFlashSMSListRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}


