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

#include <tencentcloud/billing/v20180709/model/PayModeSummaryOverviewItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

PayModeSummaryOverviewItem::PayModeSummaryOverviewItem() :
    m_payModeHasBeenSet(false),
    m_payModeNameHasBeenSet(false),
    m_realTotalCostRatioHasBeenSet(false),
    m_realTotalCostHasBeenSet(false),
    m_cashPayAmountHasBeenSet(false),
    m_incentivePayAmountHasBeenSet(false),
    m_voucherPayAmountHasBeenSet(false),
    m_transferPayAmountHasBeenSet(false),
    m_totalCostHasBeenSet(false),
    m_detailHasBeenSet(false)
{
}

CoreInternalOutcome PayModeSummaryOverviewItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayModeSummaryOverviewItem.PayMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = string(value["PayMode"].GetString());
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("PayModeName") && !value["PayModeName"].IsNull())
    {
        if (!value["PayModeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayModeSummaryOverviewItem.PayModeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payModeName = string(value["PayModeName"].GetString());
        m_payModeNameHasBeenSet = true;
    }

    if (value.HasMember("RealTotalCostRatio") && !value["RealTotalCostRatio"].IsNull())
    {
        if (!value["RealTotalCostRatio"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayModeSummaryOverviewItem.RealTotalCostRatio` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realTotalCostRatio = string(value["RealTotalCostRatio"].GetString());
        m_realTotalCostRatioHasBeenSet = true;
    }

    if (value.HasMember("RealTotalCost") && !value["RealTotalCost"].IsNull())
    {
        if (!value["RealTotalCost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayModeSummaryOverviewItem.RealTotalCost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realTotalCost = string(value["RealTotalCost"].GetString());
        m_realTotalCostHasBeenSet = true;
    }

    if (value.HasMember("CashPayAmount") && !value["CashPayAmount"].IsNull())
    {
        if (!value["CashPayAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayModeSummaryOverviewItem.CashPayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cashPayAmount = string(value["CashPayAmount"].GetString());
        m_cashPayAmountHasBeenSet = true;
    }

    if (value.HasMember("IncentivePayAmount") && !value["IncentivePayAmount"].IsNull())
    {
        if (!value["IncentivePayAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayModeSummaryOverviewItem.IncentivePayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_incentivePayAmount = string(value["IncentivePayAmount"].GetString());
        m_incentivePayAmountHasBeenSet = true;
    }

    if (value.HasMember("VoucherPayAmount") && !value["VoucherPayAmount"].IsNull())
    {
        if (!value["VoucherPayAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayModeSummaryOverviewItem.VoucherPayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_voucherPayAmount = string(value["VoucherPayAmount"].GetString());
        m_voucherPayAmountHasBeenSet = true;
    }

    if (value.HasMember("TransferPayAmount") && !value["TransferPayAmount"].IsNull())
    {
        if (!value["TransferPayAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayModeSummaryOverviewItem.TransferPayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transferPayAmount = string(value["TransferPayAmount"].GetString());
        m_transferPayAmountHasBeenSet = true;
    }

    if (value.HasMember("TotalCost") && !value["TotalCost"].IsNull())
    {
        if (!value["TotalCost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayModeSummaryOverviewItem.TotalCost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_totalCost = string(value["TotalCost"].GetString());
        m_totalCostHasBeenSet = true;
    }

    if (value.HasMember("Detail") && !value["Detail"].IsNull())
    {
        if (!value["Detail"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PayModeSummaryOverviewItem.Detail` is not array type"));

        const rapidjson::Value &tmpValue = value["Detail"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ActionSummaryOverviewItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_detail.push_back(item);
        }
        m_detailHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PayModeSummaryOverviewItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payMode.c_str(), allocator).Move(), allocator);
    }

    if (m_payModeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayModeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payModeName.c_str(), allocator).Move(), allocator);
    }

    if (m_realTotalCostRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealTotalCostRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_realTotalCostRatio.c_str(), allocator).Move(), allocator);
    }

    if (m_realTotalCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealTotalCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_realTotalCost.c_str(), allocator).Move(), allocator);
    }

    if (m_cashPayAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CashPayAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cashPayAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_incentivePayAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncentivePayAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_incentivePayAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_voucherPayAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoucherPayAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_voucherPayAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_transferPayAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransferPayAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transferPayAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_totalCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_totalCost.c_str(), allocator).Move(), allocator);
    }

    if (m_detailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Detail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_detail.begin(); itr != m_detail.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string PayModeSummaryOverviewItem::GetPayMode() const
{
    return m_payMode;
}

void PayModeSummaryOverviewItem::SetPayMode(const string& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool PayModeSummaryOverviewItem::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

string PayModeSummaryOverviewItem::GetPayModeName() const
{
    return m_payModeName;
}

void PayModeSummaryOverviewItem::SetPayModeName(const string& _payModeName)
{
    m_payModeName = _payModeName;
    m_payModeNameHasBeenSet = true;
}

bool PayModeSummaryOverviewItem::PayModeNameHasBeenSet() const
{
    return m_payModeNameHasBeenSet;
}

string PayModeSummaryOverviewItem::GetRealTotalCostRatio() const
{
    return m_realTotalCostRatio;
}

void PayModeSummaryOverviewItem::SetRealTotalCostRatio(const string& _realTotalCostRatio)
{
    m_realTotalCostRatio = _realTotalCostRatio;
    m_realTotalCostRatioHasBeenSet = true;
}

bool PayModeSummaryOverviewItem::RealTotalCostRatioHasBeenSet() const
{
    return m_realTotalCostRatioHasBeenSet;
}

string PayModeSummaryOverviewItem::GetRealTotalCost() const
{
    return m_realTotalCost;
}

void PayModeSummaryOverviewItem::SetRealTotalCost(const string& _realTotalCost)
{
    m_realTotalCost = _realTotalCost;
    m_realTotalCostHasBeenSet = true;
}

bool PayModeSummaryOverviewItem::RealTotalCostHasBeenSet() const
{
    return m_realTotalCostHasBeenSet;
}

string PayModeSummaryOverviewItem::GetCashPayAmount() const
{
    return m_cashPayAmount;
}

void PayModeSummaryOverviewItem::SetCashPayAmount(const string& _cashPayAmount)
{
    m_cashPayAmount = _cashPayAmount;
    m_cashPayAmountHasBeenSet = true;
}

bool PayModeSummaryOverviewItem::CashPayAmountHasBeenSet() const
{
    return m_cashPayAmountHasBeenSet;
}

string PayModeSummaryOverviewItem::GetIncentivePayAmount() const
{
    return m_incentivePayAmount;
}

void PayModeSummaryOverviewItem::SetIncentivePayAmount(const string& _incentivePayAmount)
{
    m_incentivePayAmount = _incentivePayAmount;
    m_incentivePayAmountHasBeenSet = true;
}

bool PayModeSummaryOverviewItem::IncentivePayAmountHasBeenSet() const
{
    return m_incentivePayAmountHasBeenSet;
}

string PayModeSummaryOverviewItem::GetVoucherPayAmount() const
{
    return m_voucherPayAmount;
}

void PayModeSummaryOverviewItem::SetVoucherPayAmount(const string& _voucherPayAmount)
{
    m_voucherPayAmount = _voucherPayAmount;
    m_voucherPayAmountHasBeenSet = true;
}

bool PayModeSummaryOverviewItem::VoucherPayAmountHasBeenSet() const
{
    return m_voucherPayAmountHasBeenSet;
}

string PayModeSummaryOverviewItem::GetTransferPayAmount() const
{
    return m_transferPayAmount;
}

void PayModeSummaryOverviewItem::SetTransferPayAmount(const string& _transferPayAmount)
{
    m_transferPayAmount = _transferPayAmount;
    m_transferPayAmountHasBeenSet = true;
}

bool PayModeSummaryOverviewItem::TransferPayAmountHasBeenSet() const
{
    return m_transferPayAmountHasBeenSet;
}

string PayModeSummaryOverviewItem::GetTotalCost() const
{
    return m_totalCost;
}

void PayModeSummaryOverviewItem::SetTotalCost(const string& _totalCost)
{
    m_totalCost = _totalCost;
    m_totalCostHasBeenSet = true;
}

bool PayModeSummaryOverviewItem::TotalCostHasBeenSet() const
{
    return m_totalCostHasBeenSet;
}

vector<ActionSummaryOverviewItem> PayModeSummaryOverviewItem::GetDetail() const
{
    return m_detail;
}

void PayModeSummaryOverviewItem::SetDetail(const vector<ActionSummaryOverviewItem>& _detail)
{
    m_detail = _detail;
    m_detailHasBeenSet = true;
}

bool PayModeSummaryOverviewItem::DetailHasBeenSet() const
{
    return m_detailHasBeenSet;
}

