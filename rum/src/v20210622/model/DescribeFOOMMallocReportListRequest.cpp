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

#include <tencentcloud/rum/v20210622/model/DescribeFOOMMallocReportListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

DescribeFOOMMallocReportListRequest::DescribeFOOMMallocReportListRequest() :
    m_productIdHasBeenSet(false),
    m_formListStringHasBeenSet(false),
    m_paramTokenHasBeenSet(false),
    m_featureHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_sortFieldHasBeenSet(false),
    m_sortTypeHasBeenSet(false),
    m_extraDataHasBeenSet(false),
    m_requestHeaderHasBeenSet(false)
{
}

string DescribeFOOMMallocReportListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_productIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_productId.c_str(), allocator).Move(), allocator);
    }

    if (m_formListStringHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FormListString";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_formListString.c_str(), allocator).Move(), allocator);
    }

    if (m_paramTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_paramToken.c_str(), allocator).Move(), allocator);
    }

    if (m_featureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Feature";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_feature.c_str(), allocator).Move(), allocator);
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

    if (m_sortFieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortField";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sortField.c_str(), allocator).Move(), allocator);
    }

    if (m_sortTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sortType.c_str(), allocator).Move(), allocator);
    }

    if (m_extraDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtraData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_extraData.c_str(), allocator).Move(), allocator);
    }

    if (m_requestHeaderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestHeader";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_requestHeader.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeFOOMMallocReportListRequest::GetProductId() const
{
    return m_productId;
}

void DescribeFOOMMallocReportListRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool DescribeFOOMMallocReportListRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string DescribeFOOMMallocReportListRequest::GetFormListString() const
{
    return m_formListString;
}

void DescribeFOOMMallocReportListRequest::SetFormListString(const string& _formListString)
{
    m_formListString = _formListString;
    m_formListStringHasBeenSet = true;
}

bool DescribeFOOMMallocReportListRequest::FormListStringHasBeenSet() const
{
    return m_formListStringHasBeenSet;
}

string DescribeFOOMMallocReportListRequest::GetParamToken() const
{
    return m_paramToken;
}

void DescribeFOOMMallocReportListRequest::SetParamToken(const string& _paramToken)
{
    m_paramToken = _paramToken;
    m_paramTokenHasBeenSet = true;
}

bool DescribeFOOMMallocReportListRequest::ParamTokenHasBeenSet() const
{
    return m_paramTokenHasBeenSet;
}

string DescribeFOOMMallocReportListRequest::GetFeature() const
{
    return m_feature;
}

void DescribeFOOMMallocReportListRequest::SetFeature(const string& _feature)
{
    m_feature = _feature;
    m_featureHasBeenSet = true;
}

bool DescribeFOOMMallocReportListRequest::FeatureHasBeenSet() const
{
    return m_featureHasBeenSet;
}

int64_t DescribeFOOMMallocReportListRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void DescribeFOOMMallocReportListRequest::SetPageNumber(const int64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool DescribeFOOMMallocReportListRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

int64_t DescribeFOOMMallocReportListRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeFOOMMallocReportListRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeFOOMMallocReportListRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

string DescribeFOOMMallocReportListRequest::GetSortField() const
{
    return m_sortField;
}

void DescribeFOOMMallocReportListRequest::SetSortField(const string& _sortField)
{
    m_sortField = _sortField;
    m_sortFieldHasBeenSet = true;
}

bool DescribeFOOMMallocReportListRequest::SortFieldHasBeenSet() const
{
    return m_sortFieldHasBeenSet;
}

string DescribeFOOMMallocReportListRequest::GetSortType() const
{
    return m_sortType;
}

void DescribeFOOMMallocReportListRequest::SetSortType(const string& _sortType)
{
    m_sortType = _sortType;
    m_sortTypeHasBeenSet = true;
}

bool DescribeFOOMMallocReportListRequest::SortTypeHasBeenSet() const
{
    return m_sortTypeHasBeenSet;
}

string DescribeFOOMMallocReportListRequest::GetExtraData() const
{
    return m_extraData;
}

void DescribeFOOMMallocReportListRequest::SetExtraData(const string& _extraData)
{
    m_extraData = _extraData;
    m_extraDataHasBeenSet = true;
}

bool DescribeFOOMMallocReportListRequest::ExtraDataHasBeenSet() const
{
    return m_extraDataHasBeenSet;
}

string DescribeFOOMMallocReportListRequest::GetRequestHeader() const
{
    return m_requestHeader;
}

void DescribeFOOMMallocReportListRequest::SetRequestHeader(const string& _requestHeader)
{
    m_requestHeader = _requestHeader;
    m_requestHeaderHasBeenSet = true;
}

bool DescribeFOOMMallocReportListRequest::RequestHeaderHasBeenSet() const
{
    return m_requestHeaderHasBeenSet;
}


