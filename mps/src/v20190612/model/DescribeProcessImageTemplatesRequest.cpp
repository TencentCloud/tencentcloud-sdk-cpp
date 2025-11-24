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

#include <tencentcloud/mps/v20190612/model/DescribeProcessImageTemplatesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

DescribeProcessImageTemplatesRequest::DescribeProcessImageTemplatesRequest() :
    m_definitionsHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_orderTypeHasBeenSet(false),
    m_orderByHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

string DescribeProcessImageTemplatesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_definitionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Definitions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_definitions.begin(); itr != m_definitions.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
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

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_orderTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_orderType, allocator);
    }

    if (m_orderByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderBy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderBy.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<int64_t> DescribeProcessImageTemplatesRequest::GetDefinitions() const
{
    return m_definitions;
}

void DescribeProcessImageTemplatesRequest::SetDefinitions(const vector<int64_t>& _definitions)
{
    m_definitions = _definitions;
    m_definitionsHasBeenSet = true;
}

bool DescribeProcessImageTemplatesRequest::DefinitionsHasBeenSet() const
{
    return m_definitionsHasBeenSet;
}

uint64_t DescribeProcessImageTemplatesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeProcessImageTemplatesRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeProcessImageTemplatesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeProcessImageTemplatesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeProcessImageTemplatesRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeProcessImageTemplatesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeProcessImageTemplatesRequest::GetName() const
{
    return m_name;
}

void DescribeProcessImageTemplatesRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DescribeProcessImageTemplatesRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t DescribeProcessImageTemplatesRequest::GetOrderType() const
{
    return m_orderType;
}

void DescribeProcessImageTemplatesRequest::SetOrderType(const int64_t& _orderType)
{
    m_orderType = _orderType;
    m_orderTypeHasBeenSet = true;
}

bool DescribeProcessImageTemplatesRequest::OrderTypeHasBeenSet() const
{
    return m_orderTypeHasBeenSet;
}

string DescribeProcessImageTemplatesRequest::GetOrderBy() const
{
    return m_orderBy;
}

void DescribeProcessImageTemplatesRequest::SetOrderBy(const string& _orderBy)
{
    m_orderBy = _orderBy;
    m_orderByHasBeenSet = true;
}

bool DescribeProcessImageTemplatesRequest::OrderByHasBeenSet() const
{
    return m_orderByHasBeenSet;
}

string DescribeProcessImageTemplatesRequest::GetType() const
{
    return m_type;
}

void DescribeProcessImageTemplatesRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DescribeProcessImageTemplatesRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}


