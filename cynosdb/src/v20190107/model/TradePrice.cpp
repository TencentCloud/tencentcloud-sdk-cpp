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

#include <tencentcloud/cynosdb/v20190107/model/TradePrice.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

TradePrice::TradePrice() :
    m_totalPriceHasBeenSet(false),
    m_discountHasBeenSet(false),
    m_totalPriceDiscountHasBeenSet(false),
    m_unitPriceHasBeenSet(false),
    m_unitPriceDiscountHasBeenSet(false),
    m_chargeUnitHasBeenSet(false)
{
}

CoreInternalOutcome TradePrice::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalPrice") && !value["TotalPrice"].IsNull())
    {
        if (!value["TotalPrice"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TradePrice.TotalPrice` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalPrice = value["TotalPrice"].GetInt64();
        m_totalPriceHasBeenSet = true;
    }

    if (value.HasMember("Discount") && !value["Discount"].IsNull())
    {
        if (!value["Discount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TradePrice.Discount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_discount = value["Discount"].GetDouble();
        m_discountHasBeenSet = true;
    }

    if (value.HasMember("TotalPriceDiscount") && !value["TotalPriceDiscount"].IsNull())
    {
        if (!value["TotalPriceDiscount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TradePrice.TotalPriceDiscount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalPriceDiscount = value["TotalPriceDiscount"].GetInt64();
        m_totalPriceDiscountHasBeenSet = true;
    }

    if (value.HasMember("UnitPrice") && !value["UnitPrice"].IsNull())
    {
        if (!value["UnitPrice"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TradePrice.UnitPrice` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_unitPrice = value["UnitPrice"].GetInt64();
        m_unitPriceHasBeenSet = true;
    }

    if (value.HasMember("UnitPriceDiscount") && !value["UnitPriceDiscount"].IsNull())
    {
        if (!value["UnitPriceDiscount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TradePrice.UnitPriceDiscount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_unitPriceDiscount = value["UnitPriceDiscount"].GetInt64();
        m_unitPriceDiscountHasBeenSet = true;
    }

    if (value.HasMember("ChargeUnit") && !value["ChargeUnit"].IsNull())
    {
        if (!value["ChargeUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TradePrice.ChargeUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chargeUnit = string(value["ChargeUnit"].GetString());
        m_chargeUnitHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TradePrice::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalPrice, allocator);
    }

    if (m_discountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Discount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_discount, allocator);
    }

    if (m_totalPriceDiscountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalPriceDiscount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalPriceDiscount, allocator);
    }

    if (m_unitPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnitPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unitPrice, allocator);
    }

    if (m_unitPriceDiscountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnitPriceDiscount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unitPriceDiscount, allocator);
    }

    if (m_chargeUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargeUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chargeUnit.c_str(), allocator).Move(), allocator);
    }

}


int64_t TradePrice::GetTotalPrice() const
{
    return m_totalPrice;
}

void TradePrice::SetTotalPrice(const int64_t& _totalPrice)
{
    m_totalPrice = _totalPrice;
    m_totalPriceHasBeenSet = true;
}

bool TradePrice::TotalPriceHasBeenSet() const
{
    return m_totalPriceHasBeenSet;
}

double TradePrice::GetDiscount() const
{
    return m_discount;
}

void TradePrice::SetDiscount(const double& _discount)
{
    m_discount = _discount;
    m_discountHasBeenSet = true;
}

bool TradePrice::DiscountHasBeenSet() const
{
    return m_discountHasBeenSet;
}

int64_t TradePrice::GetTotalPriceDiscount() const
{
    return m_totalPriceDiscount;
}

void TradePrice::SetTotalPriceDiscount(const int64_t& _totalPriceDiscount)
{
    m_totalPriceDiscount = _totalPriceDiscount;
    m_totalPriceDiscountHasBeenSet = true;
}

bool TradePrice::TotalPriceDiscountHasBeenSet() const
{
    return m_totalPriceDiscountHasBeenSet;
}

int64_t TradePrice::GetUnitPrice() const
{
    return m_unitPrice;
}

void TradePrice::SetUnitPrice(const int64_t& _unitPrice)
{
    m_unitPrice = _unitPrice;
    m_unitPriceHasBeenSet = true;
}

bool TradePrice::UnitPriceHasBeenSet() const
{
    return m_unitPriceHasBeenSet;
}

int64_t TradePrice::GetUnitPriceDiscount() const
{
    return m_unitPriceDiscount;
}

void TradePrice::SetUnitPriceDiscount(const int64_t& _unitPriceDiscount)
{
    m_unitPriceDiscount = _unitPriceDiscount;
    m_unitPriceDiscountHasBeenSet = true;
}

bool TradePrice::UnitPriceDiscountHasBeenSet() const
{
    return m_unitPriceDiscountHasBeenSet;
}

string TradePrice::GetChargeUnit() const
{
    return m_chargeUnit;
}

void TradePrice::SetChargeUnit(const string& _chargeUnit)
{
    m_chargeUnit = _chargeUnit;
    m_chargeUnitHasBeenSet = true;
}

bool TradePrice::ChargeUnitHasBeenSet() const
{
    return m_chargeUnitHasBeenSet;
}

