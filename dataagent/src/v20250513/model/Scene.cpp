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

#include <tencentcloud/dataagent/v20250513/model/Scene.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dataagent::V20250513::Model;
using namespace std;

Scene::Scene() :
    m_sceneIdHasBeenSet(false),
    m_sceneNameHasBeenSet(false),
    m_skillsHasBeenSet(false),
    m_promptHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_searchConfigHasBeenSet(false),
    m_exampleQAListHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_creatorUinHasBeenSet(false)
{
}

CoreInternalOutcome Scene::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SceneId") && !value["SceneId"].IsNull())
    {
        if (!value["SceneId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Scene.SceneId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sceneId = string(value["SceneId"].GetString());
        m_sceneIdHasBeenSet = true;
    }

    if (value.HasMember("SceneName") && !value["SceneName"].IsNull())
    {
        if (!value["SceneName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Scene.SceneName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sceneName = string(value["SceneName"].GetString());
        m_sceneNameHasBeenSet = true;
    }

    if (value.HasMember("Skills") && !value["Skills"].IsNull())
    {
        if (!value["Skills"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Scene.Skills` is not array type"));

        const rapidjson::Value &tmpValue = value["Skills"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_skills.push_back((*itr).GetString());
        }
        m_skillsHasBeenSet = true;
    }

    if (value.HasMember("Prompt") && !value["Prompt"].IsNull())
    {
        if (!value["Prompt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Scene.Prompt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_prompt = string(value["Prompt"].GetString());
        m_promptHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Scene.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("SearchConfig") && !value["SearchConfig"].IsNull())
    {
        if (!value["SearchConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Scene.SearchConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_searchConfig.Deserialize(value["SearchConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_searchConfigHasBeenSet = true;
    }

    if (value.HasMember("ExampleQAList") && !value["ExampleQAList"].IsNull())
    {
        if (!value["ExampleQAList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Scene.ExampleQAList` is not array type"));

        const rapidjson::Value &tmpValue = value["ExampleQAList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ExampleQA item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_exampleQAList.push_back(item);
        }
        m_exampleQAListHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Scene.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Scene.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("CreatorUin") && !value["CreatorUin"].IsNull())
    {
        if (!value["CreatorUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Scene.CreatorUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creatorUin = string(value["CreatorUin"].GetString());
        m_creatorUinHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Scene::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sceneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SceneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sceneId.c_str(), allocator).Move(), allocator);
    }

    if (m_sceneNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SceneName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sceneName.c_str(), allocator).Move(), allocator);
    }

    if (m_skillsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Skills";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_skills.begin(); itr != m_skills.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_promptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Prompt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_prompt.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_searchConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_searchConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_exampleQAListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExampleQAList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_exampleQAList.begin(); itr != m_exampleQAList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatorUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creatorUin.c_str(), allocator).Move(), allocator);
    }

}


string Scene::GetSceneId() const
{
    return m_sceneId;
}

void Scene::SetSceneId(const string& _sceneId)
{
    m_sceneId = _sceneId;
    m_sceneIdHasBeenSet = true;
}

bool Scene::SceneIdHasBeenSet() const
{
    return m_sceneIdHasBeenSet;
}

string Scene::GetSceneName() const
{
    return m_sceneName;
}

void Scene::SetSceneName(const string& _sceneName)
{
    m_sceneName = _sceneName;
    m_sceneNameHasBeenSet = true;
}

bool Scene::SceneNameHasBeenSet() const
{
    return m_sceneNameHasBeenSet;
}

vector<string> Scene::GetSkills() const
{
    return m_skills;
}

void Scene::SetSkills(const vector<string>& _skills)
{
    m_skills = _skills;
    m_skillsHasBeenSet = true;
}

bool Scene::SkillsHasBeenSet() const
{
    return m_skillsHasBeenSet;
}

string Scene::GetPrompt() const
{
    return m_prompt;
}

void Scene::SetPrompt(const string& _prompt)
{
    m_prompt = _prompt;
    m_promptHasBeenSet = true;
}

bool Scene::PromptHasBeenSet() const
{
    return m_promptHasBeenSet;
}

string Scene::GetDescription() const
{
    return m_description;
}

void Scene::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool Scene::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

SearchConfig Scene::GetSearchConfig() const
{
    return m_searchConfig;
}

void Scene::SetSearchConfig(const SearchConfig& _searchConfig)
{
    m_searchConfig = _searchConfig;
    m_searchConfigHasBeenSet = true;
}

bool Scene::SearchConfigHasBeenSet() const
{
    return m_searchConfigHasBeenSet;
}

vector<ExampleQA> Scene::GetExampleQAList() const
{
    return m_exampleQAList;
}

void Scene::SetExampleQAList(const vector<ExampleQA>& _exampleQAList)
{
    m_exampleQAList = _exampleQAList;
    m_exampleQAListHasBeenSet = true;
}

bool Scene::ExampleQAListHasBeenSet() const
{
    return m_exampleQAListHasBeenSet;
}

string Scene::GetCreateTime() const
{
    return m_createTime;
}

void Scene::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool Scene::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string Scene::GetUpdateTime() const
{
    return m_updateTime;
}

void Scene::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool Scene::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string Scene::GetCreatorUin() const
{
    return m_creatorUin;
}

void Scene::SetCreatorUin(const string& _creatorUin)
{
    m_creatorUin = _creatorUin;
    m_creatorUinHasBeenSet = true;
}

bool Scene::CreatorUinHasBeenSet() const
{
    return m_creatorUinHasBeenSet;
}

