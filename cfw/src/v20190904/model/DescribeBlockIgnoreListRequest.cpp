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

#include <tencentcloud/cfw/v20190904/model/DescribeBlockIgnoreListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

DescribeBlockIgnoreListRequest::DescribeBlockIgnoreListRequest() :
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_directionHasBeenSet(false),
    m_orderHasBeenSet(false),
    m_byHasBeenSet(false),
    m_searchValueHasBeenSet(false),
    m_ruleTypeHasBeenSet(false),
    m_showTypeHasBeenSet(false)
{
}

string DescribeBlockIgnoreListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_directionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Direction";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_direction.c_str(), allocator).Move(), allocator);
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

    if (m_searchValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchValue";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_searchValue.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ruleType, allocator);
    }

    if (m_showTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShowType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_showType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeBlockIgnoreListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeBlockIgnoreListRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeBlockIgnoreListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeBlockIgnoreListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeBlockIgnoreListRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeBlockIgnoreListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribeBlockIgnoreListRequest::GetDirection() const
{
    return m_direction;
}

void DescribeBlockIgnoreListRequest::SetDirection(const string& _direction)
{
    m_direction = _direction;
    m_directionHasBeenSet = true;
}

bool DescribeBlockIgnoreListRequest::DirectionHasBeenSet() const
{
    return m_directionHasBeenSet;
}

string DescribeBlockIgnoreListRequest::GetOrder() const
{
    return m_order;
}

void DescribeBlockIgnoreListRequest::SetOrder(const string& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool DescribeBlockIgnoreListRequest::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}

string DescribeBlockIgnoreListRequest::GetBy() const
{
    return m_by;
}

void DescribeBlockIgnoreListRequest::SetBy(const string& _by)
{
    m_by = _by;
    m_byHasBeenSet = true;
}

bool DescribeBlockIgnoreListRequest::ByHasBeenSet() const
{
    return m_byHasBeenSet;
}

string DescribeBlockIgnoreListRequest::GetSearchValue() const
{
    return m_searchValue;
}

void DescribeBlockIgnoreListRequest::SetSearchValue(const string& _searchValue)
{
    m_searchValue = _searchValue;
    m_searchValueHasBeenSet = true;
}

bool DescribeBlockIgnoreListRequest::SearchValueHasBeenSet() const
{
    return m_searchValueHasBeenSet;
}

uint64_t DescribeBlockIgnoreListRequest::GetRuleType() const
{
    return m_ruleType;
}

void DescribeBlockIgnoreListRequest::SetRuleType(const uint64_t& _ruleType)
{
    m_ruleType = _ruleType;
    m_ruleTypeHasBeenSet = true;
}

bool DescribeBlockIgnoreListRequest::RuleTypeHasBeenSet() const
{
    return m_ruleTypeHasBeenSet;
}

string DescribeBlockIgnoreListRequest::GetShowType() const
{
    return m_showType;
}

void DescribeBlockIgnoreListRequest::SetShowType(const string& _showType)
{
    m_showType = _showType;
    m_showTypeHasBeenSet = true;
}

bool DescribeBlockIgnoreListRequest::ShowTypeHasBeenSet() const
{
    return m_showTypeHasBeenSet;
}


