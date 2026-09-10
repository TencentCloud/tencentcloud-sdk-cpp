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

#include <tencentcloud/mps/v20190612/model/DubbingConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

DubbingConfig::DubbingConfig() :
    m_dubbingModeHasBeenSet(false),
    m_backgroundVolumeHasBeenSet(false),
    m_secondaryTuningHasBeenSet(false),
    m_voiceIdHasBeenSet(false),
    m_dubbingVersionHasBeenSet(false)
{
}

CoreInternalOutcome DubbingConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DubbingMode") && !value["DubbingMode"].IsNull())
    {
        if (!value["DubbingMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DubbingConfig.DubbingMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dubbingMode = string(value["DubbingMode"].GetString());
        m_dubbingModeHasBeenSet = true;
    }

    if (value.HasMember("BackgroundVolume") && !value["BackgroundVolume"].IsNull())
    {
        if (!value["BackgroundVolume"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DubbingConfig.BackgroundVolume` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_backgroundVolume = value["BackgroundVolume"].GetInt64();
        m_backgroundVolumeHasBeenSet = true;
    }

    if (value.HasMember("SecondaryTuning") && !value["SecondaryTuning"].IsNull())
    {
        if (!value["SecondaryTuning"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DubbingConfig.SecondaryTuning` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secondaryTuning = string(value["SecondaryTuning"].GetString());
        m_secondaryTuningHasBeenSet = true;
    }

    if (value.HasMember("VoiceId") && !value["VoiceId"].IsNull())
    {
        if (!value["VoiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DubbingConfig.VoiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_voiceId = string(value["VoiceId"].GetString());
        m_voiceIdHasBeenSet = true;
    }

    if (value.HasMember("DubbingVersion") && !value["DubbingVersion"].IsNull())
    {
        if (!value["DubbingVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DubbingConfig.DubbingVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dubbingVersion = string(value["DubbingVersion"].GetString());
        m_dubbingVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DubbingConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dubbingModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DubbingMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dubbingMode.c_str(), allocator).Move(), allocator);
    }

    if (m_backgroundVolumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackgroundVolume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backgroundVolume, allocator);
    }

    if (m_secondaryTuningHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecondaryTuning";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secondaryTuning.c_str(), allocator).Move(), allocator);
    }

    if (m_voiceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_voiceId.c_str(), allocator).Move(), allocator);
    }

    if (m_dubbingVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DubbingVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dubbingVersion.c_str(), allocator).Move(), allocator);
    }

}


string DubbingConfig::GetDubbingMode() const
{
    return m_dubbingMode;
}

void DubbingConfig::SetDubbingMode(const string& _dubbingMode)
{
    m_dubbingMode = _dubbingMode;
    m_dubbingModeHasBeenSet = true;
}

bool DubbingConfig::DubbingModeHasBeenSet() const
{
    return m_dubbingModeHasBeenSet;
}

int64_t DubbingConfig::GetBackgroundVolume() const
{
    return m_backgroundVolume;
}

void DubbingConfig::SetBackgroundVolume(const int64_t& _backgroundVolume)
{
    m_backgroundVolume = _backgroundVolume;
    m_backgroundVolumeHasBeenSet = true;
}

bool DubbingConfig::BackgroundVolumeHasBeenSet() const
{
    return m_backgroundVolumeHasBeenSet;
}

string DubbingConfig::GetSecondaryTuning() const
{
    return m_secondaryTuning;
}

void DubbingConfig::SetSecondaryTuning(const string& _secondaryTuning)
{
    m_secondaryTuning = _secondaryTuning;
    m_secondaryTuningHasBeenSet = true;
}

bool DubbingConfig::SecondaryTuningHasBeenSet() const
{
    return m_secondaryTuningHasBeenSet;
}

string DubbingConfig::GetVoiceId() const
{
    return m_voiceId;
}

void DubbingConfig::SetVoiceId(const string& _voiceId)
{
    m_voiceId = _voiceId;
    m_voiceIdHasBeenSet = true;
}

bool DubbingConfig::VoiceIdHasBeenSet() const
{
    return m_voiceIdHasBeenSet;
}

string DubbingConfig::GetDubbingVersion() const
{
    return m_dubbingVersion;
}

void DubbingConfig::SetDubbingVersion(const string& _dubbingVersion)
{
    m_dubbingVersion = _dubbingVersion;
    m_dubbingVersionHasBeenSet = true;
}

bool DubbingConfig::DubbingVersionHasBeenSet() const
{
    return m_dubbingVersionHasBeenSet;
}

