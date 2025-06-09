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

#include <tencentcloud/trtc/v20190722/model/AmbientSound.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

AmbientSound::AmbientSound() :
    m_sceneHasBeenSet(false),
    m_volumeHasBeenSet(false)
{
}

CoreInternalOutcome AmbientSound::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Scene") && !value["Scene"].IsNull())
    {
        if (!value["Scene"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AmbientSound.Scene` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scene = string(value["Scene"].GetString());
        m_sceneHasBeenSet = true;
    }

    if (value.HasMember("Volume") && !value["Volume"].IsNull())
    {
        if (!value["Volume"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `AmbientSound.Volume` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_volume = value["Volume"].GetDouble();
        m_volumeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AmbientSound::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sceneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scene";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scene.c_str(), allocator).Move(), allocator);
    }

    if (m_volumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Volume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_volume, allocator);
    }

}


string AmbientSound::GetScene() const
{
    return m_scene;
}

void AmbientSound::SetScene(const string& _scene)
{
    m_scene = _scene;
    m_sceneHasBeenSet = true;
}

bool AmbientSound::SceneHasBeenSet() const
{
    return m_sceneHasBeenSet;
}

double AmbientSound::GetVolume() const
{
    return m_volume;
}

void AmbientSound::SetVolume(const double& _volume)
{
    m_volume = _volume;
    m_volumeHasBeenSet = true;
}

bool AmbientSound::VolumeHasBeenSet() const
{
    return m_volumeHasBeenSet;
}

