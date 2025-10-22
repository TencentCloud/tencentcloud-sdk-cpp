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

#include <tencentcloud/billing/v20180709/model/DescribeCostSummaryByRegionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

DescribeCostSummaryByRegionRequest::DescribeCostSummaryByRegionRequest() :
    m_beginTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_payerUinHasBeenSet(false),
    m_needRecordNumHasBeenSet(false)
{
}

string DescribeCostSummaryByRegionRequest::ToJsonString() const
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeCostSummaryByRegionRequest::GetBeginTime() const
{
    return m_beginTime;
}

void DescribeCostSummaryByRegionRequest::SetBeginTime(const string& _beginTime)
{
    m_beginTime = _beginTime;
    m_beginTimeHasBeenSet = true;
}

bool DescribeCostSummaryByRegionRequest::BeginTimeHasBeenSet() const
{
    return m_beginTimeHasBeenSet;
}

string DescribeCostSummaryByRegionRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeCostSummaryByRegionRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeCostSummaryByRegionRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

uint64_t DescribeCostSummaryByRegionRequest::GetLimit() const
{
    return m_limit;
}

void DescribeCostSummaryByRegionRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeCostSummaryByRegionRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t DescribeCostSummaryByRegionRequest::GetOffset() const
{
    return m_offset;
}

void DescribeCostSummaryByRegionRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeCostSummaryByRegionRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribeCostSummaryByRegionRequest::GetPayerUin() const
{
    return m_payerUin;
}

void DescribeCostSummaryByRegionRequest::SetPayerUin(const string& _payerUin)
{
    m_payerUin = _payerUin;
    m_payerUinHasBeenSet = true;
}

bool DescribeCostSummaryByRegionRequest::PayerUinHasBeenSet() const
{
    return m_payerUinHasBeenSet;
}

uint64_t DescribeCostSummaryByRegionRequest::GetNeedRecordNum() const
{
    return m_needRecordNum;
}

void DescribeCostSummaryByRegionRequest::SetNeedRecordNum(const uint64_t& _needRecordNum)
{
    m_needRecordNum = _needRecordNum;
    m_needRecordNumHasBeenSet = true;
}

bool DescribeCostSummaryByRegionRequest::NeedRecordNumHasBeenSet() const
{
    return m_needRecordNumHasBeenSet;
}


