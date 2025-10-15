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

#include <tencentcloud/iotexplorer/v20190423/model/TalkTTSConfigInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

TalkTTSConfigInfo::TalkTTSConfigInfo() :
    m_tTSTypeHasBeenSet(false),
    m_enabledHasBeenSet(false),
    m_configHasBeenSet(false),
    m_speedHasBeenSet(false),
    m_volumeHasBeenSet(false),
    m_pitchHasBeenSet(false)
{
}

CoreInternalOutcome TalkTTSConfigInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TTSType") && !value["TTSType"].IsNull())
    {
        if (!value["TTSType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TalkTTSConfigInfo.TTSType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tTSType = string(value["TTSType"].GetString());
        m_tTSTypeHasBeenSet = true;
    }

    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TalkTTSConfigInfo.Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
    }

    if (value.HasMember("Config") && !value["Config"].IsNull())
    {
        if (!value["Config"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TalkTTSConfigInfo.Config` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_config = string(value["Config"].GetString());
        m_configHasBeenSet = true;
    }

    if (value.HasMember("Speed") && !value["Speed"].IsNull())
    {
        if (!value["Speed"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TalkTTSConfigInfo.Speed` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_speed = value["Speed"].GetDouble();
        m_speedHasBeenSet = true;
    }

    if (value.HasMember("Volume") && !value["Volume"].IsNull())
    {
        if (!value["Volume"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TalkTTSConfigInfo.Volume` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_volume = value["Volume"].GetDouble();
        m_volumeHasBeenSet = true;
    }

    if (value.HasMember("Pitch") && !value["Pitch"].IsNull())
    {
        if (!value["Pitch"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TalkTTSConfigInfo.Pitch` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_pitch = value["Pitch"].GetDouble();
        m_pitchHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TalkTTSConfigInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tTSTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TTSType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tTSType.c_str(), allocator).Move(), allocator);
    }

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

    if (m_configHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Config";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_config.c_str(), allocator).Move(), allocator);
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


string TalkTTSConfigInfo::GetTTSType() const
{
    return m_tTSType;
}

void TalkTTSConfigInfo::SetTTSType(const string& _tTSType)
{
    m_tTSType = _tTSType;
    m_tTSTypeHasBeenSet = true;
}

bool TalkTTSConfigInfo::TTSTypeHasBeenSet() const
{
    return m_tTSTypeHasBeenSet;
}

bool TalkTTSConfigInfo::GetEnabled() const
{
    return m_enabled;
}

void TalkTTSConfigInfo::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool TalkTTSConfigInfo::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

string TalkTTSConfigInfo::GetConfig() const
{
    return m_config;
}

void TalkTTSConfigInfo::SetConfig(const string& _config)
{
    m_config = _config;
    m_configHasBeenSet = true;
}

bool TalkTTSConfigInfo::ConfigHasBeenSet() const
{
    return m_configHasBeenSet;
}

double TalkTTSConfigInfo::GetSpeed() const
{
    return m_speed;
}

void TalkTTSConfigInfo::SetSpeed(const double& _speed)
{
    m_speed = _speed;
    m_speedHasBeenSet = true;
}

bool TalkTTSConfigInfo::SpeedHasBeenSet() const
{
    return m_speedHasBeenSet;
}

double TalkTTSConfigInfo::GetVolume() const
{
    return m_volume;
}

void TalkTTSConfigInfo::SetVolume(const double& _volume)
{
    m_volume = _volume;
    m_volumeHasBeenSet = true;
}

bool TalkTTSConfigInfo::VolumeHasBeenSet() const
{
    return m_volumeHasBeenSet;
}

double TalkTTSConfigInfo::GetPitch() const
{
    return m_pitch;
}

void TalkTTSConfigInfo::SetPitch(const double& _pitch)
{
    m_pitch = _pitch;
    m_pitchHasBeenSet = true;
}

bool TalkTTSConfigInfo::PitchHasBeenSet() const
{
    return m_pitchHasBeenSet;
}

