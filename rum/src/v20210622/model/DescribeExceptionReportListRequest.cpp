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

#include <tencentcloud/rum/v20210622/model/DescribeExceptionReportListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

DescribeExceptionReportListRequest::DescribeExceptionReportListRequest() :
    m_productIdHasBeenSet(false),
    m_formListStringHasBeenSet(false),
    m_paramTokenHasBeenSet(false),
    m_issueTypeHasBeenSet(false),
    m_sortFieldHasBeenSet(false),
    m_sortTypeHasBeenSet(false),
    m_featureHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_extraDataHasBeenSet(false),
    m_requestHeaderHasBeenSet(false)
{
}

string DescribeExceptionReportListRequest::ToJsonString() const
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

    if (m_issueTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IssueType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_issueType, allocator);
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

    if (m_featureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Feature";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_feature.c_str(), allocator).Move(), allocator);
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


string DescribeExceptionReportListRequest::GetProductId() const
{
    return m_productId;
}

void DescribeExceptionReportListRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool DescribeExceptionReportListRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string DescribeExceptionReportListRequest::GetFormListString() const
{
    return m_formListString;
}

void DescribeExceptionReportListRequest::SetFormListString(const string& _formListString)
{
    m_formListString = _formListString;
    m_formListStringHasBeenSet = true;
}

bool DescribeExceptionReportListRequest::FormListStringHasBeenSet() const
{
    return m_formListStringHasBeenSet;
}

string DescribeExceptionReportListRequest::GetParamToken() const
{
    return m_paramToken;
}

void DescribeExceptionReportListRequest::SetParamToken(const string& _paramToken)
{
    m_paramToken = _paramToken;
    m_paramTokenHasBeenSet = true;
}

bool DescribeExceptionReportListRequest::ParamTokenHasBeenSet() const
{
    return m_paramTokenHasBeenSet;
}

int64_t DescribeExceptionReportListRequest::GetIssueType() const
{
    return m_issueType;
}

void DescribeExceptionReportListRequest::SetIssueType(const int64_t& _issueType)
{
    m_issueType = _issueType;
    m_issueTypeHasBeenSet = true;
}

bool DescribeExceptionReportListRequest::IssueTypeHasBeenSet() const
{
    return m_issueTypeHasBeenSet;
}

string DescribeExceptionReportListRequest::GetSortField() const
{
    return m_sortField;
}

void DescribeExceptionReportListRequest::SetSortField(const string& _sortField)
{
    m_sortField = _sortField;
    m_sortFieldHasBeenSet = true;
}

bool DescribeExceptionReportListRequest::SortFieldHasBeenSet() const
{
    return m_sortFieldHasBeenSet;
}

string DescribeExceptionReportListRequest::GetSortType() const
{
    return m_sortType;
}

void DescribeExceptionReportListRequest::SetSortType(const string& _sortType)
{
    m_sortType = _sortType;
    m_sortTypeHasBeenSet = true;
}

bool DescribeExceptionReportListRequest::SortTypeHasBeenSet() const
{
    return m_sortTypeHasBeenSet;
}

string DescribeExceptionReportListRequest::GetFeature() const
{
    return m_feature;
}

void DescribeExceptionReportListRequest::SetFeature(const string& _feature)
{
    m_feature = _feature;
    m_featureHasBeenSet = true;
}

bool DescribeExceptionReportListRequest::FeatureHasBeenSet() const
{
    return m_featureHasBeenSet;
}

int64_t DescribeExceptionReportListRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeExceptionReportListRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeExceptionReportListRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

int64_t DescribeExceptionReportListRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void DescribeExceptionReportListRequest::SetPageNumber(const int64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool DescribeExceptionReportListRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

string DescribeExceptionReportListRequest::GetExtraData() const
{
    return m_extraData;
}

void DescribeExceptionReportListRequest::SetExtraData(const string& _extraData)
{
    m_extraData = _extraData;
    m_extraDataHasBeenSet = true;
}

bool DescribeExceptionReportListRequest::ExtraDataHasBeenSet() const
{
    return m_extraDataHasBeenSet;
}

string DescribeExceptionReportListRequest::GetRequestHeader() const
{
    return m_requestHeader;
}

void DescribeExceptionReportListRequest::SetRequestHeader(const string& _requestHeader)
{
    m_requestHeader = _requestHeader;
    m_requestHeaderHasBeenSet = true;
}

bool DescribeExceptionReportListRequest::RequestHeaderHasBeenSet() const
{
    return m_requestHeaderHasBeenSet;
}


