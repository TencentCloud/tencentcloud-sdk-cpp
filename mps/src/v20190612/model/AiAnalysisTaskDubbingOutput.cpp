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

#include <tencentcloud/mps/v20190612/model/AiAnalysisTaskDubbingOutput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

AiAnalysisTaskDubbingOutput::AiAnalysisTaskDubbingOutput() :
    m_videoPathHasBeenSet(false),
    m_speakerPathHasBeenSet(false),
    m_outputStorageHasBeenSet(false)
{
}

CoreInternalOutcome AiAnalysisTaskDubbingOutput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VideoPath") && !value["VideoPath"].IsNull())
    {
        if (!value["VideoPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiAnalysisTaskDubbingOutput.VideoPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_videoPath = string(value["VideoPath"].GetString());
        m_videoPathHasBeenSet = true;
    }

    if (value.HasMember("SpeakerPath") && !value["SpeakerPath"].IsNull())
    {
        if (!value["SpeakerPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiAnalysisTaskDubbingOutput.SpeakerPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_speakerPath = string(value["SpeakerPath"].GetString());
        m_speakerPathHasBeenSet = true;
    }

    if (value.HasMember("OutputStorage") && !value["OutputStorage"].IsNull())
    {
        if (!value["OutputStorage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AiAnalysisTaskDubbingOutput.OutputStorage` is not object type").SetRequestId(requestId));
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

void AiAnalysisTaskDubbingOutput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_videoPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_videoPath.c_str(), allocator).Move(), allocator);
    }

    if (m_speakerPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpeakerPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_speakerPath.c_str(), allocator).Move(), allocator);
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


string AiAnalysisTaskDubbingOutput::GetVideoPath() const
{
    return m_videoPath;
}

void AiAnalysisTaskDubbingOutput::SetVideoPath(const string& _videoPath)
{
    m_videoPath = _videoPath;
    m_videoPathHasBeenSet = true;
}

bool AiAnalysisTaskDubbingOutput::VideoPathHasBeenSet() const
{
    return m_videoPathHasBeenSet;
}

string AiAnalysisTaskDubbingOutput::GetSpeakerPath() const
{
    return m_speakerPath;
}

void AiAnalysisTaskDubbingOutput::SetSpeakerPath(const string& _speakerPath)
{
    m_speakerPath = _speakerPath;
    m_speakerPathHasBeenSet = true;
}

bool AiAnalysisTaskDubbingOutput::SpeakerPathHasBeenSet() const
{
    return m_speakerPathHasBeenSet;
}

TaskOutputStorage AiAnalysisTaskDubbingOutput::GetOutputStorage() const
{
    return m_outputStorage;
}

void AiAnalysisTaskDubbingOutput::SetOutputStorage(const TaskOutputStorage& _outputStorage)
{
    m_outputStorage = _outputStorage;
    m_outputStorageHasBeenSet = true;
}

bool AiAnalysisTaskDubbingOutput::OutputStorageHasBeenSet() const
{
    return m_outputStorageHasBeenSet;
}

