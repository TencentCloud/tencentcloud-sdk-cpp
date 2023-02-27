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

#include <tencentcloud/cbs/v20170312/model/DetailPrice.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cbs::V20170312::Model;
using namespace std;

DetailPrice::DetailPrice() :
    m_priceTitleHasBeenSet(false),
    m_priceNameHasBeenSet(false),
    m_originalPriceHasBeenSet(false),
    m_discountPriceHasBeenSet(false),
    m_unitPriceHasBeenSet(false),
    m_unitPriceDiscountHasBeenSet(false),
    m_chargeUnitHasBeenSet(false),
    m_originalPriceHighHasBeenSet(false),
    m_discountPriceHighHasBeenSet(false),
    m_unitPriceHighHasBeenSet(false),
    m_unitPriceDiscountHighHasBeenSet(false)
{
}

CoreInternalOutcome DetailPrice::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PriceTitle") && !value["PriceTitle"].IsNull())
    {
        if (!value["PriceTitle"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetailPrice.PriceTitle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_priceTitle = string(value["PriceTitle"].GetString());
        m_priceTitleHasBeenSet = true;
    }

    if (value.HasMember("PriceName") && !value["PriceName"].IsNull())
    {
        if (!value["PriceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetailPrice.PriceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_priceName = string(value["PriceName"].GetString());
        m_priceNameHasBeenSet = true;
    }

    if (value.HasMember("OriginalPrice") && !value["OriginalPrice"].IsNull())
    {
        if (!value["OriginalPrice"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DetailPrice.OriginalPrice` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_originalPrice = value["OriginalPrice"].GetDouble();
        m_originalPriceHasBeenSet = true;
    }

    if (value.HasMember("DiscountPrice") && !value["DiscountPrice"].IsNull())
    {
        if (!value["DiscountPrice"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DetailPrice.DiscountPrice` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_discountPrice = value["DiscountPrice"].GetDouble();
        m_discountPriceHasBeenSet = true;
    }

    if (value.HasMember("UnitPrice") && !value["UnitPrice"].IsNull())
    {
        if (!value["UnitPrice"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DetailPrice.UnitPrice` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_unitPrice = value["UnitPrice"].GetDouble();
        m_unitPriceHasBeenSet = true;
    }

    if (value.HasMember("UnitPriceDiscount") && !value["UnitPriceDiscount"].IsNull())
    {
        if (!value["UnitPriceDiscount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DetailPrice.UnitPriceDiscount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_unitPriceDiscount = value["UnitPriceDiscount"].GetDouble();
        m_unitPriceDiscountHasBeenSet = true;
    }

    if (value.HasMember("ChargeUnit") && !value["ChargeUnit"].IsNull())
    {
        if (!value["ChargeUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetailPrice.ChargeUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chargeUnit = string(value["ChargeUnit"].GetString());
        m_chargeUnitHasBeenSet = true;
    }

    if (value.HasMember("OriginalPriceHigh") && !value["OriginalPriceHigh"].IsNull())
    {
        if (!value["OriginalPriceHigh"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetailPrice.OriginalPriceHigh` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originalPriceHigh = string(value["OriginalPriceHigh"].GetString());
        m_originalPriceHighHasBeenSet = true;
    }

    if (value.HasMember("DiscountPriceHigh") && !value["DiscountPriceHigh"].IsNull())
    {
        if (!value["DiscountPriceHigh"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetailPrice.DiscountPriceHigh` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_discountPriceHigh = string(value["DiscountPriceHigh"].GetString());
        m_discountPriceHighHasBeenSet = true;
    }

    if (value.HasMember("UnitPriceHigh") && !value["UnitPriceHigh"].IsNull())
    {
        if (!value["UnitPriceHigh"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetailPrice.UnitPriceHigh` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unitPriceHigh = string(value["UnitPriceHigh"].GetString());
        m_unitPriceHighHasBeenSet = true;
    }

    if (value.HasMember("UnitPriceDiscountHigh") && !value["UnitPriceDiscountHigh"].IsNull())
    {
        if (!value["UnitPriceDiscountHigh"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetailPrice.UnitPriceDiscountHigh` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unitPriceDiscountHigh = string(value["UnitPriceDiscountHigh"].GetString());
        m_unitPriceDiscountHighHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DetailPrice::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_priceTitleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PriceTitle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_priceTitle.c_str(), allocator).Move(), allocator);
    }

    if (m_priceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PriceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_priceName.c_str(), allocator).Move(), allocator);
    }

    if (m_originalPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_originalPrice, allocator);
    }

    if (m_discountPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiscountPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_discountPrice, allocator);
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

    if (m_originalPriceHighHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalPriceHigh";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originalPriceHigh.c_str(), allocator).Move(), allocator);
    }

    if (m_discountPriceHighHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiscountPriceHigh";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_discountPriceHigh.c_str(), allocator).Move(), allocator);
    }

    if (m_unitPriceHighHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnitPriceHigh";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unitPriceHigh.c_str(), allocator).Move(), allocator);
    }

    if (m_unitPriceDiscountHighHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnitPriceDiscountHigh";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unitPriceDiscountHigh.c_str(), allocator).Move(), allocator);
    }

}


string DetailPrice::GetPriceTitle() const
{
    return m_priceTitle;
}

void DetailPrice::SetPriceTitle(const string& _priceTitle)
{
    m_priceTitle = _priceTitle;
    m_priceTitleHasBeenSet = true;
}

bool DetailPrice::PriceTitleHasBeenSet() const
{
    return m_priceTitleHasBeenSet;
}

string DetailPrice::GetPriceName() const
{
    return m_priceName;
}

void DetailPrice::SetPriceName(const string& _priceName)
{
    m_priceName = _priceName;
    m_priceNameHasBeenSet = true;
}

bool DetailPrice::PriceNameHasBeenSet() const
{
    return m_priceNameHasBeenSet;
}

double DetailPrice::GetOriginalPrice() const
{
    return m_originalPrice;
}

void DetailPrice::SetOriginalPrice(const double& _originalPrice)
{
    m_originalPrice = _originalPrice;
    m_originalPriceHasBeenSet = true;
}

bool DetailPrice::OriginalPriceHasBeenSet() const
{
    return m_originalPriceHasBeenSet;
}

double DetailPrice::GetDiscountPrice() const
{
    return m_discountPrice;
}

void DetailPrice::SetDiscountPrice(const double& _discountPrice)
{
    m_discountPrice = _discountPrice;
    m_discountPriceHasBeenSet = true;
}

bool DetailPrice::DiscountPriceHasBeenSet() const
{
    return m_discountPriceHasBeenSet;
}

double DetailPrice::GetUnitPrice() const
{
    return m_unitPrice;
}

void DetailPrice::SetUnitPrice(const double& _unitPrice)
{
    m_unitPrice = _unitPrice;
    m_unitPriceHasBeenSet = true;
}

bool DetailPrice::UnitPriceHasBeenSet() const
{
    return m_unitPriceHasBeenSet;
}

double DetailPrice::GetUnitPriceDiscount() const
{
    return m_unitPriceDiscount;
}

void DetailPrice::SetUnitPriceDiscount(const double& _unitPriceDiscount)
{
    m_unitPriceDiscount = _unitPriceDiscount;
    m_unitPriceDiscountHasBeenSet = true;
}

bool DetailPrice::UnitPriceDiscountHasBeenSet() const
{
    return m_unitPriceDiscountHasBeenSet;
}

string DetailPrice::GetChargeUnit() const
{
    return m_chargeUnit;
}

void DetailPrice::SetChargeUnit(const string& _chargeUnit)
{
    m_chargeUnit = _chargeUnit;
    m_chargeUnitHasBeenSet = true;
}

bool DetailPrice::ChargeUnitHasBeenSet() const
{
    return m_chargeUnitHasBeenSet;
}

string DetailPrice::GetOriginalPriceHigh() const
{
    return m_originalPriceHigh;
}

void DetailPrice::SetOriginalPriceHigh(const string& _originalPriceHigh)
{
    m_originalPriceHigh = _originalPriceHigh;
    m_originalPriceHighHasBeenSet = true;
}

bool DetailPrice::OriginalPriceHighHasBeenSet() const
{
    return m_originalPriceHighHasBeenSet;
}

string DetailPrice::GetDiscountPriceHigh() const
{
    return m_discountPriceHigh;
}

void DetailPrice::SetDiscountPriceHigh(const string& _discountPriceHigh)
{
    m_discountPriceHigh = _discountPriceHigh;
    m_discountPriceHighHasBeenSet = true;
}

bool DetailPrice::DiscountPriceHighHasBeenSet() const
{
    return m_discountPriceHighHasBeenSet;
}

string DetailPrice::GetUnitPriceHigh() const
{
    return m_unitPriceHigh;
}

void DetailPrice::SetUnitPriceHigh(const string& _unitPriceHigh)
{
    m_unitPriceHigh = _unitPriceHigh;
    m_unitPriceHighHasBeenSet = true;
}

bool DetailPrice::UnitPriceHighHasBeenSet() const
{
    return m_unitPriceHighHasBeenSet;
}

string DetailPrice::GetUnitPriceDiscountHigh() const
{
    return m_unitPriceDiscountHigh;
}

void DetailPrice::SetUnitPriceDiscountHigh(const string& _unitPriceDiscountHigh)
{
    m_unitPriceDiscountHigh = _unitPriceDiscountHigh;
    m_unitPriceDiscountHighHasBeenSet = true;
}

bool DetailPrice::UnitPriceDiscountHighHasBeenSet() const
{
    return m_unitPriceDiscountHighHasBeenSet;
}

