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

#include <tencentcloud/mps/v20190612/model/AIDubbingTaskOutput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

AIDubbingTaskOutput::AIDubbingTaskOutput() :
    m_originSubtitlePathHasBeenSet(false),
    m_translateSubtitlePathHasBeenSet(false),
    m_voiceClonedVideoHasBeenSet(false),
    m_voiceClonedMarkFileHasBeenSet(false),
    m_videoPathHasBeenSet(false),
    m_originSubtitleFileIdHasBeenSet(false),
    m_translateSubtitleFileIdHasBeenSet(false),
    m_speakerPathHasBeenSet(false),
    m_speakerFileIdHasBeenSet(false),
    m_eraseVideoFileIdHasBeenSet(false),
    m_eraseVideoPathHasBeenSet(false),
    m_dstAudioPathHasBeenSet(false),
    m_dstAudioFileIdHasBeenSet(false),
    m_dubbingEditInfoUrlHasBeenSet(false),
    m_subtitlePosHasBeenSet(false),
    m_outputStorageHasBeenSet(false)
{
}

CoreInternalOutcome AIDubbingTaskOutput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OriginSubtitlePath") && !value["OriginSubtitlePath"].IsNull())
    {
        if (!value["OriginSubtitlePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIDubbingTaskOutput.OriginSubtitlePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originSubtitlePath = string(value["OriginSubtitlePath"].GetString());
        m_originSubtitlePathHasBeenSet = true;
    }

    if (value.HasMember("TranslateSubtitlePath") && !value["TranslateSubtitlePath"].IsNull())
    {
        if (!value["TranslateSubtitlePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIDubbingTaskOutput.TranslateSubtitlePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_translateSubtitlePath = string(value["TranslateSubtitlePath"].GetString());
        m_translateSubtitlePathHasBeenSet = true;
    }

    if (value.HasMember("VoiceClonedVideo") && !value["VoiceClonedVideo"].IsNull())
    {
        if (!value["VoiceClonedVideo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIDubbingTaskOutput.VoiceClonedVideo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_voiceClonedVideo = string(value["VoiceClonedVideo"].GetString());
        m_voiceClonedVideoHasBeenSet = true;
    }

    if (value.HasMember("VoiceClonedMarkFile") && !value["VoiceClonedMarkFile"].IsNull())
    {
        if (!value["VoiceClonedMarkFile"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIDubbingTaskOutput.VoiceClonedMarkFile` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_voiceClonedMarkFile = string(value["VoiceClonedMarkFile"].GetString());
        m_voiceClonedMarkFileHasBeenSet = true;
    }

    if (value.HasMember("VideoPath") && !value["VideoPath"].IsNull())
    {
        if (!value["VideoPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIDubbingTaskOutput.VideoPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_videoPath = string(value["VideoPath"].GetString());
        m_videoPathHasBeenSet = true;
    }

    if (value.HasMember("OriginSubtitleFileId") && !value["OriginSubtitleFileId"].IsNull())
    {
        if (!value["OriginSubtitleFileId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIDubbingTaskOutput.OriginSubtitleFileId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originSubtitleFileId = string(value["OriginSubtitleFileId"].GetString());
        m_originSubtitleFileIdHasBeenSet = true;
    }

    if (value.HasMember("TranslateSubtitleFileId") && !value["TranslateSubtitleFileId"].IsNull())
    {
        if (!value["TranslateSubtitleFileId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIDubbingTaskOutput.TranslateSubtitleFileId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_translateSubtitleFileId = string(value["TranslateSubtitleFileId"].GetString());
        m_translateSubtitleFileIdHasBeenSet = true;
    }

    if (value.HasMember("SpeakerPath") && !value["SpeakerPath"].IsNull())
    {
        if (!value["SpeakerPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIDubbingTaskOutput.SpeakerPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_speakerPath = string(value["SpeakerPath"].GetString());
        m_speakerPathHasBeenSet = true;
    }

    if (value.HasMember("SpeakerFileId") && !value["SpeakerFileId"].IsNull())
    {
        if (!value["SpeakerFileId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIDubbingTaskOutput.SpeakerFileId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_speakerFileId = string(value["SpeakerFileId"].GetString());
        m_speakerFileIdHasBeenSet = true;
    }

    if (value.HasMember("EraseVideoFileId") && !value["EraseVideoFileId"].IsNull())
    {
        if (!value["EraseVideoFileId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIDubbingTaskOutput.EraseVideoFileId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eraseVideoFileId = string(value["EraseVideoFileId"].GetString());
        m_eraseVideoFileIdHasBeenSet = true;
    }

    if (value.HasMember("EraseVideoPath") && !value["EraseVideoPath"].IsNull())
    {
        if (!value["EraseVideoPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIDubbingTaskOutput.EraseVideoPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eraseVideoPath = string(value["EraseVideoPath"].GetString());
        m_eraseVideoPathHasBeenSet = true;
    }

    if (value.HasMember("DstAudioPath") && !value["DstAudioPath"].IsNull())
    {
        if (!value["DstAudioPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIDubbingTaskOutput.DstAudioPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstAudioPath = string(value["DstAudioPath"].GetString());
        m_dstAudioPathHasBeenSet = true;
    }

    if (value.HasMember("DstAudioFileId") && !value["DstAudioFileId"].IsNull())
    {
        if (!value["DstAudioFileId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIDubbingTaskOutput.DstAudioFileId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstAudioFileId = string(value["DstAudioFileId"].GetString());
        m_dstAudioFileIdHasBeenSet = true;
    }

    if (value.HasMember("DubbingEditInfoUrl") && !value["DubbingEditInfoUrl"].IsNull())
    {
        if (!value["DubbingEditInfoUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIDubbingTaskOutput.DubbingEditInfoUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dubbingEditInfoUrl = string(value["DubbingEditInfoUrl"].GetString());
        m_dubbingEditInfoUrlHasBeenSet = true;
    }

    if (value.HasMember("SubtitlePos") && !value["SubtitlePos"].IsNull())
    {
        if (!value["SubtitlePos"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AIDubbingTaskOutput.SubtitlePos` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_subtitlePos.Deserialize(value["SubtitlePos"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_subtitlePosHasBeenSet = true;
    }

    if (value.HasMember("OutputStorage") && !value["OutputStorage"].IsNull())
    {
        if (!value["OutputStorage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AIDubbingTaskOutput.OutputStorage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_outputStorage.Deserialize(value["OutputStorage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_outputStorageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AIDubbingTaskOutput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_originSubtitlePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginSubtitlePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originSubtitlePath.c_str(), allocator).Move(), allocator);
    }

    if (m_translateSubtitlePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranslateSubtitlePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_translateSubtitlePath.c_str(), allocator).Move(), allocator);
    }

    if (m_voiceClonedVideoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceClonedVideo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_voiceClonedVideo.c_str(), allocator).Move(), allocator);
    }

    if (m_voiceClonedMarkFileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceClonedMarkFile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_voiceClonedMarkFile.c_str(), allocator).Move(), allocator);
    }

    if (m_videoPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_videoPath.c_str(), allocator).Move(), allocator);
    }

    if (m_originSubtitleFileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginSubtitleFileId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originSubtitleFileId.c_str(), allocator).Move(), allocator);
    }

    if (m_translateSubtitleFileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranslateSubtitleFileId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_translateSubtitleFileId.c_str(), allocator).Move(), allocator);
    }

    if (m_speakerPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpeakerPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_speakerPath.c_str(), allocator).Move(), allocator);
    }

    if (m_speakerFileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpeakerFileId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_speakerFileId.c_str(), allocator).Move(), allocator);
    }

    if (m_eraseVideoFileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EraseVideoFileId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eraseVideoFileId.c_str(), allocator).Move(), allocator);
    }

    if (m_eraseVideoPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EraseVideoPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eraseVideoPath.c_str(), allocator).Move(), allocator);
    }

    if (m_dstAudioPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstAudioPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstAudioPath.c_str(), allocator).Move(), allocator);
    }

    if (m_dstAudioFileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstAudioFileId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstAudioFileId.c_str(), allocator).Move(), allocator);
    }

    if (m_dubbingEditInfoUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DubbingEditInfoUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dubbingEditInfoUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_subtitlePosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubtitlePos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_subtitlePos.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_outputStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_outputStorage.ToJsonObject(value[key.c_str()], allocator);
    }

}


