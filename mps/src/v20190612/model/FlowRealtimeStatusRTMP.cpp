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

#include <tencentcloud/mps/v20190612/model/FlowRealtimeStatusRTMP.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

FlowRealtimeStatusRTMP::FlowRealtimeStatusRTMP() :
    m_videoFPSHasBeenSet(false),
    m_audioFPSHasBeenSet(false)
{
}

CoreInternalOutcome FlowRealtimeStatusRTMP::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VideoFPS") && !value["VideoFPS"].IsNull())
    {
        if (!value["VideoFPS"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowRealtimeStatusRTMP.VideoFPS` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_videoFPS = value["VideoFPS"].GetInt64();
        m_videoFPSHasBeenSet = true;
    }

    if (value.HasMember("AudioFPS") && !value["AudioFPS"].IsNull())
    {
        if (!value["AudioFPS"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowRealtimeStatusRTMP.AudioFPS` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_audioFPS = value["AudioFPS"].GetInt64();
        m_audioFPSHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FlowRealtimeStatusRTMP::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_videoFPSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoFPS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_videoFPS, allocator);
    }

    if (m_audioFPSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioFPS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_audioFPS, allocator);
    }

}


int64_t FlowRealtimeStatusRTMP::GetVideoFPS() const
{
    return m_videoFPS;
}

void FlowRealtimeStatusRTMP::SetVideoFPS(const int64_t& _videoFPS)
{
    m_videoFPS = _videoFPS;
    m_videoFPSHasBeenSet = true;
}

bool FlowRealtimeStatusRTMP::VideoFPSHasBeenSet() const
{
    return m_videoFPSHasBeenSet;
}

int64_t FlowRealtimeStatusRTMP::GetAudioFPS() const
{
    return m_audioFPS;
}

void FlowRealtimeStatusRTMP::SetAudioFPS(const int64_t& _audioFPS)
{
    m_audioFPS = _audioFPS;
    m_audioFPSHasBeenSet = true;
}

bool FlowRealtimeStatusRTMP::AudioFPSHasBeenSet() const
{
    return m_audioFPSHasBeenSet;
}

