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

#include <tencentcloud/iotexplorer/v20190423/model/SeeRenewSubscriptionEntry.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

SeeRenewSubscriptionEntry::SeeRenewSubscriptionEntry() :
    m_productIdHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_serviceTypeHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_customOrderIdHasBeenSet(false),
    m_channelIdHasBeenSet(false)
{
}

CoreInternalOutcome SeeRenewSubscriptionEntry::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProductId") && !value["ProductId"].IsNull())
    {
        if (!value["ProductId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SeeRenewSubscriptionEntry.ProductId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productId = string(value["ProductId"].GetString());
        m_productIdHasBeenSet = true;
    }

    if (value.HasMember("DeviceName") && !value["DeviceName"].IsNull())
    {
        if (!value["DeviceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SeeRenewSubscriptionEntry.DeviceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceName = string(value["DeviceName"].GetString());
        m_deviceNameHasBeenSet = true;
    }

    if (value.HasMember("ServiceType") && !value["ServiceType"].IsNull())
    {
        if (!value["ServiceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SeeRenewSubscriptionEntry.ServiceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceType = string(value["ServiceType"].GetString());
        m_serviceTypeHasBeenSet = true;
    }

    if (value.HasMember("Period") && !value["Period"].IsNull())
    {
        if (!value["Period"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SeeRenewSubscriptionEntry.Period` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_period = value["Period"].GetInt64();
        m_periodHasBeenSet = true;
    }

    if (value.HasMember("CustomOrderId") && !value["CustomOrderId"].IsNull())
    {
        if (!value["CustomOrderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SeeRenewSubscriptionEntry.CustomOrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customOrderId = string(value["CustomOrderId"].GetString());
        m_customOrderIdHasBeenSet = true;
    }

    if (value.HasMember("ChannelId") && !value["ChannelId"].IsNull())
    {
        if (!value["ChannelId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SeeRenewSubscriptionEntry.ChannelId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_channelId = value["ChannelId"].GetUint64();
        m_channelIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SeeRenewSubscriptionEntry::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_channelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_channelId, allocator);
    }

}


string SeeRenewSubscriptionEntry::GetProductId() const
{
    return m_productId;
}

void SeeRenewSubscriptionEntry::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool SeeRenewSubscriptionEntry::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string SeeRenewSubscriptionEntry::GetDeviceName() const
{
    return m_deviceName;
}

void SeeRenewSubscriptionEntry::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool SeeRenewSubscriptionEntry::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string SeeRenewSubscriptionEntry::GetServiceType() const
{
    return m_serviceType;
}

void SeeRenewSubscriptionEntry::SetServiceType(const string& _serviceType)
{
    m_serviceType = _serviceType;
    m_serviceTypeHasBeenSet = true;
}

bool SeeRenewSubscriptionEntry::ServiceTypeHasBeenSet() const
{
    return m_serviceTypeHasBeenSet;
}

int64_t SeeRenewSubscriptionEntry::GetPeriod() const
{
    return m_period;
}

void SeeRenewSubscriptionEntry::SetPeriod(const int64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool SeeRenewSubscriptionEntry::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

string SeeRenewSubscriptionEntry::GetCustomOrderId() const
{
    return m_customOrderId;
}

void SeeRenewSubscriptionEntry::SetCustomOrderId(const string& _customOrderId)
{
    m_customOrderId = _customOrderId;
    m_customOrderIdHasBeenSet = true;
}

bool SeeRenewSubscriptionEntry::CustomOrderIdHasBeenSet() const
{
    return m_customOrderIdHasBeenSet;
}

uint64_t SeeRenewSubscriptionEntry::GetChannelId() const
{
    return m_channelId;
}

void SeeRenewSubscriptionEntry::SetChannelId(const uint64_t& _channelId)
{
    m_channelId = _channelId;
    m_channelIdHasBeenSet = true;
}

bool SeeRenewSubscriptionEntry::ChannelIdHasBeenSet() const
{
    return m_channelIdHasBeenSet;
}