string AIDubbingTaskOutput::GetOriginSubtitlePath() const
{
    return m_originSubtitlePath;
}

void AIDubbingTaskOutput::SetOriginSubtitlePath(const string& _originSubtitlePath)
{
    m_originSubtitlePath = _originSubtitlePath;
    m_originSubtitlePathHasBeenSet = true;
}

bool AIDubbingTaskOutput::OriginSubtitlePathHasBeenSet() const
{
    return m_originSubtitlePathHasBeenSet;
}

string AIDubbingTaskOutput::GetTranslateSubtitlePath() const
{
    return m_translateSubtitlePath;
}

void AIDubbingTaskOutput::SetTranslateSubtitlePath(const string& _translateSubtitlePath)
{
    m_translateSubtitlePath = _translateSubtitlePath;
    m_translateSubtitlePathHasBeenSet = true;
}

bool AIDubbingTaskOutput::TranslateSubtitlePathHasBeenSet() const
{
    return m_translateSubtitlePathHasBeenSet;
}

string AIDubbingTaskOutput::GetVoiceClonedVideo() const
{
    return m_voiceClonedVideo;
}

void AIDubbingTaskOutput::SetVoiceClonedVideo(const string& _voiceClonedVideo)
{
    m_voiceClonedVideo = _voiceClonedVideo;
    m_voiceClonedVideoHasBeenSet = true;
}

