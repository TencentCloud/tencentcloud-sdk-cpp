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

#include <tencentcloud/cme/v20191029/model/VideoEncodingPresetAudioSetting.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

VideoEncodingPresetAudioSetting::VideoEncodingPresetAudioSetting() :
    m_codecHasBeenSet(false),
    m_bitrateHasBeenSet(false),
    m_channelsHasBeenSet(false),
    m_sampleRateHasBeenSet(false)
{
}

CoreInternalOutcome VideoEncodingPresetAudioSetting::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Codec") && !value["Codec"].IsNull())
    {
        if (!value["Codec"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoEncodingPresetAudioSetting.Codec` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codec = string(value["Codec"].GetString());
        m_codecHasBeenSet = true;
    }

    if (value.HasMember("Bitrate") && !value["Bitrate"].IsNull())
    {
        if (!value["Bitrate"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoEncodingPresetAudioSetting.Bitrate` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bitrate = value["Bitrate"].GetUint64();
        m_bitrateHasBeenSet = true;
    }

    if (value.HasMember("Channels") && !value["Channels"].IsNull())
    {
        if (!value["Channels"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoEncodingPresetAudioSetting.Channels` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_channels = value["Channels"].GetUint64();
        m_channelsHasBeenSet = true;
    }

    if (value.HasMember("SampleRate") && !value["SampleRate"].IsNull())
    {
        if (!value["SampleRate"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoEncodingPresetAudioSetting.SampleRate` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sampleRate = value["SampleRate"].GetUint64();
        m_sampleRateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VideoEncodingPresetAudioSetting::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_channelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Channels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_channels, allocator);
    }

    if (m_sampleRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SampleRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sampleRate, allocator);
    }

}


string VideoEncodingPresetAudioSetting::GetCodec() const
{
    return m_codec;
}

void VideoEncodingPresetAudioSetting::SetCodec(const string& _codec)
{
    m_codec = _codec;
    m_codecHasBeenSet = true;
}

bool VideoEncodingPresetAudioSetting::CodecHasBeenSet() const
{
    return m_codecHasBeenSet;
}

uint64_t VideoEncodingPresetAudioSetting::GetBitrate() const
{
    return m_bitrate;
}

void VideoEncodingPresetAudioSetting::SetBitrate(const uint64_t& _bitrate)
{
    m_bitrate = _bitrate;
    m_bitrateHasBeenSet = true;
}

bool VideoEncodingPresetAudioSetting::BitrateHasBeenSet() const
{
    return m_bitrateHasBeenSet;
}

uint64_t VideoEncodingPresetAudioSetting::GetChannels() const
{
    return m_channels;
}

void VideoEncodingPresetAudioSetting::SetChannels(const uint64_t& _channels)
{
    m_channels = _channels;
    m_channelsHasBeenSet = true;
}

bool VideoEncodingPresetAudioSetting::ChannelsHasBeenSet() const
{
    return m_channelsHasBeenSet;
}

uint64_t VideoEncodingPresetAudioSetting::GetSampleRate() const
{
    return m_sampleRate;
}

void VideoEncodingPresetAudioSetting::SetSampleRate(const uint64_t& _sampleRate)
{
    m_sampleRate = _sampleRate;
    m_sampleRateHasBeenSet = true;
}

bool VideoEncodingPresetAudioSetting::SampleRateHasBeenSet() const
{
    return m_sampleRateHasBeenSet;
}

