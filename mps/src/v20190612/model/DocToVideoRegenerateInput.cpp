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

#include <tencentcloud/mps/v20190612/model/DocToVideoRegenerateInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

DocToVideoRegenerateInput::DocToVideoRegenerateInput() :
    m_scopeHasBeenSet(false),
    m_promptHasBeenSet(false),
    m_sceneIdsHasBeenSet(false)
{
}

CoreInternalOutcome DocToVideoRegenerateInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Scope") && !value["Scope"].IsNull())
    {
        if (!value["Scope"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocToVideoRegenerateInput.Scope` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scope = string(value["Scope"].GetString());
        m_scopeHasBeenSet = true;
    }

    if (value.HasMember("Prompt") && !value["Prompt"].IsNull())
    {
        if (!value["Prompt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocToVideoRegenerateInput.Prompt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_prompt = string(value["Prompt"].GetString());
        m_promptHasBeenSet = true;
    }

    if (value.HasMember("SceneIds") && !value["SceneIds"].IsNull())
    {
        if (!value["SceneIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DocToVideoRegenerateInput.SceneIds` is not array type"));

        const rapidjson::Value &tmpValue = value["SceneIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_sceneIds.push_back((*itr).GetString());
        }
        m_sceneIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DocToVideoRegenerateInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_scopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scope.c_str(), allocator).Move(), allocator);
    }

    if (m_promptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Prompt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_prompt.c_str(), allocator).Move(), allocator);
    }

    if (m_sceneIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SceneIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sceneIds.begin(); itr != m_sceneIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string DocToVideoRegenerateInput::GetScope() const
{
    return m_scope;
}

void DocToVideoRegenerateInput::SetScope(const string& _scope)
{
    m_scope = _scope;
    m_scopeHasBeenSet = true;
}

bool DocToVideoRegenerateInput::ScopeHasBeenSet() const
{
    return m_scopeHasBeenSet;
}

string DocToVideoRegenerateInput::GetPrompt() const
{
    return m_prompt;
}

void DocToVideoRegenerateInput::SetPrompt(const string& _prompt)
{
    m_prompt = _prompt;
    m_promptHasBeenSet = true;
}

bool DocToVideoRegenerateInput::PromptHasBeenSet() const
{
    return m_promptHasBeenSet;
}

vector<string> DocToVideoRegenerateInput::GetSceneIds() const
{
    return m_sceneIds;
}

void DocToVideoRegenerateInput::SetSceneIds(const vector<string>& _sceneIds)
{
    m_sceneIds = _sceneIds;
    m_sceneIdsHasBeenSet = true;
}

bool DocToVideoRegenerateInput::SceneIdsHasBeenSet() const
{
    return m_sceneIdsHasBeenSet;
}

