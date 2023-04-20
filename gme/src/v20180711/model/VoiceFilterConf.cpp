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

#include <tencentcloud/gme/v20180711/model/VoiceFilterConf.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gme::V20180711::Model;
using namespace std;

VoiceFilterConf::VoiceFilterConf() :
    m_statusHasBeenSet(false),
    m_sceneInfosHasBeenSet(false)
{
}

CoreInternalOutcome VoiceFilterConf::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VoiceFilterConf.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("SceneInfos") && !value["SceneInfos"].IsNull())
    {
        if (!value["SceneInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VoiceFilterConf.SceneInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["SceneInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SceneInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_sceneInfos.push_back(item);
        }
        m_sceneInfosHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VoiceFilterConf::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_sceneInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SceneInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sceneInfos.begin(); itr != m_sceneInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string VoiceFilterConf::GetStatus() const
{
    return m_status;
}

void VoiceFilterConf::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool VoiceFilterConf::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<SceneInfo> VoiceFilterConf::GetSceneInfos() const
{
    return m_sceneInfos;
}

void VoiceFilterConf::SetSceneInfos(const vector<SceneInfo>& _sceneInfos)
{
    m_sceneInfos = _sceneInfos;
    m_sceneInfosHasBeenSet = true;
}

bool VoiceFilterConf::SceneInfosHasBeenSet() const
{
    return m_sceneInfosHasBeenSet;
}

