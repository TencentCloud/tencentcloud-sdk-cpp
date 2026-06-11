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

#include <tencentcloud/vod/v20180717/model/AiTryOnConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

AiTryOnConfig::AiTryOnConfig() :
    m_modelHasBeenSet(false),
    m_clothesFileInfosHasBeenSet(false),
    m_promptHasBeenSet(false)
{
}

CoreInternalOutcome AiTryOnConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Model") && !value["Model"].IsNull())
    {
        if (!value["Model"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiTryOnConfig.Model` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_model = string(value["Model"].GetString());
        m_modelHasBeenSet = true;
    }

    if (value.HasMember("ClothesFileInfos") && !value["ClothesFileInfos"].IsNull())
    {
        if (!value["ClothesFileInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AiTryOnConfig.ClothesFileInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["ClothesFileInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SceneAigcImageTaskInputFileInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_clothesFileInfos.push_back(item);
        }
        m_clothesFileInfosHasBeenSet = true;
    }

    if (value.HasMember("Prompt") && !value["Prompt"].IsNull())
    {
        if (!value["Prompt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiTryOnConfig.Prompt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_prompt = string(value["Prompt"].GetString());
        m_promptHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AiTryOnConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Model";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_model.c_str(), allocator).Move(), allocator);
    }

    if (m_clothesFileInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClothesFileInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_clothesFileInfos.begin(); itr != m_clothesFileInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_promptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Prompt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_prompt.c_str(), allocator).Move(), allocator);
    }

}


string AiTryOnConfig::GetModel() const
{
    return m_model;
}

void AiTryOnConfig::SetModel(const string& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool AiTryOnConfig::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

vector<SceneAigcImageTaskInputFileInfo> AiTryOnConfig::GetClothesFileInfos() const
{
    return m_clothesFileInfos;
}

void AiTryOnConfig::SetClothesFileInfos(const vector<SceneAigcImageTaskInputFileInfo>& _clothesFileInfos)
{
    m_clothesFileInfos = _clothesFileInfos;
    m_clothesFileInfosHasBeenSet = true;
}

bool AiTryOnConfig::ClothesFileInfosHasBeenSet() const
{
    return m_clothesFileInfosHasBeenSet;
}

string AiTryOnConfig::GetPrompt() const
{
    return m_prompt;
}

void AiTryOnConfig::SetPrompt(const string& _prompt)
{
    m_prompt = _prompt;
    m_promptHasBeenSet = true;
}

bool AiTryOnConfig::PromptHasBeenSet() const
{
    return m_promptHasBeenSet;
}

