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

#include <tencentcloud/cme/v20191029/model/MediaCastVideoSetting.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

MediaCastVideoSetting::MediaCastVideoSetting() :
    m_widthHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_bitrateHasBeenSet(false),
    m_frameRateHasBeenSet(false)
{
}

CoreInternalOutcome MediaCastVideoSetting::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MediaCastVideoSetting.Width` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_width = value["Width"].GetInt64();
        m_widthHasBeenSet = true;
    }

    if (value.HasMember("Height") && !value["Height"].IsNull())
    {
        if (!value["Height"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MediaCastVideoSetting.Height` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_height = value["Height"].GetInt64();
        m_heightHasBeenSet = true;
    }

    if (value.HasMember("Bitrate") && !value["Bitrate"].IsNull())
    {
        if (!value["Bitrate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MediaCastVideoSetting.Bitrate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bitrate = value["Bitrate"].GetInt64();
        m_bitrateHasBeenSet = true;
    }

    if (value.HasMember("FrameRate") && !value["FrameRate"].IsNull())
    {
        if (!value["FrameRate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MediaCastVideoSetting.FrameRate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_frameRate = value["FrameRate"].GetDouble();
        m_frameRateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaCastVideoSetting::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_bitrateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bitrate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bitrate, allocator);
    }

    if (m_frameRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrameRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_frameRate, allocator);
    }

}


int64_t MediaCastVideoSetting::GetWidth() const
{
    return m_width;
}

void MediaCastVideoSetting::SetWidth(const int64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool MediaCastVideoSetting::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

int64_t MediaCastVideoSetting::GetHeight() const
{
    return m_height;
}

void MediaCastVideoSetting::SetHeight(const int64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool MediaCastVideoSetting::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

int64_t MediaCastVideoSetting::GetBitrate() const
{
    return m_bitrate;
}

void MediaCastVideoSetting::SetBitrate(const int64_t& _bitrate)
{
    m_bitrate = _bitrate;
    m_bitrateHasBeenSet = true;
}

bool MediaCastVideoSetting::BitrateHasBeenSet() const
{
    return m_bitrateHasBeenSet;
}

double MediaCastVideoSetting::GetFrameRate() const
{
    return m_frameRate;
}

void MediaCastVideoSetting::SetFrameRate(const double& _frameRate)
{
    m_frameRate = _frameRate;
    m_frameRateHasBeenSet = true;
}

bool MediaCastVideoSetting::FrameRateHasBeenSet() const
{
    return m_frameRateHasBeenSet;
}

