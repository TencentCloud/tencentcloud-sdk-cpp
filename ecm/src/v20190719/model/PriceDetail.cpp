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

#include <tencentcloud/ecm/v20190719/model/PriceDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ecm::V20190719::Model;
using namespace std;

PriceDetail::PriceDetail() :
    m_discountHasBeenSet(false),
    m_discountPriceHasBeenSet(false),
    m_originalPriceHasBeenSet(false)
{
}

CoreInternalOutcome PriceDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Discount") && !value["Discount"].IsNull())
    {
        if (!value["Discount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PriceDetail.Discount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_discount = value["Discount"].GetUint64();
        m_discountHasBeenSet = true;
    }

    if (value.HasMember("DiscountPrice") && !value["DiscountPrice"].IsNull())
    {
        if (!value["DiscountPrice"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PriceDetail.DiscountPrice` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_discountPrice = value["DiscountPrice"].GetUint64();
        m_discountPriceHasBeenSet = true;
    }

    if (value.HasMember("OriginalPrice") && !value["OriginalPrice"].IsNull())
    {
        if (!value["OriginalPrice"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PriceDetail.OriginalPrice` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_originalPrice = value["OriginalPrice"].GetUint64();
        m_originalPriceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PriceDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_originalPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_originalPrice, allocator);
    }

}


uint64_t PriceDetail::GetDiscount() const
{
    return m_discount;
}

void PriceDetail::SetDiscount(const uint64_t& _discount)
{
    m_discount = _discount;
    m_discountHasBeenSet = true;
}

bool PriceDetail::DiscountHasBeenSet() const
{
    return m_discountHasBeenSet;
}

uint64_t PriceDetail::GetDiscountPrice() const
{
    return m_discountPrice;
}

void PriceDetail::SetDiscountPrice(const uint64_t& _discountPrice)
{
    m_discountPrice = _discountPrice;
    m_discountPriceHasBeenSet = true;
}

bool PriceDetail::DiscountPriceHasBeenSet() const
{
    return m_discountPriceHasBeenSet;
}

uint64_t PriceDetail::GetOriginalPrice() const
{
    return m_originalPrice;
}

void PriceDetail::SetOriginalPrice(const uint64_t& _originalPrice)
{
    m_originalPrice = _originalPrice;
    m_originalPriceHasBeenSet = true;
}

bool PriceDetail::OriginalPriceHasBeenSet() const
{
    return m_originalPriceHasBeenSet;
}

