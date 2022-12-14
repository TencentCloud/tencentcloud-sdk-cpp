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

#include <tencentcloud/emr/v20190103/model/SceneSoftwareConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

SceneSoftwareConfig::SceneSoftwareConfig() :
    m_softwareHasBeenSet(false),
    m_sceneNameHasBeenSet(false)
{
}

CoreInternalOutcome SceneSoftwareConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Software") && !value["Software"].IsNull())
    {
        if (!value["Software"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SceneSoftwareConfig.Software` is not array type"));

        const rapidjson::Value &tmpValue = value["Software"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_software.push_back((*itr).GetString());
        }
        m_softwareHasBeenSet = true;
    }

    if (value.HasMember("SceneName") && !value["SceneName"].IsNull())
    {
        if (!value["SceneName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SceneSoftwareConfig.SceneName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sceneName = string(value["SceneName"].GetString());
        m_sceneNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SceneSoftwareConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_softwareHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Software";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_software.begin(); itr != m_software.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_sceneNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SceneName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sceneName.c_str(), allocator).Move(), allocator);
    }

}


vector<string> SceneSoftwareConfig::GetSoftware() const
{
    return m_software;
}

void SceneSoftwareConfig::SetSoftware(const vector<string>& _software)
{
    m_software = _software;
    m_softwareHasBeenSet = true;
}

bool SceneSoftwareConfig::SoftwareHasBeenSet() const
{
    return m_softwareHasBeenSet;
}

string SceneSoftwareConfig::GetSceneName() const
{
    return m_sceneName;
}

void SceneSoftwareConfig::SetSceneName(const string& _sceneName)
{
    m_sceneName = _sceneName;
    m_sceneNameHasBeenSet = true;
}

bool SceneSoftwareConfig::SceneNameHasBeenSet() const
{
    return m_sceneNameHasBeenSet;
}