bool AIDubbingTaskOutput::VoiceClonedVideoHasBeenSet() const
{
    return m_voiceClonedVideoHasBeenSet;
}

string AIDubbingTaskOutput::GetVoiceClonedMarkFile() const
{
    return m_voiceClonedMarkFile;
}

void AIDubbingTaskOutput::SetVoiceClonedMarkFile(const string& _voiceClonedMarkFile)
{
    m_voiceClonedMarkFile = _voiceClonedMarkFile;
    m_voiceClonedMarkFileHasBeenSet = true;
}

bool AIDubbingTaskOutput::VoiceClonedMarkFileHasBeenSet() const
{
    return m_voiceClonedMarkFileHasBeenSet;
}

string AIDubbingTaskOutput::GetVideoPath() const
{
    return m_videoPath;
}

void AIDubbingTaskOutput::SetVideoPath(const string& _videoPath)
{
    m_videoPath = _videoPath;
    m_videoPathHasBeenSet = true;
}

bool AIDubbingTaskOutput::VideoPathHasBeenSet() const
{
    return m_videoPathHasBeenSet;
}

string AIDubbingTaskOutput::GetOriginSubtitleFileId() const
{
    return m_originSubtitleFileId;
}

void AIDubbingTaskOutput::SetOriginSubtitleFileId(const string& _originSubtitleFileId)
{
    m_originSubtitleFileId = _originSubtitleFileId;
    m_originSubtitleFileIdHasBeenSet = true;
}

bool AIDubbingTaskOutput::OriginSubtitleFileIdHasBeenSet() const
{
    return m_originSubtitleFileIdHasBeenSet;
}

string AIDubbingTaskOutput::GetTranslateSubtitleFileId() const
{
    return m_translateSubtitleFileId;
}

void AIDubbingTaskOutput::SetTranslateSubtitleFileId(const string& _translateSubtitleFileId)
{
    m_translateSubtitleFileId = _translateSubtitleFileId;
    m_translateSubtitleFileIdHasBeenSet = true;
}

bool AIDubbingTaskOutput::TranslateSubtitleFileIdHasBeenSet() const
{
    return m_translateSubtitleFileIdHasBeenSet;
}

string AIDubbingTaskOutput::GetSpeakerPath() const
{
    return m_speakerPath;
}

void AIDubbingTaskOutput::SetSpeakerPath(const string& _speakerPath)
{
    m_speakerPath = _speakerPath;
    m_speakerPathHasBeenSet = true;
}

