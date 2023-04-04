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

#include <tencentcloud/vod/v20180717/model/RebuildVideoInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

RebuildVideoInfo::RebuildVideoInfo() :
    m_repairInfoHasBeenSet(false),
    m_videoFrameInterpolationInfoHasBeenSet(false),
    m_superResolutionInfoHasBeenSet(false),
    m_hDRInfoHasBeenSet(false),
    m_videoDenoiseInfoHasBeenSet(false),
    m_colorInfoHasBeenSet(false),
    m_sharpInfoHasBeenSet(false),
    m_faceInfoHasBeenSet(false),
    m_lowLightInfoHasBeenSet(false),
    m_scratchRepairInfoHasBeenSet(false),
    m_artifactRepairInfoHasBeenSet(false)
{
}

CoreInternalOutcome RebuildVideoInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RepairInfo") && !value["RepairInfo"].IsNull())
    {
        if (!value["RepairInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RebuildVideoInfo.RepairInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_repairInfo.Deserialize(value["RepairInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_repairInfoHasBeenSet = true;
    }

    if (value.HasMember("VideoFrameInterpolationInfo") && !value["VideoFrameInterpolationInfo"].IsNull())
    {
        if (!value["VideoFrameInterpolationInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RebuildVideoInfo.VideoFrameInterpolationInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_videoFrameInterpolationInfo.Deserialize(value["VideoFrameInterpolationInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_videoFrameInterpolationInfoHasBeenSet = true;
    }

    if (value.HasMember("SuperResolutionInfo") && !value["SuperResolutionInfo"].IsNull())
    {
        if (!value["SuperResolutionInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RebuildVideoInfo.SuperResolutionInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_superResolutionInfo.Deserialize(value["SuperResolutionInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_superResolutionInfoHasBeenSet = true;
    }

    if (value.HasMember("HDRInfo") && !value["HDRInfo"].IsNull())
    {
        if (!value["HDRInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RebuildVideoInfo.HDRInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_hDRInfo.Deserialize(value["HDRInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_hDRInfoHasBeenSet = true;
    }

    if (value.HasMember("VideoDenoiseInfo") && !value["VideoDenoiseInfo"].IsNull())
    {
        if (!value["VideoDenoiseInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RebuildVideoInfo.VideoDenoiseInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_videoDenoiseInfo.Deserialize(value["VideoDenoiseInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_videoDenoiseInfoHasBeenSet = true;
    }

    if (value.HasMember("ColorInfo") && !value["ColorInfo"].IsNull())
    {
        if (!value["ColorInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RebuildVideoInfo.ColorInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_colorInfo.Deserialize(value["ColorInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_colorInfoHasBeenSet = true;
    }

    if (value.HasMember("SharpInfo") && !value["SharpInfo"].IsNull())
    {
        if (!value["SharpInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RebuildVideoInfo.SharpInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sharpInfo.Deserialize(value["SharpInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sharpInfoHasBeenSet = true;
    }

    if (value.HasMember("FaceInfo") && !value["FaceInfo"].IsNull())
    {
        if (!value["FaceInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RebuildVideoInfo.FaceInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_faceInfo.Deserialize(value["FaceInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_faceInfoHasBeenSet = true;
    }

    if (value.HasMember("LowLightInfo") && !value["LowLightInfo"].IsNull())
    {
        if (!value["LowLightInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RebuildVideoInfo.LowLightInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_lowLightInfo.Deserialize(value["LowLightInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_lowLightInfoHasBeenSet = true;
    }

    if (value.HasMember("ScratchRepairInfo") && !value["ScratchRepairInfo"].IsNull())
    {
        if (!value["ScratchRepairInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RebuildVideoInfo.ScratchRepairInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_scratchRepairInfo.Deserialize(value["ScratchRepairInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_scratchRepairInfoHasBeenSet = true;
    }

    if (value.HasMember("ArtifactRepairInfo") && !value["ArtifactRepairInfo"].IsNull())
    {
        if (!value["ArtifactRepairInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RebuildVideoInfo.ArtifactRepairInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_artifactRepairInfo.Deserialize(value["ArtifactRepairInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_artifactRepairInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RebuildVideoInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_repairInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepairInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_repairInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_videoFrameInterpolationInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoFrameInterpolationInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_videoFrameInterpolationInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_superResolutionInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuperResolutionInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_superResolutionInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_hDRInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HDRInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_hDRInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_videoDenoiseInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoDenoiseInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_videoDenoiseInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_colorInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColorInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_colorInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_sharpInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SharpInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sharpInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_faceInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaceInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_faceInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_lowLightInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LowLightInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_lowLightInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_scratchRepairInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScratchRepairInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_scratchRepairInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_artifactRepairInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ArtifactRepairInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_artifactRepairInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


RepairInfo RebuildVideoInfo::GetRepairInfo() const
{
    return m_repairInfo;
}

void RebuildVideoInfo::SetRepairInfo(const RepairInfo& _repairInfo)
{
    m_repairInfo = _repairInfo;
    m_repairInfoHasBeenSet = true;
}

bool RebuildVideoInfo::RepairInfoHasBeenSet() const
{
    return m_repairInfoHasBeenSet;
}

VideoFrameInterpolationInfo RebuildVideoInfo::GetVideoFrameInterpolationInfo() const
{
    return m_videoFrameInterpolationInfo;
}

void RebuildVideoInfo::SetVideoFrameInterpolationInfo(const VideoFrameInterpolationInfo& _videoFrameInterpolationInfo)
{
    m_videoFrameInterpolationInfo = _videoFrameInterpolationInfo;
    m_videoFrameInterpolationInfoHasBeenSet = true;
}

bool RebuildVideoInfo::VideoFrameInterpolationInfoHasBeenSet() const
{
    return m_videoFrameInterpolationInfoHasBeenSet;
}

SuperResolutionInfo RebuildVideoInfo::GetSuperResolutionInfo() const
{
    return m_superResolutionInfo;
}

void RebuildVideoInfo::SetSuperResolutionInfo(const SuperResolutionInfo& _superResolutionInfo)
{
    m_superResolutionInfo = _superResolutionInfo;
    m_superResolutionInfoHasBeenSet = true;
}

bool RebuildVideoInfo::SuperResolutionInfoHasBeenSet() const
{
    return m_superResolutionInfoHasBeenSet;
}

HDRInfo RebuildVideoInfo::GetHDRInfo() const
{
    return m_hDRInfo;
}

void RebuildVideoInfo::SetHDRInfo(const HDRInfo& _hDRInfo)
{
    m_hDRInfo = _hDRInfo;
    m_hDRInfoHasBeenSet = true;
}

bool RebuildVideoInfo::HDRInfoHasBeenSet() const
{
    return m_hDRInfoHasBeenSet;
}

VideoDenoiseInfo RebuildVideoInfo::GetVideoDenoiseInfo() const
{
    return m_videoDenoiseInfo;
}

void RebuildVideoInfo::SetVideoDenoiseInfo(const VideoDenoiseInfo& _videoDenoiseInfo)
{
    m_videoDenoiseInfo = _videoDenoiseInfo;
    m_videoDenoiseInfoHasBeenSet = true;
}

bool RebuildVideoInfo::VideoDenoiseInfoHasBeenSet() const
{
    return m_videoDenoiseInfoHasBeenSet;
}

ColorEnhanceInfo RebuildVideoInfo::GetColorInfo() const
{
    return m_colorInfo;
}

void RebuildVideoInfo::SetColorInfo(const ColorEnhanceInfo& _colorInfo)
{
    m_colorInfo = _colorInfo;
    m_colorInfoHasBeenSet = true;
}

bool RebuildVideoInfo::ColorInfoHasBeenSet() const
{
    return m_colorInfoHasBeenSet;
}

SharpEnhanceInfo RebuildVideoInfo::GetSharpInfo() const
{
    return m_sharpInfo;
}

void RebuildVideoInfo::SetSharpInfo(const SharpEnhanceInfo& _sharpInfo)
{
    m_sharpInfo = _sharpInfo;
    m_sharpInfoHasBeenSet = true;
}

bool RebuildVideoInfo::SharpInfoHasBeenSet() const
{
    return m_sharpInfoHasBeenSet;
}

FaceEnhanceInfo RebuildVideoInfo::GetFaceInfo() const
{
    return m_faceInfo;
}

void RebuildVideoInfo::SetFaceInfo(const FaceEnhanceInfo& _faceInfo)
{
    m_faceInfo = _faceInfo;
    m_faceInfoHasBeenSet = true;
}

bool RebuildVideoInfo::FaceInfoHasBeenSet() const
{
    return m_faceInfoHasBeenSet;
}

LowLightEnhanceInfo RebuildVideoInfo::GetLowLightInfo() const
{
    return m_lowLightInfo;
}

void RebuildVideoInfo::SetLowLightInfo(const LowLightEnhanceInfo& _lowLightInfo)
{
    m_lowLightInfo = _lowLightInfo;
    m_lowLightInfoHasBeenSet = true;
}

bool RebuildVideoInfo::LowLightInfoHasBeenSet() const
{
    return m_lowLightInfoHasBeenSet;
}

ScratchRepairInfo RebuildVideoInfo::GetScratchRepairInfo() const
{
    return m_scratchRepairInfo;
}

void RebuildVideoInfo::SetScratchRepairInfo(const ScratchRepairInfo& _scratchRepairInfo)
{
    m_scratchRepairInfo = _scratchRepairInfo;
    m_scratchRepairInfoHasBeenSet = true;
}

bool RebuildVideoInfo::ScratchRepairInfoHasBeenSet() const
{
    return m_scratchRepairInfoHasBeenSet;
}

ArtifactRepairInfo RebuildVideoInfo::GetArtifactRepairInfo() const
{
    return m_artifactRepairInfo;
}

void RebuildVideoInfo::SetArtifactRepairInfo(const ArtifactRepairInfo& _artifactRepairInfo)
{
    m_artifactRepairInfo = _artifactRepairInfo;
    m_artifactRepairInfoHasBeenSet = true;
}

bool RebuildVideoInfo::ArtifactRepairInfoHasBeenSet() const
{
    return m_artifactRepairInfoHasBeenSet;
}

