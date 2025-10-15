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

#include <tencentcloud/iotexplorer/v20190423/model/ModifyTWeTalkProductConfigV2Request.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

ModifyTWeTalkProductConfigV2Request::ModifyTWeTalkProductConfigV2Request() :
    m_productIdHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_targetLanguageHasBeenSet(false),
    m_configNameHasBeenSet(false),
    m_basicConfigHasBeenSet(false),
    m_sTTConfigHasBeenSet(false),
    m_lLMConfigHasBeenSet(false),
    m_tTSConfigHasBeenSet(false),
    m_conversationConfigHasBeenSet(false)
{
}

string ModifyTWeTalkProductConfigV2Request::ToJsonString() const
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

    if (m_targetLanguageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetLanguage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetLanguage.c_str(), allocator).Move(), allocator);
    }

    if (m_configNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_configName.c_str(), allocator).Move(), allocator);
    }

    if (m_basicConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BasicConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_basicConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_sTTConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "STTConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sTTConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_lLMConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LLMConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_lLMConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_tTSConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TTSConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tTSConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_conversationConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConversationConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_conversationConfig.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyTWeTalkProductConfigV2Request::GetProductId() const
{
    return m_productId;
}

void ModifyTWeTalkProductConfigV2Request::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool ModifyTWeTalkProductConfigV2Request::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string ModifyTWeTalkProductConfigV2Request::GetDeviceName() const
{
    return m_deviceName;
}

void ModifyTWeTalkProductConfigV2Request::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool ModifyTWeTalkProductConfigV2Request::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string ModifyTWeTalkProductConfigV2Request::GetTargetLanguage() const
{
    return m_targetLanguage;
}

void ModifyTWeTalkProductConfigV2Request::SetTargetLanguage(const string& _targetLanguage)
{
    m_targetLanguage = _targetLanguage;
    m_targetLanguageHasBeenSet = true;
}

bool ModifyTWeTalkProductConfigV2Request::TargetLanguageHasBeenSet() const
{
    return m_targetLanguageHasBeenSet;
}

string ModifyTWeTalkProductConfigV2Request::GetConfigName() const
{
    return m_configName;
}

void ModifyTWeTalkProductConfigV2Request::SetConfigName(const string& _configName)
{
    m_configName = _configName;
    m_configNameHasBeenSet = true;
}

bool ModifyTWeTalkProductConfigV2Request::ConfigNameHasBeenSet() const
{
    return m_configNameHasBeenSet;
}

TalkBasicConfigInfo ModifyTWeTalkProductConfigV2Request::GetBasicConfig() const
{
    return m_basicConfig;
}

void ModifyTWeTalkProductConfigV2Request::SetBasicConfig(const TalkBasicConfigInfo& _basicConfig)
{
    m_basicConfig = _basicConfig;
    m_basicConfigHasBeenSet = true;
}

bool ModifyTWeTalkProductConfigV2Request::BasicConfigHasBeenSet() const
{
    return m_basicConfigHasBeenSet;
}

TalkSTTConfigInfo ModifyTWeTalkProductConfigV2Request::GetSTTConfig() const
{
    return m_sTTConfig;
}

void ModifyTWeTalkProductConfigV2Request::SetSTTConfig(const TalkSTTConfigInfo& _sTTConfig)
{
    m_sTTConfig = _sTTConfig;
    m_sTTConfigHasBeenSet = true;
}

bool ModifyTWeTalkProductConfigV2Request::STTConfigHasBeenSet() const
{
    return m_sTTConfigHasBeenSet;
}

TalkLLMConfigInfo ModifyTWeTalkProductConfigV2Request::GetLLMConfig() const
{
    return m_lLMConfig;
}

void ModifyTWeTalkProductConfigV2Request::SetLLMConfig(const TalkLLMConfigInfo& _lLMConfig)
{
    m_lLMConfig = _lLMConfig;
    m_lLMConfigHasBeenSet = true;
}

bool ModifyTWeTalkProductConfigV2Request::LLMConfigHasBeenSet() const
{
    return m_lLMConfigHasBeenSet;
}

TalkTTSConfigInfo ModifyTWeTalkProductConfigV2Request::GetTTSConfig() const
{
    return m_tTSConfig;
}

void ModifyTWeTalkProductConfigV2Request::SetTTSConfig(const TalkTTSConfigInfo& _tTSConfig)
{
    m_tTSConfig = _tTSConfig;
    m_tTSConfigHasBeenSet = true;
}

bool ModifyTWeTalkProductConfigV2Request::TTSConfigHasBeenSet() const
{
    return m_tTSConfigHasBeenSet;
}

TalkConversationConfigInfo ModifyTWeTalkProductConfigV2Request::GetConversationConfig() const
{
    return m_conversationConfig;
}

void ModifyTWeTalkProductConfigV2Request::SetConversationConfig(const TalkConversationConfigInfo& _conversationConfig)
{
    m_conversationConfig = _conversationConfig;
    m_conversationConfigHasBeenSet = true;
}

bool ModifyTWeTalkProductConfigV2Request::ConversationConfigHasBeenSet() const
{
    return m_conversationConfigHasBeenSet;
}


