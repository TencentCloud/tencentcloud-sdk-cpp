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

#include <tencentcloud/tsi/v20210325/model/TTS.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsi::V20210325::Model;
using namespace std;

TTS::TTS() :
    m_codecHasBeenSet(false),
    m_voiceTypeHasBeenSet(false),
    m_volumeHasBeenSet(false),
    m_speedHasBeenSet(false),
    m_sampleRateHasBeenSet(false)
{
}

CoreInternalOutcome TTS::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Codec") && !value["Codec"].IsNull())
    {
        if (!value["Codec"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TTS.Codec` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codec = string(value["Codec"].GetString());
        m_codecHasBeenSet = true;
    }

    if (value.HasMember("VoiceType") && !value["VoiceType"].IsNull())
    {
        if (!value["VoiceType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TTS.VoiceType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_voiceType = value["VoiceType"].GetUint64();
        m_voiceTypeHasBeenSet = true;
    }

    if (value.HasMember("Volume") && !value["Volume"].IsNull())
    {
        if (!value["Volume"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TTS.Volume` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_volume = value["Volume"].GetDouble();
        m_volumeHasBeenSet = true;
    }

    if (value.HasMember("Speed") && !value["Speed"].IsNull())
    {
        if (!value["Speed"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TTS.Speed` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_speed = value["Speed"].GetDouble();
        m_speedHasBeenSet = true;
    }

    if (value.HasMember("SampleRate") && !value["SampleRate"].IsNull())
    {
        if (!value["SampleRate"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TTS.SampleRate` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sampleRate = value["SampleRate"].GetUint64();
        m_sampleRateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TTS::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_codecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Codec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_codec.c_str(), allocator).Move(), allocator);
    }

    if (m_voiceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_voiceType, allocator);
    }

    if (m_volumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Volume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_volume, allocator);
    }

    if (m_speedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Speed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_speed, allocator);
    }

    if (m_sampleRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SampleRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sampleRate, allocator);
    }

}


string TTS::GetCodec() const
{
    return m_codec;
}

void TTS::SetCodec(const string& _codec)
{
    m_codec = _codec;
    m_codecHasBeenSet = true;
}

bool TTS::CodecHasBeenSet() const
{
    return m_codecHasBeenSet;
}

uint64_t TTS::GetVoiceType() const
{
    return m_voiceType;
}

void TTS::SetVoiceType(const uint64_t& _voiceType)
{
    m_voiceType = _voiceType;
    m_voiceTypeHasBeenSet = true;
}

bool TTS::VoiceTypeHasBeenSet() const
{
    return m_voiceTypeHasBeenSet;
}

double TTS::GetVolume() const
{
    return m_volume;
}

void TTS::SetVolume(const double& _volume)
{
    m_volume = _volume;
    m_volumeHasBeenSet = true;
}

bool TTS::VolumeHasBeenSet() const
{
    return m_volumeHasBeenSet;
}

double TTS::GetSpeed() const
{
    return m_speed;
}

void TTS::SetSpeed(const double& _speed)
{
    m_speed = _speed;
    m_speedHasBeenSet = true;
}

bool TTS::SpeedHasBeenSet() const
{
    return m_speedHasBeenSet;
}

uint64_t TTS::GetSampleRate() const
{
    return m_sampleRate;
}

void TTS::SetSampleRate(const uint64_t& _sampleRate)
{
    m_sampleRate = _sampleRate;
    m_sampleRateHasBeenSet = true;
}

bool TTS::SampleRateHasBeenSet() const
{
    return m_sampleRateHasBeenSet;
}

