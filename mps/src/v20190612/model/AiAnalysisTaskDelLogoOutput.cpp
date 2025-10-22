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

#include <tencentcloud/mps/v20190612/model/AiAnalysisTaskDelLogoOutput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

AiAnalysisTaskDelLogoOutput::AiAnalysisTaskDelLogoOutput() :
    m_pathHasBeenSet(false),
    m_outputStorageHasBeenSet(false),
    m_originSubtitlePathHasBeenSet(false),
    m_translateSubtitlePathHasBeenSet(false),
    m_subtitlePosHasBeenSet(false),
    m_voiceClonedVideoHasBeenSet(false),
    m_voiceClonedMarkFileHasBeenSet(false)
{
}

CoreInternalOutcome AiAnalysisTaskDelLogoOutput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiAnalysisTaskDelLogoOutput.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("OutputStorage") && !value["OutputStorage"].IsNull())
    {
        if (!value["OutputStorage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AiAnalysisTaskDelLogoOutput.OutputStorage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_outputStorage.Deserialize(value["OutputStorage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_outputStorageHasBeenSet = true;
    }

    if (value.HasMember("OriginSubtitlePath") && !value["OriginSubtitlePath"].IsNull())
    {
        if (!value["OriginSubtitlePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiAnalysisTaskDelLogoOutput.OriginSubtitlePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originSubtitlePath = string(value["OriginSubtitlePath"].GetString());
        m_originSubtitlePathHasBeenSet = true;
    }

    if (value.HasMember("TranslateSubtitlePath") && !value["TranslateSubtitlePath"].IsNull())
    {
        if (!value["TranslateSubtitlePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiAnalysisTaskDelLogoOutput.TranslateSubtitlePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_translateSubtitlePath = string(value["TranslateSubtitlePath"].GetString());
        m_translateSubtitlePathHasBeenSet = true;
    }

    if (value.HasMember("SubtitlePos") && !value["SubtitlePos"].IsNull())
    {
        if (!value["SubtitlePos"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AiAnalysisTaskDelLogoOutput.SubtitlePos` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_subtitlePos.Deserialize(value["SubtitlePos"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_subtitlePosHasBeenSet = true;
    }

    if (value.HasMember("VoiceClonedVideo") && !value["VoiceClonedVideo"].IsNull())
    {
        if (!value["VoiceClonedVideo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiAnalysisTaskDelLogoOutput.VoiceClonedVideo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_voiceClonedVideo = string(value["VoiceClonedVideo"].GetString());
        m_voiceClonedVideoHasBeenSet = true;
    }

    if (value.HasMember("VoiceClonedMarkFile") && !value["VoiceClonedMarkFile"].IsNull())
    {
        if (!value["VoiceClonedMarkFile"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiAnalysisTaskDelLogoOutput.VoiceClonedMarkFile` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_voiceClonedMarkFile = string(value["VoiceClonedMarkFile"].GetString());
        m_voiceClonedMarkFileHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AiAnalysisTaskDelLogoOutput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_outputStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_outputStorage.ToJsonObject(value[key.c_str()], allocator);
    }

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

    if (m_subtitlePosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubtitlePos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_subtitlePos.ToJsonObject(value[key.c_str()], allocator);
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

}


string AiAnalysisTaskDelLogoOutput::GetPath() const
{
    return m_path;
}

void AiAnalysisTaskDelLogoOutput::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool AiAnalysisTaskDelLogoOutput::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

TaskOutputStorage AiAnalysisTaskDelLogoOutput::GetOutputStorage() const
{
    return m_outputStorage;
}

void AiAnalysisTaskDelLogoOutput::SetOutputStorage(const TaskOutputStorage& _outputStorage)
{
    m_outputStorage = _outputStorage;
    m_outputStorageHasBeenSet = true;
}

bool AiAnalysisTaskDelLogoOutput::OutputStorageHasBeenSet() const
{
    return m_outputStorageHasBeenSet;
}

string AiAnalysisTaskDelLogoOutput::GetOriginSubtitlePath() const
{
    return m_originSubtitlePath;
}

void AiAnalysisTaskDelLogoOutput::SetOriginSubtitlePath(const string& _originSubtitlePath)
{
    m_originSubtitlePath = _originSubtitlePath;
    m_originSubtitlePathHasBeenSet = true;
}

bool AiAnalysisTaskDelLogoOutput::OriginSubtitlePathHasBeenSet() const
{
    return m_originSubtitlePathHasBeenSet;
}

string AiAnalysisTaskDelLogoOutput::GetTranslateSubtitlePath() const
{
    return m_translateSubtitlePath;
}

void AiAnalysisTaskDelLogoOutput::SetTranslateSubtitlePath(const string& _translateSubtitlePath)
{
    m_translateSubtitlePath = _translateSubtitlePath;
    m_translateSubtitlePathHasBeenSet = true;
}

bool AiAnalysisTaskDelLogoOutput::TranslateSubtitlePathHasBeenSet() const
{
    return m_translateSubtitlePathHasBeenSet;
}

SubtitlePosition AiAnalysisTaskDelLogoOutput::GetSubtitlePos() const
{
    return m_subtitlePos;
}

void AiAnalysisTaskDelLogoOutput::SetSubtitlePos(const SubtitlePosition& _subtitlePos)
{
    m_subtitlePos = _subtitlePos;
    m_subtitlePosHasBeenSet = true;
}

bool AiAnalysisTaskDelLogoOutput::SubtitlePosHasBeenSet() const
{
    return m_subtitlePosHasBeenSet;
}

string AiAnalysisTaskDelLogoOutput::GetVoiceClonedVideo() const
{
    return m_voiceClonedVideo;
}

void AiAnalysisTaskDelLogoOutput::SetVoiceClonedVideo(const string& _voiceClonedVideo)
{
    m_voiceClonedVideo = _voiceClonedVideo;
    m_voiceClonedVideoHasBeenSet = true;
}

bool AiAnalysisTaskDelLogoOutput::VoiceClonedVideoHasBeenSet() const
{
    return m_voiceClonedVideoHasBeenSet;
}

string AiAnalysisTaskDelLogoOutput::GetVoiceClonedMarkFile() const
{
    return m_voiceClonedMarkFile;
}

void AiAnalysisTaskDelLogoOutput::SetVoiceClonedMarkFile(const string& _voiceClonedMarkFile)
{
    m_voiceClonedMarkFile = _voiceClonedMarkFile;
    m_voiceClonedMarkFileHasBeenSet = true;
}

bool AiAnalysisTaskDelLogoOutput::VoiceClonedMarkFileHasBeenSet() const
{
    return m_voiceClonedMarkFileHasBeenSet;
}

