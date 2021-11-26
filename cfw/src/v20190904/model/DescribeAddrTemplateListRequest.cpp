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

#include <tencentcloud/cfw/v20190904/model/DescribeAddrTemplateListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

DescribeAddrTemplateListRequest::DescribeAddrTemplateListRequest() :
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_byHasBeenSet(false),
    m_orderHasBeenSet(false),
    m_searchValueHasBeenSet(false)
{
}

string DescribeAddrTemplateListRequest::ToJsonString() const
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

    if (m_byHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "By";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_by.c_str(), allocator).Move(), allocator);
    }

    if (m_orderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Order";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_order.c_str(), allocator).Move(), allocator);
    }

    if (m_searchValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchValue";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_searchValue.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeAddrTemplateListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeAddrTemplateListRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeAddrTemplateListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeAddrTemplateListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeAddrTemplateListRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeAddrTemplateListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeAddrTemplateListRequest::GetBy() const
{
    return m_by;
}

void DescribeAddrTemplateListRequest::SetBy(const string& _by)
{
    m_by = _by;
    m_byHasBeenSet = true;
}

bool DescribeAddrTemplateListRequest::ByHasBeenSet() const
{
    return m_byHasBeenSet;
}

string DescribeAddrTemplateListRequest::GetOrder() const
{
    return m_order;
}

void DescribeAddrTemplateListRequest::SetOrder(const string& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool DescribeAddrTemplateListRequest::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}

string DescribeAddrTemplateListRequest::GetSearchValue() const
{
    return m_searchValue;
}

void DescribeAddrTemplateListRequest::SetSearchValue(const string& _searchValue)
{
    m_searchValue = _searchValue;
    m_searchValueHasBeenSet = true;
}

bool DescribeAddrTemplateListRequest::SearchValueHasBeenSet() const
{
    return m_searchValueHasBeenSet;
}


