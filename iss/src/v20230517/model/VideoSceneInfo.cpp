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

#include <tencentcloud/iss/v20230517/model/VideoSceneInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

VideoSceneInfo::VideoSceneInfo() :
    m_intervalHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_fpsHasBeenSet(false)
{
}

CoreInternalOutcome VideoSceneInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Interval") && !value["Interval"].IsNull())
    {
        if (!value["Interval"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoSceneInfo.Interval` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_interval = value["Interval"].GetInt64();
        m_intervalHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoSceneInfo.Duration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetInt64();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("Fps") && !value["Fps"].IsNull())
    {
        if (!value["Fps"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `VideoSceneInfo.Fps` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_fps = value["Fps"].GetDouble();
        m_fpsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VideoSceneInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_intervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Interval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_interval, allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

    if (m_fpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fps, allocator);
    }

}


int64_t VideoSceneInfo::GetInterval() const
{
    return m_interval;
}

void VideoSceneInfo::SetInterval(const int64_t& _interval)
{
    m_interval = _interval;
    m_intervalHasBeenSet = true;
}

bool VideoSceneInfo::IntervalHasBeenSet() const
{
    return m_intervalHasBeenSet;
}

int64_t VideoSceneInfo::GetDuration() const
{
    return m_duration;
}

void VideoSceneInfo::SetDuration(const int64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool VideoSceneInfo::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

double VideoSceneInfo::GetFps() const
{
    return m_fps;
}

void VideoSceneInfo::SetFps(const double& _fps)
{
    m_fps = _fps;
    m_fpsHasBeenSet = true;
}

bool VideoSceneInfo::FpsHasBeenSet() const
{
    return m_fpsHasBeenSet;
}

