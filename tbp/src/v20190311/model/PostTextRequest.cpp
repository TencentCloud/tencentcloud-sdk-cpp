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

#include <tencentcloud/tbp/v20190311/model/PostTextRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tbp::V20190311::Model;
using namespace rapidjson;
using namespace std;

PostTextRequest::PostTextRequest() :
    m_botIdHasBeenSet(false),
    m_inputTextHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_botVersionHasBeenSet(false),
    m_sessionAttributesHasBeenSet(false),
    m_needTtsHasBeenSet(false),
    m_volumeHasBeenSet(false),
    m_speedHasBeenSet(false),
    m_voiceTypeHasBeenSet(false),
    m_sampleRateHasBeenSet(false),
    m_botEnvHasBeenSet(false),
    m_ttsVoiceFormatHasBeenSet(false)
{
}

string PostTextRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_botIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BotId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_botId.c_str(), allocator).Move(), allocator);
    }

    if (m_inputTextHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InputText";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_inputText.c_str(), allocator).Move(), allocator);
    }

    if (m_userIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_botVersionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BotVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_botVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionAttributesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SessionAttributes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_sessionAttributes.c_str(), allocator).Move(), allocator);
    }

    if (m_needTtsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NeedTts";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_needTts, allocator);
    }

    if (m_volumeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Volume";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_volume, allocator);
    }

    if (m_speedHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Speed";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_speed, allocator);
    }

    if (m_voiceTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VoiceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_voiceType, allocator);
    }

    if (m_sampleRateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SampleRate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_sampleRate.c_str(), allocator).Move(), allocator);
    }

    if (m_botEnvHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BotEnv";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_botEnv.c_str(), allocator).Move(), allocator);
    }

    if (m_ttsVoiceFormatHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TtsVoiceFormat";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ttsVoiceFormat, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string PostTextRequest::GetBotId() const
{
    return m_botId;
}

void PostTextRequest::SetBotId(const string& _botId)
{
    m_botId = _botId;
    m_botIdHasBeenSet = true;
}

bool PostTextRequest::BotIdHasBeenSet() const
{
    return m_botIdHasBeenSet;
}

string PostTextRequest::GetInputText() const
{
    return m_inputText;
}

void PostTextRequest::SetInputText(const string& _inputText)
{
    m_inputText = _inputText;
    m_inputTextHasBeenSet = true;
}

bool PostTextRequest::InputTextHasBeenSet() const
{
    return m_inputTextHasBeenSet;
}

string PostTextRequest::GetUserId() const
{
    return m_userId;
}

void PostTextRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool PostTextRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string PostTextRequest::GetBotVersion() const
{
    return m_botVersion;
}

void PostTextRequest::SetBotVersion(const string& _botVersion)
{
    m_botVersion = _botVersion;
    m_botVersionHasBeenSet = true;
}

bool PostTextRequest::BotVersionHasBeenSet() const
{
    return m_botVersionHasBeenSet;
}

string PostTextRequest::GetSessionAttributes() const
{
    return m_sessionAttributes;
}

void PostTextRequest::SetSessionAttributes(const string& _sessionAttributes)
{
    m_sessionAttributes = _sessionAttributes;
    m_sessionAttributesHasBeenSet = true;
}

bool PostTextRequest::SessionAttributesHasBeenSet() const
{
    return m_sessionAttributesHasBeenSet;
}

bool PostTextRequest::GetNeedTts() const
{
    return m_needTts;
}

void PostTextRequest::SetNeedTts(const bool& _needTts)
{
    m_needTts = _needTts;
    m_needTtsHasBeenSet = true;
}

bool PostTextRequest::NeedTtsHasBeenSet() const
{
    return m_needTtsHasBeenSet;
}

int64_t PostTextRequest::GetVolume() const
{
    return m_volume;
}

void PostTextRequest::SetVolume(const int64_t& _volume)
{
    m_volume = _volume;
    m_volumeHasBeenSet = true;
}

bool PostTextRequest::VolumeHasBeenSet() const
{
    return m_volumeHasBeenSet;
}

int64_t PostTextRequest::GetSpeed() const
{
    return m_speed;
}

void PostTextRequest::SetSpeed(const int64_t& _speed)
{
    m_speed = _speed;
    m_speedHasBeenSet = true;
}

bool PostTextRequest::SpeedHasBeenSet() const
{
    return m_speedHasBeenSet;
}

int64_t PostTextRequest::GetVoiceType() const
{
    return m_voiceType;
}

void PostTextRequest::SetVoiceType(const int64_t& _voiceType)
{
    m_voiceType = _voiceType;
    m_voiceTypeHasBeenSet = true;
}

bool PostTextRequest::VoiceTypeHasBeenSet() const
{
    return m_voiceTypeHasBeenSet;
}

string PostTextRequest::GetSampleRate() const
{
    return m_sampleRate;
}

void PostTextRequest::SetSampleRate(const string& _sampleRate)
{
    m_sampleRate = _sampleRate;
    m_sampleRateHasBeenSet = true;
}

bool PostTextRequest::SampleRateHasBeenSet() const
{
    return m_sampleRateHasBeenSet;
}

string PostTextRequest::GetBotEnv() const
{
    return m_botEnv;
}

void PostTextRequest::SetBotEnv(const string& _botEnv)
{
    m_botEnv = _botEnv;
    m_botEnvHasBeenSet = true;
}

bool PostTextRequest::BotEnvHasBeenSet() const
{
    return m_botEnvHasBeenSet;
}

uint64_t PostTextRequest::GetTtsVoiceFormat() const
{
    return m_ttsVoiceFormat;
}

void PostTextRequest::SetTtsVoiceFormat(const uint64_t& _ttsVoiceFormat)
{
    m_ttsVoiceFormat = _ttsVoiceFormat;
    m_ttsVoiceFormatHasBeenSet = true;
}

bool PostTextRequest::TtsVoiceFormatHasBeenSet() const
{
    return m_ttsVoiceFormatHasBeenSet;
}


