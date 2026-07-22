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

#include <tencentcloud/mps/v20190612/model/CreateImageConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

CreateImageConfig::CreateImageConfig() :
    m_modelHasBeenSet(false),
    m_promptHasBeenSet(false),
    m_resolutionHasBeenSet(false),
    m_aspectRatioHasBeenSet(false)
{
}

CoreInternalOutcome CreateImageConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Model") && !value["Model"].IsNull())
    {
        if (!value["Model"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateImageConfig.Model` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_model = string(value["Model"].GetString());
        m_modelHasBeenSet = true;
    }

    if (value.HasMember("Prompt") && !value["Prompt"].IsNull())
    {
        if (!value["Prompt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateImageConfig.Prompt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_prompt = string(value["Prompt"].GetString());
        m_promptHasBeenSet = true;
    }

    if (value.HasMember("Resolution") && !value["Resolution"].IsNull())
    {
        if (!value["Resolution"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateImageConfig.Resolution` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resolution = string(value["Resolution"].GetString());
        m_resolutionHasBeenSet = true;
    }

    if (value.HasMember("AspectRatio") && !value["AspectRatio"].IsNull())
    {
        if (!value["AspectRatio"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateImageConfig.AspectRatio` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aspectRatio = string(value["AspectRatio"].GetString());
        m_aspectRatioHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateImageConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Model";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_model.c_str(), allocator).Move(), allocator);
    }

    if (m_promptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Prompt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_prompt.c_str(), allocator).Move(), allocator);
    }

    if (m_resolutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resolution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resolution.c_str(), allocator).Move(), allocator);
    }

    if (m_aspectRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AspectRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aspectRatio.c_str(), allocator).Move(), allocator);
    }

}


string CreateImageConfig::GetModel() const
{
    return m_model;
}

void CreateImageConfig::SetModel(const string& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool CreateImageConfig::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

string CreateImageConfig::GetPrompt() const
{
    return m_prompt;
}

void CreateImageConfig::SetPrompt(const string& _prompt)
{
    m_prompt = _prompt;
    m_promptHasBeenSet = true;
}

bool CreateImageConfig::PromptHasBeenSet() const
{
    return m_promptHasBeenSet;
}

string CreateImageConfig::GetResolution() const
{
    return m_resolution;
}

void CreateImageConfig::SetResolution(const string& _resolution)
{
    m_resolution = _resolution;
    m_resolutionHasBeenSet = true;
}

bool CreateImageConfig::ResolutionHasBeenSet() const
{
    return m_resolutionHasBeenSet;
}

string CreateImageConfig::GetAspectRatio() const
{
    return m_aspectRatio;
}

void CreateImageConfig::SetAspectRatio(const string& _aspectRatio)
{
    m_aspectRatio = _aspectRatio;
    m_aspectRatioHasBeenSet = true;
}

bool CreateImageConfig::AspectRatioHasBeenSet() const
{
    return m_aspectRatioHasBeenSet;
}

