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

#include <tencentcloud/trtc/v20190722/model/AudioEncode.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

AudioEncode::AudioEncode() :
    m_sampleRateHasBeenSet(false),
    m_channelHasBeenSet(false),
    m_bitRateHasBeenSet(false),
    m_codecHasBeenSet(false)
{
}

CoreInternalOutcome AudioEncode::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SampleRate") && !value["SampleRate"].IsNull())
    {
        if (!value["SampleRate"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AudioEncode.SampleRate` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sampleRate = value["SampleRate"].GetUint64();
        m_sampleRateHasBeenSet = true;
    }

    if (value.HasMember("Channel") && !value["Channel"].IsNull())
    {
        if (!value["Channel"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AudioEncode.Channel` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_channel = value["Channel"].GetUint64();
        m_channelHasBeenSet = true;
    }

    if (value.HasMember("BitRate") && !value["BitRate"].IsNull())
    {
        if (!value["BitRate"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AudioEncode.BitRate` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bitRate = value["BitRate"].GetUint64();
        m_bitRateHasBeenSet = true;
    }

    if (value.HasMember("Codec") && !value["Codec"].IsNull())
    {
        if (!value["Codec"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AudioEncode.Codec` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_codec = value["Codec"].GetUint64();
        m_codecHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AudioEncode::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sampleRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SampleRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sampleRate, allocator);
    }

    if (m_channelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Channel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_channel, allocator);
    }

    if (m_bitRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BitRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bitRate, allocator);
    }

    if (m_codecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Codec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_codec, allocator);
    }

}


uint64_t AudioEncode::GetSampleRate() const
{
    return m_sampleRate;
}

void AudioEncode::SetSampleRate(const uint64_t& _sampleRate)
{
    m_sampleRate = _sampleRate;
    m_sampleRateHasBeenSet = true;
}

bool AudioEncode::SampleRateHasBeenSet() const
{
    return m_sampleRateHasBeenSet;
}

uint64_t AudioEncode::GetChannel() const
{
    return m_channel;
}

void AudioEncode::SetChannel(const uint64_t& _channel)
{
    m_channel = _channel;
    m_channelHasBeenSet = true;
}

bool AudioEncode::ChannelHasBeenSet() const
{
    return m_channelHasBeenSet;
}

uint64_t AudioEncode::GetBitRate() const
{
    return m_bitRate;
}

void AudioEncode::SetBitRate(const uint64_t& _bitRate)
{
    m_bitRate = _bitRate;
    m_bitRateHasBeenSet = true;
}

bool AudioEncode::BitRateHasBeenSet() const
{
    return m_bitRateHasBeenSet;
}

uint64_t AudioEncode::GetCodec() const
{
    return m_codec;
}

void AudioEncode::SetCodec(const uint64_t& _codec)
{
    m_codec = _codec;
    m_codecHasBeenSet = true;
}

bool AudioEncode::CodecHasBeenSet() const
{
    return m_codecHasBeenSet;
}

