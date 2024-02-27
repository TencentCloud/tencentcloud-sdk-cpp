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

#include <tencentcloud/billing/v20180709/model/DescribeCostExplorerSummaryRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

DescribeCostExplorerSummaryRequest::DescribeCostExplorerSummaryRequest() :
    m_beginTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_billTypeHasBeenSet(false),
    m_periodTypeHasBeenSet(false),
    m_dimensionsHasBeenSet(false),
    m_feeTypeHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_pageNoHasBeenSet(false),
    m_tagKeyStrHasBeenSet(false),
    m_needConditionValueHasBeenSet(false),
    m_conditionsHasBeenSet(false)
{
}

string DescribeCostExplorerSummaryRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_beginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_beginTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_billTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_billType.c_str(), allocator).Move(), allocator);
    }

    if (m_periodTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeriodType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_periodType.c_str(), allocator).Move(), allocator);
    }

    if (m_dimensionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Dimensions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dimensions.c_str(), allocator).Move(), allocator);
    }

    if (m_feeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FeeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_feeType.c_str(), allocator).Move(), allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_pageNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageNo, allocator);
    }

    if (m_tagKeyStrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagKeyStr";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tagKeyStr.c_str(), allocator).Move(), allocator);
    }

    if (m_needConditionValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedConditionValue";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_needConditionValue.c_str(), allocator).Move(), allocator);
    }

    if (m_conditionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Conditions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_conditions.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeCostExplorerSummaryRequest::GetBeginTime() const
{
    return m_beginTime;
}

void DescribeCostExplorerSummaryRequest::SetBeginTime(const string& _beginTime)
{
    m_beginTime = _beginTime;
    m_beginTimeHasBeenSet = true;
}

bool DescribeCostExplorerSummaryRequest::BeginTimeHasBeenSet() const
{
    return m_beginTimeHasBeenSet;
}

string DescribeCostExplorerSummaryRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeCostExplorerSummaryRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeCostExplorerSummaryRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeCostExplorerSummaryRequest::GetBillType() const
{
    return m_billType;
}

void DescribeCostExplorerSummaryRequest::SetBillType(const string& _billType)
{
    m_billType = _billType;
    m_billTypeHasBeenSet = true;
}

bool DescribeCostExplorerSummaryRequest::BillTypeHasBeenSet() const
{
    return m_billTypeHasBeenSet;
}

string DescribeCostExplorerSummaryRequest::GetPeriodType() const
{
    return m_periodType;
}

void DescribeCostExplorerSummaryRequest::SetPeriodType(const string& _periodType)
{
    m_periodType = _periodType;
    m_periodTypeHasBeenSet = true;
}

bool DescribeCostExplorerSummaryRequest::PeriodTypeHasBeenSet() const
{
    return m_periodTypeHasBeenSet;
}

string DescribeCostExplorerSummaryRequest::GetDimensions() const
{
    return m_dimensions;
}

void DescribeCostExplorerSummaryRequest::SetDimensions(const string& _dimensions)
{
    m_dimensions = _dimensions;
    m_dimensionsHasBeenSet = true;
}

bool DescribeCostExplorerSummaryRequest::DimensionsHasBeenSet() const
{
    return m_dimensionsHasBeenSet;
}

string DescribeCostExplorerSummaryRequest::GetFeeType() const
{
    return m_feeType;
}

void DescribeCostExplorerSummaryRequest::SetFeeType(const string& _feeType)
{
    m_feeType = _feeType;
    m_feeTypeHasBeenSet = true;
}

bool DescribeCostExplorerSummaryRequest::FeeTypeHasBeenSet() const
{
    return m_feeTypeHasBeenSet;
}

uint64_t DescribeCostExplorerSummaryRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeCostExplorerSummaryRequest::SetPageSize(const uint64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeCostExplorerSummaryRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

uint64_t DescribeCostExplorerSummaryRequest::GetPageNo() const
{
    return m_pageNo;
}

void DescribeCostExplorerSummaryRequest::SetPageNo(const uint64_t& _pageNo)
{
    m_pageNo = _pageNo;
    m_pageNoHasBeenSet = true;
}

bool DescribeCostExplorerSummaryRequest::PageNoHasBeenSet() const
{
    return m_pageNoHasBeenSet;
}

string DescribeCostExplorerSummaryRequest::GetTagKeyStr() const
{
    return m_tagKeyStr;
}

void DescribeCostExplorerSummaryRequest::SetTagKeyStr(const string& _tagKeyStr)
{
    m_tagKeyStr = _tagKeyStr;
    m_tagKeyStrHasBeenSet = true;
}

bool DescribeCostExplorerSummaryRequest::TagKeyStrHasBeenSet() const
{
    return m_tagKeyStrHasBeenSet;
}

string DescribeCostExplorerSummaryRequest::GetNeedConditionValue() const
{
    return m_needConditionValue;
}

void DescribeCostExplorerSummaryRequest::SetNeedConditionValue(const string& _needConditionValue)
{
    m_needConditionValue = _needConditionValue;
    m_needConditionValueHasBeenSet = true;
}

bool DescribeCostExplorerSummaryRequest::NeedConditionValueHasBeenSet() const
{
    return m_needConditionValueHasBeenSet;
}

AnalyseConditions DescribeCostExplorerSummaryRequest::GetConditions() const
{
    return m_conditions;
}

void DescribeCostExplorerSummaryRequest::SetConditions(const AnalyseConditions& _conditions)
{
    m_conditions = _conditions;
    m_conditionsHasBeenSet = true;
}

bool DescribeCostExplorerSummaryRequest::ConditionsHasBeenSet() const
{
    return m_conditionsHasBeenSet;
}


