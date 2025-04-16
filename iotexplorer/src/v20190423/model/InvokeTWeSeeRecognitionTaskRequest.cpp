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

#include <tencentcloud/iotexplorer/v20190423/model/InvokeTWeSeeRecognitionTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

InvokeTWeSeeRecognitionTaskRequest::InvokeTWeSeeRecognitionTaskRequest() :
    m_productIdHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_inputURLHasBeenSet(false),
    m_customIdHasBeenSet(false),
    m_enableSearchHasBeenSet(false),
    m_startTimeMsHasBeenSet(false),
    m_endTimeMsHasBeenSet(false),
    m_configHasBeenSet(false),
    m_isCustomDeviceHasBeenSet(false),
    m_inputTypeHasBeenSet(false),
    m_summaryQOSHasBeenSet(false)
{
}

string InvokeTWeSeeRecognitionTaskRequest::ToJsonString() const
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

    if (m_inputURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputURL";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_inputURL.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string InvokeTWeSeeRecognitionTaskRequest::GetProductId() const
{
    return m_productId;
}

void InvokeTWeSeeRecognitionTaskRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool InvokeTWeSeeRecognitionTaskRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string InvokeTWeSeeRecognitionTaskRequest::GetDeviceName() const
{
    return m_deviceName;
}

void InvokeTWeSeeRecognitionTaskRequest::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool InvokeTWeSeeRecognitionTaskRequest::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string InvokeTWeSeeRecognitionTaskRequest::GetInputURL() const
{
    return m_inputURL;
}

void InvokeTWeSeeRecognitionTaskRequest::SetInputURL(const string& _inputURL)
{
    m_inputURL = _inputURL;
    m_inputURLHasBeenSet = true;
}

bool InvokeTWeSeeRecognitionTaskRequest::InputURLHasBeenSet() const
{
    return m_inputURLHasBeenSet;
}

string InvokeTWeSeeRecognitionTaskRequest::GetCustomId() const
{
    return m_customId;
}

void InvokeTWeSeeRecognitionTaskRequest::SetCustomId(const string& _customId)
{
    m_customId = _customId;
    m_customIdHasBeenSet = true;
}

bool InvokeTWeSeeRecognitionTaskRequest::CustomIdHasBeenSet() const
{
    return m_customIdHasBeenSet;
}

bool InvokeTWeSeeRecognitionTaskRequest::GetEnableSearch() const
{
    return m_enableSearch;
}

void InvokeTWeSeeRecognitionTaskRequest::SetEnableSearch(const bool& _enableSearch)
{
    m_enableSearch = _enableSearch;
    m_enableSearchHasBeenSet = true;
}

bool InvokeTWeSeeRecognitionTaskRequest::EnableSearchHasBeenSet() const
{
    return m_enableSearchHasBeenSet;
}

uint64_t InvokeTWeSeeRecognitionTaskRequest::GetStartTimeMs() const
{
    return m_startTimeMs;
}

void InvokeTWeSeeRecognitionTaskRequest::SetStartTimeMs(const uint64_t& _startTimeMs)
{
    m_startTimeMs = _startTimeMs;
    m_startTimeMsHasBeenSet = true;
}

bool InvokeTWeSeeRecognitionTaskRequest::StartTimeMsHasBeenSet() const
{
    return m_startTimeMsHasBeenSet;
}

uint64_t InvokeTWeSeeRecognitionTaskRequest::GetEndTimeMs() const
{
    return m_endTimeMs;
}

void InvokeTWeSeeRecognitionTaskRequest::SetEndTimeMs(const uint64_t& _endTimeMs)
{
    m_endTimeMs = _endTimeMs;
    m_endTimeMsHasBeenSet = true;
}

bool InvokeTWeSeeRecognitionTaskRequest::EndTimeMsHasBeenSet() const
{
    return m_endTimeMsHasBeenSet;
}

string InvokeTWeSeeRecognitionTaskRequest::GetConfig() const
{
    return m_config;
}

void InvokeTWeSeeRecognitionTaskRequest::SetConfig(const string& _config)
{
    m_config = _config;
    m_configHasBeenSet = true;
}

bool InvokeTWeSeeRecognitionTaskRequest::ConfigHasBeenSet() const
{
    return m_configHasBeenSet;
}

bool InvokeTWeSeeRecognitionTaskRequest::GetIsCustomDevice() const
{
    return m_isCustomDevice;
}

void InvokeTWeSeeRecognitionTaskRequest::SetIsCustomDevice(const bool& _isCustomDevice)
{
    m_isCustomDevice = _isCustomDevice;
    m_isCustomDeviceHasBeenSet = true;
}

bool InvokeTWeSeeRecognitionTaskRequest::IsCustomDeviceHasBeenSet() const
{
    return m_isCustomDeviceHasBeenSet;
}

string InvokeTWeSeeRecognitionTaskRequest::GetInputType() const
{
    return m_inputType;
}

void InvokeTWeSeeRecognitionTaskRequest::SetInputType(const string& _inputType)
{
    m_inputType = _inputType;
    m_inputTypeHasBeenSet = true;
}

bool InvokeTWeSeeRecognitionTaskRequest::InputTypeHasBeenSet() const
{
    return m_inputTypeHasBeenSet;
}

string InvokeTWeSeeRecognitionTaskRequest::GetSummaryQOS() const
{
    return m_summaryQOS;
}

void InvokeTWeSeeRecognitionTaskRequest::SetSummaryQOS(const string& _summaryQOS)
{
    m_summaryQOS = _summaryQOS;
    m_summaryQOSHasBeenSet = true;
}

bool InvokeTWeSeeRecognitionTaskRequest::SummaryQOSHasBeenSet() const
{
    return m_summaryQOSHasBeenSet;
}


