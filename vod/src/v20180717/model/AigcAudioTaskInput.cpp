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

#include <tencentcloud/vod/v20180717/model/AigcAudioTaskInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

AigcAudioTaskInput::AigcAudioTaskInput() :
    m_modelNameHasBeenSet(false),
    m_modelVersionHasBeenSet(false),
    m_sceneTypeHasBeenSet(false),
    m_promptHasBeenSet(false),
    m_negativePromptHasBeenSet(false),
    m_enhancePromptHasBeenSet(false),
    m_outputConfigHasBeenSet(false),
    m_additionalParametersHasBeenSet(false)
{
}

CoreInternalOutcome AigcAudioTaskInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ModelName") && !value["ModelName"].IsNull())
    {
        if (!value["ModelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcAudioTaskInput.ModelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelName = string(value["ModelName"].GetString());
        m_modelNameHasBeenSet = true;
    }

    if (value.HasMember("ModelVersion") && !value["ModelVersion"].IsNull())
    {
        if (!value["ModelVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcAudioTaskInput.ModelVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelVersion = string(value["ModelVersion"].GetString());
        m_modelVersionHasBeenSet = true;
    }

    if (value.HasMember("SceneType") && !value["SceneType"].IsNull())
    {
        if (!value["SceneType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcAudioTaskInput.SceneType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sceneType = string(value["SceneType"].GetString());
        m_sceneTypeHasBeenSet = true;
    }

    if (value.HasMember("Prompt") && !value["Prompt"].IsNull())
    {
        if (!value["Prompt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcAudioTaskInput.Prompt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_prompt = string(value["Prompt"].GetString());
        m_promptHasBeenSet = true;
    }

    if (value.HasMember("NegativePrompt") && !value["NegativePrompt"].IsNull())
    {
        if (!value["NegativePrompt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcAudioTaskInput.NegativePrompt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_negativePrompt = string(value["NegativePrompt"].GetString());
        m_negativePromptHasBeenSet = true;
    }

    if (value.HasMember("EnhancePrompt") && !value["EnhancePrompt"].IsNull())
    {
        if (!value["EnhancePrompt"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AigcAudioTaskInput.EnhancePrompt` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enhancePrompt = value["EnhancePrompt"].GetBool();
        m_enhancePromptHasBeenSet = true;
    }

    if (value.HasMember("OutputConfig") && !value["OutputConfig"].IsNull())
    {
        if (!value["OutputConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AigcAudioTaskInput.OutputConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_outputConfig.Deserialize(value["OutputConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_outputConfigHasBeenSet = true;
    }

    if (value.HasMember("AdditionalParameters") && !value["AdditionalParameters"].IsNull())
    {
        if (!value["AdditionalParameters"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcAudioTaskInput.AdditionalParameters` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_additionalParameters = string(value["AdditionalParameters"].GetString());
        m_additionalParametersHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AigcAudioTaskInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelName.c_str(), allocator).Move(), allocator);
    }

    if (m_modelVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_sceneTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SceneType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sceneType.c_str(), allocator).Move(), allocator);
    }

    if (m_promptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Prompt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_prompt.c_str(), allocator).Move(), allocator);
    }

    if (m_negativePromptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NegativePrompt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_negativePrompt.c_str(), allocator).Move(), allocator);
    }

    if (m_enhancePromptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnhancePrompt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enhancePrompt, allocator);
    }

    if (m_outputConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_outputConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_additionalParametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdditionalParameters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_additionalParameters.c_str(), allocator).Move(), allocator);
    }

}


string AigcAudioTaskInput::GetModelName() const
{
    return m_modelName;
}

void AigcAudioTaskInput::SetModelName(const string& _modelName)
{
    m_modelName = _modelName;
    m_modelNameHasBeenSet = true;
}

bool AigcAudioTaskInput::ModelNameHasBeenSet() const
{
    return m_modelNameHasBeenSet;
}

string AigcAudioTaskInput::GetModelVersion() const
{
    return m_modelVersion;
}

void AigcAudioTaskInput::SetModelVersion(const string& _modelVersion)
{
    m_modelVersion = _modelVersion;
    m_modelVersionHasBeenSet = true;
}

bool AigcAudioTaskInput::ModelVersionHasBeenSet() const
{
    return m_modelVersionHasBeenSet;
}

string AigcAudioTaskInput::GetSceneType() const
{
    return m_sceneType;
}

void AigcAudioTaskInput::SetSceneType(const string& _sceneType)
{
    m_sceneType = _sceneType;
    m_sceneTypeHasBeenSet = true;
}

bool AigcAudioTaskInput::SceneTypeHasBeenSet() const
{
    return m_sceneTypeHasBeenSet;
}

string AigcAudioTaskInput::GetPrompt() const
{
    return m_prompt;
}

void AigcAudioTaskInput::SetPrompt(const string& _prompt)
{
    m_prompt = _prompt;
    m_promptHasBeenSet = true;
}

bool AigcAudioTaskInput::PromptHasBeenSet() const
{
    return m_promptHasBeenSet;
}

string AigcAudioTaskInput::GetNegativePrompt() const
{
    return m_negativePrompt;
}

void AigcAudioTaskInput::SetNegativePrompt(const string& _negativePrompt)
{
    m_negativePrompt = _negativePrompt;
    m_negativePromptHasBeenSet = true;
}

bool AigcAudioTaskInput::NegativePromptHasBeenSet() const
{
    return m_negativePromptHasBeenSet;
}

bool AigcAudioTaskInput::GetEnhancePrompt() const
{
    return m_enhancePrompt;
}

void AigcAudioTaskInput::SetEnhancePrompt(const bool& _enhancePrompt)
{
    m_enhancePrompt = _enhancePrompt;
    m_enhancePromptHasBeenSet = true;
}

bool AigcAudioTaskInput::EnhancePromptHasBeenSet() const
{
    return m_enhancePromptHasBeenSet;
}

AigcAudioOutputConfig AigcAudioTaskInput::GetOutputConfig() const
{
    return m_outputConfig;
}

void AigcAudioTaskInput::SetOutputConfig(const AigcAudioOutputConfig& _outputConfig)
{
    m_outputConfig = _outputConfig;
    m_outputConfigHasBeenSet = true;
}

bool AigcAudioTaskInput::OutputConfigHasBeenSet() const
{
    return m_outputConfigHasBeenSet;
}

string AigcAudioTaskInput::GetAdditionalParameters() const
{
    return m_additionalParameters;
}

void AigcAudioTaskInput::SetAdditionalParameters(const string& _additionalParameters)
{
    m_additionalParameters = _additionalParameters;
    m_additionalParametersHasBeenSet = true;
}

bool AigcAudioTaskInput::AdditionalParametersHasBeenSet() const
{
    return m_additionalParametersHasBeenSet;
}

