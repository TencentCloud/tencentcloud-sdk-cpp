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

#include <tencentcloud/cpdp/v20190820/model/QueryOpenBankBankBranchListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QueryOpenBankBankBranchListRequest::QueryOpenBankBankBranchListRequest() :
    m_channelMerchantIdHasBeenSet(false),
    m_channelNameHasBeenSet(false),
    m_paymentMethodHasBeenSet(false),
    m_bankBranchNameHasBeenSet(false),
    m_bankAbbreviationHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_environmentHasBeenSet(false)
{
}

string QueryOpenBankBankBranchListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_channelMerchantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelMerchantId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channelMerchantId.c_str(), allocator).Move(), allocator);
    }

    if (m_channelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channelName.c_str(), allocator).Move(), allocator);
    }

    if (m_paymentMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentMethod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_paymentMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_bankBranchNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BankBranchName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bankBranchName.c_str(), allocator).Move(), allocator);
    }

    if (m_bankAbbreviationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BankAbbreviation";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bankAbbreviation.c_str(), allocator).Move(), allocator);
    }

    if (m_pageNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_pageNumber.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_environmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Environment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_environment.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string QueryOpenBankBankBranchListRequest::GetChannelMerchantId() const
{
    return m_channelMerchantId;
}

void QueryOpenBankBankBranchListRequest::SetChannelMerchantId(const string& _channelMerchantId)
{
    m_channelMerchantId = _channelMerchantId;
    m_channelMerchantIdHasBeenSet = true;
}

bool QueryOpenBankBankBranchListRequest::ChannelMerchantIdHasBeenSet() const
{
    return m_channelMerchantIdHasBeenSet;
}

string QueryOpenBankBankBranchListRequest::GetChannelName() const
{
    return m_channelName;
}

void QueryOpenBankBankBranchListRequest::SetChannelName(const string& _channelName)
{
    m_channelName = _channelName;
    m_channelNameHasBeenSet = true;
}

bool QueryOpenBankBankBranchListRequest::ChannelNameHasBeenSet() const
{
    return m_channelNameHasBeenSet;
}

string QueryOpenBankBankBranchListRequest::GetPaymentMethod() const
{
    return m_paymentMethod;
}

void QueryOpenBankBankBranchListRequest::SetPaymentMethod(const string& _paymentMethod)
{
    m_paymentMethod = _paymentMethod;
    m_paymentMethodHasBeenSet = true;
}

bool QueryOpenBankBankBranchListRequest::PaymentMethodHasBeenSet() const
{
    return m_paymentMethodHasBeenSet;
}

string QueryOpenBankBankBranchListRequest::GetBankBranchName() const
{
    return m_bankBranchName;
}

void QueryOpenBankBankBranchListRequest::SetBankBranchName(const string& _bankBranchName)
{
    m_bankBranchName = _bankBranchName;
    m_bankBranchNameHasBeenSet = true;
}

bool QueryOpenBankBankBranchListRequest::BankBranchNameHasBeenSet() const
{
    return m_bankBranchNameHasBeenSet;
}

string QueryOpenBankBankBranchListRequest::GetBankAbbreviation() const
{
    return m_bankAbbreviation;
}

void QueryOpenBankBankBranchListRequest::SetBankAbbreviation(const string& _bankAbbreviation)
{
    m_bankAbbreviation = _bankAbbreviation;
    m_bankAbbreviationHasBeenSet = true;
}

bool QueryOpenBankBankBranchListRequest::BankAbbreviationHasBeenSet() const
{
    return m_bankAbbreviationHasBeenSet;
}

Paging QueryOpenBankBankBranchListRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void QueryOpenBankBankBranchListRequest::SetPageNumber(const Paging& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool QueryOpenBankBankBranchListRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

string QueryOpenBankBankBranchListRequest::GetEnvironment() const
{
    return m_environment;
}

void QueryOpenBankBankBranchListRequest::SetEnvironment(const string& _environment)
{
    m_environment = _environment;
    m_environmentHasBeenSet = true;
}

bool QueryOpenBankBankBranchListRequest::EnvironmentHasBeenSet() const
{
    return m_environmentHasBeenSet;
}


