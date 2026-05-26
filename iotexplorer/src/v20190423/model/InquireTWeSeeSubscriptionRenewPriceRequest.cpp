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

#include <tencentcloud/iotexplorer/v20190423/model/InquireTWeSeeSubscriptionRenewPriceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

InquireTWeSeeSubscriptionRenewPriceRequest::InquireTWeSeeSubscriptionRenewPriceRequest() :
    m_productIdHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_serviceTypeHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_channelIdHasBeenSet(false)
{
}

string InquireTWeSeeSubscriptionRenewPriceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_productIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_productId.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_period, allocator);
    }

    if (m_channelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_channelId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string InquireTWeSeeSubscriptionRenewPriceRequest::GetProductId() const
{
    return m_productId;
}

void InquireTWeSeeSubscriptionRenewPriceRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool InquireTWeSeeSubscriptionRenewPriceRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string InquireTWeSeeSubscriptionRenewPriceRequest::GetDeviceName() const
{
    return m_deviceName;
}

void InquireTWeSeeSubscriptionRenewPriceRequest::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool InquireTWeSeeSubscriptionRenewPriceRequest::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string InquireTWeSeeSubscriptionRenewPriceRequest::GetServiceType() const
{
    return m_serviceType;
}

void InquireTWeSeeSubscriptionRenewPriceRequest::SetServiceType(const string& _serviceType)
{
    m_serviceType = _serviceType;
    m_serviceTypeHasBeenSet = true;
}

bool InquireTWeSeeSubscriptionRenewPriceRequest::ServiceTypeHasBeenSet() const
{
    return m_serviceTypeHasBeenSet;
}

int64_t InquireTWeSeeSubscriptionRenewPriceRequest::GetPeriod() const
{
    return m_period;
}

void InquireTWeSeeSubscriptionRenewPriceRequest::SetPeriod(const int64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool InquireTWeSeeSubscriptionRenewPriceRequest::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

uint64_t InquireTWeSeeSubscriptionRenewPriceRequest::GetChannelId() const
{
    return m_channelId;
}

void InquireTWeSeeSubscriptionRenewPriceRequest::SetChannelId(const uint64_t& _channelId)
{
    m_channelId = _channelId;
    m_channelIdHasBeenSet = true;
}

bool InquireTWeSeeSubscriptionRenewPriceRequest::ChannelIdHasBeenSet() const
{
    return m_channelIdHasBeenSet;
}


