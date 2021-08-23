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

#include <tencentcloud/vm/v20200709/model/MediaInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vm::V20200709::Model;
using namespace std;

MediaInfo::MediaInfo() :
    m_codecsHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_heightHasBeenSet(false)
{
}

CoreInternalOutcome MediaInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Codecs") && !value["Codecs"].IsNull())
    {
        if (!value["Codecs"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaInfo.Codecs` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codecs = string(value["Codecs"].GetString());
        m_codecsHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MediaInfo.Duration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetInt64();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MediaInfo.Width` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_width = value["Width"].GetInt64();
        m_widthHasBeenSet = true;
    }

    if (value.HasMember("Height") && !value["Height"].IsNull())
    {
        if (!value["Height"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MediaInfo.Height` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_height = value["Height"].GetInt64();
        m_heightHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_codecsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Codecs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_codecs.c_str(), allocator).Move(), allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

    if (m_widthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Width";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_width, allocator);
    }

    if (m_heightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Height";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_height, allocator);
    }

}


string MediaInfo::GetCodecs() const
{
    return m_codecs;
}

void MediaInfo::SetCodecs(const string& _codecs)
{
    m_codecs = _codecs;
    m_codecsHasBeenSet = true;
}

bool MediaInfo::CodecsHasBeenSet() const
{
    return m_codecsHasBeenSet;
}

int64_t MediaInfo::GetDuration() const
{
    return m_duration;
}

void MediaInfo::SetDuration(const int64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool MediaInfo::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

int64_t MediaInfo::GetWidth() const
{
    return m_width;
}

void MediaInfo::SetWidth(const int64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool MediaInfo::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

int64_t MediaInfo::GetHeight() const
{
    return m_height;
}

void MediaInfo::SetHeight(const int64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool MediaInfo::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

