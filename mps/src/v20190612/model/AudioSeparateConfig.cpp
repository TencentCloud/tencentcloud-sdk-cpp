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

#include <tencentcloud/mps/v20190612/model/AudioSeparateConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

AudioSeparateConfig::AudioSeparateConfig() :
    m_switchHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_trackHasBeenSet(false)
{
}

CoreInternalOutcome AudioSeparateConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AudioSeparateConfig.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AudioSeparateConfig.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Track") && !value["Track"].IsNull())
    {
        if (!value["Track"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AudioSeparateConfig.Track` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_track = string(value["Track"].GetString());
        m_trackHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AudioSeparateConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_trackHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Track";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_track.c_str(), allocator).Move(), allocator);
    }

}


string AudioSeparateConfig::GetSwitch() const
{
    return m_switch;
}

void AudioSeparateConfig::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool AudioSeparateConfig::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

string AudioSeparateConfig::GetType() const
{
    return m_type;
}

void AudioSeparateConfig::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool AudioSeparateConfig::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string AudioSeparateConfig::GetTrack() const
{
    return m_track;
}

void AudioSeparateConfig::SetTrack(const string& _track)
{
    m_track = _track;
    m_trackHasBeenSet = true;
}

bool AudioSeparateConfig::TrackHasBeenSet() const
{
    return m_trackHasBeenSet;
}

