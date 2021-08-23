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

#include <tencentcloud/bda/v20200324/model/VideoBasicInformation.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bda::V20200324::Model;
using namespace std;

VideoBasicInformation::VideoBasicInformation() :
    m_frameWidthHasBeenSet(false),
    m_frameHeightHasBeenSet(false),
    m_framesPerSecondHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_totalFramesHasBeenSet(false)
{
}

CoreInternalOutcome VideoBasicInformation::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FrameWidth") && !value["FrameWidth"].IsNull())
    {
        if (!value["FrameWidth"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoBasicInformation.FrameWidth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_frameWidth = value["FrameWidth"].GetInt64();
        m_frameWidthHasBeenSet = true;
    }

    if (value.HasMember("FrameHeight") && !value["FrameHeight"].IsNull())
    {
        if (!value["FrameHeight"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoBasicInformation.FrameHeight` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_frameHeight = value["FrameHeight"].GetInt64();
        m_frameHeightHasBeenSet = true;
    }

    if (value.HasMember("FramesPerSecond") && !value["FramesPerSecond"].IsNull())
    {
        if (!value["FramesPerSecond"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoBasicInformation.FramesPerSecond` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_framesPerSecond = value["FramesPerSecond"].GetInt64();
        m_framesPerSecondHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `VideoBasicInformation.Duration` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetDouble();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("TotalFrames") && !value["TotalFrames"].IsNull())
    {
        if (!value["TotalFrames"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoBasicInformation.TotalFrames` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalFrames = value["TotalFrames"].GetInt64();
        m_totalFramesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VideoBasicInformation::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_frameWidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrameWidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_frameWidth, allocator);
    }

    if (m_frameHeightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrameHeight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_frameHeight, allocator);
    }

    if (m_framesPerSecondHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FramesPerSecond";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_framesPerSecond, allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

    if (m_totalFramesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalFrames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalFrames, allocator);
    }

}


int64_t VideoBasicInformation::GetFrameWidth() const
{
    return m_frameWidth;
}

void VideoBasicInformation::SetFrameWidth(const int64_t& _frameWidth)
{
    m_frameWidth = _frameWidth;
    m_frameWidthHasBeenSet = true;
}

bool VideoBasicInformation::FrameWidthHasBeenSet() const
{
    return m_frameWidthHasBeenSet;
}

int64_t VideoBasicInformation::GetFrameHeight() const
{
    return m_frameHeight;
}

void VideoBasicInformation::SetFrameHeight(const int64_t& _frameHeight)
{
    m_frameHeight = _frameHeight;
    m_frameHeightHasBeenSet = true;
}

bool VideoBasicInformation::FrameHeightHasBeenSet() const
{
    return m_frameHeightHasBeenSet;
}

int64_t VideoBasicInformation::GetFramesPerSecond() const
{
    return m_framesPerSecond;
}

void VideoBasicInformation::SetFramesPerSecond(const int64_t& _framesPerSecond)
{
    m_framesPerSecond = _framesPerSecond;
    m_framesPerSecondHasBeenSet = true;
}

bool VideoBasicInformation::FramesPerSecondHasBeenSet() const
{
    return m_framesPerSecondHasBeenSet;
}

double VideoBasicInformation::GetDuration() const
{
    return m_duration;
}

void VideoBasicInformation::SetDuration(const double& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool VideoBasicInformation::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

int64_t VideoBasicInformation::GetTotalFrames() const
{
    return m_totalFrames;
}

void VideoBasicInformation::SetTotalFrames(const int64_t& _totalFrames)
{
    m_totalFrames = _totalFrames;
    m_totalFramesHasBeenSet = true;
}

bool VideoBasicInformation::TotalFramesHasBeenSet() const
{
    return m_totalFramesHasBeenSet;
}

