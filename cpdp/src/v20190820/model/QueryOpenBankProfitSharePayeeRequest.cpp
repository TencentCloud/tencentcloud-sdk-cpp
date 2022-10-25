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

#include <tencentcloud/cpdp/v20190820/model/QueryOpenBankProfitSharePayeeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QueryOpenBankProfitSharePayeeRequest::QueryOpenBankProfitSharePayeeRequest() :
    m_channelMerchantIdHasBeenSet(false),
    m_channelSubMerchantIdHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_accountNoHasBeenSet(false),
    m_currencyHasBeenSet(false),
    m_environmentHasBeenSet(false)
{
}

string QueryOpenBankProfitSharePayeeRequest::ToJsonString() const
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

    if (m_channelSubMerchantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelSubMerchantId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channelSubMerchantId.c_str(), allocator).Move(), allocator);
    }

    if (m_accountIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accountId.c_str(), allocator).Move(), allocator);
    }

    if (m_accountNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accountNo.c_str(), allocator).Move(), allocator);
    }

    if (m_currencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Currency";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_currency.c_str(), allocator).Move(), allocator);
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


string QueryOpenBankProfitSharePayeeRequest::GetChannelMerchantId() const
{
    return m_channelMerchantId;
}

void QueryOpenBankProfitSharePayeeRequest::SetChannelMerchantId(const string& _channelMerchantId)
{
    m_channelMerchantId = _channelMerchantId;
    m_channelMerchantIdHasBeenSet = true;
}

bool QueryOpenBankProfitSharePayeeRequest::ChannelMerchantIdHasBeenSet() const
{
    return m_channelMerchantIdHasBeenSet;
}

string QueryOpenBankProfitSharePayeeRequest::GetChannelSubMerchantId() const
{
    return m_channelSubMerchantId;
}

void QueryOpenBankProfitSharePayeeRequest::SetChannelSubMerchantId(const string& _channelSubMerchantId)
{
    m_channelSubMerchantId = _channelSubMerchantId;
    m_channelSubMerchantIdHasBeenSet = true;
}

bool QueryOpenBankProfitSharePayeeRequest::ChannelSubMerchantIdHasBeenSet() const
{
    return m_channelSubMerchantIdHasBeenSet;
}

string QueryOpenBankProfitSharePayeeRequest::GetAccountId() const
{
    return m_accountId;
}

void QueryOpenBankProfitSharePayeeRequest::SetAccountId(const string& _accountId)
{
    m_accountId = _accountId;
    m_accountIdHasBeenSet = true;
}

bool QueryOpenBankProfitSharePayeeRequest::AccountIdHasBeenSet() const
{
    return m_accountIdHasBeenSet;
}

string QueryOpenBankProfitSharePayeeRequest::GetAccountNo() const
{
    return m_accountNo;
}

void QueryOpenBankProfitSharePayeeRequest::SetAccountNo(const string& _accountNo)
{
    m_accountNo = _accountNo;
    m_accountNoHasBeenSet = true;
}

bool QueryOpenBankProfitSharePayeeRequest::AccountNoHasBeenSet() const
{
    return m_accountNoHasBeenSet;
}

string QueryOpenBankProfitSharePayeeRequest::GetCurrency() const
{
    return m_currency;
}

void QueryOpenBankProfitSharePayeeRequest::SetCurrency(const string& _currency)
{
    m_currency = _currency;
    m_currencyHasBeenSet = true;
}

bool QueryOpenBankProfitSharePayeeRequest::CurrencyHasBeenSet() const
{
    return m_currencyHasBeenSet;
}

string QueryOpenBankProfitSharePayeeRequest::GetEnvironment() const
{
    return m_environment;
}

void QueryOpenBankProfitSharePayeeRequest::SetEnvironment(const string& _environment)
{
    m_environment = _environment;
    m_environmentHasBeenSet = true;
}

bool QueryOpenBankProfitSharePayeeRequest::EnvironmentHasBeenSet() const
{
    return m_environmentHasBeenSet;
}


