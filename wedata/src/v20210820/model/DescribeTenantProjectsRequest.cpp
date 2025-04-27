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

#include <tencentcloud/wedata/v20210820/model/DescribeTenantProjectsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeTenantProjectsRequest::DescribeTenantProjectsRequest() :
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_describeExecutorsHasBeenSet(false),
    m_describeAdminUsersHasBeenSet(false),
    m_describeMemberCountHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_orderFieldsHasBeenSet(false),
    m_describeCreatorHasBeenSet(false),
    m_describeResourcePoolsHasBeenSet(false)
{
}

string DescribeTenantProjectsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_pageNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageNumber, allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_describeExecutorsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DescribeExecutors";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_describeExecutors, allocator);
    }

    if (m_describeAdminUsersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DescribeAdminUsers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_describeAdminUsers, allocator);
    }

    if (m_describeMemberCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DescribeMemberCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_describeMemberCount, allocator);
    }

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

    if (m_orderFieldsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderFields";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_orderFields.begin(); itr != m_orderFields.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_describeCreatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DescribeCreator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_describeCreator, allocator);
    }

    if (m_describeResourcePoolsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DescribeResourcePools";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_describeResourcePools, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeTenantProjectsRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void DescribeTenantProjectsRequest::SetPageNumber(const uint64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool DescribeTenantProjectsRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

uint64_t DescribeTenantProjectsRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeTenantProjectsRequest::SetPageSize(const uint64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeTenantProjectsRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

bool DescribeTenantProjectsRequest::GetDescribeExecutors() const
{
    return m_describeExecutors;
}

void DescribeTenantProjectsRequest::SetDescribeExecutors(const bool& _describeExecutors)
{
    m_describeExecutors = _describeExecutors;
    m_describeExecutorsHasBeenSet = true;
}

bool DescribeTenantProjectsRequest::DescribeExecutorsHasBeenSet() const
{
    return m_describeExecutorsHasBeenSet;
}

bool DescribeTenantProjectsRequest::GetDescribeAdminUsers() const
{
    return m_describeAdminUsers;
}

void DescribeTenantProjectsRequest::SetDescribeAdminUsers(const bool& _describeAdminUsers)
{
    m_describeAdminUsers = _describeAdminUsers;
    m_describeAdminUsersHasBeenSet = true;
}

bool DescribeTenantProjectsRequest::DescribeAdminUsersHasBeenSet() const
{
    return m_describeAdminUsersHasBeenSet;
}

bool DescribeTenantProjectsRequest::GetDescribeMemberCount() const
{
    return m_describeMemberCount;
}

void DescribeTenantProjectsRequest::SetDescribeMemberCount(const bool& _describeMemberCount)
{
    m_describeMemberCount = _describeMemberCount;
    m_describeMemberCountHasBeenSet = true;
}

bool DescribeTenantProjectsRequest::DescribeMemberCountHasBeenSet() const
{
    return m_describeMemberCountHasBeenSet;
}

vector<Filter> DescribeTenantProjectsRequest::GetFilters() const
{
    return m_filters;
}

void DescribeTenantProjectsRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeTenantProjectsRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

vector<OrderField> DescribeTenantProjectsRequest::GetOrderFields() const
{
    return m_orderFields;
}

void DescribeTenantProjectsRequest::SetOrderFields(const vector<OrderField>& _orderFields)
{
    m_orderFields = _orderFields;
    m_orderFieldsHasBeenSet = true;
}

bool DescribeTenantProjectsRequest::OrderFieldsHasBeenSet() const
{
    return m_orderFieldsHasBeenSet;
}

bool DescribeTenantProjectsRequest::GetDescribeCreator() const
{
    return m_describeCreator;
}

void DescribeTenantProjectsRequest::SetDescribeCreator(const bool& _describeCreator)
{
    m_describeCreator = _describeCreator;
    m_describeCreatorHasBeenSet = true;
}

bool DescribeTenantProjectsRequest::DescribeCreatorHasBeenSet() const
{
    return m_describeCreatorHasBeenSet;
}

bool DescribeTenantProjectsRequest::GetDescribeResourcePools() const
{
    return m_describeResourcePools;
}

void DescribeTenantProjectsRequest::SetDescribeResourcePools(const bool& _describeResourcePools)
{
    m_describeResourcePools = _describeResourcePools;
    m_describeResourcePoolsHasBeenSet = true;
}

bool DescribeTenantProjectsRequest::DescribeResourcePoolsHasBeenSet() const
{
    return m_describeResourcePoolsHasBeenSet;
}


