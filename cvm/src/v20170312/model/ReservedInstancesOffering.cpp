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

#include <tencentcloud/cvm/v20170312/model/ReservedInstancesOffering.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

ReservedInstancesOffering::ReservedInstancesOffering() :
    m_zoneHasBeenSet(false),
    m_currencyCodeHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_fixedPriceHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_offeringTypeHasBeenSet(false),
    m_reservedInstancesOfferingIdHasBeenSet(false),
    m_productDescriptionHasBeenSet(false),
    m_usagePriceHasBeenSet(false)
{
}

CoreInternalOutcome ReservedInstancesOffering::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedInstancesOffering.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("CurrencyCode") && !value["CurrencyCode"].IsNull())
    {
        if (!value["CurrencyCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedInstancesOffering.CurrencyCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currencyCode = string(value["CurrencyCode"].GetString());
        m_currencyCodeHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedInstancesOffering.Duration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetInt64();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("FixedPrice") && !value["FixedPrice"].IsNull())
    {
        if (!value["FixedPrice"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedInstancesOffering.FixedPrice` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_fixedPrice = value["FixedPrice"].GetDouble();
        m_fixedPriceHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedInstancesOffering.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("OfferingType") && !value["OfferingType"].IsNull())
    {
        if (!value["OfferingType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedInstancesOffering.OfferingType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_offeringType = string(value["OfferingType"].GetString());
        m_offeringTypeHasBeenSet = true;
    }

    if (value.HasMember("ReservedInstancesOfferingId") && !value["ReservedInstancesOfferingId"].IsNull())
    {
        if (!value["ReservedInstancesOfferingId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedInstancesOffering.ReservedInstancesOfferingId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reservedInstancesOfferingId = string(value["ReservedInstancesOfferingId"].GetString());
        m_reservedInstancesOfferingIdHasBeenSet = true;
    }

    if (value.HasMember("ProductDescription") && !value["ProductDescription"].IsNull())
    {
        if (!value["ProductDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedInstancesOffering.ProductDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productDescription = string(value["ProductDescription"].GetString());
        m_productDescriptionHasBeenSet = true;
    }

    if (value.HasMember("UsagePrice") && !value["UsagePrice"].IsNull())
    {
        if (!value["UsagePrice"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedInstancesOffering.UsagePrice` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_usagePrice = value["UsagePrice"].GetDouble();
        m_usagePriceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReservedInstancesOffering::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_currencyCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrencyCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currencyCode.c_str(), allocator).Move(), allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

    if (m_fixedPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FixedPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fixedPrice, allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_offeringTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OfferingType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_offeringType.c_str(), allocator).Move(), allocator);
    }

    if (m_reservedInstancesOfferingIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReservedInstancesOfferingId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reservedInstancesOfferingId.c_str(), allocator).Move(), allocator);
    }

    if (m_productDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_usagePriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsagePrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usagePrice, allocator);
    }

}


string ReservedInstancesOffering::GetZone() const
{
    return m_zone;
}

void ReservedInstancesOffering::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool ReservedInstancesOffering::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string ReservedInstancesOffering::GetCurrencyCode() const
{
    return m_currencyCode;
}

void ReservedInstancesOffering::SetCurrencyCode(const string& _currencyCode)
{
    m_currencyCode = _currencyCode;
    m_currencyCodeHasBeenSet = true;
}

bool ReservedInstancesOffering::CurrencyCodeHasBeenSet() const
{
    return m_currencyCodeHasBeenSet;
}

int64_t ReservedInstancesOffering::GetDuration() const
{
    return m_duration;
}

void ReservedInstancesOffering::SetDuration(const int64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool ReservedInstancesOffering::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

double ReservedInstancesOffering::GetFixedPrice() const
{
    return m_fixedPrice;
}

void ReservedInstancesOffering::SetFixedPrice(const double& _fixedPrice)
{
    m_fixedPrice = _fixedPrice;
    m_fixedPriceHasBeenSet = true;
}

bool ReservedInstancesOffering::FixedPriceHasBeenSet() const
{
    return m_fixedPriceHasBeenSet;
}

string ReservedInstancesOffering::GetInstanceType() const
{
    return m_instanceType;
}

void ReservedInstancesOffering::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool ReservedInstancesOffering::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string ReservedInstancesOffering::GetOfferingType() const
{
    return m_offeringType;
}

void ReservedInstancesOffering::SetOfferingType(const string& _offeringType)
{
    m_offeringType = _offeringType;
    m_offeringTypeHasBeenSet = true;
}

bool ReservedInstancesOffering::OfferingTypeHasBeenSet() const
{
    return m_offeringTypeHasBeenSet;
}

string ReservedInstancesOffering::GetReservedInstancesOfferingId() const
{
    return m_reservedInstancesOfferingId;
}

void ReservedInstancesOffering::SetReservedInstancesOfferingId(const string& _reservedInstancesOfferingId)
{
    m_reservedInstancesOfferingId = _reservedInstancesOfferingId;
    m_reservedInstancesOfferingIdHasBeenSet = true;
}

bool ReservedInstancesOffering::ReservedInstancesOfferingIdHasBeenSet() const
{
    return m_reservedInstancesOfferingIdHasBeenSet;
}

string ReservedInstancesOffering::GetProductDescription() const
{
    return m_productDescription;
}

void ReservedInstancesOffering::SetProductDescription(const string& _productDescription)
{
    m_productDescription = _productDescription;
    m_productDescriptionHasBeenSet = true;
}

bool ReservedInstancesOffering::ProductDescriptionHasBeenSet() const
{
    return m_productDescriptionHasBeenSet;
}

double ReservedInstancesOffering::GetUsagePrice() const
{
    return m_usagePrice;
}

void ReservedInstancesOffering::SetUsagePrice(const double& _usagePrice)
{
    m_usagePrice = _usagePrice;
    m_usagePriceHasBeenSet = true;
}

bool ReservedInstancesOffering::UsagePriceHasBeenSet() const
{
    return m_usagePriceHasBeenSet;
}

