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

#include <tencentcloud/iotexplorer/v20190423/model/ModifyTWeSeeSubscriptionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

ModifyTWeSeeSubscriptionRequest::ModifyTWeSeeSubscriptionRequest() :
    m_productIdHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_serviceTypeHasBeenSet(false),
    m_channelIdHasBeenSet(false),
    m_enabledHasBeenSet(false),
    m_comprehensionConfigHasBeenSet(false),
    m_compHighlightConfigHasBeenSet(false),
    m_eventIdFilterConfigHasBeenSet(false)
{
}

string ModifyTWeSeeSubscriptionRequest::ToJsonString() const
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

    if (m_channelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_channelId, allocator);
    }

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enabled, allocator);
    }

    if (m_comprehensionConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComprehensionConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_comprehensionConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_compHighlightConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompHighlightConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_compHighlightConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_eventIdFilterConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventIdFilterConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_eventIdFilterConfig.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyTWeSeeSubscriptionRequest::GetProductId() const
{
    return m_productId;
}

void ModifyTWeSeeSubscriptionRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool ModifyTWeSeeSubscriptionRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string ModifyTWeSeeSubscriptionRequest::GetDeviceName() const
{
    return m_deviceName;
}

void ModifyTWeSeeSubscriptionRequest::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool ModifyTWeSeeSubscriptionRequest::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string ModifyTWeSeeSubscriptionRequest::GetServiceType() const
{
    return m_serviceType;
}

void ModifyTWeSeeSubscriptionRequest::SetServiceType(const string& _serviceType)
{
    m_serviceType = _serviceType;
    m_serviceTypeHasBeenSet = true;
}

bool ModifyTWeSeeSubscriptionRequest::ServiceTypeHasBeenSet() const
{
    return m_serviceTypeHasBeenSet;
}

uint64_t ModifyTWeSeeSubscriptionRequest::GetChannelId() const
{
    return m_channelId;
}

void ModifyTWeSeeSubscriptionRequest::SetChannelId(const uint64_t& _channelId)
{
    m_channelId = _channelId;
    m_channelIdHasBeenSet = true;
}

bool ModifyTWeSeeSubscriptionRequest::ChannelIdHasBeenSet() const
{
    return m_channelIdHasBeenSet;
}

bool ModifyTWeSeeSubscriptionRequest::GetEnabled() const
{
    return m_enabled;
}

void ModifyTWeSeeSubscriptionRequest::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool ModifyTWeSeeSubscriptionRequest::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

SeeComprehensionConfig ModifyTWeSeeSubscriptionRequest::GetComprehensionConfig() const
{
    return m_comprehensionConfig;
}

void ModifyTWeSeeSubscriptionRequest::SetComprehensionConfig(const SeeComprehensionConfig& _comprehensionConfig)
{
    m_comprehensionConfig = _comprehensionConfig;
    m_comprehensionConfigHasBeenSet = true;
}

bool ModifyTWeSeeSubscriptionRequest::ComprehensionConfigHasBeenSet() const
{
    return m_comprehensionConfigHasBeenSet;
}

SeeCompHighlightConfig ModifyTWeSeeSubscriptionRequest::GetCompHighlightConfig() const
{
    return m_compHighlightConfig;
}

void ModifyTWeSeeSubscriptionRequest::SetCompHighlightConfig(const SeeCompHighlightConfig& _compHighlightConfig)
{
    m_compHighlightConfig = _compHighlightConfig;
    m_compHighlightConfigHasBeenSet = true;
}

bool ModifyTWeSeeSubscriptionRequest::CompHighlightConfigHasBeenSet() const
{
    return m_compHighlightConfigHasBeenSet;
}

SeeEventIdFilterConfig ModifyTWeSeeSubscriptionRequest::GetEventIdFilterConfig() const
{
    return m_eventIdFilterConfig;
}

void ModifyTWeSeeSubscriptionRequest::SetEventIdFilterConfig(const SeeEventIdFilterConfig& _eventIdFilterConfig)
{
    m_eventIdFilterConfig = _eventIdFilterConfig;
    m_eventIdFilterConfigHasBeenSet = true;
}

bool ModifyTWeSeeSubscriptionRequest::EventIdFilterConfigHasBeenSet() const
{
    return m_eventIdFilterConfigHasBeenSet;
}


