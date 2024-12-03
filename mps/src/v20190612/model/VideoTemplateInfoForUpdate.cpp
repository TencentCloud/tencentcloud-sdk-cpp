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

#include <tencentcloud/mps/v20190612/model/VideoTemplateInfoForUpdate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

VideoTemplateInfoForUpdate::VideoTemplateInfoForUpdate() :
    m_codecHasBeenSet(false),
    m_fpsHasBeenSet(false),
    m_bitrateHasBeenSet(false),
    m_resolutionAdaptiveHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_gopHasBeenSet(false),
    m_gopUnitHasBeenSet(false),
    m_fillTypeHasBeenSet(false),
    m_vcrfHasBeenSet(false),
    m_contentAdaptStreamHasBeenSet(false),
    m_hlsTimeHasBeenSet(false),
    m_segmentTypeHasBeenSet(false),
    m_fpsDenominatorHasBeenSet(false),
    m_stereo3dTypeHasBeenSet(false),
    m_videoProfileHasBeenSet(false),
    m_videoLevelHasBeenSet(false),
    m_bframesHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_sarHasBeenSet(false),
    m_noScenecutHasBeenSet(false),
    m_bitDepthHasBeenSet(false),
    m_rawPtsHasBeenSet(false),
    m_compressHasBeenSet(false),
    m_segmentSpecificInfoHasBeenSet(false),
    m_scenarioBasedHasBeenSet(false),
    m_sceneTypeHasBeenSet(false),
    m_compressTypeHasBeenSet(false)
{
}

