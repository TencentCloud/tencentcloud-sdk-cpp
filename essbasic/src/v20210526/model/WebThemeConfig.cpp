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

#include <tencentcloud/essbasic/v20210526/model/WebThemeConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

WebThemeConfig::WebThemeConfig() :
    m_displaySignBrandLogoHasBeenSet(false),
    m_webEmbedThemeColorHasBeenSet(false),
    m_authenticateBackgroundHasBeenSet(false),
    m_hideAuthenticateNavigationBarHasBeenSet(false),
    m_hideAuthenticateTopLogoHasBeenSet(false)
{
}

CoreInternalOutcome WebThemeConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DisplaySignBrandLogo") && !value["DisplaySignBrandLogo"].IsNull())
    {
        if (!value["DisplaySignBrandLogo"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `WebThemeConfig.DisplaySignBrandLogo` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_displaySignBrandLogo = value["DisplaySignBrandLogo"].GetBool();
        m_displaySignBrandLogoHasBeenSet = true;
    }

    if (value.HasMember("WebEmbedThemeColor") && !value["WebEmbedThemeColor"].IsNull())
    {
        if (!value["WebEmbedThemeColor"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebThemeConfig.WebEmbedThemeColor` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_webEmbedThemeColor = string(value["WebEmbedThemeColor"].GetString());
        m_webEmbedThemeColorHasBeenSet = true;
    }

    if (value.HasMember("AuthenticateBackground") && !value["AuthenticateBackground"].IsNull())
    {
        if (!value["AuthenticateBackground"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebThemeConfig.AuthenticateBackground` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authenticateBackground = string(value["AuthenticateBackground"].GetString());
        m_authenticateBackgroundHasBeenSet = true;
    }

    if (value.HasMember("HideAuthenticateNavigationBar") && !value["HideAuthenticateNavigationBar"].IsNull())
    {
        if (!value["HideAuthenticateNavigationBar"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `WebThemeConfig.HideAuthenticateNavigationBar` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hideAuthenticateNavigationBar = value["HideAuthenticateNavigationBar"].GetBool();
        m_hideAuthenticateNavigationBarHasBeenSet = true;
    }

    if (value.HasMember("HideAuthenticateTopLogo") && !value["HideAuthenticateTopLogo"].IsNull())
    {
        if (!value["HideAuthenticateTopLogo"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `WebThemeConfig.HideAuthenticateTopLogo` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hideAuthenticateTopLogo = value["HideAuthenticateTopLogo"].GetBool();
        m_hideAuthenticateTopLogoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WebThemeConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_displaySignBrandLogoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplaySignBrandLogo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_displaySignBrandLogo, allocator);
    }

    if (m_webEmbedThemeColorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebEmbedThemeColor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_webEmbedThemeColor.c_str(), allocator).Move(), allocator);
    }

    if (m_authenticateBackgroundHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthenticateBackground";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authenticateBackground.c_str(), allocator).Move(), allocator);
    }

    if (m_hideAuthenticateNavigationBarHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HideAuthenticateNavigationBar";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hideAuthenticateNavigationBar, allocator);
    }

    if (m_hideAuthenticateTopLogoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HideAuthenticateTopLogo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hideAuthenticateTopLogo, allocator);
    }

}


bool WebThemeConfig::GetDisplaySignBrandLogo() const
{
    return m_displaySignBrandLogo;
}

void WebThemeConfig::SetDisplaySignBrandLogo(const bool& _displaySignBrandLogo)
{
    m_displaySignBrandLogo = _displaySignBrandLogo;
    m_displaySignBrandLogoHasBeenSet = true;
}

bool WebThemeConfig::DisplaySignBrandLogoHasBeenSet() const
{
    return m_displaySignBrandLogoHasBeenSet;
}

string WebThemeConfig::GetWebEmbedThemeColor() const
{
    return m_webEmbedThemeColor;
}

void WebThemeConfig::SetWebEmbedThemeColor(const string& _webEmbedThemeColor)
{
    m_webEmbedThemeColor = _webEmbedThemeColor;
    m_webEmbedThemeColorHasBeenSet = true;
}

bool WebThemeConfig::WebEmbedThemeColorHasBeenSet() const
{
    return m_webEmbedThemeColorHasBeenSet;
}

string WebThemeConfig::GetAuthenticateBackground() const
{
    return m_authenticateBackground;
}

void WebThemeConfig::SetAuthenticateBackground(const string& _authenticateBackground)
{
    m_authenticateBackground = _authenticateBackground;
    m_authenticateBackgroundHasBeenSet = true;
}

bool WebThemeConfig::AuthenticateBackgroundHasBeenSet() const
{
    return m_authenticateBackgroundHasBeenSet;
}

bool WebThemeConfig::GetHideAuthenticateNavigationBar() const
{
    return m_hideAuthenticateNavigationBar;
}

void WebThemeConfig::SetHideAuthenticateNavigationBar(const bool& _hideAuthenticateNavigationBar)
{
    m_hideAuthenticateNavigationBar = _hideAuthenticateNavigationBar;
    m_hideAuthenticateNavigationBarHasBeenSet = true;
}

bool WebThemeConfig::HideAuthenticateNavigationBarHasBeenSet() const
{
    return m_hideAuthenticateNavigationBarHasBeenSet;
}

bool WebThemeConfig::GetHideAuthenticateTopLogo() const
{
    return m_hideAuthenticateTopLogo;
}

void WebThemeConfig::SetHideAuthenticateTopLogo(const bool& _hideAuthenticateTopLogo)
{
    m_hideAuthenticateTopLogo = _hideAuthenticateTopLogo;
    m_hideAuthenticateTopLogoHasBeenSet = true;
}

bool WebThemeConfig::HideAuthenticateTopLogoHasBeenSet() const
{
    return m_hideAuthenticateTopLogoHasBeenSet;
}

