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

#include <tencentcloud/trtc/v20190722/model/VideoEncode.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

VideoEncode::VideoEncode() :
    m_widthHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_fpsHasBeenSet(false),
    m_bitRateHasBeenSet(false),
    m_gopHasBeenSet(false)
{
}

CoreInternalOutcome VideoEncode::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoEncode.Width` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_width = value["Width"].GetUint64();
        m_widthHasBeenSet = true;
    }

    if (value.HasMember("Height") && !value["Height"].IsNull())
    {
        if (!value["Height"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoEncode.Height` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_height = value["Height"].GetUint64();
        m_heightHasBeenSet = true;
    }

    if (value.HasMember("Fps") && !value["Fps"].IsNull())
    {
        if (!value["Fps"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoEncode.Fps` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_fps = value["Fps"].GetUint64();
        m_fpsHasBeenSet = true;
    }

    if (value.HasMember("BitRate") && !value["BitRate"].IsNull())
    {
        if (!value["BitRate"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoEncode.BitRate` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bitRate = value["BitRate"].GetUint64();
        m_bitRateHasBeenSet = true;
    }

    if (value.HasMember("Gop") && !value["Gop"].IsNull())
    {
        if (!value["Gop"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoEncode.Gop` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_gop = value["Gop"].GetUint64();
        m_gopHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VideoEncode::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_fpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fps, allocator);
    }

    if (m_bitRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BitRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bitRate, allocator);
    }

    if (m_gopHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Gop";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gop, allocator);
    }

}


uint64_t VideoEncode::GetWidth() const
{
    return m_width;
}

void VideoEncode::SetWidth(const uint64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool VideoEncode::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

uint64_t VideoEncode::GetHeight() const
{
    return m_height;
}

void VideoEncode::SetHeight(const uint64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool VideoEncode::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

uint64_t VideoEncode::GetFps() const
{
    return m_fps;
}

void VideoEncode::SetFps(const uint64_t& _fps)
{
    m_fps = _fps;
    m_fpsHasBeenSet = true;
}

bool VideoEncode::FpsHasBeenSet() const
{
    return m_fpsHasBeenSet;
}

uint64_t VideoEncode::GetBitRate() const
{
    return m_bitRate;
}

void VideoEncode::SetBitRate(const uint64_t& _bitRate)
{
    m_bitRate = _bitRate;
    m_bitRateHasBeenSet = true;
}

bool VideoEncode::BitRateHasBeenSet() const
{
    return m_bitRateHasBeenSet;
}

uint64_t VideoEncode::GetGop() const
{
    return m_gop;
}

void VideoEncode::SetGop(const uint64_t& _gop)
{
    m_gop = _gop;
    m_gopHasBeenSet = true;
}

bool VideoEncode::GopHasBeenSet() const
{
    return m_gopHasBeenSet;
}

