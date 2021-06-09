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

#include <tencentcloud/youmall/v20180228/model/DescribeHistoryNetworkInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Youmall::V20180228::Model;
using namespace std;

DescribeHistoryNetworkInfoRequest::DescribeHistoryNetworkInfoRequest() :
    m_timeHasBeenSet(false),
    m_companyIdHasBeenSet(false),
    m_shopIdHasBeenSet(false),
    m_startDayHasBeenSet(false),
    m_endDayHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false)
{
}

string DescribeHistoryNetworkInfoRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_time, allocator);
    }

    if (m_companyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompanyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_companyId.c_str(), allocator).Move(), allocator);
    }

    if (m_shopIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShopId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_shopId, allocator);
    }

    if (m_startDayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartDay";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startDay.c_str(), allocator).Move(), allocator);
    }

    if (m_endDayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndDay";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endDay.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeHistoryNetworkInfoRequest::GetTime() const
{
    return m_time;
}

void DescribeHistoryNetworkInfoRequest::SetTime(const int64_t& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool DescribeHistoryNetworkInfoRequest::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

string DescribeHistoryNetworkInfoRequest::GetCompanyId() const
{
    return m_companyId;
}

void DescribeHistoryNetworkInfoRequest::SetCompanyId(const string& _companyId)
{
    m_companyId = _companyId;
    m_companyIdHasBeenSet = true;
}

bool DescribeHistoryNetworkInfoRequest::CompanyIdHasBeenSet() const
{
    return m_companyIdHasBeenSet;
}

int64_t DescribeHistoryNetworkInfoRequest::GetShopId() const
{
    return m_shopId;
}

void DescribeHistoryNetworkInfoRequest::SetShopId(const int64_t& _shopId)
{
    m_shopId = _shopId;
    m_shopIdHasBeenSet = true;
}

bool DescribeHistoryNetworkInfoRequest::ShopIdHasBeenSet() const
{
    return m_shopIdHasBeenSet;
}

string DescribeHistoryNetworkInfoRequest::GetStartDay() const
{
    return m_startDay;
}

void DescribeHistoryNetworkInfoRequest::SetStartDay(const string& _startDay)
{
    m_startDay = _startDay;
    m_startDayHasBeenSet = true;
}

bool DescribeHistoryNetworkInfoRequest::StartDayHasBeenSet() const
{
    return m_startDayHasBeenSet;
}

string DescribeHistoryNetworkInfoRequest::GetEndDay() const
{
    return m_endDay;
}

void DescribeHistoryNetworkInfoRequest::SetEndDay(const string& _endDay)
{
    m_endDay = _endDay;
    m_endDayHasBeenSet = true;
}

bool DescribeHistoryNetworkInfoRequest::EndDayHasBeenSet() const
{
    return m_endDayHasBeenSet;
}

int64_t DescribeHistoryNetworkInfoRequest::GetLimit() const
{
    return m_limit;
}

void DescribeHistoryNetworkInfoRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeHistoryNetworkInfoRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeHistoryNetworkInfoRequest::GetOffset() const
{
    return m_offset;
}

void DescribeHistoryNetworkInfoRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeHistoryNetworkInfoRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}


