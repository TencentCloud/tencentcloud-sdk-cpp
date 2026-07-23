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

#include <tencentcloud/cfw/v20190904/model/DescribeBlockListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

DescribeBlockListRequest::DescribeBlockListRequest() :
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_statTimeSpanHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_searchValueHasBeenSet(false),
    m_orderHasBeenSet(false),
    m_byHasBeenSet(false),
    m_directionHasBeenSet(false),
    m_byPassHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_countryHasBeenSet(false),
    m_assetIdHasBeenSet(false),
    m_logSourceHasBeenSet(false)
{
}

string DescribeBlockListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_statTimeSpanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatTimeSpan";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_statTimeSpan, allocator);
    }

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

    if (m_searchValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchValue";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_searchValue.c_str(), allocator).Move(), allocator);
    }

    if (m_orderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Order";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_order.c_str(), allocator).Move(), allocator);
    }

    if (m_byHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "By";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_by.c_str(), allocator).Move(), allocator);
    }

    if (m_directionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Direction";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_direction.c_str(), allocator).Move(), allocator);
    }

    if (m_byPassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ByPass";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_byPass.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_countryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Country";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_country.c_str(), allocator).Move(), allocator);
    }

    if (m_assetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_assetId.c_str(), allocator).Move(), allocator);
    }

    if (m_logSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogSource";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logSource.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeBlockListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeBlockListRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeBlockListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeBlockListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeBlockListRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeBlockListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeBlockListRequest::GetStatTimeSpan() const
{
    return m_statTimeSpan;
}

void DescribeBlockListRequest::SetStatTimeSpan(const int64_t& _statTimeSpan)
{
    m_statTimeSpan = _statTimeSpan;
    m_statTimeSpanHasBeenSet = true;
}

bool DescribeBlockListRequest::StatTimeSpanHasBeenSet() const
{
    return m_statTimeSpanHasBeenSet;
}

string DescribeBlockListRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeBlockListRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeBlockListRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeBlockListRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeBlockListRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeBlockListRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeBlockListRequest::GetSearchValue() const
{
    return m_searchValue;
}

void DescribeBlockListRequest::SetSearchValue(const string& _searchValue)
{
    m_searchValue = _searchValue;
    m_searchValueHasBeenSet = true;
}

bool DescribeBlockListRequest::SearchValueHasBeenSet() const
{
    return m_searchValueHasBeenSet;
}

string DescribeBlockListRequest::GetOrder() const
{
    return m_order;
}

void DescribeBlockListRequest::SetOrder(const string& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool DescribeBlockListRequest::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}

string DescribeBlockListRequest::GetBy() const
{
    return m_by;
}

void DescribeBlockListRequest::SetBy(const string& _by)
{
    m_by = _by;
    m_byHasBeenSet = true;
}

bool DescribeBlockListRequest::ByHasBeenSet() const
{
    return m_byHasBeenSet;
}

string DescribeBlockListRequest::GetDirection() const
{
    return m_direction;
}

void DescribeBlockListRequest::SetDirection(const string& _direction)
{
    m_direction = _direction;
    m_directionHasBeenSet = true;
}

bool DescribeBlockListRequest::DirectionHasBeenSet() const
{
    return m_directionHasBeenSet;
}

string DescribeBlockListRequest::GetByPass() const
{
    return m_byPass;
}

void DescribeBlockListRequest::SetByPass(const string& _byPass)
{
    m_byPass = _byPass;
    m_byPassHasBeenSet = true;
}

bool DescribeBlockListRequest::ByPassHasBeenSet() const
{
    return m_byPassHasBeenSet;
}

string DescribeBlockListRequest::GetSource() const
{
    return m_source;
}

void DescribeBlockListRequest::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool DescribeBlockListRequest::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string DescribeBlockListRequest::GetCountry() const
{
    return m_country;
}

void DescribeBlockListRequest::SetCountry(const string& _country)
{
    m_country = _country;
    m_countryHasBeenSet = true;
}

bool DescribeBlockListRequest::CountryHasBeenSet() const
{
    return m_countryHasBeenSet;
}

string DescribeBlockListRequest::GetAssetId() const
{
    return m_assetId;
}

void DescribeBlockListRequest::SetAssetId(const string& _assetId)
{
    m_assetId = _assetId;
    m_assetIdHasBeenSet = true;
}

bool DescribeBlockListRequest::AssetIdHasBeenSet() const
{
    return m_assetIdHasBeenSet;
}

string DescribeBlockListRequest::GetLogSource() const
{
    return m_logSource;
}

void DescribeBlockListRequest::SetLogSource(const string& _logSource)
{
    m_logSource = _logSource;
    m_logSourceHasBeenSet = true;
}

bool DescribeBlockListRequest::LogSourceHasBeenSet() const
{
    return m_logSourceHasBeenSet;
}