CoreInternalOutcome VideoTemplateInfoForUpdate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Codec") && !value["Codec"].IsNull())
    {
        if (!value["Codec"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoTemplateInfoForUpdate.Codec` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codec = string(value["Codec"].GetString());
        m_codecHasBeenSet = true;
    }

    if (value.HasMember("Fps") && !value["Fps"].IsNull())
    {
        if (!value["Fps"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoTemplateInfoForUpdate.Fps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fps = value["Fps"].GetInt64();
        m_fpsHasBeenSet = true;
    }

    if (value.HasMember("Bitrate") && !value["Bitrate"].IsNull())
    {
        if (!value["Bitrate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoTemplateInfoForUpdate.Bitrate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bitrate = value["Bitrate"].GetInt64();
        m_bitrateHasBeenSet = true;
    }

    if (value.HasMember("ResolutionAdaptive") && !value["ResolutionAdaptive"].IsNull())
    {
        if (!value["ResolutionAdaptive"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoTemplateInfoForUpdate.ResolutionAdaptive` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resolutionAdaptive = string(value["ResolutionAdaptive"].GetString());
        m_resolutionAdaptiveHasBeenSet = true;
    }

    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoTemplateInfoForUpdate.Width` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_width = value["Width"].GetUint64();
        m_widthHasBeenSet = true;
    }

    if (value.HasMember("Height") && !value["Height"].IsNull())
    {
        if (!value["Height"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoTemplateInfoForUpdate.Height` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_height = value["Height"].GetUint64();
        m_heightHasBeenSet = true;
    }

    if (value.HasMember("Gop") && !value["Gop"].IsNull())
    {
        if (!value["Gop"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoTemplateInfoForUpdate.Gop` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_gop = value["Gop"].GetUint64();
        m_gopHasBeenSet = true;
    }

    if (value.HasMember("GopUnit") && !value["GopUnit"].IsNull())
    {
        if (!value["GopUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoTemplateInfoForUpdate.GopUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gopUnit = string(value["GopUnit"].GetString());
        m_gopUnitHasBeenSet = true;
    }

    if (value.HasMember("FillType") && !value["FillType"].IsNull())
    {
        if (!value["FillType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoTemplateInfoForUpdate.FillType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fillType = string(value["FillType"].GetString());
        m_fillTypeHasBeenSet = true;
    }

    if (value.HasMember("Vcrf") && !value["Vcrf"].IsNull())
    {
        if (!value["Vcrf"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoTemplateInfoForUpdate.Vcrf` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vcrf = value["Vcrf"].GetUint64();
        m_vcrfHasBeenSet = true;
    }

    if (value.HasMember("ContentAdaptStream") && !value["ContentAdaptStream"].IsNull())
    {
        if (!value["ContentAdaptStream"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoTemplateInfoForUpdate.ContentAdaptStream` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_contentAdaptStream = value["ContentAdaptStream"].GetUint64();
        m_contentAdaptStreamHasBeenSet = true;
    }

    if (value.HasMember("HlsTime") && !value["HlsTime"].IsNull())
    {
        if (!value["HlsTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoTemplateInfoForUpdate.HlsTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_hlsTime = value["HlsTime"].GetUint64();
        m_hlsTimeHasBeenSet = true;
    }

    if (value.HasMember("SegmentType") && !value["SegmentType"].IsNull())
    {
        if (!value["SegmentType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoTemplateInfoForUpdate.SegmentType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_segmentType = value["SegmentType"].GetInt64();
        m_segmentTypeHasBeenSet = true;
    }

    if (value.HasMember("FpsDenominator") && !value["FpsDenominator"].IsNull())
    {
        if (!value["FpsDenominator"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoTemplateInfoForUpdate.FpsDenominator` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fpsDenominator = value["FpsDenominator"].GetInt64();
        m_fpsDenominatorHasBeenSet = true;
    }

    if (value.HasMember("Stereo3dType") && !value["Stereo3dType"].IsNull())
    {
        if (!value["Stereo3dType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoTemplateInfoForUpdate.Stereo3dType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stereo3dType = string(value["Stereo3dType"].GetString());
        m_stereo3dTypeHasBeenSet = true;
    }

    if (value.HasMember("VideoProfile") && !value["VideoProfile"].IsNull())
    {
        if (!value["VideoProfile"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoTemplateInfoForUpdate.VideoProfile` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_videoProfile = string(value["VideoProfile"].GetString());
        m_videoProfileHasBeenSet = true;
    }

    if (value.HasMember("VideoLevel") && !value["VideoLevel"].IsNull())
    {
        if (!value["VideoLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoTemplateInfoForUpdate.VideoLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_videoLevel = string(value["VideoLevel"].GetString());
        m_videoLevelHasBeenSet = true;
    }

    if (value.HasMember("Bframes") && !value["Bframes"].IsNull())
    {
        if (!value["Bframes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoTemplateInfoForUpdate.Bframes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bframes = value["Bframes"].GetInt64();
        m_bframesHasBeenSet = true;
    }

    if (value.HasMember("Mode") && !value["Mode"].IsNull())
    {
        if (!value["Mode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoTemplateInfoForUpdate.Mode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mode = string(value["Mode"].GetString());
        m_modeHasBeenSet = true;
    }

    if (value.HasMember("Sar") && !value["Sar"].IsNull())
    {
        if (!value["Sar"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoTemplateInfoForUpdate.Sar` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sar = string(value["Sar"].GetString());
        m_sarHasBeenSet = true;
    }

    if (value.HasMember("NoScenecut") && !value["NoScenecut"].IsNull())
    {
        if (!value["NoScenecut"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoTemplateInfoForUpdate.NoScenecut` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_noScenecut = value["NoScenecut"].GetInt64();
        m_noScenecutHasBeenSet = true;
    }

    if (value.HasMember("BitDepth") && !value["BitDepth"].IsNull())
    {
        if (!value["BitDepth"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoTemplateInfoForUpdate.BitDepth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bitDepth = value["BitDepth"].GetInt64();
        m_bitDepthHasBeenSet = true;
    }

    if (value.HasMember("RawPts") && !value["RawPts"].IsNull())
    {
        if (!value["RawPts"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoTemplateInfoForUpdate.RawPts` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rawPts = value["RawPts"].GetInt64();
        m_rawPtsHasBeenSet = true;
    }

    if (value.HasMember("Compress") && !value["Compress"].IsNull())
    {
        if (!value["Compress"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoTemplateInfoForUpdate.Compress` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_compress = value["Compress"].GetInt64();
        m_compressHasBeenSet = true;
    }

    if (value.HasMember("SegmentSpecificInfo") && !value["SegmentSpecificInfo"].IsNull())
    {
        if (!value["SegmentSpecificInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VideoTemplateInfoForUpdate.SegmentSpecificInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_segmentSpecificInfo.Deserialize(value["SegmentSpecificInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_segmentSpecificInfoHasBeenSet = true;
    }

    if (value.HasMember("ScenarioBased") && !value["ScenarioBased"].IsNull())
    {
        if (!value["ScenarioBased"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoTemplateInfoForUpdate.ScenarioBased` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_scenarioBased = value["ScenarioBased"].GetInt64();
        m_scenarioBasedHasBeenSet = true;
    }

    if (value.HasMember("SceneType") && !value["SceneType"].IsNull())
    {
        if (!value["SceneType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoTemplateInfoForUpdate.SceneType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sceneType = string(value["SceneType"].GetString());
        m_sceneTypeHasBeenSet = true;
    }

    if (value.HasMember("CompressType") && !value["CompressType"].IsNull())
    {
        if (!value["CompressType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoTemplateInfoForUpdate.CompressType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_compressType = string(value["CompressType"].GetString());
        m_compressTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VideoTemplateInfoForUpdate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_gopUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GopUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gopUnit.c_str(), allocator).Move(), allocator);
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

    if (m_contentAdaptStreamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentAdaptStream";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_contentAdaptStream, allocator);
    }

    if (m_hlsTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HlsTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hlsTime, allocator);
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

    if (m_videoProfileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoProfile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_videoProfile.c_str(), allocator).Move(), allocator);
    }

    if (m_videoLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_videoLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_bframesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bframes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bframes, allocator);
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mode.c_str(), allocator).Move(), allocator);
    }

    if (m_sarHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sar";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sar.c_str(), allocator).Move(), allocator);
    }

    if (m_noScenecutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoScenecut";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_noScenecut, allocator);
    }

    if (m_bitDepthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BitDepth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bitDepth, allocator);
    }

    if (m_rawPtsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RawPts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rawPts, allocator);
    }

    if (m_compressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Compress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_compress, allocator);
    }

    if (m_segmentSpecificInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SegmentSpecificInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_segmentSpecificInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_scenarioBasedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScenarioBased";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scenarioBased, allocator);
    }

    if (m_sceneTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SceneType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sceneType.c_str(), allocator).Move(), allocator);
    }

    if (m_compressTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompressType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_compressType.c_str(), allocator).Move(), allocator);
    }

}


string VideoTemplateInfoForUpdate::GetCodec() const
{
    return m_codec;
}

void VideoTemplateInfoForUpdate::SetCodec(const string& _codec)
{
    m_codec = _codec;
    m_codecHasBeenSet = true;
}

bool VideoTemplateInfoForUpdate::CodecHasBeenSet() const
{
    return m_codecHasBeenSet;
}

int64_t VideoTemplateInfoForUpdate::GetFps() const
{
    return m_fps;
}

void VideoTemplateInfoForUpdate::SetFps(const int64_t& _fps)
{
    m_fps = _fps;
    m_fpsHasBeenSet = true;
}

bool VideoTemplateInfoForUpdate::FpsHasBeenSet() const
{
    return m_fpsHasBeenSet;
}

int64_t VideoTemplateInfoForUpdate::GetBitrate() const
{
    return m_bitrate;
}

void VideoTemplateInfoForUpdate::SetBitrate(const int64_t& _bitrate)
{
    m_bitrate = _bitrate;
    m_bitrateHasBeenSet = true;
}

bool VideoTemplateInfoForUpdate::BitrateHasBeenSet() const
{
    return m_bitrateHasBeenSet;
}

string VideoTemplateInfoForUpdate::GetResolutionAdaptive() const
{
    return m_resolutionAdaptive;
}

void VideoTemplateInfoForUpdate::SetResolutionAdaptive(const string& _resolutionAdaptive)
{
    m_resolutionAdaptive = _resolutionAdaptive;
    m_resolutionAdaptiveHasBeenSet = true;
}

bool VideoTemplateInfoForUpdate::ResolutionAdaptiveHasBeenSet() const
{
    return m_resolutionAdaptiveHasBeenSet;
}

uint64_t VideoTemplateInfoForUpdate::GetWidth() const
{
    return m_width;
}

void VideoTemplateInfoForUpdate::SetWidth(const uint64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool VideoTemplateInfoForUpdate::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

uint64_t VideoTemplateInfoForUpdate::GetHeight() const
{
    return m_height;
}

void VideoTemplateInfoForUpdate::SetHeight(const uint64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool VideoTemplateInfoForUpdate::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

uint64_t VideoTemplateInfoForUpdate::GetGop() const
{
    return m_gop;
}

void VideoTemplateInfoForUpdate::SetGop(const uint64_t& _gop)
{
    m_gop = _gop;
    m_gopHasBeenSet = true;
}

bool VideoTemplateInfoForUpdate::GopHasBeenSet() const
{
    return m_gopHasBeenSet;
}

string VideoTemplateInfoForUpdate::GetGopUnit() const
{
    return m_gopUnit;
}

void VideoTemplateInfoForUpdate::SetGopUnit(const string& _gopUnit)
{
    m_gopUnit = _gopUnit;
    m_gopUnitHasBeenSet = true;
}

bool VideoTemplateInfoForUpdate::GopUnitHasBeenSet() const
{
    return m_gopUnitHasBeenSet;
}

string VideoTemplateInfoForUpdate::GetFillType() const
{
    return m_fillType;
}

void VideoTemplateInfoForUpdate::SetFillType(const string& _fillType)
{
    m_fillType = _fillType;
    m_fillTypeHasBeenSet = true;
}

bool VideoTemplateInfoForUpdate::FillTypeHasBeenSet() const
{
    return m_fillTypeHasBeenSet;
}

uint64_t VideoTemplateInfoForUpdate::GetVcrf() const
{
    return m_vcrf;
}

void VideoTemplateInfoForUpdate::SetVcrf(const uint64_t& _vcrf)
{
    m_vcrf = _vcrf;
    m_vcrfHasBeenSet = true;
}

bool VideoTemplateInfoForUpdate::VcrfHasBeenSet() const
{
    return m_vcrfHasBeenSet;
}

uint64_t VideoTemplateInfoForUpdate::GetContentAdaptStream() const
{
    return m_contentAdaptStream;
}

void VideoTemplateInfoForUpdate::SetContentAdaptStream(const uint64_t& _contentAdaptStream)
{
    m_contentAdaptStream = _contentAdaptStream;
    m_contentAdaptStreamHasBeenSet = true;
}

bool VideoTemplateInfoForUpdate::ContentAdaptStreamHasBeenSet() const
{
    return m_contentAdaptStreamHasBeenSet;
}

uint64_t VideoTemplateInfoForUpdate::GetHlsTime() const
{
    return m_hlsTime;
}

void VideoTemplateInfoForUpdate::SetHlsTime(const uint64_t& _hlsTime)
{
    m_hlsTime = _hlsTime;
    m_hlsTimeHasBeenSet = true;
}

bool VideoTemplateInfoForUpdate::HlsTimeHasBeenSet() const
{
    return m_hlsTimeHasBeenSet;
}

int64_t VideoTemplateInfoForUpdate::GetSegmentType() const
{
    return m_segmentType;
}

void VideoTemplateInfoForUpdate::SetSegmentType(const int64_t& _segmentType)
{
    m_segmentType = _segmentType;
    m_segmentTypeHasBeenSet = true;
}

bool VideoTemplateInfoForUpdate::SegmentTypeHasBeenSet() const
{
    return m_segmentTypeHasBeenSet;
}

int64_t VideoTemplateInfoForUpdate::GetFpsDenominator() const
{
    return m_fpsDenominator;
}

void VideoTemplateInfoForUpdate::SetFpsDenominator(const int64_t& _fpsDenominator)
{
    m_fpsDenominator = _fpsDenominator;
    m_fpsDenominatorHasBeenSet = true;
}

bool VideoTemplateInfoForUpdate::FpsDenominatorHasBeenSet() const
{
    return m_fpsDenominatorHasBeenSet;
}

string VideoTemplateInfoForUpdate::GetStereo3dType() const
{
    return m_stereo3dType;
}

void VideoTemplateInfoForUpdate::SetStereo3dType(const string& _stereo3dType)
{
    m_stereo3dType = _stereo3dType;
    m_stereo3dTypeHasBeenSet = true;
}

bool VideoTemplateInfoForUpdate::Stereo3dTypeHasBeenSet() const
{
    return m_stereo3dTypeHasBeenSet;
}

string VideoTemplateInfoForUpdate::GetVideoProfile() const
{
    return m_videoProfile;
}

void VideoTemplateInfoForUpdate::SetVideoProfile(const string& _videoProfile)
{
    m_videoProfile = _videoProfile;
    m_videoProfileHasBeenSet = true;
}

bool VideoTemplateInfoForUpdate::VideoProfileHasBeenSet() const
{
    return m_videoProfileHasBeenSet;
}

string VideoTemplateInfoForUpdate::GetVideoLevel() const
{
    return m_videoLevel;
}

void VideoTemplateInfoForUpdate::SetVideoLevel(const string& _videoLevel)
{
    m_videoLevel = _videoLevel;
    m_videoLevelHasBeenSet = true;
}

bool VideoTemplateInfoForUpdate::VideoLevelHasBeenSet() const
{
    return m_videoLevelHasBeenSet;
}

int64_t VideoTemplateInfoForUpdate::GetBframes() const
{
    return m_bframes;
}

void VideoTemplateInfoForUpdate::SetBframes(const int64_t& _bframes)
{
    m_bframes = _bframes;
    m_bframesHasBeenSet = true;
}

bool VideoTemplateInfoForUpdate::BframesHasBeenSet() const
{
    return m_bframesHasBeenSet;
}

string VideoTemplateInfoForUpdate::GetMode() const
{
    return m_mode;
}

void VideoTemplateInfoForUpdate::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool VideoTemplateInfoForUpdate::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

string VideoTemplateInfoForUpdate::GetSar() const
{
    return m_sar;
}

void VideoTemplateInfoForUpdate::SetSar(const string& _sar)
{
    m_sar = _sar;
    m_sarHasBeenSet = true;
}

bool VideoTemplateInfoForUpdate::SarHasBeenSet() const
{
    return m_sarHasBeenSet;
}

int64_t VideoTemplateInfoForUpdate::GetNoScenecut() const
{
    return m_noScenecut;
}

void VideoTemplateInfoForUpdate::SetNoScenecut(const int64_t& _noScenecut)
{
    m_noScenecut = _noScenecut;
    m_noScenecutHasBeenSet = true;
}

bool VideoTemplateInfoForUpdate::NoScenecutHasBeenSet() const
{
    return m_noScenecutHasBeenSet;
}

int64_t VideoTemplateInfoForUpdate::GetBitDepth() const
{
    return m_bitDepth;
}

void VideoTemplateInfoForUpdate::SetBitDepth(const int64_t& _bitDepth)
{
    m_bitDepth = _bitDepth;
    m_bitDepthHasBeenSet = true;
}

bool VideoTemplateInfoForUpdate::BitDepthHasBeenSet() const
{
    return m_bitDepthHasBeenSet;
}

int64_t VideoTemplateInfoForUpdate::GetRawPts() const
{
    return m_rawPts;
}

void VideoTemplateInfoForUpdate::SetRawPts(const int64_t& _rawPts)
{
    m_rawPts = _rawPts;
    m_rawPtsHasBeenSet = true;
}

bool VideoTemplateInfoForUpdate::RawPtsHasBeenSet() const
{
    return m_rawPtsHasBeenSet;
}

int64_t VideoTemplateInfoForUpdate::GetCompress() const
{
    return m_compress;
}

void VideoTemplateInfoForUpdate::SetCompress(const int64_t& _compress)
{
    m_compress = _compress;
    m_compressHasBeenSet = true;
}

bool VideoTemplateInfoForUpdate::CompressHasBeenSet() const
{
    return m_compressHasBeenSet;
}

SegmentSpecificInfo VideoTemplateInfoForUpdate::GetSegmentSpecificInfo() const
{
    return m_segmentSpecificInfo;
}

void VideoTemplateInfoForUpdate::SetSegmentSpecificInfo(const SegmentSpecificInfo& _segmentSpecificInfo)
{
    m_segmentSpecificInfo = _segmentSpecificInfo;
    m_segmentSpecificInfoHasBeenSet = true;
}

bool VideoTemplateInfoForUpdate::SegmentSpecificInfoHasBeenSet() const
{
    return m_segmentSpecificInfoHasBeenSet;
}

int64_t VideoTemplateInfoForUpdate::GetScenarioBased() const
{
    return m_scenarioBased;
}

void VideoTemplateInfoForUpdate::SetScenarioBased(const int64_t& _scenarioBased)
{
    m_scenarioBased = _scenarioBased;
    m_scenarioBasedHasBeenSet = true;
}

bool VideoTemplateInfoForUpdate::ScenarioBasedHasBeenSet() const
{
    return m_scenarioBasedHasBeenSet;
}

string VideoTemplateInfoForUpdate::GetSceneType() const
{
    return m_sceneType;
}

void VideoTemplateInfoForUpdate::SetSceneType(const string& _sceneType)
{
    m_sceneType = _sceneType;
    m_sceneTypeHasBeenSet = true;
}

bool VideoTemplateInfoForUpdate::SceneTypeHasBeenSet() const
{
    return m_sceneTypeHasBeenSet;
}

string VideoTemplateInfoForUpdate::GetCompressType() const
{
    return m_compressType;
}

void VideoTemplateInfoForUpdate::SetCompressType(const string& _compressType)
{
    m_compressType = _compressType;
    m_compressTypeHasBeenSet = true;
}

bool VideoTemplateInfoForUpdate::CompressTypeHasBeenSet() const
{
    return m_compressTypeHasBeenSet;
}

