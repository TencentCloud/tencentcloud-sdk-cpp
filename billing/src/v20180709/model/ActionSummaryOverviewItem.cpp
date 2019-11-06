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

#include <tencentcloud/billing/v20180709/model/ActionSummaryOverviewItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Billing::V20180709::Model;
using namespace rapidjson;
using namespace std;

ActionSummaryOverviewItem::ActionSummaryOverviewItem() :
    m_actionTypeHasBeenSet(false),
    m_actionTypeNameHasBeenSet(false),
    m_realTotalCostHasBeenSet(false),
    m_realTotalCostRatioHasBeenSet(false),
    m_cashPayAmountHasBeenSet(false),
    m_incentivePayAmountHasBeenSet(false),
    m_voucherPayAmountHasBeenSet(false),
    m_billMonthHasBeenSet(false)
{
}

CoreInternalOutcome ActionSummaryOverviewItem::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("ActionType") && !value["ActionType"].IsNull())
    {
        if (!value["ActionType"].IsString())
        {
            return CoreInternalOutcome(Error("response `ActionSummaryOverviewItem.ActionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionType = string(value["ActionType"].GetString());
        m_actionTypeHasBeenSet = true;
    }

    if (value.HasMember("ActionTypeName") && !value["ActionTypeName"].IsNull())
    {
        if (!value["ActionTypeName"].IsString())
        {
            return CoreInternalOutcome(Error("response `ActionSummaryOverviewItem.ActionTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionTypeName = string(value["ActionTypeName"].GetString());
        m_actionTypeNameHasBeenSet = true;
    }

    if (value.HasMember("RealTotalCost") && !value["RealTotalCost"].IsNull())
    {
        if (!value["RealTotalCost"].IsString())
        {
            return CoreInternalOutcome(Error("response `ActionSummaryOverviewItem.RealTotalCost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realTotalCost = string(value["RealTotalCost"].GetString());
        m_realTotalCostHasBeenSet = true;
    }

    if (value.HasMember("RealTotalCostRatio") && !value["RealTotalCostRatio"].IsNull())
    {
        if (!value["RealTotalCostRatio"].IsString())
        {
            return CoreInternalOutcome(Error("response `ActionSummaryOverviewItem.RealTotalCostRatio` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realTotalCostRatio = string(value["RealTotalCostRatio"].GetString());
        m_realTotalCostRatioHasBeenSet = true;
    }

    if (value.HasMember("CashPayAmount") && !value["CashPayAmount"].IsNull())
    {
        if (!value["CashPayAmount"].IsString())
        {
            return CoreInternalOutcome(Error("response `ActionSummaryOverviewItem.CashPayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cashPayAmount = string(value["CashPayAmount"].GetString());
        m_cashPayAmountHasBeenSet = true;
    }

    if (value.HasMember("IncentivePayAmount") && !value["IncentivePayAmount"].IsNull())
    {
        if (!value["IncentivePayAmount"].IsString())
        {
            return CoreInternalOutcome(Error("response `ActionSummaryOverviewItem.IncentivePayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_incentivePayAmount = string(value["IncentivePayAmount"].GetString());
        m_incentivePayAmountHasBeenSet = true;
    }

    if (value.HasMember("VoucherPayAmount") && !value["VoucherPayAmount"].IsNull())
    {
        if (!value["VoucherPayAmount"].IsString())
        {
            return CoreInternalOutcome(Error("response `ActionSummaryOverviewItem.VoucherPayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_voucherPayAmount = string(value["VoucherPayAmount"].GetString());
        m_voucherPayAmountHasBeenSet = true;
    }

    if (value.HasMember("BillMonth") && !value["BillMonth"].IsNull())
    {
        if (!value["BillMonth"].IsString())
        {
            return CoreInternalOutcome(Error("response `ActionSummaryOverviewItem.BillMonth` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_billMonth = string(value["BillMonth"].GetString());
        m_billMonthHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ActionSummaryOverviewItem::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_actionTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ActionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_actionType.c_str(), allocator).Move(), allocator);
    }

    if (m_actionTypeNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ActionTypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_actionTypeName.c_str(), allocator).Move(), allocator);
    }

    if (m_realTotalCostHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RealTotalCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_realTotalCost.c_str(), allocator).Move(), allocator);
    }

    if (m_realTotalCostRatioHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RealTotalCostRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_realTotalCostRatio.c_str(), allocator).Move(), allocator);
    }

    if (m_cashPayAmountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CashPayAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_cashPayAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_incentivePayAmountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IncentivePayAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_incentivePayAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_voucherPayAmountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VoucherPayAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_voucherPayAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_billMonthHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BillMonth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_billMonth.c_str(), allocator).Move(), allocator);
    }

}


string ActionSummaryOverviewItem::GetActionType() const
{
    return m_actionType;
}

void ActionSummaryOverviewItem::SetActionType(const string& _actionType)
{
    m_actionType = _actionType;
    m_actionTypeHasBeenSet = true;
}

bool ActionSummaryOverviewItem::ActionTypeHasBeenSet() const
{
    return m_actionTypeHasBeenSet;
}

string ActionSummaryOverviewItem::GetActionTypeName() const
{
    return m_actionTypeName;
}

void ActionSummaryOverviewItem::SetActionTypeName(const string& _actionTypeName)
{
    m_actionTypeName = _actionTypeName;
    m_actionTypeNameHasBeenSet = true;
}

bool ActionSummaryOverviewItem::ActionTypeNameHasBeenSet() const
{
    return m_actionTypeNameHasBeenSet;
}

string ActionSummaryOverviewItem::GetRealTotalCost() const
{
    return m_realTotalCost;
}

void ActionSummaryOverviewItem::SetRealTotalCost(const string& _realTotalCost)
{
    m_realTotalCost = _realTotalCost;
    m_realTotalCostHasBeenSet = true;
}

bool ActionSummaryOverviewItem::RealTotalCostHasBeenSet() const
{
    return m_realTotalCostHasBeenSet;
}

string ActionSummaryOverviewItem::GetRealTotalCostRatio() const
{
    return m_realTotalCostRatio;
}

void ActionSummaryOverviewItem::SetRealTotalCostRatio(const string& _realTotalCostRatio)
{
    m_realTotalCostRatio = _realTotalCostRatio;
    m_realTotalCostRatioHasBeenSet = true;
}

bool ActionSummaryOverviewItem::RealTotalCostRatioHasBeenSet() const
{
    return m_realTotalCostRatioHasBeenSet;
}

string ActionSummaryOverviewItem::GetCashPayAmount() const
{
    return m_cashPayAmount;
}

void ActionSummaryOverviewItem::SetCashPayAmount(const string& _cashPayAmount)
{
    m_cashPayAmount = _cashPayAmount;
    m_cashPayAmountHasBeenSet = true;
}

bool ActionSummaryOverviewItem::CashPayAmountHasBeenSet() const
{
    return m_cashPayAmountHasBeenSet;
}

string ActionSummaryOverviewItem::GetIncentivePayAmount() const
{
    return m_incentivePayAmount;
}

void ActionSummaryOverviewItem::SetIncentivePayAmount(const string& _incentivePayAmount)
{
    m_incentivePayAmount = _incentivePayAmount;
    m_incentivePayAmountHasBeenSet = true;
}

bool ActionSummaryOverviewItem::IncentivePayAmountHasBeenSet() const
{
    return m_incentivePayAmountHasBeenSet;
}

string ActionSummaryOverviewItem::GetVoucherPayAmount() const
{
    return m_voucherPayAmount;
}

void ActionSummaryOverviewItem::SetVoucherPayAmount(const string& _voucherPayAmount)
{
    m_voucherPayAmount = _voucherPayAmount;
    m_voucherPayAmountHasBeenSet = true;
}

bool ActionSummaryOverviewItem::VoucherPayAmountHasBeenSet() const
{
    return m_voucherPayAmountHasBeenSet;
}

string ActionSummaryOverviewItem::GetBillMonth() const
{
    return m_billMonth;
}

void ActionSummaryOverviewItem::SetBillMonth(const string& _billMonth)
{
    m_billMonth = _billMonth;
    m_billMonthHasBeenSet = true;
}

bool ActionSummaryOverviewItem::BillMonthHasBeenSet() const
{
    return m_billMonthHasBeenSet;
}

