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

#include <tencentcloud/cpdp/v20190820/model/PayeeAccountBalanceResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

PayeeAccountBalanceResult::PayeeAccountBalanceResult() :
    m_accountIdHasBeenSet(false),
    m_incomeTypeHasBeenSet(false),
    m_balanceHasBeenSet(false),
    m_systemFreezeBalanceHasBeenSet(false),
    m_manualFreezeBalanceHasBeenSet(false),
    m_payableBalanceHasBeenSet(false),
    m_paidBalanceHasBeenSet(false),
    m_inPayBalanceHasBeenSet(false),
    m_sumSettlementAmountHasBeenSet(false),
    m_paidIncomeTaxHasBeenSet(false),
    m_inPayIncomeTaxHasBeenSet(false),
    m_paidValueAddedTaxHasBeenSet(false),
    m_inPayValueAddedTaxHasBeenSet(false),
    m_paidAttachTaxHasBeenSet(false),
    m_inPayAttachTaxHasBeenSet(false)
{
}

CoreInternalOutcome PayeeAccountBalanceResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AccountId") && !value["AccountId"].IsNull())
    {
        if (!value["AccountId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayeeAccountBalanceResult.AccountId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountId = string(value["AccountId"].GetString());
        m_accountIdHasBeenSet = true;
    }

    if (value.HasMember("IncomeType") && !value["IncomeType"].IsNull())
    {
        if (!value["IncomeType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PayeeAccountBalanceResult.IncomeType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_incomeType = value["IncomeType"].GetInt64();
        m_incomeTypeHasBeenSet = true;
    }

    if (value.HasMember("Balance") && !value["Balance"].IsNull())
    {
        if (!value["Balance"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayeeAccountBalanceResult.Balance` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_balance = string(value["Balance"].GetString());
        m_balanceHasBeenSet = true;
    }

    if (value.HasMember("SystemFreezeBalance") && !value["SystemFreezeBalance"].IsNull())
    {
        if (!value["SystemFreezeBalance"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayeeAccountBalanceResult.SystemFreezeBalance` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_systemFreezeBalance = string(value["SystemFreezeBalance"].GetString());
        m_systemFreezeBalanceHasBeenSet = true;
    }

    if (value.HasMember("ManualFreezeBalance") && !value["ManualFreezeBalance"].IsNull())
    {
        if (!value["ManualFreezeBalance"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayeeAccountBalanceResult.ManualFreezeBalance` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_manualFreezeBalance = string(value["ManualFreezeBalance"].GetString());
        m_manualFreezeBalanceHasBeenSet = true;
    }

    if (value.HasMember("PayableBalance") && !value["PayableBalance"].IsNull())
    {
        if (!value["PayableBalance"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayeeAccountBalanceResult.PayableBalance` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payableBalance = string(value["PayableBalance"].GetString());
        m_payableBalanceHasBeenSet = true;
    }

    if (value.HasMember("PaidBalance") && !value["PaidBalance"].IsNull())
    {
        if (!value["PaidBalance"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayeeAccountBalanceResult.PaidBalance` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paidBalance = string(value["PaidBalance"].GetString());
        m_paidBalanceHasBeenSet = true;
    }

    if (value.HasMember("InPayBalance") && !value["InPayBalance"].IsNull())
    {
        if (!value["InPayBalance"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayeeAccountBalanceResult.InPayBalance` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inPayBalance = string(value["InPayBalance"].GetString());
        m_inPayBalanceHasBeenSet = true;
    }

    if (value.HasMember("SumSettlementAmount") && !value["SumSettlementAmount"].IsNull())
    {
        if (!value["SumSettlementAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayeeAccountBalanceResult.SumSettlementAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sumSettlementAmount = string(value["SumSettlementAmount"].GetString());
        m_sumSettlementAmountHasBeenSet = true;
    }

    if (value.HasMember("PaidIncomeTax") && !value["PaidIncomeTax"].IsNull())
    {
        if (!value["PaidIncomeTax"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayeeAccountBalanceResult.PaidIncomeTax` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paidIncomeTax = string(value["PaidIncomeTax"].GetString());
        m_paidIncomeTaxHasBeenSet = true;
    }

    if (value.HasMember("InPayIncomeTax") && !value["InPayIncomeTax"].IsNull())
    {
        if (!value["InPayIncomeTax"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayeeAccountBalanceResult.InPayIncomeTax` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inPayIncomeTax = string(value["InPayIncomeTax"].GetString());
        m_inPayIncomeTaxHasBeenSet = true;
    }

    if (value.HasMember("PaidValueAddedTax") && !value["PaidValueAddedTax"].IsNull())
    {
        if (!value["PaidValueAddedTax"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayeeAccountBalanceResult.PaidValueAddedTax` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paidValueAddedTax = string(value["PaidValueAddedTax"].GetString());
        m_paidValueAddedTaxHasBeenSet = true;
    }

    if (value.HasMember("InPayValueAddedTax") && !value["InPayValueAddedTax"].IsNull())
    {
        if (!value["InPayValueAddedTax"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayeeAccountBalanceResult.InPayValueAddedTax` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inPayValueAddedTax = string(value["InPayValueAddedTax"].GetString());
        m_inPayValueAddedTaxHasBeenSet = true;
    }

    if (value.HasMember("PaidAttachTax") && !value["PaidAttachTax"].IsNull())
    {
        if (!value["PaidAttachTax"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayeeAccountBalanceResult.PaidAttachTax` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paidAttachTax = string(value["PaidAttachTax"].GetString());
        m_paidAttachTaxHasBeenSet = true;
    }

    if (value.HasMember("InPayAttachTax") && !value["InPayAttachTax"].IsNull())
    {
        if (!value["InPayAttachTax"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayeeAccountBalanceResult.InPayAttachTax` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inPayAttachTax = string(value["InPayAttachTax"].GetString());
        m_inPayAttachTaxHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PayeeAccountBalanceResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_accountIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountId.c_str(), allocator).Move(), allocator);
    }

    if (m_incomeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncomeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_incomeType, allocator);
    }

    if (m_balanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Balance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_balance.c_str(), allocator).Move(), allocator);
    }

    if (m_systemFreezeBalanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SystemFreezeBalance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_systemFreezeBalance.c_str(), allocator).Move(), allocator);
    }

    if (m_manualFreezeBalanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManualFreezeBalance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_manualFreezeBalance.c_str(), allocator).Move(), allocator);
    }

    if (m_payableBalanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayableBalance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payableBalance.c_str(), allocator).Move(), allocator);
    }

    if (m_paidBalanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaidBalance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paidBalance.c_str(), allocator).Move(), allocator);
    }

    if (m_inPayBalanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InPayBalance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inPayBalance.c_str(), allocator).Move(), allocator);
    }

    if (m_sumSettlementAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SumSettlementAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sumSettlementAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_paidIncomeTaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaidIncomeTax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paidIncomeTax.c_str(), allocator).Move(), allocator);
    }

    if (m_inPayIncomeTaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InPayIncomeTax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inPayIncomeTax.c_str(), allocator).Move(), allocator);
    }

    if (m_paidValueAddedTaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaidValueAddedTax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paidValueAddedTax.c_str(), allocator).Move(), allocator);
    }

    if (m_inPayValueAddedTaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InPayValueAddedTax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inPayValueAddedTax.c_str(), allocator).Move(), allocator);
    }

    if (m_paidAttachTaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaidAttachTax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paidAttachTax.c_str(), allocator).Move(), allocator);
    }

    if (m_inPayAttachTaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InPayAttachTax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inPayAttachTax.c_str(), allocator).Move(), allocator);
    }

}


