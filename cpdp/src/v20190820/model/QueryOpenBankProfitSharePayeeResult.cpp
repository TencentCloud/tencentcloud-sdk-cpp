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

#include <tencentcloud/cpdp/v20190820/model/QueryOpenBankProfitSharePayeeResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QueryOpenBankProfitSharePayeeResult::QueryOpenBankProfitSharePayeeResult() :
    m_accountIdHasBeenSet(false),
    m_accountNoHasBeenSet(false),
    m_currencyHasBeenSet(false),
    m_accountNameHasBeenSet(false),
    m_bankNameHasBeenSet(false),
    m_natureHasBeenSet(false),
    m_bindStateHasBeenSet(false),
    m_stateExplainHasBeenSet(false)
{
}

CoreInternalOutcome QueryOpenBankProfitSharePayeeResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AccountId") && !value["AccountId"].IsNull())
    {
        if (!value["AccountId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankProfitSharePayeeResult.AccountId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountId = string(value["AccountId"].GetString());
        m_accountIdHasBeenSet = true;
    }

    if (value.HasMember("AccountNo") && !value["AccountNo"].IsNull())
    {
        if (!value["AccountNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankProfitSharePayeeResult.AccountNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountNo = string(value["AccountNo"].GetString());
        m_accountNoHasBeenSet = true;
    }

    if (value.HasMember("Currency") && !value["Currency"].IsNull())
    {
        if (!value["Currency"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankProfitSharePayeeResult.Currency` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currency = string(value["Currency"].GetString());
        m_currencyHasBeenSet = true;
    }

    if (value.HasMember("AccountName") && !value["AccountName"].IsNull())
    {
        if (!value["AccountName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankProfitSharePayeeResult.AccountName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountName = string(value["AccountName"].GetString());
        m_accountNameHasBeenSet = true;
    }

    if (value.HasMember("BankName") && !value["BankName"].IsNull())
    {
        if (!value["BankName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankProfitSharePayeeResult.BankName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bankName = string(value["BankName"].GetString());
        m_bankNameHasBeenSet = true;
    }

    if (value.HasMember("Nature") && !value["Nature"].IsNull())
    {
        if (!value["Nature"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankProfitSharePayeeResult.Nature` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nature = string(value["Nature"].GetString());
        m_natureHasBeenSet = true;
    }

    if (value.HasMember("BindState") && !value["BindState"].IsNull())
    {
        if (!value["BindState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankProfitSharePayeeResult.BindState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bindState = string(value["BindState"].GetString());
        m_bindStateHasBeenSet = true;
    }

    if (value.HasMember("StateExplain") && !value["StateExplain"].IsNull())
    {
        if (!value["StateExplain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankProfitSharePayeeResult.StateExplain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stateExplain = string(value["StateExplain"].GetString());
        m_stateExplainHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QueryOpenBankProfitSharePayeeResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_accountNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountName.c_str(), allocator).Move(), allocator);
    }

    if (m_bankNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BankName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bankName.c_str(), allocator).Move(), allocator);
    }

    if (m_natureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nature";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nature.c_str(), allocator).Move(), allocator);
    }

    if (m_bindStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bindState.c_str(), allocator).Move(), allocator);
    }

    if (m_stateExplainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StateExplain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stateExplain.c_str(), allocator).Move(), allocator);
    }

}


string QueryOpenBankProfitSharePayeeResult::GetAccountId() const
{
    return m_accountId;
}

void QueryOpenBankProfitSharePayeeResult::SetAccountId(const string& _accountId)
{
    m_accountId = _accountId;
    m_accountIdHasBeenSet = true;
}

bool QueryOpenBankProfitSharePayeeResult::AccountIdHasBeenSet() const
{
    return m_accountIdHasBeenSet;
}

string QueryOpenBankProfitSharePayeeResult::GetAccountNo() const
{
    return m_accountNo;
}

void QueryOpenBankProfitSharePayeeResult::SetAccountNo(const string& _accountNo)
{
    m_accountNo = _accountNo;
    m_accountNoHasBeenSet = true;
}

bool QueryOpenBankProfitSharePayeeResult::AccountNoHasBeenSet() const
{
    return m_accountNoHasBeenSet;
}

string QueryOpenBankProfitSharePayeeResult::GetCurrency() const
{
    return m_currency;
}

void QueryOpenBankProfitSharePayeeResult::SetCurrency(const string& _currency)
{
    m_currency = _currency;
    m_currencyHasBeenSet = true;
}

bool QueryOpenBankProfitSharePayeeResult::CurrencyHasBeenSet() const
{
    return m_currencyHasBeenSet;
}

string QueryOpenBankProfitSharePayeeResult::GetAccountName() const
{
    return m_accountName;
}

void QueryOpenBankProfitSharePayeeResult::SetAccountName(const string& _accountName)
{
    m_accountName = _accountName;
    m_accountNameHasBeenSet = true;
}

bool QueryOpenBankProfitSharePayeeResult::AccountNameHasBeenSet() const
{
    return m_accountNameHasBeenSet;
}

string QueryOpenBankProfitSharePayeeResult::GetBankName() const
{
    return m_bankName;
}

void QueryOpenBankProfitSharePayeeResult::SetBankName(const string& _bankName)
{
    m_bankName = _bankName;
    m_bankNameHasBeenSet = true;
}

bool QueryOpenBankProfitSharePayeeResult::BankNameHasBeenSet() const
{
    return m_bankNameHasBeenSet;
}

string QueryOpenBankProfitSharePayeeResult::GetNature() const
{
    return m_nature;
}

void QueryOpenBankProfitSharePayeeResult::SetNature(const string& _nature)
{
    m_nature = _nature;
    m_natureHasBeenSet = true;
}

bool QueryOpenBankProfitSharePayeeResult::NatureHasBeenSet() const
{
    return m_natureHasBeenSet;
}

string QueryOpenBankProfitSharePayeeResult::GetBindState() const
{
    return m_bindState;
}

void QueryOpenBankProfitSharePayeeResult::SetBindState(const string& _bindState)
{
    m_bindState = _bindState;
    m_bindStateHasBeenSet = true;
}

bool QueryOpenBankProfitSharePayeeResult::BindStateHasBeenSet() const
{
    return m_bindStateHasBeenSet;
}

string QueryOpenBankProfitSharePayeeResult::GetStateExplain() const
{
    return m_stateExplain;
}

void QueryOpenBankProfitSharePayeeResult::SetStateExplain(const string& _stateExplain)
{
    m_stateExplain = _stateExplain;
    m_stateExplainHasBeenSet = true;
}

bool QueryOpenBankProfitSharePayeeResult::StateExplainHasBeenSet() const
{
    return m_stateExplainHasBeenSet;
}

