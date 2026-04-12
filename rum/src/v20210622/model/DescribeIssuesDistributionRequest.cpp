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

#include <tencentcloud/rum/v20210622/model/DescribeIssuesDistributionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

DescribeIssuesDistributionRequest::DescribeIssuesDistributionRequest() :
    m_productIdHasBeenSet(false),
    m_formListStringHasBeenSet(false),
    m_dimTypeHasBeenSet(false),
    m_dimensionHasBeenSet(false),
    m_intervalsHasBeenSet(false),
    m_paramTokenHasBeenSet(false),
    m_issueIdHasBeenSet(false),
    m_issueTypeHasBeenSet(false),
    m_paramLimitHasBeenSet(false),
    m_mapKeyHasBeenSet(false),
    m_mapNameHasBeenSet(false),
    m_metricTypeHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_userCustomKeyHasBeenSet(false),
    m_extraDataHasBeenSet(false),
    m_requestHeaderHasBeenSet(false)
{
}

string DescribeIssuesDistributionRequest::ToJsonString() const
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

    if (m_dimTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DimType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dimType.c_str(), allocator).Move(), allocator);
    }

    if (m_dimensionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Dimension";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dimension.c_str(), allocator).Move(), allocator);
    }

    if (m_intervalsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Intervals";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_intervals.begin(); itr != m_intervals.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_paramTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_paramToken.c_str(), allocator).Move(), allocator);
    }

    if (m_issueIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IssueId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_issueId.c_str(), allocator).Move(), allocator);
    }

    if (m_issueTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IssueType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_issueType, allocator);
    }

    if (m_paramLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamLimit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_paramLimit, allocator);
    }

    if (m_mapKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MapKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mapKey.c_str(), allocator).Move(), allocator);
    }

    if (m_mapNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MapName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mapName.c_str(), allocator).Move(), allocator);
    }

    if (m_metricTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_metricType, allocator);
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

    if (m_userCustomKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserCustomKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userCustomKey.c_str(), allocator).Move(), allocator);
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


string DescribeIssuesDistributionRequest::GetProductId() const
{
    return m_productId;
}

void DescribeIssuesDistributionRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool DescribeIssuesDistributionRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string DescribeIssuesDistributionRequest::GetFormListString() const
{
    return m_formListString;
}

void DescribeIssuesDistributionRequest::SetFormListString(const string& _formListString)
{
    m_formListString = _formListString;
    m_formListStringHasBeenSet = true;
}

bool DescribeIssuesDistributionRequest::FormListStringHasBeenSet() const
{
    return m_formListStringHasBeenSet;
}

string DescribeIssuesDistributionRequest::GetDimType() const
{
    return m_dimType;
}

void DescribeIssuesDistributionRequest::SetDimType(const string& _dimType)
{
    m_dimType = _dimType;
    m_dimTypeHasBeenSet = true;
}

bool DescribeIssuesDistributionRequest::DimTypeHasBeenSet() const
{
    return m_dimTypeHasBeenSet;
}

string DescribeIssuesDistributionRequest::GetDimension() const
{
    return m_dimension;
}

void DescribeIssuesDistributionRequest::SetDimension(const string& _dimension)
{
    m_dimension = _dimension;
    m_dimensionHasBeenSet = true;
}

bool DescribeIssuesDistributionRequest::DimensionHasBeenSet() const
{
    return m_dimensionHasBeenSet;
}

vector<int64_t> DescribeIssuesDistributionRequest::GetIntervals() const
{
    return m_intervals;
}

void DescribeIssuesDistributionRequest::SetIntervals(const vector<int64_t>& _intervals)
{
    m_intervals = _intervals;
    m_intervalsHasBeenSet = true;
}

bool DescribeIssuesDistributionRequest::IntervalsHasBeenSet() const
{
    return m_intervalsHasBeenSet;
}

string DescribeIssuesDistributionRequest::GetParamToken() const
{
    return m_paramToken;
}

void DescribeIssuesDistributionRequest::SetParamToken(const string& _paramToken)
{
    m_paramToken = _paramToken;
    m_paramTokenHasBeenSet = true;
}

bool DescribeIssuesDistributionRequest::ParamTokenHasBeenSet() const
{
    return m_paramTokenHasBeenSet;
}

