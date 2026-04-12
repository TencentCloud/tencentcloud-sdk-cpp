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

#include <tencentcloud/rum/v20210622/model/DescribeIssuesListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

DescribeIssuesListRequest::DescribeIssuesListRequest() :
    m_productIdHasBeenSet(false),
    m_formListHasBeenSet(false),
    m_formListAHasBeenSet(false),
    m_formListBHasBeenSet(false),
    m_paramTokenHasBeenSet(false),
    m_issueTypeHasBeenSet(false),
    m_sortFieldHasBeenSet(false),
    m_sortTypeHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_sortABRatioHasBeenSet(false),
    m_compareHasBeenSet(false),
    m_compareStatusHasBeenSet(false),
    m_extraDataHasBeenSet(false),
    m_requestHeaderHasBeenSet(false)
{
}

string DescribeIssuesListRequest::ToJsonString() const
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

    if (m_formListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FormList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_formList.c_str(), allocator).Move(), allocator);
    }

    if (m_formListAHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FormListA";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_formListA.c_str(), allocator).Move(), allocator);
    }

    if (m_formListBHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FormListB";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_formListB.c_str(), allocator).Move(), allocator);
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

    if (m_sortABRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortABRatio";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sortABRatio.c_str(), allocator).Move(), allocator);
    }

    if (m_compareHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Compare";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_compare, allocator);
    }

    if (m_compareStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompareStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_compareStatus, allocator);
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


string DescribeIssuesListRequest::GetProductId() const
{
    return m_productId;
}

void DescribeIssuesListRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool DescribeIssuesListRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string DescribeIssuesListRequest::GetFormList() const
{
    return m_formList;
}

void DescribeIssuesListRequest::SetFormList(const string& _formList)
{
    m_formList = _formList;
    m_formListHasBeenSet = true;
}

bool DescribeIssuesListRequest::FormListHasBeenSet() const
{
    return m_formListHasBeenSet;
}

string DescribeIssuesListRequest::GetFormListA() const
{
    return m_formListA;
}

void DescribeIssuesListRequest::SetFormListA(const string& _formListA)
{
    m_formListA = _formListA;
    m_formListAHasBeenSet = true;
}

bool DescribeIssuesListRequest::FormListAHasBeenSet() const
{
    return m_formListAHasBeenSet;
}

string DescribeIssuesListRequest::GetFormListB() const
{
    return m_formListB;
}

void DescribeIssuesListRequest::SetFormListB(const string& _formListB)
{
    m_formListB = _formListB;
    m_formListBHasBeenSet = true;
}

bool DescribeIssuesListRequest::FormListBHasBeenSet() const
{
    return m_formListBHasBeenSet;
}

string DescribeIssuesListRequest::GetParamToken() const
{
    return m_paramToken;
}

void DescribeIssuesListRequest::SetParamToken(const string& _paramToken)
{
    m_paramToken = _paramToken;
    m_paramTokenHasBeenSet = true;
}

bool DescribeIssuesListRequest::ParamTokenHasBeenSet() const
{
    return m_paramTokenHasBeenSet;
}

int64_t DescribeIssuesListRequest::GetIssueType() const
{
    return m_issueType;
}

void DescribeIssuesListRequest::SetIssueType(const int64_t& _issueType)
{
    m_issueType = _issueType;
    m_issueTypeHasBeenSet = true;
}

bool DescribeIssuesListRequest::IssueTypeHasBeenSet() const
{
    return m_issueTypeHasBeenSet;
}

string DescribeIssuesListRequest::GetSortField() const
{
    return m_sortField;
}

void DescribeIssuesListRequest::SetSortField(const string& _sortField)
{
    m_sortField = _sortField;
    m_sortFieldHasBeenSet = true;
}

bool DescribeIssuesListRequest::SortFieldHasBeenSet() const
{
    return m_sortFieldHasBeenSet;
}

string DescribeIssuesListRequest::GetSortType() const
{
    return m_sortType;
}

void DescribeIssuesListRequest::SetSortType(const string& _sortType)
{
    m_sortType = _sortType;
    m_sortTypeHasBeenSet = true;
}

bool DescribeIssuesListRequest::SortTypeHasBeenSet() const
{
    return m_sortTypeHasBeenSet;
}

int64_t DescribeIssuesListRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeIssuesListRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeIssuesListRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

int64_t DescribeIssuesListRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void DescribeIssuesListRequest::SetPageNumber(const int64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool DescribeIssuesListRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

string DescribeIssuesListRequest::GetSortABRatio() const
{
    return m_sortABRatio;
}

void DescribeIssuesListRequest::SetSortABRatio(const string& _sortABRatio)
{
    m_sortABRatio = _sortABRatio;
    m_sortABRatioHasBeenSet = true;
}

bool DescribeIssuesListRequest::SortABRatioHasBeenSet() const
{
    return m_sortABRatioHasBeenSet;
}

bool DescribeIssuesListRequest::GetCompare() const
{
    return m_compare;
}

void DescribeIssuesListRequest::SetCompare(const bool& _compare)
{
    m_compare = _compare;
    m_compareHasBeenSet = true;
}

bool DescribeIssuesListRequest::CompareHasBeenSet() const
{
    return m_compareHasBeenSet;
}

int64_t DescribeIssuesListRequest::GetCompareStatus() const
{
    return m_compareStatus;
}

void DescribeIssuesListRequest::SetCompareStatus(const int64_t& _compareStatus)
{
    m_compareStatus = _compareStatus;
    m_compareStatusHasBeenSet = true;
}

bool DescribeIssuesListRequest::CompareStatusHasBeenSet() const
{
    return m_compareStatusHasBeenSet;
}

string DescribeIssuesListRequest::GetExtraData() const
{
    return m_extraData;
}

void DescribeIssuesListRequest::SetExtraData(const string& _extraData)
{
    m_extraData = _extraData;
    m_extraDataHasBeenSet = true;
}

bool DescribeIssuesListRequest::ExtraDataHasBeenSet() const
{
    return m_extraDataHasBeenSet;
}

string DescribeIssuesListRequest::GetRequestHeader() const
{
    return m_requestHeader;
}

void DescribeIssuesListRequest::SetRequestHeader(const string& _requestHeader)
{
    m_requestHeader = _requestHeader;
    m_requestHeaderHasBeenSet = true;
}

bool DescribeIssuesListRequest::RequestHeaderHasBeenSet() const
{
    return m_requestHeaderHasBeenSet;
}


