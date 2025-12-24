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

#include <tencentcloud/live/v20180801/model/TurnPushInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

TurnPushInfo::TurnPushInfo() :
    m_videoFpsHasBeenSet(false),
    m_audioFpsHasBeenSet(false),
    m_videoRateHasBeenSet(false),
    m_audioRateHasBeenSet(false),
    m_streamFlagHasBeenSet(false),
    m_timeHasBeenSet(false)
{
}

CoreInternalOutcome TurnPushInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VideoFps") && !value["VideoFps"].IsNull())
    {
        if (!value["VideoFps"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TurnPushInfo.VideoFps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_videoFps = value["VideoFps"].GetInt64();
        m_videoFpsHasBeenSet = true;
    }

    if (value.HasMember("AudioFps") && !value["AudioFps"].IsNull())
    {
        if (!value["AudioFps"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TurnPushInfo.AudioFps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_audioFps = value["AudioFps"].GetInt64();
        m_audioFpsHasBeenSet = true;
    }

    if (value.HasMember("VideoRate") && !value["VideoRate"].IsNull())
    {
        if (!value["VideoRate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TurnPushInfo.VideoRate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_videoRate = value["VideoRate"].GetInt64();
        m_videoRateHasBeenSet = true;
    }

    if (value.HasMember("AudioRate") && !value["AudioRate"].IsNull())
    {
        if (!value["AudioRate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TurnPushInfo.AudioRate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_audioRate = value["AudioRate"].GetInt64();
        m_audioRateHasBeenSet = true;
    }

    if (value.HasMember("StreamFlag") && !value["StreamFlag"].IsNull())
    {
        if (!value["StreamFlag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TurnPushInfo.StreamFlag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_streamFlag = string(value["StreamFlag"].GetString());
        m_streamFlagHasBeenSet = true;
    }

    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TurnPushInfo.Time` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_time = string(value["Time"].GetString());
        m_timeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TurnPushInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_videoFpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoFps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_videoFps, allocator);
    }

    if (m_audioFpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioFps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_audioFps, allocator);
    }

    if (m_videoRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_videoRate, allocator);
    }

    if (m_audioRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_audioRate, allocator);
    }

    if (m_streamFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_streamFlag.c_str(), allocator).Move(), allocator);
    }

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_time.c_str(), allocator).Move(), allocator);
    }

}


int64_t TurnPushInfo::GetVideoFps() const
{
    return m_videoFps;
}

void TurnPushInfo::SetVideoFps(const int64_t& _videoFps)
{
    m_videoFps = _videoFps;
    m_videoFpsHasBeenSet = true;
}

bool TurnPushInfo::VideoFpsHasBeenSet() const
{
    return m_videoFpsHasBeenSet;
}

int64_t TurnPushInfo::GetAudioFps() const
{
    return m_audioFps;
}

void TurnPushInfo::SetAudioFps(const int64_t& _audioFps)
{
    m_audioFps = _audioFps;
    m_audioFpsHasBeenSet = true;
}

bool TurnPushInfo::AudioFpsHasBeenSet() const
{
    return m_audioFpsHasBeenSet;
}

int64_t TurnPushInfo::GetVideoRate() const
{
    return m_videoRate;
}

void TurnPushInfo::SetVideoRate(const int64_t& _videoRate)
{
    m_videoRate = _videoRate;
    m_videoRateHasBeenSet = true;
}

bool TurnPushInfo::VideoRateHasBeenSet() const
{
    return m_videoRateHasBeenSet;
}

int64_t TurnPushInfo::GetAudioRate() const
{
    return m_audioRate;
}

void TurnPushInfo::SetAudioRate(const int64_t& _audioRate)
{
    m_audioRate = _audioRate;
    m_audioRateHasBeenSet = true;
}

bool TurnPushInfo::AudioRateHasBeenSet() const
{
    return m_audioRateHasBeenSet;
}

string TurnPushInfo::GetStreamFlag() const
{
    return m_streamFlag;
}

void TurnPushInfo::SetStreamFlag(const string& _streamFlag)
{
    m_streamFlag = _streamFlag;
    m_streamFlagHasBeenSet = true;
}

bool TurnPushInfo::StreamFlagHasBeenSet() const
{
    return m_streamFlagHasBeenSet;
}

string TurnPushInfo::GetTime() const
{
    return m_time;
}

void TurnPushInfo::SetTime(const string& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool TurnPushInfo::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

