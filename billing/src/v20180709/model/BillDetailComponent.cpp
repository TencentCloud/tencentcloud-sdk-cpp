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

#include <tencentcloud/billing/v20180709/model/BillDetailComponent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Billing::V20180709::Model;
using namespace rapidjson;
using namespace std;

BillDetailComponent::BillDetailComponent() :
    m_componentCodeNameHasBeenSet(false),
    m_itemCodeNameHasBeenSet(false),
    m_singlePriceHasBeenSet(false),
    m_specifiedPriceHasBeenSet(false),
    m_priceUnitHasBeenSet(false),
    m_usedAmountHasBeenSet(false),
    m_usedAmountUnitHasBeenSet(false),
    m_timeSpanHasBeenSet(false),
    m_timeUnitNameHasBeenSet(false),
    m_costHasBeenSet(false),
    m_discountHasBeenSet(false),
    m_reduceTypeHasBeenSet(false),
    m_realCostHasBeenSet(false),
    m_voucherPayAmountHasBeenSet(false),
    m_cashPayAmountHasBeenSet(false),
    m_incentivePayAmountHasBeenSet(false),
    m_itemCodeHasBeenSet(false),
    m_componentCodeHasBeenSet(false),
    m_contractPriceHasBeenSet(false)
{
}

CoreInternalOutcome BillDetailComponent::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("ComponentCodeName") && !value["ComponentCodeName"].IsNull())
    {
        if (!value["ComponentCodeName"].IsString())
        {
            return CoreInternalOutcome(Error("response `BillDetailComponent.ComponentCodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_componentCodeName = string(value["ComponentCodeName"].GetString());
        m_componentCodeNameHasBeenSet = true;
    }

    if (value.HasMember("ItemCodeName") && !value["ItemCodeName"].IsNull())
    {
        if (!value["ItemCodeName"].IsString())
        {
            return CoreInternalOutcome(Error("response `BillDetailComponent.ItemCodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_itemCodeName = string(value["ItemCodeName"].GetString());
        m_itemCodeNameHasBeenSet = true;
    }

    if (value.HasMember("SinglePrice") && !value["SinglePrice"].IsNull())
    {
        if (!value["SinglePrice"].IsString())
        {
            return CoreInternalOutcome(Error("response `BillDetailComponent.SinglePrice` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_singlePrice = string(value["SinglePrice"].GetString());
        m_singlePriceHasBeenSet = true;
    }

    if (value.HasMember("SpecifiedPrice") && !value["SpecifiedPrice"].IsNull())
    {
        if (!value["SpecifiedPrice"].IsString())
        {
            return CoreInternalOutcome(Error("response `BillDetailComponent.SpecifiedPrice` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_specifiedPrice = string(value["SpecifiedPrice"].GetString());
        m_specifiedPriceHasBeenSet = true;
    }

    if (value.HasMember("PriceUnit") && !value["PriceUnit"].IsNull())
    {
        if (!value["PriceUnit"].IsString())
        {
            return CoreInternalOutcome(Error("response `BillDetailComponent.PriceUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_priceUnit = string(value["PriceUnit"].GetString());
        m_priceUnitHasBeenSet = true;
    }

    if (value.HasMember("UsedAmount") && !value["UsedAmount"].IsNull())
    {
        if (!value["UsedAmount"].IsString())
        {
            return CoreInternalOutcome(Error("response `BillDetailComponent.UsedAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_usedAmount = string(value["UsedAmount"].GetString());
        m_usedAmountHasBeenSet = true;
    }

    if (value.HasMember("UsedAmountUnit") && !value["UsedAmountUnit"].IsNull())
    {
        if (!value["UsedAmountUnit"].IsString())
        {
            return CoreInternalOutcome(Error("response `BillDetailComponent.UsedAmountUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_usedAmountUnit = string(value["UsedAmountUnit"].GetString());
        m_usedAmountUnitHasBeenSet = true;
    }

    if (value.HasMember("TimeSpan") && !value["TimeSpan"].IsNull())
    {
        if (!value["TimeSpan"].IsString())
        {
            return CoreInternalOutcome(Error("response `BillDetailComponent.TimeSpan` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeSpan = string(value["TimeSpan"].GetString());
        m_timeSpanHasBeenSet = true;
    }

    if (value.HasMember("TimeUnitName") && !value["TimeUnitName"].IsNull())
    {
        if (!value["TimeUnitName"].IsString())
        {
            return CoreInternalOutcome(Error("response `BillDetailComponent.TimeUnitName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeUnitName = string(value["TimeUnitName"].GetString());
        m_timeUnitNameHasBeenSet = true;
    }

    if (value.HasMember("Cost") && !value["Cost"].IsNull())
    {
        if (!value["Cost"].IsString())
        {
            return CoreInternalOutcome(Error("response `BillDetailComponent.Cost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cost = string(value["Cost"].GetString());
        m_costHasBeenSet = true;
    }

    if (value.HasMember("Discount") && !value["Discount"].IsNull())
    {
        if (!value["Discount"].IsString())
        {
            return CoreInternalOutcome(Error("response `BillDetailComponent.Discount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_discount = string(value["Discount"].GetString());
        m_discountHasBeenSet = true;
    }

    if (value.HasMember("ReduceType") && !value["ReduceType"].IsNull())
    {
        if (!value["ReduceType"].IsString())
        {
            return CoreInternalOutcome(Error("response `BillDetailComponent.ReduceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reduceType = string(value["ReduceType"].GetString());
        m_reduceTypeHasBeenSet = true;
    }

    if (value.HasMember("RealCost") && !value["RealCost"].IsNull())
    {
        if (!value["RealCost"].IsString())
        {
            return CoreInternalOutcome(Error("response `BillDetailComponent.RealCost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realCost = string(value["RealCost"].GetString());
        m_realCostHasBeenSet = true;
    }

    if (value.HasMember("VoucherPayAmount") && !value["VoucherPayAmount"].IsNull())
    {
        if (!value["VoucherPayAmount"].IsString())
        {
            return CoreInternalOutcome(Error("response `BillDetailComponent.VoucherPayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_voucherPayAmount = string(value["VoucherPayAmount"].GetString());
        m_voucherPayAmountHasBeenSet = true;
    }

    if (value.HasMember("CashPayAmount") && !value["CashPayAmount"].IsNull())
    {
        if (!value["CashPayAmount"].IsString())
        {
            return CoreInternalOutcome(Error("response `BillDetailComponent.CashPayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cashPayAmount = string(value["CashPayAmount"].GetString());
        m_cashPayAmountHasBeenSet = true;
    }

    if (value.HasMember("IncentivePayAmount") && !value["IncentivePayAmount"].IsNull())
    {
        if (!value["IncentivePayAmount"].IsString())
        {
            return CoreInternalOutcome(Error("response `BillDetailComponent.IncentivePayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_incentivePayAmount = string(value["IncentivePayAmount"].GetString());
        m_incentivePayAmountHasBeenSet = true;
    }

    if (value.HasMember("ItemCode") && !value["ItemCode"].IsNull())
    {
        if (!value["ItemCode"].IsString())
        {
            return CoreInternalOutcome(Error("response `BillDetailComponent.ItemCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_itemCode = string(value["ItemCode"].GetString());
        m_itemCodeHasBeenSet = true;
    }

    if (value.HasMember("ComponentCode") && !value["ComponentCode"].IsNull())
    {
        if (!value["ComponentCode"].IsString())
        {
            return CoreInternalOutcome(Error("response `BillDetailComponent.ComponentCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_componentCode = string(value["ComponentCode"].GetString());
        m_componentCodeHasBeenSet = true;
    }

    if (value.HasMember("ContractPrice") && !value["ContractPrice"].IsNull())
    {
        if (!value["ContractPrice"].IsString())
        {
            return CoreInternalOutcome(Error("response `BillDetailComponent.ContractPrice` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contractPrice = string(value["ContractPrice"].GetString());
        m_contractPriceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BillDetailComponent::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_componentCodeNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ComponentCodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_componentCodeName.c_str(), allocator).Move(), allocator);
    }

    if (m_itemCodeNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ItemCodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_itemCodeName.c_str(), allocator).Move(), allocator);
    }

    if (m_singlePriceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SinglePrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_singlePrice.c_str(), allocator).Move(), allocator);
    }

    if (m_specifiedPriceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SpecifiedPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_specifiedPrice.c_str(), allocator).Move(), allocator);
    }

    if (m_priceUnitHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PriceUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_priceUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_usedAmountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UsedAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_usedAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_usedAmountUnitHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UsedAmountUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_usedAmountUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_timeSpanHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TimeSpan";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_timeSpan.c_str(), allocator).Move(), allocator);
    }

    if (m_timeUnitNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TimeUnitName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_timeUnitName.c_str(), allocator).Move(), allocator);
    }

    if (m_costHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Cost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_cost.c_str(), allocator).Move(), allocator);
    }

    if (m_discountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Discount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_discount.c_str(), allocator).Move(), allocator);
    }

    if (m_reduceTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ReduceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_reduceType.c_str(), allocator).Move(), allocator);
    }

    if (m_realCostHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RealCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_realCost.c_str(), allocator).Move(), allocator);
    }

    if (m_voucherPayAmountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VoucherPayAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_voucherPayAmount.c_str(), allocator).Move(), allocator);
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

    if (m_itemCodeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ItemCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_itemCode.c_str(), allocator).Move(), allocator);
    }

    if (m_componentCodeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ComponentCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_componentCode.c_str(), allocator).Move(), allocator);
    }

    if (m_contractPriceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ContractPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_contractPrice.c_str(), allocator).Move(), allocator);
    }

}


string BillDetailComponent::GetComponentCodeName() const
{
    return m_componentCodeName;
}

void BillDetailComponent::SetComponentCodeName(const string& _componentCodeName)
{
    m_componentCodeName = _componentCodeName;
    m_componentCodeNameHasBeenSet = true;
}

bool BillDetailComponent::ComponentCodeNameHasBeenSet() const
{
    return m_componentCodeNameHasBeenSet;
}

string BillDetailComponent::GetItemCodeName() const
{
    return m_itemCodeName;
}

void BillDetailComponent::SetItemCodeName(const string& _itemCodeName)
{
    m_itemCodeName = _itemCodeName;
    m_itemCodeNameHasBeenSet = true;
}

bool BillDetailComponent::ItemCodeNameHasBeenSet() const
{
    return m_itemCodeNameHasBeenSet;
}

string BillDetailComponent::GetSinglePrice() const
{
    return m_singlePrice;
}

void BillDetailComponent::SetSinglePrice(const string& _singlePrice)
{
    m_singlePrice = _singlePrice;
    m_singlePriceHasBeenSet = true;
}

bool BillDetailComponent::SinglePriceHasBeenSet() const
{
    return m_singlePriceHasBeenSet;
}

string BillDetailComponent::GetSpecifiedPrice() const
{
    return m_specifiedPrice;
}

void BillDetailComponent::SetSpecifiedPrice(const string& _specifiedPrice)
{
    m_specifiedPrice = _specifiedPrice;
    m_specifiedPriceHasBeenSet = true;
}

bool BillDetailComponent::SpecifiedPriceHasBeenSet() const
{
    return m_specifiedPriceHasBeenSet;
}

string BillDetailComponent::GetPriceUnit() const
{
    return m_priceUnit;
}

void BillDetailComponent::SetPriceUnit(const string& _priceUnit)
{
    m_priceUnit = _priceUnit;
    m_priceUnitHasBeenSet = true;
}

bool BillDetailComponent::PriceUnitHasBeenSet() const
{
    return m_priceUnitHasBeenSet;
}

string BillDetailComponent::GetUsedAmount() const
{
    return m_usedAmount;
}

void BillDetailComponent::SetUsedAmount(const string& _usedAmount)
{
    m_usedAmount = _usedAmount;
    m_usedAmountHasBeenSet = true;
}

bool BillDetailComponent::UsedAmountHasBeenSet() const
{
    return m_usedAmountHasBeenSet;
}

string BillDetailComponent::GetUsedAmountUnit() const
{
    return m_usedAmountUnit;
}

void BillDetailComponent::SetUsedAmountUnit(const string& _usedAmountUnit)
{
    m_usedAmountUnit = _usedAmountUnit;
    m_usedAmountUnitHasBeenSet = true;
}

bool BillDetailComponent::UsedAmountUnitHasBeenSet() const
{
    return m_usedAmountUnitHasBeenSet;
}

string BillDetailComponent::GetTimeSpan() const
{
    return m_timeSpan;
}

void BillDetailComponent::SetTimeSpan(const string& _timeSpan)
{
    m_timeSpan = _timeSpan;
    m_timeSpanHasBeenSet = true;
}

bool BillDetailComponent::TimeSpanHasBeenSet() const
{
    return m_timeSpanHasBeenSet;
}

string BillDetailComponent::GetTimeUnitName() const
{
    return m_timeUnitName;
}

void BillDetailComponent::SetTimeUnitName(const string& _timeUnitName)
{
    m_timeUnitName = _timeUnitName;
    m_timeUnitNameHasBeenSet = true;
}

bool BillDetailComponent::TimeUnitNameHasBeenSet() const
{
    return m_timeUnitNameHasBeenSet;
}

string BillDetailComponent::GetCost() const
{
    return m_cost;
}

void BillDetailComponent::SetCost(const string& _cost)
{
    m_cost = _cost;
    m_costHasBeenSet = true;
}

bool BillDetailComponent::CostHasBeenSet() const
{
    return m_costHasBeenSet;
}

string BillDetailComponent::GetDiscount() const
{
    return m_discount;
}

void BillDetailComponent::SetDiscount(const string& _discount)
{
    m_discount = _discount;
    m_discountHasBeenSet = true;
}

bool BillDetailComponent::DiscountHasBeenSet() const
{
    return m_discountHasBeenSet;
}

string BillDetailComponent::GetReduceType() const
{
    return m_reduceType;
}

void BillDetailComponent::SetReduceType(const string& _reduceType)
{
    m_reduceType = _reduceType;
    m_reduceTypeHasBeenSet = true;
}

bool BillDetailComponent::ReduceTypeHasBeenSet() const
{
    return m_reduceTypeHasBeenSet;
}

string BillDetailComponent::GetRealCost() const
{
    return m_realCost;
}

void BillDetailComponent::SetRealCost(const string& _realCost)
{
    m_realCost = _realCost;
    m_realCostHasBeenSet = true;
}

bool BillDetailComponent::RealCostHasBeenSet() const
{
    return m_realCostHasBeenSet;
}

string BillDetailComponent::GetVoucherPayAmount() const
{
    return m_voucherPayAmount;
}

void BillDetailComponent::SetVoucherPayAmount(const string& _voucherPayAmount)
{
    m_voucherPayAmount = _voucherPayAmount;
    m_voucherPayAmountHasBeenSet = true;
}

bool BillDetailComponent::VoucherPayAmountHasBeenSet() const
{
    return m_voucherPayAmountHasBeenSet;
}

string BillDetailComponent::GetCashPayAmount() const
{
    return m_cashPayAmount;
}

void BillDetailComponent::SetCashPayAmount(const string& _cashPayAmount)
{
    m_cashPayAmount = _cashPayAmount;
    m_cashPayAmountHasBeenSet = true;
}

bool BillDetailComponent::CashPayAmountHasBeenSet() const
{
    return m_cashPayAmountHasBeenSet;
}

string BillDetailComponent::GetIncentivePayAmount() const
{
    return m_incentivePayAmount;
}

void BillDetailComponent::SetIncentivePayAmount(const string& _incentivePayAmount)
{
    m_incentivePayAmount = _incentivePayAmount;
    m_incentivePayAmountHasBeenSet = true;
}

bool BillDetailComponent::IncentivePayAmountHasBeenSet() const
{
    return m_incentivePayAmountHasBeenSet;
}

string BillDetailComponent::GetItemCode() const
{
    return m_itemCode;
}

void BillDetailComponent::SetItemCode(const string& _itemCode)
{
    m_itemCode = _itemCode;
    m_itemCodeHasBeenSet = true;
}

bool BillDetailComponent::ItemCodeHasBeenSet() const
{
    return m_itemCodeHasBeenSet;
}

string BillDetailComponent::GetComponentCode() const
{
    return m_componentCode;
}

void BillDetailComponent::SetComponentCode(const string& _componentCode)
{
    m_componentCode = _componentCode;
    m_componentCodeHasBeenSet = true;
}

bool BillDetailComponent::ComponentCodeHasBeenSet() const
{
    return m_componentCodeHasBeenSet;
}

string BillDetailComponent::GetContractPrice() const
{
    return m_contractPrice;
}

void BillDetailComponent::SetContractPrice(const string& _contractPrice)
{
    m_contractPrice = _contractPrice;
    m_contractPriceHasBeenSet = true;
}

bool BillDetailComponent::ContractPriceHasBeenSet() const
{
    return m_contractPriceHasBeenSet;
}

