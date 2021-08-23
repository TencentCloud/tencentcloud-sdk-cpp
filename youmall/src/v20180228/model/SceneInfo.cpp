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

#include <tencentcloud/youmall/v20180228/model/SceneInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Youmall::V20180228::Model;
using namespace std;

SceneInfo::SceneInfo() :
    m_scenePictureURLHasBeenSet(false),
    m_headXHasBeenSet(false),
    m_headYHasBeenSet(false),
    m_headWidthHasBeenSet(false),
    m_headHeightHasBeenSet(false)
{
}

CoreInternalOutcome SceneInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ScenePictureURL") && !value["ScenePictureURL"].IsNull())
    {
        if (!value["ScenePictureURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SceneInfo.ScenePictureURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scenePictureURL = string(value["ScenePictureURL"].GetString());
        m_scenePictureURLHasBeenSet = true;
    }

    if (value.HasMember("HeadX") && !value["HeadX"].IsNull())
    {
        if (!value["HeadX"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SceneInfo.HeadX` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_headX = value["HeadX"].GetInt64();
        m_headXHasBeenSet = true;
    }

    if (value.HasMember("HeadY") && !value["HeadY"].IsNull())
    {
        if (!value["HeadY"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SceneInfo.HeadY` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_headY = value["HeadY"].GetInt64();
        m_headYHasBeenSet = true;
    }

    if (value.HasMember("HeadWidth") && !value["HeadWidth"].IsNull())
    {
        if (!value["HeadWidth"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SceneInfo.HeadWidth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_headWidth = value["HeadWidth"].GetInt64();
        m_headWidthHasBeenSet = true;
    }

    if (value.HasMember("HeadHeight") && !value["HeadHeight"].IsNull())
    {
        if (!value["HeadHeight"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SceneInfo.HeadHeight` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_headHeight = value["HeadHeight"].GetInt64();
        m_headHeightHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SceneInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_scenePictureURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScenePictureURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scenePictureURL.c_str(), allocator).Move(), allocator);
    }

    if (m_headXHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeadX";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_headX, allocator);
    }

    if (m_headYHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeadY";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_headY, allocator);
    }

    if (m_headWidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeadWidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_headWidth, allocator);
    }

    if (m_headHeightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeadHeight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_headHeight, allocator);
    }

}


string SceneInfo::GetScenePictureURL() const
{
    return m_scenePictureURL;
}

void SceneInfo::SetScenePictureURL(const string& _scenePictureURL)
{
    m_scenePictureURL = _scenePictureURL;
    m_scenePictureURLHasBeenSet = true;
}

bool SceneInfo::ScenePictureURLHasBeenSet() const
{
    return m_scenePictureURLHasBeenSet;
}

int64_t SceneInfo::GetHeadX() const
{
    return m_headX;
}

void SceneInfo::SetHeadX(const int64_t& _headX)
{
    m_headX = _headX;
    m_headXHasBeenSet = true;
}

bool SceneInfo::HeadXHasBeenSet() const
{
    return m_headXHasBeenSet;
}

int64_t SceneInfo::GetHeadY() const
{
    return m_headY;
}

void SceneInfo::SetHeadY(const int64_t& _headY)
{
    m_headY = _headY;
    m_headYHasBeenSet = true;
}

bool SceneInfo::HeadYHasBeenSet() const
{
    return m_headYHasBeenSet;
}

int64_t SceneInfo::GetHeadWidth() const
{
    return m_headWidth;
}

void SceneInfo::SetHeadWidth(const int64_t& _headWidth)
{
    m_headWidth = _headWidth;
    m_headWidthHasBeenSet = true;
}

bool SceneInfo::HeadWidthHasBeenSet() const
{
    return m_headWidthHasBeenSet;
}

int64_t SceneInfo::GetHeadHeight() const
{
    return m_headHeight;
}

void SceneInfo::SetHeadHeight(const int64_t& _headHeight)
{
    m_headHeight = _headHeight;
    m_headHeightHasBeenSet = true;
}

bool SceneInfo::HeadHeightHasBeenSet() const
{
    return m_headHeightHasBeenSet;
}

