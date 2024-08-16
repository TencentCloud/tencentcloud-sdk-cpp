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

#include <tencentcloud/mps/v20190612/model/MediaVideoStreamItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

MediaVideoStreamItem::MediaVideoStreamItem() :
    m_bitrateHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_codecHasBeenSet(false),
    m_fpsHasBeenSet(false),
    m_colorPrimariesHasBeenSet(false),
    m_colorSpaceHasBeenSet(false),
    m_colorTransferHasBeenSet(false),
    m_hdrTypeHasBeenSet(false),
    m_codecsHasBeenSet(false),
    m_fpsNumeratorHasBeenSet(false),
    m_fpsDenominatorHasBeenSet(false)
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

    if (value.HasMember("ColorPrimaries") && !value["ColorPrimaries"].IsNull())
    {
        if (!value["ColorPrimaries"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaVideoStreamItem.ColorPrimaries` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_colorPrimaries = string(value["ColorPrimaries"].GetString());
        m_colorPrimariesHasBeenSet = true;
    }

    if (value.HasMember("ColorSpace") && !value["ColorSpace"].IsNull())
    {
        if (!value["ColorSpace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaVideoStreamItem.ColorSpace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_colorSpace = string(value["ColorSpace"].GetString());
        m_colorSpaceHasBeenSet = true;
    }

    if (value.HasMember("ColorTransfer") && !value["ColorTransfer"].IsNull())
    {
        if (!value["ColorTransfer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaVideoStreamItem.ColorTransfer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_colorTransfer = string(value["ColorTransfer"].GetString());
        m_colorTransferHasBeenSet = true;
    }

    if (value.HasMember("HdrType") && !value["HdrType"].IsNull())
    {
        if (!value["HdrType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaVideoStreamItem.HdrType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hdrType = string(value["HdrType"].GetString());
        m_hdrTypeHasBeenSet = true;
    }

    if (value.HasMember("Codecs") && !value["Codecs"].IsNull())
    {
        if (!value["Codecs"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaVideoStreamItem.Codecs` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codecs = string(value["Codecs"].GetString());
        m_codecsHasBeenSet = true;
    }

    if (value.HasMember("FpsNumerator") && !value["FpsNumerator"].IsNull())
    {
        if (!value["FpsNumerator"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MediaVideoStreamItem.FpsNumerator` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fpsNumerator = value["FpsNumerator"].GetInt64();
        m_fpsNumeratorHasBeenSet = true;
    }

    if (value.HasMember("FpsDenominator") && !value["FpsDenominator"].IsNull())
    {
        if (!value["FpsDenominator"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MediaVideoStreamItem.FpsDenominator` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fpsDenominator = value["FpsDenominator"].GetInt64();
        m_fpsDenominatorHasBeenSet = true;
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

    if (m_colorPrimariesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColorPrimaries";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_colorPrimaries.c_str(), allocator).Move(), allocator);
    }

    if (m_colorSpaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColorSpace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_colorSpace.c_str(), allocator).Move(), allocator);
    }

    if (m_colorTransferHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColorTransfer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_colorTransfer.c_str(), allocator).Move(), allocator);
    }

    if (m_hdrTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HdrType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hdrType.c_str(), allocator).Move(), allocator);
    }

    if (m_codecsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Codecs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_codecs.c_str(), allocator).Move(), allocator);
    }

    if (m_fpsNumeratorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FpsNumerator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fpsNumerator, allocator);
    }

    if (m_fpsDenominatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FpsDenominator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fpsDenominator, allocator);
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

string MediaVideoStreamItem::GetColorPrimaries() const
{
    return m_colorPrimaries;
}

void MediaVideoStreamItem::SetColorPrimaries(const string& _colorPrimaries)
{
    m_colorPrimaries = _colorPrimaries;
    m_colorPrimariesHasBeenSet = true;
}

bool MediaVideoStreamItem::ColorPrimariesHasBeenSet() const
{
    return m_colorPrimariesHasBeenSet;
}

string MediaVideoStreamItem::GetColorSpace() const
{
    return m_colorSpace;
}

void MediaVideoStreamItem::SetColorSpace(const string& _colorSpace)
{
    m_colorSpace = _colorSpace;
    m_colorSpaceHasBeenSet = true;
}

bool MediaVideoStreamItem::ColorSpaceHasBeenSet() const
{
    return m_colorSpaceHasBeenSet;
}

string MediaVideoStreamItem::GetColorTransfer() const
{
    return m_colorTransfer;
}

void MediaVideoStreamItem::SetColorTransfer(const string& _colorTransfer)
{
    m_colorTransfer = _colorTransfer;
    m_colorTransferHasBeenSet = true;
}

bool MediaVideoStreamItem::ColorTransferHasBeenSet() const
{
    return m_colorTransferHasBeenSet;
}

string MediaVideoStreamItem::GetHdrType() const
{
    return m_hdrType;
}

void MediaVideoStreamItem::SetHdrType(const string& _hdrType)
{
    m_hdrType = _hdrType;
    m_hdrTypeHasBeenSet = true;
}

bool MediaVideoStreamItem::HdrTypeHasBeenSet() const
{
    return m_hdrTypeHasBeenSet;
}

string MediaVideoStreamItem::GetCodecs() const
{
    return m_codecs;
}

void MediaVideoStreamItem::SetCodecs(const string& _codecs)
{
    m_codecs = _codecs;
    m_codecsHasBeenSet = true;
}

bool MediaVideoStreamItem::CodecsHasBeenSet() const
{
    return m_codecsHasBeenSet;
}

int64_t MediaVideoStreamItem::GetFpsNumerator() const
{
    return m_fpsNumerator;
}

void MediaVideoStreamItem::SetFpsNumerator(const int64_t& _fpsNumerator)
{
    m_fpsNumerator = _fpsNumerator;
    m_fpsNumeratorHasBeenSet = true;
}

bool MediaVideoStreamItem::FpsNumeratorHasBeenSet() const
{
    return m_fpsNumeratorHasBeenSet;
}

int64_t MediaVideoStreamItem::GetFpsDenominator() const
{
    return m_fpsDenominator;
}

void MediaVideoStreamItem::SetFpsDenominator(const int64_t& _fpsDenominator)
{
    m_fpsDenominator = _fpsDenominator;
    m_fpsDenominatorHasBeenSet = true;
}

bool MediaVideoStreamItem::FpsDenominatorHasBeenSet() const
{
    return m_fpsDenominatorHasBeenSet;
}

