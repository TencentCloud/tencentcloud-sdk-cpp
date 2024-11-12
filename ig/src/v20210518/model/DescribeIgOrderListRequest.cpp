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

#include <tencentcloud/ig/v20210518/model/DescribeIgOrderListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ig::V20210518::Model;
using namespace std;

DescribeIgOrderListRequest::DescribeIgOrderListRequest() :
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_productTypeHasBeenSet(false),
    m_orderStatusHasBeenSet(false),
    m_keyWordHasBeenSet(false)
{
}

string DescribeIgOrderListRequest::ToJsonString() const
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

    if (m_productTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_productType.c_str(), allocator).Move(), allocator);
    }

    if (m_orderStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_orderStatus, allocator);
    }

    if (m_keyWordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyWord";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyWord.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeIgOrderListRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void DescribeIgOrderListRequest::SetPageNumber(const int64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool DescribeIgOrderListRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

int64_t DescribeIgOrderListRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeIgOrderListRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeIgOrderListRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

string DescribeIgOrderListRequest::GetProductType() const
{
    return m_productType;
}

void DescribeIgOrderListRequest::SetProductType(const string& _productType)
{
    m_productType = _productType;
    m_productTypeHasBeenSet = true;
}

bool DescribeIgOrderListRequest::ProductTypeHasBeenSet() const
{
    return m_productTypeHasBeenSet;
}

int64_t DescribeIgOrderListRequest::GetOrderStatus() const
{
    return m_orderStatus;
}

void DescribeIgOrderListRequest::SetOrderStatus(const int64_t& _orderStatus)
{
    m_orderStatus = _orderStatus;
    m_orderStatusHasBeenSet = true;
}

bool DescribeIgOrderListRequest::OrderStatusHasBeenSet() const
{
    return m_orderStatusHasBeenSet;
}

string DescribeIgOrderListRequest::GetKeyWord() const
{
    return m_keyWord;
}

void DescribeIgOrderListRequest::SetKeyWord(const string& _keyWord)
{
    m_keyWord = _keyWord;
    m_keyWordHasBeenSet = true;
}

bool DescribeIgOrderListRequest::KeyWordHasBeenSet() const
{
    return m_keyWordHasBeenSet;
}


