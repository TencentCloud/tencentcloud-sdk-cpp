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

#include <tencentcloud/adp/v20260520/model/BackgroundImage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

BackgroundImage::BackgroundImage() :
    m_brightnessHasBeenSet(false),
    m_landscapeImageUrlHasBeenSet(false),
    m_originalImageUrlHasBeenSet(false),
    m_portraitImageUrlHasBeenSet(false),
    m_themeColorHasBeenSet(false)
{
}

CoreInternalOutcome BackgroundImage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Brightness") && !value["Brightness"].IsNull())
    {
        if (!value["Brightness"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BackgroundImage.Brightness` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_brightness = value["Brightness"].GetUint64();
        m_brightnessHasBeenSet = true;
    }

    if (value.HasMember("LandscapeImageUrl") && !value["LandscapeImageUrl"].IsNull())
    {
        if (!value["LandscapeImageUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackgroundImage.LandscapeImageUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_landscapeImageUrl = string(value["LandscapeImageUrl"].GetString());
        m_landscapeImageUrlHasBeenSet = true;
    }

    if (value.HasMember("OriginalImageUrl") && !value["OriginalImageUrl"].IsNull())
    {
        if (!value["OriginalImageUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackgroundImage.OriginalImageUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originalImageUrl = string(value["OriginalImageUrl"].GetString());
        m_originalImageUrlHasBeenSet = true;
    }

    if (value.HasMember("PortraitImageUrl") && !value["PortraitImageUrl"].IsNull())
    {
        if (!value["PortraitImageUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackgroundImage.PortraitImageUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_portraitImageUrl = string(value["PortraitImageUrl"].GetString());
        m_portraitImageUrlHasBeenSet = true;
    }

    if (value.HasMember("ThemeColor") && !value["ThemeColor"].IsNull())
    {
        if (!value["ThemeColor"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackgroundImage.ThemeColor` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_themeColor = string(value["ThemeColor"].GetString());
        m_themeColorHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BackgroundImage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_brightnessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Brightness";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_brightness, allocator);
    }

    if (m_landscapeImageUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LandscapeImageUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_landscapeImageUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_originalImageUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalImageUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originalImageUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_portraitImageUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PortraitImageUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_portraitImageUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_themeColorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThemeColor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_themeColor.c_str(), allocator).Move(), allocator);
    }

}


uint64_t BackgroundImage::GetBrightness() const
{
    return m_brightness;
}

void BackgroundImage::SetBrightness(const uint64_t& _brightness)
{
    m_brightness = _brightness;
    m_brightnessHasBeenSet = true;
}

bool BackgroundImage::BrightnessHasBeenSet() const
{
    return m_brightnessHasBeenSet;
}

string BackgroundImage::GetLandscapeImageUrl() const
{
    return m_landscapeImageUrl;
}

void BackgroundImage::SetLandscapeImageUrl(const string& _landscapeImageUrl)
{
    m_landscapeImageUrl = _landscapeImageUrl;
    m_landscapeImageUrlHasBeenSet = true;
}

bool BackgroundImage::LandscapeImageUrlHasBeenSet() const
{
    return m_landscapeImageUrlHasBeenSet;
}

string BackgroundImage::GetOriginalImageUrl() const
{
    return m_originalImageUrl;
}

void BackgroundImage::SetOriginalImageUrl(const string& _originalImageUrl)
{
    m_originalImageUrl = _originalImageUrl;
    m_originalImageUrlHasBeenSet = true;
}

bool BackgroundImage::OriginalImageUrlHasBeenSet() const
{
    return m_originalImageUrlHasBeenSet;
}

string BackgroundImage::GetPortraitImageUrl() const
{
    return m_portraitImageUrl;
}

void BackgroundImage::SetPortraitImageUrl(const string& _portraitImageUrl)
{
    m_portraitImageUrl = _portraitImageUrl;
    m_portraitImageUrlHasBeenSet = true;
}

bool BackgroundImage::PortraitImageUrlHasBeenSet() const
{
    return m_portraitImageUrlHasBeenSet;
}

string BackgroundImage::GetThemeColor() const
{
    return m_themeColor;
}

void BackgroundImage::SetThemeColor(const string& _themeColor)
{
    m_themeColor = _themeColor;
    m_themeColorHasBeenSet = true;
}

bool BackgroundImage::ThemeColorHasBeenSet() const
{
    return m_themeColorHasBeenSet;
}

