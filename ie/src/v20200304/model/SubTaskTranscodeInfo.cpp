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

#include <tencentcloud/ie/v20200304/model/SubTaskTranscodeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ie::V20200304::Model;
using namespace std;

SubTaskTranscodeInfo::SubTaskTranscodeInfo() :
    m_taskNameHasBeenSet(false),
    m_targetInfoHasBeenSet(false),
    m_editInfoHasBeenSet(false),
    m_videoInfoHasBeenSet(false),
    m_audioInfoHasBeenSet(false),
    m_muxInfoHasBeenSet(false)
{
}

CoreInternalOutcome SubTaskTranscodeInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubTaskTranscodeInfo.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("TargetInfo") && !value["TargetInfo"].IsNull())
    {
        if (!value["TargetInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SubTaskTranscodeInfo.TargetInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_targetInfo.Deserialize(value["TargetInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_targetInfoHasBeenSet = true;
    }

    if (value.HasMember("EditInfo") && !value["EditInfo"].IsNull())
    {
        if (!value["EditInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SubTaskTranscodeInfo.EditInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_editInfo.Deserialize(value["EditInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_editInfoHasBeenSet = true;
    }

    if (value.HasMember("VideoInfo") && !value["VideoInfo"].IsNull())
    {
        if (!value["VideoInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SubTaskTranscodeInfo.VideoInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_videoInfo.Deserialize(value["VideoInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_videoInfoHasBeenSet = true;
    }

    if (value.HasMember("AudioInfo") && !value["AudioInfo"].IsNull())
    {
        if (!value["AudioInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SubTaskTranscodeInfo.AudioInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_audioInfo.Deserialize(value["AudioInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_audioInfoHasBeenSet = true;
    }

    if (value.HasMember("MuxInfo") && !value["MuxInfo"].IsNull())
    {
        if (!value["MuxInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SubTaskTranscodeInfo.MuxInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_muxInfo.Deserialize(value["MuxInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_muxInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SubTaskTranscodeInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_targetInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_targetInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_editInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EditInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_editInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_videoInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_videoInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_audioInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_audioInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_muxInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MuxInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_muxInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


string SubTaskTranscodeInfo::GetTaskName() const
{
    return m_taskName;
}

void SubTaskTranscodeInfo::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool SubTaskTranscodeInfo::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

TargetInfo SubTaskTranscodeInfo::GetTargetInfo() const
{
    return m_targetInfo;
}

void SubTaskTranscodeInfo::SetTargetInfo(const TargetInfo& _targetInfo)
{
    m_targetInfo = _targetInfo;
    m_targetInfoHasBeenSet = true;
}

bool SubTaskTranscodeInfo::TargetInfoHasBeenSet() const
{
    return m_targetInfoHasBeenSet;
}

EditInfo SubTaskTranscodeInfo::GetEditInfo() const
{
    return m_editInfo;
}

void SubTaskTranscodeInfo::SetEditInfo(const EditInfo& _editInfo)
{
    m_editInfo = _editInfo;
    m_editInfoHasBeenSet = true;
}

bool SubTaskTranscodeInfo::EditInfoHasBeenSet() const
{
    return m_editInfoHasBeenSet;
}

VideoInfo SubTaskTranscodeInfo::GetVideoInfo() const
{
    return m_videoInfo;
}

void SubTaskTranscodeInfo::SetVideoInfo(const VideoInfo& _videoInfo)
{
    m_videoInfo = _videoInfo;
    m_videoInfoHasBeenSet = true;
}

bool SubTaskTranscodeInfo::VideoInfoHasBeenSet() const
{
    return m_videoInfoHasBeenSet;
}

AudioInfo SubTaskTranscodeInfo::GetAudioInfo() const
{
    return m_audioInfo;
}

void SubTaskTranscodeInfo::SetAudioInfo(const AudioInfo& _audioInfo)
{
    m_audioInfo = _audioInfo;
    m_audioInfoHasBeenSet = true;
}

bool SubTaskTranscodeInfo::AudioInfoHasBeenSet() const
{
    return m_audioInfoHasBeenSet;
}

MuxInfo SubTaskTranscodeInfo::GetMuxInfo() const
{
    return m_muxInfo;
}

void SubTaskTranscodeInfo::SetMuxInfo(const MuxInfo& _muxInfo)
{
    m_muxInfo = _muxInfo;
    m_muxInfoHasBeenSet = true;
}

bool SubTaskTranscodeInfo::MuxInfoHasBeenSet() const
{
    return m_muxInfoHasBeenSet;
}

