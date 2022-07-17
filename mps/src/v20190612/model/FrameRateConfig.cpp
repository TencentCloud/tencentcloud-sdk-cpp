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

#include <tencentcloud/mps/v20190612/model/FrameRateConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

FrameRateConfig::FrameRateConfig() :
    m_switchHasBeenSet(false),
    m_fpsHasBeenSet(false)
{
}

CoreInternalOutcome FrameRateConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FrameRateConfig.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("Fps") && !value["Fps"].IsNull())
    {
        if (!value["Fps"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FrameRateConfig.Fps` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_fps = value["Fps"].GetUint64();
        m_fpsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FrameRateConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_fpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fps, allocator);
    }

}


string FrameRateConfig::GetSwitch() const
{
    return m_switch;
}

void FrameRateConfig::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool FrameRateConfig::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

uint64_t FrameRateConfig::GetFps() const
{
    return m_fps;
}

void FrameRateConfig::SetFps(const uint64_t& _fps)
{
    m_fps = _fps;
    m_fpsHasBeenSet = true;
}

bool FrameRateConfig::FpsHasBeenSet() const
{
    return m_fpsHasBeenSet;
}

