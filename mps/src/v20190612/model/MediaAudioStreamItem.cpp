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

#include <tencentcloud/mps/v20190612/model/MediaAudioStreamItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

MediaAudioStreamItem::MediaAudioStreamItem() :
    m_bitrateHasBeenSet(false),
    m_samplingRateHasBeenSet(false),
    m_codecHasBeenSet(false),
    m_channelHasBeenSet(false),
    m_codecsHasBeenSet(false),
    m_loudnessHasBeenSet(false)
{
}

CoreInternalOutcome MediaAudioStreamItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Bitrate") && !value["Bitrate"].IsNull())
    {
        if (!value["Bitrate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MediaAudioStreamItem.Bitrate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bitrate = value["Bitrate"].GetInt64();
        m_bitrateHasBeenSet = true;
    }

    if (value.HasMember("SamplingRate") && !value["SamplingRate"].IsNull())
    {
        if (!value["SamplingRate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MediaAudioStreamItem.SamplingRate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_samplingRate = value["SamplingRate"].GetInt64();
        m_samplingRateHasBeenSet = true;
    }

    if (value.HasMember("Codec") && !value["Codec"].IsNull())
    {
        if (!value["Codec"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaAudioStreamItem.Codec` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codec = string(value["Codec"].GetString());
        m_codecHasBeenSet = true;
    }

    if (value.HasMember("Channel") && !value["Channel"].IsNull())
    {
        if (!value["Channel"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MediaAudioStreamItem.Channel` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_channel = value["Channel"].GetInt64();
        m_channelHasBeenSet = true;
    }

    if (value.HasMember("Codecs") && !value["Codecs"].IsNull())
    {
        if (!value["Codecs"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaAudioStreamItem.Codecs` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codecs = string(value["Codecs"].GetString());
        m_codecsHasBeenSet = true;
    }

    if (value.HasMember("Loudness") && !value["Loudness"].IsNull())
    {
        if (!value["Loudness"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MediaAudioStreamItem.Loudness` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_loudness = value["Loudness"].GetDouble();
        m_loudnessHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaAudioStreamItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_bitrateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bitrate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bitrate, allocator);
    }

    if (m_samplingRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SamplingRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_samplingRate, allocator);
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

    if (m_codecsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Codecs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_codecs.c_str(), allocator).Move(), allocator);
    }

    if (m_loudnessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Loudness";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_loudness, allocator);
    }

}


int64_t MediaAudioStreamItem::GetBitrate() const
{
    return m_bitrate;
}

void MediaAudioStreamItem::SetBitrate(const int64_t& _bitrate)
{
    m_bitrate = _bitrate;
    m_bitrateHasBeenSet = true;
}

bool MediaAudioStreamItem::BitrateHasBeenSet() const
{
    return m_bitrateHasBeenSet;
}

int64_t MediaAudioStreamItem::GetSamplingRate() const
{
    return m_samplingRate;
}

void MediaAudioStreamItem::SetSamplingRate(const int64_t& _samplingRate)
{
    m_samplingRate = _samplingRate;
    m_samplingRateHasBeenSet = true;
}

bool MediaAudioStreamItem::SamplingRateHasBeenSet() const
{
    return m_samplingRateHasBeenSet;
}

string MediaAudioStreamItem::GetCodec() const
{
    return m_codec;
}

void MediaAudioStreamItem::SetCodec(const string& _codec)
{
    m_codec = _codec;
    m_codecHasBeenSet = true;
}

bool MediaAudioStreamItem::CodecHasBeenSet() const
{
    return m_codecHasBeenSet;
}

int64_t MediaAudioStreamItem::GetChannel() const
{
    return m_channel;
}

void MediaAudioStreamItem::SetChannel(const int64_t& _channel)
{
    m_channel = _channel;
    m_channelHasBeenSet = true;
}

bool MediaAudioStreamItem::ChannelHasBeenSet() const
{
    return m_channelHasBeenSet;
}

string MediaAudioStreamItem::GetCodecs() const
{
    return m_codecs;
}

void MediaAudioStreamItem::SetCodecs(const string& _codecs)
{
    m_codecs = _codecs;
    m_codecsHasBeenSet = true;
}

bool MediaAudioStreamItem::CodecsHasBeenSet() const
{
    return m_codecsHasBeenSet;
}

double MediaAudioStreamItem::GetLoudness() const
{
    return m_loudness;
}

void MediaAudioStreamItem::SetLoudness(const double& _loudness)
{
    m_loudness = _loudness;
    m_loudnessHasBeenSet = true;
}

bool MediaAudioStreamItem::LoudnessHasBeenSet() const
{
    return m_loudnessHasBeenSet;
}

