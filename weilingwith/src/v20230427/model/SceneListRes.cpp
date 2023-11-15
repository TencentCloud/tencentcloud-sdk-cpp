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

#include <tencentcloud/weilingwith/v20230427/model/SceneListRes.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

SceneListRes::SceneListRes() :
    m_sceneListHasBeenSet(false)
{
}

CoreInternalOutcome SceneListRes::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SceneList") && !value["SceneList"].IsNull())
    {
        if (!value["SceneList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SceneListRes.SceneList` is not array type"));

        const rapidjson::Value &tmpValue = value["SceneList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SceneInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_sceneList.push_back(item);
        }
        m_sceneListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SceneListRes::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sceneListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SceneList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sceneList.begin(); itr != m_sceneList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<SceneInfo> SceneListRes::GetSceneList() const
{
    return m_sceneList;
}

void SceneListRes::SetSceneList(const vector<SceneInfo>& _sceneList)
{
    m_sceneList = _sceneList;
    m_sceneListHasBeenSet = true;
}

bool SceneListRes::SceneListHasBeenSet() const
{
    return m_sceneListHasBeenSet;
}

