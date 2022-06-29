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

#include <tencentcloud/cpdp/v20190820/model/QueryFlexAmountBeforeTaxRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QueryFlexAmountBeforeTaxRequest::QueryFlexAmountBeforeTaxRequest() :
    m_payeeIdHasBeenSet(false),
    m_incomeTypeHasBeenSet(false),
    m_amountAfterTaxHasBeenSet(false)
{
}

string QueryFlexAmountBeforeTaxRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_payeeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayeeId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_payeeId.c_str(), allocator).Move(), allocator);
    }

    if (m_incomeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncomeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_incomeType.c_str(), allocator).Move(), allocator);
    }

    if (m_amountAfterTaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AmountAfterTax";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_amountAfterTax.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string QueryFlexAmountBeforeTaxRequest::GetPayeeId() const
{
    return m_payeeId;
}

void QueryFlexAmountBeforeTaxRequest::SetPayeeId(const string& _payeeId)
{
    m_payeeId = _payeeId;
    m_payeeIdHasBeenSet = true;
}

bool QueryFlexAmountBeforeTaxRequest::PayeeIdHasBeenSet() const
{
    return m_payeeIdHasBeenSet;
}

string QueryFlexAmountBeforeTaxRequest::GetIncomeType() const
{
    return m_incomeType;
}

void QueryFlexAmountBeforeTaxRequest::SetIncomeType(const string& _incomeType)
{
    m_incomeType = _incomeType;
    m_incomeTypeHasBeenSet = true;
}

bool QueryFlexAmountBeforeTaxRequest::IncomeTypeHasBeenSet() const
{
    return m_incomeTypeHasBeenSet;
}

string QueryFlexAmountBeforeTaxRequest::GetAmountAfterTax() const
{
    return m_amountAfterTax;
}

void QueryFlexAmountBeforeTaxRequest::SetAmountAfterTax(const string& _amountAfterTax)
{
    m_amountAfterTax = _amountAfterTax;
    m_amountAfterTaxHasBeenSet = true;
}

bool QueryFlexAmountBeforeTaxRequest::AmountAfterTaxHasBeenSet() const
{
    return m_amountAfterTaxHasBeenSet;
}


