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

#include <tencentcloud/vod/v20180717/model/AudioTemplateInfoForUpdate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

AudioTemplateInfoForUpdate::AudioTemplateInfoForUpdate() :
    m_codecHasBeenSet(false),
    m_bitrateHasBeenSet(false),
    m_sampleRateHasBeenSet(false),
    m_audioChannelHasBeenSet(false)
{
}

CoreInternalOutcome AudioTemplateInfoForUpdate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Codec") && !value["Codec"].IsNull())
    {
        if (!value["Codec"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AudioTemplateInfoForUpdate.Codec` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codec = string(value["Codec"].GetString());
        m_codecHasBeenSet = true;
    }

    if (value.HasMember("Bitrate") && !value["Bitrate"].IsNull())
    {
        if (!value["Bitrate"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AudioTemplateInfoForUpdate.Bitrate` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bitrate = value["Bitrate"].GetUint64();
        m_bitrateHasBeenSet = true;
    }

    if (value.HasMember("SampleRate") && !value["SampleRate"].IsNull())
    {
        if (!value["SampleRate"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AudioTemplateInfoForUpdate.SampleRate` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sampleRate = value["SampleRate"].GetUint64();
        m_sampleRateHasBeenSet = true;
    }

    if (value.HasMember("AudioChannel") && !value["AudioChannel"].IsNull())
    {
        if (!value["AudioChannel"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AudioTemplateInfoForUpdate.AudioChannel` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_audioChannel = value["AudioChannel"].GetInt64();
        m_audioChannelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AudioTemplateInfoForUpdate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_codecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Codec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_codec.c_str(), allocator).Move(), allocator);
    }

    if (m_bitrateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bitrate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bitrate, allocator);
    }

    if (m_sampleRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SampleRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sampleRate, allocator);
    }

    if (m_audioChannelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioChannel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_audioChannel, allocator);
    }

}


string AudioTemplateInfoForUpdate::GetCodec() const
{
    return m_codec;
}

void AudioTemplateInfoForUpdate::SetCodec(const string& _codec)
{
    m_codec = _codec;
    m_codecHasBeenSet = true;
}

bool AudioTemplateInfoForUpdate::CodecHasBeenSet() const
{
    return m_codecHasBeenSet;
}

uint64_t AudioTemplateInfoForUpdate::GetBitrate() const
{
    return m_bitrate;
}

void AudioTemplateInfoForUpdate::SetBitrate(const uint64_t& _bitrate)
{
    m_bitrate = _bitrate;
    m_bitrateHasBeenSet = true;
}

bool AudioTemplateInfoForUpdate::BitrateHasBeenSet() const
{
    return m_bitrateHasBeenSet;
}

uint64_t AudioTemplateInfoForUpdate::GetSampleRate() const
{
    return m_sampleRate;
}

void AudioTemplateInfoForUpdate::SetSampleRate(const uint64_t& _sampleRate)
{
    m_sampleRate = _sampleRate;
    m_sampleRateHasBeenSet = true;
}

bool AudioTemplateInfoForUpdate::SampleRateHasBeenSet() const
{
    return m_sampleRateHasBeenSet;
}

int64_t AudioTemplateInfoForUpdate::GetAudioChannel() const
{
    return m_audioChannel;
}

void AudioTemplateInfoForUpdate::SetAudioChannel(const int64_t& _audioChannel)
{
    m_audioChannel = _audioChannel;
    m_audioChannelHasBeenSet = true;
}

bool AudioTemplateInfoForUpdate::AudioChannelHasBeenSet() const
{
    return m_audioChannelHasBeenSet;
}

