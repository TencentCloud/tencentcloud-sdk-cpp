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

#include <tencentcloud/mps/v20190612/model/DescribeAsrHotwordsListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

DescribeAsrHotwordsListRequest::DescribeAsrHotwordsListRequest() :
    m_hotwordsIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_orderTypeHasBeenSet(false),
    m_orderByHasBeenSet(false),
    m_typesHasBeenSet(false)
{
}

string DescribeAsrHotwordsListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_hotwordsIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HotwordsId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_hotwordsId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
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

    if (m_typesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Types";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_types.begin(); itr != m_types.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeAsrHotwordsListRequest::GetHotwordsId() const
{
    return m_hotwordsId;
}

void DescribeAsrHotwordsListRequest::SetHotwordsId(const string& _hotwordsId)
{
    m_hotwordsId = _hotwordsId;
    m_hotwordsIdHasBeenSet = true;
}

bool DescribeAsrHotwordsListRequest::HotwordsIdHasBeenSet() const
{
    return m_hotwordsIdHasBeenSet;
}

string DescribeAsrHotwordsListRequest::GetName() const
{
    return m_name;
}

void DescribeAsrHotwordsListRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DescribeAsrHotwordsListRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t DescribeAsrHotwordsListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeAsrHotwordsListRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeAsrHotwordsListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeAsrHotwordsListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeAsrHotwordsListRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeAsrHotwordsListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t DescribeAsrHotwordsListRequest::GetOrderType() const
{
    return m_orderType;
}

void DescribeAsrHotwordsListRequest::SetOrderType(const uint64_t& _orderType)
{
    m_orderType = _orderType;
    m_orderTypeHasBeenSet = true;
}

bool DescribeAsrHotwordsListRequest::OrderTypeHasBeenSet() const
{
    return m_orderTypeHasBeenSet;
}

string DescribeAsrHotwordsListRequest::GetOrderBy() const
{
    return m_orderBy;
}

void DescribeAsrHotwordsListRequest::SetOrderBy(const string& _orderBy)
{
    m_orderBy = _orderBy;
    m_orderByHasBeenSet = true;
}

bool DescribeAsrHotwordsListRequest::OrderByHasBeenSet() const
{
    return m_orderByHasBeenSet;
}

vector<uint64_t> DescribeAsrHotwordsListRequest::GetTypes() const
{
    return m_types;
}

void DescribeAsrHotwordsListRequest::SetTypes(const vector<uint64_t>& _types)
{
    m_types = _types;
    m_typesHasBeenSet = true;
}

bool DescribeAsrHotwordsListRequest::TypesHasBeenSet() const
{
    return m_typesHasBeenSet;
}


