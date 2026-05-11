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

#include <tencentcloud/live/v20180801/model/CreateSceneVideoTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

CreateSceneVideoTaskRequest::CreateSceneVideoTaskRequest() :
    m_modelNameHasBeenSet(false),
    m_modelVersionHasBeenSet(false),
    m_sceneTypeHasBeenSet(false),
    m_promptHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_imageUrlHasBeenSet(false),
    m_lastImageUrlHasBeenSet(false),
    m_imageInfosHasBeenSet(false),
    m_videoInfosHasBeenSet(false),
    m_extraParametersHasBeenSet(false),
    m_additionalParametersHasBeenSet(false),
    m_storeCosParamHasBeenSet(false),
    m_operatorHasBeenSet(false)
{
}

string CreateSceneVideoTaskRequest::ToJsonString() const
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

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_duration, allocator);
    }

    if (m_imageUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_lastImageUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastImageUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_lastImageUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_imageInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageInfos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_imageInfos.begin(); itr != m_imageInfos.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
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

    if (m_extraParametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtraParameters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_extraParameters.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_additionalParametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdditionalParameters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_additionalParameters.c_str(), allocator).Move(), allocator);
    }

    if (m_storeCosParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StoreCosParam";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_storeCosParam.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operator.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateSceneVideoTaskRequest::GetModelName() const
{
    return m_modelName;
}

void CreateSceneVideoTaskRequest::SetModelName(const string& _modelName)
{
    m_modelName = _modelName;
    m_modelNameHasBeenSet = true;
}

bool CreateSceneVideoTaskRequest::ModelNameHasBeenSet() const
{
    return m_modelNameHasBeenSet;
}

string CreateSceneVideoTaskRequest::GetModelVersion() const
{
    return m_modelVersion;
}

void CreateSceneVideoTaskRequest::SetModelVersion(const string& _modelVersion)
{
    m_modelVersion = _modelVersion;
    m_modelVersionHasBeenSet = true;
}

bool CreateSceneVideoTaskRequest::ModelVersionHasBeenSet() const
{
    return m_modelVersionHasBeenSet;
}

string CreateSceneVideoTaskRequest::GetSceneType() const
{
    return m_sceneType;
}

void CreateSceneVideoTaskRequest::SetSceneType(const string& _sceneType)
{
    m_sceneType = _sceneType;
    m_sceneTypeHasBeenSet = true;
}

bool CreateSceneVideoTaskRequest::SceneTypeHasBeenSet() const
{
    return m_sceneTypeHasBeenSet;
}

string CreateSceneVideoTaskRequest::GetPrompt() const
{
    return m_prompt;
}

void CreateSceneVideoTaskRequest::SetPrompt(const string& _prompt)
{
    m_prompt = _prompt;
    m_promptHasBeenSet = true;
}

bool CreateSceneVideoTaskRequest::PromptHasBeenSet() const
{
    return m_promptHasBeenSet;
}

int64_t CreateSceneVideoTaskRequest::GetDuration() const
{
    return m_duration;
}

void CreateSceneVideoTaskRequest::SetDuration(const int64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool CreateSceneVideoTaskRequest::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

string CreateSceneVideoTaskRequest::GetImageUrl() const
{
    return m_imageUrl;
}

void CreateSceneVideoTaskRequest::SetImageUrl(const string& _imageUrl)
{
    m_imageUrl = _imageUrl;
    m_imageUrlHasBeenSet = true;
}

bool CreateSceneVideoTaskRequest::ImageUrlHasBeenSet() const
{
    return m_imageUrlHasBeenSet;
}

string CreateSceneVideoTaskRequest::GetLastImageUrl() const
{
    return m_lastImageUrl;
}

void CreateSceneVideoTaskRequest::SetLastImageUrl(const string& _lastImageUrl)
{
    m_lastImageUrl = _lastImageUrl;
    m_lastImageUrlHasBeenSet = true;
}

bool CreateSceneVideoTaskRequest::LastImageUrlHasBeenSet() const
{
    return m_lastImageUrlHasBeenSet;
}

vector<SceneVideoReferenceImageInfo> CreateSceneVideoTaskRequest::GetImageInfos() const
{
    return m_imageInfos;
}

void CreateSceneVideoTaskRequest::SetImageInfos(const vector<SceneVideoReferenceImageInfo>& _imageInfos)
{
    m_imageInfos = _imageInfos;
    m_imageInfosHasBeenSet = true;
}

bool CreateSceneVideoTaskRequest::ImageInfosHasBeenSet() const
{
    return m_imageInfosHasBeenSet;
}

vector<SceneVideoReferenceVideoInfo> CreateSceneVideoTaskRequest::GetVideoInfos() const
{
    return m_videoInfos;
}

void CreateSceneVideoTaskRequest::SetVideoInfos(const vector<SceneVideoReferenceVideoInfo>& _videoInfos)
{
    m_videoInfos = _videoInfos;
    m_videoInfosHasBeenSet = true;
}

bool CreateSceneVideoTaskRequest::VideoInfosHasBeenSet() const
{
    return m_videoInfosHasBeenSet;
}

SceneVideoExtraParam CreateSceneVideoTaskRequest::GetExtraParameters() const
{
    return m_extraParameters;
}

void CreateSceneVideoTaskRequest::SetExtraParameters(const SceneVideoExtraParam& _extraParameters)
{
    m_extraParameters = _extraParameters;
    m_extraParametersHasBeenSet = true;
}

bool CreateSceneVideoTaskRequest::ExtraParametersHasBeenSet() const
{
    return m_extraParametersHasBeenSet;
}

string CreateSceneVideoTaskRequest::GetAdditionalParameters() const
{
    return m_additionalParameters;
}

void CreateSceneVideoTaskRequest::SetAdditionalParameters(const string& _additionalParameters)
{
    m_additionalParameters = _additionalParameters;
    m_additionalParametersHasBeenSet = true;
}

bool CreateSceneVideoTaskRequest::AdditionalParametersHasBeenSet() const
{
    return m_additionalParametersHasBeenSet;
}

SceneStoreCosParam CreateSceneVideoTaskRequest::GetStoreCosParam() const
{
    return m_storeCosParam;
}

void CreateSceneVideoTaskRequest::SetStoreCosParam(const SceneStoreCosParam& _storeCosParam)
{
    m_storeCosParam = _storeCosParam;
    m_storeCosParamHasBeenSet = true;
}

bool CreateSceneVideoTaskRequest::StoreCosParamHasBeenSet() const
{
    return m_storeCosParamHasBeenSet;
}

string CreateSceneVideoTaskRequest::GetOperator() const
{
    return m_operator;
}

void CreateSceneVideoTaskRequest::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool CreateSceneVideoTaskRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}


