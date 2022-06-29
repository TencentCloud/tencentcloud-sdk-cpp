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

#include <tencentcloud/cpdp/v20190820/model/QueryFundsTransactionDetailsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QueryFundsTransactionDetailsRequest::QueryFundsTransactionDetailsRequest() :
    m_queryDateTypeHasBeenSet(false),
    m_queryTranTypeHasBeenSet(false),
    m_bankAccountNumberHasBeenSet(false),
    m_subAccountNumberHasBeenSet(false),
    m_pageOffSetHasBeenSet(false),
    m_queryStartDateHasBeenSet(false),
    m_queryEndDateHasBeenSet(false),
    m_midasEnvironmentHasBeenSet(false)
{
}

string QueryFundsTransactionDetailsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_queryDateTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryDateType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_queryDateType.c_str(), allocator).Move(), allocator);
    }

    if (m_queryTranTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryTranType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_queryTranType.c_str(), allocator).Move(), allocator);
    }

    if (m_bankAccountNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BankAccountNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bankAccountNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_subAccountNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAccountNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subAccountNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_pageOffSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageOffSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pageOffSet.c_str(), allocator).Move(), allocator);
    }

    if (m_queryStartDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryStartDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_queryStartDate.c_str(), allocator).Move(), allocator);
    }

    if (m_queryEndDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryEndDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_queryEndDate.c_str(), allocator).Move(), allocator);
    }

    if (m_midasEnvironmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MidasEnvironment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_midasEnvironment.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string QueryFundsTransactionDetailsRequest::GetQueryDateType() const
{
    return m_queryDateType;
}

void QueryFundsTransactionDetailsRequest::SetQueryDateType(const string& _queryDateType)
{
    m_queryDateType = _queryDateType;
    m_queryDateTypeHasBeenSet = true;
}

bool QueryFundsTransactionDetailsRequest::QueryDateTypeHasBeenSet() const
{
    return m_queryDateTypeHasBeenSet;
}

string QueryFundsTransactionDetailsRequest::GetQueryTranType() const
{
    return m_queryTranType;
}

void QueryFundsTransactionDetailsRequest::SetQueryTranType(const string& _queryTranType)
{
    m_queryTranType = _queryTranType;
    m_queryTranTypeHasBeenSet = true;
}

bool QueryFundsTransactionDetailsRequest::QueryTranTypeHasBeenSet() const
{
    return m_queryTranTypeHasBeenSet;
}

string QueryFundsTransactionDetailsRequest::GetBankAccountNumber() const
{
    return m_bankAccountNumber;
}

void QueryFundsTransactionDetailsRequest::SetBankAccountNumber(const string& _bankAccountNumber)
{
    m_bankAccountNumber = _bankAccountNumber;
    m_bankAccountNumberHasBeenSet = true;
}

bool QueryFundsTransactionDetailsRequest::BankAccountNumberHasBeenSet() const
{
    return m_bankAccountNumberHasBeenSet;
}

string QueryFundsTransactionDetailsRequest::GetSubAccountNumber() const
{
    return m_subAccountNumber;
}

void QueryFundsTransactionDetailsRequest::SetSubAccountNumber(const string& _subAccountNumber)
{
    m_subAccountNumber = _subAccountNumber;
    m_subAccountNumberHasBeenSet = true;
}

bool QueryFundsTransactionDetailsRequest::SubAccountNumberHasBeenSet() const
{
    return m_subAccountNumberHasBeenSet;
}

string QueryFundsTransactionDetailsRequest::GetPageOffSet() const
{
    return m_pageOffSet;
}

void QueryFundsTransactionDetailsRequest::SetPageOffSet(const string& _pageOffSet)
{
    m_pageOffSet = _pageOffSet;
    m_pageOffSetHasBeenSet = true;
}

bool QueryFundsTransactionDetailsRequest::PageOffSetHasBeenSet() const
{
    return m_pageOffSetHasBeenSet;
}

string QueryFundsTransactionDetailsRequest::GetQueryStartDate() const
{
    return m_queryStartDate;
}

void QueryFundsTransactionDetailsRequest::SetQueryStartDate(const string& _queryStartDate)
{
    m_queryStartDate = _queryStartDate;
    m_queryStartDateHasBeenSet = true;
}

bool QueryFundsTransactionDetailsRequest::QueryStartDateHasBeenSet() const
{
    return m_queryStartDateHasBeenSet;
}

string QueryFundsTransactionDetailsRequest::GetQueryEndDate() const
{
    return m_queryEndDate;
}

void QueryFundsTransactionDetailsRequest::SetQueryEndDate(const string& _queryEndDate)
{
    m_queryEndDate = _queryEndDate;
    m_queryEndDateHasBeenSet = true;
}

bool QueryFundsTransactionDetailsRequest::QueryEndDateHasBeenSet() const
{
    return m_queryEndDateHasBeenSet;
}

string QueryFundsTransactionDetailsRequest::GetMidasEnvironment() const
{
    return m_midasEnvironment;
}

void QueryFundsTransactionDetailsRequest::SetMidasEnvironment(const string& _midasEnvironment)
{
    m_midasEnvironment = _midasEnvironment;
    m_midasEnvironmentHasBeenSet = true;
}

bool QueryFundsTransactionDetailsRequest::MidasEnvironmentHasBeenSet() const
{
    return m_midasEnvironmentHasBeenSet;
}


