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

#include <tencentcloud/mps/v20190612/model/VideoEnhanceConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

VideoEnhanceConfig::VideoEnhanceConfig() :
    m_frameRateHasBeenSet(false),
    m_superResolutionHasBeenSet(false),
    m_hdrHasBeenSet(false),
    m_denoiseHasBeenSet(false),
    m_imageQualityEnhanceHasBeenSet(false),
    m_colorEnhanceHasBeenSet(false),
    m_sharpEnhanceHasBeenSet(false),
    m_faceEnhanceHasBeenSet(false),
    m_lowLightEnhanceHasBeenSet(false),
    m_scratchRepairHasBeenSet(false),
    m_artifactRepairHasBeenSet(false)
{
}

CoreInternalOutcome VideoEnhanceConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FrameRate") && !value["FrameRate"].IsNull())
    {
        if (!value["FrameRate"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VideoEnhanceConfig.FrameRate` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_frameRate.Deserialize(value["FrameRate"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_frameRateHasBeenSet = true;
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

    if (value.HasMember("SharpEnhance") && !value["SharpEnhance"].IsNull())
    {
        if (!value["SharpEnhance"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VideoEnhanceConfig.SharpEnhance` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sharpEnhance.Deserialize(value["SharpEnhance"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sharpEnhanceHasBeenSet = true;
    }

    if (value.HasMember("FaceEnhance") && !value["FaceEnhance"].IsNull())
    {
        if (!value["FaceEnhance"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VideoEnhanceConfig.FaceEnhance` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_faceEnhance.Deserialize(value["FaceEnhance"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_faceEnhanceHasBeenSet = true;
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


    return CoreInternalOutcome(true);
}

void VideoEnhanceConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_frameRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrameRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_frameRate.ToJsonObject(value[key.c_str()], allocator);
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

    if (m_sharpEnhanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SharpEnhance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sharpEnhance.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_faceEnhanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaceEnhance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_faceEnhance.ToJsonObject(value[key.c_str()], allocator);
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

}


FrameRateConfig VideoEnhanceConfig::GetFrameRate() const
{
    return m_frameRate;
}

void VideoEnhanceConfig::SetFrameRate(const FrameRateConfig& _frameRate)
{
    m_frameRate = _frameRate;
    m_frameRateHasBeenSet = true;
}

bool VideoEnhanceConfig::FrameRateHasBeenSet() const
{
    return m_frameRateHasBeenSet;
}

SuperResolutionConfig VideoEnhanceConfig::GetSuperResolution() const
{
    return m_superResolution;
}

void VideoEnhanceConfig::SetSuperResolution(const SuperResolutionConfig& _superResolution)
{
    m_superResolution = _superResolution;
    m_superResolutionHasBeenSet = true;
}

bool VideoEnhanceConfig::SuperResolutionHasBeenSet() const
{
    return m_superResolutionHasBeenSet;
}

HdrConfig VideoEnhanceConfig::GetHdr() const
{
    return m_hdr;
}

void VideoEnhanceConfig::SetHdr(const HdrConfig& _hdr)
{
    m_hdr = _hdr;
    m_hdrHasBeenSet = true;
}

bool VideoEnhanceConfig::HdrHasBeenSet() const
{
    return m_hdrHasBeenSet;
}

VideoDenoiseConfig VideoEnhanceConfig::GetDenoise() const
{
    return m_denoise;
}

void VideoEnhanceConfig::SetDenoise(const VideoDenoiseConfig& _denoise)
{
    m_denoise = _denoise;
    m_denoiseHasBeenSet = true;
}

bool VideoEnhanceConfig::DenoiseHasBeenSet() const
{
    return m_denoiseHasBeenSet;
}

ImageQualityEnhanceConfig VideoEnhanceConfig::GetImageQualityEnhance() const
{
    return m_imageQualityEnhance;
}

void VideoEnhanceConfig::SetImageQualityEnhance(const ImageQualityEnhanceConfig& _imageQualityEnhance)
{
    m_imageQualityEnhance = _imageQualityEnhance;
    m_imageQualityEnhanceHasBeenSet = true;
}

bool VideoEnhanceConfig::ImageQualityEnhanceHasBeenSet() const
{
    return m_imageQualityEnhanceHasBeenSet;
}

ColorEnhanceConfig VideoEnhanceConfig::GetColorEnhance() const
{
    return m_colorEnhance;
}

void VideoEnhanceConfig::SetColorEnhance(const ColorEnhanceConfig& _colorEnhance)
{
    m_colorEnhance = _colorEnhance;
    m_colorEnhanceHasBeenSet = true;
}

bool VideoEnhanceConfig::ColorEnhanceHasBeenSet() const
{
    return m_colorEnhanceHasBeenSet;
}

SharpEnhanceConfig VideoEnhanceConfig::GetSharpEnhance() const
{
    return m_sharpEnhance;
}

void VideoEnhanceConfig::SetSharpEnhance(const SharpEnhanceConfig& _sharpEnhance)
{
    m_sharpEnhance = _sharpEnhance;
    m_sharpEnhanceHasBeenSet = true;
}

bool VideoEnhanceConfig::SharpEnhanceHasBeenSet() const
{
    return m_sharpEnhanceHasBeenSet;
}

FaceEnhanceConfig VideoEnhanceConfig::GetFaceEnhance() const
{
    return m_faceEnhance;
}

void VideoEnhanceConfig::SetFaceEnhance(const FaceEnhanceConfig& _faceEnhance)
{
    m_faceEnhance = _faceEnhance;
    m_faceEnhanceHasBeenSet = true;
}

bool VideoEnhanceConfig::FaceEnhanceHasBeenSet() const
{
    return m_faceEnhanceHasBeenSet;
}

LowLightEnhanceConfig VideoEnhanceConfig::GetLowLightEnhance() const
{
    return m_lowLightEnhance;
}

void VideoEnhanceConfig::SetLowLightEnhance(const LowLightEnhanceConfig& _lowLightEnhance)
{
    m_lowLightEnhance = _lowLightEnhance;
    m_lowLightEnhanceHasBeenSet = true;
}

bool VideoEnhanceConfig::LowLightEnhanceHasBeenSet() const
{
    return m_lowLightEnhanceHasBeenSet;
}

ScratchRepairConfig VideoEnhanceConfig::GetScratchRepair() const
{
    return m_scratchRepair;
}

void VideoEnhanceConfig::SetScratchRepair(const ScratchRepairConfig& _scratchRepair)
{
    m_scratchRepair = _scratchRepair;
    m_scratchRepairHasBeenSet = true;
}

bool VideoEnhanceConfig::ScratchRepairHasBeenSet() const
{
    return m_scratchRepairHasBeenSet;
}

ArtifactRepairConfig VideoEnhanceConfig::GetArtifactRepair() const
{
    return m_artifactRepair;
}

void VideoEnhanceConfig::SetArtifactRepair(const ArtifactRepairConfig& _artifactRepair)
{
    m_artifactRepair = _artifactRepair;
    m_artifactRepairHasBeenSet = true;
}

bool VideoEnhanceConfig::ArtifactRepairHasBeenSet() const
{
    return m_artifactRepairHasBeenSet;
}

