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

#include <tencentcloud/vpc/v20170312/model/DescribeServiceTemplatesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

DescribeServiceTemplatesRequest::DescribeServiceTemplatesRequest() :
    m_filtersHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_needMemberInfoHasBeenSet(false),
    m_orderFieldHasBeenSet(false),
    m_orderDirectionHasBeenSet(false),
    m_memberOrderFieldHasBeenSet(false),
    m_memberOrderDirectionHasBeenSet(false)
{
}

string DescribeServiceTemplatesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_filtersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_filters.begin(); itr != m_filters.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_offset.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_limit.c_str(), allocator).Move(), allocator);
    }

    if (m_needMemberInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedMemberInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_needMemberInfo, allocator);
    }

    if (m_orderFieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderField";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderField.c_str(), allocator).Move(), allocator);
    }

    if (m_orderDirectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderDirection";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderDirection.c_str(), allocator).Move(), allocator);
    }

    if (m_memberOrderFieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberOrderField";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_memberOrderField.c_str(), allocator).Move(), allocator);
    }

    if (m_memberOrderDirectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberOrderDirection";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_memberOrderDirection.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<Filter> DescribeServiceTemplatesRequest::GetFilters() const
{
    return m_filters;
}

void DescribeServiceTemplatesRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeServiceTemplatesRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

string DescribeServiceTemplatesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeServiceTemplatesRequest::SetOffset(const string& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeServiceTemplatesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribeServiceTemplatesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeServiceTemplatesRequest::SetLimit(const string& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeServiceTemplatesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

bool DescribeServiceTemplatesRequest::GetNeedMemberInfo() const
{
    return m_needMemberInfo;
}

void DescribeServiceTemplatesRequest::SetNeedMemberInfo(const bool& _needMemberInfo)
{
    m_needMemberInfo = _needMemberInfo;
    m_needMemberInfoHasBeenSet = true;
}

bool DescribeServiceTemplatesRequest::NeedMemberInfoHasBeenSet() const
{
    return m_needMemberInfoHasBeenSet;
}

string DescribeServiceTemplatesRequest::GetOrderField() const
{
    return m_orderField;
}

void DescribeServiceTemplatesRequest::SetOrderField(const string& _orderField)
{
    m_orderField = _orderField;
    m_orderFieldHasBeenSet = true;
}

bool DescribeServiceTemplatesRequest::OrderFieldHasBeenSet() const
{
    return m_orderFieldHasBeenSet;
}

string DescribeServiceTemplatesRequest::GetOrderDirection() const
{
    return m_orderDirection;
}

void DescribeServiceTemplatesRequest::SetOrderDirection(const string& _orderDirection)
{
    m_orderDirection = _orderDirection;
    m_orderDirectionHasBeenSet = true;
}

bool DescribeServiceTemplatesRequest::OrderDirectionHasBeenSet() const
{
    return m_orderDirectionHasBeenSet;
}

string DescribeServiceTemplatesRequest::GetMemberOrderField() const
{
    return m_memberOrderField;
}

void DescribeServiceTemplatesRequest::SetMemberOrderField(const string& _memberOrderField)
{
    m_memberOrderField = _memberOrderField;
    m_memberOrderFieldHasBeenSet = true;
}

bool DescribeServiceTemplatesRequest::MemberOrderFieldHasBeenSet() const
{
    return m_memberOrderFieldHasBeenSet;
}

string DescribeServiceTemplatesRequest::GetMemberOrderDirection() const
{
    return m_memberOrderDirection;
}

void DescribeServiceTemplatesRequest::SetMemberOrderDirection(const string& _memberOrderDirection)
{
    m_memberOrderDirection = _memberOrderDirection;
    m_memberOrderDirectionHasBeenSet = true;
}

bool DescribeServiceTemplatesRequest::MemberOrderDirectionHasBeenSet() const
{
    return m_memberOrderDirectionHasBeenSet;
}


