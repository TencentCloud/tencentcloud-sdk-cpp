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

#include <tencentcloud/rum/v20210622/model/DescribeIssuesStatisticsTrendRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

DescribeIssuesStatisticsTrendRequest::DescribeIssuesStatisticsTrendRequest() :
    m_productIdHasBeenSet(false),
    m_paramTokenHasBeenSet(false),
    m_formListHasBeenSet(false),
    m_issueIdHasBeenSet(false),
    m_issueTypeHasBeenSet(false),
    m_timeWindowHasBeenSet(false),
    m_totalSizeHasBeenSet(false),
    m_statHasBeenSet(false),
    m_metricTypeHasBeenSet(false),
    m_extraDataHasBeenSet(false),
    m_requestHeaderHasBeenSet(false),
    m_trendStatHasBeenSet(false)
{
}

string DescribeIssuesStatisticsTrendRequest::ToJsonString() const
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

    if (m_paramTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_paramToken.c_str(), allocator).Move(), allocator);
    }

    if (m_formListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FormList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_formList.c_str(), allocator).Move(), allocator);
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

    if (m_timeWindowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeWindow";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeWindow, allocator);
    }

    if (m_totalSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_totalSize, allocator);
    }

    if (m_statHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Stat";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_stat, allocator);
    }

    if (m_metricTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_metricType, allocator);
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

    if (m_trendStatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrendStat";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_trendStat, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeIssuesStatisticsTrendRequest::GetProductId() const
{
    return m_productId;
}

void DescribeIssuesStatisticsTrendRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool DescribeIssuesStatisticsTrendRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string DescribeIssuesStatisticsTrendRequest::GetParamToken() const
{
    return m_paramToken;
}

void DescribeIssuesStatisticsTrendRequest::SetParamToken(const string& _paramToken)
{
    m_paramToken = _paramToken;
    m_paramTokenHasBeenSet = true;
}

bool DescribeIssuesStatisticsTrendRequest::ParamTokenHasBeenSet() const
{
    return m_paramTokenHasBeenSet;
}

string DescribeIssuesStatisticsTrendRequest::GetFormList() const
{
    return m_formList;
}

void DescribeIssuesStatisticsTrendRequest::SetFormList(const string& _formList)
{
    m_formList = _formList;
    m_formListHasBeenSet = true;
}

bool DescribeIssuesStatisticsTrendRequest::FormListHasBeenSet() const
{
    return m_formListHasBeenSet;
}

string DescribeIssuesStatisticsTrendRequest::GetIssueId() const
{
    return m_issueId;
}

void DescribeIssuesStatisticsTrendRequest::SetIssueId(const string& _issueId)
{
    m_issueId = _issueId;
    m_issueIdHasBeenSet = true;
}

bool DescribeIssuesStatisticsTrendRequest::IssueIdHasBeenSet() const
{
    return m_issueIdHasBeenSet;
}

int64_t DescribeIssuesStatisticsTrendRequest::GetIssueType() const
{
    return m_issueType;
}

void DescribeIssuesStatisticsTrendRequest::SetIssueType(const int64_t& _issueType)
{
    m_issueType = _issueType;
    m_issueTypeHasBeenSet = true;
}

bool DescribeIssuesStatisticsTrendRequest::IssueTypeHasBeenSet() const
{
    return m_issueTypeHasBeenSet;
}

int64_t DescribeIssuesStatisticsTrendRequest::GetTimeWindow() const
{
    return m_timeWindow;
}

void DescribeIssuesStatisticsTrendRequest::SetTimeWindow(const int64_t& _timeWindow)
{
    m_timeWindow = _timeWindow;
    m_timeWindowHasBeenSet = true;
}

bool DescribeIssuesStatisticsTrendRequest::TimeWindowHasBeenSet() const
{
    return m_timeWindowHasBeenSet;
}

bool DescribeIssuesStatisticsTrendRequest::GetTotalSize() const
{
    return m_totalSize;
}

void DescribeIssuesStatisticsTrendRequest::SetTotalSize(const bool& _totalSize)
{
    m_totalSize = _totalSize;
    m_totalSizeHasBeenSet = true;
}

bool DescribeIssuesStatisticsTrendRequest::TotalSizeHasBeenSet() const
{
    return m_totalSizeHasBeenSet;
}

int64_t DescribeIssuesStatisticsTrendRequest::GetStat() const
{
    return m_stat;
}

void DescribeIssuesStatisticsTrendRequest::SetStat(const int64_t& _stat)
{
    m_stat = _stat;
    m_statHasBeenSet = true;
}

bool DescribeIssuesStatisticsTrendRequest::StatHasBeenSet() const
{
    return m_statHasBeenSet;
}

int64_t DescribeIssuesStatisticsTrendRequest::GetMetricType() const
{
    return m_metricType;
}

void DescribeIssuesStatisticsTrendRequest::SetMetricType(const int64_t& _metricType)
{
    m_metricType = _metricType;
    m_metricTypeHasBeenSet = true;
}

bool DescribeIssuesStatisticsTrendRequest::MetricTypeHasBeenSet() const
{
    return m_metricTypeHasBeenSet;
}

string DescribeIssuesStatisticsTrendRequest::GetExtraData() const
{
    return m_extraData;
}

void DescribeIssuesStatisticsTrendRequest::SetExtraData(const string& _extraData)
{
    m_extraData = _extraData;
    m_extraDataHasBeenSet = true;
}

bool DescribeIssuesStatisticsTrendRequest::ExtraDataHasBeenSet() const
{
    return m_extraDataHasBeenSet;
}

string DescribeIssuesStatisticsTrendRequest::GetRequestHeader() const
{
    return m_requestHeader;
}

void DescribeIssuesStatisticsTrendRequest::SetRequestHeader(const string& _requestHeader)
{
    m_requestHeader = _requestHeader;
    m_requestHeaderHasBeenSet = true;
}

bool DescribeIssuesStatisticsTrendRequest::RequestHeaderHasBeenSet() const
{
    return m_requestHeaderHasBeenSet;
}

int64_t DescribeIssuesStatisticsTrendRequest::GetTrendStat() const
{
    return m_trendStat;
}

void DescribeIssuesStatisticsTrendRequest::SetTrendStat(const int64_t& _trendStat)
{
    m_trendStat = _trendStat;
    m_trendStatHasBeenSet = true;
}

bool DescribeIssuesStatisticsTrendRequest::TrendStatHasBeenSet() const
{
    return m_trendStatHasBeenSet;
}


