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

#include <tencentcloud/iotexplorer/v20190423/model/CreateVisionRecognitionTaskInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

CreateVisionRecognitionTaskInput::CreateVisionRecognitionTaskInput() :
    m_productIdHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_inputURLHasBeenSet(false),
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

CoreInternalOutcome CreateVisionRecognitionTaskInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProductId") && !value["ProductId"].IsNull())
    {
        if (!value["ProductId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateVisionRecognitionTaskInput.ProductId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productId = string(value["ProductId"].GetString());
        m_productIdHasBeenSet = true;
    }

    if (value.HasMember("DeviceName") && !value["DeviceName"].IsNull())
    {
        if (!value["DeviceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateVisionRecognitionTaskInput.DeviceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceName = string(value["DeviceName"].GetString());
        m_deviceNameHasBeenSet = true;
    }

    if (value.HasMember("InputURL") && !value["InputURL"].IsNull())
    {
        if (!value["InputURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateVisionRecognitionTaskInput.InputURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputURL = string(value["InputURL"].GetString());
        m_inputURLHasBeenSet = true;
    }

    if (value.HasMember("InputBase64") && !value["InputBase64"].IsNull())
    {
        if (!value["InputBase64"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateVisionRecognitionTaskInput.InputBase64` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputBase64 = string(value["InputBase64"].GetString());
        m_inputBase64HasBeenSet = true;
    }

    if (value.HasMember("ChannelId") && !value["ChannelId"].IsNull())
    {
        if (!value["ChannelId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateVisionRecognitionTaskInput.ChannelId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_channelId = value["ChannelId"].GetUint64();
        m_channelIdHasBeenSet = true;
    }

    if (value.HasMember("CustomId") && !value["CustomId"].IsNull())
    {
        if (!value["CustomId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateVisionRecognitionTaskInput.CustomId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customId = string(value["CustomId"].GetString());
        m_customIdHasBeenSet = true;
    }

    if (value.HasMember("EnableSearch") && !value["EnableSearch"].IsNull())
    {
        if (!value["EnableSearch"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CreateVisionRecognitionTaskInput.EnableSearch` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableSearch = value["EnableSearch"].GetBool();
        m_enableSearchHasBeenSet = true;
    }

    if (value.HasMember("StartTimeMs") && !value["StartTimeMs"].IsNull())
    {
        if (!value["StartTimeMs"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateVisionRecognitionTaskInput.StartTimeMs` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_startTimeMs = value["StartTimeMs"].GetUint64();
        m_startTimeMsHasBeenSet = true;
    }

    if (value.HasMember("EndTimeMs") && !value["EndTimeMs"].IsNull())
    {
        if (!value["EndTimeMs"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateVisionRecognitionTaskInput.EndTimeMs` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_endTimeMs = value["EndTimeMs"].GetUint64();
        m_endTimeMsHasBeenSet = true;
    }

    if (value.HasMember("Config") && !value["Config"].IsNull())
    {
        if (!value["Config"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateVisionRecognitionTaskInput.Config` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_config = string(value["Config"].GetString());
        m_configHasBeenSet = true;
    }

    if (value.HasMember("IsCustomDevice") && !value["IsCustomDevice"].IsNull())
    {
        if (!value["IsCustomDevice"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CreateVisionRecognitionTaskInput.IsCustomDevice` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isCustomDevice = value["IsCustomDevice"].GetBool();
        m_isCustomDeviceHasBeenSet = true;
    }

    if (value.HasMember("InputType") && !value["InputType"].IsNull())
    {
        if (!value["InputType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateVisionRecognitionTaskInput.InputType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputType = string(value["InputType"].GetString());
        m_inputTypeHasBeenSet = true;
    }

    if (value.HasMember("SummaryQOS") && !value["SummaryQOS"].IsNull())
    {
        if (!value["SummaryQOS"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateVisionRecognitionTaskInput.SummaryQOS` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_summaryQOS = string(value["SummaryQOS"].GetString());
        m_summaryQOSHasBeenSet = true;
    }

    if (value.HasMember("SummaryConfig") && !value["SummaryConfig"].IsNull())
    {
        if (!value["SummaryConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CreateVisionRecognitionTaskInput.SummaryConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_summaryConfig.Deserialize(value["SummaryConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_summaryConfigHasBeenSet = true;
    }

    if (value.HasMember("ServiceType") && !value["ServiceType"].IsNull())
    {
        if (!value["ServiceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateVisionRecognitionTaskInput.ServiceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceType = string(value["ServiceType"].GetString());
        m_serviceTypeHasBeenSet = true;
    }

    if (value.HasMember("ObjectDetectConfig") && !value["ObjectDetectConfig"].IsNull())
    {
        if (!value["ObjectDetectConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CreateVisionRecognitionTaskInput.ObjectDetectConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_objectDetectConfig.Deserialize(value["ObjectDetectConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_objectDetectConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateVisionRecognitionTaskInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_inputURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inputURL.c_str(), allocator).Move(), allocator);
    }

    if (m_inputBase64HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputBase64";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inputBase64.c_str(), allocator).Move(), allocator);
    }

    if (m_channelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_channelId, allocator);
    }

    if (m_customIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customId.c_str(), allocator).Move(), allocator);
    }

    if (m_enableSearchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableSearch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableSearch, allocator);
    }

    if (m_startTimeMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTimeMs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTimeMs, allocator);
    }

    if (m_endTimeMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTimeMs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endTimeMs, allocator);
    }

    if (m_configHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Config";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_config.c_str(), allocator).Move(), allocator);
    }

    if (m_isCustomDeviceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCustomDevice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isCustomDevice, allocator);
    }

    if (m_inputTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inputType.c_str(), allocator).Move(), allocator);
    }

    if (m_summaryQOSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SummaryQOS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_summaryQOS.c_str(), allocator).Move(), allocator);
    }

    if (m_summaryConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SummaryConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_summaryConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_serviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_objectDetectConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObjectDetectConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_objectDetectConfig.ToJsonObject(value[key.c_str()], allocator);
    }

}


string CreateVisionRecognitionTaskInput::GetProductId() const
{
    return m_productId;
}

void CreateVisionRecognitionTaskInput::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool CreateVisionRecognitionTaskInput::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string CreateVisionRecognitionTaskInput::GetDeviceName() const
{
    return m_deviceName;
}

void CreateVisionRecognitionTaskInput::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool CreateVisionRecognitionTaskInput::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string CreateVisionRecognitionTaskInput::GetInputURL() const
{
    return m_inputURL;
}

void CreateVisionRecognitionTaskInput::SetInputURL(const string& _inputURL)
{
    m_inputURL = _inputURL;
    m_inputURLHasBeenSet = true;
}

bool CreateVisionRecognitionTaskInput::InputURLHasBeenSet() const
{
    return m_inputURLHasBeenSet;
}

string CreateVisionRecognitionTaskInput::GetInputBase64() const
{
    return m_inputBase64;
}

void CreateVisionRecognitionTaskInput::SetInputBase64(const string& _inputBase64)
{
    m_inputBase64 = _inputBase64;
    m_inputBase64HasBeenSet = true;
}

bool CreateVisionRecognitionTaskInput::InputBase64HasBeenSet() const
{
    return m_inputBase64HasBeenSet;
}

uint64_t CreateVisionRecognitionTaskInput::GetChannelId() const
{
    return m_channelId;
}

void CreateVisionRecognitionTaskInput::SetChannelId(const uint64_t& _channelId)
{
    m_channelId = _channelId;
    m_channelIdHasBeenSet = true;
}

bool CreateVisionRecognitionTaskInput::ChannelIdHasBeenSet() const
{
    return m_channelIdHasBeenSet;
}

string CreateVisionRecognitionTaskInput::GetCustomId() const
{
    return m_customId;
}

void CreateVisionRecognitionTaskInput::SetCustomId(const string& _customId)
{
    m_customId = _customId;
    m_customIdHasBeenSet = true;
}

bool CreateVisionRecognitionTaskInput::CustomIdHasBeenSet() const
{
    return m_customIdHasBeenSet;
}

bool CreateVisionRecognitionTaskInput::GetEnableSearch() const
{
    return m_enableSearch;
}

void CreateVisionRecognitionTaskInput::SetEnableSearch(const bool& _enableSearch)
{
    m_enableSearch = _enableSearch;
    m_enableSearchHasBeenSet = true;
}

bool CreateVisionRecognitionTaskInput::EnableSearchHasBeenSet() const
{
    return m_enableSearchHasBeenSet;
}

uint64_t CreateVisionRecognitionTaskInput::GetStartTimeMs() const
{
    return m_startTimeMs;
}

void CreateVisionRecognitionTaskInput::SetStartTimeMs(const uint64_t& _startTimeMs)
{
    m_startTimeMs = _startTimeMs;
    m_startTimeMsHasBeenSet = true;
}

bool CreateVisionRecognitionTaskInput::StartTimeMsHasBeenSet() const
{
    return m_startTimeMsHasBeenSet;
}

uint64_t CreateVisionRecognitionTaskInput::GetEndTimeMs() const
{
    return m_endTimeMs;
}

void CreateVisionRecognitionTaskInput::SetEndTimeMs(const uint64_t& _endTimeMs)
{
    m_endTimeMs = _endTimeMs;
    m_endTimeMsHasBeenSet = true;
}

bool CreateVisionRecognitionTaskInput::EndTimeMsHasBeenSet() const
{
    return m_endTimeMsHasBeenSet;
}

string CreateVisionRecognitionTaskInput::GetConfig() const
{
    return m_config;
}

void CreateVisionRecognitionTaskInput::SetConfig(const string& _config)
{
    m_config = _config;
    m_configHasBeenSet = true;
}

bool CreateVisionRecognitionTaskInput::ConfigHasBeenSet() const
{
    return m_configHasBeenSet;
}

bool CreateVisionRecognitionTaskInput::GetIsCustomDevice() const
{
    return m_isCustomDevice;
}

void CreateVisionRecognitionTaskInput::SetIsCustomDevice(const bool& _isCustomDevice)
{
    m_isCustomDevice = _isCustomDevice;
    m_isCustomDeviceHasBeenSet = true;
}

bool CreateVisionRecognitionTaskInput::IsCustomDeviceHasBeenSet() const
{
    return m_isCustomDeviceHasBeenSet;
}

string CreateVisionRecognitionTaskInput::GetInputType() const
{
    return m_inputType;
}

void CreateVisionRecognitionTaskInput::SetInputType(const string& _inputType)
{
    m_inputType = _inputType;
    m_inputTypeHasBeenSet = true;
}

bool CreateVisionRecognitionTaskInput::InputTypeHasBeenSet() const
{
    return m_inputTypeHasBeenSet;
}

string CreateVisionRecognitionTaskInput::GetSummaryQOS() const
{
    return m_summaryQOS;
}

void CreateVisionRecognitionTaskInput::SetSummaryQOS(const string& _summaryQOS)
{
    m_summaryQOS = _summaryQOS;
    m_summaryQOSHasBeenSet = true;
}

bool CreateVisionRecognitionTaskInput::SummaryQOSHasBeenSet() const
{
    return m_summaryQOSHasBeenSet;
}

VisionSummaryConfig CreateVisionRecognitionTaskInput::GetSummaryConfig() const
{
    return m_summaryConfig;
}

void CreateVisionRecognitionTaskInput::SetSummaryConfig(const VisionSummaryConfig& _summaryConfig)
{
    m_summaryConfig = _summaryConfig;
    m_summaryConfigHasBeenSet = true;
}

bool CreateVisionRecognitionTaskInput::SummaryConfigHasBeenSet() const
{
    return m_summaryConfigHasBeenSet;
}

string CreateVisionRecognitionTaskInput::GetServiceType() const
{
    return m_serviceType;
}

void CreateVisionRecognitionTaskInput::SetServiceType(const string& _serviceType)
{
    m_serviceType = _serviceType;
    m_serviceTypeHasBeenSet = true;
}

bool CreateVisionRecognitionTaskInput::ServiceTypeHasBeenSet() const
{
    return m_serviceTypeHasBeenSet;
}

VisionObjectDetectConfig CreateVisionRecognitionTaskInput::GetObjectDetectConfig() const
{
    return m_objectDetectConfig;
}

void CreateVisionRecognitionTaskInput::SetObjectDetectConfig(const VisionObjectDetectConfig& _objectDetectConfig)
{
    m_objectDetectConfig = _objectDetectConfig;
    m_objectDetectConfigHasBeenSet = true;
}

bool CreateVisionRecognitionTaskInput::ObjectDetectConfigHasBeenSet() const
{
    return m_objectDetectConfigHasBeenSet;
}

