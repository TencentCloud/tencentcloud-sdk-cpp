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

#include <tencentcloud/vod/v20180717/model/RebuildMediaTaskInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

RebuildMediaTaskInput::RebuildMediaTaskInput() :
    m_fileIdHasBeenSet(false),
    m_startTimeOffsetHasBeenSet(false),
    m_endTimeOffsetHasBeenSet(false),
    m_definitionHasBeenSet(false),
    m_repairInfoHasBeenSet(false),
    m_videoFrameInterpolationInfoHasBeenSet(false),
    m_superResolutionInfoHasBeenSet(false),
    m_hDRInfoHasBeenSet(false),
    m_videoDenoiseInfoHasBeenSet(false),
    m_audioDenoiseInfoHasBeenSet(false),
    m_colorInfoHasBeenSet(false),
    m_sharpInfoHasBeenSet(false),
    m_faceInfoHasBeenSet(false),
    m_lowLightInfoHasBeenSet(false),
    m_scratchRepairInfoHasBeenSet(false),
    m_artifactRepairInfoHasBeenSet(false),
    m_targetInfoHasBeenSet(false)
{
}

CoreInternalOutcome RebuildMediaTaskInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FileId") && !value["FileId"].IsNull())
    {
        if (!value["FileId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RebuildMediaTaskInput.FileId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileId = string(value["FileId"].GetString());
        m_fileIdHasBeenSet = true;
    }

    if (value.HasMember("StartTimeOffset") && !value["StartTimeOffset"].IsNull())
    {
        if (!value["StartTimeOffset"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RebuildMediaTaskInput.StartTimeOffset` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_startTimeOffset = value["StartTimeOffset"].GetDouble();
        m_startTimeOffsetHasBeenSet = true;
    }

    if (value.HasMember("EndTimeOffset") && !value["EndTimeOffset"].IsNull())
    {
        if (!value["EndTimeOffset"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RebuildMediaTaskInput.EndTimeOffset` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_endTimeOffset = value["EndTimeOffset"].GetDouble();
        m_endTimeOffsetHasBeenSet = true;
    }

    if (value.HasMember("Definition") && !value["Definition"].IsNull())
    {
        if (!value["Definition"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RebuildMediaTaskInput.Definition` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_definition = value["Definition"].GetInt64();
        m_definitionHasBeenSet = true;
    }

    if (value.HasMember("RepairInfo") && !value["RepairInfo"].IsNull())
    {
        if (!value["RepairInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RebuildMediaTaskInput.RepairInfo` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `RebuildMediaTaskInput.VideoFrameInterpolationInfo` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `RebuildMediaTaskInput.SuperResolutionInfo` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `RebuildMediaTaskInput.HDRInfo` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `RebuildMediaTaskInput.VideoDenoiseInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_videoDenoiseInfo.Deserialize(value["VideoDenoiseInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_videoDenoiseInfoHasBeenSet = true;
    }

    if (value.HasMember("AudioDenoiseInfo") && !value["AudioDenoiseInfo"].IsNull())
    {
        if (!value["AudioDenoiseInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RebuildMediaTaskInput.AudioDenoiseInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_audioDenoiseInfo.Deserialize(value["AudioDenoiseInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_audioDenoiseInfoHasBeenSet = true;
    }

    if (value.HasMember("ColorInfo") && !value["ColorInfo"].IsNull())
    {
        if (!value["ColorInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RebuildMediaTaskInput.ColorInfo` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `RebuildMediaTaskInput.SharpInfo` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `RebuildMediaTaskInput.FaceInfo` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `RebuildMediaTaskInput.LowLightInfo` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `RebuildMediaTaskInput.ScratchRepairInfo` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `RebuildMediaTaskInput.ArtifactRepairInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_artifactRepairInfo.Deserialize(value["ArtifactRepairInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_artifactRepairInfoHasBeenSet = true;
    }

    if (value.HasMember("TargetInfo") && !value["TargetInfo"].IsNull())
    {
        if (!value["TargetInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RebuildMediaTaskInput.TargetInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_targetInfo.Deserialize(value["TargetInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_targetInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RebuildMediaTaskInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileId.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeOffsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTimeOffset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTimeOffset, allocator);
    }

    if (m_endTimeOffsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTimeOffset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endTimeOffset, allocator);
    }

    if (m_definitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Definition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_definition, allocator);
    }

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

    if (m_audioDenoiseInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioDenoiseInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_audioDenoiseInfo.ToJsonObject(value[key.c_str()], allocator);
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

    if (m_targetInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_targetInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


string RebuildMediaTaskInput::GetFileId() const
{
    return m_fileId;
}

void RebuildMediaTaskInput::SetFileId(const string& _fileId)
{
    m_fileId = _fileId;
    m_fileIdHasBeenSet = true;
}

bool RebuildMediaTaskInput::FileIdHasBeenSet() const
{
    return m_fileIdHasBeenSet;
}

double RebuildMediaTaskInput::GetStartTimeOffset() const
{
    return m_startTimeOffset;
}

void RebuildMediaTaskInput::SetStartTimeOffset(const double& _startTimeOffset)
{
    m_startTimeOffset = _startTimeOffset;
    m_startTimeOffsetHasBeenSet = true;
}

bool RebuildMediaTaskInput::StartTimeOffsetHasBeenSet() const
{
    return m_startTimeOffsetHasBeenSet;
}

double RebuildMediaTaskInput::GetEndTimeOffset() const
{
    return m_endTimeOffset;
}

void RebuildMediaTaskInput::SetEndTimeOffset(const double& _endTimeOffset)
{
    m_endTimeOffset = _endTimeOffset;
    m_endTimeOffsetHasBeenSet = true;
}

bool RebuildMediaTaskInput::EndTimeOffsetHasBeenSet() const
{
    return m_endTimeOffsetHasBeenSet;
}

int64_t RebuildMediaTaskInput::GetDefinition() const
{
    return m_definition;
}

void RebuildMediaTaskInput::SetDefinition(const int64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool RebuildMediaTaskInput::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

RepairInfo RebuildMediaTaskInput::GetRepairInfo() const
{
    return m_repairInfo;
}

void RebuildMediaTaskInput::SetRepairInfo(const RepairInfo& _repairInfo)
{
    m_repairInfo = _repairInfo;
    m_repairInfoHasBeenSet = true;
}

bool RebuildMediaTaskInput::RepairInfoHasBeenSet() const
{
    return m_repairInfoHasBeenSet;
}

VideoFrameInterpolationInfo RebuildMediaTaskInput::GetVideoFrameInterpolationInfo() const
{
    return m_videoFrameInterpolationInfo;
}

void RebuildMediaTaskInput::SetVideoFrameInterpolationInfo(const VideoFrameInterpolationInfo& _videoFrameInterpolationInfo)
{
    m_videoFrameInterpolationInfo = _videoFrameInterpolationInfo;
    m_videoFrameInterpolationInfoHasBeenSet = true;
}

bool RebuildMediaTaskInput::VideoFrameInterpolationInfoHasBeenSet() const
{
    return m_videoFrameInterpolationInfoHasBeenSet;
}

SuperResolutionInfo RebuildMediaTaskInput::GetSuperResolutionInfo() const
{
    return m_superResolutionInfo;
}

void RebuildMediaTaskInput::SetSuperResolutionInfo(const SuperResolutionInfo& _superResolutionInfo)
{
    m_superResolutionInfo = _superResolutionInfo;
    m_superResolutionInfoHasBeenSet = true;
}

bool RebuildMediaTaskInput::SuperResolutionInfoHasBeenSet() const
{
    return m_superResolutionInfoHasBeenSet;
}

HDRInfo RebuildMediaTaskInput::GetHDRInfo() const
{
    return m_hDRInfo;
}

void RebuildMediaTaskInput::SetHDRInfo(const HDRInfo& _hDRInfo)
{
    m_hDRInfo = _hDRInfo;
    m_hDRInfoHasBeenSet = true;
}

bool RebuildMediaTaskInput::HDRInfoHasBeenSet() const
{
    return m_hDRInfoHasBeenSet;
}

VideoDenoiseInfo RebuildMediaTaskInput::GetVideoDenoiseInfo() const
{
    return m_videoDenoiseInfo;
}

void RebuildMediaTaskInput::SetVideoDenoiseInfo(const VideoDenoiseInfo& _videoDenoiseInfo)
{
    m_videoDenoiseInfo = _videoDenoiseInfo;
    m_videoDenoiseInfoHasBeenSet = true;
}

bool RebuildMediaTaskInput::VideoDenoiseInfoHasBeenSet() const
{
    return m_videoDenoiseInfoHasBeenSet;
}

AudioDenoiseInfo RebuildMediaTaskInput::GetAudioDenoiseInfo() const
{
    return m_audioDenoiseInfo;
}

void RebuildMediaTaskInput::SetAudioDenoiseInfo(const AudioDenoiseInfo& _audioDenoiseInfo)
{
    m_audioDenoiseInfo = _audioDenoiseInfo;
    m_audioDenoiseInfoHasBeenSet = true;
}

bool RebuildMediaTaskInput::AudioDenoiseInfoHasBeenSet() const
{
    return m_audioDenoiseInfoHasBeenSet;
}

ColorEnhanceInfo RebuildMediaTaskInput::GetColorInfo() const
{
    return m_colorInfo;
}

void RebuildMediaTaskInput::SetColorInfo(const ColorEnhanceInfo& _colorInfo)
{
    m_colorInfo = _colorInfo;
    m_colorInfoHasBeenSet = true;
}

bool RebuildMediaTaskInput::ColorInfoHasBeenSet() const
{
    return m_colorInfoHasBeenSet;
}

SharpEnhanceInfo RebuildMediaTaskInput::GetSharpInfo() const
{
    return m_sharpInfo;
}

void RebuildMediaTaskInput::SetSharpInfo(const SharpEnhanceInfo& _sharpInfo)
{
    m_sharpInfo = _sharpInfo;
    m_sharpInfoHasBeenSet = true;
}

bool RebuildMediaTaskInput::SharpInfoHasBeenSet() const
{
    return m_sharpInfoHasBeenSet;
}

FaceEnhanceInfo RebuildMediaTaskInput::GetFaceInfo() const
{
    return m_faceInfo;
}

void RebuildMediaTaskInput::SetFaceInfo(const FaceEnhanceInfo& _faceInfo)
{
    m_faceInfo = _faceInfo;
    m_faceInfoHasBeenSet = true;
}

bool RebuildMediaTaskInput::FaceInfoHasBeenSet() const
{
    return m_faceInfoHasBeenSet;
}

LowLightEnhanceInfo RebuildMediaTaskInput::GetLowLightInfo() const
{
    return m_lowLightInfo;
}

void RebuildMediaTaskInput::SetLowLightInfo(const LowLightEnhanceInfo& _lowLightInfo)
{
    m_lowLightInfo = _lowLightInfo;
    m_lowLightInfoHasBeenSet = true;
}

bool RebuildMediaTaskInput::LowLightInfoHasBeenSet() const
{
    return m_lowLightInfoHasBeenSet;
}

ScratchRepairInfo RebuildMediaTaskInput::GetScratchRepairInfo() const
{
    return m_scratchRepairInfo;
}

void RebuildMediaTaskInput::SetScratchRepairInfo(const ScratchRepairInfo& _scratchRepairInfo)
{
    m_scratchRepairInfo = _scratchRepairInfo;
    m_scratchRepairInfoHasBeenSet = true;
}

bool RebuildMediaTaskInput::ScratchRepairInfoHasBeenSet() const
{
    return m_scratchRepairInfoHasBeenSet;
}

ArtifactRepairInfo RebuildMediaTaskInput::GetArtifactRepairInfo() const
{
    return m_artifactRepairInfo;
}

void RebuildMediaTaskInput::SetArtifactRepairInfo(const ArtifactRepairInfo& _artifactRepairInfo)
{
    m_artifactRepairInfo = _artifactRepairInfo;
    m_artifactRepairInfoHasBeenSet = true;
}

bool RebuildMediaTaskInput::ArtifactRepairInfoHasBeenSet() const
{
    return m_artifactRepairInfoHasBeenSet;
}

RebuildMediaTargetInfo RebuildMediaTaskInput::GetTargetInfo() const
{
    return m_targetInfo;
}

void RebuildMediaTaskInput::SetTargetInfo(const RebuildMediaTargetInfo& _targetInfo)
{
    m_targetInfo = _targetInfo;
    m_targetInfoHasBeenSet = true;
}

bool RebuildMediaTaskInput::TargetInfoHasBeenSet() const
{
    return m_targetInfoHasBeenSet;
}

