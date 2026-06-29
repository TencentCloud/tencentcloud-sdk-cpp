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

#include <tencentcloud/mps/v20190612/model/AiPosterSuiteConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

AiPosterSuiteConfig::AiPosterSuiteConfig() :
    m_modeHasBeenSet(false),
    m_definitionHasBeenSet(false),
    m_recipeHasBeenSet(false),
    m_languageHasBeenSet(false),
    m_panelRatioHasBeenSet(false),
    m_panelResolutionHasBeenSet(false),
    m_customVariablesHasBeenSet(false),
    m_modelHasBeenSet(false)
{
}

CoreInternalOutcome AiPosterSuiteConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Mode") && !value["Mode"].IsNull())
    {
        if (!value["Mode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiPosterSuiteConfig.Mode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mode = string(value["Mode"].GetString());
        m_modeHasBeenSet = true;
    }

    if (value.HasMember("Definition") && !value["Definition"].IsNull())
    {
        if (!value["Definition"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AiPosterSuiteConfig.Definition` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_definition = value["Definition"].GetInt64();
        m_definitionHasBeenSet = true;
    }

    if (value.HasMember("Recipe") && !value["Recipe"].IsNull())
    {
        if (!value["Recipe"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AiPosterSuiteConfig.Recipe` is not array type"));

        const rapidjson::Value &tmpValue = value["Recipe"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RecipeItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_recipe.push_back(item);
        }
        m_recipeHasBeenSet = true;
    }

    if (value.HasMember("Language") && !value["Language"].IsNull())
    {
        if (!value["Language"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiPosterSuiteConfig.Language` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_language = string(value["Language"].GetString());
        m_languageHasBeenSet = true;
    }

    if (value.HasMember("PanelRatio") && !value["PanelRatio"].IsNull())
    {
        if (!value["PanelRatio"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiPosterSuiteConfig.PanelRatio` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_panelRatio = string(value["PanelRatio"].GetString());
        m_panelRatioHasBeenSet = true;
    }

    if (value.HasMember("PanelResolution") && !value["PanelResolution"].IsNull())
    {
        if (!value["PanelResolution"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiPosterSuiteConfig.PanelResolution` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_panelResolution = string(value["PanelResolution"].GetString());
        m_panelResolutionHasBeenSet = true;
    }

    if (value.HasMember("CustomVariables") && !value["CustomVariables"].IsNull())
    {
        if (!value["CustomVariables"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AiPosterSuiteConfig.CustomVariables` is not array type"));

        const rapidjson::Value &tmpValue = value["CustomVariables"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CustomVariable item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_customVariables.push_back(item);
        }
        m_customVariablesHasBeenSet = true;
    }

    if (value.HasMember("Model") && !value["Model"].IsNull())
    {
        if (!value["Model"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiPosterSuiteConfig.Model` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_model = string(value["Model"].GetString());
        m_modelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AiPosterSuiteConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mode.c_str(), allocator).Move(), allocator);
    }

    if (m_definitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Definition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_definition, allocator);
    }

    if (m_recipeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Recipe";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_recipe.begin(); itr != m_recipe.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_languageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Language";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_language.c_str(), allocator).Move(), allocator);
    }

    if (m_panelRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PanelRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_panelRatio.c_str(), allocator).Move(), allocator);
    }

    if (m_panelResolutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PanelResolution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_panelResolution.c_str(), allocator).Move(), allocator);
    }

    if (m_customVariablesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomVariables";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_customVariables.begin(); itr != m_customVariables.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_modelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Model";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_model.c_str(), allocator).Move(), allocator);
    }

}


string AiPosterSuiteConfig::GetMode() const
{
    return m_mode;
}

void AiPosterSuiteConfig::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool AiPosterSuiteConfig::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

int64_t AiPosterSuiteConfig::GetDefinition() const
{
    return m_definition;
}

void AiPosterSuiteConfig::SetDefinition(const int64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool AiPosterSuiteConfig::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

vector<RecipeItem> AiPosterSuiteConfig::GetRecipe() const
{
    return m_recipe;
}

void AiPosterSuiteConfig::SetRecipe(const vector<RecipeItem>& _recipe)
{
    m_recipe = _recipe;
    m_recipeHasBeenSet = true;
}

bool AiPosterSuiteConfig::RecipeHasBeenSet() const
{
    return m_recipeHasBeenSet;
}

string AiPosterSuiteConfig::GetLanguage() const
{
    return m_language;
}

void AiPosterSuiteConfig::SetLanguage(const string& _language)
{
    m_language = _language;
    m_languageHasBeenSet = true;
}

bool AiPosterSuiteConfig::LanguageHasBeenSet() const
{
    return m_languageHasBeenSet;
}

string AiPosterSuiteConfig::GetPanelRatio() const
{
    return m_panelRatio;
}

void AiPosterSuiteConfig::SetPanelRatio(const string& _panelRatio)
{
    m_panelRatio = _panelRatio;
    m_panelRatioHasBeenSet = true;
}

bool AiPosterSuiteConfig::PanelRatioHasBeenSet() const
{
    return m_panelRatioHasBeenSet;
}

string AiPosterSuiteConfig::GetPanelResolution() const
{
    return m_panelResolution;
}

void AiPosterSuiteConfig::SetPanelResolution(const string& _panelResolution)
{
    m_panelResolution = _panelResolution;
    m_panelResolutionHasBeenSet = true;
}

bool AiPosterSuiteConfig::PanelResolutionHasBeenSet() const
{
    return m_panelResolutionHasBeenSet;
}

vector<CustomVariable> AiPosterSuiteConfig::GetCustomVariables() const
{
    return m_customVariables;
}

void AiPosterSuiteConfig::SetCustomVariables(const vector<CustomVariable>& _customVariables)
{
    m_customVariables = _customVariables;
    m_customVariablesHasBeenSet = true;
}

bool AiPosterSuiteConfig::CustomVariablesHasBeenSet() const
{
    return m_customVariablesHasBeenSet;
}

string AiPosterSuiteConfig::GetModel() const
{
    return m_model;
}

void AiPosterSuiteConfig::SetModel(const string& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool AiPosterSuiteConfig::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

