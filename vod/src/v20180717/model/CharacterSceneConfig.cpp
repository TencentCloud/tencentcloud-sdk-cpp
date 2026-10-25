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

#include <tencentcloud/vod/v20180717/model/CharacterSceneConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

CharacterSceneConfig::CharacterSceneConfig() :
    m_modelHasBeenSet(false),
    m_promptModeHasBeenSet(false)
{
}

CoreInternalOutcome CharacterSceneConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Model") && !value["Model"].IsNull())
    {
        if (!value["Model"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CharacterSceneConfig.Model` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_model = string(value["Model"].GetString());
        m_modelHasBeenSet = true;
    }

    if (value.HasMember("PromptMode") && !value["PromptMode"].IsNull())
    {
        if (!value["PromptMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CharacterSceneConfig.PromptMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_promptMode = string(value["PromptMode"].GetString());
        m_promptModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CharacterSceneConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Model";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_model.c_str(), allocator).Move(), allocator);
    }

    if (m_promptModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PromptMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_promptMode.c_str(), allocator).Move(), allocator);
    }

}


string CharacterSceneConfig::GetModel() const
{
    return m_model;
}

void CharacterSceneConfig::SetModel(const string& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool CharacterSceneConfig::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

string CharacterSceneConfig::GetPromptMode() const
{
    return m_promptMode;
}

void CharacterSceneConfig::SetPromptMode(const string& _promptMode)
{
    m_promptMode = _promptMode;
    m_promptModeHasBeenSet = true;
}

bool CharacterSceneConfig::PromptModeHasBeenSet() const
{
    return m_promptModeHasBeenSet;
}