string PayeeAccountBalanceResult::GetAccountId() const
{
    return m_accountId;
}

void PayeeAccountBalanceResult::SetAccountId(const string& _accountId)
{
    m_accountId = _accountId;
    m_accountIdHasBeenSet = true;
}

bool PayeeAccountBalanceResult::AccountIdHasBeenSet() const
{
    return m_accountIdHasBeenSet;
}

int64_t PayeeAccountBalanceResult::GetIncomeType() const
{
    return m_incomeType;
}

void PayeeAccountBalanceResult::SetIncomeType(const int64_t& _incomeType)
{
    m_incomeType = _incomeType;
    m_incomeTypeHasBeenSet = true;
}

bool PayeeAccountBalanceResult::IncomeTypeHasBeenSet() const
{
    return m_incomeTypeHasBeenSet;
}

string PayeeAccountBalanceResult::GetBalance() const
{
    return m_balance;
}

void PayeeAccountBalanceResult::SetBalance(const string& _balance)
{
    m_balance = _balance;
    m_balanceHasBeenSet = true;
}

bool PayeeAccountBalanceResult::BalanceHasBeenSet() const
{
    return m_balanceHasBeenSet;
}

string PayeeAccountBalanceResult::GetSystemFreezeBalance() const
{
    return m_systemFreezeBalance;
}

void PayeeAccountBalanceResult::SetSystemFreezeBalance(const string& _systemFreezeBalance)
{
    m_systemFreezeBalance = _systemFreezeBalance;
    m_systemFreezeBalanceHasBeenSet = true;
}

bool PayeeAccountBalanceResult::SystemFreezeBalanceHasBeenSet() const
{
    return m_systemFreezeBalanceHasBeenSet;
}

string PayeeAccountBalanceResult::GetManualFreezeBalance() const
{
    return m_manualFreezeBalance;
}

void PayeeAccountBalanceResult::SetManualFreezeBalance(const string& _manualFreezeBalance)
{
    m_manualFreezeBalance = _manualFreezeBalance;
    m_manualFreezeBalanceHasBeenSet = true;
}

bool PayeeAccountBalanceResult::ManualFreezeBalanceHasBeenSet() const
{
    return m_manualFreezeBalanceHasBeenSet;
}

