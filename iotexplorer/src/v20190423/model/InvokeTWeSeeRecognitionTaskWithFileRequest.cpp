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

#include <tencentcloud/iotexplorer/v20190423/model/InvokeTWeSeeRecognitionTaskWithFileRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

InvokeTWeSeeRecognitionTaskWithFileRequest::InvokeTWeSeeRecognitionTaskWithFileRequest() :
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

string InvokeTWeSeeRecognitionTaskWithFileRequest::ToJsonString() const
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


string InvokeTWeSeeRecognitionTaskWithFileRequest::GetProductId() const
{
    return m_productId;
}

void InvokeTWeSeeRecognitionTaskWithFileRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool InvokeTWeSeeRecognitionTaskWithFileRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string InvokeTWeSeeRecognitionTaskWithFileRequest::GetDeviceName() const
{
    return m_deviceName;
}

void InvokeTWeSeeRecognitionTaskWithFileRequest::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool InvokeTWeSeeRecognitionTaskWithFileRequest::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string InvokeTWeSeeRecognitionTaskWithFileRequest::GetInputBase64() const
{
    return m_inputBase64;
}

void InvokeTWeSeeRecognitionTaskWithFileRequest::SetInputBase64(const string& _inputBase64)
{
    m_inputBase64 = _inputBase64;
    m_inputBase64HasBeenSet = true;
}

bool InvokeTWeSeeRecognitionTaskWithFileRequest::InputBase64HasBeenSet() const
{
    return m_inputBase64HasBeenSet;
}

uint64_t InvokeTWeSeeRecognitionTaskWithFileRequest::GetChannelId() const
{
    return m_channelId;
}

void InvokeTWeSeeRecognitionTaskWithFileRequest::SetChannelId(const uint64_t& _channelId)
{
    m_channelId = _channelId;
    m_channelIdHasBeenSet = true;
}

bool InvokeTWeSeeRecognitionTaskWithFileRequest::ChannelIdHasBeenSet() const
{
    return m_channelIdHasBeenSet;
}

string InvokeTWeSeeRecognitionTaskWithFileRequest::GetCustomId() const
{
    return m_customId;
}

void InvokeTWeSeeRecognitionTaskWithFileRequest::SetCustomId(const string& _customId)
{
    m_customId = _customId;
    m_customIdHasBeenSet = true;
}

bool InvokeTWeSeeRecognitionTaskWithFileRequest::CustomIdHasBeenSet() const
{
    return m_customIdHasBeenSet;
}

bool InvokeTWeSeeRecognitionTaskWithFileRequest::GetEnableSearch() const
{
    return m_enableSearch;
}

void InvokeTWeSeeRecognitionTaskWithFileRequest::SetEnableSearch(const bool& _enableSearch)
{
    m_enableSearch = _enableSearch;
    m_enableSearchHasBeenSet = true;
}

bool InvokeTWeSeeRecognitionTaskWithFileRequest::EnableSearchHasBeenSet() const
{
    return m_enableSearchHasBeenSet;
}

uint64_t InvokeTWeSeeRecognitionTaskWithFileRequest::GetStartTimeMs() const
{
    return m_startTimeMs;
}

void InvokeTWeSeeRecognitionTaskWithFileRequest::SetStartTimeMs(const uint64_t& _startTimeMs)
{
    m_startTimeMs = _startTimeMs;
    m_startTimeMsHasBeenSet = true;
}

bool InvokeTWeSeeRecognitionTaskWithFileRequest::StartTimeMsHasBeenSet() const
{
    return m_startTimeMsHasBeenSet;
}

uint64_t InvokeTWeSeeRecognitionTaskWithFileRequest::GetEndTimeMs() const
{
    return m_endTimeMs;
}

void InvokeTWeSeeRecognitionTaskWithFileRequest::SetEndTimeMs(const uint64_t& _endTimeMs)
{
    m_endTimeMs = _endTimeMs;
    m_endTimeMsHasBeenSet = true;
}

