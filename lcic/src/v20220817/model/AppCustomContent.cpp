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

#include <tencentcloud/lcic/v20220817/model/AppCustomContent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lcic::V20220817::Model;
using namespace std;

AppCustomContent::AppCustomContent() :
    m_sceneHasBeenSet(false),
    m_logoUrlHasBeenSet(false),
    m_homeUrlHasBeenSet(false),
    m_jsUrlHasBeenSet(false),
    m_cssUrlHasBeenSet(false)
{
}

CoreInternalOutcome AppCustomContent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Scene") && !value["Scene"].IsNull())
    {
        if (!value["Scene"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppCustomContent.Scene` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scene = string(value["Scene"].GetString());
        m_sceneHasBeenSet = true;
    }

    if (value.HasMember("LogoUrl") && !value["LogoUrl"].IsNull())
    {
        if (!value["LogoUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppCustomContent.LogoUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logoUrl = string(value["LogoUrl"].GetString());
        m_logoUrlHasBeenSet = true;
    }

    if (value.HasMember("HomeUrl") && !value["HomeUrl"].IsNull())
    {
        if (!value["HomeUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppCustomContent.HomeUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_homeUrl = string(value["HomeUrl"].GetString());
        m_homeUrlHasBeenSet = true;
    }

    if (value.HasMember("JsUrl") && !value["JsUrl"].IsNull())
    {
        if (!value["JsUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppCustomContent.JsUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jsUrl = string(value["JsUrl"].GetString());
        m_jsUrlHasBeenSet = true;
    }

    if (value.HasMember("CssUrl") && !value["CssUrl"].IsNull())
    {
        if (!value["CssUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppCustomContent.CssUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cssUrl = string(value["CssUrl"].GetString());
        m_cssUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AppCustomContent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_jsUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JsUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jsUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_cssUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CssUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cssUrl.c_str(), allocator).Move(), allocator);
    }

}


string AppCustomContent::GetScene() const
{
    return m_scene;
}

void AppCustomContent::SetScene(const string& _scene)
{
    m_scene = _scene;
    m_sceneHasBeenSet = true;
}

bool AppCustomContent::SceneHasBeenSet() const
{
    return m_sceneHasBeenSet;
}

string AppCustomContent::GetLogoUrl() const
{
    return m_logoUrl;
}

void AppCustomContent::SetLogoUrl(const string& _logoUrl)
{
    m_logoUrl = _logoUrl;
    m_logoUrlHasBeenSet = true;
}

bool AppCustomContent::LogoUrlHasBeenSet() const
{
    return m_logoUrlHasBeenSet;
}

string AppCustomContent::GetHomeUrl() const
{
    return m_homeUrl;
}

void AppCustomContent::SetHomeUrl(const string& _homeUrl)
{
    m_homeUrl = _homeUrl;
    m_homeUrlHasBeenSet = true;
}

bool AppCustomContent::HomeUrlHasBeenSet() const
{
    return m_homeUrlHasBeenSet;
}

string AppCustomContent::GetJsUrl() const
{
    return m_jsUrl;
}

void AppCustomContent::SetJsUrl(const string& _jsUrl)
{
    m_jsUrl = _jsUrl;
    m_jsUrlHasBeenSet = true;
}

bool AppCustomContent::JsUrlHasBeenSet() const
{
    return m_jsUrlHasBeenSet;
}

string AppCustomContent::GetCssUrl() const
{
    return m_cssUrl;
}

void AppCustomContent::SetCssUrl(const string& _cssUrl)
{
    m_cssUrl = _cssUrl;
    m_cssUrlHasBeenSet = true;
}

bool AppCustomContent::CssUrlHasBeenSet() const
{
    return m_cssUrlHasBeenSet;
}

