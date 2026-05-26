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

#include <tencentcloud/iotexplorer/v20190423/model/RenewTWeSeeSubscriptionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

RenewTWeSeeSubscriptionRequest::RenewTWeSeeSubscriptionRequest() :
    m_productIdHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_serviceTypeHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_channelIdHasBeenSet(false),
    m_customOrderIdHasBeenSet(false)
{
}

string RenewTWeSeeSubscriptionRequest::ToJsonString() const
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

    if (m_customOrderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomOrderId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_customOrderId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RenewTWeSeeSubscriptionRequest::GetProductId() const
{
    return m_productId;
}

void RenewTWeSeeSubscriptionRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool RenewTWeSeeSubscriptionRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string RenewTWeSeeSubscriptionRequest::GetDeviceName() const
{
    return m_deviceName;
}

void RenewTWeSeeSubscriptionRequest::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool RenewTWeSeeSubscriptionRequest::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string RenewTWeSeeSubscriptionRequest::GetServiceType() const
{
    return m_serviceType;
}

void RenewTWeSeeSubscriptionRequest::SetServiceType(const string& _serviceType)
{
    m_serviceType = _serviceType;
    m_serviceTypeHasBeenSet = true;
}

bool RenewTWeSeeSubscriptionRequest::ServiceTypeHasBeenSet() const
{
    return m_serviceTypeHasBeenSet;
}

int64_t RenewTWeSeeSubscriptionRequest::GetPeriod() const
{
    return m_period;
}

void RenewTWeSeeSubscriptionRequest::SetPeriod(const int64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool RenewTWeSeeSubscriptionRequest::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

uint64_t RenewTWeSeeSubscriptionRequest::GetChannelId() const
{
    return m_channelId;
}

void RenewTWeSeeSubscriptionRequest::SetChannelId(const uint64_t& _channelId)
{
    m_channelId = _channelId;
    m_channelIdHasBeenSet = true;
}

bool RenewTWeSeeSubscriptionRequest::ChannelIdHasBeenSet() const
{
    return m_channelIdHasBeenSet;
}

string RenewTWeSeeSubscriptionRequest::GetCustomOrderId() const
{
    return m_customOrderId;
}

void RenewTWeSeeSubscriptionRequest::SetCustomOrderId(const string& _customOrderId)
{
    m_customOrderId = _customOrderId;
    m_customOrderIdHasBeenSet = true;
}

bool RenewTWeSeeSubscriptionRequest::CustomOrderIdHasBeenSet() const
{
    return m_customOrderIdHasBeenSet;
}