string PayeeAccountBalanceResult::GetPayableBalance() const
{
    return m_payableBalance;
}

void PayeeAccountBalanceResult::SetPayableBalance(const string& _payableBalance)
{
    m_payableBalance = _payableBalance;
    m_payableBalanceHasBeenSet = true;
}

bool PayeeAccountBalanceResult::PayableBalanceHasBeenSet() const
{
    return m_payableBalanceHasBeenSet;
}

string PayeeAccountBalanceResult::GetPaidBalance() const
{
    return m_paidBalance;
}

void PayeeAccountBalanceResult::SetPaidBalance(const string& _paidBalance)
{
    m_paidBalance = _paidBalance;
    m_paidBalanceHasBeenSet = true;
}

bool PayeeAccountBalanceResult::PaidBalanceHasBeenSet() const
{
    return m_paidBalanceHasBeenSet;
}

string PayeeAccountBalanceResult::GetInPayBalance() const
{
    return m_inPayBalance;
}

void PayeeAccountBalanceResult::SetInPayBalance(const string& _inPayBalance)
{
    m_inPayBalance = _inPayBalance;
    m_inPayBalanceHasBeenSet = true;
}

bool PayeeAccountBalanceResult::InPayBalanceHasBeenSet() const
{
    return m_inPayBalanceHasBeenSet;
}

string PayeeAccountBalanceResult::GetSumSettlementAmount() const
{
    return m_sumSettlementAmount;
}

void PayeeAccountBalanceResult::SetSumSettlementAmount(const string& _sumSettlementAmount)
{
    m_sumSettlementAmount = _sumSettlementAmount;
    m_sumSettlementAmountHasBeenSet = true;
}

bool PayeeAccountBalanceResult::SumSettlementAmountHasBeenSet() const
{
    return m_sumSettlementAmountHasBeenSet;
}

string PayeeAccountBalanceResult::GetPaidIncomeTax() const
{
    return m_paidIncomeTax;
}

void PayeeAccountBalanceResult::SetPaidIncomeTax(const string& _paidIncomeTax)
{
    m_paidIncomeTax = _paidIncomeTax;
    m_paidIncomeTaxHasBeenSet = true;
}

bool PayeeAccountBalanceResult::PaidIncomeTaxHasBeenSet() const
{
    return m_paidIncomeTaxHasBeenSet;
}

string PayeeAccountBalanceResult::GetInPayIncomeTax() const
{
    return m_inPayIncomeTax;
}

void PayeeAccountBalanceResult::SetInPayIncomeTax(const string& _inPayIncomeTax)
{
    m_inPayIncomeTax = _inPayIncomeTax;
    m_inPayIncomeTaxHasBeenSet = true;
}

bool PayeeAccountBalanceResult::InPayIncomeTaxHasBeenSet() const
{
    return m_inPayIncomeTaxHasBeenSet;
}

string PayeeAccountBalanceResult::GetPaidValueAddedTax() const
{
    return m_paidValueAddedTax;
}

void PayeeAccountBalanceResult::SetPaidValueAddedTax(const string& _paidValueAddedTax)
{
    m_paidValueAddedTax = _paidValueAddedTax;
    m_paidValueAddedTaxHasBeenSet = true;
}

bool PayeeAccountBalanceResult::PaidValueAddedTaxHasBeenSet() const
{
    return m_paidValueAddedTaxHasBeenSet;
}

string PayeeAccountBalanceResult::GetInPayValueAddedTax() const
{
    return m_inPayValueAddedTax;
}

void PayeeAccountBalanceResult::SetInPayValueAddedTax(const string& _inPayValueAddedTax)
{
    m_inPayValueAddedTax = _inPayValueAddedTax;
    m_inPayValueAddedTaxHasBeenSet = true;
}

bool PayeeAccountBalanceResult::InPayValueAddedTaxHasBeenSet() const
{
    return m_inPayValueAddedTaxHasBeenSet;
}

string PayeeAccountBalanceResult::GetPaidAttachTax() const
{
    return m_paidAttachTax;
}

void PayeeAccountBalanceResult::SetPaidAttachTax(const string& _paidAttachTax)
{
    m_paidAttachTax = _paidAttachTax;
    m_paidAttachTaxHasBeenSet = true;
}

bool PayeeAccountBalanceResult::PaidAttachTaxHasBeenSet() const
{
    return m_paidAttachTaxHasBeenSet;
}

string PayeeAccountBalanceResult::GetInPayAttachTax() const
{
    return m_inPayAttachTax;
}

void PayeeAccountBalanceResult::SetInPayAttachTax(const string& _inPayAttachTax)
{
    m_inPayAttachTax = _inPayAttachTax;
    m_inPayAttachTaxHasBeenSet = true;
}

bool PayeeAccountBalanceResult::InPayAttachTaxHasBeenSet() const
{
    return m_inPayAttachTaxHasBeenSet;
}

