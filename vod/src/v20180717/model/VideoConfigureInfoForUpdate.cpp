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

#include <tencentcloud/vod/v20180717/model/VideoConfigureInfoForUpdate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

VideoConfigureInfoForUpdate::VideoConfigureInfoForUpdate() :
    m_widthHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_resolutionAdaptiveHasBeenSet(false),
    m_bitrateHasBeenSet(false)
{
}

CoreInternalOutcome VideoConfigureInfoForUpdate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoConfigureInfoForUpdate.Width` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_width = value["Width"].GetInt64();
        m_widthHasBeenSet = true;
    }

    if (value.HasMember("Height") && !value["Height"].IsNull())
    {
        if (!value["Height"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoConfigureInfoForUpdate.Height` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_height = value["Height"].GetInt64();
        m_heightHasBeenSet = true;
    }

    if (value.HasMember("ResolutionAdaptive") && !value["ResolutionAdaptive"].IsNull())
    {
        if (!value["ResolutionAdaptive"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoConfigureInfoForUpdate.ResolutionAdaptive` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resolutionAdaptive = string(value["ResolutionAdaptive"].GetString());
        m_resolutionAdaptiveHasBeenSet = true;
    }

    if (value.HasMember("Bitrate") && !value["Bitrate"].IsNull())
    {
        if (!value["Bitrate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoConfigureInfoForUpdate.Bitrate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bitrate = value["Bitrate"].GetInt64();
        m_bitrateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VideoConfigureInfoForUpdate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_resolutionAdaptiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResolutionAdaptive";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resolutionAdaptive.c_str(), allocator).Move(), allocator);
    }

    if (m_bitrateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bitrate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bitrate, allocator);
    }

}


int64_t VideoConfigureInfoForUpdate::GetWidth() const
{
    return m_width;
}

void VideoConfigureInfoForUpdate::SetWidth(const int64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool VideoConfigureInfoForUpdate::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

int64_t VideoConfigureInfoForUpdate::GetHeight() const
{
    return m_height;
}

void VideoConfigureInfoForUpdate::SetHeight(const int64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool VideoConfigureInfoForUpdate::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

string VideoConfigureInfoForUpdate::GetResolutionAdaptive() const
{
    return m_resolutionAdaptive;
}

void VideoConfigureInfoForUpdate::SetResolutionAdaptive(const string& _resolutionAdaptive)
{
    m_resolutionAdaptive = _resolutionAdaptive;
    m_resolutionAdaptiveHasBeenSet = true;
}

bool VideoConfigureInfoForUpdate::ResolutionAdaptiveHasBeenSet() const
{
    return m_resolutionAdaptiveHasBeenSet;
}

int64_t VideoConfigureInfoForUpdate::GetBitrate() const
{
    return m_bitrate;
}

void VideoConfigureInfoForUpdate::SetBitrate(const int64_t& _bitrate)
{
    m_bitrate = _bitrate;
    m_bitrateHasBeenSet = true;
}

bool VideoConfigureInfoForUpdate::BitrateHasBeenSet() const
{
    return m_bitrateHasBeenSet;
}

