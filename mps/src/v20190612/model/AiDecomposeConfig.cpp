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

#include <tencentcloud/mps/v20190612/model/AiDecomposeConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

AiDecomposeConfig::AiDecomposeConfig() :
    m_switchHasBeenSet(false),
    m_layersHasBeenSet(false),
    m_promptHasBeenSet(false),
    m_modelHasBeenSet(false)
{
}

CoreInternalOutcome AiDecomposeConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiDecomposeConfig.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("Layers") && !value["Layers"].IsNull())
    {
        if (!value["Layers"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AiDecomposeConfig.Layers` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_layers = value["Layers"].GetInt64();
        m_layersHasBeenSet = true;
    }

    if (value.HasMember("Prompt") && !value["Prompt"].IsNull())
    {
        if (!value["Prompt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiDecomposeConfig.Prompt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_prompt = string(value["Prompt"].GetString());
        m_promptHasBeenSet = true;
    }

    if (value.HasMember("Model") && !value["Model"].IsNull())
    {
        if (!value["Model"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiDecomposeConfig.Model` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_model = string(value["Model"].GetString());
        m_modelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AiDecomposeConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_layersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Layers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_layers, allocator);
    }

    if (m_promptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Prompt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_prompt.c_str(), allocator).Move(), allocator);
    }

    if (m_modelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Model";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_model.c_str(), allocator).Move(), allocator);
    }

}


string AiDecomposeConfig::GetSwitch() const
{
    return m_switch;
}

void AiDecomposeConfig::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool AiDecomposeConfig::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

int64_t AiDecomposeConfig::GetLayers() const
{
    return m_layers;
}

void AiDecomposeConfig::SetLayers(const int64_t& _layers)
{
    m_layers = _layers;
    m_layersHasBeenSet = true;
}

bool AiDecomposeConfig::LayersHasBeenSet() const
{
    return m_layersHasBeenSet;
}

string AiDecomposeConfig::GetPrompt() const
{
    return m_prompt;
}

void AiDecomposeConfig::SetPrompt(const string& _prompt)
{
    m_prompt = _prompt;
    m_promptHasBeenSet = true;
}

bool AiDecomposeConfig::PromptHasBeenSet() const
{
    return m_promptHasBeenSet;
}

string AiDecomposeConfig::GetModel() const
{
    return m_model;
}

void AiDecomposeConfig::SetModel(const string& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool AiDecomposeConfig::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

