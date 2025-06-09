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

#include <tencentcloud/iotexplorer/v20190423/model/ModifyCloudStorageAIServiceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

ModifyCloudStorageAIServiceRequest::ModifyCloudStorageAIServiceRequest() :
    m_productIdHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_serviceTypeHasBeenSet(false),
    m_enabledHasBeenSet(false),
    m_rOIHasBeenSet(false),
    m_configHasBeenSet(false),
    m_sHLConfigHasBeenSet(false)
{
}

string ModifyCloudStorageAIServiceRequest::ToJsonString() const
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

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enabled, allocator);
    }

    if (m_rOIHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ROI";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_rOI.c_str(), allocator).Move(), allocator);
    }

    if (m_configHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Config";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_config.c_str(), allocator).Move(), allocator);
    }

    if (m_sHLConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SHLConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sHLConfig.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyCloudStorageAIServiceRequest::GetProductId() const
{
    return m_productId;
}

void ModifyCloudStorageAIServiceRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool ModifyCloudStorageAIServiceRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string ModifyCloudStorageAIServiceRequest::GetDeviceName() const
{
    return m_deviceName;
}

void ModifyCloudStorageAIServiceRequest::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool ModifyCloudStorageAIServiceRequest::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string ModifyCloudStorageAIServiceRequest::GetServiceType() const
{
    return m_serviceType;
}

void ModifyCloudStorageAIServiceRequest::SetServiceType(const string& _serviceType)
{
    m_serviceType = _serviceType;
    m_serviceTypeHasBeenSet = true;
}

bool ModifyCloudStorageAIServiceRequest::ServiceTypeHasBeenSet() const
{
    return m_serviceTypeHasBeenSet;
}

bool ModifyCloudStorageAIServiceRequest::GetEnabled() const
{
    return m_enabled;
}

void ModifyCloudStorageAIServiceRequest::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool ModifyCloudStorageAIServiceRequest::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

string ModifyCloudStorageAIServiceRequest::GetROI() const
{
    return m_rOI;
}

void ModifyCloudStorageAIServiceRequest::SetROI(const string& _rOI)
{
    m_rOI = _rOI;
    m_rOIHasBeenSet = true;
}

bool ModifyCloudStorageAIServiceRequest::ROIHasBeenSet() const
{
    return m_rOIHasBeenSet;
}

string ModifyCloudStorageAIServiceRequest::GetConfig() const
{
    return m_config;
}

void ModifyCloudStorageAIServiceRequest::SetConfig(const string& _config)
{
    m_config = _config;
    m_configHasBeenSet = true;
}

bool ModifyCloudStorageAIServiceRequest::ConfigHasBeenSet() const
{
    return m_configHasBeenSet;
}

DiarySHLConfig ModifyCloudStorageAIServiceRequest::GetSHLConfig() const
{
    return m_sHLConfig;
}

void ModifyCloudStorageAIServiceRequest::SetSHLConfig(const DiarySHLConfig& _sHLConfig)
{
    m_sHLConfig = _sHLConfig;
    m_sHLConfigHasBeenSet = true;
}

bool ModifyCloudStorageAIServiceRequest::SHLConfigHasBeenSet() const
{
    return m_sHLConfigHasBeenSet;
}


