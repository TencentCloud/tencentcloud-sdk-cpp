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

#include <tencentcloud/lighthouse/v20200324/model/DetailPrice.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lighthouse::V20200324::Model;
using namespace std;

DetailPrice::DetailPrice() :
    m_priceNameHasBeenSet(false),
    m_originUnitPriceHasBeenSet(false),
    m_originalPriceHasBeenSet(false),
    m_discountHasBeenSet(false),
    m_discountPriceHasBeenSet(false)
{
}

CoreInternalOutcome DetailPrice::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PriceName") && !value["PriceName"].IsNull())
    {
        if (!value["PriceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetailPrice.PriceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_priceName = string(value["PriceName"].GetString());
        m_priceNameHasBeenSet = true;
    }

    if (value.HasMember("OriginUnitPrice") && !value["OriginUnitPrice"].IsNull())
    {
        if (!value["OriginUnitPrice"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DetailPrice.OriginUnitPrice` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_originUnitPrice = value["OriginUnitPrice"].GetDouble();
        m_originUnitPriceHasBeenSet = true;
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

    if (value.HasMember("Discount") && !value["Discount"].IsNull())
    {
        if (!value["Discount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DetailPrice.Discount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_discount = value["Discount"].GetDouble();
        m_discountHasBeenSet = true;
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


    return CoreInternalOutcome(true);
}

void DetailPrice::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_priceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PriceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_priceName.c_str(), allocator).Move(), allocator);
    }

    if (m_originUnitPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginUnitPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_originUnitPrice, allocator);
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

double DetailPrice::GetOriginUnitPrice() const
{
    return m_originUnitPrice;
}

void DetailPrice::SetOriginUnitPrice(const double& _originUnitPrice)
{
    m_originUnitPrice = _originUnitPrice;
    m_originUnitPriceHasBeenSet = true;
}

bool DetailPrice::OriginUnitPriceHasBeenSet() const
{
    return m_originUnitPriceHasBeenSet;
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

double DetailPrice::GetDiscount() const
{
    return m_discount;
}

void DetailPrice::SetDiscount(const double& _discount)
{
    m_discount = _discount;
    m_discountHasBeenSet = true;
}

bool DetailPrice::DiscountHasBeenSet() const
{
    return m_discountHasBeenSet;
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

