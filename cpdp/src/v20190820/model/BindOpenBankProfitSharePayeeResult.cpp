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

#include <tencentcloud/cpdp/v20190820/model/BindOpenBankProfitSharePayeeResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

BindOpenBankProfitSharePayeeResult::BindOpenBankProfitSharePayeeResult() :
    m_accountIdHasBeenSet(false),
    m_accountNoHasBeenSet(false),
    m_currencyHasBeenSet(false)
{
}

CoreInternalOutcome BindOpenBankProfitSharePayeeResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AccountId") && !value["AccountId"].IsNull())
    {
        if (!value["AccountId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BindOpenBankProfitSharePayeeResult.AccountId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountId = string(value["AccountId"].GetString());
        m_accountIdHasBeenSet = true;
    }

    if (value.HasMember("AccountNo") && !value["AccountNo"].IsNull())
    {
        if (!value["AccountNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BindOpenBankProfitSharePayeeResult.AccountNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountNo = string(value["AccountNo"].GetString());
        m_accountNoHasBeenSet = true;
    }

    if (value.HasMember("Currency") && !value["Currency"].IsNull())
    {
        if (!value["Currency"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BindOpenBankProfitSharePayeeResult.Currency` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currency = string(value["Currency"].GetString());
        m_currencyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BindOpenBankProfitSharePayeeResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_accountIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountId.c_str(), allocator).Move(), allocator);
    }

    if (m_accountNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountNo.c_str(), allocator).Move(), allocator);
    }

    if (m_currencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Currency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currency.c_str(), allocator).Move(), allocator);
    }

}


string BindOpenBankProfitSharePayeeResult::GetAccountId() const
{
    return m_accountId;
}

void BindOpenBankProfitSharePayeeResult::SetAccountId(const string& _accountId)
{
    m_accountId = _accountId;
    m_accountIdHasBeenSet = true;
}

bool BindOpenBankProfitSharePayeeResult::AccountIdHasBeenSet() const
{
    return m_accountIdHasBeenSet;
}

string BindOpenBankProfitSharePayeeResult::GetAccountNo() const
{
    return m_accountNo;
}

void BindOpenBankProfitSharePayeeResult::SetAccountNo(const string& _accountNo)
{
    m_accountNo = _accountNo;
    m_accountNoHasBeenSet = true;
}

bool BindOpenBankProfitSharePayeeResult::AccountNoHasBeenSet() const
{
    return m_accountNoHasBeenSet;
}

string BindOpenBankProfitSharePayeeResult::GetCurrency() const
{
    return m_currency;
}

void BindOpenBankProfitSharePayeeResult::SetCurrency(const string& _currency)
{
    m_currency = _currency;
    m_currencyHasBeenSet = true;
}

bool BindOpenBankProfitSharePayeeResult::CurrencyHasBeenSet() const
{
    return m_currencyHasBeenSet;
}

