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

#include <tencentcloud/iotexplorer/v20190423/model/SeeCreateSubscriptionEntry.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

SeeCreateSubscriptionEntry::SeeCreateSubscriptionEntry() :
    m_productIdHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_serviceTypeHasBeenSet(false),
    m_serviceTierHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_customOrderIdHasBeenSet(false),
    m_renewFlagHasBeenSet(false),
    m_channelIdHasBeenSet(false)
{
}

CoreInternalOutcome SeeCreateSubscriptionEntry::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProductId") && !value["ProductId"].IsNull())
    {
        if (!value["ProductId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SeeCreateSubscriptionEntry.ProductId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productId = string(value["ProductId"].GetString());
        m_productIdHasBeenSet = true;
    }

    if (value.HasMember("DeviceName") && !value["DeviceName"].IsNull())
    {
        if (!value["DeviceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SeeCreateSubscriptionEntry.DeviceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceName = string(value["DeviceName"].GetString());
        m_deviceNameHasBeenSet = true;
    }

    if (value.HasMember("ServiceType") && !value["ServiceType"].IsNull())
    {
        if (!value["ServiceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SeeCreateSubscriptionEntry.ServiceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceType = string(value["ServiceType"].GetString());
        m_serviceTypeHasBeenSet = true;
    }

    if (value.HasMember("ServiceTier") && !value["ServiceTier"].IsNull())
    {
        if (!value["ServiceTier"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SeeCreateSubscriptionEntry.ServiceTier` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceTier = string(value["ServiceTier"].GetString());
        m_serviceTierHasBeenSet = true;
    }

    if (value.HasMember("Period") && !value["Period"].IsNull())
    {
        if (!value["Period"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SeeCreateSubscriptionEntry.Period` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_period = value["Period"].GetInt64();
        m_periodHasBeenSet = true;
    }

    if (value.HasMember("CustomOrderId") && !value["CustomOrderId"].IsNull())
    {
        if (!value["CustomOrderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SeeCreateSubscriptionEntry.CustomOrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customOrderId = string(value["CustomOrderId"].GetString());
        m_customOrderIdHasBeenSet = true;
    }

    if (value.HasMember("RenewFlag") && !value["RenewFlag"].IsNull())
    {
        if (!value["RenewFlag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SeeCreateSubscriptionEntry.RenewFlag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_renewFlag = string(value["RenewFlag"].GetString());
        m_renewFlagHasBeenSet = true;
    }

    if (value.HasMember("ChannelId") && !value["ChannelId"].IsNull())
    {
        if (!value["ChannelId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SeeCreateSubscriptionEntry.ChannelId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_channelId = value["ChannelId"].GetUint64();
        m_channelIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SeeCreateSubscriptionEntry::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_productIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productId.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceTierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceTier";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceTier.c_str(), allocator).Move(), allocator);
    }

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_period, allocator);
    }

    if (m_customOrderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomOrderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customOrderId.c_str(), allocator).Move(), allocator);
    }

    if (m_renewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_renewFlag.c_str(), allocator).Move(), allocator);
    }

    if (m_channelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_channelId, allocator);
    }

}


string SeeCreateSubscriptionEntry::GetProductId() const
{
    return m_productId;
}

void SeeCreateSubscriptionEntry::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool SeeCreateSubscriptionEntry::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string SeeCreateSubscriptionEntry::GetDeviceName() const
{
    return m_deviceName;
}

void SeeCreateSubscriptionEntry::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool SeeCreateSubscriptionEntry::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string SeeCreateSubscriptionEntry::GetServiceType() const
{
    return m_serviceType;
}

void SeeCreateSubscriptionEntry::SetServiceType(const string& _serviceType)
{
    m_serviceType = _serviceType;
    m_serviceTypeHasBeenSet = true;
}

bool SeeCreateSubscriptionEntry::ServiceTypeHasBeenSet() const
{
    return m_serviceTypeHasBeenSet;
}

string SeeCreateSubscriptionEntry::GetServiceTier() const
{
    return m_serviceTier;
}

void SeeCreateSubscriptionEntry::SetServiceTier(const string& _serviceTier)
{
    m_serviceTier = _serviceTier;
    m_serviceTierHasBeenSet = true;
}

bool SeeCreateSubscriptionEntry::ServiceTierHasBeenSet() const
{
    return m_serviceTierHasBeenSet;
}

int64_t SeeCreateSubscriptionEntry::GetPeriod() const
{
    return m_period;
}

void SeeCreateSubscriptionEntry::SetPeriod(const int64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool SeeCreateSubscriptionEntry::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

string SeeCreateSubscriptionEntry::GetCustomOrderId() const
{
    return m_customOrderId;
}

void SeeCreateSubscriptionEntry::SetCustomOrderId(const string& _customOrderId)
{
    m_customOrderId = _customOrderId;
    m_customOrderIdHasBeenSet = true;
}

bool SeeCreateSubscriptionEntry::CustomOrderIdHasBeenSet() const
{
    return m_customOrderIdHasBeenSet;
}

string SeeCreateSubscriptionEntry::GetRenewFlag() const
{
    return m_renewFlag;
}

void SeeCreateSubscriptionEntry::SetRenewFlag(const string& _renewFlag)
{
    m_renewFlag = _renewFlag;
    m_renewFlagHasBeenSet = true;
}

bool SeeCreateSubscriptionEntry::RenewFlagHasBeenSet() const
{
    return m_renewFlagHasBeenSet;
}

uint64_t SeeCreateSubscriptionEntry::GetChannelId() const
{
    return m_channelId;
}

void SeeCreateSubscriptionEntry::SetChannelId(const uint64_t& _channelId)
{
    m_channelId = _channelId;
    m_channelIdHasBeenSet = true;
}

bool SeeCreateSubscriptionEntry::ChannelIdHasBeenSet() const
{
    return m_channelIdHasBeenSet;
}

