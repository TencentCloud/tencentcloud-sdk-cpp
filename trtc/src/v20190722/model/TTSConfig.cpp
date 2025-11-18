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

#include <tencentcloud/trtc/v20190722/model/TTSConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

TTSConfig::TTSConfig() :
    m_voiceIdHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_speedHasBeenSet(false),
    m_volumeHasBeenSet(false)
{
}

CoreInternalOutcome TTSConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VoiceId") && !value["VoiceId"].IsNull())
    {
        if (!value["VoiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TTSConfig.VoiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_voiceId = string(value["VoiceId"].GetString());
        m_voiceIdHasBeenSet = true;
    }

    if (value.HasMember("Model") && !value["Model"].IsNull())
    {
        if (!value["Model"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TTSConfig.Model` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_model = string(value["Model"].GetString());
        m_modelHasBeenSet = true;
    }

    if (value.HasMember("Speed") && !value["Speed"].IsNull())
    {
        if (!value["Speed"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TTSConfig.Speed` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_speed = value["Speed"].GetDouble();
        m_speedHasBeenSet = true;
    }

    if (value.HasMember("Volume") && !value["Volume"].IsNull())
    {
        if (!value["Volume"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TTSConfig.Volume` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_volume = value["Volume"].GetDouble();
        m_volumeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TTSConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_voiceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_voiceId.c_str(), allocator).Move(), allocator);
    }

    if (m_modelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Model";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_model.c_str(), allocator).Move(), allocator);
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

}


string TTSConfig::GetVoiceId() const
{
    return m_voiceId;
}

void TTSConfig::SetVoiceId(const string& _voiceId)
{
    m_voiceId = _voiceId;
    m_voiceIdHasBeenSet = true;
}

bool TTSConfig::VoiceIdHasBeenSet() const
{
    return m_voiceIdHasBeenSet;
}

string TTSConfig::GetModel() const
{
    return m_model;
}

void TTSConfig::SetModel(const string& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool TTSConfig::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

double TTSConfig::GetSpeed() const
{
    return m_speed;
}

void TTSConfig::SetSpeed(const double& _speed)
{
    m_speed = _speed;
    m_speedHasBeenSet = true;
}

bool TTSConfig::SpeedHasBeenSet() const
{
    return m_speedHasBeenSet;
}

double TTSConfig::GetVolume() const
{
    return m_volume;
}

void TTSConfig::SetVolume(const double& _volume)
{
    m_volume = _volume;
    m_volumeHasBeenSet = true;
}

bool TTSConfig::VolumeHasBeenSet() const
{
    return m_volumeHasBeenSet;
}

