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

#include <tencentcloud/cbs/v20170312/model/Price.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cbs::V20170312::Model;
using namespace std;

Price::Price() :
    m_unitPriceDiscountHasBeenSet(false),
    m_discountPriceHasBeenSet(false),
    m_unitPriceHasBeenSet(false),
    m_unitPriceHighHasBeenSet(false),
    m_originalPriceHighHasBeenSet(false),
    m_originalPriceHasBeenSet(false),
    m_discountPriceHighHasBeenSet(false),
    m_unitPriceDiscountHighHasBeenSet(false),
    m_chargeUnitHasBeenSet(false)
{
}

CoreInternalOutcome Price::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UnitPriceDiscount") && !value["UnitPriceDiscount"].IsNull())
    {
        if (!value["UnitPriceDiscount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Price.UnitPriceDiscount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_unitPriceDiscount = value["UnitPriceDiscount"].GetDouble();
        m_unitPriceDiscountHasBeenSet = true;
    }

    if (value.HasMember("DiscountPrice") && !value["DiscountPrice"].IsNull())
    {
        if (!value["DiscountPrice"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Price.DiscountPrice` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_discountPrice = value["DiscountPrice"].GetDouble();
        m_discountPriceHasBeenSet = true;
    }

    if (value.HasMember("UnitPrice") && !value["UnitPrice"].IsNull())
    {
        if (!value["UnitPrice"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Price.UnitPrice` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_unitPrice = value["UnitPrice"].GetDouble();
        m_unitPriceHasBeenSet = true;
    }

    if (value.HasMember("UnitPriceHigh") && !value["UnitPriceHigh"].IsNull())
    {
        if (!value["UnitPriceHigh"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Price.UnitPriceHigh` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unitPriceHigh = string(value["UnitPriceHigh"].GetString());
        m_unitPriceHighHasBeenSet = true;
    }

    if (value.HasMember("OriginalPriceHigh") && !value["OriginalPriceHigh"].IsNull())
    {
        if (!value["OriginalPriceHigh"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Price.OriginalPriceHigh` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originalPriceHigh = string(value["OriginalPriceHigh"].GetString());
        m_originalPriceHighHasBeenSet = true;
    }

    if (value.HasMember("OriginalPrice") && !value["OriginalPrice"].IsNull())
    {
        if (!value["OriginalPrice"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Price.OriginalPrice` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_originalPrice = value["OriginalPrice"].GetDouble();
        m_originalPriceHasBeenSet = true;
    }

    if (value.HasMember("DiscountPriceHigh") && !value["DiscountPriceHigh"].IsNull())
    {
        if (!value["DiscountPriceHigh"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Price.DiscountPriceHigh` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_discountPriceHigh = string(value["DiscountPriceHigh"].GetString());
        m_discountPriceHighHasBeenSet = true;
    }

    if (value.HasMember("UnitPriceDiscountHigh") && !value["UnitPriceDiscountHigh"].IsNull())
    {
        if (!value["UnitPriceDiscountHigh"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Price.UnitPriceDiscountHigh` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unitPriceDiscountHigh = string(value["UnitPriceDiscountHigh"].GetString());
        m_unitPriceDiscountHighHasBeenSet = true;
    }

    if (value.HasMember("ChargeUnit") && !value["ChargeUnit"].IsNull())
    {
        if (!value["ChargeUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Price.ChargeUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chargeUnit = string(value["ChargeUnit"].GetString());
        m_chargeUnitHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Price::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_unitPriceDiscountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnitPriceDiscount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unitPriceDiscount, allocator);
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

    if (m_unitPriceHighHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnitPriceHigh";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unitPriceHigh.c_str(), allocator).Move(), allocator);
    }

    if (m_originalPriceHighHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalPriceHigh";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originalPriceHigh.c_str(), allocator).Move(), allocator);
    }

    if (m_originalPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_originalPrice, allocator);
    }

    if (m_discountPriceHighHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiscountPriceHigh";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_discountPriceHigh.c_str(), allocator).Move(), allocator);
    }

    if (m_unitPriceDiscountHighHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnitPriceDiscountHigh";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unitPriceDiscountHigh.c_str(), allocator).Move(), allocator);
    }

    if (m_chargeUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargeUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chargeUnit.c_str(), allocator).Move(), allocator);
    }

}


double Price::GetUnitPriceDiscount() const
{
    return m_unitPriceDiscount;
}

void Price::SetUnitPriceDiscount(const double& _unitPriceDiscount)
{
    m_unitPriceDiscount = _unitPriceDiscount;
    m_unitPriceDiscountHasBeenSet = true;
}

bool Price::UnitPriceDiscountHasBeenSet() const
{
    return m_unitPriceDiscountHasBeenSet;
}

double Price::GetDiscountPrice() const
{
    return m_discountPrice;
}

void Price::SetDiscountPrice(const double& _discountPrice)
{
    m_discountPrice = _discountPrice;
    m_discountPriceHasBeenSet = true;
}

bool Price::DiscountPriceHasBeenSet() const
{
    return m_discountPriceHasBeenSet;
}

double Price::GetUnitPrice() const
{
    return m_unitPrice;
}

void Price::SetUnitPrice(const double& _unitPrice)
{
    m_unitPrice = _unitPrice;
    m_unitPriceHasBeenSet = true;
}

bool Price::UnitPriceHasBeenSet() const
{
    return m_unitPriceHasBeenSet;
}

string Price::GetUnitPriceHigh() const
{
    return m_unitPriceHigh;
}

void Price::SetUnitPriceHigh(const string& _unitPriceHigh)
{
    m_unitPriceHigh = _unitPriceHigh;
    m_unitPriceHighHasBeenSet = true;
}

bool Price::UnitPriceHighHasBeenSet() const
{
    return m_unitPriceHighHasBeenSet;
}

string Price::GetOriginalPriceHigh() const
{
    return m_originalPriceHigh;
}

void Price::SetOriginalPriceHigh(const string& _originalPriceHigh)
{
    m_originalPriceHigh = _originalPriceHigh;
    m_originalPriceHighHasBeenSet = true;
}

bool Price::OriginalPriceHighHasBeenSet() const
{
    return m_originalPriceHighHasBeenSet;
}

double Price::GetOriginalPrice() const
{
    return m_originalPrice;
}

void Price::SetOriginalPrice(const double& _originalPrice)
{
    m_originalPrice = _originalPrice;
    m_originalPriceHasBeenSet = true;
}

bool Price::OriginalPriceHasBeenSet() const
{
    return m_originalPriceHasBeenSet;
}

string Price::GetDiscountPriceHigh() const
{
    return m_discountPriceHigh;
}

void Price::SetDiscountPriceHigh(const string& _discountPriceHigh)
{
    m_discountPriceHigh = _discountPriceHigh;
    m_discountPriceHighHasBeenSet = true;
}

bool Price::DiscountPriceHighHasBeenSet() const
{
    return m_discountPriceHighHasBeenSet;
}

string Price::GetUnitPriceDiscountHigh() const
{
    return m_unitPriceDiscountHigh;
}

void Price::SetUnitPriceDiscountHigh(const string& _unitPriceDiscountHigh)
{
    m_unitPriceDiscountHigh = _unitPriceDiscountHigh;
    m_unitPriceDiscountHighHasBeenSet = true;
}

bool Price::UnitPriceDiscountHighHasBeenSet() const
{
    return m_unitPriceDiscountHighHasBeenSet;
}

string Price::GetChargeUnit() const
{
    return m_chargeUnit;
}

void Price::SetChargeUnit(const string& _chargeUnit)
{
    m_chargeUnit = _chargeUnit;
    m_chargeUnitHasBeenSet = true;
}

bool Price::ChargeUnitHasBeenSet() const
{
    return m_chargeUnitHasBeenSet;
}

