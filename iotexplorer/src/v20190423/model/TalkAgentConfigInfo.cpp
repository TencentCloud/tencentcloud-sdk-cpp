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

#include <tencentcloud/iotexplorer/v20190423/model/TalkAgentConfigInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

TalkAgentConfigInfo::TalkAgentConfigInfo() :
    m_sessionTimeoutHasBeenSet(false),
    m_interruptionEnabledHasBeenSet(false),
    m_maxContextTokensHasBeenSet(false),
    m_idleDetectionHasBeenSet(false),
    m_emotionEnabledHasBeenSet(false),
    m_semanticVADEnabledHasBeenSet(false),
    m_semanticVADSensitivityHasBeenSet(false),
    m_silenceTimeHasBeenSet(false),
    m_noiseFilterEnabledHasBeenSet(false),
    m_longTermMemoryEnabledHasBeenSet(false),
    m_systemPromptHasBeenSet(false),
    m_greetingMessageHasBeenSet(false),
    m_defaultVoiceTypeHasBeenSet(false),
    m_fastVoiceTypeHasBeenSet(false)
{
}

CoreInternalOutcome TalkAgentConfigInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SessionTimeout") && !value["SessionTimeout"].IsNull())
    {
        if (!value["SessionTimeout"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TalkAgentConfigInfo.SessionTimeout` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sessionTimeout = value["SessionTimeout"].GetInt64();
        m_sessionTimeoutHasBeenSet = true;
    }

    if (value.HasMember("InterruptionEnabled") && !value["InterruptionEnabled"].IsNull())
    {
        if (!value["InterruptionEnabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TalkAgentConfigInfo.InterruptionEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_interruptionEnabled = value["InterruptionEnabled"].GetBool();
        m_interruptionEnabledHasBeenSet = true;
    }

    if (value.HasMember("MaxContextTokens") && !value["MaxContextTokens"].IsNull())
    {
        if (!value["MaxContextTokens"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TalkAgentConfigInfo.MaxContextTokens` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxContextTokens = value["MaxContextTokens"].GetInt64();
        m_maxContextTokensHasBeenSet = true;
    }

    if (value.HasMember("IdleDetection") && !value["IdleDetection"].IsNull())
    {
        if (!value["IdleDetection"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TalkAgentConfigInfo.IdleDetection` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_idleDetection.Deserialize(value["IdleDetection"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_idleDetectionHasBeenSet = true;
    }

    if (value.HasMember("EmotionEnabled") && !value["EmotionEnabled"].IsNull())
    {
        if (!value["EmotionEnabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TalkAgentConfigInfo.EmotionEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_emotionEnabled = value["EmotionEnabled"].GetBool();
        m_emotionEnabledHasBeenSet = true;
    }

    if (value.HasMember("SemanticVADEnabled") && !value["SemanticVADEnabled"].IsNull())
    {
        if (!value["SemanticVADEnabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TalkAgentConfigInfo.SemanticVADEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_semanticVADEnabled = value["SemanticVADEnabled"].GetBool();
        m_semanticVADEnabledHasBeenSet = true;
    }

    if (value.HasMember("SemanticVADSensitivity") && !value["SemanticVADSensitivity"].IsNull())
    {
        if (!value["SemanticVADSensitivity"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TalkAgentConfigInfo.SemanticVADSensitivity` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_semanticVADSensitivity = value["SemanticVADSensitivity"].GetInt64();
        m_semanticVADSensitivityHasBeenSet = true;
    }

    if (value.HasMember("SilenceTime") && !value["SilenceTime"].IsNull())
    {
        if (!value["SilenceTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TalkAgentConfigInfo.SilenceTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_silenceTime = value["SilenceTime"].GetInt64();
        m_silenceTimeHasBeenSet = true;
    }

    if (value.HasMember("NoiseFilterEnabled") && !value["NoiseFilterEnabled"].IsNull())
    {
        if (!value["NoiseFilterEnabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TalkAgentConfigInfo.NoiseFilterEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_noiseFilterEnabled = value["NoiseFilterEnabled"].GetBool();
        m_noiseFilterEnabledHasBeenSet = true;
    }

    if (value.HasMember("LongTermMemoryEnabled") && !value["LongTermMemoryEnabled"].IsNull())
    {
        if (!value["LongTermMemoryEnabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TalkAgentConfigInfo.LongTermMemoryEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_longTermMemoryEnabled = value["LongTermMemoryEnabled"].GetBool();
        m_longTermMemoryEnabledHasBeenSet = true;
    }

    if (value.HasMember("SystemPrompt") && !value["SystemPrompt"].IsNull())
    {
        if (!value["SystemPrompt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TalkAgentConfigInfo.SystemPrompt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_systemPrompt = string(value["SystemPrompt"].GetString());
        m_systemPromptHasBeenSet = true;
    }

    if (value.HasMember("GreetingMessage") && !value["GreetingMessage"].IsNull())
    {
        if (!value["GreetingMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TalkAgentConfigInfo.GreetingMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_greetingMessage = string(value["GreetingMessage"].GetString());
        m_greetingMessageHasBeenSet = true;
    }

    if (value.HasMember("DefaultVoiceType") && !value["DefaultVoiceType"].IsNull())
    {
        if (!value["DefaultVoiceType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TalkAgentConfigInfo.DefaultVoiceType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_defaultVoiceType = value["DefaultVoiceType"].GetInt64();
        m_defaultVoiceTypeHasBeenSet = true;
    }

    if (value.HasMember("FastVoiceType") && !value["FastVoiceType"].IsNull())
    {
        if (!value["FastVoiceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TalkAgentConfigInfo.FastVoiceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fastVoiceType = string(value["FastVoiceType"].GetString());
        m_fastVoiceTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TalkAgentConfigInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sessionTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionTimeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sessionTimeout, allocator);
    }

    if (m_interruptionEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InterruptionEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_interruptionEnabled, allocator);
    }

    if (m_maxContextTokensHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxContextTokens";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxContextTokens, allocator);
    }

    if (m_idleDetectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdleDetection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_idleDetection.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_emotionEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EmotionEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_emotionEnabled, allocator);
    }

    if (m_semanticVADEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SemanticVADEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_semanticVADEnabled, allocator);
    }

    if (m_semanticVADSensitivityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SemanticVADSensitivity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_semanticVADSensitivity, allocator);
    }

    if (m_silenceTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SilenceTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_silenceTime, allocator);
    }

    if (m_noiseFilterEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoiseFilterEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_noiseFilterEnabled, allocator);
    }

    if (m_longTermMemoryEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LongTermMemoryEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_longTermMemoryEnabled, allocator);
    }

    if (m_systemPromptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SystemPrompt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_systemPrompt.c_str(), allocator).Move(), allocator);
    }

    if (m_greetingMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GreetingMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_greetingMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_defaultVoiceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultVoiceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_defaultVoiceType, allocator);
    }

    if (m_fastVoiceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FastVoiceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fastVoiceType.c_str(), allocator).Move(), allocator);
    }

}


int64_t TalkAgentConfigInfo::GetSessionTimeout() const
{
    return m_sessionTimeout;
}

void TalkAgentConfigInfo::SetSessionTimeout(const int64_t& _sessionTimeout)
{
    m_sessionTimeout = _sessionTimeout;
    m_sessionTimeoutHasBeenSet = true;
}

bool TalkAgentConfigInfo::SessionTimeoutHasBeenSet() const
{
    return m_sessionTimeoutHasBeenSet;
}

bool TalkAgentConfigInfo::GetInterruptionEnabled() const
{
    return m_interruptionEnabled;
}

void TalkAgentConfigInfo::SetInterruptionEnabled(const bool& _interruptionEnabled)
{
    m_interruptionEnabled = _interruptionEnabled;
    m_interruptionEnabledHasBeenSet = true;
}

bool TalkAgentConfigInfo::InterruptionEnabledHasBeenSet() const
{
    return m_interruptionEnabledHasBeenSet;
}

int64_t TalkAgentConfigInfo::GetMaxContextTokens() const
{
    return m_maxContextTokens;
}

void TalkAgentConfigInfo::SetMaxContextTokens(const int64_t& _maxContextTokens)
{
    m_maxContextTokens = _maxContextTokens;
    m_maxContextTokensHasBeenSet = true;
}

bool TalkAgentConfigInfo::MaxContextTokensHasBeenSet() const
{
    return m_maxContextTokensHasBeenSet;
}

TalkIdleDetectionConfigInfo TalkAgentConfigInfo::GetIdleDetection() const
{
    return m_idleDetection;
}

void TalkAgentConfigInfo::SetIdleDetection(const TalkIdleDetectionConfigInfo& _idleDetection)
{
    m_idleDetection = _idleDetection;
    m_idleDetectionHasBeenSet = true;
}

bool TalkAgentConfigInfo::IdleDetectionHasBeenSet() const
{
    return m_idleDetectionHasBeenSet;
}

bool TalkAgentConfigInfo::GetEmotionEnabled() const
{
    return m_emotionEnabled;
}

void TalkAgentConfigInfo::SetEmotionEnabled(const bool& _emotionEnabled)
{
    m_emotionEnabled = _emotionEnabled;
    m_emotionEnabledHasBeenSet = true;
}

bool TalkAgentConfigInfo::EmotionEnabledHasBeenSet() const
{
    return m_emotionEnabledHasBeenSet;
}

bool TalkAgentConfigInfo::GetSemanticVADEnabled() const
{
    return m_semanticVADEnabled;
}

void TalkAgentConfigInfo::SetSemanticVADEnabled(const bool& _semanticVADEnabled)
{
    m_semanticVADEnabled = _semanticVADEnabled;
    m_semanticVADEnabledHasBeenSet = true;
}

bool TalkAgentConfigInfo::SemanticVADEnabledHasBeenSet() const
{
    return m_semanticVADEnabledHasBeenSet;
}

int64_t TalkAgentConfigInfo::GetSemanticVADSensitivity() const
{
    return m_semanticVADSensitivity;
}

void TalkAgentConfigInfo::SetSemanticVADSensitivity(const int64_t& _semanticVADSensitivity)
{
    m_semanticVADSensitivity = _semanticVADSensitivity;
    m_semanticVADSensitivityHasBeenSet = true;
}

bool TalkAgentConfigInfo::SemanticVADSensitivityHasBeenSet() const
{
    return m_semanticVADSensitivityHasBeenSet;
}

int64_t TalkAgentConfigInfo::GetSilenceTime() const
{
    return m_silenceTime;
}

void TalkAgentConfigInfo::SetSilenceTime(const int64_t& _silenceTime)
{
    m_silenceTime = _silenceTime;
    m_silenceTimeHasBeenSet = true;
}

bool TalkAgentConfigInfo::SilenceTimeHasBeenSet() const
{
    return m_silenceTimeHasBeenSet;
}

bool TalkAgentConfigInfo::GetNoiseFilterEnabled() const
{
    return m_noiseFilterEnabled;
}

void TalkAgentConfigInfo::SetNoiseFilterEnabled(const bool& _noiseFilterEnabled)
{
    m_noiseFilterEnabled = _noiseFilterEnabled;
    m_noiseFilterEnabledHasBeenSet = true;
}

bool TalkAgentConfigInfo::NoiseFilterEnabledHasBeenSet() const
{
    return m_noiseFilterEnabledHasBeenSet;
}

bool TalkAgentConfigInfo::GetLongTermMemoryEnabled() const
{
    return m_longTermMemoryEnabled;
}

void TalkAgentConfigInfo::SetLongTermMemoryEnabled(const bool& _longTermMemoryEnabled)
{
    m_longTermMemoryEnabled = _longTermMemoryEnabled;
    m_longTermMemoryEnabledHasBeenSet = true;
}

bool TalkAgentConfigInfo::LongTermMemoryEnabledHasBeenSet() const
{
    return m_longTermMemoryEnabledHasBeenSet;
}

string TalkAgentConfigInfo::GetSystemPrompt() const
{
    return m_systemPrompt;
}

void TalkAgentConfigInfo::SetSystemPrompt(const string& _systemPrompt)
{
    m_systemPrompt = _systemPrompt;
    m_systemPromptHasBeenSet = true;
}

bool TalkAgentConfigInfo::SystemPromptHasBeenSet() const
{
    return m_systemPromptHasBeenSet;
}

string TalkAgentConfigInfo::GetGreetingMessage() const
{
    return m_greetingMessage;
}

void TalkAgentConfigInfo::SetGreetingMessage(const string& _greetingMessage)
{
    m_greetingMessage = _greetingMessage;
    m_greetingMessageHasBeenSet = true;
}

bool TalkAgentConfigInfo::GreetingMessageHasBeenSet() const
{
    return m_greetingMessageHasBeenSet;
}

int64_t TalkAgentConfigInfo::GetDefaultVoiceType() const
{
    return m_defaultVoiceType;
}

void TalkAgentConfigInfo::SetDefaultVoiceType(const int64_t& _defaultVoiceType)
{
    m_defaultVoiceType = _defaultVoiceType;
    m_defaultVoiceTypeHasBeenSet = true;
}

bool TalkAgentConfigInfo::DefaultVoiceTypeHasBeenSet() const
{
    return m_defaultVoiceTypeHasBeenSet;
}

string TalkAgentConfigInfo::GetFastVoiceType() const
{
    return m_fastVoiceType;
}

void TalkAgentConfigInfo::SetFastVoiceType(const string& _fastVoiceType)
{
    m_fastVoiceType = _fastVoiceType;
    m_fastVoiceTypeHasBeenSet = true;
}

bool TalkAgentConfigInfo::FastVoiceTypeHasBeenSet() const
{
    return m_fastVoiceTypeHasBeenSet;
}

