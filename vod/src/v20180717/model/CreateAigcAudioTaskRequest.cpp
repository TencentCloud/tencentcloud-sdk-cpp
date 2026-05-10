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

#include <tencentcloud/vod/v20180717/model/CreateAigcAudioTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

CreateAigcAudioTaskRequest::CreateAigcAudioTaskRequest() :
    m_modelNameHasBeenSet(false),
    m_modelVersionHasBeenSet(false),
    m_sceneTypeHasBeenSet(false),
    m_promptHasBeenSet(false),
    m_videoInfosHasBeenSet(false),
    m_audioInfosHasBeenSet(false),
    m_outputConfigHasBeenSet(false),
    m_additionalParametersHasBeenSet(false)
{
}

string CreateAigcAudioTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_modelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelName.c_str(), allocator).Move(), allocator);
    }

    if (m_modelVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_sceneTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SceneType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sceneType.c_str(), allocator).Move(), allocator);
    }

    if (m_promptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Prompt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_prompt.c_str(), allocator).Move(), allocator);
    }

    if (m_videoInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoInfos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_videoInfos.begin(); itr != m_videoInfos.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_audioInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioInfos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_audioInfos.begin(); itr != m_audioInfos.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_outputConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_outputConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_additionalParametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdditionalParameters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_additionalParameters.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateAigcAudioTaskRequest::GetModelName() const
{
    return m_modelName;
}

void CreateAigcAudioTaskRequest::SetModelName(const string& _modelName)
{
    m_modelName = _modelName;
    m_modelNameHasBeenSet = true;
}

bool CreateAigcAudioTaskRequest::ModelNameHasBeenSet() const
{
    return m_modelNameHasBeenSet;
}

string CreateAigcAudioTaskRequest::GetModelVersion() const
{
    return m_modelVersion;
}

void CreateAigcAudioTaskRequest::SetModelVersion(const string& _modelVersion)
{
    m_modelVersion = _modelVersion;
    m_modelVersionHasBeenSet = true;
}

bool CreateAigcAudioTaskRequest::ModelVersionHasBeenSet() const
{
    return m_modelVersionHasBeenSet;
}

string CreateAigcAudioTaskRequest::GetSceneType() const
{
    return m_sceneType;
}

void CreateAigcAudioTaskRequest::SetSceneType(const string& _sceneType)
{
    m_sceneType = _sceneType;
    m_sceneTypeHasBeenSet = true;
}

bool CreateAigcAudioTaskRequest::SceneTypeHasBeenSet() const
{
    return m_sceneTypeHasBeenSet;
}

string CreateAigcAudioTaskRequest::GetPrompt() const
{
    return m_prompt;
}

void CreateAigcAudioTaskRequest::SetPrompt(const string& _prompt)
{
    m_prompt = _prompt;
    m_promptHasBeenSet = true;
}

bool CreateAigcAudioTaskRequest::PromptHasBeenSet() const
{
    return m_promptHasBeenSet;
}

vector<AigcAudioReferenceVideoInfo> CreateAigcAudioTaskRequest::GetVideoInfos() const
{
    return m_videoInfos;
}

void CreateAigcAudioTaskRequest::SetVideoInfos(const vector<AigcAudioReferenceVideoInfo>& _videoInfos)
{
    m_videoInfos = _videoInfos;
    m_videoInfosHasBeenSet = true;
}

bool CreateAigcAudioTaskRequest::VideoInfosHasBeenSet() const
{
    return m_videoInfosHasBeenSet;
}

vector<AigcAudioReferenceAudioInfo> CreateAigcAudioTaskRequest::GetAudioInfos() const
{
    return m_audioInfos;
}

void CreateAigcAudioTaskRequest::SetAudioInfos(const vector<AigcAudioReferenceAudioInfo>& _audioInfos)
{
    m_audioInfos = _audioInfos;
    m_audioInfosHasBeenSet = true;
}

bool CreateAigcAudioTaskRequest::AudioInfosHasBeenSet() const
{
    return m_audioInfosHasBeenSet;
}

AigcAudioOutputConfig CreateAigcAudioTaskRequest::GetOutputConfig() const
{
    return m_outputConfig;
}

void CreateAigcAudioTaskRequest::SetOutputConfig(const AigcAudioOutputConfig& _outputConfig)
{
    m_outputConfig = _outputConfig;
    m_outputConfigHasBeenSet = true;
}

bool CreateAigcAudioTaskRequest::OutputConfigHasBeenSet() const
{
    return m_outputConfigHasBeenSet;
}

string CreateAigcAudioTaskRequest::GetAdditionalParameters() const
{
    return m_additionalParameters;
}

void CreateAigcAudioTaskRequest::SetAdditionalParameters(const string& _additionalParameters)
{
    m_additionalParameters = _additionalParameters;
    m_additionalParametersHasBeenSet = true;
}

bool CreateAigcAudioTaskRequest::AdditionalParametersHasBeenSet() const
{
    return m_additionalParametersHasBeenSet;
}


