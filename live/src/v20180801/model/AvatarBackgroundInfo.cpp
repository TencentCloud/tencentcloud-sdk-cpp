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

#include <tencentcloud/live/v20180801/model/AvatarBackgroundInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

AvatarBackgroundInfo::AvatarBackgroundInfo() :
    m_backgroundIdHasBeenSet(false),
    m_sceneHasBeenSet(false),
    m_verticalImageUrlHasBeenSet(false),
    m_horizontalImageUrlHasBeenSet(false)
{
}

CoreInternalOutcome AvatarBackgroundInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BackgroundId") && !value["BackgroundId"].IsNull())
    {
        if (!value["BackgroundId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AvatarBackgroundInfo.BackgroundId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backgroundId = string(value["BackgroundId"].GetString());
        m_backgroundIdHasBeenSet = true;
    }

    if (value.HasMember("Scene") && !value["Scene"].IsNull())
    {
        if (!value["Scene"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AvatarBackgroundInfo.Scene` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scene = string(value["Scene"].GetString());
        m_sceneHasBeenSet = true;
    }

    if (value.HasMember("VerticalImageUrl") && !value["VerticalImageUrl"].IsNull())
    {
        if (!value["VerticalImageUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AvatarBackgroundInfo.VerticalImageUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_verticalImageUrl = string(value["VerticalImageUrl"].GetString());
        m_verticalImageUrlHasBeenSet = true;
    }

    if (value.HasMember("HorizontalImageUrl") && !value["HorizontalImageUrl"].IsNull())
    {
        if (!value["HorizontalImageUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AvatarBackgroundInfo.HorizontalImageUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_horizontalImageUrl = string(value["HorizontalImageUrl"].GetString());
        m_horizontalImageUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AvatarBackgroundInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_backgroundIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackgroundId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backgroundId.c_str(), allocator).Move(), allocator);
    }

    if (m_sceneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scene";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scene.c_str(), allocator).Move(), allocator);
    }

    if (m_verticalImageUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerticalImageUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_verticalImageUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_horizontalImageUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HorizontalImageUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_horizontalImageUrl.c_str(), allocator).Move(), allocator);
    }

}


string AvatarBackgroundInfo::GetBackgroundId() const
{
    return m_backgroundId;
}

void AvatarBackgroundInfo::SetBackgroundId(const string& _backgroundId)
{
    m_backgroundId = _backgroundId;
    m_backgroundIdHasBeenSet = true;
}

bool AvatarBackgroundInfo::BackgroundIdHasBeenSet() const
{
    return m_backgroundIdHasBeenSet;
}

string AvatarBackgroundInfo::GetScene() const
{
    return m_scene;
}

void AvatarBackgroundInfo::SetScene(const string& _scene)
{
    m_scene = _scene;
    m_sceneHasBeenSet = true;
}

bool AvatarBackgroundInfo::SceneHasBeenSet() const
{
    return m_sceneHasBeenSet;
}

string AvatarBackgroundInfo::GetVerticalImageUrl() const
{
    return m_verticalImageUrl;
}

void AvatarBackgroundInfo::SetVerticalImageUrl(const string& _verticalImageUrl)
{
    m_verticalImageUrl = _verticalImageUrl;
    m_verticalImageUrlHasBeenSet = true;
}

bool AvatarBackgroundInfo::VerticalImageUrlHasBeenSet() const
{
    return m_verticalImageUrlHasBeenSet;
}

string AvatarBackgroundInfo::GetHorizontalImageUrl() const
{
    return m_horizontalImageUrl;
}

void AvatarBackgroundInfo::SetHorizontalImageUrl(const string& _horizontalImageUrl)
{
    m_horizontalImageUrl = _horizontalImageUrl;
    m_horizontalImageUrlHasBeenSet = true;
}

bool AvatarBackgroundInfo::HorizontalImageUrlHasBeenSet() const
{
    return m_horizontalImageUrlHasBeenSet;
}

