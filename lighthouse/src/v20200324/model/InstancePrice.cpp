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

#include <tencentcloud/lighthouse/v20200324/model/InstancePrice.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lighthouse::V20200324::Model;
using namespace std;

InstancePrice::InstancePrice() :
    m_originalBundlePriceHasBeenSet(false),
    m_originalPriceHasBeenSet(false),
    m_discountHasBeenSet(false),
    m_discountPriceHasBeenSet(false)
{
}

CoreInternalOutcome InstancePrice::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OriginalBundlePrice") && !value["OriginalBundlePrice"].IsNull())
    {
        if (!value["OriginalBundlePrice"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `InstancePrice.OriginalBundlePrice` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_originalBundlePrice = value["OriginalBundlePrice"].GetDouble();
        m_originalBundlePriceHasBeenSet = true;
    }

    if (value.HasMember("OriginalPrice") && !value["OriginalPrice"].IsNull())
    {
        if (!value["OriginalPrice"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `InstancePrice.OriginalPrice` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_originalPrice = value["OriginalPrice"].GetDouble();
        m_originalPriceHasBeenSet = true;
    }

    if (value.HasMember("Discount") && !value["Discount"].IsNull())
    {
        if (!value["Discount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstancePrice.Discount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_discount = value["Discount"].GetInt64();
        m_discountHasBeenSet = true;
    }

    if (value.HasMember("DiscountPrice") && !value["DiscountPrice"].IsNull())
    {
        if (!value["DiscountPrice"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `InstancePrice.DiscountPrice` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_discountPrice = value["DiscountPrice"].GetDouble();
        m_discountPriceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstancePrice::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_originalBundlePriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalBundlePrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_originalBundlePrice, allocator);
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


double InstancePrice::GetOriginalBundlePrice() const
{
    return m_originalBundlePrice;
}

void InstancePrice::SetOriginalBundlePrice(const double& _originalBundlePrice)
{
    m_originalBundlePrice = _originalBundlePrice;
    m_originalBundlePriceHasBeenSet = true;
}

bool InstancePrice::OriginalBundlePriceHasBeenSet() const
{
    return m_originalBundlePriceHasBeenSet;
}

double InstancePrice::GetOriginalPrice() const
{
    return m_originalPrice;
}

void InstancePrice::SetOriginalPrice(const double& _originalPrice)
{
    m_originalPrice = _originalPrice;
    m_originalPriceHasBeenSet = true;
}

bool InstancePrice::OriginalPriceHasBeenSet() const
{
    return m_originalPriceHasBeenSet;
}

int64_t InstancePrice::GetDiscount() const
{
    return m_discount;
}

void InstancePrice::SetDiscount(const int64_t& _discount)
{
    m_discount = _discount;
    m_discountHasBeenSet = true;
}

bool InstancePrice::DiscountHasBeenSet() const
{
    return m_discountHasBeenSet;
}

double InstancePrice::GetDiscountPrice() const
{
    return m_discountPrice;
}

void InstancePrice::SetDiscountPrice(const double& _discountPrice)
{
    m_discountPrice = _discountPrice;
    m_discountPriceHasBeenSet = true;
}

bool InstancePrice::DiscountPriceHasBeenSet() const
{
    return m_discountPriceHasBeenSet;
}

