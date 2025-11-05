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

#include <tencentcloud/gme/v20180711/model/DescribeAuditResultExternalRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gme::V20180711::Model;
using namespace std;

DescribeAuditResultExternalRequest::DescribeAuditResultExternalRequest() :
    m_bizIdHasBeenSet(false),
    m_pageNoHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_beginTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_minRateHasBeenSet(false),
    m_maxRateHasBeenSet(false),
    m_openIdHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_roomIdHasBeenSet(false)
{
}

string DescribeAuditResultExternalRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_bizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_bizId, allocator);
    }

    if (m_pageNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageNo, allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_beginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_beginTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endTime, allocator);
    }

    if (m_minRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinRate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_minRate, allocator);
    }

    if (m_maxRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxRate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxRate, allocator);
    }

    if (m_openIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_openId.c_str(), allocator).Move(), allocator);
    }

    if (m_labelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Label";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_label.c_str(), allocator).Move(), allocator);
    }

    if (m_roomIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoomId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_roomId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeAuditResultExternalRequest::GetBizId() const
{
    return m_bizId;
}

void DescribeAuditResultExternalRequest::SetBizId(const int64_t& _bizId)
{
    m_bizId = _bizId;
    m_bizIdHasBeenSet = true;
}

bool DescribeAuditResultExternalRequest::BizIdHasBeenSet() const
{
    return m_bizIdHasBeenSet;
}

int64_t DescribeAuditResultExternalRequest::GetPageNo() const
{
    return m_pageNo;
}

void DescribeAuditResultExternalRequest::SetPageNo(const int64_t& _pageNo)
{
    m_pageNo = _pageNo;
    m_pageNoHasBeenSet = true;
}

bool DescribeAuditResultExternalRequest::PageNoHasBeenSet() const
{
    return m_pageNoHasBeenSet;
}

int64_t DescribeAuditResultExternalRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeAuditResultExternalRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeAuditResultExternalRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

int64_t DescribeAuditResultExternalRequest::GetBeginTime() const
{
    return m_beginTime;
}

void DescribeAuditResultExternalRequest::SetBeginTime(const int64_t& _beginTime)
{
    m_beginTime = _beginTime;
    m_beginTimeHasBeenSet = true;
}

bool DescribeAuditResultExternalRequest::BeginTimeHasBeenSet() const
{
    return m_beginTimeHasBeenSet;
}

int64_t DescribeAuditResultExternalRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeAuditResultExternalRequest::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeAuditResultExternalRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t DescribeAuditResultExternalRequest::GetMinRate() const
{
    return m_minRate;
}

void DescribeAuditResultExternalRequest::SetMinRate(const int64_t& _minRate)
{
    m_minRate = _minRate;
    m_minRateHasBeenSet = true;
}

bool DescribeAuditResultExternalRequest::MinRateHasBeenSet() const
{
    return m_minRateHasBeenSet;
}

int64_t DescribeAuditResultExternalRequest::GetMaxRate() const
{
    return m_maxRate;
}

void DescribeAuditResultExternalRequest::SetMaxRate(const int64_t& _maxRate)
{
    m_maxRate = _maxRate;
    m_maxRateHasBeenSet = true;
}

bool DescribeAuditResultExternalRequest::MaxRateHasBeenSet() const
{
    return m_maxRateHasBeenSet;
}

string DescribeAuditResultExternalRequest::GetOpenId() const
{
    return m_openId;
}

void DescribeAuditResultExternalRequest::SetOpenId(const string& _openId)
{
    m_openId = _openId;
    m_openIdHasBeenSet = true;
}

bool DescribeAuditResultExternalRequest::OpenIdHasBeenSet() const
{
    return m_openIdHasBeenSet;
}

string DescribeAuditResultExternalRequest::GetLabel() const
{
    return m_label;
}

void DescribeAuditResultExternalRequest::SetLabel(const string& _label)
{
    m_label = _label;
    m_labelHasBeenSet = true;
}

bool DescribeAuditResultExternalRequest::LabelHasBeenSet() const
{
    return m_labelHasBeenSet;
}

string DescribeAuditResultExternalRequest::GetRoomId() const
{
    return m_roomId;
}

void DescribeAuditResultExternalRequest::SetRoomId(const string& _roomId)
{
    m_roomId = _roomId;
    m_roomIdHasBeenSet = true;
}

bool DescribeAuditResultExternalRequest::RoomIdHasBeenSet() const
{
    return m_roomIdHasBeenSet;
}


