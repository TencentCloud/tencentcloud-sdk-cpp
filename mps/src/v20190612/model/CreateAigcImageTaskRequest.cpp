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

#include <tencentcloud/mps/v20190612/model/CreateAigcImageTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

CreateAigcImageTaskRequest::CreateAigcImageTaskRequest() :
    m_modelNameHasBeenSet(false),
    m_modelVersionHasBeenSet(false),
    m_promptHasBeenSet(false),
    m_negativePromptHasBeenSet(false),
    m_enhancePromptHasBeenSet(false),
    m_imageInfosHasBeenSet(false),
    m_extraParametersHasBeenSet(false),
    m_storeCosParamHasBeenSet(false),
    m_operatorHasBeenSet(false)
{
}

string CreateAigcImageTaskRequest::ToJsonString() const
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


string CreateAigcImageTaskRequest::GetModelName() const
{
    return m_modelName;
}

void CreateAigcImageTaskRequest::SetModelName(const string& _modelName)
{
    m_modelName = _modelName;
    m_modelNameHasBeenSet = true;
}

bool CreateAigcImageTaskRequest::ModelNameHasBeenSet() const
{
    return m_modelNameHasBeenSet;
}

string CreateAigcImageTaskRequest::GetModelVersion() const
{
    return m_modelVersion;
}

void CreateAigcImageTaskRequest::SetModelVersion(const string& _modelVersion)
{
    m_modelVersion = _modelVersion;
    m_modelVersionHasBeenSet = true;
}

bool CreateAigcImageTaskRequest::ModelVersionHasBeenSet() const
{
    return m_modelVersionHasBeenSet;
}

string CreateAigcImageTaskRequest::GetPrompt() const
{
    return m_prompt;
}

void CreateAigcImageTaskRequest::SetPrompt(const string& _prompt)
{
    m_prompt = _prompt;
    m_promptHasBeenSet = true;
}

bool CreateAigcImageTaskRequest::PromptHasBeenSet() const
{
    return m_promptHasBeenSet;
}

string CreateAigcImageTaskRequest::GetNegativePrompt() const
{
    return m_negativePrompt;
}

void CreateAigcImageTaskRequest::SetNegativePrompt(const string& _negativePrompt)
{
    m_negativePrompt = _negativePrompt;
    m_negativePromptHasBeenSet = true;
}

bool CreateAigcImageTaskRequest::NegativePromptHasBeenSet() const
{
    return m_negativePromptHasBeenSet;
}

bool CreateAigcImageTaskRequest::GetEnhancePrompt() const
{
    return m_enhancePrompt;
}

void CreateAigcImageTaskRequest::SetEnhancePrompt(const bool& _enhancePrompt)
{
    m_enhancePrompt = _enhancePrompt;
    m_enhancePromptHasBeenSet = true;
}

bool CreateAigcImageTaskRequest::EnhancePromptHasBeenSet() const
{
    return m_enhancePromptHasBeenSet;
}

vector<AigcImageInfo> CreateAigcImageTaskRequest::GetImageInfos() const
{
    return m_imageInfos;
}

void CreateAigcImageTaskRequest::SetImageInfos(const vector<AigcImageInfo>& _imageInfos)
{
    m_imageInfos = _imageInfos;
    m_imageInfosHasBeenSet = true;
}

bool CreateAigcImageTaskRequest::ImageInfosHasBeenSet() const
{
    return m_imageInfosHasBeenSet;
}

AigcImageExtraParam CreateAigcImageTaskRequest::GetExtraParameters() const
{
    return m_extraParameters;
}

void CreateAigcImageTaskRequest::SetExtraParameters(const AigcImageExtraParam& _extraParameters)
{
    m_extraParameters = _extraParameters;
    m_extraParametersHasBeenSet = true;
}

bool CreateAigcImageTaskRequest::ExtraParametersHasBeenSet() const
{
    return m_extraParametersHasBeenSet;
}

AigcStoreCosParam CreateAigcImageTaskRequest::GetStoreCosParam() const
{
    return m_storeCosParam;
}

void CreateAigcImageTaskRequest::SetStoreCosParam(const AigcStoreCosParam& _storeCosParam)
{
    m_storeCosParam = _storeCosParam;
    m_storeCosParamHasBeenSet = true;
}

bool CreateAigcImageTaskRequest::StoreCosParamHasBeenSet() const
{
    return m_storeCosParamHasBeenSet;
}

string CreateAigcImageTaskRequest::GetOperator() const
{
    return m_operator;
}

void CreateAigcImageTaskRequest::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool CreateAigcImageTaskRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}


