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

#include <tencentcloud/lke/v20231130/model/KnowledgeQaConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

KnowledgeQaConfig::KnowledgeQaConfig() :
    m_greetingHasBeenSet(false),
    m_roleDescriptionHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_searchHasBeenSet(false),
    m_outputHasBeenSet(false),
    m_workflowHasBeenSet(false),
    m_searchRangeHasBeenSet(false),
    m_patternHasBeenSet(false),
    m_searchStrategyHasBeenSet(false),
    m_singleWorkflowHasBeenSet(false),
    m_pluginsHasBeenSet(false),
    m_thoughtModelHasBeenSet(false),
    m_intentAchievementsHasBeenSet(false),
    m_imageTextRetrievalHasBeenSet(false),
    m_aiCallHasBeenSet(false),
    m_shareKnowledgeBasesHasBeenSet(false),
    m_backgroundImageHasBeenSet(false),
    m_openingQuestionsHasBeenSet(false),
    m_longMemoryOpenHasBeenSet(false),
    m_longMemoryDayHasBeenSet(false),
    m_agentHasBeenSet(false),
    m_knowledgeModelConfigHasBeenSet(false),
    m_knowledgeAdvancedConfigHasBeenSet(false)
{
}

CoreInternalOutcome KnowledgeQaConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Greeting") && !value["Greeting"].IsNull())
    {
        if (!value["Greeting"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeQaConfig.Greeting` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_greeting = string(value["Greeting"].GetString());
        m_greetingHasBeenSet = true;
    }

    if (value.HasMember("RoleDescription") && !value["RoleDescription"].IsNull())
    {
        if (!value["RoleDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeQaConfig.RoleDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleDescription = string(value["RoleDescription"].GetString());
        m_roleDescriptionHasBeenSet = true;
    }

    if (value.HasMember("Model") && !value["Model"].IsNull())
    {
        if (!value["Model"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeQaConfig.Model` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_model.Deserialize(value["Model"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_modelHasBeenSet = true;
    }

    if (value.HasMember("Search") && !value["Search"].IsNull())
    {
        if (!value["Search"].IsArray())
            return CoreInternalOutcome(Core::Error("response `KnowledgeQaConfig.Search` is not array type"));

        const rapidjson::Value &tmpValue = value["Search"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KnowledgeQaSearch item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_search.push_back(item);
        }
        m_searchHasBeenSet = true;
    }

    if (value.HasMember("Output") && !value["Output"].IsNull())
    {
        if (!value["Output"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeQaConfig.Output` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_output.Deserialize(value["Output"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_outputHasBeenSet = true;
    }

    if (value.HasMember("Workflow") && !value["Workflow"].IsNull())
    {
        if (!value["Workflow"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeQaConfig.Workflow` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_workflow.Deserialize(value["Workflow"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_workflowHasBeenSet = true;
    }

    if (value.HasMember("SearchRange") && !value["SearchRange"].IsNull())
    {
        if (!value["SearchRange"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeQaConfig.SearchRange` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_searchRange.Deserialize(value["SearchRange"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_searchRangeHasBeenSet = true;
    }

    if (value.HasMember("Pattern") && !value["Pattern"].IsNull())
    {
        if (!value["Pattern"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeQaConfig.Pattern` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pattern = string(value["Pattern"].GetString());
        m_patternHasBeenSet = true;
    }

    if (value.HasMember("SearchStrategy") && !value["SearchStrategy"].IsNull())
    {
        if (!value["SearchStrategy"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeQaConfig.SearchStrategy` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_searchStrategy.Deserialize(value["SearchStrategy"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_searchStrategyHasBeenSet = true;
    }

    if (value.HasMember("SingleWorkflow") && !value["SingleWorkflow"].IsNull())
    {
        if (!value["SingleWorkflow"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeQaConfig.SingleWorkflow` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_singleWorkflow.Deserialize(value["SingleWorkflow"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_singleWorkflowHasBeenSet = true;
    }

    if (value.HasMember("Plugins") && !value["Plugins"].IsNull())
    {
        if (!value["Plugins"].IsArray())
            return CoreInternalOutcome(Core::Error("response `KnowledgeQaConfig.Plugins` is not array type"));

        const rapidjson::Value &tmpValue = value["Plugins"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KnowledgeQaPlugin item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_plugins.push_back(item);
        }
        m_pluginsHasBeenSet = true;
    }

    if (value.HasMember("ThoughtModel") && !value["ThoughtModel"].IsNull())
    {
        if (!value["ThoughtModel"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeQaConfig.ThoughtModel` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_thoughtModel.Deserialize(value["ThoughtModel"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_thoughtModelHasBeenSet = true;
    }

    if (value.HasMember("IntentAchievements") && !value["IntentAchievements"].IsNull())
    {
        if (!value["IntentAchievements"].IsArray())
            return CoreInternalOutcome(Core::Error("response `KnowledgeQaConfig.IntentAchievements` is not array type"));

        const rapidjson::Value &tmpValue = value["IntentAchievements"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            IntentAchievement item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_intentAchievements.push_back(item);
        }
        m_intentAchievementsHasBeenSet = true;
    }

    if (value.HasMember("ImageTextRetrieval") && !value["ImageTextRetrieval"].IsNull())
    {
        if (!value["ImageTextRetrieval"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeQaConfig.ImageTextRetrieval` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_imageTextRetrieval = value["ImageTextRetrieval"].GetBool();
        m_imageTextRetrievalHasBeenSet = true;
    }

    if (value.HasMember("AiCall") && !value["AiCall"].IsNull())
    {
        if (!value["AiCall"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeQaConfig.AiCall` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_aiCall.Deserialize(value["AiCall"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_aiCallHasBeenSet = true;
    }

    if (value.HasMember("ShareKnowledgeBases") && !value["ShareKnowledgeBases"].IsNull())
    {
        if (!value["ShareKnowledgeBases"].IsArray())
            return CoreInternalOutcome(Core::Error("response `KnowledgeQaConfig.ShareKnowledgeBases` is not array type"));

        const rapidjson::Value &tmpValue = value["ShareKnowledgeBases"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ShareKnowledgeBase item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_shareKnowledgeBases.push_back(item);
        }
        m_shareKnowledgeBasesHasBeenSet = true;
    }

    if (value.HasMember("BackgroundImage") && !value["BackgroundImage"].IsNull())
    {
        if (!value["BackgroundImage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeQaConfig.BackgroundImage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_backgroundImage.Deserialize(value["BackgroundImage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_backgroundImageHasBeenSet = true;
    }

    if (value.HasMember("OpeningQuestions") && !value["OpeningQuestions"].IsNull())
    {
        if (!value["OpeningQuestions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `KnowledgeQaConfig.OpeningQuestions` is not array type"));

        const rapidjson::Value &tmpValue = value["OpeningQuestions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_openingQuestions.push_back((*itr).GetString());
        }
        m_openingQuestionsHasBeenSet = true;
    }

    if (value.HasMember("LongMemoryOpen") && !value["LongMemoryOpen"].IsNull())
    {
        if (!value["LongMemoryOpen"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeQaConfig.LongMemoryOpen` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_longMemoryOpen = value["LongMemoryOpen"].GetBool();
        m_longMemoryOpenHasBeenSet = true;
    }

    if (value.HasMember("LongMemoryDay") && !value["LongMemoryDay"].IsNull())
    {
        if (!value["LongMemoryDay"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeQaConfig.LongMemoryDay` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_longMemoryDay = value["LongMemoryDay"].GetUint64();
        m_longMemoryDayHasBeenSet = true;
    }

    if (value.HasMember("Agent") && !value["Agent"].IsNull())
    {
        if (!value["Agent"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeQaConfig.Agent` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_agent.Deserialize(value["Agent"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_agentHasBeenSet = true;
    }

    if (value.HasMember("KnowledgeModelConfig") && !value["KnowledgeModelConfig"].IsNull())
    {
        if (!value["KnowledgeModelConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeQaConfig.KnowledgeModelConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_knowledgeModelConfig.Deserialize(value["KnowledgeModelConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_knowledgeModelConfigHasBeenSet = true;
    }

    if (value.HasMember("KnowledgeAdvancedConfig") && !value["KnowledgeAdvancedConfig"].IsNull())
    {
        if (!value["KnowledgeAdvancedConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeQaConfig.KnowledgeAdvancedConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_knowledgeAdvancedConfig.Deserialize(value["KnowledgeAdvancedConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_knowledgeAdvancedConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KnowledgeQaConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_greetingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Greeting";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_greeting.c_str(), allocator).Move(), allocator);
    }

    if (m_roleDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roleDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_modelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Model";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_model.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_searchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Search";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_search.begin(); itr != m_search.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_outputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Output";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_output.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_workflowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Workflow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_workflow.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_searchRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchRange";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_searchRange.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_patternHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pattern";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pattern.c_str(), allocator).Move(), allocator);
    }

    if (m_searchStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_searchStrategy.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_singleWorkflowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SingleWorkflow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_singleWorkflow.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_pluginsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Plugins";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_plugins.begin(); itr != m_plugins.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_thoughtModelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThoughtModel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_thoughtModel.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_intentAchievementsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntentAchievements";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_intentAchievements.begin(); itr != m_intentAchievements.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_imageTextRetrievalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageTextRetrieval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_imageTextRetrieval, allocator);
    }

    if (m_aiCallHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AiCall";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_aiCall.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_shareKnowledgeBasesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShareKnowledgeBases";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_shareKnowledgeBases.begin(); itr != m_shareKnowledgeBases.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_backgroundImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackgroundImage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_backgroundImage.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_openingQuestionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpeningQuestions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_openingQuestions.begin(); itr != m_openingQuestions.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_longMemoryOpenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LongMemoryOpen";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_longMemoryOpen, allocator);
    }

    if (m_longMemoryDayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LongMemoryDay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_longMemoryDay, allocator);
    }

    if (m_agentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Agent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_agent.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_knowledgeModelConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KnowledgeModelConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_knowledgeModelConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_knowledgeAdvancedConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KnowledgeAdvancedConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_knowledgeAdvancedConfig.ToJsonObject(value[key.c_str()], allocator);
    }

}


string KnowledgeQaConfig::GetGreeting() const
{
    return m_greeting;
}

void KnowledgeQaConfig::SetGreeting(const string& _greeting)
{
    m_greeting = _greeting;
    m_greetingHasBeenSet = true;
}

bool KnowledgeQaConfig::GreetingHasBeenSet() const
{
    return m_greetingHasBeenSet;
}

string KnowledgeQaConfig::GetRoleDescription() const
{
    return m_roleDescription;
}

void KnowledgeQaConfig::SetRoleDescription(const string& _roleDescription)
{
    m_roleDescription = _roleDescription;
    m_roleDescriptionHasBeenSet = true;
}

bool KnowledgeQaConfig::RoleDescriptionHasBeenSet() const
{
    return m_roleDescriptionHasBeenSet;
}

AppModel KnowledgeQaConfig::GetModel() const
{
    return m_model;
}

void KnowledgeQaConfig::SetModel(const AppModel& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool KnowledgeQaConfig::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

vector<KnowledgeQaSearch> KnowledgeQaConfig::GetSearch() const
{
    return m_search;
}

void KnowledgeQaConfig::SetSearch(const vector<KnowledgeQaSearch>& _search)
{
    m_search = _search;
    m_searchHasBeenSet = true;
}

bool KnowledgeQaConfig::SearchHasBeenSet() const
{
    return m_searchHasBeenSet;
}

KnowledgeQaOutput KnowledgeQaConfig::GetOutput() const
{
    return m_output;
}

void KnowledgeQaConfig::SetOutput(const KnowledgeQaOutput& _output)
{
    m_output = _output;
    m_outputHasBeenSet = true;
}

bool KnowledgeQaConfig::OutputHasBeenSet() const
{
    return m_outputHasBeenSet;
}

KnowledgeWorkflow KnowledgeQaConfig::GetWorkflow() const
{
    return m_workflow;
}

void KnowledgeQaConfig::SetWorkflow(const KnowledgeWorkflow& _workflow)
{
    m_workflow = _workflow;
    m_workflowHasBeenSet = true;
}

bool KnowledgeQaConfig::WorkflowHasBeenSet() const
{
    return m_workflowHasBeenSet;
}

SearchRange KnowledgeQaConfig::GetSearchRange() const
{
    return m_searchRange;
}

void KnowledgeQaConfig::SetSearchRange(const SearchRange& _searchRange)
{
    m_searchRange = _searchRange;
    m_searchRangeHasBeenSet = true;
}

bool KnowledgeQaConfig::SearchRangeHasBeenSet() const
{
    return m_searchRangeHasBeenSet;
}

string KnowledgeQaConfig::GetPattern() const
{
    return m_pattern;
}

void KnowledgeQaConfig::SetPattern(const string& _pattern)
{
    m_pattern = _pattern;
    m_patternHasBeenSet = true;
}

bool KnowledgeQaConfig::PatternHasBeenSet() const
{
    return m_patternHasBeenSet;
}

SearchStrategy KnowledgeQaConfig::GetSearchStrategy() const
{
    return m_searchStrategy;
}

void KnowledgeQaConfig::SetSearchStrategy(const SearchStrategy& _searchStrategy)
{
    m_searchStrategy = _searchStrategy;
    m_searchStrategyHasBeenSet = true;
}

bool KnowledgeQaConfig::SearchStrategyHasBeenSet() const
{
    return m_searchStrategyHasBeenSet;
}

KnowledgeQaSingleWorkflow KnowledgeQaConfig::GetSingleWorkflow() const
{
    return m_singleWorkflow;
}

void KnowledgeQaConfig::SetSingleWorkflow(const KnowledgeQaSingleWorkflow& _singleWorkflow)
{
    m_singleWorkflow = _singleWorkflow;
    m_singleWorkflowHasBeenSet = true;
}

bool KnowledgeQaConfig::SingleWorkflowHasBeenSet() const
{
    return m_singleWorkflowHasBeenSet;
}

vector<KnowledgeQaPlugin> KnowledgeQaConfig::GetPlugins() const
{
    return m_plugins;
}

void KnowledgeQaConfig::SetPlugins(const vector<KnowledgeQaPlugin>& _plugins)
{
    m_plugins = _plugins;
    m_pluginsHasBeenSet = true;
}

bool KnowledgeQaConfig::PluginsHasBeenSet() const
{
    return m_pluginsHasBeenSet;
}

AppModel KnowledgeQaConfig::GetThoughtModel() const
{
    return m_thoughtModel;
}

void KnowledgeQaConfig::SetThoughtModel(const AppModel& _thoughtModel)
{
    m_thoughtModel = _thoughtModel;
    m_thoughtModelHasBeenSet = true;
}

bool KnowledgeQaConfig::ThoughtModelHasBeenSet() const
{
    return m_thoughtModelHasBeenSet;
}

vector<IntentAchievement> KnowledgeQaConfig::GetIntentAchievements() const
{
    return m_intentAchievements;
}

void KnowledgeQaConfig::SetIntentAchievements(const vector<IntentAchievement>& _intentAchievements)
{
    m_intentAchievements = _intentAchievements;
    m_intentAchievementsHasBeenSet = true;
}

bool KnowledgeQaConfig::IntentAchievementsHasBeenSet() const
{
    return m_intentAchievementsHasBeenSet;
}

bool KnowledgeQaConfig::GetImageTextRetrieval() const
{
    return m_imageTextRetrieval;
}

void KnowledgeQaConfig::SetImageTextRetrieval(const bool& _imageTextRetrieval)
{
    m_imageTextRetrieval = _imageTextRetrieval;
    m_imageTextRetrievalHasBeenSet = true;
}

bool KnowledgeQaConfig::ImageTextRetrievalHasBeenSet() const
{
    return m_imageTextRetrievalHasBeenSet;
}

AICallConfig KnowledgeQaConfig::GetAiCall() const
{
    return m_aiCall;
}

void KnowledgeQaConfig::SetAiCall(const AICallConfig& _aiCall)
{
    m_aiCall = _aiCall;
    m_aiCallHasBeenSet = true;
}

bool KnowledgeQaConfig::AiCallHasBeenSet() const
{
    return m_aiCallHasBeenSet;
}

vector<ShareKnowledgeBase> KnowledgeQaConfig::GetShareKnowledgeBases() const
{
    return m_shareKnowledgeBases;
}

void KnowledgeQaConfig::SetShareKnowledgeBases(const vector<ShareKnowledgeBase>& _shareKnowledgeBases)
{
    m_shareKnowledgeBases = _shareKnowledgeBases;
    m_shareKnowledgeBasesHasBeenSet = true;
}

bool KnowledgeQaConfig::ShareKnowledgeBasesHasBeenSet() const
{
    return m_shareKnowledgeBasesHasBeenSet;
}

BackgroundImageConfig KnowledgeQaConfig::GetBackgroundImage() const
{
    return m_backgroundImage;
}

void KnowledgeQaConfig::SetBackgroundImage(const BackgroundImageConfig& _backgroundImage)
{
    m_backgroundImage = _backgroundImage;
    m_backgroundImageHasBeenSet = true;
}

bool KnowledgeQaConfig::BackgroundImageHasBeenSet() const
{
    return m_backgroundImageHasBeenSet;
}

vector<string> KnowledgeQaConfig::GetOpeningQuestions() const
{
    return m_openingQuestions;
}

void KnowledgeQaConfig::SetOpeningQuestions(const vector<string>& _openingQuestions)
{
    m_openingQuestions = _openingQuestions;
    m_openingQuestionsHasBeenSet = true;
}

bool KnowledgeQaConfig::OpeningQuestionsHasBeenSet() const
{
    return m_openingQuestionsHasBeenSet;
}

bool KnowledgeQaConfig::GetLongMemoryOpen() const
{
    return m_longMemoryOpen;
}

void KnowledgeQaConfig::SetLongMemoryOpen(const bool& _longMemoryOpen)
{
    m_longMemoryOpen = _longMemoryOpen;
    m_longMemoryOpenHasBeenSet = true;
}

bool KnowledgeQaConfig::LongMemoryOpenHasBeenSet() const
{
    return m_longMemoryOpenHasBeenSet;
}

uint64_t KnowledgeQaConfig::GetLongMemoryDay() const
{
    return m_longMemoryDay;
}

void KnowledgeQaConfig::SetLongMemoryDay(const uint64_t& _longMemoryDay)
{
    m_longMemoryDay = _longMemoryDay;
    m_longMemoryDayHasBeenSet = true;
}

bool KnowledgeQaConfig::LongMemoryDayHasBeenSet() const
{
    return m_longMemoryDayHasBeenSet;
}

KnowledgeQaAgent KnowledgeQaConfig::GetAgent() const
{
    return m_agent;
}

void KnowledgeQaConfig::SetAgent(const KnowledgeQaAgent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool KnowledgeQaConfig::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

KnowledgeModelConfig KnowledgeQaConfig::GetKnowledgeModelConfig() const
{
    return m_knowledgeModelConfig;
}

void KnowledgeQaConfig::SetKnowledgeModelConfig(const KnowledgeModelConfig& _knowledgeModelConfig)
{
    m_knowledgeModelConfig = _knowledgeModelConfig;
    m_knowledgeModelConfigHasBeenSet = true;
}

bool KnowledgeQaConfig::KnowledgeModelConfigHasBeenSet() const
{
    return m_knowledgeModelConfigHasBeenSet;
}

KnowledgeAdvancedConfig KnowledgeQaConfig::GetKnowledgeAdvancedConfig() const
{
    return m_knowledgeAdvancedConfig;
}

void KnowledgeQaConfig::SetKnowledgeAdvancedConfig(const KnowledgeAdvancedConfig& _knowledgeAdvancedConfig)
{
    m_knowledgeAdvancedConfig = _knowledgeAdvancedConfig;
    m_knowledgeAdvancedConfigHasBeenSet = true;
}

bool KnowledgeQaConfig::KnowledgeAdvancedConfigHasBeenSet() const
{
    return m_knowledgeAdvancedConfigHasBeenSet;
}

