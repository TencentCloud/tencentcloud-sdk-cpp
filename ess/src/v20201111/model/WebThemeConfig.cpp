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

#include <tencentcloud/ess/v20201111/model/WebThemeConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

WebThemeConfig::WebThemeConfig() :
    m_displaySignBrandLogoHasBeenSet(false),
    m_webEmbedThemeColorHasBeenSet(false)
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

