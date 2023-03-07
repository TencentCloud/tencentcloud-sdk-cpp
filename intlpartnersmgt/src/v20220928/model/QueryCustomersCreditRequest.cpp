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

#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryCustomersCreditRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Intlpartnersmgt::V20220928::Model;
using namespace std;

QueryCustomersCreditRequest::QueryCustomersCreditRequest() :
    m_filterTypeHasBeenSet(false),
    m_filterHasBeenSet(false),
    m_pageHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_orderHasBeenSet(false)
{
}

string QueryCustomersCreditRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_filterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_filterType.c_str(), allocator).Move(), allocator);
    }

    if (m_filterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_filter.c_str(), allocator).Move(), allocator);
    }

    if (m_pageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Page";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_page, allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string QueryCustomersCreditRequest::GetFilterType() const
{
    return m_filterType;
}

void QueryCustomersCreditRequest::SetFilterType(const string& _filterType)
{
    m_filterType = _filterType;
    m_filterTypeHasBeenSet = true;
}

bool QueryCustomersCreditRequest::FilterTypeHasBeenSet() const
{
    return m_filterTypeHasBeenSet;
}

string QueryCustomersCreditRequest::GetFilter() const
{
    return m_filter;
}

void QueryCustomersCreditRequest::SetFilter(const string& _filter)
{
    m_filter = _filter;
    m_filterHasBeenSet = true;
}

bool QueryCustomersCreditRequest::FilterHasBeenSet() const
{
    return m_filterHasBeenSet;
}

int64_t QueryCustomersCreditRequest::GetPage() const
{
    return m_page;
}

void QueryCustomersCreditRequest::SetPage(const int64_t& _page)
{
    m_page = _page;
    m_pageHasBeenSet = true;
}

bool QueryCustomersCreditRequest::PageHasBeenSet() const
{
    return m_pageHasBeenSet;
}

int64_t QueryCustomersCreditRequest::GetPageSize() const
{
    return m_pageSize;
}

void QueryCustomersCreditRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool QueryCustomersCreditRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

string QueryCustomersCreditRequest::GetOrder() const
{
    return m_order;
}

void QueryCustomersCreditRequest::SetOrder(const string& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool QueryCustomersCreditRequest::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}


