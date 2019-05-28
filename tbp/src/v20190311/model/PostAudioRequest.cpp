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

#include <tencentcloud/tbp/v20190311/model/PostAudioRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tbp::V20190311::Model;
using namespace rapidjson;
using namespace std;

PostAudioRequest::PostAudioRequest() :
    m_botIdHasBeenSet(false),
    m_engineModelTypeHasBeenSet(false),
    m_asrVoiceFormatHasBeenSet(false),
    m_voiceIdHasBeenSet(false),
    m_seqHasBeenSet(false),
    m_isEndHasBeenSet(false),
    m_waveDataHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_botVersionHasBeenSet(false),
    m_resultTextFormatHasBeenSet(false),
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

string PostAudioRequest::ToJsonString() const
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

    if (m_engineModelTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EngineModelType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_engineModelType.c_str(), allocator).Move(), allocator);
    }

    if (m_asrVoiceFormatHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AsrVoiceFormat";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_asrVoiceFormat, allocator);
    }

    if (m_voiceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VoiceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_voiceId.c_str(), allocator).Move(), allocator);
    }

    if (m_seqHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Seq";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_seq, allocator);
    }

    if (m_isEndHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IsEnd";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isEnd, allocator);
    }

    if (m_waveDataHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "WaveData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_waveData.c_str(), allocator).Move(), allocator);
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

    if (m_resultTextFormatHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ResultTextFormat";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_resultTextFormat, allocator);
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


string PostAudioRequest::GetBotId() const
{
    return m_botId;
}

void PostAudioRequest::SetBotId(const string& _botId)
{
    m_botId = _botId;
    m_botIdHasBeenSet = true;
}

bool PostAudioRequest::BotIdHasBeenSet() const
{
    return m_botIdHasBeenSet;
}

string PostAudioRequest::GetEngineModelType() const
{
    return m_engineModelType;
}

void PostAudioRequest::SetEngineModelType(const string& _engineModelType)
{
    m_engineModelType = _engineModelType;
    m_engineModelTypeHasBeenSet = true;
}

bool PostAudioRequest::EngineModelTypeHasBeenSet() const
{
    return m_engineModelTypeHasBeenSet;
}

uint64_t PostAudioRequest::GetAsrVoiceFormat() const
{
    return m_asrVoiceFormat;
}

void PostAudioRequest::SetAsrVoiceFormat(const uint64_t& _asrVoiceFormat)
{
    m_asrVoiceFormat = _asrVoiceFormat;
    m_asrVoiceFormatHasBeenSet = true;
}

bool PostAudioRequest::AsrVoiceFormatHasBeenSet() const
{
    return m_asrVoiceFormatHasBeenSet;
}

string PostAudioRequest::GetVoiceId() const
{
    return m_voiceId;
}

void PostAudioRequest::SetVoiceId(const string& _voiceId)
{
    m_voiceId = _voiceId;
    m_voiceIdHasBeenSet = true;
}

bool PostAudioRequest::VoiceIdHasBeenSet() const
{
    return m_voiceIdHasBeenSet;
}

uint64_t PostAudioRequest::GetSeq() const
{
    return m_seq;
}

void PostAudioRequest::SetSeq(const uint64_t& _seq)
{
    m_seq = _seq;
    m_seqHasBeenSet = true;
}

bool PostAudioRequest::SeqHasBeenSet() const
{
    return m_seqHasBeenSet;
}

bool PostAudioRequest::GetIsEnd() const
{
    return m_isEnd;
}

void PostAudioRequest::SetIsEnd(const bool& _isEnd)
{
    m_isEnd = _isEnd;
    m_isEndHasBeenSet = true;
}

bool PostAudioRequest::IsEndHasBeenSet() const
{
    return m_isEndHasBeenSet;
}

string PostAudioRequest::GetWaveData() const
{
    return m_waveData;
}

void PostAudioRequest::SetWaveData(const string& _waveData)
{
    m_waveData = _waveData;
    m_waveDataHasBeenSet = true;
}

bool PostAudioRequest::WaveDataHasBeenSet() const
{
    return m_waveDataHasBeenSet;
}

string PostAudioRequest::GetUserId() const
{
    return m_userId;
}

void PostAudioRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool PostAudioRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string PostAudioRequest::GetBotVersion() const
{
    return m_botVersion;
}

void PostAudioRequest::SetBotVersion(const string& _botVersion)
{
    m_botVersion = _botVersion;
    m_botVersionHasBeenSet = true;
}

bool PostAudioRequest::BotVersionHasBeenSet() const
{
    return m_botVersionHasBeenSet;
}

uint64_t PostAudioRequest::GetResultTextFormat() const
{
    return m_resultTextFormat;
}

void PostAudioRequest::SetResultTextFormat(const uint64_t& _resultTextFormat)
{
    m_resultTextFormat = _resultTextFormat;
    m_resultTextFormatHasBeenSet = true;
}

bool PostAudioRequest::ResultTextFormatHasBeenSet() const
{
    return m_resultTextFormatHasBeenSet;
}

string PostAudioRequest::GetSessionAttributes() const
{
    return m_sessionAttributes;
}

void PostAudioRequest::SetSessionAttributes(const string& _sessionAttributes)
{
    m_sessionAttributes = _sessionAttributes;
    m_sessionAttributesHasBeenSet = true;
}

bool PostAudioRequest::SessionAttributesHasBeenSet() const
{
    return m_sessionAttributesHasBeenSet;
}

bool PostAudioRequest::GetNeedTts() const
{
    return m_needTts;
}

void PostAudioRequest::SetNeedTts(const bool& _needTts)
{
    m_needTts = _needTts;
    m_needTtsHasBeenSet = true;
}

bool PostAudioRequest::NeedTtsHasBeenSet() const
{
    return m_needTtsHasBeenSet;
}

int64_t PostAudioRequest::GetVolume() const
{
    return m_volume;
}

void PostAudioRequest::SetVolume(const int64_t& _volume)
{
    m_volume = _volume;
    m_volumeHasBeenSet = true;
}

bool PostAudioRequest::VolumeHasBeenSet() const
{
    return m_volumeHasBeenSet;
}

int64_t PostAudioRequest::GetSpeed() const
{
    return m_speed;
}

void PostAudioRequest::SetSpeed(const int64_t& _speed)
{
    m_speed = _speed;
    m_speedHasBeenSet = true;
}

bool PostAudioRequest::SpeedHasBeenSet() const
{
    return m_speedHasBeenSet;
}

int64_t PostAudioRequest::GetVoiceType() const
{
    return m_voiceType;
}

void PostAudioRequest::SetVoiceType(const int64_t& _voiceType)
{
    m_voiceType = _voiceType;
    m_voiceTypeHasBeenSet = true;
}

bool PostAudioRequest::VoiceTypeHasBeenSet() const
{
    return m_voiceTypeHasBeenSet;
}

string PostAudioRequest::GetSampleRate() const
{
    return m_sampleRate;
}

void PostAudioRequest::SetSampleRate(const string& _sampleRate)
{
    m_sampleRate = _sampleRate;
    m_sampleRateHasBeenSet = true;
}

bool PostAudioRequest::SampleRateHasBeenSet() const
{
    return m_sampleRateHasBeenSet;
}

string PostAudioRequest::GetBotEnv() const
{
    return m_botEnv;
}

void PostAudioRequest::SetBotEnv(const string& _botEnv)
{
    m_botEnv = _botEnv;
    m_botEnvHasBeenSet = true;
}

bool PostAudioRequest::BotEnvHasBeenSet() const
{
    return m_botEnvHasBeenSet;
}

uint64_t PostAudioRequest::GetTtsVoiceFormat() const
{
    return m_ttsVoiceFormat;
}

void PostAudioRequest::SetTtsVoiceFormat(const uint64_t& _ttsVoiceFormat)
{
    m_ttsVoiceFormat = _ttsVoiceFormat;
    m_ttsVoiceFormatHasBeenSet = true;
}

bool PostAudioRequest::TtsVoiceFormatHasBeenSet() const
{
    return m_ttsVoiceFormatHasBeenSet;
}


