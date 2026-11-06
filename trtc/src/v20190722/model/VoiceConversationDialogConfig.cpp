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

#include <tencentcloud/trtc/v20190722/model/VoiceConversationDialogConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

VoiceConversationDialogConfig::VoiceConversationDialogConfig() :
    m_interruptModeHasBeenSet(false),
    m_interruptSpeechDurationHasBeenSet(false),
    m_interruptKeywordsHasBeenSet(false),
    m_silenceFollowUpHasBeenSet(false),
    m_silenceFollowUpTextHasBeenSet(false),
    m_welcomeMessageHasBeenSet(false)
{
}

CoreInternalOutcome VoiceConversationDialogConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InterruptMode") && !value["InterruptMode"].IsNull())
    {
        if (!value["InterruptMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VoiceConversationDialogConfig.InterruptMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_interruptMode = value["InterruptMode"].GetUint64();
        m_interruptModeHasBeenSet = true;
    }

    if (value.HasMember("InterruptSpeechDuration") && !value["InterruptSpeechDuration"].IsNull())
    {
        if (!value["InterruptSpeechDuration"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VoiceConversationDialogConfig.InterruptSpeechDuration` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_interruptSpeechDuration = value["InterruptSpeechDuration"].GetUint64();
        m_interruptSpeechDurationHasBeenSet = true;
    }

    if (value.HasMember("InterruptKeywords") && !value["InterruptKeywords"].IsNull())
    {
        if (!value["InterruptKeywords"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VoiceConversationDialogConfig.InterruptKeywords` is not array type"));

        const rapidjson::Value &tmpValue = value["InterruptKeywords"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_interruptKeywords.push_back((*itr).GetString());
        }
        m_interruptKeywordsHasBeenSet = true;
    }

    if (value.HasMember("SilenceFollowUp") && !value["SilenceFollowUp"].IsNull())
    {
        if (!value["SilenceFollowUp"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VoiceConversationDialogConfig.SilenceFollowUp` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_silenceFollowUp = value["SilenceFollowUp"].GetUint64();
        m_silenceFollowUpHasBeenSet = true;
    }

    if (value.HasMember("SilenceFollowUpText") && !value["SilenceFollowUpText"].IsNull())
    {
        if (!value["SilenceFollowUpText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VoiceConversationDialogConfig.SilenceFollowUpText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_silenceFollowUpText = string(value["SilenceFollowUpText"].GetString());
        m_silenceFollowUpTextHasBeenSet = true;
    }

    if (value.HasMember("WelcomeMessage") && !value["WelcomeMessage"].IsNull())
    {
        if (!value["WelcomeMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VoiceConversationDialogConfig.WelcomeMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_welcomeMessage = string(value["WelcomeMessage"].GetString());
        m_welcomeMessageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VoiceConversationDialogConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_interruptModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InterruptMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_interruptMode, allocator);
    }

    if (m_interruptSpeechDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InterruptSpeechDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_interruptSpeechDuration, allocator);
    }

    if (m_interruptKeywordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InterruptKeywords";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_interruptKeywords.begin(); itr != m_interruptKeywords.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_silenceFollowUpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SilenceFollowUp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_silenceFollowUp, allocator);
    }

    if (m_silenceFollowUpTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SilenceFollowUpText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_silenceFollowUpText.c_str(), allocator).Move(), allocator);
    }

    if (m_welcomeMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WelcomeMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_welcomeMessage.c_str(), allocator).Move(), allocator);
    }

}


uint64_t VoiceConversationDialogConfig::GetInterruptMode() const
{
    return m_interruptMode;
}

void VoiceConversationDialogConfig::SetInterruptMode(const uint64_t& _interruptMode)
{
    m_interruptMode = _interruptMode;
    m_interruptModeHasBeenSet = true;
}

bool VoiceConversationDialogConfig::InterruptModeHasBeenSet() const
{
    return m_interruptModeHasBeenSet;
}

uint64_t VoiceConversationDialogConfig::GetInterruptSpeechDuration() const
{
    return m_interruptSpeechDuration;
}

void VoiceConversationDialogConfig::SetInterruptSpeechDuration(const uint64_t& _interruptSpeechDuration)
{
    m_interruptSpeechDuration = _interruptSpeechDuration;
    m_interruptSpeechDurationHasBeenSet = true;
}

bool VoiceConversationDialogConfig::InterruptSpeechDurationHasBeenSet() const
{
    return m_interruptSpeechDurationHasBeenSet;
}

vector<string> VoiceConversationDialogConfig::GetInterruptKeywords() const
{
    return m_interruptKeywords;
}

void VoiceConversationDialogConfig::SetInterruptKeywords(const vector<string>& _interruptKeywords)
{
    m_interruptKeywords = _interruptKeywords;
    m_interruptKeywordsHasBeenSet = true;
}

bool VoiceConversationDialogConfig::InterruptKeywordsHasBeenSet() const
{
    return m_interruptKeywordsHasBeenSet;
}

uint64_t VoiceConversationDialogConfig::GetSilenceFollowUp() const
{
    return m_silenceFollowUp;
}

void VoiceConversationDialogConfig::SetSilenceFollowUp(const uint64_t& _silenceFollowUp)
{
    m_silenceFollowUp = _silenceFollowUp;
    m_silenceFollowUpHasBeenSet = true;
}

bool VoiceConversationDialogConfig::SilenceFollowUpHasBeenSet() const
{
    return m_silenceFollowUpHasBeenSet;
}

string VoiceConversationDialogConfig::GetSilenceFollowUpText() const
{
    return m_silenceFollowUpText;
}

void VoiceConversationDialogConfig::SetSilenceFollowUpText(const string& _silenceFollowUpText)
{
    m_silenceFollowUpText = _silenceFollowUpText;
    m_silenceFollowUpTextHasBeenSet = true;
}

bool VoiceConversationDialogConfig::SilenceFollowUpTextHasBeenSet() const
{
    return m_silenceFollowUpTextHasBeenSet;
}

string VoiceConversationDialogConfig::GetWelcomeMessage() const
{
    return m_welcomeMessage;
}

void VoiceConversationDialogConfig::SetWelcomeMessage(const string& _welcomeMessage)
{
    m_welcomeMessage = _welcomeMessage;
    m_welcomeMessageHasBeenSet = true;
}

bool VoiceConversationDialogConfig::WelcomeMessageHasBeenSet() const
{
    return m_welcomeMessageHasBeenSet;
}

