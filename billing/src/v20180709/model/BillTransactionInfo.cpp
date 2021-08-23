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

#include <tencentcloud/billing/v20180709/model/BillTransactionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

BillTransactionInfo::BillTransactionInfo() :
    m_actionTypeHasBeenSet(false),
    m_amountHasBeenSet(false),
    m_balanceHasBeenSet(false),
    m_billIdHasBeenSet(false),
    m_operationInfoHasBeenSet(false),
    m_operationTimeHasBeenSet(false),
    m_cashHasBeenSet(false),
    m_incentiveHasBeenSet(false),
    m_freezingHasBeenSet(false),
    m_payChannelHasBeenSet(false),
    m_deductModeHasBeenSet(false)
{
}

CoreInternalOutcome BillTransactionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ActionType") && !value["ActionType"].IsNull())
    {
        if (!value["ActionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillTransactionInfo.ActionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionType = string(value["ActionType"].GetString());
        m_actionTypeHasBeenSet = true;
    }

    if (value.HasMember("Amount") && !value["Amount"].IsNull())
    {
        if (!value["Amount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BillTransactionInfo.Amount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_amount = value["Amount"].GetInt64();
        m_amountHasBeenSet = true;
    }

    if (value.HasMember("Balance") && !value["Balance"].IsNull())
    {
        if (!value["Balance"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BillTransactionInfo.Balance` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_balance = value["Balance"].GetInt64();
        m_balanceHasBeenSet = true;
    }

    if (value.HasMember("BillId") && !value["BillId"].IsNull())
    {
        if (!value["BillId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillTransactionInfo.BillId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_billId = string(value["BillId"].GetString());
        m_billIdHasBeenSet = true;
    }

    if (value.HasMember("OperationInfo") && !value["OperationInfo"].IsNull())
    {
        if (!value["OperationInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillTransactionInfo.OperationInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operationInfo = string(value["OperationInfo"].GetString());
        m_operationInfoHasBeenSet = true;
    }

    if (value.HasMember("OperationTime") && !value["OperationTime"].IsNull())
    {
        if (!value["OperationTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillTransactionInfo.OperationTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operationTime = string(value["OperationTime"].GetString());
        m_operationTimeHasBeenSet = true;
    }

    if (value.HasMember("Cash") && !value["Cash"].IsNull())
    {
        if (!value["Cash"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BillTransactionInfo.Cash` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cash = value["Cash"].GetInt64();
        m_cashHasBeenSet = true;
    }

    if (value.HasMember("Incentive") && !value["Incentive"].IsNull())
    {
        if (!value["Incentive"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BillTransactionInfo.Incentive` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_incentive = value["Incentive"].GetInt64();
        m_incentiveHasBeenSet = true;
    }

    if (value.HasMember("Freezing") && !value["Freezing"].IsNull())
    {
        if (!value["Freezing"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BillTransactionInfo.Freezing` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_freezing = value["Freezing"].GetInt64();
        m_freezingHasBeenSet = true;
    }

    if (value.HasMember("PayChannel") && !value["PayChannel"].IsNull())
    {
        if (!value["PayChannel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillTransactionInfo.PayChannel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payChannel = string(value["PayChannel"].GetString());
        m_payChannelHasBeenSet = true;
    }

    if (value.HasMember("DeductMode") && !value["DeductMode"].IsNull())
    {
        if (!value["DeductMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillTransactionInfo.DeductMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deductMode = string(value["DeductMode"].GetString());
        m_deductModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BillTransactionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_actionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_actionType.c_str(), allocator).Move(), allocator);
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

    if (m_billIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_billId.c_str(), allocator).Move(), allocator);
    }

    if (m_operationInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperationInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operationInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_operationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operationTime.c_str(), allocator).Move(), allocator);
    }

    if (m_cashHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cash";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cash, allocator);
    }

    if (m_incentiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Incentive";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_incentive, allocator);
    }

    if (m_freezingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Freezing";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_freezing, allocator);
    }

    if (m_payChannelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayChannel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payChannel.c_str(), allocator).Move(), allocator);
    }

    if (m_deductModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeductMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deductMode.c_str(), allocator).Move(), allocator);
    }

}


string BillTransactionInfo::GetActionType() const
{
    return m_actionType;
}

void BillTransactionInfo::SetActionType(const string& _actionType)
{
    m_actionType = _actionType;
    m_actionTypeHasBeenSet = true;
}

bool BillTransactionInfo::ActionTypeHasBeenSet() const
{
    return m_actionTypeHasBeenSet;
}

int64_t BillTransactionInfo::GetAmount() const
{
    return m_amount;
}

void BillTransactionInfo::SetAmount(const int64_t& _amount)
{
    m_amount = _amount;
    m_amountHasBeenSet = true;
}

bool BillTransactionInfo::AmountHasBeenSet() const
{
    return m_amountHasBeenSet;
}

int64_t BillTransactionInfo::GetBalance() const
{
    return m_balance;
}

void BillTransactionInfo::SetBalance(const int64_t& _balance)
{
    m_balance = _balance;
    m_balanceHasBeenSet = true;
}

bool BillTransactionInfo::BalanceHasBeenSet() const
{
    return m_balanceHasBeenSet;
}

string BillTransactionInfo::GetBillId() const
{
    return m_billId;
}

void BillTransactionInfo::SetBillId(const string& _billId)
{
    m_billId = _billId;
    m_billIdHasBeenSet = true;
}

bool BillTransactionInfo::BillIdHasBeenSet() const
{
    return m_billIdHasBeenSet;
}

string BillTransactionInfo::GetOperationInfo() const
{
    return m_operationInfo;
}

void BillTransactionInfo::SetOperationInfo(const string& _operationInfo)
{
    m_operationInfo = _operationInfo;
    m_operationInfoHasBeenSet = true;
}

bool BillTransactionInfo::OperationInfoHasBeenSet() const
{
    return m_operationInfoHasBeenSet;
}

string BillTransactionInfo::GetOperationTime() const
{
    return m_operationTime;
}

void BillTransactionInfo::SetOperationTime(const string& _operationTime)
{
    m_operationTime = _operationTime;
    m_operationTimeHasBeenSet = true;
}

bool BillTransactionInfo::OperationTimeHasBeenSet() const
{
    return m_operationTimeHasBeenSet;
}

int64_t BillTransactionInfo::GetCash() const
{
    return m_cash;
}

void BillTransactionInfo::SetCash(const int64_t& _cash)
{
    m_cash = _cash;
    m_cashHasBeenSet = true;
}

bool BillTransactionInfo::CashHasBeenSet() const
{
    return m_cashHasBeenSet;
}

int64_t BillTransactionInfo::GetIncentive() const
{
    return m_incentive;
}

void BillTransactionInfo::SetIncentive(const int64_t& _incentive)
{
    m_incentive = _incentive;
    m_incentiveHasBeenSet = true;
}

bool BillTransactionInfo::IncentiveHasBeenSet() const
{
    return m_incentiveHasBeenSet;
}

int64_t BillTransactionInfo::GetFreezing() const
{
    return m_freezing;
}

void BillTransactionInfo::SetFreezing(const int64_t& _freezing)
{
    m_freezing = _freezing;
    m_freezingHasBeenSet = true;
}

bool BillTransactionInfo::FreezingHasBeenSet() const
{
    return m_freezingHasBeenSet;
}

string BillTransactionInfo::GetPayChannel() const
{
    return m_payChannel;
}

void BillTransactionInfo::SetPayChannel(const string& _payChannel)
{
    m_payChannel = _payChannel;
    m_payChannelHasBeenSet = true;
}

bool BillTransactionInfo::PayChannelHasBeenSet() const
{
    return m_payChannelHasBeenSet;
}

string BillTransactionInfo::GetDeductMode() const
{
    return m_deductMode;
}

void BillTransactionInfo::SetDeductMode(const string& _deductMode)
{
    m_deductMode = _deductMode;
    m_deductModeHasBeenSet = true;
}

bool BillTransactionInfo::DeductModeHasBeenSet() const
{
    return m_deductModeHasBeenSet;
}

