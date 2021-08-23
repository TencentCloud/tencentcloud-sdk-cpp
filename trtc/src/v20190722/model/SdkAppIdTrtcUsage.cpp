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

#include <tencentcloud/trtc/v20190722/model/SdkAppIdTrtcUsage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

SdkAppIdTrtcUsage::SdkAppIdTrtcUsage() :
    m_timeKeyHasBeenSet(false),
    m_audioTimeHasBeenSet(false),
    m_audioVideoTimeHasBeenSet(false),
    m_videoTimeSdHasBeenSet(false),
    m_videoTimeHdHasBeenSet(false),
    m_videoTimeHdpHasBeenSet(false)
{
}

CoreInternalOutcome SdkAppIdTrtcUsage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TimeKey") && !value["TimeKey"].IsNull())
    {
        if (!value["TimeKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SdkAppIdTrtcUsage.TimeKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeKey = string(value["TimeKey"].GetString());
        m_timeKeyHasBeenSet = true;
    }

    if (value.HasMember("AudioTime") && !value["AudioTime"].IsNull())
    {
        if (!value["AudioTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SdkAppIdTrtcUsage.AudioTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_audioTime = value["AudioTime"].GetUint64();
        m_audioTimeHasBeenSet = true;
    }

    if (value.HasMember("AudioVideoTime") && !value["AudioVideoTime"].IsNull())
    {
        if (!value["AudioVideoTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SdkAppIdTrtcUsage.AudioVideoTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_audioVideoTime = value["AudioVideoTime"].GetUint64();
        m_audioVideoTimeHasBeenSet = true;
    }

    if (value.HasMember("VideoTimeSd") && !value["VideoTimeSd"].IsNull())
    {
        if (!value["VideoTimeSd"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SdkAppIdTrtcUsage.VideoTimeSd` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_videoTimeSd = value["VideoTimeSd"].GetUint64();
        m_videoTimeSdHasBeenSet = true;
    }

    if (value.HasMember("VideoTimeHd") && !value["VideoTimeHd"].IsNull())
    {
        if (!value["VideoTimeHd"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SdkAppIdTrtcUsage.VideoTimeHd` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_videoTimeHd = value["VideoTimeHd"].GetUint64();
        m_videoTimeHdHasBeenSet = true;
    }

    if (value.HasMember("VideoTimeHdp") && !value["VideoTimeHdp"].IsNull())
    {
        if (!value["VideoTimeHdp"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SdkAppIdTrtcUsage.VideoTimeHdp` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_videoTimeHdp = value["VideoTimeHdp"].GetUint64();
        m_videoTimeHdpHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SdkAppIdTrtcUsage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_audioVideoTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioVideoTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_audioVideoTime, allocator);
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

    if (m_videoTimeHdpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoTimeHdp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_videoTimeHdp, allocator);
    }

}


string SdkAppIdTrtcUsage::GetTimeKey() const
{
    return m_timeKey;
}

void SdkAppIdTrtcUsage::SetTimeKey(const string& _timeKey)
{
    m_timeKey = _timeKey;
    m_timeKeyHasBeenSet = true;
}

bool SdkAppIdTrtcUsage::TimeKeyHasBeenSet() const
{
    return m_timeKeyHasBeenSet;
}

uint64_t SdkAppIdTrtcUsage::GetAudioTime() const
{
    return m_audioTime;
}

void SdkAppIdTrtcUsage::SetAudioTime(const uint64_t& _audioTime)
{
    m_audioTime = _audioTime;
    m_audioTimeHasBeenSet = true;
}

bool SdkAppIdTrtcUsage::AudioTimeHasBeenSet() const
{
    return m_audioTimeHasBeenSet;
}

uint64_t SdkAppIdTrtcUsage::GetAudioVideoTime() const
{
    return m_audioVideoTime;
}

void SdkAppIdTrtcUsage::SetAudioVideoTime(const uint64_t& _audioVideoTime)
{
    m_audioVideoTime = _audioVideoTime;
    m_audioVideoTimeHasBeenSet = true;
}

bool SdkAppIdTrtcUsage::AudioVideoTimeHasBeenSet() const
{
    return m_audioVideoTimeHasBeenSet;
}

uint64_t SdkAppIdTrtcUsage::GetVideoTimeSd() const
{
    return m_videoTimeSd;
}

void SdkAppIdTrtcUsage::SetVideoTimeSd(const uint64_t& _videoTimeSd)
{
    m_videoTimeSd = _videoTimeSd;
    m_videoTimeSdHasBeenSet = true;
}

bool SdkAppIdTrtcUsage::VideoTimeSdHasBeenSet() const
{
    return m_videoTimeSdHasBeenSet;
}

uint64_t SdkAppIdTrtcUsage::GetVideoTimeHd() const
{
    return m_videoTimeHd;
}

void SdkAppIdTrtcUsage::SetVideoTimeHd(const uint64_t& _videoTimeHd)
{
    m_videoTimeHd = _videoTimeHd;
    m_videoTimeHdHasBeenSet = true;
}

bool SdkAppIdTrtcUsage::VideoTimeHdHasBeenSet() const
{
    return m_videoTimeHdHasBeenSet;
}

uint64_t SdkAppIdTrtcUsage::GetVideoTimeHdp() const
{
    return m_videoTimeHdp;
}

void SdkAppIdTrtcUsage::SetVideoTimeHdp(const uint64_t& _videoTimeHdp)
{
    m_videoTimeHdp = _videoTimeHdp;
    m_videoTimeHdpHasBeenSet = true;
}

bool SdkAppIdTrtcUsage::VideoTimeHdpHasBeenSet() const
{
    return m_videoTimeHdpHasBeenSet;
}

