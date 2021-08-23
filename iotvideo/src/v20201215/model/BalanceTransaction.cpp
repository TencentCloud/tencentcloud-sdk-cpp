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

#include <tencentcloud/iotvideo/v20201215/model/BalanceTransaction.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideo::V20201215::Model;
using namespace std;

BalanceTransaction::BalanceTransaction() :
    m_accountTypeHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_dealIdHasBeenSet(false),
    m_amountHasBeenSet(false),
    m_balanceHasBeenSet(false),
    m_operationTimeHasBeenSet(false)
{
}

CoreInternalOutcome BalanceTransaction::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AccountType") && !value["AccountType"].IsNull())
    {
        if (!value["AccountType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BalanceTransaction.AccountType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_accountType = value["AccountType"].GetUint64();
        m_accountTypeHasBeenSet = true;
    }

    if (value.HasMember("Operation") && !value["Operation"].IsNull())
    {
        if (!value["Operation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BalanceTransaction.Operation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operation = string(value["Operation"].GetString());
        m_operationHasBeenSet = true;
    }

    if (value.HasMember("DealId") && !value["DealId"].IsNull())
    {
        if (!value["DealId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BalanceTransaction.DealId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dealId = string(value["DealId"].GetString());
        m_dealIdHasBeenSet = true;
    }

    if (value.HasMember("Amount") && !value["Amount"].IsNull())
    {
        if (!value["Amount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BalanceTransaction.Amount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_amount = value["Amount"].GetUint64();
        m_amountHasBeenSet = true;
    }

    if (value.HasMember("Balance") && !value["Balance"].IsNull())
    {
        if (!value["Balance"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BalanceTransaction.Balance` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_balance = value["Balance"].GetUint64();
        m_balanceHasBeenSet = true;
    }

    if (value.HasMember("OperationTime") && !value["OperationTime"].IsNull())
    {
        if (!value["OperationTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BalanceTransaction.OperationTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_operationTime = value["OperationTime"].GetInt64();
        m_operationTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BalanceTransaction::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_accountTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accountType, allocator);
    }

    if (m_operationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operation.c_str(), allocator).Move(), allocator);
    }

    if (m_dealIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DealId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dealId.c_str(), allocator).Move(), allocator);
    }

    if (m_amountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Amount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_amount, allocator);
    }

    if (m_balanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Balance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_balance, allocator);
    }

    if (m_operationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_operationTime, allocator);
    }

}


uint64_t BalanceTransaction::GetAccountType() const
{
    return m_accountType;
}

void BalanceTransaction::SetAccountType(const uint64_t& _accountType)
{
    m_accountType = _accountType;
    m_accountTypeHasBeenSet = true;
}

bool BalanceTransaction::AccountTypeHasBeenSet() const
{
    return m_accountTypeHasBeenSet;
}

string BalanceTransaction::GetOperation() const
{
    return m_operation;
}

void BalanceTransaction::SetOperation(const string& _operation)
{
    m_operation = _operation;
    m_operationHasBeenSet = true;
}

bool BalanceTransaction::OperationHasBeenSet() const
{
    return m_operationHasBeenSet;
}

string BalanceTransaction::GetDealId() const
{
    return m_dealId;
}

void BalanceTransaction::SetDealId(const string& _dealId)
{
    m_dealId = _dealId;
    m_dealIdHasBeenSet = true;
}

bool BalanceTransaction::DealIdHasBeenSet() const
{
    return m_dealIdHasBeenSet;
}

uint64_t BalanceTransaction::GetAmount() const
{
    return m_amount;
}

void BalanceTransaction::SetAmount(const uint64_t& _amount)
{
    m_amount = _amount;
    m_amountHasBeenSet = true;
}

bool BalanceTransaction::AmountHasBeenSet() const
{
    return m_amountHasBeenSet;
}

uint64_t BalanceTransaction::GetBalance() const
{
    return m_balance;
}

void BalanceTransaction::SetBalance(const uint64_t& _balance)
{
    m_balance = _balance;
    m_balanceHasBeenSet = true;
}

bool BalanceTransaction::BalanceHasBeenSet() const
{
    return m_balanceHasBeenSet;
}

int64_t BalanceTransaction::GetOperationTime() const
{
    return m_operationTime;
}

void BalanceTransaction::SetOperationTime(const int64_t& _operationTime)
{
    m_operationTime = _operationTime;
    m_operationTimeHasBeenSet = true;
}

bool BalanceTransaction::OperationTimeHasBeenSet() const
{
    return m_operationTimeHasBeenSet;
}

