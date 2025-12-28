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

#include <tencentcloud/mps/v20190612/model/AiAnalysisTaskReelOutput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

AiAnalysisTaskReelOutput::AiAnalysisTaskReelOutput() :
    m_videoPathHasBeenSet(false),
    m_scriptPathHasBeenSet(false),
    m_outputStorageHasBeenSet(false)
{
}

CoreInternalOutcome AiAnalysisTaskReelOutput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VideoPath") && !value["VideoPath"].IsNull())
    {
        if (!value["VideoPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiAnalysisTaskReelOutput.VideoPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_videoPath = string(value["VideoPath"].GetString());
        m_videoPathHasBeenSet = true;
    }

    if (value.HasMember("ScriptPath") && !value["ScriptPath"].IsNull())
    {
        if (!value["ScriptPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiAnalysisTaskReelOutput.ScriptPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scriptPath = string(value["ScriptPath"].GetString());
        m_scriptPathHasBeenSet = true;
    }

    if (value.HasMember("OutputStorage") && !value["OutputStorage"].IsNull())
    {
        if (!value["OutputStorage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AiAnalysisTaskReelOutput.OutputStorage` is not object type").SetRequestId(requestId));
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

void AiAnalysisTaskReelOutput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_videoPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_videoPath.c_str(), allocator).Move(), allocator);
    }

    if (m_scriptPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScriptPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scriptPath.c_str(), allocator).Move(), allocator);
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


string AiAnalysisTaskReelOutput::GetVideoPath() const
{
    return m_videoPath;
}

void AiAnalysisTaskReelOutput::SetVideoPath(const string& _videoPath)
{
    m_videoPath = _videoPath;
    m_videoPathHasBeenSet = true;
}

bool AiAnalysisTaskReelOutput::VideoPathHasBeenSet() const
{
    return m_videoPathHasBeenSet;
}

string AiAnalysisTaskReelOutput::GetScriptPath() const
{
    return m_scriptPath;
}

void AiAnalysisTaskReelOutput::SetScriptPath(const string& _scriptPath)
{
    m_scriptPath = _scriptPath;
    m_scriptPathHasBeenSet = true;
}

bool AiAnalysisTaskReelOutput::ScriptPathHasBeenSet() const
{
    return m_scriptPathHasBeenSet;
}

TaskOutputStorage AiAnalysisTaskReelOutput::GetOutputStorage() const
{
    return m_outputStorage;
}

void AiAnalysisTaskReelOutput::SetOutputStorage(const TaskOutputStorage& _outputStorage)
{
    m_outputStorage = _outputStorage;
    m_outputStorageHasBeenSet = true;
}

bool AiAnalysisTaskReelOutput::OutputStorageHasBeenSet() const
{
    return m_outputStorageHasBeenSet;
}

