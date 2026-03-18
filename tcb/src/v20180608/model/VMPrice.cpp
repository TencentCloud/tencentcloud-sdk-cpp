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

#include <tencentcloud/tcb/v20180608/model/VMPrice.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

VMPrice::VMPrice() :
    m_currencyHasBeenSet(false),
    m_originalPriceHasBeenSet(false),
    m_discountHasBeenSet(false),
    m_discountPriceHasBeenSet(false),
    m_originalCreditsHasBeenSet(false),
    m_discountCreditsHasBeenSet(false)
{
}

CoreInternalOutcome VMPrice::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Currency") && !value["Currency"].IsNull())
    {
        if (!value["Currency"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VMPrice.Currency` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currency = string(value["Currency"].GetString());
        m_currencyHasBeenSet = true;
    }

    if (value.HasMember("OriginalPrice") && !value["OriginalPrice"].IsNull())
    {
        if (!value["OriginalPrice"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `VMPrice.OriginalPrice` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_originalPrice = value["OriginalPrice"].GetDouble();
        m_originalPriceHasBeenSet = true;
    }

    if (value.HasMember("Discount") && !value["Discount"].IsNull())
    {
        if (!value["Discount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `VMPrice.Discount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_discount = value["Discount"].GetDouble();
        m_discountHasBeenSet = true;
    }

    if (value.HasMember("DiscountPrice") && !value["DiscountPrice"].IsNull())
    {
        if (!value["DiscountPrice"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `VMPrice.DiscountPrice` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_discountPrice = value["DiscountPrice"].GetDouble();
        m_discountPriceHasBeenSet = true;
    }

    if (value.HasMember("OriginalCredits") && !value["OriginalCredits"].IsNull())
    {
        if (!value["OriginalCredits"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `VMPrice.OriginalCredits` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_originalCredits = value["OriginalCredits"].GetDouble();
        m_originalCreditsHasBeenSet = true;
    }

    if (value.HasMember("DiscountCredits") && !value["DiscountCredits"].IsNull())
    {
        if (!value["DiscountCredits"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `VMPrice.DiscountCredits` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_discountCredits = value["DiscountCredits"].GetDouble();
        m_discountCreditsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VMPrice::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_currencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Currency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currency.c_str(), allocator).Move(), allocator);
    }

    if (m_originalPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_originalPrice, allocator);
    }

    if (m_discountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Discount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_discount, allocator);
    }

    if (m_discountPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiscountPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_discountPrice, allocator);
    }

    if (m_originalCreditsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalCredits";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_originalCredits, allocator);
    }

    if (m_discountCreditsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiscountCredits";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_discountCredits, allocator);
    }

}


string VMPrice::GetCurrency() const
{
    return m_currency;
}

void VMPrice::SetCurrency(const string& _currency)
{
    m_currency = _currency;
    m_currencyHasBeenSet = true;
}

bool VMPrice::CurrencyHasBeenSet() const
{
    return m_currencyHasBeenSet;
}

double VMPrice::GetOriginalPrice() const
{
    return m_originalPrice;
}

void VMPrice::SetOriginalPrice(const double& _originalPrice)
{
    m_originalPrice = _originalPrice;
    m_originalPriceHasBeenSet = true;
}

bool VMPrice::OriginalPriceHasBeenSet() const
{
    return m_originalPriceHasBeenSet;
}

double VMPrice::GetDiscount() const
{
    return m_discount;
}

void VMPrice::SetDiscount(const double& _discount)
{
    m_discount = _discount;
    m_discountHasBeenSet = true;
}

bool VMPrice::DiscountHasBeenSet() const
{
    return m_discountHasBeenSet;
}

double VMPrice::GetDiscountPrice() const
{
    return m_discountPrice;
}

void VMPrice::SetDiscountPrice(const double& _discountPrice)
{
    m_discountPrice = _discountPrice;
    m_discountPriceHasBeenSet = true;
}

bool VMPrice::DiscountPriceHasBeenSet() const
{
    return m_discountPriceHasBeenSet;
}

double VMPrice::GetOriginalCredits() const
{
    return m_originalCredits;
}

void VMPrice::SetOriginalCredits(const double& _originalCredits)
{
    m_originalCredits = _originalCredits;
    m_originalCreditsHasBeenSet = true;
}

bool VMPrice::OriginalCreditsHasBeenSet() const
{
    return m_originalCreditsHasBeenSet;
}

double VMPrice::GetDiscountCredits() const
{
    return m_discountCredits;
}

void VMPrice::SetDiscountCredits(const double& _discountCredits)
{
    m_discountCredits = _discountCredits;
    m_discountCreditsHasBeenSet = true;
}

bool VMPrice::DiscountCreditsHasBeenSet() const
{
    return m_discountCreditsHasBeenSet;
}

