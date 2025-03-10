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

#include <tencentcloud/cvm/v20170312/model/ReservedInstancePrice.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

ReservedInstancePrice::ReservedInstancePrice() :
    m_originalFixedPriceHasBeenSet(false),
    m_discountFixedPriceHasBeenSet(false),
    m_originalUsagePriceHasBeenSet(false),
    m_discountUsagePriceHasBeenSet(false),
    m_fixedPriceDiscountHasBeenSet(false),
    m_usagePriceDiscountHasBeenSet(false)
{
}

CoreInternalOutcome ReservedInstancePrice::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OriginalFixedPrice") && !value["OriginalFixedPrice"].IsNull())
    {
        if (!value["OriginalFixedPrice"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedInstancePrice.OriginalFixedPrice` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_originalFixedPrice = value["OriginalFixedPrice"].GetDouble();
        m_originalFixedPriceHasBeenSet = true;
    }

    if (value.HasMember("DiscountFixedPrice") && !value["DiscountFixedPrice"].IsNull())
    {
        if (!value["DiscountFixedPrice"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedInstancePrice.DiscountFixedPrice` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_discountFixedPrice = value["DiscountFixedPrice"].GetDouble();
        m_discountFixedPriceHasBeenSet = true;
    }

    if (value.HasMember("OriginalUsagePrice") && !value["OriginalUsagePrice"].IsNull())
    {
        if (!value["OriginalUsagePrice"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedInstancePrice.OriginalUsagePrice` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_originalUsagePrice = value["OriginalUsagePrice"].GetDouble();
        m_originalUsagePriceHasBeenSet = true;
    }

    if (value.HasMember("DiscountUsagePrice") && !value["DiscountUsagePrice"].IsNull())
    {
        if (!value["DiscountUsagePrice"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedInstancePrice.DiscountUsagePrice` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_discountUsagePrice = value["DiscountUsagePrice"].GetDouble();
        m_discountUsagePriceHasBeenSet = true;
    }

    if (value.HasMember("FixedPriceDiscount") && !value["FixedPriceDiscount"].IsNull())
    {
        if (!value["FixedPriceDiscount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedInstancePrice.FixedPriceDiscount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_fixedPriceDiscount = value["FixedPriceDiscount"].GetDouble();
        m_fixedPriceDiscountHasBeenSet = true;
    }

    if (value.HasMember("UsagePriceDiscount") && !value["UsagePriceDiscount"].IsNull())
    {
        if (!value["UsagePriceDiscount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedInstancePrice.UsagePriceDiscount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_usagePriceDiscount = value["UsagePriceDiscount"].GetDouble();
        m_usagePriceDiscountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReservedInstancePrice::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_originalFixedPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalFixedPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_originalFixedPrice, allocator);
    }

    if (m_discountFixedPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiscountFixedPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_discountFixedPrice, allocator);
    }

    if (m_originalUsagePriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalUsagePrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_originalUsagePrice, allocator);
    }

    if (m_discountUsagePriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiscountUsagePrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_discountUsagePrice, allocator);
    }

    if (m_fixedPriceDiscountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FixedPriceDiscount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fixedPriceDiscount, allocator);
    }

    if (m_usagePriceDiscountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsagePriceDiscount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usagePriceDiscount, allocator);
    }

}


double ReservedInstancePrice::GetOriginalFixedPrice() const
{
    return m_originalFixedPrice;
}

void ReservedInstancePrice::SetOriginalFixedPrice(const double& _originalFixedPrice)
{
    m_originalFixedPrice = _originalFixedPrice;
    m_originalFixedPriceHasBeenSet = true;
}

bool ReservedInstancePrice::OriginalFixedPriceHasBeenSet() const
{
    return m_originalFixedPriceHasBeenSet;
}

double ReservedInstancePrice::GetDiscountFixedPrice() const
{
    return m_discountFixedPrice;
}

void ReservedInstancePrice::SetDiscountFixedPrice(const double& _discountFixedPrice)
{
    m_discountFixedPrice = _discountFixedPrice;
    m_discountFixedPriceHasBeenSet = true;
}

bool ReservedInstancePrice::DiscountFixedPriceHasBeenSet() const
{
    return m_discountFixedPriceHasBeenSet;
}

double ReservedInstancePrice::GetOriginalUsagePrice() const
{
    return m_originalUsagePrice;
}

void ReservedInstancePrice::SetOriginalUsagePrice(const double& _originalUsagePrice)
{
    m_originalUsagePrice = _originalUsagePrice;
    m_originalUsagePriceHasBeenSet = true;
}

bool ReservedInstancePrice::OriginalUsagePriceHasBeenSet() const
{
    return m_originalUsagePriceHasBeenSet;
}

double ReservedInstancePrice::GetDiscountUsagePrice() const
{
    return m_discountUsagePrice;
}

void ReservedInstancePrice::SetDiscountUsagePrice(const double& _discountUsagePrice)
{
    m_discountUsagePrice = _discountUsagePrice;
    m_discountUsagePriceHasBeenSet = true;
}

bool ReservedInstancePrice::DiscountUsagePriceHasBeenSet() const
{
    return m_discountUsagePriceHasBeenSet;
}

double ReservedInstancePrice::GetFixedPriceDiscount() const
{
    return m_fixedPriceDiscount;
}

void ReservedInstancePrice::SetFixedPriceDiscount(const double& _fixedPriceDiscount)
{
    m_fixedPriceDiscount = _fixedPriceDiscount;
    m_fixedPriceDiscountHasBeenSet = true;
}

bool ReservedInstancePrice::FixedPriceDiscountHasBeenSet() const
{
    return m_fixedPriceDiscountHasBeenSet;
}

double ReservedInstancePrice::GetUsagePriceDiscount() const
{
    return m_usagePriceDiscount;
}

void ReservedInstancePrice::SetUsagePriceDiscount(const double& _usagePriceDiscount)
{
    m_usagePriceDiscount = _usagePriceDiscount;
    m_usagePriceDiscountHasBeenSet = true;
}

bool ReservedInstancePrice::UsagePriceDiscountHasBeenSet() const
{
    return m_usagePriceDiscountHasBeenSet;
}

