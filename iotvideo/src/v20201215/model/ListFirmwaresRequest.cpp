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

#include <tencentcloud/iotvideo/v20201215/model/ListFirmwaresRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotvideo::V20201215::Model;
using namespace rapidjson;
using namespace std;

ListFirmwaresRequest::ListFirmwaresRequest() :
    m_pageNumHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_productIDHasBeenSet(false),
    m_filtersHasBeenSet(false)
{
}

string ListFirmwaresRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_pageNumHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PageNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageNum, allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_productIDHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProductID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_productID.c_str(), allocator).Move(), allocator);
    }

    if (m_filtersHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Filters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_filters.begin(); itr != m_filters.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ListFirmwaresRequest::GetPageNum() const
{
    return m_pageNum;
}

void ListFirmwaresRequest::SetPageNum(const uint64_t& _pageNum)
{
    m_pageNum = _pageNum;
    m_pageNumHasBeenSet = true;
}

bool ListFirmwaresRequest::PageNumHasBeenSet() const
{
    return m_pageNumHasBeenSet;
}

uint64_t ListFirmwaresRequest::GetPageSize() const
{
    return m_pageSize;
}

void ListFirmwaresRequest::SetPageSize(const uint64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool ListFirmwaresRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

string ListFirmwaresRequest::GetProductID() const
{
    return m_productID;
}

void ListFirmwaresRequest::SetProductID(const string& _productID)
{
    m_productID = _productID;
    m_productIDHasBeenSet = true;
}

bool ListFirmwaresRequest::ProductIDHasBeenSet() const
{
    return m_productIDHasBeenSet;
}

vector<SearchKeyword> ListFirmwaresRequest::GetFilters() const
{
    return m_filters;
}

void ListFirmwaresRequest::SetFilters(const vector<SearchKeyword>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool ListFirmwaresRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}


