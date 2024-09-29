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

#include <tencentcloud/cvm/v20170312/model/ReservedInstancePriceItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

ReservedInstancePriceItem::ReservedInstancePriceItem() :
    m_offeringTypeHasBeenSet(false),
    m_fixedPriceHasBeenSet(false),
    m_usagePriceHasBeenSet(false),
    m_reservedInstancesOfferingIdHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_productDescriptionHasBeenSet(false),
    m_discountUsagePriceHasBeenSet(false),
    m_discountFixedPriceHasBeenSet(false)
{
}

CoreInternalOutcome ReservedInstancePriceItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OfferingType") && !value["OfferingType"].IsNull())
    {
        if (!value["OfferingType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedInstancePriceItem.OfferingType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_offeringType = string(value["OfferingType"].GetString());
        m_offeringTypeHasBeenSet = true;
    }

    if (value.HasMember("FixedPrice") && !value["FixedPrice"].IsNull())
    {
        if (!value["FixedPrice"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedInstancePriceItem.FixedPrice` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_fixedPrice = value["FixedPrice"].GetDouble();
        m_fixedPriceHasBeenSet = true;
    }

    if (value.HasMember("UsagePrice") && !value["UsagePrice"].IsNull())
    {
        if (!value["UsagePrice"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedInstancePriceItem.UsagePrice` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_usagePrice = value["UsagePrice"].GetDouble();
        m_usagePriceHasBeenSet = true;
    }

    if (value.HasMember("ReservedInstancesOfferingId") && !value["ReservedInstancesOfferingId"].IsNull())
    {
        if (!value["ReservedInstancesOfferingId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedInstancePriceItem.ReservedInstancesOfferingId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reservedInstancesOfferingId = string(value["ReservedInstancesOfferingId"].GetString());
        m_reservedInstancesOfferingIdHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedInstancePriceItem.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedInstancePriceItem.Duration` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetUint64();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("ProductDescription") && !value["ProductDescription"].IsNull())
    {
        if (!value["ProductDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedInstancePriceItem.ProductDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productDescription = string(value["ProductDescription"].GetString());
        m_productDescriptionHasBeenSet = true;
    }

    if (value.HasMember("DiscountUsagePrice") && !value["DiscountUsagePrice"].IsNull())
    {
        if (!value["DiscountUsagePrice"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedInstancePriceItem.DiscountUsagePrice` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_discountUsagePrice = value["DiscountUsagePrice"].GetDouble();
        m_discountUsagePriceHasBeenSet = true;
    }

    if (value.HasMember("DiscountFixedPrice") && !value["DiscountFixedPrice"].IsNull())
    {
        if (!value["DiscountFixedPrice"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedInstancePriceItem.DiscountFixedPrice` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_discountFixedPrice = value["DiscountFixedPrice"].GetDouble();
        m_discountFixedPriceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReservedInstancePriceItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_offeringTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OfferingType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_offeringType.c_str(), allocator).Move(), allocator);
    }

    if (m_fixedPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FixedPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fixedPrice, allocator);
    }

    if (m_usagePriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsagePrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usagePrice, allocator);
    }

    if (m_reservedInstancesOfferingIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReservedInstancesOfferingId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reservedInstancesOfferingId.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

    if (m_productDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_discountUsagePriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiscountUsagePrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_discountUsagePrice, allocator);
    }

    if (m_discountFixedPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiscountFixedPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_discountFixedPrice, allocator);
    }

}


string ReservedInstancePriceItem::GetOfferingType() const
{
    return m_offeringType;
}

void ReservedInstancePriceItem::SetOfferingType(const string& _offeringType)
{
    m_offeringType = _offeringType;
    m_offeringTypeHasBeenSet = true;
}

bool ReservedInstancePriceItem::OfferingTypeHasBeenSet() const
{
    return m_offeringTypeHasBeenSet;
}

double ReservedInstancePriceItem::GetFixedPrice() const
{
    return m_fixedPrice;
}

void ReservedInstancePriceItem::SetFixedPrice(const double& _fixedPrice)
{
    m_fixedPrice = _fixedPrice;
    m_fixedPriceHasBeenSet = true;
}

bool ReservedInstancePriceItem::FixedPriceHasBeenSet() const
{
    return m_fixedPriceHasBeenSet;
}

double ReservedInstancePriceItem::GetUsagePrice() const
{
    return m_usagePrice;
}

void ReservedInstancePriceItem::SetUsagePrice(const double& _usagePrice)
{
    m_usagePrice = _usagePrice;
    m_usagePriceHasBeenSet = true;
}

bool ReservedInstancePriceItem::UsagePriceHasBeenSet() const
{
    return m_usagePriceHasBeenSet;
}

string ReservedInstancePriceItem::GetReservedInstancesOfferingId() const
{
    return m_reservedInstancesOfferingId;
}

void ReservedInstancePriceItem::SetReservedInstancesOfferingId(const string& _reservedInstancesOfferingId)
{
    m_reservedInstancesOfferingId = _reservedInstancesOfferingId;
    m_reservedInstancesOfferingIdHasBeenSet = true;
}

bool ReservedInstancePriceItem::ReservedInstancesOfferingIdHasBeenSet() const
{
    return m_reservedInstancesOfferingIdHasBeenSet;
}

string ReservedInstancePriceItem::GetZone() const
{
    return m_zone;
}

void ReservedInstancePriceItem::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool ReservedInstancePriceItem::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

uint64_t ReservedInstancePriceItem::GetDuration() const
{
    return m_duration;
}

void ReservedInstancePriceItem::SetDuration(const uint64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool ReservedInstancePriceItem::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

string ReservedInstancePriceItem::GetProductDescription() const
{
    return m_productDescription;
}

void ReservedInstancePriceItem::SetProductDescription(const string& _productDescription)
{
    m_productDescription = _productDescription;
    m_productDescriptionHasBeenSet = true;
}

bool ReservedInstancePriceItem::ProductDescriptionHasBeenSet() const
{
    return m_productDescriptionHasBeenSet;
}

double ReservedInstancePriceItem::GetDiscountUsagePrice() const
{
    return m_discountUsagePrice;
}

void ReservedInstancePriceItem::SetDiscountUsagePrice(const double& _discountUsagePrice)
{
    m_discountUsagePrice = _discountUsagePrice;
    m_discountUsagePriceHasBeenSet = true;
}

bool ReservedInstancePriceItem::DiscountUsagePriceHasBeenSet() const
{
    return m_discountUsagePriceHasBeenSet;
}

double ReservedInstancePriceItem::GetDiscountFixedPrice() const
{
    return m_discountFixedPrice;
}

void ReservedInstancePriceItem::SetDiscountFixedPrice(const double& _discountFixedPrice)
{
    m_discountFixedPrice = _discountFixedPrice;
    m_discountFixedPriceHasBeenSet = true;
}

bool ReservedInstancePriceItem::DiscountFixedPriceHasBeenSet() const
{
    return m_discountFixedPriceHasBeenSet;
}

