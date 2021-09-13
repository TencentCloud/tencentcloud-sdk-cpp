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
using namespace std;

DescribeBillSummaryByTagRequest::DescribeBillSummaryByTagRequest() :
    m_beginTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_tagKeyHasBeenSet(false),
    m_payerUinHasBeenSet(false),
    m_tagValueHasBeenSet(false)
{
}

string DescribeBillSummaryByTagRequest::ToJsonString() const
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

    if (m_tagKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tagKey.c_str(), allocator).Move(), allocator);
    }

    if (m_payerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayerUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_payerUin.c_str(), allocator).Move(), allocator);
    }

    if (m_tagValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagValue";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tagValue.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
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

string DescribeBillSummaryByTagRequest::GetTagValue() const
{
    return m_tagValue;
}

void DescribeBillSummaryByTagRequest::SetTagValue(const string& _tagValue)
{
    m_tagValue = _tagValue;
    m_tagValueHasBeenSet = true;
}

bool DescribeBillSummaryByTagRequest::TagValueHasBeenSet() const
{
    return m_tagValueHasBeenSet;
}


