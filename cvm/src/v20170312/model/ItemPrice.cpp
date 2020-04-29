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

#include <tencentcloud/cvm/v20170312/model/ItemPrice.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cvm::V20170312::Model;
using namespace rapidjson;
using namespace std;

ItemPrice::ItemPrice() :
    m_unitPriceHasBeenSet(false),
    m_chargeUnitHasBeenSet(false),
    m_originalPriceHasBeenSet(false),
    m_discountPriceHasBeenSet(false),
    m_discountHasBeenSet(false),
    m_unitPriceDiscountHasBeenSet(false),
    m_unitPriceSecondStepHasBeenSet(false),
    m_unitPriceDiscountSecondStepHasBeenSet(false),
    m_unitPriceThirdStepHasBeenSet(false),
    m_unitPriceDiscountThirdStepHasBeenSet(false)
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

    if (value.HasMember("Discount") && !value["Discount"].IsNull())
    {
        if (!value["Discount"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `ItemPrice.Discount` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_discount = value["Discount"].GetDouble();
        m_discountHasBeenSet = true;
    }

    if (value.HasMember("UnitPriceDiscount") && !value["UnitPriceDiscount"].IsNull())
    {
        if (!value["UnitPriceDiscount"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `ItemPrice.UnitPriceDiscount` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_unitPriceDiscount = value["UnitPriceDiscount"].GetDouble();
        m_unitPriceDiscountHasBeenSet = true;
    }

    if (value.HasMember("UnitPriceSecondStep") && !value["UnitPriceSecondStep"].IsNull())
    {
        if (!value["UnitPriceSecondStep"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `ItemPrice.UnitPriceSecondStep` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_unitPriceSecondStep = value["UnitPriceSecondStep"].GetDouble();
        m_unitPriceSecondStepHasBeenSet = true;
    }

    if (value.HasMember("UnitPriceDiscountSecondStep") && !value["UnitPriceDiscountSecondStep"].IsNull())
    {
        if (!value["UnitPriceDiscountSecondStep"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `ItemPrice.UnitPriceDiscountSecondStep` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_unitPriceDiscountSecondStep = value["UnitPriceDiscountSecondStep"].GetDouble();
        m_unitPriceDiscountSecondStepHasBeenSet = true;
    }

    if (value.HasMember("UnitPriceThirdStep") && !value["UnitPriceThirdStep"].IsNull())
    {
        if (!value["UnitPriceThirdStep"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `ItemPrice.UnitPriceThirdStep` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_unitPriceThirdStep = value["UnitPriceThirdStep"].GetDouble();
        m_unitPriceThirdStepHasBeenSet = true;
    }

    if (value.HasMember("UnitPriceDiscountThirdStep") && !value["UnitPriceDiscountThirdStep"].IsNull())
    {
        if (!value["UnitPriceDiscountThirdStep"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `ItemPrice.UnitPriceDiscountThirdStep` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_unitPriceDiscountThirdStep = value["UnitPriceDiscountThirdStep"].GetDouble();
        m_unitPriceDiscountThirdStepHasBeenSet = true;
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

    if (m_discountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Discount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_discount, allocator);
    }

    if (m_unitPriceDiscountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UnitPriceDiscount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unitPriceDiscount, allocator);
    }

    if (m_unitPriceSecondStepHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UnitPriceSecondStep";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unitPriceSecondStep, allocator);
    }

    if (m_unitPriceDiscountSecondStepHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UnitPriceDiscountSecondStep";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unitPriceDiscountSecondStep, allocator);
    }

    if (m_unitPriceThirdStepHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UnitPriceThirdStep";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unitPriceThirdStep, allocator);
    }

    if (m_unitPriceDiscountThirdStepHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UnitPriceDiscountThirdStep";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unitPriceDiscountThirdStep, allocator);
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

double ItemPrice::GetUnitPriceDiscount() const
{
    return m_unitPriceDiscount;
}

void ItemPrice::SetUnitPriceDiscount(const double& _unitPriceDiscount)
{
    m_unitPriceDiscount = _unitPriceDiscount;
    m_unitPriceDiscountHasBeenSet = true;
}

bool ItemPrice::UnitPriceDiscountHasBeenSet() const
{
    return m_unitPriceDiscountHasBeenSet;
}

double ItemPrice::GetUnitPriceSecondStep() const
{
    return m_unitPriceSecondStep;
}

void ItemPrice::SetUnitPriceSecondStep(const double& _unitPriceSecondStep)
{
    m_unitPriceSecondStep = _unitPriceSecondStep;
    m_unitPriceSecondStepHasBeenSet = true;
}

bool ItemPrice::UnitPriceSecondStepHasBeenSet() const
{
    return m_unitPriceSecondStepHasBeenSet;
}

double ItemPrice::GetUnitPriceDiscountSecondStep() const
{
    return m_unitPriceDiscountSecondStep;
}

void ItemPrice::SetUnitPriceDiscountSecondStep(const double& _unitPriceDiscountSecondStep)
{
    m_unitPriceDiscountSecondStep = _unitPriceDiscountSecondStep;
    m_unitPriceDiscountSecondStepHasBeenSet = true;
}

bool ItemPrice::UnitPriceDiscountSecondStepHasBeenSet() const
{
    return m_unitPriceDiscountSecondStepHasBeenSet;
}

double ItemPrice::GetUnitPriceThirdStep() const
{
    return m_unitPriceThirdStep;
}

void ItemPrice::SetUnitPriceThirdStep(const double& _unitPriceThirdStep)
{
    m_unitPriceThirdStep = _unitPriceThirdStep;
    m_unitPriceThirdStepHasBeenSet = true;
}

bool ItemPrice::UnitPriceThirdStepHasBeenSet() const
{
    return m_unitPriceThirdStepHasBeenSet;
}

double ItemPrice::GetUnitPriceDiscountThirdStep() const
{
    return m_unitPriceDiscountThirdStep;
}

void ItemPrice::SetUnitPriceDiscountThirdStep(const double& _unitPriceDiscountThirdStep)
{
    m_unitPriceDiscountThirdStep = _unitPriceDiscountThirdStep;
    m_unitPriceDiscountThirdStepHasBeenSet = true;
}

bool ItemPrice::UnitPriceDiscountThirdStepHasBeenSet() const
{
    return m_unitPriceDiscountThirdStepHasBeenSet;
}

