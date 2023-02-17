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

#include <tencentcloud/vod/v20180717/model/RebuildMediaRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

RebuildMediaRequest::RebuildMediaRequest() :
    m_fileIdHasBeenSet(false),
    m_subAppIdHasBeenSet(false),
    m_startTimeOffsetHasBeenSet(false),
    m_endTimeOffsetHasBeenSet(false),
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
    m_targetInfoHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_sessionContextHasBeenSet(false),
    m_tasksPriorityHasBeenSet(false),
    m_extInfoHasBeenSet(false)
{
}

string RebuildMediaRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_fileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileId.c_str(), allocator).Move(), allocator);
    }

    if (m_subAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subAppId, allocator);
    }

    if (m_startTimeOffsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTimeOffset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startTimeOffset, allocator);
    }

    if (m_endTimeOffsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTimeOffset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endTimeOffset, allocator);
    }

    if (m_repairInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepairInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_repairInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_videoFrameInterpolationInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoFrameInterpolationInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_videoFrameInterpolationInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_superResolutionInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuperResolutionInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_superResolutionInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_hDRInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HDRInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_hDRInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_videoDenoiseInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoDenoiseInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_videoDenoiseInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_audioDenoiseInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioDenoiseInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_audioDenoiseInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_colorInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColorInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_colorInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_sharpInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SharpInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sharpInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_faceInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaceInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_faceInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_lowLightInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LowLightInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_lowLightInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_scratchRepairInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScratchRepairInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_scratchRepairInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_artifactRepairInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ArtifactRepairInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_artifactRepairInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_targetInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_targetInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionContextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionContext";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sessionContext.c_str(), allocator).Move(), allocator);
    }

    if (m_tasksPriorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TasksPriority";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_tasksPriority, allocator);
    }

    if (m_extInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_extInfo.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RebuildMediaRequest::GetFileId() const
{
    return m_fileId;
}

void RebuildMediaRequest::SetFileId(const string& _fileId)
{
    m_fileId = _fileId;
    m_fileIdHasBeenSet = true;
}

bool RebuildMediaRequest::FileIdHasBeenSet() const
{
    return m_fileIdHasBeenSet;
}

uint64_t RebuildMediaRequest::GetSubAppId() const
{
    return m_subAppId;
}

void RebuildMediaRequest::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool RebuildMediaRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

double RebuildMediaRequest::GetStartTimeOffset() const
{
    return m_startTimeOffset;
}

void RebuildMediaRequest::SetStartTimeOffset(const double& _startTimeOffset)
{
    m_startTimeOffset = _startTimeOffset;
    m_startTimeOffsetHasBeenSet = true;
}

bool RebuildMediaRequest::StartTimeOffsetHasBeenSet() const
{
    return m_startTimeOffsetHasBeenSet;
}

double RebuildMediaRequest::GetEndTimeOffset() const
{
    return m_endTimeOffset;
}

void RebuildMediaRequest::SetEndTimeOffset(const double& _endTimeOffset)
{
    m_endTimeOffset = _endTimeOffset;
    m_endTimeOffsetHasBeenSet = true;
}

bool RebuildMediaRequest::EndTimeOffsetHasBeenSet() const
{
    return m_endTimeOffsetHasBeenSet;
}

RepairInfo RebuildMediaRequest::GetRepairInfo() const
{
    return m_repairInfo;
}

void RebuildMediaRequest::SetRepairInfo(const RepairInfo& _repairInfo)
{
    m_repairInfo = _repairInfo;
    m_repairInfoHasBeenSet = true;
}

bool RebuildMediaRequest::RepairInfoHasBeenSet() const
{
    return m_repairInfoHasBeenSet;
}

VideoFrameInterpolationInfo RebuildMediaRequest::GetVideoFrameInterpolationInfo() const
{
    return m_videoFrameInterpolationInfo;
}

void RebuildMediaRequest::SetVideoFrameInterpolationInfo(const VideoFrameInterpolationInfo& _videoFrameInterpolationInfo)
{
    m_videoFrameInterpolationInfo = _videoFrameInterpolationInfo;
    m_videoFrameInterpolationInfoHasBeenSet = true;
}

bool RebuildMediaRequest::VideoFrameInterpolationInfoHasBeenSet() const
{
    return m_videoFrameInterpolationInfoHasBeenSet;
}

SuperResolutionInfo RebuildMediaRequest::GetSuperResolutionInfo() const
{
    return m_superResolutionInfo;
}

void RebuildMediaRequest::SetSuperResolutionInfo(const SuperResolutionInfo& _superResolutionInfo)
{
    m_superResolutionInfo = _superResolutionInfo;
    m_superResolutionInfoHasBeenSet = true;
}

bool RebuildMediaRequest::SuperResolutionInfoHasBeenSet() const
{
    return m_superResolutionInfoHasBeenSet;
}

HDRInfo RebuildMediaRequest::GetHDRInfo() const
{
    return m_hDRInfo;
}

void RebuildMediaRequest::SetHDRInfo(const HDRInfo& _hDRInfo)
{
    m_hDRInfo = _hDRInfo;
    m_hDRInfoHasBeenSet = true;
}

bool RebuildMediaRequest::HDRInfoHasBeenSet() const
{
    return m_hDRInfoHasBeenSet;
}

VideoDenoiseInfo RebuildMediaRequest::GetVideoDenoiseInfo() const
{
    return m_videoDenoiseInfo;
}

void RebuildMediaRequest::SetVideoDenoiseInfo(const VideoDenoiseInfo& _videoDenoiseInfo)
{
    m_videoDenoiseInfo = _videoDenoiseInfo;
    m_videoDenoiseInfoHasBeenSet = true;
}

bool RebuildMediaRequest::VideoDenoiseInfoHasBeenSet() const
{
    return m_videoDenoiseInfoHasBeenSet;
}

AudioDenoiseInfo RebuildMediaRequest::GetAudioDenoiseInfo() const
{
    return m_audioDenoiseInfo;
}

void RebuildMediaRequest::SetAudioDenoiseInfo(const AudioDenoiseInfo& _audioDenoiseInfo)
{
    m_audioDenoiseInfo = _audioDenoiseInfo;
    m_audioDenoiseInfoHasBeenSet = true;
}

bool RebuildMediaRequest::AudioDenoiseInfoHasBeenSet() const
{
    return m_audioDenoiseInfoHasBeenSet;
}

ColorEnhanceInfo RebuildMediaRequest::GetColorInfo() const
{
    return m_colorInfo;
}

void RebuildMediaRequest::SetColorInfo(const ColorEnhanceInfo& _colorInfo)
{
    m_colorInfo = _colorInfo;
    m_colorInfoHasBeenSet = true;
}

bool RebuildMediaRequest::ColorInfoHasBeenSet() const
{
    return m_colorInfoHasBeenSet;
}

SharpEnhanceInfo RebuildMediaRequest::GetSharpInfo() const
{
    return m_sharpInfo;
}

void RebuildMediaRequest::SetSharpInfo(const SharpEnhanceInfo& _sharpInfo)
{
    m_sharpInfo = _sharpInfo;
    m_sharpInfoHasBeenSet = true;
}

bool RebuildMediaRequest::SharpInfoHasBeenSet() const
{
    return m_sharpInfoHasBeenSet;
}

FaceEnhanceInfo RebuildMediaRequest::GetFaceInfo() const
{
    return m_faceInfo;
}

void RebuildMediaRequest::SetFaceInfo(const FaceEnhanceInfo& _faceInfo)
{
    m_faceInfo = _faceInfo;
    m_faceInfoHasBeenSet = true;
}

bool RebuildMediaRequest::FaceInfoHasBeenSet() const
{
    return m_faceInfoHasBeenSet;
}

LowLightEnhanceInfo RebuildMediaRequest::GetLowLightInfo() const
{
    return m_lowLightInfo;
}

void RebuildMediaRequest::SetLowLightInfo(const LowLightEnhanceInfo& _lowLightInfo)
{
    m_lowLightInfo = _lowLightInfo;
    m_lowLightInfoHasBeenSet = true;
}

bool RebuildMediaRequest::LowLightInfoHasBeenSet() const
{
    return m_lowLightInfoHasBeenSet;
}

ScratchRepairInfo RebuildMediaRequest::GetScratchRepairInfo() const
{
    return m_scratchRepairInfo;
}

void RebuildMediaRequest::SetScratchRepairInfo(const ScratchRepairInfo& _scratchRepairInfo)
{
    m_scratchRepairInfo = _scratchRepairInfo;
    m_scratchRepairInfoHasBeenSet = true;
}

bool RebuildMediaRequest::ScratchRepairInfoHasBeenSet() const
{
    return m_scratchRepairInfoHasBeenSet;
}

ArtifactRepairInfo RebuildMediaRequest::GetArtifactRepairInfo() const
{
    return m_artifactRepairInfo;
}

void RebuildMediaRequest::SetArtifactRepairInfo(const ArtifactRepairInfo& _artifactRepairInfo)
{
    m_artifactRepairInfo = _artifactRepairInfo;
    m_artifactRepairInfoHasBeenSet = true;
}

bool RebuildMediaRequest::ArtifactRepairInfoHasBeenSet() const
{
    return m_artifactRepairInfoHasBeenSet;
}

RebuildMediaTargetInfo RebuildMediaRequest::GetTargetInfo() const
{
    return m_targetInfo;
}

void RebuildMediaRequest::SetTargetInfo(const RebuildMediaTargetInfo& _targetInfo)
{
    m_targetInfo = _targetInfo;
    m_targetInfoHasBeenSet = true;
}

bool RebuildMediaRequest::TargetInfoHasBeenSet() const
{
    return m_targetInfoHasBeenSet;
}

string RebuildMediaRequest::GetSessionId() const
{
    return m_sessionId;
}

void RebuildMediaRequest::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool RebuildMediaRequest::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

string RebuildMediaRequest::GetSessionContext() const
{
    return m_sessionContext;
}

void RebuildMediaRequest::SetSessionContext(const string& _sessionContext)
{
    m_sessionContext = _sessionContext;
    m_sessionContextHasBeenSet = true;
}

bool RebuildMediaRequest::SessionContextHasBeenSet() const
{
    return m_sessionContextHasBeenSet;
}

int64_t RebuildMediaRequest::GetTasksPriority() const
{
    return m_tasksPriority;
}

void RebuildMediaRequest::SetTasksPriority(const int64_t& _tasksPriority)
{
    m_tasksPriority = _tasksPriority;
    m_tasksPriorityHasBeenSet = true;
}

bool RebuildMediaRequest::TasksPriorityHasBeenSet() const
{
    return m_tasksPriorityHasBeenSet;
}

string RebuildMediaRequest::GetExtInfo() const
{
    return m_extInfo;
}

void RebuildMediaRequest::SetExtInfo(const string& _extInfo)
{
    m_extInfo = _extInfo;
    m_extInfoHasBeenSet = true;
}

bool RebuildMediaRequest::ExtInfoHasBeenSet() const
{
    return m_extInfoHasBeenSet;
}


