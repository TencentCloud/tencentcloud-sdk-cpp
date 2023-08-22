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
using namespace std;

BillDetailComponent::BillDetailComponent() :
    m_componentCodeNameHasBeenSet(false),
    m_itemCodeNameHasBeenSet(false),
    m_singlePriceHasBeenSet(false),
    m_specifiedPriceHasBeenSet(false),
    m_priceUnitHasBeenSet(false),
    m_usedAmountHasBeenSet(false),
    m_usedAmountUnitHasBeenSet(false),
    m_realTotalMeasureHasBeenSet(false),
    m_deductedMeasureHasBeenSet(false),
    m_timeSpanHasBeenSet(false),
    m_timeUnitNameHasBeenSet(false),
    m_costHasBeenSet(false),
    m_discountHasBeenSet(false),
    m_reduceTypeHasBeenSet(false),
    m_realCostHasBeenSet(false),
    m_voucherPayAmountHasBeenSet(false),
    m_cashPayAmountHasBeenSet(false),
    m_incentivePayAmountHasBeenSet(false),
    m_transferPayAmountHasBeenSet(false),
    m_itemCodeHasBeenSet(false),
    m_componentCodeHasBeenSet(false),
    m_contractPriceHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_riTimeSpanHasBeenSet(false),
    m_originalCostWithRIHasBeenSet(false),
    m_sPDeductionRateHasBeenSet(false),
    m_sPDeductionHasBeenSet(false),
    m_originalCostWithSPHasBeenSet(false),
    m_blendedDiscountHasBeenSet(false),
    m_componentConfigHasBeenSet(false)
{
}

