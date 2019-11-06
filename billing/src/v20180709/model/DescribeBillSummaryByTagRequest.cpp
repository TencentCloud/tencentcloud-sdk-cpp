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

#include <tencentcloud/billing/v20180709/model/DescribeBillSummaryByTagRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Billing::V20180709::Model;
using namespace rapidjson;
using namespace std;

DescribeBillSummaryByTagRequest::DescribeBillSummaryByTagRequest() :
    m_payerUinHasBeenSet(false),
    m_beginTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_tagKeyHasBeenSet(false)
{
}

string DescribeBillSummaryByTagRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_payerUinHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PayerUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_payerUin.c_str(), allocator).Move(), allocator);
    }

    if (m_beginTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BeginTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_beginTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_tagKeyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TagKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_tagKey.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeBillSummaryByTagRequest::GetPayerUin() const
{
    return m_payerUin;
}

void DescribeBillSummaryByTagRequest::SetPayerUin(const string& _payerUin)
{
    m_payerUin = _payerUin;
    m_payerUinHasBeenSet = true;
}

bool DescribeBillSummaryByTagRequest::PayerUinHasBeenSet() const
{
    return m_payerUinHasBeenSet;
}

string DescribeBillSummaryByTagRequest::GetBeginTime() const
{
    return m_beginTime;
}

void DescribeBillSummaryByTagRequest::SetBeginTime(const string& _beginTime)
{
    m_beginTime = _beginTime;
    m_beginTimeHasBeenSet = true;
}

bool DescribeBillSummaryByTagRequest::BeginTimeHasBeenSet() const
{
    return m_beginTimeHasBeenSet;
}

string DescribeBillSummaryByTagRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeBillSummaryByTagRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeBillSummaryByTagRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeBillSummaryByTagRequest::GetTagKey() const
{
    return m_tagKey;
}

void DescribeBillSummaryByTagRequest::SetTagKey(const string& _tagKey)
{
    m_tagKey = _tagKey;
    m_tagKeyHasBeenSet = true;
}

bool DescribeBillSummaryByTagRequest::TagKeyHasBeenSet() const
{
    return m_tagKeyHasBeenSet;
}


