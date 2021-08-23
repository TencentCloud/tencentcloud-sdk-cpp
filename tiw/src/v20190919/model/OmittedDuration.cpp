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

#include <tencentcloud/tiw/v20190919/model/OmittedDuration.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tiw::V20190919::Model;
using namespace std;

OmittedDuration::OmittedDuration() :
    m_videoTimeHasBeenSet(false),
    m_pauseTimeHasBeenSet(false),
    m_resumeTimeHasBeenSet(false)
{
}

CoreInternalOutcome OmittedDuration::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VideoTime") && !value["VideoTime"].IsNull())
    {
        if (!value["VideoTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OmittedDuration.VideoTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_videoTime = value["VideoTime"].GetInt64();
        m_videoTimeHasBeenSet = true;
    }

    if (value.HasMember("PauseTime") && !value["PauseTime"].IsNull())
    {
        if (!value["PauseTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OmittedDuration.PauseTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pauseTime = value["PauseTime"].GetInt64();
        m_pauseTimeHasBeenSet = true;
    }

    if (value.HasMember("ResumeTime") && !value["ResumeTime"].IsNull())
    {
        if (!value["ResumeTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OmittedDuration.ResumeTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_resumeTime = value["ResumeTime"].GetInt64();
        m_resumeTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OmittedDuration::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_videoTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_videoTime, allocator);
    }

    if (m_pauseTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PauseTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pauseTime, allocator);
    }

    if (m_resumeTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResumeTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resumeTime, allocator);
    }

}


int64_t OmittedDuration::GetVideoTime() const
{
    return m_videoTime;
}

void OmittedDuration::SetVideoTime(const int64_t& _videoTime)
{
    m_videoTime = _videoTime;
    m_videoTimeHasBeenSet = true;
}

bool OmittedDuration::VideoTimeHasBeenSet() const
{
    return m_videoTimeHasBeenSet;
}

int64_t OmittedDuration::GetPauseTime() const
{
    return m_pauseTime;
}

void OmittedDuration::SetPauseTime(const int64_t& _pauseTime)
{
    m_pauseTime = _pauseTime;
    m_pauseTimeHasBeenSet = true;
}

bool OmittedDuration::PauseTimeHasBeenSet() const
{
    return m_pauseTimeHasBeenSet;
}

int64_t OmittedDuration::GetResumeTime() const
{
    return m_resumeTime;
}

void OmittedDuration::SetResumeTime(const int64_t& _resumeTime)
{
    m_resumeTime = _resumeTime;
    m_resumeTimeHasBeenSet = true;
}

bool OmittedDuration::ResumeTimeHasBeenSet() const
{
    return m_resumeTimeHasBeenSet;
}