CoreInternalOutcome BillDetailComponent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ComponentCodeName") && !value["ComponentCodeName"].IsNull())
    {
        if (!value["ComponentCodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetailComponent.ComponentCodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_componentCodeName = string(value["ComponentCodeName"].GetString());
        m_componentCodeNameHasBeenSet = true;
    }

    if (value.HasMember("ItemCodeName") && !value["ItemCodeName"].IsNull())
    {
        if (!value["ItemCodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetailComponent.ItemCodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_itemCodeName = string(value["ItemCodeName"].GetString());
        m_itemCodeNameHasBeenSet = true;
    }

    if (value.HasMember("SinglePrice") && !value["SinglePrice"].IsNull())
    {
        if (!value["SinglePrice"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetailComponent.SinglePrice` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_singlePrice = string(value["SinglePrice"].GetString());
        m_singlePriceHasBeenSet = true;
    }

    if (value.HasMember("SpecifiedPrice") && !value["SpecifiedPrice"].IsNull())
    {
        if (!value["SpecifiedPrice"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetailComponent.SpecifiedPrice` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_specifiedPrice = string(value["SpecifiedPrice"].GetString());
        m_specifiedPriceHasBeenSet = true;
    }

    if (value.HasMember("PriceUnit") && !value["PriceUnit"].IsNull())
    {
        if (!value["PriceUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetailComponent.PriceUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_priceUnit = string(value["PriceUnit"].GetString());
        m_priceUnitHasBeenSet = true;
    }

    if (value.HasMember("UsedAmount") && !value["UsedAmount"].IsNull())
    {
        if (!value["UsedAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetailComponent.UsedAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_usedAmount = string(value["UsedAmount"].GetString());
        m_usedAmountHasBeenSet = true;
    }

    if (value.HasMember("UsedAmountUnit") && !value["UsedAmountUnit"].IsNull())
    {
        if (!value["UsedAmountUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetailComponent.UsedAmountUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_usedAmountUnit = string(value["UsedAmountUnit"].GetString());
        m_usedAmountUnitHasBeenSet = true;
    }

    if (value.HasMember("RealTotalMeasure") && !value["RealTotalMeasure"].IsNull())
    {
        if (!value["RealTotalMeasure"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetailComponent.RealTotalMeasure` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realTotalMeasure = string(value["RealTotalMeasure"].GetString());
        m_realTotalMeasureHasBeenSet = true;
    }

    if (value.HasMember("DeductedMeasure") && !value["DeductedMeasure"].IsNull())
    {
        if (!value["DeductedMeasure"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetailComponent.DeductedMeasure` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deductedMeasure = string(value["DeductedMeasure"].GetString());
        m_deductedMeasureHasBeenSet = true;
    }

    if (value.HasMember("TimeSpan") && !value["TimeSpan"].IsNull())
    {
        if (!value["TimeSpan"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetailComponent.TimeSpan` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeSpan = string(value["TimeSpan"].GetString());
        m_timeSpanHasBeenSet = true;
    }

    if (value.HasMember("TimeUnitName") && !value["TimeUnitName"].IsNull())
    {
        if (!value["TimeUnitName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetailComponent.TimeUnitName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeUnitName = string(value["TimeUnitName"].GetString());
        m_timeUnitNameHasBeenSet = true;
    }

    if (value.HasMember("Cost") && !value["Cost"].IsNull())
    {
        if (!value["Cost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetailComponent.Cost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cost = string(value["Cost"].GetString());
        m_costHasBeenSet = true;
    }

    if (value.HasMember("Discount") && !value["Discount"].IsNull())
    {
        if (!value["Discount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetailComponent.Discount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_discount = string(value["Discount"].GetString());
        m_discountHasBeenSet = true;
    }

    if (value.HasMember("ReduceType") && !value["ReduceType"].IsNull())
    {
        if (!value["ReduceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetailComponent.ReduceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reduceType = string(value["ReduceType"].GetString());
        m_reduceTypeHasBeenSet = true;
    }

    if (value.HasMember("RealCost") && !value["RealCost"].IsNull())
    {
        if (!value["RealCost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetailComponent.RealCost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realCost = string(value["RealCost"].GetString());
        m_realCostHasBeenSet = true;
    }

    if (value.HasMember("VoucherPayAmount") && !value["VoucherPayAmount"].IsNull())
    {
        if (!value["VoucherPayAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetailComponent.VoucherPayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_voucherPayAmount = string(value["VoucherPayAmount"].GetString());
        m_voucherPayAmountHasBeenSet = true;
    }

    if (value.HasMember("CashPayAmount") && !value["CashPayAmount"].IsNull())
    {
        if (!value["CashPayAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetailComponent.CashPayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cashPayAmount = string(value["CashPayAmount"].GetString());
        m_cashPayAmountHasBeenSet = true;
    }

    if (value.HasMember("IncentivePayAmount") && !value["IncentivePayAmount"].IsNull())
    {
        if (!value["IncentivePayAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetailComponent.IncentivePayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_incentivePayAmount = string(value["IncentivePayAmount"].GetString());
        m_incentivePayAmountHasBeenSet = true;
    }

    if (value.HasMember("TransferPayAmount") && !value["TransferPayAmount"].IsNull())
    {
        if (!value["TransferPayAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetailComponent.TransferPayAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transferPayAmount = string(value["TransferPayAmount"].GetString());
        m_transferPayAmountHasBeenSet = true;
    }

    if (value.HasMember("ItemCode") && !value["ItemCode"].IsNull())
    {
        if (!value["ItemCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetailComponent.ItemCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_itemCode = string(value["ItemCode"].GetString());
        m_itemCodeHasBeenSet = true;
    }

    if (value.HasMember("ComponentCode") && !value["ComponentCode"].IsNull())
    {
        if (!value["ComponentCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetailComponent.ComponentCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_componentCode = string(value["ComponentCode"].GetString());
        m_componentCodeHasBeenSet = true;
    }

    if (value.HasMember("ContractPrice") && !value["ContractPrice"].IsNull())
    {
        if (!value["ContractPrice"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetailComponent.ContractPrice` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contractPrice = string(value["ContractPrice"].GetString());
        m_contractPriceHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetailComponent.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("RiTimeSpan") && !value["RiTimeSpan"].IsNull())
    {
        if (!value["RiTimeSpan"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetailComponent.RiTimeSpan` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riTimeSpan = string(value["RiTimeSpan"].GetString());
        m_riTimeSpanHasBeenSet = true;
    }

    if (value.HasMember("OriginalCostWithRI") && !value["OriginalCostWithRI"].IsNull())
    {
        if (!value["OriginalCostWithRI"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetailComponent.OriginalCostWithRI` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originalCostWithRI = string(value["OriginalCostWithRI"].GetString());
        m_originalCostWithRIHasBeenSet = true;
    }

    if (value.HasMember("SPDeductionRate") && !value["SPDeductionRate"].IsNull())
    {
        if (!value["SPDeductionRate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetailComponent.SPDeductionRate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sPDeductionRate = string(value["SPDeductionRate"].GetString());
        m_sPDeductionRateHasBeenSet = true;
    }

    if (value.HasMember("SPDeduction") && !value["SPDeduction"].IsNull())
    {
        if (!value["SPDeduction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetailComponent.SPDeduction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sPDeduction = string(value["SPDeduction"].GetString());
        m_sPDeductionHasBeenSet = true;
    }

    if (value.HasMember("OriginalCostWithSP") && !value["OriginalCostWithSP"].IsNull())
    {
        if (!value["OriginalCostWithSP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetailComponent.OriginalCostWithSP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originalCostWithSP = string(value["OriginalCostWithSP"].GetString());
        m_originalCostWithSPHasBeenSet = true;
    }

    if (value.HasMember("BlendedDiscount") && !value["BlendedDiscount"].IsNull())
    {
        if (!value["BlendedDiscount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillDetailComponent.BlendedDiscount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blendedDiscount = string(value["BlendedDiscount"].GetString());
        m_blendedDiscountHasBeenSet = true;
    }

    if (value.HasMember("ComponentConfig") && !value["ComponentConfig"].IsNull())
    {
        if (!value["ComponentConfig"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BillDetailComponent.ComponentConfig` is not array type"));

        const rapidjson::Value &tmpValue = value["ComponentConfig"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BillDetailComponentConfig item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_componentConfig.push_back(item);
        }
        m_componentConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BillDetailComponent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_specifiedPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecifiedPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_specifiedPrice.c_str(), allocator).Move(), allocator);
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

    if (m_realTotalMeasureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealTotalMeasure";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_realTotalMeasure.c_str(), allocator).Move(), allocator);
    }

    if (m_deductedMeasureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeductedMeasure";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deductedMeasure.c_str(), allocator).Move(), allocator);
    }

    if (m_timeSpanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeSpan";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeSpan.c_str(), allocator).Move(), allocator);
    }

    if (m_timeUnitNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeUnitName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeUnitName.c_str(), allocator).Move(), allocator);
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

    if (m_reduceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReduceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reduceType.c_str(), allocator).Move(), allocator);
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

    if (m_transferPayAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransferPayAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transferPayAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_itemCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_itemCode.c_str(), allocator).Move(), allocator);
    }

    if (m_componentCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_componentCode.c_str(), allocator).Move(), allocator);
    }

    if (m_contractPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContractPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contractPrice.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_riTimeSpanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiTimeSpan";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riTimeSpan.c_str(), allocator).Move(), allocator);
    }

    if (m_originalCostWithRIHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalCostWithRI";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originalCostWithRI.c_str(), allocator).Move(), allocator);
    }

    if (m_sPDeductionRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SPDeductionRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sPDeductionRate.c_str(), allocator).Move(), allocator);
    }

    if (m_sPDeductionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SPDeduction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sPDeduction.c_str(), allocator).Move(), allocator);
    }

    if (m_originalCostWithSPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalCostWithSP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originalCostWithSP.c_str(), allocator).Move(), allocator);
    }

    if (m_blendedDiscountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlendedDiscount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_blendedDiscount.c_str(), allocator).Move(), allocator);
    }

    if (m_componentConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_componentConfig.begin(); itr != m_componentConfig.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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

string BillDetailComponent::GetRealTotalMeasure() const
{
    return m_realTotalMeasure;
}

void BillDetailComponent::SetRealTotalMeasure(const string& _realTotalMeasure)
{
    m_realTotalMeasure = _realTotalMeasure;
    m_realTotalMeasureHasBeenSet = true;
}

bool BillDetailComponent::RealTotalMeasureHasBeenSet() const
{
    return m_realTotalMeasureHasBeenSet;
}

string BillDetailComponent::GetDeductedMeasure() const
{
    return m_deductedMeasure;
}

void BillDetailComponent::SetDeductedMeasure(const string& _deductedMeasure)
{
    m_deductedMeasure = _deductedMeasure;
    m_deductedMeasureHasBeenSet = true;
}

bool BillDetailComponent::DeductedMeasureHasBeenSet() const
{
    return m_deductedMeasureHasBeenSet;
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

string BillDetailComponent::GetTransferPayAmount() const
{
    return m_transferPayAmount;
}

void BillDetailComponent::SetTransferPayAmount(const string& _transferPayAmount)
{
    m_transferPayAmount = _transferPayAmount;
    m_transferPayAmountHasBeenSet = true;
}

bool BillDetailComponent::TransferPayAmountHasBeenSet() const
{
    return m_transferPayAmountHasBeenSet;
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

string BillDetailComponent::GetInstanceType() const
{
    return m_instanceType;
}

void BillDetailComponent::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool BillDetailComponent::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string BillDetailComponent::GetRiTimeSpan() const
{
    return m_riTimeSpan;
}

void BillDetailComponent::SetRiTimeSpan(const string& _riTimeSpan)
{
    m_riTimeSpan = _riTimeSpan;
    m_riTimeSpanHasBeenSet = true;
}

bool BillDetailComponent::RiTimeSpanHasBeenSet() const
{
    return m_riTimeSpanHasBeenSet;
}

string BillDetailComponent::GetOriginalCostWithRI() const
{
    return m_originalCostWithRI;
}

void BillDetailComponent::SetOriginalCostWithRI(const string& _originalCostWithRI)
{
    m_originalCostWithRI = _originalCostWithRI;
    m_originalCostWithRIHasBeenSet = true;
}

bool BillDetailComponent::OriginalCostWithRIHasBeenSet() const
{
    return m_originalCostWithRIHasBeenSet;
}

string BillDetailComponent::GetSPDeductionRate() const
{
    return m_sPDeductionRate;
}

void BillDetailComponent::SetSPDeductionRate(const string& _sPDeductionRate)
{
    m_sPDeductionRate = _sPDeductionRate;
    m_sPDeductionRateHasBeenSet = true;
}

bool BillDetailComponent::SPDeductionRateHasBeenSet() const
{
    return m_sPDeductionRateHasBeenSet;
}

string BillDetailComponent::GetSPDeduction() const
{
    return m_sPDeduction;
}

void BillDetailComponent::SetSPDeduction(const string& _sPDeduction)
{
    m_sPDeduction = _sPDeduction;
    m_sPDeductionHasBeenSet = true;
}

bool BillDetailComponent::SPDeductionHasBeenSet() const
{
    return m_sPDeductionHasBeenSet;
}

string BillDetailComponent::GetOriginalCostWithSP() const
{
    return m_originalCostWithSP;
}

void BillDetailComponent::SetOriginalCostWithSP(const string& _originalCostWithSP)
{
    m_originalCostWithSP = _originalCostWithSP;
    m_originalCostWithSPHasBeenSet = true;
}

bool BillDetailComponent::OriginalCostWithSPHasBeenSet() const
{
    return m_originalCostWithSPHasBeenSet;
}

string BillDetailComponent::GetBlendedDiscount() const
{
    return m_blendedDiscount;
}

void BillDetailComponent::SetBlendedDiscount(const string& _blendedDiscount)
{
    m_blendedDiscount = _blendedDiscount;
    m_blendedDiscountHasBeenSet = true;
}

bool BillDetailComponent::BlendedDiscountHasBeenSet() const
{
    return m_blendedDiscountHasBeenSet;
}

vector<BillDetailComponentConfig> BillDetailComponent::GetComponentConfig() const
{
    return m_componentConfig;
}

void BillDetailComponent::SetComponentConfig(const vector<BillDetailComponentConfig>& _componentConfig)
{
    m_componentConfig = _componentConfig;
    m_componentConfigHasBeenSet = true;
}

bool BillDetailComponent::ComponentConfigHasBeenSet() const
{
    return m_componentConfigHasBeenSet;
}

