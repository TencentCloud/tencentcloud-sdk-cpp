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

#include <tencentcloud/vod/v20180717/model/AudioSeparateInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

AudioSeparateInfo::AudioSeparateInfo() :
    m_switchHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_trackHasBeenSet(false)
{
}

CoreInternalOutcome AudioSeparateInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AudioSeparateInfo.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AudioSeparateInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Track") && !value["Track"].IsNull())
    {
        if (!value["Track"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AudioSeparateInfo.Track` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_track = string(value["Track"].GetString());
        m_trackHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AudioSeparateInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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


string AudioSeparateInfo::GetSwitch() const
{
    return m_switch;
}

void AudioSeparateInfo::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool AudioSeparateInfo::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

string AudioSeparateInfo::GetType() const
{
    return m_type;
}

void AudioSeparateInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool AudioSeparateInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string AudioSeparateInfo::GetTrack() const
{
    return m_track;
}

void AudioSeparateInfo::SetTrack(const string& _track)
{
    m_track = _track;
    m_trackHasBeenSet = true;
}

bool AudioSeparateInfo::TrackHasBeenSet() const
{
    return m_trackHasBeenSet;
}

