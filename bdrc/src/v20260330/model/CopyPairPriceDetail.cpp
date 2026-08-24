/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/bdrc/v20260330/model/CopyPairPriceDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bdrc::V20260330::Model;
using namespace std;

CopyPairPriceDetail::CopyPairPriceDetail() :
    m_priceNameHasBeenSet(false),
    m_priceTitleHasBeenSet(false),
    m_unitPriceHasBeenSet(false),
    m_unitPriceDiscountHasBeenSet(false),
    m_discountHasBeenSet(false),
    m_chargeUnitHasBeenSet(false)
{
}

CoreInternalOutcome CopyPairPriceDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PriceName") && !value["PriceName"].IsNull())
    {
        if (!value["PriceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CopyPairPriceDetail.PriceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_priceName = string(value["PriceName"].GetString());
        m_priceNameHasBeenSet = true;
    }

    if (value.HasMember("PriceTitle") && !value["PriceTitle"].IsNull())
    {
        if (!value["PriceTitle"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CopyPairPriceDetail.PriceTitle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_priceTitle = string(value["PriceTitle"].GetString());
        m_priceTitleHasBeenSet = true;
    }

    if (value.HasMember("UnitPrice") && !value["UnitPrice"].IsNull())
    {
        if (!value["UnitPrice"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CopyPairPriceDetail.UnitPrice` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_unitPrice = value["UnitPrice"].GetDouble();
        m_unitPriceHasBeenSet = true;
    }

    if (value.HasMember("UnitPriceDiscount") && !value["UnitPriceDiscount"].IsNull())
    {
        if (!value["UnitPriceDiscount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CopyPairPriceDetail.UnitPriceDiscount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_unitPriceDiscount = value["UnitPriceDiscount"].GetDouble();
        m_unitPriceDiscountHasBeenSet = true;
    }

    if (value.HasMember("Discount") && !value["Discount"].IsNull())
    {
        if (!value["Discount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CopyPairPriceDetail.Discount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_discount = value["Discount"].GetInt64();
        m_discountHasBeenSet = true;
    }

    if (value.HasMember("ChargeUnit") && !value["ChargeUnit"].IsNull())
    {
        if (!value["ChargeUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CopyPairPriceDetail.ChargeUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chargeUnit = string(value["ChargeUnit"].GetString());
        m_chargeUnitHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CopyPairPriceDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_priceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PriceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_priceName.c_str(), allocator).Move(), allocator);
    }

    if (m_priceTitleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PriceTitle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_priceTitle.c_str(), allocator).Move(), allocator);
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

}


string CopyPairPriceDetail::GetPriceName() const
{
    return m_priceName;
}

void CopyPairPriceDetail::SetPriceName(const string& _priceName)
{
    m_priceName = _priceName;
    m_priceNameHasBeenSet = true;
}

bool CopyPairPriceDetail::PriceNameHasBeenSet() const
{
    return m_priceNameHasBeenSet;
}

string CopyPairPriceDetail::GetPriceTitle() const
{
    return m_priceTitle;
}

void CopyPairPriceDetail::SetPriceTitle(const string& _priceTitle)
{
    m_priceTitle = _priceTitle;
    m_priceTitleHasBeenSet = true;
}

bool CopyPairPriceDetail::PriceTitleHasBeenSet() const
{
    return m_priceTitleHasBeenSet;
}

double CopyPairPriceDetail::GetUnitPrice() const
{
    return m_unitPrice;
}

void CopyPairPriceDetail::SetUnitPrice(const double& _unitPrice)
{
    m_unitPrice = _unitPrice;
    m_unitPriceHasBeenSet = true;
}

bool CopyPairPriceDetail::UnitPriceHasBeenSet() const
{
    return m_unitPriceHasBeenSet;
}

double CopyPairPriceDetail::GetUnitPriceDiscount() const
{
    return m_unitPriceDiscount;
}

void CopyPairPriceDetail::SetUnitPriceDiscount(const double& _unitPriceDiscount)
{
    m_unitPriceDiscount = _unitPriceDiscount;
    m_unitPriceDiscountHasBeenSet = true;
}

bool CopyPairPriceDetail::UnitPriceDiscountHasBeenSet() const
{
    return m_unitPriceDiscountHasBeenSet;
}

int64_t CopyPairPriceDetail::GetDiscount() const
{
    return m_discount;
}

void CopyPairPriceDetail::SetDiscount(const int64_t& _discount)
{
    m_discount = _discount;
    m_discountHasBeenSet = true;
}

bool CopyPairPriceDetail::DiscountHasBeenSet() const
{
    return m_discountHasBeenSet;
}

string CopyPairPriceDetail::GetChargeUnit() const
{
    return m_chargeUnit;
}

void CopyPairPriceDetail::SetChargeUnit(const string& _chargeUnit)
{
    m_chargeUnit = _chargeUnit;
    m_chargeUnitHasBeenSet = true;
}

bool CopyPairPriceDetail::ChargeUnitHasBeenSet() const
{
    return m_chargeUnitHasBeenSet;
}

