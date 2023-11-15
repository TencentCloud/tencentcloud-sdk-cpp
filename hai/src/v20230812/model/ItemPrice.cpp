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

#include <tencentcloud/hai/v20230812/model/ItemPrice.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Hai::V20230812::Model;
using namespace std;

ItemPrice::ItemPrice() :
    m_unitPriceHasBeenSet(false),
    m_discountUnitPriceHasBeenSet(false),
    m_discountHasBeenSet(false),
    m_chargeUnitHasBeenSet(false),
    m_amountHasBeenSet(false)
{
}

CoreInternalOutcome ItemPrice::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UnitPrice") && !value["UnitPrice"].IsNull())
    {
        if (!value["UnitPrice"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ItemPrice.UnitPrice` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_unitPrice = value["UnitPrice"].GetDouble();
        m_unitPriceHasBeenSet = true;
    }

    if (value.HasMember("DiscountUnitPrice") && !value["DiscountUnitPrice"].IsNull())
    {
        if (!value["DiscountUnitPrice"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ItemPrice.DiscountUnitPrice` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_discountUnitPrice = value["DiscountUnitPrice"].GetDouble();
        m_discountUnitPriceHasBeenSet = true;
    }

    if (value.HasMember("Discount") && !value["Discount"].IsNull())
    {
        if (!value["Discount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ItemPrice.Discount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_discount = value["Discount"].GetDouble();
        m_discountHasBeenSet = true;
    }

    if (value.HasMember("ChargeUnit") && !value["ChargeUnit"].IsNull())
    {
        if (!value["ChargeUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ItemPrice.ChargeUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chargeUnit = string(value["ChargeUnit"].GetString());
        m_chargeUnitHasBeenSet = true;
    }

    if (value.HasMember("Amount") && !value["Amount"].IsNull())
    {
        if (!value["Amount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ItemPrice.Amount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_amount = value["Amount"].GetUint64();
        m_amountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ItemPrice::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_unitPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnitPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unitPrice, allocator);
    }

    if (m_discountUnitPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiscountUnitPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_discountUnitPrice, allocator);
    }

    if (m_discountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Discount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_discount, allocator);
    }

    if (m_chargeUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargeUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chargeUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_amountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Amount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_amount, allocator);
    }

}


double ItemPrice::GetUnitPrice() const
{
    return m_unitPrice;
}

void ItemPrice::SetUnitPrice(const double& _unitPrice)
{
    m_unitPrice = _unitPrice;
    m_unitPriceHasBeenSet = true;
}

bool ItemPrice::UnitPriceHasBeenSet() const
{
    return m_unitPriceHasBeenSet;
}

double ItemPrice::GetDiscountUnitPrice() const
{
    return m_discountUnitPrice;
}

void ItemPrice::SetDiscountUnitPrice(const double& _discountUnitPrice)
{
    m_discountUnitPrice = _discountUnitPrice;
    m_discountUnitPriceHasBeenSet = true;
}

bool ItemPrice::DiscountUnitPriceHasBeenSet() const
{
    return m_discountUnitPriceHasBeenSet;
}

double ItemPrice::GetDiscount() const
{
    return m_discount;
}

void ItemPrice::SetDiscount(const double& _discount)
{
    m_discount = _discount;
    m_discountHasBeenSet = true;
}

bool ItemPrice::DiscountHasBeenSet() const
{
    return m_discountHasBeenSet;
}

string ItemPrice::GetChargeUnit() const
{
    return m_chargeUnit;
}

void ItemPrice::SetChargeUnit(const string& _chargeUnit)
{
    m_chargeUnit = _chargeUnit;
    m_chargeUnitHasBeenSet = true;
}

bool ItemPrice::ChargeUnitHasBeenSet() const
{
    return m_chargeUnitHasBeenSet;
}

uint64_t ItemPrice::GetAmount() const
{
    return m_amount;
}

void ItemPrice::SetAmount(const uint64_t& _amount)
{
    m_amount = _amount;
    m_amountHasBeenSet = true;
}

bool ItemPrice::AmountHasBeenSet() const
{
    return m_amountHasBeenSet;
}

