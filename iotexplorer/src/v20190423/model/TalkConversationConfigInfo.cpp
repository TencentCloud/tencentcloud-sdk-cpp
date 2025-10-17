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

#include <tencentcloud/iotexplorer/v20190423/model/TalkConversationConfigInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

TalkConversationConfigInfo::TalkConversationConfigInfo() :
    m_sessionTimeoutHasBeenSet(false),
    m_interruptionEnabledHasBeenSet(false),
    m_maxContextTokensHasBeenSet(false),
    m_idleDetectionHasBeenSet(false),
    m_emotionEnabledHasBeenSet(false),
    m_semanticVADEnabledHasBeenSet(false),
    m_noiseFilterEnabledHasBeenSet(false)
{
}

CoreInternalOutcome TalkConversationConfigInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SessionTimeout") && !value["SessionTimeout"].IsNull())
    {
        if (!value["SessionTimeout"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TalkConversationConfigInfo.SessionTimeout` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sessionTimeout = value["SessionTimeout"].GetInt64();
        m_sessionTimeoutHasBeenSet = true;
    }

    if (value.HasMember("InterruptionEnabled") && !value["InterruptionEnabled"].IsNull())
    {
        if (!value["InterruptionEnabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TalkConversationConfigInfo.InterruptionEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_interruptionEnabled = value["InterruptionEnabled"].GetBool();
        m_interruptionEnabledHasBeenSet = true;
    }

    if (value.HasMember("MaxContextTokens") && !value["MaxContextTokens"].IsNull())
    {
        if (!value["MaxContextTokens"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TalkConversationConfigInfo.MaxContextTokens` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxContextTokens = value["MaxContextTokens"].GetInt64();
        m_maxContextTokensHasBeenSet = true;
    }

    if (value.HasMember("IdleDetection") && !value["IdleDetection"].IsNull())
    {
        if (!value["IdleDetection"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TalkConversationConfigInfo.IdleDetection` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `TalkConversationConfigInfo.EmotionEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_emotionEnabled = value["EmotionEnabled"].GetBool();
        m_emotionEnabledHasBeenSet = true;
    }

    if (value.HasMember("SemanticVADEnabled") && !value["SemanticVADEnabled"].IsNull())
    {
        if (!value["SemanticVADEnabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TalkConversationConfigInfo.SemanticVADEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_semanticVADEnabled = value["SemanticVADEnabled"].GetBool();
        m_semanticVADEnabledHasBeenSet = true;
    }

    if (value.HasMember("NoiseFilterEnabled") && !value["NoiseFilterEnabled"].IsNull())
    {
        if (!value["NoiseFilterEnabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TalkConversationConfigInfo.NoiseFilterEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_noiseFilterEnabled = value["NoiseFilterEnabled"].GetBool();
        m_noiseFilterEnabledHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TalkConversationConfigInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_noiseFilterEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoiseFilterEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_noiseFilterEnabled, allocator);
    }

}


int64_t TalkConversationConfigInfo::GetSessionTimeout() const
{
    return m_sessionTimeout;
}

void TalkConversationConfigInfo::SetSessionTimeout(const int64_t& _sessionTimeout)
{
    m_sessionTimeout = _sessionTimeout;
    m_sessionTimeoutHasBeenSet = true;
}

bool TalkConversationConfigInfo::SessionTimeoutHasBeenSet() const
{
    return m_sessionTimeoutHasBeenSet;
}

bool TalkConversationConfigInfo::GetInterruptionEnabled() const
{
    return m_interruptionEnabled;
}

void TalkConversationConfigInfo::SetInterruptionEnabled(const bool& _interruptionEnabled)
{
    m_interruptionEnabled = _interruptionEnabled;
    m_interruptionEnabledHasBeenSet = true;
}

bool TalkConversationConfigInfo::InterruptionEnabledHasBeenSet() const
{
    return m_interruptionEnabledHasBeenSet;
}

int64_t TalkConversationConfigInfo::GetMaxContextTokens() const
{
    return m_maxContextTokens;
}

void TalkConversationConfigInfo::SetMaxContextTokens(const int64_t& _maxContextTokens)
{
    m_maxContextTokens = _maxContextTokens;
    m_maxContextTokensHasBeenSet = true;
}

bool TalkConversationConfigInfo::MaxContextTokensHasBeenSet() const
{
    return m_maxContextTokensHasBeenSet;
}

TalkIdleDetectionConfigInfo TalkConversationConfigInfo::GetIdleDetection() const
{
    return m_idleDetection;
}

void TalkConversationConfigInfo::SetIdleDetection(const TalkIdleDetectionConfigInfo& _idleDetection)
{
    m_idleDetection = _idleDetection;
    m_idleDetectionHasBeenSet = true;
}

bool TalkConversationConfigInfo::IdleDetectionHasBeenSet() const
{
    return m_idleDetectionHasBeenSet;
}

bool TalkConversationConfigInfo::GetEmotionEnabled() const
{
    return m_emotionEnabled;
}

void TalkConversationConfigInfo::SetEmotionEnabled(const bool& _emotionEnabled)
{
    m_emotionEnabled = _emotionEnabled;
    m_emotionEnabledHasBeenSet = true;
}

bool TalkConversationConfigInfo::EmotionEnabledHasBeenSet() const
{
    return m_emotionEnabledHasBeenSet;
}

bool TalkConversationConfigInfo::GetSemanticVADEnabled() const
{
    return m_semanticVADEnabled;
}

void TalkConversationConfigInfo::SetSemanticVADEnabled(const bool& _semanticVADEnabled)
{
    m_semanticVADEnabled = _semanticVADEnabled;
    m_semanticVADEnabledHasBeenSet = true;
}

bool TalkConversationConfigInfo::SemanticVADEnabledHasBeenSet() const
{
    return m_semanticVADEnabledHasBeenSet;
}

bool TalkConversationConfigInfo::GetNoiseFilterEnabled() const
{
    return m_noiseFilterEnabled;
}

void TalkConversationConfigInfo::SetNoiseFilterEnabled(const bool& _noiseFilterEnabled)
{
    m_noiseFilterEnabled = _noiseFilterEnabled;
    m_noiseFilterEnabledHasBeenSet = true;
}

bool TalkConversationConfigInfo::NoiseFilterEnabledHasBeenSet() const
{
    return m_noiseFilterEnabledHasBeenSet;
}

