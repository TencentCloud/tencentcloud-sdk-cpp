/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/trp/v20210515/model/DescribeCodeBatchesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trp::V20210515::Model;
using namespace std;

DescribeCodeBatchesRequest::DescribeCodeBatchesRequest() :
    m_merchantIdHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_keywordHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_batchTypeHasBeenSet(false),
    m_corpIdHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

string DescribeCodeBatchesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_merchantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MerchantId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_merchantId.c_str(), allocator).Move(), allocator);
    }

    if (m_productIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_productId.c_str(), allocator).Move(), allocator);
    }

    if (m_keywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keyword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyword.c_str(), allocator).Move(), allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_pageNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageNumber, allocator);
    }

    if (m_batchTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_batchType.c_str(), allocator).Move(), allocator);
    }

    if (m_corpIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CorpId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_corpId, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeCodeBatchesRequest::GetMerchantId() const
{
    return m_merchantId;
}

void DescribeCodeBatchesRequest::SetMerchantId(const string& _merchantId)
{
    m_merchantId = _merchantId;
    m_merchantIdHasBeenSet = true;
}

bool DescribeCodeBatchesRequest::MerchantIdHasBeenSet() const
{
    return m_merchantIdHasBeenSet;
}

string DescribeCodeBatchesRequest::GetProductId() const
{
    return m_productId;
}

void DescribeCodeBatchesRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool DescribeCodeBatchesRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string DescribeCodeBatchesRequest::GetKeyword() const
{
    return m_keyword;
}

void DescribeCodeBatchesRequest::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool DescribeCodeBatchesRequest::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}

int64_t DescribeCodeBatchesRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeCodeBatchesRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeCodeBatchesRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

int64_t DescribeCodeBatchesRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void DescribeCodeBatchesRequest::SetPageNumber(const int64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool DescribeCodeBatchesRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

string DescribeCodeBatchesRequest::GetBatchType() const
{
    return m_batchType;
}

void DescribeCodeBatchesRequest::SetBatchType(const string& _batchType)
{
    m_batchType = _batchType;
    m_batchTypeHasBeenSet = true;
}

bool DescribeCodeBatchesRequest::BatchTypeHasBeenSet() const
{
    return m_batchTypeHasBeenSet;
}

uint64_t DescribeCodeBatchesRequest::GetCorpId() const
{
    return m_corpId;
}

void DescribeCodeBatchesRequest::SetCorpId(const uint64_t& _corpId)
{
    m_corpId = _corpId;
    m_corpIdHasBeenSet = true;
}

bool DescribeCodeBatchesRequest::CorpIdHasBeenSet() const
{
    return m_corpIdHasBeenSet;
}

uint64_t DescribeCodeBatchesRequest::GetStatus() const
{
    return m_status;
}

void DescribeCodeBatchesRequest::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeCodeBatchesRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}


