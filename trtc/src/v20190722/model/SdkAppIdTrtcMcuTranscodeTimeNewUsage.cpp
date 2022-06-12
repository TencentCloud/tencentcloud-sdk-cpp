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

#include <tencentcloud/trtc/v20190722/model/SdkAppIdTrtcMcuTranscodeTimeNewUsage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

SdkAppIdTrtcMcuTranscodeTimeNewUsage::SdkAppIdTrtcMcuTranscodeTimeNewUsage() :
    m_timeKeyHasBeenSet(false),
    m_audioTimeHasBeenSet(false),
    m_videoTimeH264SDHasBeenSet(false),
    m_videoTimeH264HDHasBeenSet(false),
    m_videoTimeH264FHDHasBeenSet(false),
    m_fluxHasBeenSet(false),
    m_videoTimeH2642KHasBeenSet(false),
    m_videoTimeH2644KHasBeenSet(false),
    m_videoTimeH265SDHasBeenSet(false),
    m_videoTimeH265HDHasBeenSet(false),
    m_videoTimeH265FHDHasBeenSet(false),
    m_videoTimeH2652KHasBeenSet(false),
    m_videoTimeH2654KHasBeenSet(false)
{
}

CoreInternalOutcome SdkAppIdTrtcMcuTranscodeTimeNewUsage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TimeKey") && !value["TimeKey"].IsNull())
    {
        if (!value["TimeKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SdkAppIdTrtcMcuTranscodeTimeNewUsage.TimeKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeKey = string(value["TimeKey"].GetString());
        m_timeKeyHasBeenSet = true;
    }

    if (value.HasMember("AudioTime") && !value["AudioTime"].IsNull())
    {
        if (!value["AudioTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SdkAppIdTrtcMcuTranscodeTimeNewUsage.AudioTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_audioTime = value["AudioTime"].GetUint64();
        m_audioTimeHasBeenSet = true;
    }

    if (value.HasMember("VideoTimeH264SD") && !value["VideoTimeH264SD"].IsNull())
    {
        if (!value["VideoTimeH264SD"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SdkAppIdTrtcMcuTranscodeTimeNewUsage.VideoTimeH264SD` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_videoTimeH264SD = value["VideoTimeH264SD"].GetUint64();
        m_videoTimeH264SDHasBeenSet = true;
    }

    if (value.HasMember("VideoTimeH264HD") && !value["VideoTimeH264HD"].IsNull())
    {
        if (!value["VideoTimeH264HD"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SdkAppIdTrtcMcuTranscodeTimeNewUsage.VideoTimeH264HD` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_videoTimeH264HD = value["VideoTimeH264HD"].GetUint64();
        m_videoTimeH264HDHasBeenSet = true;
    }

    if (value.HasMember("VideoTimeH264FHD") && !value["VideoTimeH264FHD"].IsNull())
    {
        if (!value["VideoTimeH264FHD"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SdkAppIdTrtcMcuTranscodeTimeNewUsage.VideoTimeH264FHD` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_videoTimeH264FHD = value["VideoTimeH264FHD"].GetUint64();
        m_videoTimeH264FHDHasBeenSet = true;
    }

    if (value.HasMember("Flux") && !value["Flux"].IsNull())
    {
        if (!value["Flux"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SdkAppIdTrtcMcuTranscodeTimeNewUsage.Flux` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_flux = value["Flux"].GetDouble();
        m_fluxHasBeenSet = true;
    }

    if (value.HasMember("VideoTimeH2642K") && !value["VideoTimeH2642K"].IsNull())
    {
        if (!value["VideoTimeH2642K"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SdkAppIdTrtcMcuTranscodeTimeNewUsage.VideoTimeH2642K` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_videoTimeH2642K = value["VideoTimeH2642K"].GetUint64();
        m_videoTimeH2642KHasBeenSet = true;
    }

    if (value.HasMember("VideoTimeH2644K") && !value["VideoTimeH2644K"].IsNull())
    {
        if (!value["VideoTimeH2644K"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SdkAppIdTrtcMcuTranscodeTimeNewUsage.VideoTimeH2644K` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_videoTimeH2644K = value["VideoTimeH2644K"].GetUint64();
        m_videoTimeH2644KHasBeenSet = true;
    }

    if (value.HasMember("VideoTimeH265SD") && !value["VideoTimeH265SD"].IsNull())
    {
        if (!value["VideoTimeH265SD"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SdkAppIdTrtcMcuTranscodeTimeNewUsage.VideoTimeH265SD` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_videoTimeH265SD = value["VideoTimeH265SD"].GetUint64();
        m_videoTimeH265SDHasBeenSet = true;
    }

    if (value.HasMember("VideoTimeH265HD") && !value["VideoTimeH265HD"].IsNull())
    {
        if (!value["VideoTimeH265HD"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SdkAppIdTrtcMcuTranscodeTimeNewUsage.VideoTimeH265HD` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_videoTimeH265HD = value["VideoTimeH265HD"].GetUint64();
        m_videoTimeH265HDHasBeenSet = true;
    }

    if (value.HasMember("VideoTimeH265FHD") && !value["VideoTimeH265FHD"].IsNull())
    {
        if (!value["VideoTimeH265FHD"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SdkAppIdTrtcMcuTranscodeTimeNewUsage.VideoTimeH265FHD` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_videoTimeH265FHD = value["VideoTimeH265FHD"].GetUint64();
        m_videoTimeH265FHDHasBeenSet = true;
    }

    if (value.HasMember("VideoTimeH2652K") && !value["VideoTimeH2652K"].IsNull())
    {
        if (!value["VideoTimeH2652K"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SdkAppIdTrtcMcuTranscodeTimeNewUsage.VideoTimeH2652K` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_videoTimeH2652K = value["VideoTimeH2652K"].GetUint64();
        m_videoTimeH2652KHasBeenSet = true;
    }

    if (value.HasMember("VideoTimeH2654K") && !value["VideoTimeH2654K"].IsNull())
    {
        if (!value["VideoTimeH2654K"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SdkAppIdTrtcMcuTranscodeTimeNewUsage.VideoTimeH2654K` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_videoTimeH2654K = value["VideoTimeH2654K"].GetUint64();
        m_videoTimeH2654KHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SdkAppIdTrtcMcuTranscodeTimeNewUsage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_videoTimeH264SDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoTimeH264SD";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_videoTimeH264SD, allocator);
    }

    if (m_videoTimeH264HDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoTimeH264HD";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_videoTimeH264HD, allocator);
    }

    if (m_videoTimeH264FHDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoTimeH264FHD";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_videoTimeH264FHD, allocator);
    }

    if (m_fluxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Flux";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_flux, allocator);
    }

    if (m_videoTimeH2642KHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoTimeH2642K";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_videoTimeH2642K, allocator);
    }

    if (m_videoTimeH2644KHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoTimeH2644K";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_videoTimeH2644K, allocator);
    }

    if (m_videoTimeH265SDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoTimeH265SD";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_videoTimeH265SD, allocator);
    }

    if (m_videoTimeH265HDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoTimeH265HD";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_videoTimeH265HD, allocator);
    }

    if (m_videoTimeH265FHDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoTimeH265FHD";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_videoTimeH265FHD, allocator);
    }

    if (m_videoTimeH2652KHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoTimeH2652K";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_videoTimeH2652K, allocator);
    }

    if (m_videoTimeH2654KHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoTimeH2654K";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_videoTimeH2654K, allocator);
    }

}


string SdkAppIdTrtcMcuTranscodeTimeNewUsage::GetTimeKey() const
{
    return m_timeKey;
}

void SdkAppIdTrtcMcuTranscodeTimeNewUsage::SetTimeKey(const string& _timeKey)
{
    m_timeKey = _timeKey;
    m_timeKeyHasBeenSet = true;
}

bool SdkAppIdTrtcMcuTranscodeTimeNewUsage::TimeKeyHasBeenSet() const
{
    return m_timeKeyHasBeenSet;
}

uint64_t SdkAppIdTrtcMcuTranscodeTimeNewUsage::GetAudioTime() const
{
    return m_audioTime;
}

void SdkAppIdTrtcMcuTranscodeTimeNewUsage::SetAudioTime(const uint64_t& _audioTime)
{
    m_audioTime = _audioTime;
    m_audioTimeHasBeenSet = true;
}

bool SdkAppIdTrtcMcuTranscodeTimeNewUsage::AudioTimeHasBeenSet() const
{
    return m_audioTimeHasBeenSet;
}

uint64_t SdkAppIdTrtcMcuTranscodeTimeNewUsage::GetVideoTimeH264SD() const
{
    return m_videoTimeH264SD;
}

void SdkAppIdTrtcMcuTranscodeTimeNewUsage::SetVideoTimeH264SD(const uint64_t& _videoTimeH264SD)
{
    m_videoTimeH264SD = _videoTimeH264SD;
    m_videoTimeH264SDHasBeenSet = true;
}

bool SdkAppIdTrtcMcuTranscodeTimeNewUsage::VideoTimeH264SDHasBeenSet() const
{
    return m_videoTimeH264SDHasBeenSet;
}

uint64_t SdkAppIdTrtcMcuTranscodeTimeNewUsage::GetVideoTimeH264HD() const
{
    return m_videoTimeH264HD;
}

void SdkAppIdTrtcMcuTranscodeTimeNewUsage::SetVideoTimeH264HD(const uint64_t& _videoTimeH264HD)
{
    m_videoTimeH264HD = _videoTimeH264HD;
    m_videoTimeH264HDHasBeenSet = true;
}

bool SdkAppIdTrtcMcuTranscodeTimeNewUsage::VideoTimeH264HDHasBeenSet() const
{
    return m_videoTimeH264HDHasBeenSet;
}

uint64_t SdkAppIdTrtcMcuTranscodeTimeNewUsage::GetVideoTimeH264FHD() const
{
    return m_videoTimeH264FHD;
}

void SdkAppIdTrtcMcuTranscodeTimeNewUsage::SetVideoTimeH264FHD(const uint64_t& _videoTimeH264FHD)
{
    m_videoTimeH264FHD = _videoTimeH264FHD;
    m_videoTimeH264FHDHasBeenSet = true;
}

bool SdkAppIdTrtcMcuTranscodeTimeNewUsage::VideoTimeH264FHDHasBeenSet() const
{
    return m_videoTimeH264FHDHasBeenSet;
}

double SdkAppIdTrtcMcuTranscodeTimeNewUsage::GetFlux() const
{
    return m_flux;
}

void SdkAppIdTrtcMcuTranscodeTimeNewUsage::SetFlux(const double& _flux)
{
    m_flux = _flux;
    m_fluxHasBeenSet = true;
}

bool SdkAppIdTrtcMcuTranscodeTimeNewUsage::FluxHasBeenSet() const
{
    return m_fluxHasBeenSet;
}

uint64_t SdkAppIdTrtcMcuTranscodeTimeNewUsage::GetVideoTimeH2642K() const
{
    return m_videoTimeH2642K;
}

void SdkAppIdTrtcMcuTranscodeTimeNewUsage::SetVideoTimeH2642K(const uint64_t& _videoTimeH2642K)
{
    m_videoTimeH2642K = _videoTimeH2642K;
    m_videoTimeH2642KHasBeenSet = true;
}

bool SdkAppIdTrtcMcuTranscodeTimeNewUsage::VideoTimeH2642KHasBeenSet() const
{
    return m_videoTimeH2642KHasBeenSet;
}

uint64_t SdkAppIdTrtcMcuTranscodeTimeNewUsage::GetVideoTimeH2644K() const
{
    return m_videoTimeH2644K;
}

void SdkAppIdTrtcMcuTranscodeTimeNewUsage::SetVideoTimeH2644K(const uint64_t& _videoTimeH2644K)
{
    m_videoTimeH2644K = _videoTimeH2644K;
    m_videoTimeH2644KHasBeenSet = true;
}

bool SdkAppIdTrtcMcuTranscodeTimeNewUsage::VideoTimeH2644KHasBeenSet() const
{
    return m_videoTimeH2644KHasBeenSet;
}

uint64_t SdkAppIdTrtcMcuTranscodeTimeNewUsage::GetVideoTimeH265SD() const
{
    return m_videoTimeH265SD;
}

void SdkAppIdTrtcMcuTranscodeTimeNewUsage::SetVideoTimeH265SD(const uint64_t& _videoTimeH265SD)
{
    m_videoTimeH265SD = _videoTimeH265SD;
    m_videoTimeH265SDHasBeenSet = true;
}

bool SdkAppIdTrtcMcuTranscodeTimeNewUsage::VideoTimeH265SDHasBeenSet() const
{
    return m_videoTimeH265SDHasBeenSet;
}

uint64_t SdkAppIdTrtcMcuTranscodeTimeNewUsage::GetVideoTimeH265HD() const
{
    return m_videoTimeH265HD;
}

void SdkAppIdTrtcMcuTranscodeTimeNewUsage::SetVideoTimeH265HD(const uint64_t& _videoTimeH265HD)
{
    m_videoTimeH265HD = _videoTimeH265HD;
    m_videoTimeH265HDHasBeenSet = true;
}

bool SdkAppIdTrtcMcuTranscodeTimeNewUsage::VideoTimeH265HDHasBeenSet() const
{
    return m_videoTimeH265HDHasBeenSet;
}

uint64_t SdkAppIdTrtcMcuTranscodeTimeNewUsage::GetVideoTimeH265FHD() const
{
    return m_videoTimeH265FHD;
}

void SdkAppIdTrtcMcuTranscodeTimeNewUsage::SetVideoTimeH265FHD(const uint64_t& _videoTimeH265FHD)
{
    m_videoTimeH265FHD = _videoTimeH265FHD;
    m_videoTimeH265FHDHasBeenSet = true;
}

bool SdkAppIdTrtcMcuTranscodeTimeNewUsage::VideoTimeH265FHDHasBeenSet() const
{
    return m_videoTimeH265FHDHasBeenSet;
}

uint64_t SdkAppIdTrtcMcuTranscodeTimeNewUsage::GetVideoTimeH2652K() const
{
    return m_videoTimeH2652K;
}

void SdkAppIdTrtcMcuTranscodeTimeNewUsage::SetVideoTimeH2652K(const uint64_t& _videoTimeH2652K)
{
    m_videoTimeH2652K = _videoTimeH2652K;
    m_videoTimeH2652KHasBeenSet = true;
}

bool SdkAppIdTrtcMcuTranscodeTimeNewUsage::VideoTimeH2652KHasBeenSet() const
{
    return m_videoTimeH2652KHasBeenSet;
}

uint64_t SdkAppIdTrtcMcuTranscodeTimeNewUsage::GetVideoTimeH2654K() const
{
    return m_videoTimeH2654K;
}

void SdkAppIdTrtcMcuTranscodeTimeNewUsage::SetVideoTimeH2654K(const uint64_t& _videoTimeH2654K)
{
    m_videoTimeH2654K = _videoTimeH2654K;
    m_videoTimeH2654KHasBeenSet = true;
}

bool SdkAppIdTrtcMcuTranscodeTimeNewUsage::VideoTimeH2654KHasBeenSet() const
{
    return m_videoTimeH2654KHasBeenSet;
}

