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

#include <tencentcloud/vpc/v20170312/model/ItemPrice.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace rapidjson;
using namespace std;

ItemPrice::ItemPrice() :
    m_unitPriceHasBeenSet(false),
    m_chargeUnitHasBeenSet(false),
    m_originalPriceHasBeenSet(false),
    m_discountPriceHasBeenSet(false)
{
}

CoreInternalOutcome ItemPrice::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("UnitPrice") && !value["UnitPrice"].IsNull())
    {
        if (!value["UnitPrice"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `ItemPrice.UnitPrice` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_unitPrice = value["UnitPrice"].GetDouble();
        m_unitPriceHasBeenSet = true;
    }

    if (value.HasMember("ChargeUnit") && !value["ChargeUnit"].IsNull())
    {
        if (!value["ChargeUnit"].IsString())
        {
            return CoreInternalOutcome(Error("response `ItemPrice.ChargeUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chargeUnit = string(value["ChargeUnit"].GetString());
        m_chargeUnitHasBeenSet = true;
    }

    if (value.HasMember("OriginalPrice") && !value["OriginalPrice"].IsNull())
    {
        if (!value["OriginalPrice"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `ItemPrice.OriginalPrice` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_originalPrice = value["OriginalPrice"].GetDouble();
        m_originalPriceHasBeenSet = true;
    }

    if (value.HasMember("DiscountPrice") && !value["DiscountPrice"].IsNull())
    {
        if (!value["DiscountPrice"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `ItemPrice.DiscountPrice` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_discountPrice = value["DiscountPrice"].GetDouble();
        m_discountPriceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ItemPrice::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_unitPriceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UnitPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unitPrice, allocator);
    }

    if (m_chargeUnitHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ChargeUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_chargeUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_originalPriceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OriginalPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_originalPrice, allocator);
    }

    if (m_discountPriceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DiscountPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_discountPrice, allocator);
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

double ItemPrice::GetOriginalPrice() const
{
    return m_originalPrice;
}

void ItemPrice::SetOriginalPrice(const double& _originalPrice)
{
    m_originalPrice = _originalPrice;
    m_originalPriceHasBeenSet = true;
}

bool ItemPrice::OriginalPriceHasBeenSet() const
{
    return m_originalPriceHasBeenSet;
}

double ItemPrice::GetDiscountPrice() const
{
    return m_discountPrice;
}

void ItemPrice::SetDiscountPrice(const double& _discountPrice)
{
    m_discountPrice = _discountPrice;
    m_discountPriceHasBeenSet = true;
}

bool ItemPrice::DiscountPriceHasBeenSet() const
{
    return m_discountPriceHasBeenSet;
}