bool InvokeTWeSeeRecognitionTaskWithFileRequest::EndTimeMsHasBeenSet() const
{
    return m_endTimeMsHasBeenSet;
}

string InvokeTWeSeeRecognitionTaskWithFileRequest::GetConfig() const
{
    return m_config;
}

void InvokeTWeSeeRecognitionTaskWithFileRequest::SetConfig(const string& _config)
{
    m_config = _config;
    m_configHasBeenSet = true;
}

bool InvokeTWeSeeRecognitionTaskWithFileRequest::ConfigHasBeenSet() const
{
    return m_configHasBeenSet;
}

bool InvokeTWeSeeRecognitionTaskWithFileRequest::GetIsCustomDevice() const
{
    return m_isCustomDevice;
}

void InvokeTWeSeeRecognitionTaskWithFileRequest::SetIsCustomDevice(const bool& _isCustomDevice)
{
    m_isCustomDevice = _isCustomDevice;
    m_isCustomDeviceHasBeenSet = true;
}

bool InvokeTWeSeeRecognitionTaskWithFileRequest::IsCustomDeviceHasBeenSet() const
{
    return m_isCustomDeviceHasBeenSet;
}

string InvokeTWeSeeRecognitionTaskWithFileRequest::GetInputType() const
{
    return m_inputType;
}

void InvokeTWeSeeRecognitionTaskWithFileRequest::SetInputType(const string& _inputType)
{
    m_inputType = _inputType;
    m_inputTypeHasBeenSet = true;
}

bool InvokeTWeSeeRecognitionTaskWithFileRequest::InputTypeHasBeenSet() const
{
    return m_inputTypeHasBeenSet;
}

string InvokeTWeSeeRecognitionTaskWithFileRequest::GetSummaryQOS() const
{
    return m_summaryQOS;
}

void InvokeTWeSeeRecognitionTaskWithFileRequest::SetSummaryQOS(const string& _summaryQOS)
{
    m_summaryQOS = _summaryQOS;
    m_summaryQOSHasBeenSet = true;
}

bool InvokeTWeSeeRecognitionTaskWithFileRequest::SummaryQOSHasBeenSet() const
{
    return m_summaryQOSHasBeenSet;
}

VisionSummaryConfig InvokeTWeSeeRecognitionTaskWithFileRequest::GetSummaryConfig() const
{
    return m_summaryConfig;
}

void InvokeTWeSeeRecognitionTaskWithFileRequest::SetSummaryConfig(const VisionSummaryConfig& _summaryConfig)
{
    m_summaryConfig = _summaryConfig;
    m_summaryConfigHasBeenSet = true;
}

bool InvokeTWeSeeRecognitionTaskWithFileRequest::SummaryConfigHasBeenSet() const
{
    return m_summaryConfigHasBeenSet;
}

string InvokeTWeSeeRecognitionTaskWithFileRequest::GetServiceType() const
{
    return m_serviceType;
}

void InvokeTWeSeeRecognitionTaskWithFileRequest::SetServiceType(const string& _serviceType)
{
    m_serviceType = _serviceType;
    m_serviceTypeHasBeenSet = true;
}

bool InvokeTWeSeeRecognitionTaskWithFileRequest::ServiceTypeHasBeenSet() const
{
    return m_serviceTypeHasBeenSet;
}

VisionObjectDetectConfig InvokeTWeSeeRecognitionTaskWithFileRequest::GetObjectDetectConfig() const
{
    return m_objectDetectConfig;
}

void InvokeTWeSeeRecognitionTaskWithFileRequest::SetObjectDetectConfig(const VisionObjectDetectConfig& _objectDetectConfig)
{
    m_objectDetectConfig = _objectDetectConfig;
    m_objectDetectConfigHasBeenSet = true;
}

bool InvokeTWeSeeRecognitionTaskWithFileRequest::ObjectDetectConfigHasBeenSet() const
{
    return m_objectDetectConfigHasBeenSet;
}


