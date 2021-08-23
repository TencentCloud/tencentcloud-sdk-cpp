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

#include <tencentcloud/ie/v20200304/model/VideoEnhance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ie::V20200304::Model;
using namespace std;

VideoEnhance::VideoEnhance() :
    m_artifactReductionHasBeenSet(false),
    m_denoisingHasBeenSet(false),
    m_colorEnhanceHasBeenSet(false),
    m_sharpHasBeenSet(false),
    m_wdSuperResolutionHasBeenSet(false),
    m_faceProtectHasBeenSet(false),
    m_wdFpsHasBeenSet(false),
    m_scratchRepairHasBeenSet(false),
    m_lowLightEnhanceHasBeenSet(false),
    m_videoSuperResolutionHasBeenSet(false),
    m_videoRepairHasBeenSet(false)
{
}

CoreInternalOutcome VideoEnhance::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ArtifactReduction") && !value["ArtifactReduction"].IsNull())
    {
        if (!value["ArtifactReduction"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VideoEnhance.ArtifactReduction` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_artifactReduction.Deserialize(value["ArtifactReduction"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_artifactReductionHasBeenSet = true;
    }

    if (value.HasMember("Denoising") && !value["Denoising"].IsNull())
    {
        if (!value["Denoising"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VideoEnhance.Denoising` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_denoising.Deserialize(value["Denoising"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_denoisingHasBeenSet = true;
    }

    if (value.HasMember("ColorEnhance") && !value["ColorEnhance"].IsNull())
    {
        if (!value["ColorEnhance"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VideoEnhance.ColorEnhance` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_colorEnhance.Deserialize(value["ColorEnhance"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_colorEnhanceHasBeenSet = true;
    }

    if (value.HasMember("Sharp") && !value["Sharp"].IsNull())
    {
        if (!value["Sharp"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VideoEnhance.Sharp` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sharp.Deserialize(value["Sharp"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sharpHasBeenSet = true;
    }

    if (value.HasMember("WdSuperResolution") && !value["WdSuperResolution"].IsNull())
    {
        if (!value["WdSuperResolution"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoEnhance.WdSuperResolution` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_wdSuperResolution = value["WdSuperResolution"].GetInt64();
        m_wdSuperResolutionHasBeenSet = true;
    }

    if (value.HasMember("FaceProtect") && !value["FaceProtect"].IsNull())
    {
        if (!value["FaceProtect"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VideoEnhance.FaceProtect` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_faceProtect.Deserialize(value["FaceProtect"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_faceProtectHasBeenSet = true;
    }

    if (value.HasMember("WdFps") && !value["WdFps"].IsNull())
    {
        if (!value["WdFps"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoEnhance.WdFps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_wdFps = value["WdFps"].GetInt64();
        m_wdFpsHasBeenSet = true;
    }

    if (value.HasMember("ScratchRepair") && !value["ScratchRepair"].IsNull())
    {
        if (!value["ScratchRepair"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VideoEnhance.ScratchRepair` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_scratchRepair.Deserialize(value["ScratchRepair"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_scratchRepairHasBeenSet = true;
    }

    if (value.HasMember("LowLightEnhance") && !value["LowLightEnhance"].IsNull())
    {
        if (!value["LowLightEnhance"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VideoEnhance.LowLightEnhance` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_lowLightEnhance.Deserialize(value["LowLightEnhance"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_lowLightEnhanceHasBeenSet = true;
    }

    if (value.HasMember("VideoSuperResolution") && !value["VideoSuperResolution"].IsNull())
    {
        if (!value["VideoSuperResolution"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VideoEnhance.VideoSuperResolution` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_videoSuperResolution.Deserialize(value["VideoSuperResolution"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_videoSuperResolutionHasBeenSet = true;
    }

    if (value.HasMember("VideoRepair") && !value["VideoRepair"].IsNull())
    {
        if (!value["VideoRepair"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VideoEnhance.VideoRepair` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_videoRepair.Deserialize(value["VideoRepair"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_videoRepairHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VideoEnhance::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_artifactReductionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ArtifactReduction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_artifactReduction.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_denoisingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Denoising";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_denoising.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_colorEnhanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColorEnhance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_colorEnhance.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_sharpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sharp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sharp.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_wdSuperResolutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WdSuperResolution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_wdSuperResolution, allocator);
    }

    if (m_faceProtectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaceProtect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_faceProtect.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_wdFpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WdFps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_wdFps, allocator);
    }

    if (m_scratchRepairHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScratchRepair";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_scratchRepair.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_lowLightEnhanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LowLightEnhance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_lowLightEnhance.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_videoSuperResolutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoSuperResolution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_videoSuperResolution.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_videoRepairHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoRepair";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_videoRepair.ToJsonObject(value[key.c_str()], allocator);
    }

}


ArtifactReduction VideoEnhance::GetArtifactReduction() const
{
    return m_artifactReduction;
}

void VideoEnhance::SetArtifactReduction(const ArtifactReduction& _artifactReduction)
{
    m_artifactReduction = _artifactReduction;
    m_artifactReductionHasBeenSet = true;
}

bool VideoEnhance::ArtifactReductionHasBeenSet() const
{
    return m_artifactReductionHasBeenSet;
}

Denoising VideoEnhance::GetDenoising() const
{
    return m_denoising;
}

void VideoEnhance::SetDenoising(const Denoising& _denoising)
{
    m_denoising = _denoising;
    m_denoisingHasBeenSet = true;
}

bool VideoEnhance::DenoisingHasBeenSet() const
{
    return m_denoisingHasBeenSet;
}

ColorEnhance VideoEnhance::GetColorEnhance() const
{
    return m_colorEnhance;
}

void VideoEnhance::SetColorEnhance(const ColorEnhance& _colorEnhance)
{
    m_colorEnhance = _colorEnhance;
    m_colorEnhanceHasBeenSet = true;
}

bool VideoEnhance::ColorEnhanceHasBeenSet() const
{
    return m_colorEnhanceHasBeenSet;
}

Sharp VideoEnhance::GetSharp() const
{
    return m_sharp;
}

void VideoEnhance::SetSharp(const Sharp& _sharp)
{
    m_sharp = _sharp;
    m_sharpHasBeenSet = true;
}

bool VideoEnhance::SharpHasBeenSet() const
{
    return m_sharpHasBeenSet;
}

int64_t VideoEnhance::GetWdSuperResolution() const
{
    return m_wdSuperResolution;
}

void VideoEnhance::SetWdSuperResolution(const int64_t& _wdSuperResolution)
{
    m_wdSuperResolution = _wdSuperResolution;
    m_wdSuperResolutionHasBeenSet = true;
}

bool VideoEnhance::WdSuperResolutionHasBeenSet() const
{
    return m_wdSuperResolutionHasBeenSet;
}

FaceProtect VideoEnhance::GetFaceProtect() const
{
    return m_faceProtect;
}

void VideoEnhance::SetFaceProtect(const FaceProtect& _faceProtect)
{
    m_faceProtect = _faceProtect;
    m_faceProtectHasBeenSet = true;
}

bool VideoEnhance::FaceProtectHasBeenSet() const
{
    return m_faceProtectHasBeenSet;
}

int64_t VideoEnhance::GetWdFps() const
{
    return m_wdFps;
}

void VideoEnhance::SetWdFps(const int64_t& _wdFps)
{
    m_wdFps = _wdFps;
    m_wdFpsHasBeenSet = true;
}

bool VideoEnhance::WdFpsHasBeenSet() const
{
    return m_wdFpsHasBeenSet;
}

ScratchRepair VideoEnhance::GetScratchRepair() const
{
    return m_scratchRepair;
}

void VideoEnhance::SetScratchRepair(const ScratchRepair& _scratchRepair)
{
    m_scratchRepair = _scratchRepair;
    m_scratchRepairHasBeenSet = true;
}

bool VideoEnhance::ScratchRepairHasBeenSet() const
{
    return m_scratchRepairHasBeenSet;
}

LowLightEnhance VideoEnhance::GetLowLightEnhance() const
{
    return m_lowLightEnhance;
}

void VideoEnhance::SetLowLightEnhance(const LowLightEnhance& _lowLightEnhance)
{
    m_lowLightEnhance = _lowLightEnhance;
    m_lowLightEnhanceHasBeenSet = true;
}

bool VideoEnhance::LowLightEnhanceHasBeenSet() const
{
    return m_lowLightEnhanceHasBeenSet;
}

VideoSuperResolution VideoEnhance::GetVideoSuperResolution() const
{
    return m_videoSuperResolution;
}

void VideoEnhance::SetVideoSuperResolution(const VideoSuperResolution& _videoSuperResolution)
{
    m_videoSuperResolution = _videoSuperResolution;
    m_videoSuperResolutionHasBeenSet = true;
}

bool VideoEnhance::VideoSuperResolutionHasBeenSet() const
{
    return m_videoSuperResolutionHasBeenSet;
}

VideoRepair VideoEnhance::GetVideoRepair() const
{
    return m_videoRepair;
}

void VideoEnhance::SetVideoRepair(const VideoRepair& _videoRepair)
{
    m_videoRepair = _videoRepair;
    m_videoRepairHasBeenSet = true;
}

bool VideoEnhance::VideoRepairHasBeenSet() const
{
    return m_videoRepairHasBeenSet;
}

