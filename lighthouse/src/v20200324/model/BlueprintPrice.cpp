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

#include <tencentcloud/lighthouse/v20200324/model/BlueprintPrice.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lighthouse::V20200324::Model;
using namespace std;

BlueprintPrice::BlueprintPrice() :
    m_originalBlueprintPriceHasBeenSet(false),
    m_originalPriceHasBeenSet(false),
    m_discountHasBeenSet(false),
    m_discountPriceHasBeenSet(false)
{
}

CoreInternalOutcome BlueprintPrice::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OriginalBlueprintPrice") && !value["OriginalBlueprintPrice"].IsNull())
    {
        if (!value["OriginalBlueprintPrice"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `BlueprintPrice.OriginalBlueprintPrice` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_originalBlueprintPrice = value["OriginalBlueprintPrice"].GetDouble();
        m_originalBlueprintPriceHasBeenSet = true;
    }

    if (value.HasMember("OriginalPrice") && !value["OriginalPrice"].IsNull())
    {
        if (!value["OriginalPrice"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `BlueprintPrice.OriginalPrice` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_originalPrice = value["OriginalPrice"].GetDouble();
        m_originalPriceHasBeenSet = true;
    }

    if (value.HasMember("Discount") && !value["Discount"].IsNull())
    {
        if (!value["Discount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `BlueprintPrice.Discount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_discount = value["Discount"].GetDouble();
        m_discountHasBeenSet = true;
    }

    if (value.HasMember("DiscountPrice") && !value["DiscountPrice"].IsNull())
    {
        if (!value["DiscountPrice"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `BlueprintPrice.DiscountPrice` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_discountPrice = value["DiscountPrice"].GetDouble();
        m_discountPriceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BlueprintPrice::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_originalBlueprintPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalBlueprintPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_originalBlueprintPrice, allocator);
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


double BlueprintPrice::GetOriginalBlueprintPrice() const
{
    return m_originalBlueprintPrice;
}

void BlueprintPrice::SetOriginalBlueprintPrice(const double& _originalBlueprintPrice)
{
    m_originalBlueprintPrice = _originalBlueprintPrice;
    m_originalBlueprintPriceHasBeenSet = true;
}

bool BlueprintPrice::OriginalBlueprintPriceHasBeenSet() const
{
    return m_originalBlueprintPriceHasBeenSet;
}

double BlueprintPrice::GetOriginalPrice() const
{
    return m_originalPrice;
}

void BlueprintPrice::SetOriginalPrice(const double& _originalPrice)
{
    m_originalPrice = _originalPrice;
    m_originalPriceHasBeenSet = true;
}

bool BlueprintPrice::OriginalPriceHasBeenSet() const
{
    return m_originalPriceHasBeenSet;
}

double BlueprintPrice::GetDiscount() const
{
    return m_discount;
}

void BlueprintPrice::SetDiscount(const double& _discount)
{
    m_discount = _discount;
    m_discountHasBeenSet = true;
}

bool BlueprintPrice::DiscountHasBeenSet() const
{
    return m_discountHasBeenSet;
}

double BlueprintPrice::GetDiscountPrice() const
{
    return m_discountPrice;
}

void BlueprintPrice::SetDiscountPrice(const double& _discountPrice)
{
    m_discountPrice = _discountPrice;
    m_discountPriceHasBeenSet = true;
}

bool BlueprintPrice::DiscountPriceHasBeenSet() const
{
    return m_discountPriceHasBeenSet;
}

