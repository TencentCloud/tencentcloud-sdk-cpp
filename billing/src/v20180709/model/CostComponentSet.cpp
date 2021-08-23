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

#include <tencentcloud/billing/v20180709/model/CostComponentSet.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

CostComponentSet::CostComponentSet() :
    m_componentCodeNameHasBeenSet(false),
    m_itemCodeNameHasBeenSet(false),
    m_singlePriceHasBeenSet(false),
    m_priceUnitHasBeenSet(false),
    m_usedAmountHasBeenSet(false),
    m_usedAmountUnitHasBeenSet(false),
    m_costHasBeenSet(false),
    m_discountHasBeenSet(false),
    m_realCostHasBeenSet(false),
    m_voucherPayAmountHasBeenSet(false),
    m_cashPayAmountHasBeenSet(false),
    m_incentivePayAmountHasBeenSet(false)
{
}

CoreInternalOutcome CostComponentSet::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ComponentCodeName") && !value["ComponentCodeName"].IsNull())
    {
        if (!value["ComponentCodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CostComponentSet.ComponentCodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_componentCodeName = string(value["ComponentCodeName"].GetString());
        m_componentCodeNameHasBeenSet = true;
    }

    if (value.HasMember("ItemCodeName") && !value["ItemCodeName"].IsNull())
    {
        if (!value["ItemCodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CostComponentSet.ItemCodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_itemCodeName = string(value["ItemCodeName"].GetString());
        m_itemCodeNameHasBeenSet = true;
    }

    if (value.HasMember("SinglePrice") && !value["SinglePrice"].IsNull())
    {
        if (!value["SinglePrice"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CostComponentSet.SinglePrice` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_singlePrice = string(value["SinglePrice"].GetString());
        m_singlePriceHasBeenSet = true;
    }

    if (value.HasMember("PriceUnit") && !value["PriceUnit"].IsNull())
    {
        if (!value["PriceUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CostComponentSet.PriceUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_priceUnit = string(value["PriceUnit"].GetString());
        m_priceUnitHasBeenSet = true;
    }

    if (value.HasMember("UsedAmount") && !value["UsedAmount"].IsNull())
    {
        if (!value["UsedAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CostComponentSet.UsedAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_usedAmount = string(value["UsedAmount"].GetString());
        m_usedAmountHasBeenSet = true;
    }

    if (value.HasMember("UsedAmountUnit") && !value["UsedAmountUnit"].IsNull())
    {
        if (!value["UsedAmountUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CostComponentSet.UsedAmountUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_usedAmountUnit = string(value["UsedAmountUnit"].GetString());
        m_usedAmountUnitHasBeenSet = true;
    }

    if (value.HasMember("Cost") && !value["Cost"].IsNull())
    {
        if (!value["Cost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CostComponentSet.Cost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cost = string(value["Cost"].GetString());
        m_costHasBeenSet = true;
    }

    if (value.HasMember("Discount") && !value["Discount"].IsNull())
    {
        if (!value["Discount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CostComponentSet.Discount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_discount = string(value["Discount"].GetString());
        m_discountHasBeenSet = true;
    }

    if (value.HasMember("RealCost") && !value["RealCost"].IsNull())
    {
        if (!value["RealCost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CostComponentSet.RealCost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realCost = string(value["RealCost"].GetString());
        m_realCostHasBeenSet = true;
    }

    if (value.HasMember("VoucherPayAmount") && !value["VoucherPayAmount"].IsNull())
    {
        if (!value["VoucherPayAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CostComponentSet.VoucherPayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_voucherPayAmount = string(value["VoucherPayAmount"].GetString());
        m_voucherPayAmountHasBeenSet = true;
    }

    if (value.HasMember("CashPayAmount") && !value["CashPayAmount"].IsNull())
    {
        if (!value["CashPayAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CostComponentSet.CashPayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cashPayAmount = string(value["CashPayAmount"].GetString());
        m_cashPayAmountHasBeenSet = true;
    }

    if (value.HasMember("IncentivePayAmount") && !value["IncentivePayAmount"].IsNull())
    {
        if (!value["IncentivePayAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CostComponentSet.IncentivePayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_incentivePayAmount = string(value["IncentivePayAmount"].GetString());
        m_incentivePayAmountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CostComponentSet::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_componentCodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentCodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_componentCodeName.c_str(), allocator).Move(), allocator);
    }

    if (m_itemCodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemCodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_itemCodeName.c_str(), allocator).Move(), allocator);
    }

    if (m_singlePriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SinglePrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_singlePrice.c_str(), allocator).Move(), allocator);
    }

    if (m_priceUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PriceUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_priceUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_usedAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_usedAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_usedAmountUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedAmountUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_usedAmountUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_costHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cost.c_str(), allocator).Move(), allocator);
    }

    if (m_discountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Discount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_discount.c_str(), allocator).Move(), allocator);
    }

    if (m_realCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_realCost.c_str(), allocator).Move(), allocator);
    }

    if (m_voucherPayAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoucherPayAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_voucherPayAmount.c_str(), allocator).Move(), allocator);
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

}


string CostComponentSet::GetComponentCodeName() const
{
    return m_componentCodeName;
}

void CostComponentSet::SetComponentCodeName(const string& _componentCodeName)
{
    m_componentCodeName = _componentCodeName;
    m_componentCodeNameHasBeenSet = true;
}

bool CostComponentSet::ComponentCodeNameHasBeenSet() const
{
    return m_componentCodeNameHasBeenSet;
}

string CostComponentSet::GetItemCodeName() const
{
    return m_itemCodeName;
}

void CostComponentSet::SetItemCodeName(const string& _itemCodeName)
{
    m_itemCodeName = _itemCodeName;
    m_itemCodeNameHasBeenSet = true;
}

bool CostComponentSet::ItemCodeNameHasBeenSet() const
{
    return m_itemCodeNameHasBeenSet;
}

string CostComponentSet::GetSinglePrice() const
{
    return m_singlePrice;
}

void CostComponentSet::SetSinglePrice(const string& _singlePrice)
{
    m_singlePrice = _singlePrice;
    m_singlePriceHasBeenSet = true;
}

bool CostComponentSet::SinglePriceHasBeenSet() const
{
    return m_singlePriceHasBeenSet;
}

string CostComponentSet::GetPriceUnit() const
{
    return m_priceUnit;
}

void CostComponentSet::SetPriceUnit(const string& _priceUnit)
{
    m_priceUnit = _priceUnit;
    m_priceUnitHasBeenSet = true;
}

bool CostComponentSet::PriceUnitHasBeenSet() const
{
    return m_priceUnitHasBeenSet;
}

string CostComponentSet::GetUsedAmount() const
{
    return m_usedAmount;
}

void CostComponentSet::SetUsedAmount(const string& _usedAmount)
{
    m_usedAmount = _usedAmount;
    m_usedAmountHasBeenSet = true;
}

bool CostComponentSet::UsedAmountHasBeenSet() const
{
    return m_usedAmountHasBeenSet;
}

string CostComponentSet::GetUsedAmountUnit() const
{
    return m_usedAmountUnit;
}

void CostComponentSet::SetUsedAmountUnit(const string& _usedAmountUnit)
{
    m_usedAmountUnit = _usedAmountUnit;
    m_usedAmountUnitHasBeenSet = true;
}

bool CostComponentSet::UsedAmountUnitHasBeenSet() const
{
    return m_usedAmountUnitHasBeenSet;
}

string CostComponentSet::GetCost() const
{
    return m_cost;
}

void CostComponentSet::SetCost(const string& _cost)
{
    m_cost = _cost;
    m_costHasBeenSet = true;
}

bool CostComponentSet::CostHasBeenSet() const
{
    return m_costHasBeenSet;
}

string CostComponentSet::GetDiscount() const
{
    return m_discount;
}

void CostComponentSet::SetDiscount(const string& _discount)
{
    m_discount = _discount;
    m_discountHasBeenSet = true;
}

bool CostComponentSet::DiscountHasBeenSet() const
{
    return m_discountHasBeenSet;
}

string CostComponentSet::GetRealCost() const
{
    return m_realCost;
}

void CostComponentSet::SetRealCost(const string& _realCost)
{
    m_realCost = _realCost;
    m_realCostHasBeenSet = true;
}

bool CostComponentSet::RealCostHasBeenSet() const
{
    return m_realCostHasBeenSet;
}

string CostComponentSet::GetVoucherPayAmount() const
{
    return m_voucherPayAmount;
}

void CostComponentSet::SetVoucherPayAmount(const string& _voucherPayAmount)
{
    m_voucherPayAmount = _voucherPayAmount;
    m_voucherPayAmountHasBeenSet = true;
}

bool CostComponentSet::VoucherPayAmountHasBeenSet() const
{
    return m_voucherPayAmountHasBeenSet;
}

string CostComponentSet::GetCashPayAmount() const
{
    return m_cashPayAmount;
}

void CostComponentSet::SetCashPayAmount(const string& _cashPayAmount)
{
    m_cashPayAmount = _cashPayAmount;
    m_cashPayAmountHasBeenSet = true;
}

bool CostComponentSet::CashPayAmountHasBeenSet() const
{
    return m_cashPayAmountHasBeenSet;
}

string CostComponentSet::GetIncentivePayAmount() const
{
    return m_incentivePayAmount;
}

void CostComponentSet::SetIncentivePayAmount(const string& _incentivePayAmount)
{
    m_incentivePayAmount = _incentivePayAmount;
    m_incentivePayAmountHasBeenSet = true;
}

bool CostComponentSet::IncentivePayAmountHasBeenSet() const
{
    return m_incentivePayAmountHasBeenSet;
}

