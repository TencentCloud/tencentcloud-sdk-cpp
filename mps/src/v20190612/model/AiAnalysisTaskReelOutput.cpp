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
    m_videoPathsHasBeenSet(false),
    m_scriptPathHasBeenSet(false),
    m_scriptPathsHasBeenSet(false),
    m_outputStorageHasBeenSet(false),
    m_outputSubtitlePathHasBeenSet(false),
    m_outputSubtitlePathsHasBeenSet(false)
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

    if (value.HasMember("VideoPaths") && !value["VideoPaths"].IsNull())
    {
        if (!value["VideoPaths"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AiAnalysisTaskReelOutput.VideoPaths` is not array type"));

        const rapidjson::Value &tmpValue = value["VideoPaths"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_videoPaths.push_back((*itr).GetString());
        }
        m_videoPathsHasBeenSet = true;
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

    if (value.HasMember("ScriptPaths") && !value["ScriptPaths"].IsNull())
    {
        if (!value["ScriptPaths"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AiAnalysisTaskReelOutput.ScriptPaths` is not array type"));

        const rapidjson::Value &tmpValue = value["ScriptPaths"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_scriptPaths.push_back((*itr).GetString());
        }
        m_scriptPathsHasBeenSet = true;
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

    if (value.HasMember("OutputSubtitlePath") && !value["OutputSubtitlePath"].IsNull())
    {
        if (!value["OutputSubtitlePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiAnalysisTaskReelOutput.OutputSubtitlePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputSubtitlePath = string(value["OutputSubtitlePath"].GetString());
        m_outputSubtitlePathHasBeenSet = true;
    }

    if (value.HasMember("OutputSubtitlePaths") && !value["OutputSubtitlePaths"].IsNull())
    {
        if (!value["OutputSubtitlePaths"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AiAnalysisTaskReelOutput.OutputSubtitlePaths` is not array type"));

        const rapidjson::Value &tmpValue = value["OutputSubtitlePaths"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_outputSubtitlePaths.push_back((*itr).GetString());
        }
        m_outputSubtitlePathsHasBeenSet = true;
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

    if (m_videoPathsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoPaths";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_videoPaths.begin(); itr != m_videoPaths.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_scriptPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScriptPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scriptPath.c_str(), allocator).Move(), allocator);
    }

    if (m_scriptPathsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScriptPaths";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_scriptPaths.begin(); itr != m_scriptPaths.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_outputStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_outputStorage.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_outputSubtitlePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputSubtitlePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outputSubtitlePath.c_str(), allocator).Move(), allocator);
    }

    if (m_outputSubtitlePathsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputSubtitlePaths";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_outputSubtitlePaths.begin(); itr != m_outputSubtitlePaths.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

vector<string> AiAnalysisTaskReelOutput::GetVideoPaths() const
{
    return m_videoPaths;
}

void AiAnalysisTaskReelOutput::SetVideoPaths(const vector<string>& _videoPaths)
{
    m_videoPaths = _videoPaths;
    m_videoPathsHasBeenSet = true;
}

bool AiAnalysisTaskReelOutput::VideoPathsHasBeenSet() const
{
    return m_videoPathsHasBeenSet;
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

vector<string> AiAnalysisTaskReelOutput::GetScriptPaths() const
{
    return m_scriptPaths;
}

void AiAnalysisTaskReelOutput::SetScriptPaths(const vector<string>& _scriptPaths)
{
    m_scriptPaths = _scriptPaths;
    m_scriptPathsHasBeenSet = true;
}

bool AiAnalysisTaskReelOutput::ScriptPathsHasBeenSet() const
{
    return m_scriptPathsHasBeenSet;
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

string AiAnalysisTaskReelOutput::GetOutputSubtitlePath() const
{
    return m_outputSubtitlePath;
}

void AiAnalysisTaskReelOutput::SetOutputSubtitlePath(const string& _outputSubtitlePath)
{
    m_outputSubtitlePath = _outputSubtitlePath;
    m_outputSubtitlePathHasBeenSet = true;
}

bool AiAnalysisTaskReelOutput::OutputSubtitlePathHasBeenSet() const
{
    return m_outputSubtitlePathHasBeenSet;
}

vector<string> AiAnalysisTaskReelOutput::GetOutputSubtitlePaths() const
{
    return m_outputSubtitlePaths;
}

void AiAnalysisTaskReelOutput::SetOutputSubtitlePaths(const vector<string>& _outputSubtitlePaths)
{
    m_outputSubtitlePaths = _outputSubtitlePaths;
    m_outputSubtitlePathsHasBeenSet = true;
}

bool AiAnalysisTaskReelOutput::OutputSubtitlePathsHasBeenSet() const
{
    return m_outputSubtitlePathsHasBeenSet;
}

