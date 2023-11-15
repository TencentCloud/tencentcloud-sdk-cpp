/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#include <tencentcloud/hai/v20230812/model/SceneInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Hai::V20230812::Model;
using namespace std;

SceneInfo::SceneInfo() :
    m_sceneIdHasBeenSet(false),
    m_sceneNameHasBeenSet(false)
{
}

CoreInternalOutcome SceneInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SceneId") && !value["SceneId"].IsNull())
    {
        if (!value["SceneId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SceneInfo.SceneId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sceneId = string(value["SceneId"].GetString());
        m_sceneIdHasBeenSet = true;
    }

    if (value.HasMember("SceneName") && !value["SceneName"].IsNull())
    {
        if (!value["SceneName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SceneInfo.SceneName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sceneName = string(value["SceneName"].GetString());
        m_sceneNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SceneInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

}


string SceneInfo::GetSceneId() const
{
    return m_sceneId;
}

void SceneInfo::SetSceneId(const string& _sceneId)
{
    m_sceneId = _sceneId;
    m_sceneIdHasBeenSet = true;
}

bool SceneInfo::SceneIdHasBeenSet() const
{
    return m_sceneIdHasBeenSet;
}

string SceneInfo::GetSceneName() const
{
    return m_sceneName;
}

void SceneInfo::SetSceneName(const string& _sceneName)
{
    m_sceneName = _sceneName;
    m_sceneNameHasBeenSet = true;
}

bool SceneInfo::SceneNameHasBeenSet() const
{
    return m_sceneNameHasBeenSet;
}