bool AIDubbingTaskOutput::SpeakerPathHasBeenSet() const
{
    return m_speakerPathHasBeenSet;
}

string AIDubbingTaskOutput::GetSpeakerFileId() const
{
    return m_speakerFileId;
}

void AIDubbingTaskOutput::SetSpeakerFileId(const string& _speakerFileId)
{
    m_speakerFileId = _speakerFileId;
    m_speakerFileIdHasBeenSet = true;
}

bool AIDubbingTaskOutput::SpeakerFileIdHasBeenSet() const
{
    return m_speakerFileIdHasBeenSet;
}

string AIDubbingTaskOutput::GetEraseVideoFileId() const
{
    return m_eraseVideoFileId;
}

void AIDubbingTaskOutput::SetEraseVideoFileId(const string& _eraseVideoFileId)
{
    m_eraseVideoFileId = _eraseVideoFileId;
    m_eraseVideoFileIdHasBeenSet = true;
}

bool AIDubbingTaskOutput::EraseVideoFileIdHasBeenSet() const
{
    return m_eraseVideoFileIdHasBeenSet;
}

string AIDubbingTaskOutput::GetEraseVideoPath() const
{
    return m_eraseVideoPath;
}

void AIDubbingTaskOutput::SetEraseVideoPath(const string& _eraseVideoPath)
{
    m_eraseVideoPath = _eraseVideoPath;
    m_eraseVideoPathHasBeenSet = true;
}

bool AIDubbingTaskOutput::EraseVideoPathHasBeenSet() const
{
    return m_eraseVideoPathHasBeenSet;
}

string AIDubbingTaskOutput::GetDstAudioPath() const
{
    return m_dstAudioPath;
}

void AIDubbingTaskOutput::SetDstAudioPath(const string& _dstAudioPath)
{
    m_dstAudioPath = _dstAudioPath;
    m_dstAudioPathHasBeenSet = true;
}

bool AIDubbingTaskOutput::DstAudioPathHasBeenSet() const
{
    return m_dstAudioPathHasBeenSet;
}

string AIDubbingTaskOutput::GetDstAudioFileId() const
{
    return m_dstAudioFileId;
}

void AIDubbingTaskOutput::SetDstAudioFileId(const string& _dstAudioFileId)
{
    m_dstAudioFileId = _dstAudioFileId;
    m_dstAudioFileIdHasBeenSet = true;
}

bool AIDubbingTaskOutput::DstAudioFileIdHasBeenSet() const
{
    return m_dstAudioFileIdHasBeenSet;
}

string AIDubbingTaskOutput::GetDubbingEditInfoUrl() const
{
    return m_dubbingEditInfoUrl;
}

void AIDubbingTaskOutput::SetDubbingEditInfoUrl(const string& _dubbingEditInfoUrl)
{
    m_dubbingEditInfoUrl = _dubbingEditInfoUrl;
    m_dubbingEditInfoUrlHasBeenSet = true;
}

bool AIDubbingTaskOutput::DubbingEditInfoUrlHasBeenSet() const
{
    return m_dubbingEditInfoUrlHasBeenSet;
}

SubtitlePosition AIDubbingTaskOutput::GetSubtitlePos() const
{
    return m_subtitlePos;
}

void AIDubbingTaskOutput::SetSubtitlePos(const SubtitlePosition& _subtitlePos)
{
    m_subtitlePos = _subtitlePos;
    m_subtitlePosHasBeenSet = true;
}

bool AIDubbingTaskOutput::SubtitlePosHasBeenSet() const
{
    return m_subtitlePosHasBeenSet;
}

TaskOutputStorage AIDubbingTaskOutput::GetOutputStorage() const
{
    return m_outputStorage;
}

void AIDubbingTaskOutput::SetOutputStorage(const TaskOutputStorage& _outputStorage)
{
    m_outputStorage = _outputStorage;
    m_outputStorageHasBeenSet = true;
}

bool AIDubbingTaskOutput::OutputStorageHasBeenSet() const
{
    return m_outputStorageHasBeenSet;
}