string DescribeIssuesDistributionRequest::GetIssueId() const
{
    return m_issueId;
}

void DescribeIssuesDistributionRequest::SetIssueId(const string& _issueId)
{
    m_issueId = _issueId;
    m_issueIdHasBeenSet = true;
}

bool DescribeIssuesDistributionRequest::IssueIdHasBeenSet() const
{
    return m_issueIdHasBeenSet;
}

int64_t DescribeIssuesDistributionRequest::GetIssueType() const
{
    return m_issueType;
}

void DescribeIssuesDistributionRequest::SetIssueType(const int64_t& _issueType)
{
    m_issueType = _issueType;
    m_issueTypeHasBeenSet = true;
}

bool DescribeIssuesDistributionRequest::IssueTypeHasBeenSet() const
{
    return m_issueTypeHasBeenSet;
}

int64_t DescribeIssuesDistributionRequest::GetParamLimit() const
{
    return m_paramLimit;
}

void DescribeIssuesDistributionRequest::SetParamLimit(const int64_t& _paramLimit)
{
    m_paramLimit = _paramLimit;
    m_paramLimitHasBeenSet = true;
}

bool DescribeIssuesDistributionRequest::ParamLimitHasBeenSet() const
{
    return m_paramLimitHasBeenSet;
}

string DescribeIssuesDistributionRequest::GetMapKey() const
{
    return m_mapKey;
}

void DescribeIssuesDistributionRequest::SetMapKey(const string& _mapKey)
{
    m_mapKey = _mapKey;
    m_mapKeyHasBeenSet = true;
}

bool DescribeIssuesDistributionRequest::MapKeyHasBeenSet() const
{
    return m_mapKeyHasBeenSet;
}

string DescribeIssuesDistributionRequest::GetMapName() const
{
    return m_mapName;
}

void DescribeIssuesDistributionRequest::SetMapName(const string& _mapName)
{
    m_mapName = _mapName;
    m_mapNameHasBeenSet = true;
}

bool DescribeIssuesDistributionRequest::MapNameHasBeenSet() const
{
    return m_mapNameHasBeenSet;
}

int64_t DescribeIssuesDistributionRequest::GetMetricType() const
{
    return m_metricType;
}

void DescribeIssuesDistributionRequest::SetMetricType(const int64_t& _metricType)
{
    m_metricType = _metricType;
    m_metricTypeHasBeenSet = true;
}

bool DescribeIssuesDistributionRequest::MetricTypeHasBeenSet() const
{
    return m_metricTypeHasBeenSet;
}

int64_t DescribeIssuesDistributionRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeIssuesDistributionRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeIssuesDistributionRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

int64_t DescribeIssuesDistributionRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void DescribeIssuesDistributionRequest::SetPageNumber(const int64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool DescribeIssuesDistributionRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

string DescribeIssuesDistributionRequest::GetUserCustomKey() const
{
    return m_userCustomKey;
}

void DescribeIssuesDistributionRequest::SetUserCustomKey(const string& _userCustomKey)
{
    m_userCustomKey = _userCustomKey;
    m_userCustomKeyHasBeenSet = true;
}

bool DescribeIssuesDistributionRequest::UserCustomKeyHasBeenSet() const
{
    return m_userCustomKeyHasBeenSet;
}

string DescribeIssuesDistributionRequest::GetExtraData() const
{
    return m_extraData;
}

void DescribeIssuesDistributionRequest::SetExtraData(const string& _extraData)
{
    m_extraData = _extraData;
    m_extraDataHasBeenSet = true;
}

bool DescribeIssuesDistributionRequest::ExtraDataHasBeenSet() const
{
    return m_extraDataHasBeenSet;
}

string DescribeIssuesDistributionRequest::GetRequestHeader() const
{
    return m_requestHeader;
}

void DescribeIssuesDistributionRequest::SetRequestHeader(const string& _requestHeader)
{
    m_requestHeader = _requestHeader;
    m_requestHeaderHasBeenSet = true;
}

bool DescribeIssuesDistributionRequest::RequestHeaderHasBeenSet() const
{
    return m_requestHeaderHasBeenSet;
}


