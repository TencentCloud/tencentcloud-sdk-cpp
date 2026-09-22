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

#include <tencentcloud/live/v20180801/model/CMSSceneDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

CMSSceneDetail::CMSSceneDetail() :
    m_bizInfosHasBeenSet(false),
    m_sceneIDHasBeenSet(false)
{
}

CoreInternalOutcome CMSSceneDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BizInfos") && !value["BizInfos"].IsNull())
    {
        if (!value["BizInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CMSSceneDetail.BizInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["BizInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CMSBizInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_bizInfos.push_back(item);
        }
        m_bizInfosHasBeenSet = true;
    }

    if (value.HasMember("SceneID") && !value["SceneID"].IsNull())
    {
        if (!value["SceneID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CMSSceneDetail.SceneID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sceneID = string(value["SceneID"].GetString());
        m_sceneIDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CMSSceneDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_bizInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_bizInfos.begin(); itr != m_bizInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_sceneIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SceneID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sceneID.c_str(), allocator).Move(), allocator);
    }

}


vector<CMSBizInfo> CMSSceneDetail::GetBizInfos() const
{
    return m_bizInfos;
}

void CMSSceneDetail::SetBizInfos(const vector<CMSBizInfo>& _bizInfos)
{
    m_bizInfos = _bizInfos;
    m_bizInfosHasBeenSet = true;
}

bool CMSSceneDetail::BizInfosHasBeenSet() const
{
    return m_bizInfosHasBeenSet;
}

string CMSSceneDetail::GetSceneID() const
{
    return m_sceneID;
}

void CMSSceneDetail::SetSceneID(const string& _sceneID)
{
    m_sceneID = _sceneID;
    m_sceneIDHasBeenSet = true;
}

bool CMSSceneDetail::SceneIDHasBeenSet() const
{
    return m_sceneIDHasBeenSet;
}

