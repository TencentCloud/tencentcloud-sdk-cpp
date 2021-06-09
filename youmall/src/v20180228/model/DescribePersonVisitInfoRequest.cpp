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

#include <tencentcloud/youmall/v20180228/model/DescribePersonVisitInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Youmall::V20180228::Model;
using namespace std;

DescribePersonVisitInfoRequest::DescribePersonVisitInfoRequest() :
    m_companyIdHasBeenSet(false),
    m_shopIdHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_startDateHasBeenSet(false),
    m_endDateHasBeenSet(false),
    m_pictureExpiresHasBeenSet(false),
    m_startDateTimeHasBeenSet(false),
    m_endDateTimeHasBeenSet(false)
{
}

string DescribePersonVisitInfoRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_startDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startDate.c_str(), allocator).Move(), allocator);
    }

    if (m_endDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endDate.c_str(), allocator).Move(), allocator);
    }

    if (m_pictureExpiresHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PictureExpires";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pictureExpires, allocator);
    }

    if (m_startDateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartDateTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startDateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endDateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndDateTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endDateTime.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribePersonVisitInfoRequest::GetCompanyId() const
{
    return m_companyId;
}

void DescribePersonVisitInfoRequest::SetCompanyId(const string& _companyId)
{
    m_companyId = _companyId;
    m_companyIdHasBeenSet = true;
}

bool DescribePersonVisitInfoRequest::CompanyIdHasBeenSet() const
{
    return m_companyIdHasBeenSet;
}

uint64_t DescribePersonVisitInfoRequest::GetShopId() const
{
    return m_shopId;
}

void DescribePersonVisitInfoRequest::SetShopId(const uint64_t& _shopId)
{
    m_shopId = _shopId;
    m_shopIdHasBeenSet = true;
}

bool DescribePersonVisitInfoRequest::ShopIdHasBeenSet() const
{
    return m_shopIdHasBeenSet;
}

uint64_t DescribePersonVisitInfoRequest::GetOffset() const
{
    return m_offset;
}

void DescribePersonVisitInfoRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribePersonVisitInfoRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribePersonVisitInfoRequest::GetLimit() const
{
    return m_limit;
}

void DescribePersonVisitInfoRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribePersonVisitInfoRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribePersonVisitInfoRequest::GetStartDate() const
{
    return m_startDate;
}

void DescribePersonVisitInfoRequest::SetStartDate(const string& _startDate)
{
    m_startDate = _startDate;
    m_startDateHasBeenSet = true;
}

bool DescribePersonVisitInfoRequest::StartDateHasBeenSet() const
{
    return m_startDateHasBeenSet;
}

string DescribePersonVisitInfoRequest::GetEndDate() const
{
    return m_endDate;
}

void DescribePersonVisitInfoRequest::SetEndDate(const string& _endDate)
{
    m_endDate = _endDate;
    m_endDateHasBeenSet = true;
}

bool DescribePersonVisitInfoRequest::EndDateHasBeenSet() const
{
    return m_endDateHasBeenSet;
}

uint64_t DescribePersonVisitInfoRequest::GetPictureExpires() const
{
    return m_pictureExpires;
}

void DescribePersonVisitInfoRequest::SetPictureExpires(const uint64_t& _pictureExpires)
{
    m_pictureExpires = _pictureExpires;
    m_pictureExpiresHasBeenSet = true;
}

bool DescribePersonVisitInfoRequest::PictureExpiresHasBeenSet() const
{
    return m_pictureExpiresHasBeenSet;
}

string DescribePersonVisitInfoRequest::GetStartDateTime() const
{
    return m_startDateTime;
}

void DescribePersonVisitInfoRequest::SetStartDateTime(const string& _startDateTime)
{
    m_startDateTime = _startDateTime;
    m_startDateTimeHasBeenSet = true;
}

bool DescribePersonVisitInfoRequest::StartDateTimeHasBeenSet() const
{
    return m_startDateTimeHasBeenSet;
}

string DescribePersonVisitInfoRequest::GetEndDateTime() const
{
    return m_endDateTime;
}

void DescribePersonVisitInfoRequest::SetEndDateTime(const string& _endDateTime)
{
    m_endDateTime = _endDateTime;
    m_endDateTimeHasBeenSet = true;
}

bool DescribePersonVisitInfoRequest::EndDateTimeHasBeenSet() const
{
    return m_endDateTimeHasBeenSet;
}


