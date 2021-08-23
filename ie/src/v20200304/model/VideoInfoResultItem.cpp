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

#include <tencentcloud/ie/v20200304/model/VideoInfoResultItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ie::V20200304::Model;
using namespace std;

VideoInfoResultItem::VideoInfoResultItem() :
    m_streamHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_bitrateHasBeenSet(false),
    m_fpsHasBeenSet(false),
    m_codecHasBeenSet(false),
    m_rotateHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_pixFormatHasBeenSet(false)
{
}

CoreInternalOutcome VideoInfoResultItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Stream") && !value["Stream"].IsNull())
    {
        if (!value["Stream"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoInfoResultItem.Stream` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_stream = value["Stream"].GetInt64();
        m_streamHasBeenSet = true;
    }

    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoInfoResultItem.Width` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_width = value["Width"].GetInt64();
        m_widthHasBeenSet = true;
    }

    if (value.HasMember("Height") && !value["Height"].IsNull())
    {
        if (!value["Height"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoInfoResultItem.Height` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_height = value["Height"].GetInt64();
        m_heightHasBeenSet = true;
    }

    if (value.HasMember("Bitrate") && !value["Bitrate"].IsNull())
    {
        if (!value["Bitrate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoInfoResultItem.Bitrate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bitrate = value["Bitrate"].GetInt64();
        m_bitrateHasBeenSet = true;
    }

    if (value.HasMember("Fps") && !value["Fps"].IsNull())
    {
        if (!value["Fps"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoInfoResultItem.Fps` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fps = string(value["Fps"].GetString());
        m_fpsHasBeenSet = true;
    }

    if (value.HasMember("Codec") && !value["Codec"].IsNull())
    {
        if (!value["Codec"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoInfoResultItem.Codec` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codec = string(value["Codec"].GetString());
        m_codecHasBeenSet = true;
    }

    if (value.HasMember("Rotate") && !value["Rotate"].IsNull())
    {
        if (!value["Rotate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoInfoResultItem.Rotate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rotate = value["Rotate"].GetInt64();
        m_rotateHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoInfoResultItem.Duration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetInt64();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("PixFormat") && !value["PixFormat"].IsNull())
    {
        if (!value["PixFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoInfoResultItem.PixFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pixFormat = string(value["PixFormat"].GetString());
        m_pixFormatHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VideoInfoResultItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_streamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Stream";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_stream, allocator);
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

    if (m_bitrateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bitrate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bitrate, allocator);
    }

    if (m_fpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fps.c_str(), allocator).Move(), allocator);
    }

    if (m_codecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Codec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_codec.c_str(), allocator).Move(), allocator);
    }

    if (m_rotateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rotate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rotate, allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

    if (m_pixFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PixFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pixFormat.c_str(), allocator).Move(), allocator);
    }

}


int64_t VideoInfoResultItem::GetStream() const
{
    return m_stream;
}

void VideoInfoResultItem::SetStream(const int64_t& _stream)
{
    m_stream = _stream;
    m_streamHasBeenSet = true;
}

bool VideoInfoResultItem::StreamHasBeenSet() const
{
    return m_streamHasBeenSet;
}

int64_t VideoInfoResultItem::GetWidth() const
{
    return m_width;
}

void VideoInfoResultItem::SetWidth(const int64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool VideoInfoResultItem::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

int64_t VideoInfoResultItem::GetHeight() const
{
    return m_height;
}

void VideoInfoResultItem::SetHeight(const int64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool VideoInfoResultItem::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

int64_t VideoInfoResultItem::GetBitrate() const
{
    return m_bitrate;
}

void VideoInfoResultItem::SetBitrate(const int64_t& _bitrate)
{
    m_bitrate = _bitrate;
    m_bitrateHasBeenSet = true;
}

bool VideoInfoResultItem::BitrateHasBeenSet() const
{
    return m_bitrateHasBeenSet;
}

string VideoInfoResultItem::GetFps() const
{
    return m_fps;
}

void VideoInfoResultItem::SetFps(const string& _fps)
{
    m_fps = _fps;
    m_fpsHasBeenSet = true;
}

bool VideoInfoResultItem::FpsHasBeenSet() const
{
    return m_fpsHasBeenSet;
}

string VideoInfoResultItem::GetCodec() const
{
    return m_codec;
}

void VideoInfoResultItem::SetCodec(const string& _codec)
{
    m_codec = _codec;
    m_codecHasBeenSet = true;
}

bool VideoInfoResultItem::CodecHasBeenSet() const
{
    return m_codecHasBeenSet;
}

int64_t VideoInfoResultItem::GetRotate() const
{
    return m_rotate;
}

void VideoInfoResultItem::SetRotate(const int64_t& _rotate)
{
    m_rotate = _rotate;
    m_rotateHasBeenSet = true;
}

bool VideoInfoResultItem::RotateHasBeenSet() const
{
    return m_rotateHasBeenSet;
}

int64_t VideoInfoResultItem::GetDuration() const
{
    return m_duration;
}

void VideoInfoResultItem::SetDuration(const int64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool VideoInfoResultItem::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

string VideoInfoResultItem::GetPixFormat() const
{
    return m_pixFormat;
}

void VideoInfoResultItem::SetPixFormat(const string& _pixFormat)
{
    m_pixFormat = _pixFormat;
    m_pixFormatHasBeenSet = true;
}

bool VideoInfoResultItem::PixFormatHasBeenSet() const
{
    return m_pixFormatHasBeenSet;
}

