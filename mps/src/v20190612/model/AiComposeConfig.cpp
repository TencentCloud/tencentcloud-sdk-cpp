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

#include <tencentcloud/mps/v20190612/model/AiComposeConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

AiComposeConfig::AiComposeConfig() :
    m_switchHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_canvasHasBeenSet(false),
    m_layersHasBeenSet(false)
{
}

CoreInternalOutcome AiComposeConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiComposeConfig.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("Model") && !value["Model"].IsNull())
    {
        if (!value["Model"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiComposeConfig.Model` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_model = string(value["Model"].GetString());
        m_modelHasBeenSet = true;
    }

    if (value.HasMember("Canvas") && !value["Canvas"].IsNull())
    {
        if (!value["Canvas"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AiComposeConfig.Canvas` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_canvas.Deserialize(value["Canvas"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_canvasHasBeenSet = true;
    }

    if (value.HasMember("Layers") && !value["Layers"].IsNull())
    {
        if (!value["Layers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AiComposeConfig.Layers` is not array type"));

        const rapidjson::Value &tmpValue = value["Layers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ImageComposeLayer item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_layers.push_back(item);
        }
        m_layersHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AiComposeConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_modelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Model";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_model.c_str(), allocator).Move(), allocator);
    }

    if (m_canvasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Canvas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_canvas.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_layersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Layers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_layers.begin(); itr != m_layers.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string AiComposeConfig::GetSwitch() const
{
    return m_switch;
}

void AiComposeConfig::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool AiComposeConfig::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

string AiComposeConfig::GetModel() const
{
    return m_model;
}

void AiComposeConfig::SetModel(const string& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool AiComposeConfig::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

ImageComposeCanvas AiComposeConfig::GetCanvas() const
{
    return m_canvas;
}

void AiComposeConfig::SetCanvas(const ImageComposeCanvas& _canvas)
{
    m_canvas = _canvas;
    m_canvasHasBeenSet = true;
}

bool AiComposeConfig::CanvasHasBeenSet() const
{
    return m_canvasHasBeenSet;
}

vector<ImageComposeLayer> AiComposeConfig::GetLayers() const
{
    return m_layers;
}

void AiComposeConfig::SetLayers(const vector<ImageComposeLayer>& _layers)
{
    m_layers = _layers;
    m_layersHasBeenSet = true;
}

bool AiComposeConfig::LayersHasBeenSet() const
{
    return m_layersHasBeenSet;
}

