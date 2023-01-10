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

#include <tencentcloud/vod/v20180717/model/MediaVideoStreamItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

MediaVideoStreamItem::MediaVideoStreamItem() :
    m_bitrateHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_codecHasBeenSet(false),
    m_fpsHasBeenSet(false),
    m_codecTagHasBeenSet(false),
    m_dynamicRangeInfoHasBeenSet(false)
{
}

CoreInternalOutcome MediaVideoStreamItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Bitrate") && !value["Bitrate"].IsNull())
    {
        if (!value["Bitrate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MediaVideoStreamItem.Bitrate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bitrate = value["Bitrate"].GetInt64();
        m_bitrateHasBeenSet = true;
    }

    if (value.HasMember("Height") && !value["Height"].IsNull())
    {
        if (!value["Height"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MediaVideoStreamItem.Height` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_height = value["Height"].GetInt64();
        m_heightHasBeenSet = true;
    }

    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MediaVideoStreamItem.Width` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_width = value["Width"].GetInt64();
        m_widthHasBeenSet = true;
    }

    if (value.HasMember("Codec") && !value["Codec"].IsNull())
    {
        if (!value["Codec"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaVideoStreamItem.Codec` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codec = string(value["Codec"].GetString());
        m_codecHasBeenSet = true;
    }

    if (value.HasMember("Fps") && !value["Fps"].IsNull())
    {
        if (!value["Fps"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MediaVideoStreamItem.Fps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fps = value["Fps"].GetInt64();
        m_fpsHasBeenSet = true;
    }

    if (value.HasMember("CodecTag") && !value["CodecTag"].IsNull())
    {
        if (!value["CodecTag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaVideoStreamItem.CodecTag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codecTag = string(value["CodecTag"].GetString());
        m_codecTagHasBeenSet = true;
    }

    if (value.HasMember("DynamicRangeInfo") && !value["DynamicRangeInfo"].IsNull())
    {
        if (!value["DynamicRangeInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MediaVideoStreamItem.DynamicRangeInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dynamicRangeInfo.Deserialize(value["DynamicRangeInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dynamicRangeInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaVideoStreamItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_bitrateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bitrate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bitrate, allocator);
    }

    if (m_heightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Height";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_height, allocator);
    }

    if (m_widthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Width";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_width, allocator);
    }

    if (m_codecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Codec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_codec.c_str(), allocator).Move(), allocator);
    }

    if (m_fpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fps, allocator);
    }

    if (m_codecTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodecTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_codecTag.c_str(), allocator).Move(), allocator);
    }

    if (m_dynamicRangeInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DynamicRangeInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dynamicRangeInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


int64_t MediaVideoStreamItem::GetBitrate() const
{
    return m_bitrate;
}

void MediaVideoStreamItem::SetBitrate(const int64_t& _bitrate)
{
    m_bitrate = _bitrate;
    m_bitrateHasBeenSet = true;
}

bool MediaVideoStreamItem::BitrateHasBeenSet() const
{
    return m_bitrateHasBeenSet;
}

int64_t MediaVideoStreamItem::GetHeight() const
{
    return m_height;
}

void MediaVideoStreamItem::SetHeight(const int64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool MediaVideoStreamItem::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

int64_t MediaVideoStreamItem::GetWidth() const
{
    return m_width;
}

void MediaVideoStreamItem::SetWidth(const int64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool MediaVideoStreamItem::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

string MediaVideoStreamItem::GetCodec() const
{
    return m_codec;
}

void MediaVideoStreamItem::SetCodec(const string& _codec)
{
    m_codec = _codec;
    m_codecHasBeenSet = true;
}

bool MediaVideoStreamItem::CodecHasBeenSet() const
{
    return m_codecHasBeenSet;
}

int64_t MediaVideoStreamItem::GetFps() const
{
    return m_fps;
}

void MediaVideoStreamItem::SetFps(const int64_t& _fps)
{
    m_fps = _fps;
    m_fpsHasBeenSet = true;
}

bool MediaVideoStreamItem::FpsHasBeenSet() const
{
    return m_fpsHasBeenSet;
}

string MediaVideoStreamItem::GetCodecTag() const
{
    return m_codecTag;
}

void MediaVideoStreamItem::SetCodecTag(const string& _codecTag)
{
    m_codecTag = _codecTag;
    m_codecTagHasBeenSet = true;
}

bool MediaVideoStreamItem::CodecTagHasBeenSet() const
{
    return m_codecTagHasBeenSet;
}

DynamicRangeInfo MediaVideoStreamItem::GetDynamicRangeInfo() const
{
    return m_dynamicRangeInfo;
}

void MediaVideoStreamItem::SetDynamicRangeInfo(const DynamicRangeInfo& _dynamicRangeInfo)
{
    m_dynamicRangeInfo = _dynamicRangeInfo;
    m_dynamicRangeInfoHasBeenSet = true;
}

bool MediaVideoStreamItem::DynamicRangeInfoHasBeenSet() const
{
    return m_dynamicRangeInfoHasBeenSet;
}

