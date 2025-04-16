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

#include <tencentcloud/iotexplorer/v20190423/model/CreateTWeSeeRecognitionTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

CreateTWeSeeRecognitionTaskRequest::CreateTWeSeeRecognitionTaskRequest() :
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

string CreateTWeSeeRecognitionTaskRequest::ToJsonString() const
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


string CreateTWeSeeRecognitionTaskRequest::GetProductId() const
{
    return m_productId;
}

void CreateTWeSeeRecognitionTaskRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool CreateTWeSeeRecognitionTaskRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string CreateTWeSeeRecognitionTaskRequest::GetDeviceName() const
{
    return m_deviceName;
}

void CreateTWeSeeRecognitionTaskRequest::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool CreateTWeSeeRecognitionTaskRequest::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string CreateTWeSeeRecognitionTaskRequest::GetInputURL() const
{
    return m_inputURL;
}

void CreateTWeSeeRecognitionTaskRequest::SetInputURL(const string& _inputURL)
{
    m_inputURL = _inputURL;
    m_inputURLHasBeenSet = true;
}

bool CreateTWeSeeRecognitionTaskRequest::InputURLHasBeenSet() const
{
    return m_inputURLHasBeenSet;
}

string CreateTWeSeeRecognitionTaskRequest::GetCustomId() const
{
    return m_customId;
}

void CreateTWeSeeRecognitionTaskRequest::SetCustomId(const string& _customId)
{
    m_customId = _customId;
    m_customIdHasBeenSet = true;
}

bool CreateTWeSeeRecognitionTaskRequest::CustomIdHasBeenSet() const
{
    return m_customIdHasBeenSet;
}

bool CreateTWeSeeRecognitionTaskRequest::GetEnableSearch() const
{
    return m_enableSearch;
}

void CreateTWeSeeRecognitionTaskRequest::SetEnableSearch(const bool& _enableSearch)
{
    m_enableSearch = _enableSearch;
    m_enableSearchHasBeenSet = true;
}

bool CreateTWeSeeRecognitionTaskRequest::EnableSearchHasBeenSet() const
{
    return m_enableSearchHasBeenSet;
}

uint64_t CreateTWeSeeRecognitionTaskRequest::GetStartTimeMs() const
{
    return m_startTimeMs;
}

void CreateTWeSeeRecognitionTaskRequest::SetStartTimeMs(const uint64_t& _startTimeMs)
{
    m_startTimeMs = _startTimeMs;
    m_startTimeMsHasBeenSet = true;
}

bool CreateTWeSeeRecognitionTaskRequest::StartTimeMsHasBeenSet() const
{
    return m_startTimeMsHasBeenSet;
}

uint64_t CreateTWeSeeRecognitionTaskRequest::GetEndTimeMs() const
{
    return m_endTimeMs;
}

void CreateTWeSeeRecognitionTaskRequest::SetEndTimeMs(const uint64_t& _endTimeMs)
{
    m_endTimeMs = _endTimeMs;
    m_endTimeMsHasBeenSet = true;
}

bool CreateTWeSeeRecognitionTaskRequest::EndTimeMsHasBeenSet() const
{
    return m_endTimeMsHasBeenSet;
}

string CreateTWeSeeRecognitionTaskRequest::GetConfig() const
{
    return m_config;
}

void CreateTWeSeeRecognitionTaskRequest::SetConfig(const string& _config)
{
    m_config = _config;
    m_configHasBeenSet = true;
}

bool CreateTWeSeeRecognitionTaskRequest::ConfigHasBeenSet() const
{
    return m_configHasBeenSet;
}

bool CreateTWeSeeRecognitionTaskRequest::GetIsCustomDevice() const
{
    return m_isCustomDevice;
}

void CreateTWeSeeRecognitionTaskRequest::SetIsCustomDevice(const bool& _isCustomDevice)
{
    m_isCustomDevice = _isCustomDevice;
    m_isCustomDeviceHasBeenSet = true;
}

bool CreateTWeSeeRecognitionTaskRequest::IsCustomDeviceHasBeenSet() const
{
    return m_isCustomDeviceHasBeenSet;
}

string CreateTWeSeeRecognitionTaskRequest::GetInputType() const
{
    return m_inputType;
}

void CreateTWeSeeRecognitionTaskRequest::SetInputType(const string& _inputType)
{
    m_inputType = _inputType;
    m_inputTypeHasBeenSet = true;
}

bool CreateTWeSeeRecognitionTaskRequest::InputTypeHasBeenSet() const
{
    return m_inputTypeHasBeenSet;
}

string CreateTWeSeeRecognitionTaskRequest::GetSummaryQOS() const
{
    return m_summaryQOS;
}

void CreateTWeSeeRecognitionTaskRequest::SetSummaryQOS(const string& _summaryQOS)
{
    m_summaryQOS = _summaryQOS;
    m_summaryQOSHasBeenSet = true;
}

bool CreateTWeSeeRecognitionTaskRequest::SummaryQOSHasBeenSet() const
{
    return m_summaryQOSHasBeenSet;
}


