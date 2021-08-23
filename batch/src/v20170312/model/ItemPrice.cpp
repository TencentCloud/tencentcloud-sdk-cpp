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

#include <tencentcloud/batch/v20170312/model/ItemPrice.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Batch::V20170312::Model;
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
    m_unitPriceDiscountThirdStepHasBeenSet(false),
    m_originalPriceThreeYearHasBeenSet(false),
    m_discountPriceThreeYearHasBeenSet(false),
    m_discountThreeYearHasBeenSet(false),
    m_originalPriceFiveYearHasBeenSet(false),
    m_discountPriceFiveYearHasBeenSet(false),
    m_discountFiveYearHasBeenSet(false),
    m_originalPriceOneYearHasBeenSet(false),
    m_discountPriceOneYearHasBeenSet(false),
    m_discountOneYearHasBeenSet(false)
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

    if (value.HasMember("ChargeUnit") && !value["ChargeUnit"].IsNull())
    {
        if (!value["ChargeUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ItemPrice.ChargeUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chargeUnit = string(value["ChargeUnit"].GetString());
        m_chargeUnitHasBeenSet = true;
    }

    if (value.HasMember("OriginalPrice") && !value["OriginalPrice"].IsNull())
    {
        if (!value["OriginalPrice"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ItemPrice.OriginalPrice` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_originalPrice = value["OriginalPrice"].GetDouble();
        m_originalPriceHasBeenSet = true;
    }

    if (value.HasMember("DiscountPrice") && !value["DiscountPrice"].IsNull())
    {
        if (!value["DiscountPrice"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ItemPrice.DiscountPrice` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_discountPrice = value["DiscountPrice"].GetDouble();
        m_discountPriceHasBeenSet = true;
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

    if (value.HasMember("UnitPriceDiscount") && !value["UnitPriceDiscount"].IsNull())
    {
        if (!value["UnitPriceDiscount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ItemPrice.UnitPriceDiscount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_unitPriceDiscount = value["UnitPriceDiscount"].GetDouble();
        m_unitPriceDiscountHasBeenSet = true;
    }

    if (value.HasMember("UnitPriceSecondStep") && !value["UnitPriceSecondStep"].IsNull())
    {
        if (!value["UnitPriceSecondStep"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ItemPrice.UnitPriceSecondStep` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_unitPriceSecondStep = value["UnitPriceSecondStep"].GetDouble();
        m_unitPriceSecondStepHasBeenSet = true;
    }

    if (value.HasMember("UnitPriceDiscountSecondStep") && !value["UnitPriceDiscountSecondStep"].IsNull())
    {
        if (!value["UnitPriceDiscountSecondStep"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ItemPrice.UnitPriceDiscountSecondStep` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_unitPriceDiscountSecondStep = value["UnitPriceDiscountSecondStep"].GetDouble();
        m_unitPriceDiscountSecondStepHasBeenSet = true;
    }

    if (value.HasMember("UnitPriceThirdStep") && !value["UnitPriceThirdStep"].IsNull())
    {
        if (!value["UnitPriceThirdStep"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ItemPrice.UnitPriceThirdStep` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_unitPriceThirdStep = value["UnitPriceThirdStep"].GetDouble();
        m_unitPriceThirdStepHasBeenSet = true;
    }

    if (value.HasMember("UnitPriceDiscountThirdStep") && !value["UnitPriceDiscountThirdStep"].IsNull())
    {
        if (!value["UnitPriceDiscountThirdStep"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ItemPrice.UnitPriceDiscountThirdStep` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_unitPriceDiscountThirdStep = value["UnitPriceDiscountThirdStep"].GetDouble();
        m_unitPriceDiscountThirdStepHasBeenSet = true;
    }

    if (value.HasMember("OriginalPriceThreeYear") && !value["OriginalPriceThreeYear"].IsNull())
    {
        if (!value["OriginalPriceThreeYear"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ItemPrice.OriginalPriceThreeYear` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_originalPriceThreeYear = value["OriginalPriceThreeYear"].GetDouble();
        m_originalPriceThreeYearHasBeenSet = true;
    }

    if (value.HasMember("DiscountPriceThreeYear") && !value["DiscountPriceThreeYear"].IsNull())
    {
        if (!value["DiscountPriceThreeYear"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ItemPrice.DiscountPriceThreeYear` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_discountPriceThreeYear = value["DiscountPriceThreeYear"].GetDouble();
        m_discountPriceThreeYearHasBeenSet = true;
    }

    if (value.HasMember("DiscountThreeYear") && !value["DiscountThreeYear"].IsNull())
    {
        if (!value["DiscountThreeYear"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ItemPrice.DiscountThreeYear` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_discountThreeYear = value["DiscountThreeYear"].GetDouble();
        m_discountThreeYearHasBeenSet = true;
    }

    if (value.HasMember("OriginalPriceFiveYear") && !value["OriginalPriceFiveYear"].IsNull())
    {
        if (!value["OriginalPriceFiveYear"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ItemPrice.OriginalPriceFiveYear` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_originalPriceFiveYear = value["OriginalPriceFiveYear"].GetDouble();
        m_originalPriceFiveYearHasBeenSet = true;
    }

    if (value.HasMember("DiscountPriceFiveYear") && !value["DiscountPriceFiveYear"].IsNull())
    {
        if (!value["DiscountPriceFiveYear"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ItemPrice.DiscountPriceFiveYear` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_discountPriceFiveYear = value["DiscountPriceFiveYear"].GetDouble();
        m_discountPriceFiveYearHasBeenSet = true;
    }

    if (value.HasMember("DiscountFiveYear") && !value["DiscountFiveYear"].IsNull())
    {
        if (!value["DiscountFiveYear"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ItemPrice.DiscountFiveYear` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_discountFiveYear = value["DiscountFiveYear"].GetDouble();
        m_discountFiveYearHasBeenSet = true;
    }

    if (value.HasMember("OriginalPriceOneYear") && !value["OriginalPriceOneYear"].IsNull())
    {
        if (!value["OriginalPriceOneYear"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ItemPrice.OriginalPriceOneYear` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_originalPriceOneYear = value["OriginalPriceOneYear"].GetDouble();
        m_originalPriceOneYearHasBeenSet = true;
    }

    if (value.HasMember("DiscountPriceOneYear") && !value["DiscountPriceOneYear"].IsNull())
    {
        if (!value["DiscountPriceOneYear"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ItemPrice.DiscountPriceOneYear` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_discountPriceOneYear = value["DiscountPriceOneYear"].GetDouble();
        m_discountPriceOneYearHasBeenSet = true;
    }

    if (value.HasMember("DiscountOneYear") && !value["DiscountOneYear"].IsNull())
    {
        if (!value["DiscountOneYear"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ItemPrice.DiscountOneYear` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_discountOneYear = value["DiscountOneYear"].GetDouble();
        m_discountOneYearHasBeenSet = true;
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

    if (m_chargeUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargeUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chargeUnit.c_str(), allocator).Move(), allocator);
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

    if (m_discountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Discount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_discount, allocator);
    }

    if (m_unitPriceDiscountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnitPriceDiscount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unitPriceDiscount, allocator);
    }

    if (m_unitPriceSecondStepHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnitPriceSecondStep";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unitPriceSecondStep, allocator);
    }

    if (m_unitPriceDiscountSecondStepHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnitPriceDiscountSecondStep";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unitPriceDiscountSecondStep, allocator);
    }

    if (m_unitPriceThirdStepHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnitPriceThirdStep";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unitPriceThirdStep, allocator);
    }

    if (m_unitPriceDiscountThirdStepHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnitPriceDiscountThirdStep";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unitPriceDiscountThirdStep, allocator);
    }

    if (m_originalPriceThreeYearHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalPriceThreeYear";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_originalPriceThreeYear, allocator);
    }

    if (m_discountPriceThreeYearHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiscountPriceThreeYear";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_discountPriceThreeYear, allocator);
    }

    if (m_discountThreeYearHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiscountThreeYear";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_discountThreeYear, allocator);
    }

    if (m_originalPriceFiveYearHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalPriceFiveYear";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_originalPriceFiveYear, allocator);
    }

    if (m_discountPriceFiveYearHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiscountPriceFiveYear";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_discountPriceFiveYear, allocator);
    }

    if (m_discountFiveYearHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiscountFiveYear";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_discountFiveYear, allocator);
    }

    if (m_originalPriceOneYearHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalPriceOneYear";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_originalPriceOneYear, allocator);
    }

    if (m_discountPriceOneYearHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiscountPriceOneYear";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_discountPriceOneYear, allocator);
    }

    if (m_discountOneYearHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiscountOneYear";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_discountOneYear, allocator);
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

double ItemPrice::GetOriginalPriceThreeYear() const
{
    return m_originalPriceThreeYear;
}

void ItemPrice::SetOriginalPriceThreeYear(const double& _originalPriceThreeYear)
{
    m_originalPriceThreeYear = _originalPriceThreeYear;
    m_originalPriceThreeYearHasBeenSet = true;
}

bool ItemPrice::OriginalPriceThreeYearHasBeenSet() const
{
    return m_originalPriceThreeYearHasBeenSet;
}

double ItemPrice::GetDiscountPriceThreeYear() const
{
    return m_discountPriceThreeYear;
}

void ItemPrice::SetDiscountPriceThreeYear(const double& _discountPriceThreeYear)
{
    m_discountPriceThreeYear = _discountPriceThreeYear;
    m_discountPriceThreeYearHasBeenSet = true;
}

bool ItemPrice::DiscountPriceThreeYearHasBeenSet() const
{
    return m_discountPriceThreeYearHasBeenSet;
}

double ItemPrice::GetDiscountThreeYear() const
{
    return m_discountThreeYear;
}

void ItemPrice::SetDiscountThreeYear(const double& _discountThreeYear)
{
    m_discountThreeYear = _discountThreeYear;
    m_discountThreeYearHasBeenSet = true;
}

bool ItemPrice::DiscountThreeYearHasBeenSet() const
{
    return m_discountThreeYearHasBeenSet;
}

double ItemPrice::GetOriginalPriceFiveYear() const
{
    return m_originalPriceFiveYear;
}

void ItemPrice::SetOriginalPriceFiveYear(const double& _originalPriceFiveYear)
{
    m_originalPriceFiveYear = _originalPriceFiveYear;
    m_originalPriceFiveYearHasBeenSet = true;
}

bool ItemPrice::OriginalPriceFiveYearHasBeenSet() const
{
    return m_originalPriceFiveYearHasBeenSet;
}

double ItemPrice::GetDiscountPriceFiveYear() const
{
    return m_discountPriceFiveYear;
}

void ItemPrice::SetDiscountPriceFiveYear(const double& _discountPriceFiveYear)
{
    m_discountPriceFiveYear = _discountPriceFiveYear;
    m_discountPriceFiveYearHasBeenSet = true;
}

bool ItemPrice::DiscountPriceFiveYearHasBeenSet() const
{
    return m_discountPriceFiveYearHasBeenSet;
}

double ItemPrice::GetDiscountFiveYear() const
{
    return m_discountFiveYear;
}

void ItemPrice::SetDiscountFiveYear(const double& _discountFiveYear)
{
    m_discountFiveYear = _discountFiveYear;
    m_discountFiveYearHasBeenSet = true;
}

bool ItemPrice::DiscountFiveYearHasBeenSet() const
{
    return m_discountFiveYearHasBeenSet;
}

double ItemPrice::GetOriginalPriceOneYear() const
{
    return m_originalPriceOneYear;
}

void ItemPrice::SetOriginalPriceOneYear(const double& _originalPriceOneYear)
{
    m_originalPriceOneYear = _originalPriceOneYear;
    m_originalPriceOneYearHasBeenSet = true;
}

bool ItemPrice::OriginalPriceOneYearHasBeenSet() const
{
    return m_originalPriceOneYearHasBeenSet;
}

double ItemPrice::GetDiscountPriceOneYear() const
{
    return m_discountPriceOneYear;
}

void ItemPrice::SetDiscountPriceOneYear(const double& _discountPriceOneYear)
{
    m_discountPriceOneYear = _discountPriceOneYear;
    m_discountPriceOneYearHasBeenSet = true;
}

bool ItemPrice::DiscountPriceOneYearHasBeenSet() const
{
    return m_discountPriceOneYearHasBeenSet;
}

double ItemPrice::GetDiscountOneYear() const
{
    return m_discountOneYear;
}

void ItemPrice::SetDiscountOneYear(const double& _discountOneYear)
{
    m_discountOneYear = _discountOneYear;
    m_discountOneYearHasBeenSet = true;
}

bool ItemPrice::DiscountOneYearHasBeenSet() const
{
    return m_discountOneYearHasBeenSet;
}

