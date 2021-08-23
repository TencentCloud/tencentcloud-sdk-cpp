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

#include <tencentcloud/ie/v20200304/model/AudioInfoResultItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ie::V20200304::Model;
using namespace std;

AudioInfoResultItem::AudioInfoResultItem() :
    m_streamHasBeenSet(false),
    m_sampleHasBeenSet(false),
    m_channelHasBeenSet(false),
    m_codecHasBeenSet(false),
    m_bitrateHasBeenSet(false),
    m_durationHasBeenSet(false)
{
}

CoreInternalOutcome AudioInfoResultItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Stream") && !value["Stream"].IsNull())
    {
        if (!value["Stream"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AudioInfoResultItem.Stream` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_stream = value["Stream"].GetInt64();
        m_streamHasBeenSet = true;
    }

    if (value.HasMember("Sample") && !value["Sample"].IsNull())
    {
        if (!value["Sample"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AudioInfoResultItem.Sample` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sample = value["Sample"].GetInt64();
        m_sampleHasBeenSet = true;
    }

    if (value.HasMember("Channel") && !value["Channel"].IsNull())
    {
        if (!value["Channel"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AudioInfoResultItem.Channel` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_channel = value["Channel"].GetInt64();
        m_channelHasBeenSet = true;
    }

    if (value.HasMember("Codec") && !value["Codec"].IsNull())
    {
        if (!value["Codec"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AudioInfoResultItem.Codec` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codec = string(value["Codec"].GetString());
        m_codecHasBeenSet = true;
    }

    if (value.HasMember("Bitrate") && !value["Bitrate"].IsNull())
    {
        if (!value["Bitrate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AudioInfoResultItem.Bitrate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bitrate = value["Bitrate"].GetInt64();
        m_bitrateHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AudioInfoResultItem.Duration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetInt64();
        m_durationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AudioInfoResultItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_streamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Stream";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_stream, allocator);
    }

    if (m_sampleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sample";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sample, allocator);
    }

    if (m_channelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Channel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_channel, allocator);
    }

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

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

}


int64_t AudioInfoResultItem::GetStream() const
{
    return m_stream;
}

void AudioInfoResultItem::SetStream(const int64_t& _stream)
{
    m_stream = _stream;
    m_streamHasBeenSet = true;
}

bool AudioInfoResultItem::StreamHasBeenSet() const
{
    return m_streamHasBeenSet;
}

int64_t AudioInfoResultItem::GetSample() const
{
    return m_sample;
}

void AudioInfoResultItem::SetSample(const int64_t& _sample)
{
    m_sample = _sample;
    m_sampleHasBeenSet = true;
}

bool AudioInfoResultItem::SampleHasBeenSet() const
{
    return m_sampleHasBeenSet;
}

int64_t AudioInfoResultItem::GetChannel() const
{
    return m_channel;
}

void AudioInfoResultItem::SetChannel(const int64_t& _channel)
{
    m_channel = _channel;
    m_channelHasBeenSet = true;
}

bool AudioInfoResultItem::ChannelHasBeenSet() const
{
    return m_channelHasBeenSet;
}

string AudioInfoResultItem::GetCodec() const
{
    return m_codec;
}

void AudioInfoResultItem::SetCodec(const string& _codec)
{
    m_codec = _codec;
    m_codecHasBeenSet = true;
}

bool AudioInfoResultItem::CodecHasBeenSet() const
{
    return m_codecHasBeenSet;
}

int64_t AudioInfoResultItem::GetBitrate() const
{
    return m_bitrate;
}

void AudioInfoResultItem::SetBitrate(const int64_t& _bitrate)
{
    m_bitrate = _bitrate;
    m_bitrateHasBeenSet = true;
}

bool AudioInfoResultItem::BitrateHasBeenSet() const
{
    return m_bitrateHasBeenSet;
}

int64_t AudioInfoResultItem::GetDuration() const
{
    return m_duration;
}

void AudioInfoResultItem::SetDuration(const int64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool AudioInfoResultItem::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

