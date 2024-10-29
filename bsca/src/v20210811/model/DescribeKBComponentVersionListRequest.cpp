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

#include <tencentcloud/bsca/v20210811/model/DescribeKBComponentVersionListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bsca::V20210811::Model;
using namespace std;

DescribeKBComponentVersionListRequest::DescribeKBComponentVersionListRequest() :
    m_pURLHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_orderHasBeenSet(false),
    m_orderByHasBeenSet(false),
    m_filterHasBeenSet(false)
{
}

string DescribeKBComponentVersionListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_pURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PURL";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_pURL.ToJsonObject(d[key.c_str()], allocator);
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

    if (m_orderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Order";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_order.c_str(), allocator).Move(), allocator);
    }

    if (m_orderByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderBy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_orderBy.begin(); itr != m_orderBy.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_filterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_filter.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


PURL DescribeKBComponentVersionListRequest::GetPURL() const
{
    return m_pURL;
}

void DescribeKBComponentVersionListRequest::SetPURL(const PURL& _pURL)
{
    m_pURL = _pURL;
    m_pURLHasBeenSet = true;
}

bool DescribeKBComponentVersionListRequest::PURLHasBeenSet() const
{
    return m_pURLHasBeenSet;
}

uint64_t DescribeKBComponentVersionListRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void DescribeKBComponentVersionListRequest::SetPageNumber(const uint64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool DescribeKBComponentVersionListRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

uint64_t DescribeKBComponentVersionListRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeKBComponentVersionListRequest::SetPageSize(const uint64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeKBComponentVersionListRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

string DescribeKBComponentVersionListRequest::GetOrder() const
{
    return m_order;
}

void DescribeKBComponentVersionListRequest::SetOrder(const string& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool DescribeKBComponentVersionListRequest::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}

vector<string> DescribeKBComponentVersionListRequest::GetOrderBy() const
{
    return m_orderBy;
}

void DescribeKBComponentVersionListRequest::SetOrderBy(const vector<string>& _orderBy)
{
    m_orderBy = _orderBy;
    m_orderByHasBeenSet = true;
}

bool DescribeKBComponentVersionListRequest::OrderByHasBeenSet() const
{
    return m_orderByHasBeenSet;
}

ComponentTagFilter DescribeKBComponentVersionListRequest::GetFilter() const
{
    return m_filter;
}

void DescribeKBComponentVersionListRequest::SetFilter(const ComponentTagFilter& _filter)
{
    m_filter = _filter;
    m_filterHasBeenSet = true;
}

bool DescribeKBComponentVersionListRequest::FilterHasBeenSet() const
{
    return m_filterHasBeenSet;
}


