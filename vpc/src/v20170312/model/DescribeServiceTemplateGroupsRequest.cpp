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

#include <tencentcloud/vpc/v20170312/model/DescribeServiceTemplateGroupsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

DescribeServiceTemplateGroupsRequest::DescribeServiceTemplateGroupsRequest() :
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

string DescribeServiceTemplateGroupsRequest::ToJsonString() const
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


vector<Filter> DescribeServiceTemplateGroupsRequest::GetFilters() const
{
    return m_filters;
}

void DescribeServiceTemplateGroupsRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeServiceTemplateGroupsRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

string DescribeServiceTemplateGroupsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeServiceTemplateGroupsRequest::SetOffset(const string& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeServiceTemplateGroupsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribeServiceTemplateGroupsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeServiceTemplateGroupsRequest::SetLimit(const string& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeServiceTemplateGroupsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

bool DescribeServiceTemplateGroupsRequest::GetNeedMemberInfo() const
{
    return m_needMemberInfo;
}

void DescribeServiceTemplateGroupsRequest::SetNeedMemberInfo(const bool& _needMemberInfo)
{
    m_needMemberInfo = _needMemberInfo;
    m_needMemberInfoHasBeenSet = true;
}

bool DescribeServiceTemplateGroupsRequest::NeedMemberInfoHasBeenSet() const
{
    return m_needMemberInfoHasBeenSet;
}

string DescribeServiceTemplateGroupsRequest::GetOrderField() const
{
    return m_orderField;
}

void DescribeServiceTemplateGroupsRequest::SetOrderField(const string& _orderField)
{
    m_orderField = _orderField;
    m_orderFieldHasBeenSet = true;
}

bool DescribeServiceTemplateGroupsRequest::OrderFieldHasBeenSet() const
{
    return m_orderFieldHasBeenSet;
}

string DescribeServiceTemplateGroupsRequest::GetOrderDirection() const
{
    return m_orderDirection;
}

void DescribeServiceTemplateGroupsRequest::SetOrderDirection(const string& _orderDirection)
{
    m_orderDirection = _orderDirection;
    m_orderDirectionHasBeenSet = true;
}

bool DescribeServiceTemplateGroupsRequest::OrderDirectionHasBeenSet() const
{
    return m_orderDirectionHasBeenSet;
}

string DescribeServiceTemplateGroupsRequest::GetMemberOrderField() const
{
    return m_memberOrderField;
}

void DescribeServiceTemplateGroupsRequest::SetMemberOrderField(const string& _memberOrderField)
{
    m_memberOrderField = _memberOrderField;
    m_memberOrderFieldHasBeenSet = true;
}

bool DescribeServiceTemplateGroupsRequest::MemberOrderFieldHasBeenSet() const
{
    return m_memberOrderFieldHasBeenSet;
}

string DescribeServiceTemplateGroupsRequest::GetMemberOrderDirection() const
{
    return m_memberOrderDirection;
}

void DescribeServiceTemplateGroupsRequest::SetMemberOrderDirection(const string& _memberOrderDirection)
{
    m_memberOrderDirection = _memberOrderDirection;
    m_memberOrderDirectionHasBeenSet = true;
}

bool DescribeServiceTemplateGroupsRequest::MemberOrderDirectionHasBeenSet() const
{
    return m_memberOrderDirectionHasBeenSet;
}


