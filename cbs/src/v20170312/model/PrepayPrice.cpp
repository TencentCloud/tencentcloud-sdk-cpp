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

#include <tencentcloud/cbs/v20170312/model/PrepayPrice.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cbs::V20170312::Model;
using namespace std;

PrepayPrice::PrepayPrice() :
    m_discountPriceHasBeenSet(false),
    m_chargeUnitHasBeenSet(false),
    m_unitPriceHighHasBeenSet(false),
    m_originalPriceHighHasBeenSet(false),
    m_originalPriceHasBeenSet(false),
    m_unitPriceDiscountHasBeenSet(false),
    m_unitPriceDiscountHighHasBeenSet(false),
    m_discountPriceHighHasBeenSet(false),
    m_unitPriceHasBeenSet(false),
    m_detailPricesHasBeenSet(false)
{
}

CoreInternalOutcome PrepayPrice::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DiscountPrice") && !value["DiscountPrice"].IsNull())
    {
        if (!value["DiscountPrice"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PrepayPrice.DiscountPrice` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_discountPrice = value["DiscountPrice"].GetDouble();
        m_discountPriceHasBeenSet = true;
    }

    if (value.HasMember("ChargeUnit") && !value["ChargeUnit"].IsNull())
    {
        if (!value["ChargeUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrepayPrice.ChargeUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chargeUnit = string(value["ChargeUnit"].GetString());
        m_chargeUnitHasBeenSet = true;
    }

    if (value.HasMember("UnitPriceHigh") && !value["UnitPriceHigh"].IsNull())
    {
        if (!value["UnitPriceHigh"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrepayPrice.UnitPriceHigh` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unitPriceHigh = string(value["UnitPriceHigh"].GetString());
        m_unitPriceHighHasBeenSet = true;
    }

    if (value.HasMember("OriginalPriceHigh") && !value["OriginalPriceHigh"].IsNull())
    {
        if (!value["OriginalPriceHigh"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrepayPrice.OriginalPriceHigh` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originalPriceHigh = string(value["OriginalPriceHigh"].GetString());
        m_originalPriceHighHasBeenSet = true;
    }

    if (value.HasMember("OriginalPrice") && !value["OriginalPrice"].IsNull())
    {
        if (!value["OriginalPrice"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PrepayPrice.OriginalPrice` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_originalPrice = value["OriginalPrice"].GetDouble();
        m_originalPriceHasBeenSet = true;
    }

    if (value.HasMember("UnitPriceDiscount") && !value["UnitPriceDiscount"].IsNull())
    {
        if (!value["UnitPriceDiscount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PrepayPrice.UnitPriceDiscount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_unitPriceDiscount = value["UnitPriceDiscount"].GetDouble();
        m_unitPriceDiscountHasBeenSet = true;
    }

    if (value.HasMember("UnitPriceDiscountHigh") && !value["UnitPriceDiscountHigh"].IsNull())
    {
        if (!value["UnitPriceDiscountHigh"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrepayPrice.UnitPriceDiscountHigh` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unitPriceDiscountHigh = string(value["UnitPriceDiscountHigh"].GetString());
        m_unitPriceDiscountHighHasBeenSet = true;
    }

    if (value.HasMember("DiscountPriceHigh") && !value["DiscountPriceHigh"].IsNull())
    {
        if (!value["DiscountPriceHigh"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrepayPrice.DiscountPriceHigh` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_discountPriceHigh = string(value["DiscountPriceHigh"].GetString());
        m_discountPriceHighHasBeenSet = true;
    }

    if (value.HasMember("UnitPrice") && !value["UnitPrice"].IsNull())
    {
        if (!value["UnitPrice"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PrepayPrice.UnitPrice` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_unitPrice = value["UnitPrice"].GetDouble();
        m_unitPriceHasBeenSet = true;
    }

    if (value.HasMember("DetailPrices") && !value["DetailPrices"].IsNull())
    {
        if (!value["DetailPrices"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PrepayPrice.DetailPrices` is not array type"));

        const rapidjson::Value &tmpValue = value["DetailPrices"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DetailPrice item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_detailPrices.push_back(item);
        }
        m_detailPricesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PrepayPrice::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_discountPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiscountPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_discountPrice, allocator);
    }

    if (m_chargeUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargeUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chargeUnit.c_str(), allocator).Move(), allocator);
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

    if (m_unitPriceDiscountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnitPriceDiscount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unitPriceDiscount, allocator);
    }

    if (m_unitPriceDiscountHighHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnitPriceDiscountHigh";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unitPriceDiscountHigh.c_str(), allocator).Move(), allocator);
    }

    if (m_discountPriceHighHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiscountPriceHigh";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_discountPriceHigh.c_str(), allocator).Move(), allocator);
    }

    if (m_unitPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnitPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unitPrice, allocator);
    }

    if (m_detailPricesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetailPrices";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_detailPrices.begin(); itr != m_detailPrices.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


double PrepayPrice::GetDiscountPrice() const
{
    return m_discountPrice;
}

void PrepayPrice::SetDiscountPrice(const double& _discountPrice)
{
    m_discountPrice = _discountPrice;
    m_discountPriceHasBeenSet = true;
}

bool PrepayPrice::DiscountPriceHasBeenSet() const
{
    return m_discountPriceHasBeenSet;
}

string PrepayPrice::GetChargeUnit() const
{
    return m_chargeUnit;
}

void PrepayPrice::SetChargeUnit(const string& _chargeUnit)
{
    m_chargeUnit = _chargeUnit;
    m_chargeUnitHasBeenSet = true;
}

bool PrepayPrice::ChargeUnitHasBeenSet() const
{
    return m_chargeUnitHasBeenSet;
}

string PrepayPrice::GetUnitPriceHigh() const
{
    return m_unitPriceHigh;
}

void PrepayPrice::SetUnitPriceHigh(const string& _unitPriceHigh)
{
    m_unitPriceHigh = _unitPriceHigh;
    m_unitPriceHighHasBeenSet = true;
}

bool PrepayPrice::UnitPriceHighHasBeenSet() const
{
    return m_unitPriceHighHasBeenSet;
}

string PrepayPrice::GetOriginalPriceHigh() const
{
    return m_originalPriceHigh;
}

void PrepayPrice::SetOriginalPriceHigh(const string& _originalPriceHigh)
{
    m_originalPriceHigh = _originalPriceHigh;
    m_originalPriceHighHasBeenSet = true;
}

bool PrepayPrice::OriginalPriceHighHasBeenSet() const
{
    return m_originalPriceHighHasBeenSet;
}

double PrepayPrice::GetOriginalPrice() const
{
    return m_originalPrice;
}

void PrepayPrice::SetOriginalPrice(const double& _originalPrice)
{
    m_originalPrice = _originalPrice;
    m_originalPriceHasBeenSet = true;
}

bool PrepayPrice::OriginalPriceHasBeenSet() const
{
    return m_originalPriceHasBeenSet;
}

double PrepayPrice::GetUnitPriceDiscount() const
{
    return m_unitPriceDiscount;
}

void PrepayPrice::SetUnitPriceDiscount(const double& _unitPriceDiscount)
{
    m_unitPriceDiscount = _unitPriceDiscount;
    m_unitPriceDiscountHasBeenSet = true;
}

bool PrepayPrice::UnitPriceDiscountHasBeenSet() const
{
    return m_unitPriceDiscountHasBeenSet;
}

string PrepayPrice::GetUnitPriceDiscountHigh() const
{
    return m_unitPriceDiscountHigh;
}

void PrepayPrice::SetUnitPriceDiscountHigh(const string& _unitPriceDiscountHigh)
{
    m_unitPriceDiscountHigh = _unitPriceDiscountHigh;
    m_unitPriceDiscountHighHasBeenSet = true;
}

bool PrepayPrice::UnitPriceDiscountHighHasBeenSet() const
{
    return m_unitPriceDiscountHighHasBeenSet;
}

string PrepayPrice::GetDiscountPriceHigh() const
{
    return m_discountPriceHigh;
}

void PrepayPrice::SetDiscountPriceHigh(const string& _discountPriceHigh)
{
    m_discountPriceHigh = _discountPriceHigh;
    m_discountPriceHighHasBeenSet = true;
}

bool PrepayPrice::DiscountPriceHighHasBeenSet() const
{
    return m_discountPriceHighHasBeenSet;
}

double PrepayPrice::GetUnitPrice() const
{
    return m_unitPrice;
}

void PrepayPrice::SetUnitPrice(const double& _unitPrice)
{
    m_unitPrice = _unitPrice;
    m_unitPriceHasBeenSet = true;
}

bool PrepayPrice::UnitPriceHasBeenSet() const
{
    return m_unitPriceHasBeenSet;
}

vector<DetailPrice> PrepayPrice::GetDetailPrices() const
{
    return m_detailPrices;
}

void PrepayPrice::SetDetailPrices(const vector<DetailPrice>& _detailPrices)
{
    m_detailPrices = _detailPrices;
    m_detailPricesHasBeenSet = true;
}

bool PrepayPrice::DetailPricesHasBeenSet() const
{
    return m_detailPricesHasBeenSet;
}

