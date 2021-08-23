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

#include <tencentcloud/cpdp/v20190820/model/QueryMerchantBalanceData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QueryMerchantBalanceData::QueryMerchantBalanceData() :
    m_currencyHasBeenSet(false),
    m_balanceHasBeenSet(false),
    m_merchantIdHasBeenSet(false)
{
}

CoreInternalOutcome QueryMerchantBalanceData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Currency") && !value["Currency"].IsNull())
    {
        if (!value["Currency"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryMerchantBalanceData.Currency` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currency = string(value["Currency"].GetString());
        m_currencyHasBeenSet = true;
    }

    if (value.HasMember("Balance") && !value["Balance"].IsNull())
    {
        if (!value["Balance"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryMerchantBalanceData.Balance` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_balance = string(value["Balance"].GetString());
        m_balanceHasBeenSet = true;
    }

    if (value.HasMember("MerchantId") && !value["MerchantId"].IsNull())
    {
        if (!value["MerchantId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryMerchantBalanceData.MerchantId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_merchantId = string(value["MerchantId"].GetString());
        m_merchantIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QueryMerchantBalanceData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_currencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Currency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currency.c_str(), allocator).Move(), allocator);
    }

    if (m_balanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Balance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_balance.c_str(), allocator).Move(), allocator);
    }

    if (m_merchantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MerchantId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_merchantId.c_str(), allocator).Move(), allocator);
    }

}


string QueryMerchantBalanceData::GetCurrency() const
{
    return m_currency;
}

void QueryMerchantBalanceData::SetCurrency(const string& _currency)
{
    m_currency = _currency;
    m_currencyHasBeenSet = true;
}

bool QueryMerchantBalanceData::CurrencyHasBeenSet() const
{
    return m_currencyHasBeenSet;
}

string QueryMerchantBalanceData::GetBalance() const
{
    return m_balance;
}

void QueryMerchantBalanceData::SetBalance(const string& _balance)
{
    m_balance = _balance;
    m_balanceHasBeenSet = true;
}

bool QueryMerchantBalanceData::BalanceHasBeenSet() const
{
    return m_balanceHasBeenSet;
}

string QueryMerchantBalanceData::GetMerchantId() const
{
    return m_merchantId;
}

void QueryMerchantBalanceData::SetMerchantId(const string& _merchantId)
{
    m_merchantId = _merchantId;
    m_merchantIdHasBeenSet = true;
}

bool QueryMerchantBalanceData::MerchantIdHasBeenSet() const
{
    return m_merchantIdHasBeenSet;
}

