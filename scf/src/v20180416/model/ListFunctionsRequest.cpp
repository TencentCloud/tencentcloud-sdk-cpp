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

#include <tencentcloud/scf/v20180416/model/ListFunctionsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Scf::V20180416::Model;
using namespace std;

ListFunctionsRequest::ListFunctionsRequest() :
    m_orderHasBeenSet(false),
    m_orderbyHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_searchKeyHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_filtersHasBeenSet(false)
{
}

string ListFunctionsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_orderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Order";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_order.c_str(), allocator).Move(), allocator);
    }

    if (m_orderbyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Orderby";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderby.c_str(), allocator).Move(), allocator);
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

    if (m_searchKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_searchKey.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ListFunctionsRequest::GetOrder() const
{
    return m_order;
}

void ListFunctionsRequest::SetOrder(const string& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool ListFunctionsRequest::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}

string ListFunctionsRequest::GetOrderby() const
{
    return m_orderby;
}

void ListFunctionsRequest::SetOrderby(const string& _orderby)
{
    m_orderby = _orderby;
    m_orderbyHasBeenSet = true;
}

bool ListFunctionsRequest::OrderbyHasBeenSet() const
{
    return m_orderbyHasBeenSet;
}

int64_t ListFunctionsRequest::GetOffset() const
{
    return m_offset;
}

void ListFunctionsRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool ListFunctionsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t ListFunctionsRequest::GetLimit() const
{
    return m_limit;
}

void ListFunctionsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool ListFunctionsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string ListFunctionsRequest::GetSearchKey() const
{
    return m_searchKey;
}

void ListFunctionsRequest::SetSearchKey(const string& _searchKey)
{
    m_searchKey = _searchKey;
    m_searchKeyHasBeenSet = true;
}

bool ListFunctionsRequest::SearchKeyHasBeenSet() const
{
    return m_searchKeyHasBeenSet;
}

string ListFunctionsRequest::GetNamespace() const
{
    return m_namespace;
}

void ListFunctionsRequest::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool ListFunctionsRequest::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string ListFunctionsRequest::GetDescription() const
{
    return m_description;
}

void ListFunctionsRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ListFunctionsRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<Filter> ListFunctionsRequest::GetFilters() const
{
    return m_filters;
}

void ListFunctionsRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool ListFunctionsRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}


