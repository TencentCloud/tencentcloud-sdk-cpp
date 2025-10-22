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

#include <tencentcloud/iotexplorer/v20190423/model/TalkProductConfigV2Info.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

TalkProductConfigV2Info::TalkProductConfigV2Info() :
    m_uinHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_configNameHasBeenSet(false),
    m_targetLanguageHasBeenSet(false),
    m_basicConfigHasBeenSet(false),
    m_sTTConfigHasBeenSet(false),
    m_lLMConfigHasBeenSet(false),
    m_tTSConfigHasBeenSet(false),
    m_conversationConfigHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome TalkProductConfigV2Info::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TalkProductConfigV2Info.Uin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_uin = value["Uin"].GetInt64();
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TalkProductConfigV2Info.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("ProductId") && !value["ProductId"].IsNull())
    {
        if (!value["ProductId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TalkProductConfigV2Info.ProductId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productId = string(value["ProductId"].GetString());
        m_productIdHasBeenSet = true;
    }

    if (value.HasMember("DeviceName") && !value["DeviceName"].IsNull())
    {
        if (!value["DeviceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TalkProductConfigV2Info.DeviceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceName = string(value["DeviceName"].GetString());
        m_deviceNameHasBeenSet = true;
    }

    if (value.HasMember("ConfigName") && !value["ConfigName"].IsNull())
    {
        if (!value["ConfigName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TalkProductConfigV2Info.ConfigName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configName = string(value["ConfigName"].GetString());
        m_configNameHasBeenSet = true;
    }

    if (value.HasMember("TargetLanguage") && !value["TargetLanguage"].IsNull())
    {
        if (!value["TargetLanguage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TalkProductConfigV2Info.TargetLanguage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetLanguage = string(value["TargetLanguage"].GetString());
        m_targetLanguageHasBeenSet = true;
    }

    if (value.HasMember("BasicConfig") && !value["BasicConfig"].IsNull())
    {
        if (!value["BasicConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TalkProductConfigV2Info.BasicConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_basicConfig.Deserialize(value["BasicConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_basicConfigHasBeenSet = true;
    }

    if (value.HasMember("STTConfig") && !value["STTConfig"].IsNull())
    {
        if (!value["STTConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TalkProductConfigV2Info.STTConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sTTConfig.Deserialize(value["STTConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sTTConfigHasBeenSet = true;
    }

    if (value.HasMember("LLMConfig") && !value["LLMConfig"].IsNull())
    {
        if (!value["LLMConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TalkProductConfigV2Info.LLMConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_lLMConfig.Deserialize(value["LLMConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_lLMConfigHasBeenSet = true;
    }

    if (value.HasMember("TTSConfig") && !value["TTSConfig"].IsNull())
    {
        if (!value["TTSConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TalkProductConfigV2Info.TTSConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tTSConfig.Deserialize(value["TTSConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tTSConfigHasBeenSet = true;
    }

    if (value.HasMember("ConversationConfig") && !value["ConversationConfig"].IsNull())
    {
        if (!value["ConversationConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TalkProductConfigV2Info.ConversationConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_conversationConfig.Deserialize(value["ConversationConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_conversationConfigHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TalkProductConfigV2Info.Version` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_version = value["Version"].GetInt64();
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TalkProductConfigV2Info.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TalkProductConfigV2Info.UpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetInt64();
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TalkProductConfigV2Info::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_uin, allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

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

    if (m_configNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configName.c_str(), allocator).Move(), allocator);
    }

    if (m_targetLanguageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetLanguage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetLanguage.c_str(), allocator).Move(), allocator);
    }

    if (m_basicConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BasicConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_basicConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_sTTConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "STTConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sTTConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_lLMConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LLMConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_lLMConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tTSConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TTSConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tTSConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_conversationConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConversationConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_conversationConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_version, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

}


int64_t TalkProductConfigV2Info::GetUin() const
{
    return m_uin;
}

void TalkProductConfigV2Info::SetUin(const int64_t& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool TalkProductConfigV2Info::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

int64_t TalkProductConfigV2Info::GetAppId() const
{
    return m_appId;
}

void TalkProductConfigV2Info::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool TalkProductConfigV2Info::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string TalkProductConfigV2Info::GetProductId() const
{
    return m_productId;
}

void TalkProductConfigV2Info::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool TalkProductConfigV2Info::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string TalkProductConfigV2Info::GetDeviceName() const
{
    return m_deviceName;
}

void TalkProductConfigV2Info::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool TalkProductConfigV2Info::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string TalkProductConfigV2Info::GetConfigName() const
{
    return m_configName;
}

void TalkProductConfigV2Info::SetConfigName(const string& _configName)
{
    m_configName = _configName;
    m_configNameHasBeenSet = true;
}

bool TalkProductConfigV2Info::ConfigNameHasBeenSet() const
{
    return m_configNameHasBeenSet;
}

string TalkProductConfigV2Info::GetTargetLanguage() const
{
    return m_targetLanguage;
}

void TalkProductConfigV2Info::SetTargetLanguage(const string& _targetLanguage)
{
    m_targetLanguage = _targetLanguage;
    m_targetLanguageHasBeenSet = true;
}

bool TalkProductConfigV2Info::TargetLanguageHasBeenSet() const
{
    return m_targetLanguageHasBeenSet;
}

TalkBasicConfigInfo TalkProductConfigV2Info::GetBasicConfig() const
{
    return m_basicConfig;
}

void TalkProductConfigV2Info::SetBasicConfig(const TalkBasicConfigInfo& _basicConfig)
{
    m_basicConfig = _basicConfig;
    m_basicConfigHasBeenSet = true;
}

bool TalkProductConfigV2Info::BasicConfigHasBeenSet() const
{
    return m_basicConfigHasBeenSet;
}

TalkSTTConfigInfo TalkProductConfigV2Info::GetSTTConfig() const
{
    return m_sTTConfig;
}

void TalkProductConfigV2Info::SetSTTConfig(const TalkSTTConfigInfo& _sTTConfig)
{
    m_sTTConfig = _sTTConfig;
    m_sTTConfigHasBeenSet = true;
}

bool TalkProductConfigV2Info::STTConfigHasBeenSet() const
{
    return m_sTTConfigHasBeenSet;
}

TalkLLMConfigInfo TalkProductConfigV2Info::GetLLMConfig() const
{
    return m_lLMConfig;
}

void TalkProductConfigV2Info::SetLLMConfig(const TalkLLMConfigInfo& _lLMConfig)
{
    m_lLMConfig = _lLMConfig;
    m_lLMConfigHasBeenSet = true;
}

bool TalkProductConfigV2Info::LLMConfigHasBeenSet() const
{
    return m_lLMConfigHasBeenSet;
}

TalkTTSConfigInfo TalkProductConfigV2Info::GetTTSConfig() const
{
    return m_tTSConfig;
}

void TalkProductConfigV2Info::SetTTSConfig(const TalkTTSConfigInfo& _tTSConfig)
{
    m_tTSConfig = _tTSConfig;
    m_tTSConfigHasBeenSet = true;
}

bool TalkProductConfigV2Info::TTSConfigHasBeenSet() const
{
    return m_tTSConfigHasBeenSet;
}

TalkConversationConfigInfo TalkProductConfigV2Info::GetConversationConfig() const
{
    return m_conversationConfig;
}

void TalkProductConfigV2Info::SetConversationConfig(const TalkConversationConfigInfo& _conversationConfig)
{
    m_conversationConfig = _conversationConfig;
    m_conversationConfigHasBeenSet = true;
}

bool TalkProductConfigV2Info::ConversationConfigHasBeenSet() const
{
    return m_conversationConfigHasBeenSet;
}

int64_t TalkProductConfigV2Info::GetVersion() const
{
    return m_version;
}

void TalkProductConfigV2Info::SetVersion(const int64_t& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool TalkProductConfigV2Info::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

int64_t TalkProductConfigV2Info::GetCreateTime() const
{
    return m_createTime;
}

void TalkProductConfigV2Info::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool TalkProductConfigV2Info::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t TalkProductConfigV2Info::GetUpdateTime() const
{
    return m_updateTime;
}

void TalkProductConfigV2Info::SetUpdateTime(const int64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool TalkProductConfigV2Info::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

