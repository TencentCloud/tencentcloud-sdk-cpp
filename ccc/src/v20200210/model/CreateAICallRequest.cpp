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

#include <tencentcloud/ccc/v20200210/model/CreateAICallRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

CreateAICallRequest::CreateAICallRequest() :
    m_sdkAppIdHasBeenSet(false),
    m_calleeHasBeenSet(false),
    m_lLMTypeHasBeenSet(false),
    m_aPIKeyHasBeenSet(false),
    m_aPIUrlHasBeenSet(false),
    m_systemPromptHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_voiceTypeHasBeenSet(false),
    m_callersHasBeenSet(false),
    m_welcomeMessageHasBeenSet(false),
    m_welcomeTypeHasBeenSet(false),
    m_welcomeMessagePriorityHasBeenSet(false),
    m_maxDurationHasBeenSet(false),
    m_languagesHasBeenSet(false),
    m_interruptModeHasBeenSet(false),
    m_interruptSpeechDurationHasBeenSet(false),
    m_endFunctionEnableHasBeenSet(false),
    m_endFunctionDescHasBeenSet(false),
    m_transferFunctionEnableHasBeenSet(false),
    m_transferItemsHasBeenSet(false),
    m_notifyDurationHasBeenSet(false),
    m_notifyMessageHasBeenSet(false),
    m_notifyMaxCountHasBeenSet(false),
    m_customTTSConfigHasBeenSet(false),
    m_promptVariablesHasBeenSet(false),
    m_vadSilenceTimeHasBeenSet(false),
    m_extractConfigHasBeenSet(false),
    m_temperatureHasBeenSet(false),
    m_variablesHasBeenSet(false)
{
}

string CreateAICallRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sdkAppId, allocator);
    }

    if (m_calleeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Callee";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_callee.c_str(), allocator).Move(), allocator);
    }

    if (m_lLMTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LLMType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_lLMType.c_str(), allocator).Move(), allocator);
    }

    if (m_aPIKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "APIKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_aPIKey.c_str(), allocator).Move(), allocator);
    }

    if (m_aPIUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "APIUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_aPIUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_systemPromptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SystemPrompt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_systemPrompt.c_str(), allocator).Move(), allocator);
    }

    if (m_modelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Model";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_model.c_str(), allocator).Move(), allocator);
    }

    if (m_voiceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_voiceType.c_str(), allocator).Move(), allocator);
    }

    if (m_callersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Callers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_callers.begin(); itr != m_callers.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_welcomeMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WelcomeMessage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_welcomeMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_welcomeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WelcomeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_welcomeType, allocator);
    }

    if (m_welcomeMessagePriorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WelcomeMessagePriority";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_welcomeMessagePriority, allocator);
    }

    if (m_maxDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxDuration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxDuration, allocator);
    }

    if (m_languagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Languages";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_languages.begin(); itr != m_languages.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_interruptModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InterruptMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_interruptMode, allocator);
    }

    if (m_interruptSpeechDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InterruptSpeechDuration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_interruptSpeechDuration, allocator);
    }

    if (m_endFunctionEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndFunctionEnable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endFunctionEnable, allocator);
    }

    if (m_endFunctionDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndFunctionDesc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endFunctionDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_transferFunctionEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransferFunctionEnable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_transferFunctionEnable, allocator);
    }

    if (m_transferItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransferItems";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_transferItems.begin(); itr != m_transferItems.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_notifyDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotifyDuration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_notifyDuration, allocator);
    }

    if (m_notifyMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotifyMessage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_notifyMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_notifyMaxCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotifyMaxCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_notifyMaxCount, allocator);
    }

    if (m_customTTSConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomTTSConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_customTTSConfig.c_str(), allocator).Move(), allocator);
    }

    if (m_promptVariablesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PromptVariables";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_promptVariables.begin(); itr != m_promptVariables.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_vadSilenceTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VadSilenceTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_vadSilenceTime, allocator);
    }

    if (m_extractConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtractConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_extractConfig.begin(); itr != m_extractConfig.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_temperatureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Temperature";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_temperature, allocator);
    }

    if (m_variablesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Variables";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_variables.begin(); itr != m_variables.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t CreateAICallRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void CreateAICallRequest::SetSdkAppId(const int64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool CreateAICallRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

string CreateAICallRequest::GetCallee() const
{
    return m_callee;
}

void CreateAICallRequest::SetCallee(const string& _callee)
{
    m_callee = _callee;
    m_calleeHasBeenSet = true;
}

bool CreateAICallRequest::CalleeHasBeenSet() const
{
    return m_calleeHasBeenSet;
}

string CreateAICallRequest::GetLLMType() const
{
    return m_lLMType;
}

void CreateAICallRequest::SetLLMType(const string& _lLMType)
{
    m_lLMType = _lLMType;
    m_lLMTypeHasBeenSet = true;
}

bool CreateAICallRequest::LLMTypeHasBeenSet() const
{
    return m_lLMTypeHasBeenSet;
}

string CreateAICallRequest::GetAPIKey() const
{
    return m_aPIKey;
}

void CreateAICallRequest::SetAPIKey(const string& _aPIKey)
{
    m_aPIKey = _aPIKey;
    m_aPIKeyHasBeenSet = true;
}

bool CreateAICallRequest::APIKeyHasBeenSet() const
{
    return m_aPIKeyHasBeenSet;
}

string CreateAICallRequest::GetAPIUrl() const
{
    return m_aPIUrl;
}

void CreateAICallRequest::SetAPIUrl(const string& _aPIUrl)
{
    m_aPIUrl = _aPIUrl;
    m_aPIUrlHasBeenSet = true;
}

bool CreateAICallRequest::APIUrlHasBeenSet() const
{
    return m_aPIUrlHasBeenSet;
}

string CreateAICallRequest::GetSystemPrompt() const
{
    return m_systemPrompt;
}

void CreateAICallRequest::SetSystemPrompt(const string& _systemPrompt)
{
    m_systemPrompt = _systemPrompt;
    m_systemPromptHasBeenSet = true;
}

bool CreateAICallRequest::SystemPromptHasBeenSet() const
{
    return m_systemPromptHasBeenSet;
}

string CreateAICallRequest::GetModel() const
{
    return m_model;
}

void CreateAICallRequest::SetModel(const string& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool CreateAICallRequest::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

string CreateAICallRequest::GetVoiceType() const
{
    return m_voiceType;
}

void CreateAICallRequest::SetVoiceType(const string& _voiceType)
{
    m_voiceType = _voiceType;
    m_voiceTypeHasBeenSet = true;
}

bool CreateAICallRequest::VoiceTypeHasBeenSet() const
{
    return m_voiceTypeHasBeenSet;
}

vector<string> CreateAICallRequest::GetCallers() const
{
    return m_callers;
}

void CreateAICallRequest::SetCallers(const vector<string>& _callers)
{
    m_callers = _callers;
    m_callersHasBeenSet = true;
}

bool CreateAICallRequest::CallersHasBeenSet() const
{
    return m_callersHasBeenSet;
}

string CreateAICallRequest::GetWelcomeMessage() const
{
    return m_welcomeMessage;
}

void CreateAICallRequest::SetWelcomeMessage(const string& _welcomeMessage)
{
    m_welcomeMessage = _welcomeMessage;
    m_welcomeMessageHasBeenSet = true;
}

bool CreateAICallRequest::WelcomeMessageHasBeenSet() const
{
    return m_welcomeMessageHasBeenSet;
}

int64_t CreateAICallRequest::GetWelcomeType() const
{
    return m_welcomeType;
}

void CreateAICallRequest::SetWelcomeType(const int64_t& _welcomeType)
{
    m_welcomeType = _welcomeType;
    m_welcomeTypeHasBeenSet = true;
}

bool CreateAICallRequest::WelcomeTypeHasBeenSet() const
{
    return m_welcomeTypeHasBeenSet;
}

int64_t CreateAICallRequest::GetWelcomeMessagePriority() const
{
    return m_welcomeMessagePriority;
}

void CreateAICallRequest::SetWelcomeMessagePriority(const int64_t& _welcomeMessagePriority)
{
    m_welcomeMessagePriority = _welcomeMessagePriority;
    m_welcomeMessagePriorityHasBeenSet = true;
}

bool CreateAICallRequest::WelcomeMessagePriorityHasBeenSet() const
{
    return m_welcomeMessagePriorityHasBeenSet;
}

int64_t CreateAICallRequest::GetMaxDuration() const
{
    return m_maxDuration;
}

void CreateAICallRequest::SetMaxDuration(const int64_t& _maxDuration)
{
    m_maxDuration = _maxDuration;
    m_maxDurationHasBeenSet = true;
}

bool CreateAICallRequest::MaxDurationHasBeenSet() const
{
    return m_maxDurationHasBeenSet;
}

vector<string> CreateAICallRequest::GetLanguages() const
{
    return m_languages;
}

void CreateAICallRequest::SetLanguages(const vector<string>& _languages)
{
    m_languages = _languages;
    m_languagesHasBeenSet = true;
}

bool CreateAICallRequest::LanguagesHasBeenSet() const
{
    return m_languagesHasBeenSet;
}

int64_t CreateAICallRequest::GetInterruptMode() const
{
    return m_interruptMode;
}

void CreateAICallRequest::SetInterruptMode(const int64_t& _interruptMode)
{
    m_interruptMode = _interruptMode;
    m_interruptModeHasBeenSet = true;
}

bool CreateAICallRequest::InterruptModeHasBeenSet() const
{
    return m_interruptModeHasBeenSet;
}

int64_t CreateAICallRequest::GetInterruptSpeechDuration() const
{
    return m_interruptSpeechDuration;
}

void CreateAICallRequest::SetInterruptSpeechDuration(const int64_t& _interruptSpeechDuration)
{
    m_interruptSpeechDuration = _interruptSpeechDuration;
    m_interruptSpeechDurationHasBeenSet = true;
}

bool CreateAICallRequest::InterruptSpeechDurationHasBeenSet() const
{
    return m_interruptSpeechDurationHasBeenSet;
}

bool CreateAICallRequest::GetEndFunctionEnable() const
{
    return m_endFunctionEnable;
}

void CreateAICallRequest::SetEndFunctionEnable(const bool& _endFunctionEnable)
{
    m_endFunctionEnable = _endFunctionEnable;
    m_endFunctionEnableHasBeenSet = true;
}

bool CreateAICallRequest::EndFunctionEnableHasBeenSet() const
{
    return m_endFunctionEnableHasBeenSet;
}

string CreateAICallRequest::GetEndFunctionDesc() const
{
    return m_endFunctionDesc;
}

void CreateAICallRequest::SetEndFunctionDesc(const string& _endFunctionDesc)
{
    m_endFunctionDesc = _endFunctionDesc;
    m_endFunctionDescHasBeenSet = true;
}

bool CreateAICallRequest::EndFunctionDescHasBeenSet() const
{
    return m_endFunctionDescHasBeenSet;
}

bool CreateAICallRequest::GetTransferFunctionEnable() const
{
    return m_transferFunctionEnable;
}

void CreateAICallRequest::SetTransferFunctionEnable(const bool& _transferFunctionEnable)
{
    m_transferFunctionEnable = _transferFunctionEnable;
    m_transferFunctionEnableHasBeenSet = true;
}

bool CreateAICallRequest::TransferFunctionEnableHasBeenSet() const
{
    return m_transferFunctionEnableHasBeenSet;
}

vector<AITransferItem> CreateAICallRequest::GetTransferItems() const
{
    return m_transferItems;
}

void CreateAICallRequest::SetTransferItems(const vector<AITransferItem>& _transferItems)
{
    m_transferItems = _transferItems;
    m_transferItemsHasBeenSet = true;
}

bool CreateAICallRequest::TransferItemsHasBeenSet() const
{
    return m_transferItemsHasBeenSet;
}

int64_t CreateAICallRequest::GetNotifyDuration() const
{
    return m_notifyDuration;
}

void CreateAICallRequest::SetNotifyDuration(const int64_t& _notifyDuration)
{
    m_notifyDuration = _notifyDuration;
    m_notifyDurationHasBeenSet = true;
}

bool CreateAICallRequest::NotifyDurationHasBeenSet() const
{
    return m_notifyDurationHasBeenSet;
}

string CreateAICallRequest::GetNotifyMessage() const
{
    return m_notifyMessage;
}

void CreateAICallRequest::SetNotifyMessage(const string& _notifyMessage)
{
    m_notifyMessage = _notifyMessage;
    m_notifyMessageHasBeenSet = true;
}

bool CreateAICallRequest::NotifyMessageHasBeenSet() const
{
    return m_notifyMessageHasBeenSet;
}

uint64_t CreateAICallRequest::GetNotifyMaxCount() const
{
    return m_notifyMaxCount;
}

void CreateAICallRequest::SetNotifyMaxCount(const uint64_t& _notifyMaxCount)
{
    m_notifyMaxCount = _notifyMaxCount;
    m_notifyMaxCountHasBeenSet = true;
}

bool CreateAICallRequest::NotifyMaxCountHasBeenSet() const
{
    return m_notifyMaxCountHasBeenSet;
}

string CreateAICallRequest::GetCustomTTSConfig() const
{
    return m_customTTSConfig;
}

void CreateAICallRequest::SetCustomTTSConfig(const string& _customTTSConfig)
{
    m_customTTSConfig = _customTTSConfig;
    m_customTTSConfigHasBeenSet = true;
}

bool CreateAICallRequest::CustomTTSConfigHasBeenSet() const
{
    return m_customTTSConfigHasBeenSet;
}

vector<Variable> CreateAICallRequest::GetPromptVariables() const
{
    return m_promptVariables;
}

void CreateAICallRequest::SetPromptVariables(const vector<Variable>& _promptVariables)
{
    m_promptVariables = _promptVariables;
    m_promptVariablesHasBeenSet = true;
}

bool CreateAICallRequest::PromptVariablesHasBeenSet() const
{
    return m_promptVariablesHasBeenSet;
}

int64_t CreateAICallRequest::GetVadSilenceTime() const
{
    return m_vadSilenceTime;
}

void CreateAICallRequest::SetVadSilenceTime(const int64_t& _vadSilenceTime)
{
    m_vadSilenceTime = _vadSilenceTime;
    m_vadSilenceTimeHasBeenSet = true;
}

bool CreateAICallRequest::VadSilenceTimeHasBeenSet() const
{
    return m_vadSilenceTimeHasBeenSet;
}

vector<AICallExtractConfigElement> CreateAICallRequest::GetExtractConfig() const
{
    return m_extractConfig;
}

void CreateAICallRequest::SetExtractConfig(const vector<AICallExtractConfigElement>& _extractConfig)
{
    m_extractConfig = _extractConfig;
    m_extractConfigHasBeenSet = true;
}

bool CreateAICallRequest::ExtractConfigHasBeenSet() const
{
    return m_extractConfigHasBeenSet;
}

double CreateAICallRequest::GetTemperature() const
{
    return m_temperature;
}

void CreateAICallRequest::SetTemperature(const double& _temperature)
{
    m_temperature = _temperature;
    m_temperatureHasBeenSet = true;
}

bool CreateAICallRequest::TemperatureHasBeenSet() const
{
    return m_temperatureHasBeenSet;
}

vector<Variable> CreateAICallRequest::GetVariables() const
{
    return m_variables;
}

void CreateAICallRequest::SetVariables(const vector<Variable>& _variables)
{
    m_variables = _variables;
    m_variablesHasBeenSet = true;
}

bool CreateAICallRequest::VariablesHasBeenSet() const
{
    return m_variablesHasBeenSet;
}


