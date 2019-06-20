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

#include <tencentcloud/billing/v20180709/model/DescribeBillResourceSummaryRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Billing::V20180709::Model;
using namespace rapidjson;
using namespace std;

DescribeBillResourceSummaryRequest::DescribeBillResourceSummaryRequest() :
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_periodTypeHasBeenSet(false),
    m_monthHasBeenSet(false),
    m_needRecordNumHasBeenSet(false)
{
}

string DescribeBillResourceSummaryRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_offsetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_periodTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PeriodType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_periodType.c_str(), allocator).Move(), allocator);
    }

    if (m_monthHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Month";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_month.c_str(), allocator).Move(), allocator);
    }

    if (m_needRecordNumHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NeedRecordNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_needRecordNum, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeBillResourceSummaryRequest::GetOffset() const
{
    return m_offset;
}

void DescribeBillResourceSummaryRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeBillResourceSummaryRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeBillResourceSummaryRequest::GetLimit() const
{
    return m_limit;
}

void DescribeBillResourceSummaryRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeBillResourceSummaryRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeBillResourceSummaryRequest::GetPeriodType() const
{
    return m_periodType;
}

void DescribeBillResourceSummaryRequest::SetPeriodType(const string& _periodType)
{
    m_periodType = _periodType;
    m_periodTypeHasBeenSet = true;
}

bool DescribeBillResourceSummaryRequest::PeriodTypeHasBeenSet() const
{
    return m_periodTypeHasBeenSet;
}

string DescribeBillResourceSummaryRequest::GetMonth() const
{
    return m_month;
}

void DescribeBillResourceSummaryRequest::SetMonth(const string& _month)
{
    m_month = _month;
    m_monthHasBeenSet = true;
}

bool DescribeBillResourceSummaryRequest::MonthHasBeenSet() const
{
    return m_monthHasBeenSet;
}

int64_t DescribeBillResourceSummaryRequest::GetNeedRecordNum() const
{
    return m_needRecordNum;
}

void DescribeBillResourceSummaryRequest::SetNeedRecordNum(const int64_t& _needRecordNum)
{
    m_needRecordNum = _needRecordNum;
    m_needRecordNumHasBeenSet = true;
}

bool DescribeBillResourceSummaryRequest::NeedRecordNumHasBeenSet() const
{
    return m_needRecordNumHasBeenSet;
}


