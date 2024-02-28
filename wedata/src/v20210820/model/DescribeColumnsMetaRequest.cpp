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

#include <tencentcloud/wedata/v20210820/model/DescribeColumnsMetaRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeColumnsMetaRequest::DescribeColumnsMetaRequest() :
    m_tableIdHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_filterSetHasBeenSet(false),
    m_orderFieldSetHasBeenSet(false),
    m_isPartitionQueryHasBeenSet(false),
    m_complianceIdHasBeenSet(false)
{
}

string DescribeColumnsMetaRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_tableIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tableId.c_str(), allocator).Move(), allocator);
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

    if (m_filterSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_filterSet.begin(); itr != m_filterSet.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_orderFieldSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderFieldSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_orderFieldSet.begin(); itr != m_orderFieldSet.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_isPartitionQueryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPartitionQuery";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isPartitionQuery, allocator);
    }

    if (m_complianceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComplianceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_complianceId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeColumnsMetaRequest::GetTableId() const
{
    return m_tableId;
}

void DescribeColumnsMetaRequest::SetTableId(const string& _tableId)
{
    m_tableId = _tableId;
    m_tableIdHasBeenSet = true;
}

bool DescribeColumnsMetaRequest::TableIdHasBeenSet() const
{
    return m_tableIdHasBeenSet;
}

int64_t DescribeColumnsMetaRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void DescribeColumnsMetaRequest::SetPageNumber(const int64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool DescribeColumnsMetaRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

int64_t DescribeColumnsMetaRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeColumnsMetaRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeColumnsMetaRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

vector<Filter> DescribeColumnsMetaRequest::GetFilterSet() const
{
    return m_filterSet;
}

void DescribeColumnsMetaRequest::SetFilterSet(const vector<Filter>& _filterSet)
{
    m_filterSet = _filterSet;
    m_filterSetHasBeenSet = true;
}

bool DescribeColumnsMetaRequest::FilterSetHasBeenSet() const
{
    return m_filterSetHasBeenSet;
}

vector<OrderField> DescribeColumnsMetaRequest::GetOrderFieldSet() const
{
    return m_orderFieldSet;
}

void DescribeColumnsMetaRequest::SetOrderFieldSet(const vector<OrderField>& _orderFieldSet)
{
    m_orderFieldSet = _orderFieldSet;
    m_orderFieldSetHasBeenSet = true;
}

bool DescribeColumnsMetaRequest::OrderFieldSetHasBeenSet() const
{
    return m_orderFieldSetHasBeenSet;
}

bool DescribeColumnsMetaRequest::GetIsPartitionQuery() const
{
    return m_isPartitionQuery;
}

void DescribeColumnsMetaRequest::SetIsPartitionQuery(const bool& _isPartitionQuery)
{
    m_isPartitionQuery = _isPartitionQuery;
    m_isPartitionQueryHasBeenSet = true;
}

bool DescribeColumnsMetaRequest::IsPartitionQueryHasBeenSet() const
{
    return m_isPartitionQueryHasBeenSet;
}

int64_t DescribeColumnsMetaRequest::GetComplianceId() const
{
    return m_complianceId;
}

void DescribeColumnsMetaRequest::SetComplianceId(const int64_t& _complianceId)
{
    m_complianceId = _complianceId;
    m_complianceIdHasBeenSet = true;
}

bool DescribeColumnsMetaRequest::ComplianceIdHasBeenSet() const
{
    return m_complianceIdHasBeenSet;
}


