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

#include <tencentcloud/lcic/v20220817/model/SceneItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lcic::V20220817::Model;
using namespace std;

SceneItem::SceneItem() :
    m_sceneHasBeenSet(false),
    m_logoUrlHasBeenSet(false),
    m_homeUrlHasBeenSet(false),
    m_jSUrlHasBeenSet(false),
    m_cSSUrlHasBeenSet(false)
{
}

CoreInternalOutcome SceneItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Scene") && !value["Scene"].IsNull())
    {
        if (!value["Scene"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SceneItem.Scene` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scene = string(value["Scene"].GetString());
        m_sceneHasBeenSet = true;
    }

    if (value.HasMember("LogoUrl") && !value["LogoUrl"].IsNull())
    {
        if (!value["LogoUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SceneItem.LogoUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logoUrl = string(value["LogoUrl"].GetString());
        m_logoUrlHasBeenSet = true;
    }

    if (value.HasMember("HomeUrl") && !value["HomeUrl"].IsNull())
    {
        if (!value["HomeUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SceneItem.HomeUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_homeUrl = string(value["HomeUrl"].GetString());
        m_homeUrlHasBeenSet = true;
    }

    if (value.HasMember("JSUrl") && !value["JSUrl"].IsNull())
    {
        if (!value["JSUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SceneItem.JSUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jSUrl = string(value["JSUrl"].GetString());
        m_jSUrlHasBeenSet = true;
    }

    if (value.HasMember("CSSUrl") && !value["CSSUrl"].IsNull())
    {
        if (!value["CSSUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SceneItem.CSSUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cSSUrl = string(value["CSSUrl"].GetString());
        m_cSSUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SceneItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sceneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scene";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scene.c_str(), allocator).Move(), allocator);
    }

    if (m_logoUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogoUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logoUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_homeUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HomeUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_homeUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_jSUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JSUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jSUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_cSSUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CSSUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cSSUrl.c_str(), allocator).Move(), allocator);
    }

}


string SceneItem::GetScene() const
{
    return m_scene;
}

void SceneItem::SetScene(const string& _scene)
{
    m_scene = _scene;
    m_sceneHasBeenSet = true;
}

bool SceneItem::SceneHasBeenSet() const
{
    return m_sceneHasBeenSet;
}

string SceneItem::GetLogoUrl() const
{
    return m_logoUrl;
}

void SceneItem::SetLogoUrl(const string& _logoUrl)
{
    m_logoUrl = _logoUrl;
    m_logoUrlHasBeenSet = true;
}

bool SceneItem::LogoUrlHasBeenSet() const
{
    return m_logoUrlHasBeenSet;
}

string SceneItem::GetHomeUrl() const
{
    return m_homeUrl;
}

void SceneItem::SetHomeUrl(const string& _homeUrl)
{
    m_homeUrl = _homeUrl;
    m_homeUrlHasBeenSet = true;
}

bool SceneItem::HomeUrlHasBeenSet() const
{
    return m_homeUrlHasBeenSet;
}

string SceneItem::GetJSUrl() const
{
    return m_jSUrl;
}

void SceneItem::SetJSUrl(const string& _jSUrl)
{
    m_jSUrl = _jSUrl;
    m_jSUrlHasBeenSet = true;
}

bool SceneItem::JSUrlHasBeenSet() const
{
    return m_jSUrlHasBeenSet;
}

string SceneItem::GetCSSUrl() const
{
    return m_cSSUrl;
}

void SceneItem::SetCSSUrl(const string& _cSSUrl)
{
    m_cSSUrl = _cSSUrl;
    m_cSSUrlHasBeenSet = true;
}

bool SceneItem::CSSUrlHasBeenSet() const
{
    return m_cSSUrlHasBeenSet;
}

