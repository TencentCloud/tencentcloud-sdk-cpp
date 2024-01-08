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

#include <tencentcloud/mps/v20190612/model/ComposeAudioStream.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

ComposeAudioStream::ComposeAudioStream() :
    m_codecHasBeenSet(false),
    m_sampleRateHasBeenSet(false),
    m_audioChannelHasBeenSet(false),
    m_bitrateHasBeenSet(false)
{
}

CoreInternalOutcome ComposeAudioStream::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Codec") && !value["Codec"].IsNull())
    {
        if (!value["Codec"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComposeAudioStream.Codec` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codec = string(value["Codec"].GetString());
        m_codecHasBeenSet = true;
    }

    if (value.HasMember("SampleRate") && !value["SampleRate"].IsNull())
    {
        if (!value["SampleRate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ComposeAudioStream.SampleRate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sampleRate = value["SampleRate"].GetInt64();
        m_sampleRateHasBeenSet = true;
    }

    if (value.HasMember("AudioChannel") && !value["AudioChannel"].IsNull())
    {
        if (!value["AudioChannel"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ComposeAudioStream.AudioChannel` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_audioChannel = value["AudioChannel"].GetInt64();
        m_audioChannelHasBeenSet = true;
    }

    if (value.HasMember("Bitrate") && !value["Bitrate"].IsNull())
    {
        if (!value["Bitrate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ComposeAudioStream.Bitrate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bitrate = value["Bitrate"].GetInt64();
        m_bitrateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ComposeAudioStream::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_codecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Codec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_codec.c_str(), allocator).Move(), allocator);
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

    if (m_bitrateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bitrate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bitrate, allocator);
    }

}


string ComposeAudioStream::GetCodec() const
{
    return m_codec;
}

void ComposeAudioStream::SetCodec(const string& _codec)
{
    m_codec = _codec;
    m_codecHasBeenSet = true;
}

bool ComposeAudioStream::CodecHasBeenSet() const
{
    return m_codecHasBeenSet;
}

int64_t ComposeAudioStream::GetSampleRate() const
{
    return m_sampleRate;
}

void ComposeAudioStream::SetSampleRate(const int64_t& _sampleRate)
{
    m_sampleRate = _sampleRate;
    m_sampleRateHasBeenSet = true;
}

bool ComposeAudioStream::SampleRateHasBeenSet() const
{
    return m_sampleRateHasBeenSet;
}

int64_t ComposeAudioStream::GetAudioChannel() const
{
    return m_audioChannel;
}

void ComposeAudioStream::SetAudioChannel(const int64_t& _audioChannel)
{
    m_audioChannel = _audioChannel;
    m_audioChannelHasBeenSet = true;
}

bool ComposeAudioStream::AudioChannelHasBeenSet() const
{
    return m_audioChannelHasBeenSet;
}

int64_t ComposeAudioStream::GetBitrate() const
{
    return m_bitrate;
}

void ComposeAudioStream::SetBitrate(const int64_t& _bitrate)
{
    m_bitrate = _bitrate;
    m_bitrateHasBeenSet = true;
}

bool ComposeAudioStream::BitrateHasBeenSet() const
{
    return m_bitrateHasBeenSet;
}

