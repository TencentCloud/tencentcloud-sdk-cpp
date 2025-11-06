/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/trtc/v20190722/model/Voice.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

Voice::Voice() :
    m_voiceIdHasBeenSet(false),
    m_speedHasBeenSet(false),
    m_volumeHasBeenSet(false),
    m_pitchHasBeenSet(false)
{
}

CoreInternalOutcome Voice::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VoiceId") && !value["VoiceId"].IsNull())
    {
        if (!value["VoiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Voice.VoiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_voiceId = string(value["VoiceId"].GetString());
        m_voiceIdHasBeenSet = true;
    }

    if (value.HasMember("Speed") && !value["Speed"].IsNull())
    {
        if (!value["Speed"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Voice.Speed` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_speed = value["Speed"].GetDouble();
        m_speedHasBeenSet = true;
    }

    if (value.HasMember("Volume") && !value["Volume"].IsNull())
    {
        if (!value["Volume"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Voice.Volume` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_volume = value["Volume"].GetDouble();
        m_volumeHasBeenSet = true;
    }

    if (value.HasMember("Pitch") && !value["Pitch"].IsNull())
    {
        if (!value["Pitch"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Voice.Pitch` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pitch = value["Pitch"].GetInt64();
        m_pitchHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Voice::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_voiceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_voiceId.c_str(), allocator).Move(), allocator);
    }

    if (m_speedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Speed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_speed, allocator);
    }

    if (m_volumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Volume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_volume, allocator);
    }

    if (m_pitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pitch, allocator);
    }

}


string Voice::GetVoiceId() const
{
    return m_voiceId;
}

void Voice::SetVoiceId(const string& _voiceId)
{
    m_voiceId = _voiceId;
    m_voiceIdHasBeenSet = true;
}

bool Voice::VoiceIdHasBeenSet() const
{
    return m_voiceIdHasBeenSet;
}

double Voice::GetSpeed() const
{
    return m_speed;
}

void Voice::SetSpeed(const double& _speed)
{
    m_speed = _speed;
    m_speedHasBeenSet = true;
}

bool Voice::SpeedHasBeenSet() const
{
    return m_speedHasBeenSet;
}

double Voice::GetVolume() const
{
    return m_volume;
}

void Voice::SetVolume(const double& _volume)
{
    m_volume = _volume;
    m_volumeHasBeenSet = true;
}

bool Voice::VolumeHasBeenSet() const
{
    return m_volumeHasBeenSet;
}

int64_t Voice::GetPitch() const
{
    return m_pitch;
}

void Voice::SetPitch(const int64_t& _pitch)
{
    m_pitch = _pitch;
    m_pitchHasBeenSet = true;
}

bool Voice::PitchHasBeenSet() const
{
    return m_pitchHasBeenSet;
}

