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

#include <tencentcloud/bdrc/v20260330/model/CopyPairPrice.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bdrc::V20260330::Model;
using namespace std;

CopyPairPrice::CopyPairPrice() :
    m_unitPriceHasBeenSet(false),
    m_unitPriceHighHasBeenSet(false),
    m_unitPriceDiscountHasBeenSet(false),
    m_unitPriceDiscountHighHasBeenSet(false),
    m_discountHasBeenSet(false),
    m_chargeUnitHasBeenSet(false),
    m_detailPricesHasBeenSet(false)
{
}

CoreInternalOutcome CopyPairPrice::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UnitPrice") && !value["UnitPrice"].IsNull())
    {
        if (!value["UnitPrice"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CopyPairPrice.UnitPrice` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_unitPrice = value["UnitPrice"].GetDouble();
        m_unitPriceHasBeenSet = true;
    }

    if (value.HasMember("UnitPriceHigh") && !value["UnitPriceHigh"].IsNull())
    {
        if (!value["UnitPriceHigh"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CopyPairPrice.UnitPriceHigh` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unitPriceHigh = string(value["UnitPriceHigh"].GetString());
        m_unitPriceHighHasBeenSet = true;
    }

    if (value.HasMember("UnitPriceDiscount") && !value["UnitPriceDiscount"].IsNull())
    {
        if (!value["UnitPriceDiscount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CopyPairPrice.UnitPriceDiscount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_unitPriceDiscount = value["UnitPriceDiscount"].GetDouble();
        m_unitPriceDiscountHasBeenSet = true;
    }

    if (value.HasMember("UnitPriceDiscountHigh") && !value["UnitPriceDiscountHigh"].IsNull())
    {
        if (!value["UnitPriceDiscountHigh"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CopyPairPrice.UnitPriceDiscountHigh` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unitPriceDiscountHigh = string(value["UnitPriceDiscountHigh"].GetString());
        m_unitPriceDiscountHighHasBeenSet = true;
    }

    if (value.HasMember("Discount") && !value["Discount"].IsNull())
    {
        if (!value["Discount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CopyPairPrice.Discount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_discount = value["Discount"].GetInt64();
        m_discountHasBeenSet = true;
    }

    if (value.HasMember("ChargeUnit") && !value["ChargeUnit"].IsNull())
    {
        if (!value["ChargeUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CopyPairPrice.ChargeUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chargeUnit = string(value["ChargeUnit"].GetString());
        m_chargeUnitHasBeenSet = true;
    }

    if (value.HasMember("DetailPrices") && !value["DetailPrices"].IsNull())
    {
        if (!value["DetailPrices"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CopyPairPrice.DetailPrices` is not array type"));

        const rapidjson::Value &tmpValue = value["DetailPrices"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CopyPairPriceDetail item;
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

void CopyPairPrice::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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


double CopyPairPrice::GetUnitPrice() const
{
    return m_unitPrice;
}

void CopyPairPrice::SetUnitPrice(const double& _unitPrice)
{
    m_unitPrice = _unitPrice;
    m_unitPriceHasBeenSet = true;
}

bool CopyPairPrice::UnitPriceHasBeenSet() const
{
    return m_unitPriceHasBeenSet;
}

string CopyPairPrice::GetUnitPriceHigh() const
{
    return m_unitPriceHigh;
}

void CopyPairPrice::SetUnitPriceHigh(const string& _unitPriceHigh)
{
    m_unitPriceHigh = _unitPriceHigh;
    m_unitPriceHighHasBeenSet = true;
}

bool CopyPairPrice::UnitPriceHighHasBeenSet() const
{
    return m_unitPriceHighHasBeenSet;
}

double CopyPairPrice::GetUnitPriceDiscount() const
{
    return m_unitPriceDiscount;
}

void CopyPairPrice::SetUnitPriceDiscount(const double& _unitPriceDiscount)
{
    m_unitPriceDiscount = _unitPriceDiscount;
    m_unitPriceDiscountHasBeenSet = true;
}

bool CopyPairPrice::UnitPriceDiscountHasBeenSet() const
{
    return m_unitPriceDiscountHasBeenSet;
}

string CopyPairPrice::GetUnitPriceDiscountHigh() const
{
    return m_unitPriceDiscountHigh;
}

void CopyPairPrice::SetUnitPriceDiscountHigh(const string& _unitPriceDiscountHigh)
{
    m_unitPriceDiscountHigh = _unitPriceDiscountHigh;
    m_unitPriceDiscountHighHasBeenSet = true;
}

bool CopyPairPrice::UnitPriceDiscountHighHasBeenSet() const
{
    return m_unitPriceDiscountHighHasBeenSet;
}

int64_t CopyPairPrice::GetDiscount() const
{
    return m_discount;
}

void CopyPairPrice::SetDiscount(const int64_t& _discount)
{
    m_discount = _discount;
    m_discountHasBeenSet = true;
}

bool CopyPairPrice::DiscountHasBeenSet() const
{
    return m_discountHasBeenSet;
}

string CopyPairPrice::GetChargeUnit() const
{
    return m_chargeUnit;
}

void CopyPairPrice::SetChargeUnit(const string& _chargeUnit)
{
    m_chargeUnit = _chargeUnit;
    m_chargeUnitHasBeenSet = true;
}

bool CopyPairPrice::ChargeUnitHasBeenSet() const
{
    return m_chargeUnitHasBeenSet;
}

vector<CopyPairPriceDetail> CopyPairPrice::GetDetailPrices() const
{
    return m_detailPrices;
}

void CopyPairPrice::SetDetailPrices(const vector<CopyPairPriceDetail>& _detailPrices)
{
    m_detailPrices = _detailPrices;
    m_detailPricesHasBeenSet = true;
}

bool CopyPairPrice::DetailPricesHasBeenSet() const
{
    return m_detailPricesHasBeenSet;
}

