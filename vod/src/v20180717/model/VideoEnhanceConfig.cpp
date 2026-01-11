/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/vod/v20180717/model/VideoEnhanceConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

VideoEnhanceConfig::VideoEnhanceConfig() :
    m_enhanceScenarioTypeHasBeenSet(false),
    m_superResolutionHasBeenSet(false),
    m_hdrHasBeenSet(false),
    m_denoiseHasBeenSet(false),
    m_imageQualityEnhanceHasBeenSet(false),
    m_colorEnhanceHasBeenSet(false),
    m_lowLightEnhanceHasBeenSet(false),
    m_scratchRepairHasBeenSet(false),
    m_artifactRepairHasBeenSet(false),
    m_diffusionEnhanceHasBeenSet(false),
    m_frameRateWithDenHasBeenSet(false)
{
}

CoreInternalOutcome VideoEnhanceConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EnhanceScenarioType") && !value["EnhanceScenarioType"].IsNull())
    {
        if (!value["EnhanceScenarioType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoEnhanceConfig.EnhanceScenarioType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enhanceScenarioType = string(value["EnhanceScenarioType"].GetString());
        m_enhanceScenarioTypeHasBeenSet = true;
    }

    if (value.HasMember("SuperResolution") && !value["SuperResolution"].IsNull())
    {
        if (!value["SuperResolution"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VideoEnhanceConfig.SuperResolution` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_superResolution.Deserialize(value["SuperResolution"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_superResolutionHasBeenSet = true;
    }

    if (value.HasMember("Hdr") && !value["Hdr"].IsNull())
    {
        if (!value["Hdr"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VideoEnhanceConfig.Hdr` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_hdr.Deserialize(value["Hdr"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_hdrHasBeenSet = true;
    }

    if (value.HasMember("Denoise") && !value["Denoise"].IsNull())
    {
        if (!value["Denoise"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VideoEnhanceConfig.Denoise` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_denoise.Deserialize(value["Denoise"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_denoiseHasBeenSet = true;
    }

    if (value.HasMember("ImageQualityEnhance") && !value["ImageQualityEnhance"].IsNull())
    {
        if (!value["ImageQualityEnhance"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VideoEnhanceConfig.ImageQualityEnhance` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_imageQualityEnhance.Deserialize(value["ImageQualityEnhance"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_imageQualityEnhanceHasBeenSet = true;
    }

    if (value.HasMember("ColorEnhance") && !value["ColorEnhance"].IsNull())
    {
        if (!value["ColorEnhance"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VideoEnhanceConfig.ColorEnhance` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_colorEnhance.Deserialize(value["ColorEnhance"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_colorEnhanceHasBeenSet = true;
    }

    if (value.HasMember("LowLightEnhance") && !value["LowLightEnhance"].IsNull())
    {
        if (!value["LowLightEnhance"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VideoEnhanceConfig.LowLightEnhance` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_lowLightEnhance.Deserialize(value["LowLightEnhance"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_lowLightEnhanceHasBeenSet = true;
    }

    if (value.HasMember("ScratchRepair") && !value["ScratchRepair"].IsNull())
    {
        if (!value["ScratchRepair"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VideoEnhanceConfig.ScratchRepair` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_scratchRepair.Deserialize(value["ScratchRepair"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_scratchRepairHasBeenSet = true;
    }

    if (value.HasMember("ArtifactRepair") && !value["ArtifactRepair"].IsNull())
    {
        if (!value["ArtifactRepair"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VideoEnhanceConfig.ArtifactRepair` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_artifactRepair.Deserialize(value["ArtifactRepair"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_artifactRepairHasBeenSet = true;
    }

    if (value.HasMember("DiffusionEnhance") && !value["DiffusionEnhance"].IsNull())
    {
        if (!value["DiffusionEnhance"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VideoEnhanceConfig.DiffusionEnhance` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_diffusionEnhance.Deserialize(value["DiffusionEnhance"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_diffusionEnhanceHasBeenSet = true;
    }

    if (value.HasMember("FrameRateWithDen") && !value["FrameRateWithDen"].IsNull())
    {
        if (!value["FrameRateWithDen"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VideoEnhanceConfig.FrameRateWithDen` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_frameRateWithDen.Deserialize(value["FrameRateWithDen"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_frameRateWithDenHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VideoEnhanceConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enhanceScenarioTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnhanceScenarioType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_enhanceScenarioType.c_str(), allocator).Move(), allocator);
    }

    if (m_superResolutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuperResolution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_superResolution.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_hdrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Hdr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_hdr.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_denoiseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Denoise";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_denoise.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_imageQualityEnhanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageQualityEnhance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_imageQualityEnhance.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_colorEnhanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColorEnhance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_colorEnhance.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_lowLightEnhanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LowLightEnhance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_lowLightEnhance.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_scratchRepairHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScratchRepair";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_scratchRepair.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_artifactRepairHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ArtifactRepair";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_artifactRepair.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_diffusionEnhanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiffusionEnhance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_diffusionEnhance.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_frameRateWithDenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrameRateWithDen";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_frameRateWithDen.ToJsonObject(value[key.c_str()], allocator);
    }

}


string VideoEnhanceConfig::GetEnhanceScenarioType() const
{
    return m_enhanceScenarioType;
}

void VideoEnhanceConfig::SetEnhanceScenarioType(const string& _enhanceScenarioType)
{
    m_enhanceScenarioType = _enhanceScenarioType;
    m_enhanceScenarioTypeHasBeenSet = true;
}

bool VideoEnhanceConfig::EnhanceScenarioTypeHasBeenSet() const
{
    return m_enhanceScenarioTypeHasBeenSet;
}

SuperResolutionInfo VideoEnhanceConfig::GetSuperResolution() const
{
    return m_superResolution;
}

void VideoEnhanceConfig::SetSuperResolution(const SuperResolutionInfo& _superResolution)
{
    m_superResolution = _superResolution;
    m_superResolutionHasBeenSet = true;
}

bool VideoEnhanceConfig::SuperResolutionHasBeenSet() const
{
    return m_superResolutionHasBeenSet;
}

HDRInfo VideoEnhanceConfig::GetHdr() const
{
    return m_hdr;
}

void VideoEnhanceConfig::SetHdr(const HDRInfo& _hdr)
{
    m_hdr = _hdr;
    m_hdrHasBeenSet = true;
}

bool VideoEnhanceConfig::HdrHasBeenSet() const
{
    return m_hdrHasBeenSet;
}

VideoDenoiseInfo VideoEnhanceConfig::GetDenoise() const
{
    return m_denoise;
}

void VideoEnhanceConfig::SetDenoise(const VideoDenoiseInfo& _denoise)
{
    m_denoise = _denoise;
    m_denoiseHasBeenSet = true;
}

bool VideoEnhanceConfig::DenoiseHasBeenSet() const
{
    return m_denoiseHasBeenSet;
}

ImageQualityEnhanceInfo VideoEnhanceConfig::GetImageQualityEnhance() const
{
    return m_imageQualityEnhance;
}

void VideoEnhanceConfig::SetImageQualityEnhance(const ImageQualityEnhanceInfo& _imageQualityEnhance)
{
    m_imageQualityEnhance = _imageQualityEnhance;
    m_imageQualityEnhanceHasBeenSet = true;
}

bool VideoEnhanceConfig::ImageQualityEnhanceHasBeenSet() const
{
    return m_imageQualityEnhanceHasBeenSet;
}

ColorEnhanceInfo VideoEnhanceConfig::GetColorEnhance() const
{
    return m_colorEnhance;
}

void VideoEnhanceConfig::SetColorEnhance(const ColorEnhanceInfo& _colorEnhance)
{
    m_colorEnhance = _colorEnhance;
    m_colorEnhanceHasBeenSet = true;
}

bool VideoEnhanceConfig::ColorEnhanceHasBeenSet() const
{
    return m_colorEnhanceHasBeenSet;
}

LowLightEnhanceInfo VideoEnhanceConfig::GetLowLightEnhance() const
{
    return m_lowLightEnhance;
}

void VideoEnhanceConfig::SetLowLightEnhance(const LowLightEnhanceInfo& _lowLightEnhance)
{
    m_lowLightEnhance = _lowLightEnhance;
    m_lowLightEnhanceHasBeenSet = true;
}

bool VideoEnhanceConfig::LowLightEnhanceHasBeenSet() const
{
    return m_lowLightEnhanceHasBeenSet;
}

ScratchRepairInfo VideoEnhanceConfig::GetScratchRepair() const
{
    return m_scratchRepair;
}

void VideoEnhanceConfig::SetScratchRepair(const ScratchRepairInfo& _scratchRepair)
{
    m_scratchRepair = _scratchRepair;
    m_scratchRepairHasBeenSet = true;
}

bool VideoEnhanceConfig::ScratchRepairHasBeenSet() const
{
    return m_scratchRepairHasBeenSet;
}

ArtifactRepairInfo VideoEnhanceConfig::GetArtifactRepair() const
{
    return m_artifactRepair;
}

void VideoEnhanceConfig::SetArtifactRepair(const ArtifactRepairInfo& _artifactRepair)
{
    m_artifactRepair = _artifactRepair;
    m_artifactRepairHasBeenSet = true;
}

bool VideoEnhanceConfig::ArtifactRepairHasBeenSet() const
{
    return m_artifactRepairHasBeenSet;
}

DiffusionEnhanceInfo VideoEnhanceConfig::GetDiffusionEnhance() const
{
    return m_diffusionEnhance;
}

void VideoEnhanceConfig::SetDiffusionEnhance(const DiffusionEnhanceInfo& _diffusionEnhance)
{
    m_diffusionEnhance = _diffusionEnhance;
    m_diffusionEnhanceHasBeenSet = true;
}

bool VideoEnhanceConfig::DiffusionEnhanceHasBeenSet() const
{
    return m_diffusionEnhanceHasBeenSet;
}

FrameRateWithDenInfo VideoEnhanceConfig::GetFrameRateWithDen() const
{
    return m_frameRateWithDen;
}

void VideoEnhanceConfig::SetFrameRateWithDen(const FrameRateWithDenInfo& _frameRateWithDen)
{
    m_frameRateWithDen = _frameRateWithDen;
    m_frameRateWithDenHasBeenSet = true;
}

bool VideoEnhanceConfig::FrameRateWithDenHasBeenSet() const
{
    return m_frameRateWithDenHasBeenSet;
}

