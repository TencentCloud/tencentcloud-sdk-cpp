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

#include <tencentcloud/vod/v20180717/model/VideoTemplateInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

VideoTemplateInfo::VideoTemplateInfo() :
    m_codecHasBeenSet(false),
    m_fpsHasBeenSet(false),
    m_bitrateHasBeenSet(false),
    m_resolutionAdaptiveHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_fillTypeHasBeenSet(false),
    m_vcrfHasBeenSet(false),
    m_gopHasBeenSet(false),
    m_preserveHDRSwitchHasBeenSet(false),
    m_codecTagHasBeenSet(false)
{
}

CoreInternalOutcome VideoTemplateInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Codec") && !value["Codec"].IsNull())
    {
        if (!value["Codec"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoTemplateInfo.Codec` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codec = string(value["Codec"].GetString());
        m_codecHasBeenSet = true;
    }

    if (value.HasMember("Fps") && !value["Fps"].IsNull())
    {
        if (!value["Fps"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoTemplateInfo.Fps` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_fps = value["Fps"].GetUint64();
        m_fpsHasBeenSet = true;
    }

    if (value.HasMember("Bitrate") && !value["Bitrate"].IsNull())
    {
        if (!value["Bitrate"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoTemplateInfo.Bitrate` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bitrate = value["Bitrate"].GetUint64();
        m_bitrateHasBeenSet = true;
    }

    if (value.HasMember("ResolutionAdaptive") && !value["ResolutionAdaptive"].IsNull())
    {
        if (!value["ResolutionAdaptive"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoTemplateInfo.ResolutionAdaptive` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resolutionAdaptive = string(value["ResolutionAdaptive"].GetString());
        m_resolutionAdaptiveHasBeenSet = true;
    }

    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoTemplateInfo.Width` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_width = value["Width"].GetUint64();
        m_widthHasBeenSet = true;
    }

    if (value.HasMember("Height") && !value["Height"].IsNull())
    {
        if (!value["Height"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoTemplateInfo.Height` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_height = value["Height"].GetUint64();
        m_heightHasBeenSet = true;
    }

    if (value.HasMember("FillType") && !value["FillType"].IsNull())
    {
        if (!value["FillType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoTemplateInfo.FillType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fillType = string(value["FillType"].GetString());
        m_fillTypeHasBeenSet = true;
    }

    if (value.HasMember("Vcrf") && !value["Vcrf"].IsNull())
    {
        if (!value["Vcrf"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoTemplateInfo.Vcrf` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vcrf = value["Vcrf"].GetUint64();
        m_vcrfHasBeenSet = true;
    }

    if (value.HasMember("Gop") && !value["Gop"].IsNull())
    {
        if (!value["Gop"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoTemplateInfo.Gop` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_gop = value["Gop"].GetUint64();
        m_gopHasBeenSet = true;
    }

    if (value.HasMember("PreserveHDRSwitch") && !value["PreserveHDRSwitch"].IsNull())
    {
        if (!value["PreserveHDRSwitch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoTemplateInfo.PreserveHDRSwitch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_preserveHDRSwitch = string(value["PreserveHDRSwitch"].GetString());
        m_preserveHDRSwitchHasBeenSet = true;
    }

    if (value.HasMember("CodecTag") && !value["CodecTag"].IsNull())
    {
        if (!value["CodecTag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoTemplateInfo.CodecTag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codecTag = string(value["CodecTag"].GetString());
        m_codecTagHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VideoTemplateInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_bitrateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bitrate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bitrate, allocator);
    }

    if (m_resolutionAdaptiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResolutionAdaptive";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resolutionAdaptive.c_str(), allocator).Move(), allocator);
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

    if (m_fillTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FillType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fillType.c_str(), allocator).Move(), allocator);
    }

    if (m_vcrfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vcrf";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vcrf, allocator);
    }

    if (m_gopHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Gop";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gop, allocator);
    }

    if (m_preserveHDRSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreserveHDRSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_preserveHDRSwitch.c_str(), allocator).Move(), allocator);
    }

    if (m_codecTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodecTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_codecTag.c_str(), allocator).Move(), allocator);
    }

}


string VideoTemplateInfo::GetCodec() const
{
    return m_codec;
}

void VideoTemplateInfo::SetCodec(const string& _codec)
{
    m_codec = _codec;
    m_codecHasBeenSet = true;
}

bool VideoTemplateInfo::CodecHasBeenSet() const
{
    return m_codecHasBeenSet;
}

uint64_t VideoTemplateInfo::GetFps() const
{
    return m_fps;
}

void VideoTemplateInfo::SetFps(const uint64_t& _fps)
{
    m_fps = _fps;
    m_fpsHasBeenSet = true;
}

bool VideoTemplateInfo::FpsHasBeenSet() const
{
    return m_fpsHasBeenSet;
}

uint64_t VideoTemplateInfo::GetBitrate() const
{
    return m_bitrate;
}

void VideoTemplateInfo::SetBitrate(const uint64_t& _bitrate)
{
    m_bitrate = _bitrate;
    m_bitrateHasBeenSet = true;
}

bool VideoTemplateInfo::BitrateHasBeenSet() const
{
    return m_bitrateHasBeenSet;
}

string VideoTemplateInfo::GetResolutionAdaptive() const
{
    return m_resolutionAdaptive;
}

void VideoTemplateInfo::SetResolutionAdaptive(const string& _resolutionAdaptive)
{
    m_resolutionAdaptive = _resolutionAdaptive;
    m_resolutionAdaptiveHasBeenSet = true;
}

bool VideoTemplateInfo::ResolutionAdaptiveHasBeenSet() const
{
    return m_resolutionAdaptiveHasBeenSet;
}

uint64_t VideoTemplateInfo::GetWidth() const
{
    return m_width;
}

void VideoTemplateInfo::SetWidth(const uint64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool VideoTemplateInfo::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

uint64_t VideoTemplateInfo::GetHeight() const
{
    return m_height;
}

void VideoTemplateInfo::SetHeight(const uint64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool VideoTemplateInfo::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

string VideoTemplateInfo::GetFillType() const
{
    return m_fillType;
}

void VideoTemplateInfo::SetFillType(const string& _fillType)
{
    m_fillType = _fillType;
    m_fillTypeHasBeenSet = true;
}

bool VideoTemplateInfo::FillTypeHasBeenSet() const
{
    return m_fillTypeHasBeenSet;
}

uint64_t VideoTemplateInfo::GetVcrf() const
{
    return m_vcrf;
}

void VideoTemplateInfo::SetVcrf(const uint64_t& _vcrf)
{
    m_vcrf = _vcrf;
    m_vcrfHasBeenSet = true;
}

bool VideoTemplateInfo::VcrfHasBeenSet() const
{
    return m_vcrfHasBeenSet;
}

uint64_t VideoTemplateInfo::GetGop() const
{
    return m_gop;
}

void VideoTemplateInfo::SetGop(const uint64_t& _gop)
{
    m_gop = _gop;
    m_gopHasBeenSet = true;
}

bool VideoTemplateInfo::GopHasBeenSet() const
{
    return m_gopHasBeenSet;
}

string VideoTemplateInfo::GetPreserveHDRSwitch() const
{
    return m_preserveHDRSwitch;
}

void VideoTemplateInfo::SetPreserveHDRSwitch(const string& _preserveHDRSwitch)
{
    m_preserveHDRSwitch = _preserveHDRSwitch;
    m_preserveHDRSwitchHasBeenSet = true;
}

bool VideoTemplateInfo::PreserveHDRSwitchHasBeenSet() const
{
    return m_preserveHDRSwitchHasBeenSet;
}

string VideoTemplateInfo::GetCodecTag() const
{
    return m_codecTag;
}

void VideoTemplateInfo::SetCodecTag(const string& _codecTag)
{
    m_codecTag = _codecTag;
    m_codecTagHasBeenSet = true;
}

bool VideoTemplateInfo::CodecTagHasBeenSet() const
{
    return m_codecTagHasBeenSet;
}

