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

#include <tencentcloud/tci/v20190318/model/ASRStat.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tci::V20190318::Model;
using namespace std;

ASRStat::ASRStat() :
    m_avgSpeedHasBeenSet(false),
    m_avgVolumeHasBeenSet(false),
    m_maxVolumeHasBeenSet(false),
    m_minVolumeHasBeenSet(false),
    m_muteDurationHasBeenSet(false),
    m_soundDurationHasBeenSet(false),
    m_totalDurationHasBeenSet(false),
    m_vadNumHasBeenSet(false),
    m_wordNumHasBeenSet(false)
{
}

CoreInternalOutcome ASRStat::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AvgSpeed") && !value["AvgSpeed"].IsNull())
    {
        if (!value["AvgSpeed"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ASRStat.AvgSpeed` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_avgSpeed = value["AvgSpeed"].GetDouble();
        m_avgSpeedHasBeenSet = true;
    }

    if (value.HasMember("AvgVolume") && !value["AvgVolume"].IsNull())
    {
        if (!value["AvgVolume"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ASRStat.AvgVolume` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_avgVolume = value["AvgVolume"].GetDouble();
        m_avgVolumeHasBeenSet = true;
    }

    if (value.HasMember("MaxVolume") && !value["MaxVolume"].IsNull())
    {
        if (!value["MaxVolume"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ASRStat.MaxVolume` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_maxVolume = value["MaxVolume"].GetDouble();
        m_maxVolumeHasBeenSet = true;
    }

    if (value.HasMember("MinVolume") && !value["MinVolume"].IsNull())
    {
        if (!value["MinVolume"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ASRStat.MinVolume` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_minVolume = value["MinVolume"].GetDouble();
        m_minVolumeHasBeenSet = true;
    }

    if (value.HasMember("MuteDuration") && !value["MuteDuration"].IsNull())
    {
        if (!value["MuteDuration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ASRStat.MuteDuration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_muteDuration = value["MuteDuration"].GetInt64();
        m_muteDurationHasBeenSet = true;
    }

    if (value.HasMember("SoundDuration") && !value["SoundDuration"].IsNull())
    {
        if (!value["SoundDuration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ASRStat.SoundDuration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_soundDuration = value["SoundDuration"].GetInt64();
        m_soundDurationHasBeenSet = true;
    }

    if (value.HasMember("TotalDuration") && !value["TotalDuration"].IsNull())
    {
        if (!value["TotalDuration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ASRStat.TotalDuration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalDuration = value["TotalDuration"].GetInt64();
        m_totalDurationHasBeenSet = true;
    }

    if (value.HasMember("VadNum") && !value["VadNum"].IsNull())
    {
        if (!value["VadNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ASRStat.VadNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vadNum = value["VadNum"].GetInt64();
        m_vadNumHasBeenSet = true;
    }

    if (value.HasMember("WordNum") && !value["WordNum"].IsNull())
    {
        if (!value["WordNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ASRStat.WordNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_wordNum = value["WordNum"].GetInt64();
        m_wordNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ASRStat::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_avgSpeedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvgSpeed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_avgSpeed, allocator);
    }

    if (m_avgVolumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvgVolume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_avgVolume, allocator);
    }

    if (m_maxVolumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxVolume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxVolume, allocator);
    }

    if (m_minVolumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinVolume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minVolume, allocator);
    }

    if (m_muteDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MuteDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_muteDuration, allocator);
    }

    if (m_soundDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SoundDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_soundDuration, allocator);
    }

    if (m_totalDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalDuration, allocator);
    }

    if (m_vadNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VadNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vadNum, allocator);
    }

    if (m_wordNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WordNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_wordNum, allocator);
    }

}


double ASRStat::GetAvgSpeed() const
{
    return m_avgSpeed;
}

void ASRStat::SetAvgSpeed(const double& _avgSpeed)
{
    m_avgSpeed = _avgSpeed;
    m_avgSpeedHasBeenSet = true;
}

bool ASRStat::AvgSpeedHasBeenSet() const
{
    return m_avgSpeedHasBeenSet;
}

double ASRStat::GetAvgVolume() const
{
    return m_avgVolume;
}

void ASRStat::SetAvgVolume(const double& _avgVolume)
{
    m_avgVolume = _avgVolume;
    m_avgVolumeHasBeenSet = true;
}

bool ASRStat::AvgVolumeHasBeenSet() const
{
    return m_avgVolumeHasBeenSet;
}

double ASRStat::GetMaxVolume() const
{
    return m_maxVolume;
}

void ASRStat::SetMaxVolume(const double& _maxVolume)
{
    m_maxVolume = _maxVolume;
    m_maxVolumeHasBeenSet = true;
}

bool ASRStat::MaxVolumeHasBeenSet() const
{
    return m_maxVolumeHasBeenSet;
}

double ASRStat::GetMinVolume() const
{
    return m_minVolume;
}

void ASRStat::SetMinVolume(const double& _minVolume)
{
    m_minVolume = _minVolume;
    m_minVolumeHasBeenSet = true;
}

bool ASRStat::MinVolumeHasBeenSet() const
{
    return m_minVolumeHasBeenSet;
}

int64_t ASRStat::GetMuteDuration() const
{
    return m_muteDuration;
}

void ASRStat::SetMuteDuration(const int64_t& _muteDuration)
{
    m_muteDuration = _muteDuration;
    m_muteDurationHasBeenSet = true;
}

bool ASRStat::MuteDurationHasBeenSet() const
{
    return m_muteDurationHasBeenSet;
}

int64_t ASRStat::GetSoundDuration() const
{
    return m_soundDuration;
}

void ASRStat::SetSoundDuration(const int64_t& _soundDuration)
{
    m_soundDuration = _soundDuration;
    m_soundDurationHasBeenSet = true;
}

bool ASRStat::SoundDurationHasBeenSet() const
{
    return m_soundDurationHasBeenSet;
}

int64_t ASRStat::GetTotalDuration() const
{
    return m_totalDuration;
}

void ASRStat::SetTotalDuration(const int64_t& _totalDuration)
{
    m_totalDuration = _totalDuration;
    m_totalDurationHasBeenSet = true;
}

bool ASRStat::TotalDurationHasBeenSet() const
{
    return m_totalDurationHasBeenSet;
}

int64_t ASRStat::GetVadNum() const
{
    return m_vadNum;
}

void ASRStat::SetVadNum(const int64_t& _vadNum)
{
    m_vadNum = _vadNum;
    m_vadNumHasBeenSet = true;
}

bool ASRStat::VadNumHasBeenSet() const
{
    return m_vadNumHasBeenSet;
}

int64_t ASRStat::GetWordNum() const
{
    return m_wordNum;
}

void ASRStat::SetWordNum(const int64_t& _wordNum)
{
    m_wordNum = _wordNum;
    m_wordNumHasBeenSet = true;
}

bool ASRStat::WordNumHasBeenSet() const
{
    return m_wordNumHasBeenSet;
}

