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

#include <tencentcloud/mps/v20190612/model/VideoTemplateInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

VideoTemplateInfo::VideoTemplateInfo() :
    m_codecHasBeenSet(false),
    m_fpsHasBeenSet(false),
    m_bitrateHasBeenSet(false),
    m_resolutionAdaptiveHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_gopHasBeenSet(false),
    m_fillTypeHasBeenSet(false),
    m_vcrfHasBeenSet(false),
    m_segmentTypeHasBeenSet(false),
    m_fpsDenominatorHasBeenSet(false),
    m_stereo3dTypeHasBeenSet(false)
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
        if (!value["Fps"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoTemplateInfo.Fps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fps = value["Fps"].GetInt64();
        m_fpsHasBeenSet = true;
    }

    if (value.HasMember("Bitrate") && !value["Bitrate"].IsNull())
    {
        if (!value["Bitrate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoTemplateInfo.Bitrate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bitrate = value["Bitrate"].GetInt64();
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

    if (value.HasMember("Gop") && !value["Gop"].IsNull())
    {
        if (!value["Gop"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoTemplateInfo.Gop` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_gop = value["Gop"].GetUint64();
        m_gopHasBeenSet = true;
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

    if (value.HasMember("SegmentType") && !value["SegmentType"].IsNull())
    {
        if (!value["SegmentType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoTemplateInfo.SegmentType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_segmentType = value["SegmentType"].GetInt64();
        m_segmentTypeHasBeenSet = true;
    }

    if (value.HasMember("FpsDenominator") && !value["FpsDenominator"].IsNull())
    {
        if (!value["FpsDenominator"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoTemplateInfo.FpsDenominator` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fpsDenominator = value["FpsDenominator"].GetInt64();
        m_fpsDenominatorHasBeenSet = true;
    }

    if (value.HasMember("Stereo3dType") && !value["Stereo3dType"].IsNull())
    {
        if (!value["Stereo3dType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoTemplateInfo.Stereo3dType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stereo3dType = string(value["Stereo3dType"].GetString());
        m_stereo3dTypeHasBeenSet = true;
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

    if (m_gopHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Gop";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gop, allocator);
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

    if (m_segmentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SegmentType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_segmentType, allocator);
    }

    if (m_fpsDenominatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FpsDenominator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fpsDenominator, allocator);
    }

    if (m_stereo3dTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Stereo3dType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stereo3dType.c_str(), allocator).Move(), allocator);
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

int64_t VideoTemplateInfo::GetFps() const
{
    return m_fps;
}

void VideoTemplateInfo::SetFps(const int64_t& _fps)
{
    m_fps = _fps;
    m_fpsHasBeenSet = true;
}

bool VideoTemplateInfo::FpsHasBeenSet() const
{
    return m_fpsHasBeenSet;
}

int64_t VideoTemplateInfo::GetBitrate() const
{
    return m_bitrate;
}

void VideoTemplateInfo::SetBitrate(const int64_t& _bitrate)
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

int64_t VideoTemplateInfo::GetSegmentType() const
{
    return m_segmentType;
}

void VideoTemplateInfo::SetSegmentType(const int64_t& _segmentType)
{
    m_segmentType = _segmentType;
    m_segmentTypeHasBeenSet = true;
}

bool VideoTemplateInfo::SegmentTypeHasBeenSet() const
{
    return m_segmentTypeHasBeenSet;
}

int64_t VideoTemplateInfo::GetFpsDenominator() const
{
    return m_fpsDenominator;
}

void VideoTemplateInfo::SetFpsDenominator(const int64_t& _fpsDenominator)
{
    m_fpsDenominator = _fpsDenominator;
    m_fpsDenominatorHasBeenSet = true;
}

bool VideoTemplateInfo::FpsDenominatorHasBeenSet() const
{
    return m_fpsDenominatorHasBeenSet;
}

string VideoTemplateInfo::GetStereo3dType() const
{
    return m_stereo3dType;
}

void VideoTemplateInfo::SetStereo3dType(const string& _stereo3dType)
{
    m_stereo3dType = _stereo3dType;
    m_stereo3dTypeHasBeenSet = true;
}

bool VideoTemplateInfo::Stereo3dTypeHasBeenSet() const
{
    return m_stereo3dTypeHasBeenSet;
}

