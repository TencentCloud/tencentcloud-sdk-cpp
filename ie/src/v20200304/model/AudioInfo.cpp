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

#include <tencentcloud/ie/v20200304/model/AudioInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ie::V20200304::Model;
using namespace std;

AudioInfo::AudioInfo() :
    m_bitrateHasBeenSet(false),
    m_codecHasBeenSet(false),
    m_channelHasBeenSet(false),
    m_sampleRateHasBeenSet(false),
    m_denoiseHasBeenSet(false),
    m_enableMuteAudioHasBeenSet(false),
    m_loudnessInfoHasBeenSet(false),
    m_audioEnhanceHasBeenSet(false),
    m_removeReverbHasBeenSet(false)
{
}

CoreInternalOutcome AudioInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Bitrate") && !value["Bitrate"].IsNull())
    {
        if (!value["Bitrate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AudioInfo.Bitrate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bitrate = value["Bitrate"].GetInt64();
        m_bitrateHasBeenSet = true;
    }

    if (value.HasMember("Codec") && !value["Codec"].IsNull())
    {
        if (!value["Codec"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AudioInfo.Codec` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codec = string(value["Codec"].GetString());
        m_codecHasBeenSet = true;
    }

    if (value.HasMember("Channel") && !value["Channel"].IsNull())
    {
        if (!value["Channel"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AudioInfo.Channel` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_channel = value["Channel"].GetInt64();
        m_channelHasBeenSet = true;
    }

    if (value.HasMember("SampleRate") && !value["SampleRate"].IsNull())
    {
        if (!value["SampleRate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AudioInfo.SampleRate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sampleRate = value["SampleRate"].GetInt64();
        m_sampleRateHasBeenSet = true;
    }

    if (value.HasMember("Denoise") && !value["Denoise"].IsNull())
    {
        if (!value["Denoise"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AudioInfo.Denoise` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_denoise.Deserialize(value["Denoise"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_denoiseHasBeenSet = true;
    }

    if (value.HasMember("EnableMuteAudio") && !value["EnableMuteAudio"].IsNull())
    {
        if (!value["EnableMuteAudio"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AudioInfo.EnableMuteAudio` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_enableMuteAudio = value["EnableMuteAudio"].GetInt64();
        m_enableMuteAudioHasBeenSet = true;
    }

    if (value.HasMember("LoudnessInfo") && !value["LoudnessInfo"].IsNull())
    {
        if (!value["LoudnessInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AudioInfo.LoudnessInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_loudnessInfo.Deserialize(value["LoudnessInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_loudnessInfoHasBeenSet = true;
    }

    if (value.HasMember("AudioEnhance") && !value["AudioEnhance"].IsNull())
    {
        if (!value["AudioEnhance"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AudioInfo.AudioEnhance` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_audioEnhance.Deserialize(value["AudioEnhance"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_audioEnhanceHasBeenSet = true;
    }

    if (value.HasMember("RemoveReverb") && !value["RemoveReverb"].IsNull())
    {
        if (!value["RemoveReverb"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AudioInfo.RemoveReverb` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_removeReverb.Deserialize(value["RemoveReverb"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_removeReverbHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AudioInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_bitrateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bitrate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bitrate, allocator);
    }

    if (m_codecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Codec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_codec.c_str(), allocator).Move(), allocator);
    }

    if (m_channelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Channel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_channel, allocator);
    }

    if (m_sampleRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SampleRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sampleRate, allocator);
    }

    if (m_denoiseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Denoise";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_denoise.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_enableMuteAudioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableMuteAudio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableMuteAudio, allocator);
    }

    if (m_loudnessInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoudnessInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_loudnessInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_audioEnhanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioEnhance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_audioEnhance.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_removeReverbHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoveReverb";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_removeReverb.ToJsonObject(value[key.c_str()], allocator);
    }

}


int64_t AudioInfo::GetBitrate() const
{
    return m_bitrate;
}

void AudioInfo::SetBitrate(const int64_t& _bitrate)
{
    m_bitrate = _bitrate;
    m_bitrateHasBeenSet = true;
}

bool AudioInfo::BitrateHasBeenSet() const
{
    return m_bitrateHasBeenSet;
}

string AudioInfo::GetCodec() const
{
    return m_codec;
}

void AudioInfo::SetCodec(const string& _codec)
{
    m_codec = _codec;
    m_codecHasBeenSet = true;
}

bool AudioInfo::CodecHasBeenSet() const
{
    return m_codecHasBeenSet;
}

int64_t AudioInfo::GetChannel() const
{
    return m_channel;
}

void AudioInfo::SetChannel(const int64_t& _channel)
{
    m_channel = _channel;
    m_channelHasBeenSet = true;
}

bool AudioInfo::ChannelHasBeenSet() const
{
    return m_channelHasBeenSet;
}

int64_t AudioInfo::GetSampleRate() const
{
    return m_sampleRate;
}

void AudioInfo::SetSampleRate(const int64_t& _sampleRate)
{
    m_sampleRate = _sampleRate;
    m_sampleRateHasBeenSet = true;
}

bool AudioInfo::SampleRateHasBeenSet() const
{
    return m_sampleRateHasBeenSet;
}

Denoise AudioInfo::GetDenoise() const
{
    return m_denoise;
}

void AudioInfo::SetDenoise(const Denoise& _denoise)
{
    m_denoise = _denoise;
    m_denoiseHasBeenSet = true;
}

bool AudioInfo::DenoiseHasBeenSet() const
{
    return m_denoiseHasBeenSet;
}

int64_t AudioInfo::GetEnableMuteAudio() const
{
    return m_enableMuteAudio;
}

void AudioInfo::SetEnableMuteAudio(const int64_t& _enableMuteAudio)
{
    m_enableMuteAudio = _enableMuteAudio;
    m_enableMuteAudioHasBeenSet = true;
}

bool AudioInfo::EnableMuteAudioHasBeenSet() const
{
    return m_enableMuteAudioHasBeenSet;
}

LoudnessInfo AudioInfo::GetLoudnessInfo() const
{
    return m_loudnessInfo;
}

void AudioInfo::SetLoudnessInfo(const LoudnessInfo& _loudnessInfo)
{
    m_loudnessInfo = _loudnessInfo;
    m_loudnessInfoHasBeenSet = true;
}

bool AudioInfo::LoudnessInfoHasBeenSet() const
{
    return m_loudnessInfoHasBeenSet;
}

AudioEnhance AudioInfo::GetAudioEnhance() const
{
    return m_audioEnhance;
}

void AudioInfo::SetAudioEnhance(const AudioEnhance& _audioEnhance)
{
    m_audioEnhance = _audioEnhance;
    m_audioEnhanceHasBeenSet = true;
}

bool AudioInfo::AudioEnhanceHasBeenSet() const
{
    return m_audioEnhanceHasBeenSet;
}

RemoveReverb AudioInfo::GetRemoveReverb() const
{
    return m_removeReverb;
}

void AudioInfo::SetRemoveReverb(const RemoveReverb& _removeReverb)
{
    m_removeReverb = _removeReverb;
    m_removeReverbHasBeenSet = true;
}

bool AudioInfo::RemoveReverbHasBeenSet() const
{
    return m_removeReverbHasBeenSet;
}

