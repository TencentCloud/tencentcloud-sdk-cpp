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

#include <tencentcloud/billing/v20180709/model/DescribeCostSummaryByResourceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

DescribeCostSummaryByResourceRequest::DescribeCostSummaryByResourceRequest() :
    m_beginTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_payerUinHasBeenSet(false),
    m_needRecordNumHasBeenSet(false),
    m_needConditionValueHasBeenSet(false),
    m_conditionsHasBeenSet(false)
{
}

string DescribeCostSummaryByResourceRequest::ToJsonString() const
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

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_payerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayerUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_payerUin.c_str(), allocator).Move(), allocator);
    }

    if (m_needRecordNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedRecordNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_needRecordNum, allocator);
    }

    if (m_needConditionValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedConditionValue";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_needConditionValue, allocator);
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


string DescribeCostSummaryByResourceRequest::GetBeginTime() const
{
    return m_beginTime;
}

void DescribeCostSummaryByResourceRequest::SetBeginTime(const string& _beginTime)
{
    m_beginTime = _beginTime;
    m_beginTimeHasBeenSet = true;
}

bool DescribeCostSummaryByResourceRequest::BeginTimeHasBeenSet() const
{
    return m_beginTimeHasBeenSet;
}

string DescribeCostSummaryByResourceRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeCostSummaryByResourceRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeCostSummaryByResourceRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

uint64_t DescribeCostSummaryByResourceRequest::GetLimit() const
{
    return m_limit;
}

void DescribeCostSummaryByResourceRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeCostSummaryByResourceRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t DescribeCostSummaryByResourceRequest::GetOffset() const
{
    return m_offset;
}

void DescribeCostSummaryByResourceRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeCostSummaryByResourceRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribeCostSummaryByResourceRequest::GetPayerUin() const
{
    return m_payerUin;
}

void DescribeCostSummaryByResourceRequest::SetPayerUin(const string& _payerUin)
{
    m_payerUin = _payerUin;
    m_payerUinHasBeenSet = true;
}

bool DescribeCostSummaryByResourceRequest::PayerUinHasBeenSet() const
{
    return m_payerUinHasBeenSet;
}

uint64_t DescribeCostSummaryByResourceRequest::GetNeedRecordNum() const
{
    return m_needRecordNum;
}

void DescribeCostSummaryByResourceRequest::SetNeedRecordNum(const uint64_t& _needRecordNum)
{
    m_needRecordNum = _needRecordNum;
    m_needRecordNumHasBeenSet = true;
}

bool DescribeCostSummaryByResourceRequest::NeedRecordNumHasBeenSet() const
{
    return m_needRecordNumHasBeenSet;
}

uint64_t DescribeCostSummaryByResourceRequest::GetNeedConditionValue() const
{
    return m_needConditionValue;
}

void DescribeCostSummaryByResourceRequest::SetNeedConditionValue(const uint64_t& _needConditionValue)
{
    m_needConditionValue = _needConditionValue;
    m_needConditionValueHasBeenSet = true;
}

bool DescribeCostSummaryByResourceRequest::NeedConditionValueHasBeenSet() const
{
    return m_needConditionValueHasBeenSet;
}

Conditions DescribeCostSummaryByResourceRequest::GetConditions() const
{
    return m_conditions;
}

void DescribeCostSummaryByResourceRequest::SetConditions(const Conditions& _conditions)
{
    m_conditions = _conditions;
    m_conditionsHasBeenSet = true;
}

bool DescribeCostSummaryByResourceRequest::ConditionsHasBeenSet() const
{
    return m_conditionsHasBeenSet;
}


