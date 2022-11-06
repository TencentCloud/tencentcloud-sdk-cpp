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

#include <tencentcloud/mps/v20190612/model/FlowAudio.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

FlowAudio::FlowAudio() :
    m_fpsHasBeenSet(false),
    m_rateHasBeenSet(false),
    m_pidHasBeenSet(false)
{
}

CoreInternalOutcome FlowAudio::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Fps") && !value["Fps"].IsNull())
    {
        if (!value["Fps"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowAudio.Fps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fps = value["Fps"].GetInt64();
        m_fpsHasBeenSet = true;
    }

    if (value.HasMember("Rate") && !value["Rate"].IsNull())
    {
        if (!value["Rate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowAudio.Rate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rate = value["Rate"].GetInt64();
        m_rateHasBeenSet = true;
    }

    if (value.HasMember("Pid") && !value["Pid"].IsNull())
    {
        if (!value["Pid"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowAudio.Pid` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pid = value["Pid"].GetInt64();
        m_pidHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FlowAudio::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fps, allocator);
    }

    if (m_rateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rate, allocator);
    }

    if (m_pidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pid, allocator);
    }

}


int64_t FlowAudio::GetFps() const
{
    return m_fps;
}

void FlowAudio::SetFps(const int64_t& _fps)
{
    m_fps = _fps;
    m_fpsHasBeenSet = true;
}

bool FlowAudio::FpsHasBeenSet() const
{
    return m_fpsHasBeenSet;
}

int64_t FlowAudio::GetRate() const
{
    return m_rate;
}

void FlowAudio::SetRate(const int64_t& _rate)
{
    m_rate = _rate;
    m_rateHasBeenSet = true;
}

bool FlowAudio::RateHasBeenSet() const
{
    return m_rateHasBeenSet;
}

int64_t FlowAudio::GetPid() const
{
    return m_pid;
}

void FlowAudio::SetPid(const int64_t& _pid)
{
    m_pid = _pid;
    m_pidHasBeenSet = true;
}

bool FlowAudio::PidHasBeenSet() const
{
    return m_pidHasBeenSet;
}

