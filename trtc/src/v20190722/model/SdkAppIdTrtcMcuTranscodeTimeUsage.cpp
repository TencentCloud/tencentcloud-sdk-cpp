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

#include <tencentcloud/trtc/v20190722/model/SdkAppIdTrtcMcuTranscodeTimeUsage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

SdkAppIdTrtcMcuTranscodeTimeUsage::SdkAppIdTrtcMcuTranscodeTimeUsage() :
    m_timeKeyHasBeenSet(false),
    m_audioTimeHasBeenSet(false),
    m_videoTimeSdHasBeenSet(false),
    m_videoTimeHdHasBeenSet(false),
    m_videoTimeFhdHasBeenSet(false),
    m_fluxHasBeenSet(false)
{
}

CoreInternalOutcome SdkAppIdTrtcMcuTranscodeTimeUsage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TimeKey") && !value["TimeKey"].IsNull())
    {
        if (!value["TimeKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SdkAppIdTrtcMcuTranscodeTimeUsage.TimeKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeKey = string(value["TimeKey"].GetString());
        m_timeKeyHasBeenSet = true;
    }

    if (value.HasMember("AudioTime") && !value["AudioTime"].IsNull())
    {
        if (!value["AudioTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SdkAppIdTrtcMcuTranscodeTimeUsage.AudioTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_audioTime = value["AudioTime"].GetUint64();
        m_audioTimeHasBeenSet = true;
    }

    if (value.HasMember("VideoTimeSd") && !value["VideoTimeSd"].IsNull())
    {
        if (!value["VideoTimeSd"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SdkAppIdTrtcMcuTranscodeTimeUsage.VideoTimeSd` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_videoTimeSd = value["VideoTimeSd"].GetUint64();
        m_videoTimeSdHasBeenSet = true;
    }

    if (value.HasMember("VideoTimeHd") && !value["VideoTimeHd"].IsNull())
    {
        if (!value["VideoTimeHd"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SdkAppIdTrtcMcuTranscodeTimeUsage.VideoTimeHd` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_videoTimeHd = value["VideoTimeHd"].GetUint64();
        m_videoTimeHdHasBeenSet = true;
    }

    if (value.HasMember("VideoTimeFhd") && !value["VideoTimeFhd"].IsNull())
    {
        if (!value["VideoTimeFhd"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SdkAppIdTrtcMcuTranscodeTimeUsage.VideoTimeFhd` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_videoTimeFhd = value["VideoTimeFhd"].GetUint64();
        m_videoTimeFhdHasBeenSet = true;
    }

    if (value.HasMember("Flux") && !value["Flux"].IsNull())
    {
        if (!value["Flux"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SdkAppIdTrtcMcuTranscodeTimeUsage.Flux` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_flux = value["Flux"].GetDouble();
        m_fluxHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SdkAppIdTrtcMcuTranscodeTimeUsage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timeKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeKey.c_str(), allocator).Move(), allocator);
    }

    if (m_audioTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_audioTime, allocator);
    }

    if (m_videoTimeSdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoTimeSd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_videoTimeSd, allocator);
    }

    if (m_videoTimeHdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoTimeHd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_videoTimeHd, allocator);
    }

    if (m_videoTimeFhdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoTimeFhd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_videoTimeFhd, allocator);
    }

    if (m_fluxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Flux";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_flux, allocator);
    }

}


string SdkAppIdTrtcMcuTranscodeTimeUsage::GetTimeKey() const
{
    return m_timeKey;
}

void SdkAppIdTrtcMcuTranscodeTimeUsage::SetTimeKey(const string& _timeKey)
{
    m_timeKey = _timeKey;
    m_timeKeyHasBeenSet = true;
}

bool SdkAppIdTrtcMcuTranscodeTimeUsage::TimeKeyHasBeenSet() const
{
    return m_timeKeyHasBeenSet;
}

uint64_t SdkAppIdTrtcMcuTranscodeTimeUsage::GetAudioTime() const
{
    return m_audioTime;
}

void SdkAppIdTrtcMcuTranscodeTimeUsage::SetAudioTime(const uint64_t& _audioTime)
{
    m_audioTime = _audioTime;
    m_audioTimeHasBeenSet = true;
}

bool SdkAppIdTrtcMcuTranscodeTimeUsage::AudioTimeHasBeenSet() const
{
    return m_audioTimeHasBeenSet;
}

uint64_t SdkAppIdTrtcMcuTranscodeTimeUsage::GetVideoTimeSd() const
{
    return m_videoTimeSd;
}

void SdkAppIdTrtcMcuTranscodeTimeUsage::SetVideoTimeSd(const uint64_t& _videoTimeSd)
{
    m_videoTimeSd = _videoTimeSd;
    m_videoTimeSdHasBeenSet = true;
}

bool SdkAppIdTrtcMcuTranscodeTimeUsage::VideoTimeSdHasBeenSet() const
{
    return m_videoTimeSdHasBeenSet;
}

uint64_t SdkAppIdTrtcMcuTranscodeTimeUsage::GetVideoTimeHd() const
{
    return m_videoTimeHd;
}

void SdkAppIdTrtcMcuTranscodeTimeUsage::SetVideoTimeHd(const uint64_t& _videoTimeHd)
{
    m_videoTimeHd = _videoTimeHd;
    m_videoTimeHdHasBeenSet = true;
}

bool SdkAppIdTrtcMcuTranscodeTimeUsage::VideoTimeHdHasBeenSet() const
{
    return m_videoTimeHdHasBeenSet;
}

uint64_t SdkAppIdTrtcMcuTranscodeTimeUsage::GetVideoTimeFhd() const
{
    return m_videoTimeFhd;
}

void SdkAppIdTrtcMcuTranscodeTimeUsage::SetVideoTimeFhd(const uint64_t& _videoTimeFhd)
{
    m_videoTimeFhd = _videoTimeFhd;
    m_videoTimeFhdHasBeenSet = true;
}

bool SdkAppIdTrtcMcuTranscodeTimeUsage::VideoTimeFhdHasBeenSet() const
{
    return m_videoTimeFhdHasBeenSet;
}

double SdkAppIdTrtcMcuTranscodeTimeUsage::GetFlux() const
{
    return m_flux;
}

void SdkAppIdTrtcMcuTranscodeTimeUsage::SetFlux(const double& _flux)
{
    m_flux = _flux;
    m_fluxHasBeenSet = true;
}

bool SdkAppIdTrtcMcuTranscodeTimeUsage::FluxHasBeenSet() const
{
    return m_fluxHasBeenSet;
}

