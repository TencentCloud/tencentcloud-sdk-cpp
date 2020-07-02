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

#include <tencentcloud/trtc/v20190722/model/EncodeParams.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace rapidjson;
using namespace std;

EncodeParams::EncodeParams() :
    m_audioSampleRateHasBeenSet(false),
    m_audioBitrateHasBeenSet(false),
    m_audioChannelsHasBeenSet(false),
    m_videoWidthHasBeenSet(false),
    m_videoHeightHasBeenSet(false),
    m_videoBitrateHasBeenSet(false),
    m_videoFramerateHasBeenSet(false),
    m_videoGopHasBeenSet(false),
    m_backgroundColorHasBeenSet(false),
    m_backgroundImageIdHasBeenSet(false)
{
}

CoreInternalOutcome EncodeParams::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("AudioSampleRate") && !value["AudioSampleRate"].IsNull())
    {
        if (!value["AudioSampleRate"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `EncodeParams.AudioSampleRate` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_audioSampleRate = value["AudioSampleRate"].GetUint64();
        m_audioSampleRateHasBeenSet = true;
    }

    if (value.HasMember("AudioBitrate") && !value["AudioBitrate"].IsNull())
    {
        if (!value["AudioBitrate"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `EncodeParams.AudioBitrate` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_audioBitrate = value["AudioBitrate"].GetUint64();
        m_audioBitrateHasBeenSet = true;
    }

    if (value.HasMember("AudioChannels") && !value["AudioChannels"].IsNull())
    {
        if (!value["AudioChannels"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `EncodeParams.AudioChannels` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_audioChannels = value["AudioChannels"].GetUint64();
        m_audioChannelsHasBeenSet = true;
    }

    if (value.HasMember("VideoWidth") && !value["VideoWidth"].IsNull())
    {
        if (!value["VideoWidth"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `EncodeParams.VideoWidth` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_videoWidth = value["VideoWidth"].GetUint64();
        m_videoWidthHasBeenSet = true;
    }

    if (value.HasMember("VideoHeight") && !value["VideoHeight"].IsNull())
    {
        if (!value["VideoHeight"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `EncodeParams.VideoHeight` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_videoHeight = value["VideoHeight"].GetUint64();
        m_videoHeightHasBeenSet = true;
    }

    if (value.HasMember("VideoBitrate") && !value["VideoBitrate"].IsNull())
    {
        if (!value["VideoBitrate"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `EncodeParams.VideoBitrate` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_videoBitrate = value["VideoBitrate"].GetUint64();
        m_videoBitrateHasBeenSet = true;
    }

    if (value.HasMember("VideoFramerate") && !value["VideoFramerate"].IsNull())
    {
        if (!value["VideoFramerate"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `EncodeParams.VideoFramerate` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_videoFramerate = value["VideoFramerate"].GetUint64();
        m_videoFramerateHasBeenSet = true;
    }

    if (value.HasMember("VideoGop") && !value["VideoGop"].IsNull())
    {
        if (!value["VideoGop"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `EncodeParams.VideoGop` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_videoGop = value["VideoGop"].GetUint64();
        m_videoGopHasBeenSet = true;
    }

    if (value.HasMember("BackgroundColor") && !value["BackgroundColor"].IsNull())
    {
        if (!value["BackgroundColor"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `EncodeParams.BackgroundColor` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_backgroundColor = value["BackgroundColor"].GetUint64();
        m_backgroundColorHasBeenSet = true;
    }

    if (value.HasMember("BackgroundImageId") && !value["BackgroundImageId"].IsNull())
    {
        if (!value["BackgroundImageId"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `EncodeParams.BackgroundImageId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_backgroundImageId = value["BackgroundImageId"].GetUint64();
        m_backgroundImageIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EncodeParams::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_audioSampleRateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AudioSampleRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_audioSampleRate, allocator);
    }

    if (m_audioBitrateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AudioBitrate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_audioBitrate, allocator);
    }

    if (m_audioChannelsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AudioChannels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_audioChannels, allocator);
    }

    if (m_videoWidthHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VideoWidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_videoWidth, allocator);
    }

    if (m_videoHeightHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VideoHeight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_videoHeight, allocator);
    }

    if (m_videoBitrateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VideoBitrate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_videoBitrate, allocator);
    }

    if (m_videoFramerateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VideoFramerate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_videoFramerate, allocator);
    }

    if (m_videoGopHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VideoGop";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_videoGop, allocator);
    }

    if (m_backgroundColorHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BackgroundColor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backgroundColor, allocator);
    }

    if (m_backgroundImageIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BackgroundImageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backgroundImageId, allocator);
    }

}


uint64_t EncodeParams::GetAudioSampleRate() const
{
    return m_audioSampleRate;
}

void EncodeParams::SetAudioSampleRate(const uint64_t& _audioSampleRate)
{
    m_audioSampleRate = _audioSampleRate;
    m_audioSampleRateHasBeenSet = true;
}

bool EncodeParams::AudioSampleRateHasBeenSet() const
{
    return m_audioSampleRateHasBeenSet;
}

uint64_t EncodeParams::GetAudioBitrate() const
{
    return m_audioBitrate;
}

void EncodeParams::SetAudioBitrate(const uint64_t& _audioBitrate)
{
    m_audioBitrate = _audioBitrate;
    m_audioBitrateHasBeenSet = true;
}

bool EncodeParams::AudioBitrateHasBeenSet() const
{
    return m_audioBitrateHasBeenSet;
}

uint64_t EncodeParams::GetAudioChannels() const
{
    return m_audioChannels;
}

void EncodeParams::SetAudioChannels(const uint64_t& _audioChannels)
{
    m_audioChannels = _audioChannels;
    m_audioChannelsHasBeenSet = true;
}

bool EncodeParams::AudioChannelsHasBeenSet() const
{
    return m_audioChannelsHasBeenSet;
}

uint64_t EncodeParams::GetVideoWidth() const
{
    return m_videoWidth;
}

void EncodeParams::SetVideoWidth(const uint64_t& _videoWidth)
{
    m_videoWidth = _videoWidth;
    m_videoWidthHasBeenSet = true;
}

bool EncodeParams::VideoWidthHasBeenSet() const
{
    return m_videoWidthHasBeenSet;
}

uint64_t EncodeParams::GetVideoHeight() const
{
    return m_videoHeight;
}

void EncodeParams::SetVideoHeight(const uint64_t& _videoHeight)
{
    m_videoHeight = _videoHeight;
    m_videoHeightHasBeenSet = true;
}

bool EncodeParams::VideoHeightHasBeenSet() const
{
    return m_videoHeightHasBeenSet;
}

uint64_t EncodeParams::GetVideoBitrate() const
{
    return m_videoBitrate;
}

void EncodeParams::SetVideoBitrate(const uint64_t& _videoBitrate)
{
    m_videoBitrate = _videoBitrate;
    m_videoBitrateHasBeenSet = true;
}

bool EncodeParams::VideoBitrateHasBeenSet() const
{
    return m_videoBitrateHasBeenSet;
}

uint64_t EncodeParams::GetVideoFramerate() const
{
    return m_videoFramerate;
}

void EncodeParams::SetVideoFramerate(const uint64_t& _videoFramerate)
{
    m_videoFramerate = _videoFramerate;
    m_videoFramerateHasBeenSet = true;
}

bool EncodeParams::VideoFramerateHasBeenSet() const
{
    return m_videoFramerateHasBeenSet;
}

uint64_t EncodeParams::GetVideoGop() const
{
    return m_videoGop;
}

void EncodeParams::SetVideoGop(const uint64_t& _videoGop)
{
    m_videoGop = _videoGop;
    m_videoGopHasBeenSet = true;
}

bool EncodeParams::VideoGopHasBeenSet() const
{
    return m_videoGopHasBeenSet;
}

uint64_t EncodeParams::GetBackgroundColor() const
{
    return m_backgroundColor;
}

void EncodeParams::SetBackgroundColor(const uint64_t& _backgroundColor)
{
    m_backgroundColor = _backgroundColor;
    m_backgroundColorHasBeenSet = true;
}

bool EncodeParams::BackgroundColorHasBeenSet() const
{
    return m_backgroundColorHasBeenSet;
}

uint64_t EncodeParams::GetBackgroundImageId() const
{
    return m_backgroundImageId;
}

void EncodeParams::SetBackgroundImageId(const uint64_t& _backgroundImageId)
{
    m_backgroundImageId = _backgroundImageId;
    m_backgroundImageIdHasBeenSet = true;
}

bool EncodeParams::BackgroundImageIdHasBeenSet() const
{
    return m_backgroundImageIdHasBeenSet;
}

