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

#include <tencentcloud/iotexplorer/v20190423/model/CreateTWeSeeDirectUploadCredentialRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

CreateTWeSeeDirectUploadCredentialRequest::CreateTWeSeeDirectUploadCredentialRequest() :
    m_productIdHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_serviceTypeHasBeenSet(false),
    m_channelIdHasBeenSet(false),
    m_callbackIdHasBeenSet(false),
    m_comprehensionConfigHasBeenSet(false),
    m_customIdHasBeenSet(false),
    m_durationSecondsHasBeenSet(false),
    m_maxInvokeCountHasBeenSet(false),
    m_storageRegionHasBeenSet(false),
    m_uploadMethodHasBeenSet(false)
{
}

string CreateTWeSeeDirectUploadCredentialRequest::ToJsonString() const
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

    if (m_callbackIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_callbackId.c_str(), allocator).Move(), allocator);
    }

    if (m_comprehensionConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComprehensionConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_comprehensionConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_customIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_customId.c_str(), allocator).Move(), allocator);
    }

    if (m_durationSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DurationSeconds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_durationSeconds, allocator);
    }

    if (m_maxInvokeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxInvokeCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxInvokeCount, allocator);
    }

    if (m_storageRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_storageRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_uploadMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UploadMethod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_uploadMethod.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateTWeSeeDirectUploadCredentialRequest::GetProductId() const
{
    return m_productId;
}

void CreateTWeSeeDirectUploadCredentialRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool CreateTWeSeeDirectUploadCredentialRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string CreateTWeSeeDirectUploadCredentialRequest::GetDeviceName() const
{
    return m_deviceName;
}

void CreateTWeSeeDirectUploadCredentialRequest::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool CreateTWeSeeDirectUploadCredentialRequest::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string CreateTWeSeeDirectUploadCredentialRequest::GetServiceType() const
{
    return m_serviceType;
}

void CreateTWeSeeDirectUploadCredentialRequest::SetServiceType(const string& _serviceType)
{
    m_serviceType = _serviceType;
    m_serviceTypeHasBeenSet = true;
}

bool CreateTWeSeeDirectUploadCredentialRequest::ServiceTypeHasBeenSet() const
{
    return m_serviceTypeHasBeenSet;
}

uint64_t CreateTWeSeeDirectUploadCredentialRequest::GetChannelId() const
{
    return m_channelId;
}

void CreateTWeSeeDirectUploadCredentialRequest::SetChannelId(const uint64_t& _channelId)
{
    m_channelId = _channelId;
    m_channelIdHasBeenSet = true;
}

bool CreateTWeSeeDirectUploadCredentialRequest::ChannelIdHasBeenSet() const
{
    return m_channelIdHasBeenSet;
}

string CreateTWeSeeDirectUploadCredentialRequest::GetCallbackId() const
{
    return m_callbackId;
}

void CreateTWeSeeDirectUploadCredentialRequest::SetCallbackId(const string& _callbackId)
{
    m_callbackId = _callbackId;
    m_callbackIdHasBeenSet = true;
}

bool CreateTWeSeeDirectUploadCredentialRequest::CallbackIdHasBeenSet() const
{
    return m_callbackIdHasBeenSet;
}

SeeComprehensionConfig CreateTWeSeeDirectUploadCredentialRequest::GetComprehensionConfig() const
{
    return m_comprehensionConfig;
}

void CreateTWeSeeDirectUploadCredentialRequest::SetComprehensionConfig(const SeeComprehensionConfig& _comprehensionConfig)
{
    m_comprehensionConfig = _comprehensionConfig;
    m_comprehensionConfigHasBeenSet = true;
}

bool CreateTWeSeeDirectUploadCredentialRequest::ComprehensionConfigHasBeenSet() const
{
    return m_comprehensionConfigHasBeenSet;
}

string CreateTWeSeeDirectUploadCredentialRequest::GetCustomId() const
{
    return m_customId;
}

void CreateTWeSeeDirectUploadCredentialRequest::SetCustomId(const string& _customId)
{
    m_customId = _customId;
    m_customIdHasBeenSet = true;
}

bool CreateTWeSeeDirectUploadCredentialRequest::CustomIdHasBeenSet() const
{
    return m_customIdHasBeenSet;
}

int64_t CreateTWeSeeDirectUploadCredentialRequest::GetDurationSeconds() const
{
    return m_durationSeconds;
}

void CreateTWeSeeDirectUploadCredentialRequest::SetDurationSeconds(const int64_t& _durationSeconds)
{
    m_durationSeconds = _durationSeconds;
    m_durationSecondsHasBeenSet = true;
}

bool CreateTWeSeeDirectUploadCredentialRequest::DurationSecondsHasBeenSet() const
{
    return m_durationSecondsHasBeenSet;
}

int64_t CreateTWeSeeDirectUploadCredentialRequest::GetMaxInvokeCount() const
{
    return m_maxInvokeCount;
}

void CreateTWeSeeDirectUploadCredentialRequest::SetMaxInvokeCount(const int64_t& _maxInvokeCount)
{
    m_maxInvokeCount = _maxInvokeCount;
    m_maxInvokeCountHasBeenSet = true;
}

bool CreateTWeSeeDirectUploadCredentialRequest::MaxInvokeCountHasBeenSet() const
{
    return m_maxInvokeCountHasBeenSet;
}

string CreateTWeSeeDirectUploadCredentialRequest::GetStorageRegion() const
{
    return m_storageRegion;
}

void CreateTWeSeeDirectUploadCredentialRequest::SetStorageRegion(const string& _storageRegion)
{
    m_storageRegion = _storageRegion;
    m_storageRegionHasBeenSet = true;
}

bool CreateTWeSeeDirectUploadCredentialRequest::StorageRegionHasBeenSet() const
{
    return m_storageRegionHasBeenSet;
}

string CreateTWeSeeDirectUploadCredentialRequest::GetUploadMethod() const
{
    return m_uploadMethod;
}

void CreateTWeSeeDirectUploadCredentialRequest::SetUploadMethod(const string& _uploadMethod)
{
    m_uploadMethod = _uploadMethod;
    m_uploadMethodHasBeenSet = true;
}

bool CreateTWeSeeDirectUploadCredentialRequest::UploadMethodHasBeenSet() const
{
    return m_uploadMethodHasBeenSet;
}


