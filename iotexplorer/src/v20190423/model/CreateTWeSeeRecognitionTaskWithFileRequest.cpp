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

#include <tencentcloud/iotexplorer/v20190423/model/CreateTWeSeeRecognitionTaskWithFileRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

CreateTWeSeeRecognitionTaskWithFileRequest::CreateTWeSeeRecognitionTaskWithFileRequest() :
    m_productIdHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_inputBase64HasBeenSet(false),
    m_channelIdHasBeenSet(false),
    m_customIdHasBeenSet(false),
    m_enableSearchHasBeenSet(false),
    m_startTimeMsHasBeenSet(false),
    m_endTimeMsHasBeenSet(false),
    m_configHasBeenSet(false),
    m_isCustomDeviceHasBeenSet(false),
    m_inputTypeHasBeenSet(false),
    m_summaryQOSHasBeenSet(false),
    m_summaryConfigHasBeenSet(false),
    m_serviceTypeHasBeenSet(false),
    m_objectDetectConfigHasBeenSet(false)
{
}

string CreateTWeSeeRecognitionTaskWithFileRequest::ToJsonString() const
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

    if (m_inputBase64HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputBase64";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_inputBase64.c_str(), allocator).Move(), allocator);
    }

    if (m_channelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_channelId, allocator);
    }

    if (m_customIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_customId.c_str(), allocator).Move(), allocator);
    }

    if (m_enableSearchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableSearch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableSearch, allocator);
    }

    if (m_startTimeMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTimeMs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startTimeMs, allocator);
    }

    if (m_endTimeMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTimeMs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endTimeMs, allocator);
    }

    if (m_configHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Config";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_config.c_str(), allocator).Move(), allocator);
    }

    if (m_isCustomDeviceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCustomDevice";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isCustomDevice, allocator);
    }

    if (m_inputTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_inputType.c_str(), allocator).Move(), allocator);
    }

    if (m_summaryQOSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SummaryQOS";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_summaryQOS.c_str(), allocator).Move(), allocator);
    }

    if (m_summaryConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SummaryConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_summaryConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_serviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_objectDetectConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObjectDetectConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_objectDetectConfig.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateTWeSeeRecognitionTaskWithFileRequest::GetProductId() const
{
    return m_productId;
}

void CreateTWeSeeRecognitionTaskWithFileRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool CreateTWeSeeRecognitionTaskWithFileRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string CreateTWeSeeRecognitionTaskWithFileRequest::GetDeviceName() const
{
    return m_deviceName;
}

void CreateTWeSeeRecognitionTaskWithFileRequest::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool CreateTWeSeeRecognitionTaskWithFileRequest::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string CreateTWeSeeRecognitionTaskWithFileRequest::GetInputBase64() const
{
    return m_inputBase64;
}

void CreateTWeSeeRecognitionTaskWithFileRequest::SetInputBase64(const string& _inputBase64)
{
    m_inputBase64 = _inputBase64;
    m_inputBase64HasBeenSet = true;
}

bool CreateTWeSeeRecognitionTaskWithFileRequest::InputBase64HasBeenSet() const
{
    return m_inputBase64HasBeenSet;
}

uint64_t CreateTWeSeeRecognitionTaskWithFileRequest::GetChannelId() const
{
    return m_channelId;
}

void CreateTWeSeeRecognitionTaskWithFileRequest::SetChannelId(const uint64_t& _channelId)
{
    m_channelId = _channelId;
    m_channelIdHasBeenSet = true;
}

bool CreateTWeSeeRecognitionTaskWithFileRequest::ChannelIdHasBeenSet() const
{
    return m_channelIdHasBeenSet;
}

string CreateTWeSeeRecognitionTaskWithFileRequest::GetCustomId() const
{
    return m_customId;
}

void CreateTWeSeeRecognitionTaskWithFileRequest::SetCustomId(const string& _customId)
{
    m_customId = _customId;
    m_customIdHasBeenSet = true;
}

bool CreateTWeSeeRecognitionTaskWithFileRequest::CustomIdHasBeenSet() const
{
    return m_customIdHasBeenSet;
}

bool CreateTWeSeeRecognitionTaskWithFileRequest::GetEnableSearch() const
{
    return m_enableSearch;
}

void CreateTWeSeeRecognitionTaskWithFileRequest::SetEnableSearch(const bool& _enableSearch)
{
    m_enableSearch = _enableSearch;
    m_enableSearchHasBeenSet = true;
}

bool CreateTWeSeeRecognitionTaskWithFileRequest::EnableSearchHasBeenSet() const
{
    return m_enableSearchHasBeenSet;
}

uint64_t CreateTWeSeeRecognitionTaskWithFileRequest::GetStartTimeMs() const
{
    return m_startTimeMs;
}

void CreateTWeSeeRecognitionTaskWithFileRequest::SetStartTimeMs(const uint64_t& _startTimeMs)
{
    m_startTimeMs = _startTimeMs;
    m_startTimeMsHasBeenSet = true;
}

bool CreateTWeSeeRecognitionTaskWithFileRequest::StartTimeMsHasBeenSet() const
{
    return m_startTimeMsHasBeenSet;
}

uint64_t CreateTWeSeeRecognitionTaskWithFileRequest::GetEndTimeMs() const
{
    return m_endTimeMs;
}

void CreateTWeSeeRecognitionTaskWithFileRequest::SetEndTimeMs(const uint64_t& _endTimeMs)
{
    m_endTimeMs = _endTimeMs;
    m_endTimeMsHasBeenSet = true;
}

bool CreateTWeSeeRecognitionTaskWithFileRequest::EndTimeMsHasBeenSet() const
{
    return m_endTimeMsHasBeenSet;
}

string CreateTWeSeeRecognitionTaskWithFileRequest::GetConfig() const
{
    return m_config;
}

void CreateTWeSeeRecognitionTaskWithFileRequest::SetConfig(const string& _config)
{
    m_config = _config;
    m_configHasBeenSet = true;
}

bool CreateTWeSeeRecognitionTaskWithFileRequest::ConfigHasBeenSet() const
{
    return m_configHasBeenSet;
}

bool CreateTWeSeeRecognitionTaskWithFileRequest::GetIsCustomDevice() const
{
    return m_isCustomDevice;
}

void CreateTWeSeeRecognitionTaskWithFileRequest::SetIsCustomDevice(const bool& _isCustomDevice)
{
    m_isCustomDevice = _isCustomDevice;
    m_isCustomDeviceHasBeenSet = true;
}

bool CreateTWeSeeRecognitionTaskWithFileRequest::IsCustomDeviceHasBeenSet() const
{
    return m_isCustomDeviceHasBeenSet;
}

string CreateTWeSeeRecognitionTaskWithFileRequest::GetInputType() const
{
    return m_inputType;
}

void CreateTWeSeeRecognitionTaskWithFileRequest::SetInputType(const string& _inputType)
{
    m_inputType = _inputType;
    m_inputTypeHasBeenSet = true;
}

bool CreateTWeSeeRecognitionTaskWithFileRequest::InputTypeHasBeenSet() const
{
    return m_inputTypeHasBeenSet;
}

string CreateTWeSeeRecognitionTaskWithFileRequest::GetSummaryQOS() const
{
    return m_summaryQOS;
}

void CreateTWeSeeRecognitionTaskWithFileRequest::SetSummaryQOS(const string& _summaryQOS)
{
    m_summaryQOS = _summaryQOS;
    m_summaryQOSHasBeenSet = true;
}

bool CreateTWeSeeRecognitionTaskWithFileRequest::SummaryQOSHasBeenSet() const
{
    return m_summaryQOSHasBeenSet;
}

VisionSummaryConfig CreateTWeSeeRecognitionTaskWithFileRequest::GetSummaryConfig() const
{
    return m_summaryConfig;
}

void CreateTWeSeeRecognitionTaskWithFileRequest::SetSummaryConfig(const VisionSummaryConfig& _summaryConfig)
{
    m_summaryConfig = _summaryConfig;
    m_summaryConfigHasBeenSet = true;
}

bool CreateTWeSeeRecognitionTaskWithFileRequest::SummaryConfigHasBeenSet() const
{
    return m_summaryConfigHasBeenSet;
}

string CreateTWeSeeRecognitionTaskWithFileRequest::GetServiceType() const
{
    return m_serviceType;
}

void CreateTWeSeeRecognitionTaskWithFileRequest::SetServiceType(const string& _serviceType)
{
    m_serviceType = _serviceType;
    m_serviceTypeHasBeenSet = true;
}

bool CreateTWeSeeRecognitionTaskWithFileRequest::ServiceTypeHasBeenSet() const
{
    return m_serviceTypeHasBeenSet;
}

VisionObjectDetectConfig CreateTWeSeeRecognitionTaskWithFileRequest::GetObjectDetectConfig() const
{
    return m_objectDetectConfig;
}

void CreateTWeSeeRecognitionTaskWithFileRequest::SetObjectDetectConfig(const VisionObjectDetectConfig& _objectDetectConfig)
{
    m_objectDetectConfig = _objectDetectConfig;
    m_objectDetectConfigHasBeenSet = true;
}

bool CreateTWeSeeRecognitionTaskWithFileRequest::ObjectDetectConfigHasBeenSet() const
{
    return m_objectDetectConfigHasBeenSet;
}


