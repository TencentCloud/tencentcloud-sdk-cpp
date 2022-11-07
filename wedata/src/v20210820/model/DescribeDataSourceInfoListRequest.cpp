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

#include <tencentcloud/wedata/v20210820/model/DescribeDataSourceInfoListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeDataSourceInfoListRequest::DescribeDataSourceInfoListRequest() :
    m_projectIdHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_orderFieldsHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_datasourceNameHasBeenSet(false)
{
}

string DescribeDataSourceInfoListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_filters.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_orderFieldsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderFields";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_orderFields.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_datasourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_datasourceName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeDataSourceInfoListRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeDataSourceInfoListRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeDataSourceInfoListRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

uint64_t DescribeDataSourceInfoListRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void DescribeDataSourceInfoListRequest::SetPageNumber(const uint64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool DescribeDataSourceInfoListRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

uint64_t DescribeDataSourceInfoListRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeDataSourceInfoListRequest::SetPageSize(const uint64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeDataSourceInfoListRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

Filter DescribeDataSourceInfoListRequest::GetFilters() const
{
    return m_filters;
}

void DescribeDataSourceInfoListRequest::SetFilters(const Filter& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeDataSourceInfoListRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

OrderField DescribeDataSourceInfoListRequest::GetOrderFields() const
{
    return m_orderFields;
}

void DescribeDataSourceInfoListRequest::SetOrderFields(const OrderField& _orderFields)
{
    m_orderFields = _orderFields;
    m_orderFieldsHasBeenSet = true;
}

bool DescribeDataSourceInfoListRequest::OrderFieldsHasBeenSet() const
{
    return m_orderFieldsHasBeenSet;
}

string DescribeDataSourceInfoListRequest::GetType() const
{
    return m_type;
}

void DescribeDataSourceInfoListRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DescribeDataSourceInfoListRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string DescribeDataSourceInfoListRequest::GetDatasourceName() const
{
    return m_datasourceName;
}

void DescribeDataSourceInfoListRequest::SetDatasourceName(const string& _datasourceName)
{
    m_datasourceName = _datasourceName;
    m_datasourceNameHasBeenSet = true;
}

bool DescribeDataSourceInfoListRequest::DatasourceNameHasBeenSet() const
{
    return m_datasourceNameHasBeenSet;
}


