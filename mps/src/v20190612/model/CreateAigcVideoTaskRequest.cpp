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

#include <tencentcloud/mps/v20190612/model/CreateAigcVideoTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

CreateAigcVideoTaskRequest::CreateAigcVideoTaskRequest() :
    m_modelNameHasBeenSet(false),
    m_modelVersionHasBeenSet(false),
    m_promptHasBeenSet(false),
    m_negativePromptHasBeenSet(false),
    m_enhancePromptHasBeenSet(false),
    m_imageUrlHasBeenSet(false),
    m_lastImageUrlHasBeenSet(false),
    m_imageInfosHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_extraParametersHasBeenSet(false),
    m_storeCosParamHasBeenSet(false),
    m_additionalParametersHasBeenSet(false),
    m_operatorHasBeenSet(false)
{
}

string CreateAigcVideoTaskRequest::ToJsonString() const
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

    if (m_promptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Prompt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_prompt.c_str(), allocator).Move(), allocator);
    }

    if (m_negativePromptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NegativePrompt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_negativePrompt.c_str(), allocator).Move(), allocator);
    }

    if (m_enhancePromptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnhancePrompt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enhancePrompt, allocator);
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

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_duration, allocator);
    }

    if (m_extraParametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtraParameters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_extraParameters.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_storeCosParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StoreCosParam";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_storeCosParam.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_additionalParametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdditionalParameters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_additionalParameters.c_str(), allocator).Move(), allocator);
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


string CreateAigcVideoTaskRequest::GetModelName() const
{
    return m_modelName;
}

void CreateAigcVideoTaskRequest::SetModelName(const string& _modelName)
{
    m_modelName = _modelName;
    m_modelNameHasBeenSet = true;
}

bool CreateAigcVideoTaskRequest::ModelNameHasBeenSet() const
{
    return m_modelNameHasBeenSet;
}

string CreateAigcVideoTaskRequest::GetModelVersion() const
{
    return m_modelVersion;
}

void CreateAigcVideoTaskRequest::SetModelVersion(const string& _modelVersion)
{
    m_modelVersion = _modelVersion;
    m_modelVersionHasBeenSet = true;
}

bool CreateAigcVideoTaskRequest::ModelVersionHasBeenSet() const
{
    return m_modelVersionHasBeenSet;
}

string CreateAigcVideoTaskRequest::GetPrompt() const
{
    return m_prompt;
}

void CreateAigcVideoTaskRequest::SetPrompt(const string& _prompt)
{
    m_prompt = _prompt;
    m_promptHasBeenSet = true;
}

bool CreateAigcVideoTaskRequest::PromptHasBeenSet() const
{
    return m_promptHasBeenSet;
}

string CreateAigcVideoTaskRequest::GetNegativePrompt() const
{
    return m_negativePrompt;
}

void CreateAigcVideoTaskRequest::SetNegativePrompt(const string& _negativePrompt)
{
    m_negativePrompt = _negativePrompt;
    m_negativePromptHasBeenSet = true;
}

bool CreateAigcVideoTaskRequest::NegativePromptHasBeenSet() const
{
    return m_negativePromptHasBeenSet;
}

bool CreateAigcVideoTaskRequest::GetEnhancePrompt() const
{
    return m_enhancePrompt;
}

void CreateAigcVideoTaskRequest::SetEnhancePrompt(const bool& _enhancePrompt)
{
    m_enhancePrompt = _enhancePrompt;
    m_enhancePromptHasBeenSet = true;
}

bool CreateAigcVideoTaskRequest::EnhancePromptHasBeenSet() const
{
    return m_enhancePromptHasBeenSet;
}

string CreateAigcVideoTaskRequest::GetImageUrl() const
{
    return m_imageUrl;
}

void CreateAigcVideoTaskRequest::SetImageUrl(const string& _imageUrl)
{
    m_imageUrl = _imageUrl;
    m_imageUrlHasBeenSet = true;
}

bool CreateAigcVideoTaskRequest::ImageUrlHasBeenSet() const
{
    return m_imageUrlHasBeenSet;
}

string CreateAigcVideoTaskRequest::GetLastImageUrl() const
{
    return m_lastImageUrl;
}

void CreateAigcVideoTaskRequest::SetLastImageUrl(const string& _lastImageUrl)
{
    m_lastImageUrl = _lastImageUrl;
    m_lastImageUrlHasBeenSet = true;
}

bool CreateAigcVideoTaskRequest::LastImageUrlHasBeenSet() const
{
    return m_lastImageUrlHasBeenSet;
}

vector<AigcVideoReferenceImageInfo> CreateAigcVideoTaskRequest::GetImageInfos() const
{
    return m_imageInfos;
}

void CreateAigcVideoTaskRequest::SetImageInfos(const vector<AigcVideoReferenceImageInfo>& _imageInfos)
{
    m_imageInfos = _imageInfos;
    m_imageInfosHasBeenSet = true;
}

bool CreateAigcVideoTaskRequest::ImageInfosHasBeenSet() const
{
    return m_imageInfosHasBeenSet;
}

int64_t CreateAigcVideoTaskRequest::GetDuration() const
{
    return m_duration;
}

void CreateAigcVideoTaskRequest::SetDuration(const int64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool CreateAigcVideoTaskRequest::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

AigcVideoExtraParam CreateAigcVideoTaskRequest::GetExtraParameters() const
{
    return m_extraParameters;
}

void CreateAigcVideoTaskRequest::SetExtraParameters(const AigcVideoExtraParam& _extraParameters)
{
    m_extraParameters = _extraParameters;
    m_extraParametersHasBeenSet = true;
}

bool CreateAigcVideoTaskRequest::ExtraParametersHasBeenSet() const
{
    return m_extraParametersHasBeenSet;
}

AigcStoreCosParam CreateAigcVideoTaskRequest::GetStoreCosParam() const
{
    return m_storeCosParam;
}

void CreateAigcVideoTaskRequest::SetStoreCosParam(const AigcStoreCosParam& _storeCosParam)
{
    m_storeCosParam = _storeCosParam;
    m_storeCosParamHasBeenSet = true;
}

bool CreateAigcVideoTaskRequest::StoreCosParamHasBeenSet() const
{
    return m_storeCosParamHasBeenSet;
}

string CreateAigcVideoTaskRequest::GetAdditionalParameters() const
{
    return m_additionalParameters;
}

void CreateAigcVideoTaskRequest::SetAdditionalParameters(const string& _additionalParameters)
{
    m_additionalParameters = _additionalParameters;
    m_additionalParametersHasBeenSet = true;
}

bool CreateAigcVideoTaskRequest::AdditionalParametersHasBeenSet() const
{
    return m_additionalParametersHasBeenSet;
}

string CreateAigcVideoTaskRequest::GetOperator() const
{
    return m_operator;
}

void CreateAigcVideoTaskRequest::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool CreateAigcVideoTaskRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}


