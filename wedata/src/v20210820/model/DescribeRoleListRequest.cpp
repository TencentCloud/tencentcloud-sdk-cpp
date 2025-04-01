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

#include <tencentcloud/wedata/v20210820/model/DescribeRoleListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeRoleListRequest::DescribeRoleListRequest() :
    m_showAllRolesHasBeenSet(false),
    m_includeRoleTypesHasBeenSet(false),
    m_describeMemberCountHasBeenSet(false),
    m_describeOperatorHasBeenSet(false),
    m_describeSystemRoleOnlyHasBeenSet(false),
    m_describeCustomRoleOnlyHasBeenSet(false),
    m_describePrivilegesHasBeenSet(false),
    m_roleIdsHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_orderFieldsHasBeenSet(false)
{
}

string DescribeRoleListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_showAllRolesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShowAllRoles";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_showAllRoles, allocator);
    }

    if (m_includeRoleTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncludeRoleTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_includeRoleTypes.begin(); itr != m_includeRoleTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_describeMemberCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DescribeMemberCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_describeMemberCount, allocator);
    }

    if (m_describeOperatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DescribeOperator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_describeOperator, allocator);
    }

    if (m_describeSystemRoleOnlyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DescribeSystemRoleOnly";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_describeSystemRoleOnly, allocator);
    }

    if (m_describeCustomRoleOnlyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DescribeCustomRoleOnly";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_describeCustomRoleOnly, allocator);
    }

    if (m_describePrivilegesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DescribePrivileges";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_describePrivileges, allocator);
    }

    if (m_roleIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_roleIds.begin(); itr != m_roleIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


bool DescribeRoleListRequest::GetShowAllRoles() const
{
    return m_showAllRoles;
}

void DescribeRoleListRequest::SetShowAllRoles(const bool& _showAllRoles)
{
    m_showAllRoles = _showAllRoles;
    m_showAllRolesHasBeenSet = true;
}

bool DescribeRoleListRequest::ShowAllRolesHasBeenSet() const
{
    return m_showAllRolesHasBeenSet;
}

vector<string> DescribeRoleListRequest::GetIncludeRoleTypes() const
{
    return m_includeRoleTypes;
}

void DescribeRoleListRequest::SetIncludeRoleTypes(const vector<string>& _includeRoleTypes)
{
    m_includeRoleTypes = _includeRoleTypes;
    m_includeRoleTypesHasBeenSet = true;
}

bool DescribeRoleListRequest::IncludeRoleTypesHasBeenSet() const
{
    return m_includeRoleTypesHasBeenSet;
}

bool DescribeRoleListRequest::GetDescribeMemberCount() const
{
    return m_describeMemberCount;
}

void DescribeRoleListRequest::SetDescribeMemberCount(const bool& _describeMemberCount)
{
    m_describeMemberCount = _describeMemberCount;
    m_describeMemberCountHasBeenSet = true;
}

bool DescribeRoleListRequest::DescribeMemberCountHasBeenSet() const
{
    return m_describeMemberCountHasBeenSet;
}

bool DescribeRoleListRequest::GetDescribeOperator() const
{
    return m_describeOperator;
}

void DescribeRoleListRequest::SetDescribeOperator(const bool& _describeOperator)
{
    m_describeOperator = _describeOperator;
    m_describeOperatorHasBeenSet = true;
}

bool DescribeRoleListRequest::DescribeOperatorHasBeenSet() const
{
    return m_describeOperatorHasBeenSet;
}

bool DescribeRoleListRequest::GetDescribeSystemRoleOnly() const
{
    return m_describeSystemRoleOnly;
}

void DescribeRoleListRequest::SetDescribeSystemRoleOnly(const bool& _describeSystemRoleOnly)
{
    m_describeSystemRoleOnly = _describeSystemRoleOnly;
    m_describeSystemRoleOnlyHasBeenSet = true;
}

bool DescribeRoleListRequest::DescribeSystemRoleOnlyHasBeenSet() const
{
    return m_describeSystemRoleOnlyHasBeenSet;
}

bool DescribeRoleListRequest::GetDescribeCustomRoleOnly() const
{
    return m_describeCustomRoleOnly;
}

void DescribeRoleListRequest::SetDescribeCustomRoleOnly(const bool& _describeCustomRoleOnly)
{
    m_describeCustomRoleOnly = _describeCustomRoleOnly;
    m_describeCustomRoleOnlyHasBeenSet = true;
}

bool DescribeRoleListRequest::DescribeCustomRoleOnlyHasBeenSet() const
{
    return m_describeCustomRoleOnlyHasBeenSet;
}

bool DescribeRoleListRequest::GetDescribePrivileges() const
{
    return m_describePrivileges;
}

void DescribeRoleListRequest::SetDescribePrivileges(const bool& _describePrivileges)
{
    m_describePrivileges = _describePrivileges;
    m_describePrivilegesHasBeenSet = true;
}

bool DescribeRoleListRequest::DescribePrivilegesHasBeenSet() const
{
    return m_describePrivilegesHasBeenSet;
}

vector<string> DescribeRoleListRequest::GetRoleIds() const
{
    return m_roleIds;
}

void DescribeRoleListRequest::SetRoleIds(const vector<string>& _roleIds)
{
    m_roleIds = _roleIds;
    m_roleIdsHasBeenSet = true;
}

bool DescribeRoleListRequest::RoleIdsHasBeenSet() const
{
    return m_roleIdsHasBeenSet;
}

string DescribeRoleListRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeRoleListRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeRoleListRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

int64_t DescribeRoleListRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void DescribeRoleListRequest::SetPageNumber(const int64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool DescribeRoleListRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

int64_t DescribeRoleListRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeRoleListRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeRoleListRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

vector<Filter> DescribeRoleListRequest::GetFilters() const
{
    return m_filters;
}

void DescribeRoleListRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeRoleListRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

vector<OrderFields> DescribeRoleListRequest::GetOrderFields() const
{
    return m_orderFields;
}

void DescribeRoleListRequest::SetOrderFields(const vector<OrderFields>& _orderFields)
{
    m_orderFields = _orderFields;
    m_orderFieldsHasBeenSet = true;
}

bool DescribeRoleListRequest::OrderFieldsHasBeenSet() const
{
    return m_orderFieldsHasBeenSet;
}


