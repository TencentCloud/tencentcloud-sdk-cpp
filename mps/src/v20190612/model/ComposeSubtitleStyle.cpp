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

#include <tencentcloud/mps/v20190612/model/ComposeSubtitleStyle.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

ComposeSubtitleStyle::ComposeSubtitleStyle() :
    m_heightHasBeenSet(false),
    m_marginBottomHasBeenSet(false),
    m_fontTypeHasBeenSet(false),
    m_fontSizeHasBeenSet(false),
    m_fontBoldHasBeenSet(false),
    m_fontItalicHasBeenSet(false),
    m_fontColorHasBeenSet(false),
    m_fontAlignHasBeenSet(false),
    m_fontAlignMarginHasBeenSet(false),
    m_borderWidthHasBeenSet(false),
    m_borderColorHasBeenSet(false),
    m_bottomColorHasBeenSet(false)
{
}

CoreInternalOutcome ComposeSubtitleStyle::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Height") && !value["Height"].IsNull())
    {
        if (!value["Height"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComposeSubtitleStyle.Height` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_height = string(value["Height"].GetString());
        m_heightHasBeenSet = true;
    }

    if (value.HasMember("MarginBottom") && !value["MarginBottom"].IsNull())
    {
        if (!value["MarginBottom"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComposeSubtitleStyle.MarginBottom` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_marginBottom = string(value["MarginBottom"].GetString());
        m_marginBottomHasBeenSet = true;
    }

    if (value.HasMember("FontType") && !value["FontType"].IsNull())
    {
        if (!value["FontType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComposeSubtitleStyle.FontType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fontType = string(value["FontType"].GetString());
        m_fontTypeHasBeenSet = true;
    }

    if (value.HasMember("FontSize") && !value["FontSize"].IsNull())
    {
        if (!value["FontSize"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComposeSubtitleStyle.FontSize` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fontSize = string(value["FontSize"].GetString());
        m_fontSizeHasBeenSet = true;
    }

    if (value.HasMember("FontBold") && !value["FontBold"].IsNull())
    {
        if (!value["FontBold"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ComposeSubtitleStyle.FontBold` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fontBold = value["FontBold"].GetInt64();
        m_fontBoldHasBeenSet = true;
    }

    if (value.HasMember("FontItalic") && !value["FontItalic"].IsNull())
    {
        if (!value["FontItalic"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ComposeSubtitleStyle.FontItalic` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fontItalic = value["FontItalic"].GetInt64();
        m_fontItalicHasBeenSet = true;
    }

    if (value.HasMember("FontColor") && !value["FontColor"].IsNull())
    {
        if (!value["FontColor"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComposeSubtitleStyle.FontColor` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fontColor = string(value["FontColor"].GetString());
        m_fontColorHasBeenSet = true;
    }

    if (value.HasMember("FontAlign") && !value["FontAlign"].IsNull())
    {
        if (!value["FontAlign"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComposeSubtitleStyle.FontAlign` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fontAlign = string(value["FontAlign"].GetString());
        m_fontAlignHasBeenSet = true;
    }

    if (value.HasMember("FontAlignMargin") && !value["FontAlignMargin"].IsNull())
    {
        if (!value["FontAlignMargin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComposeSubtitleStyle.FontAlignMargin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fontAlignMargin = string(value["FontAlignMargin"].GetString());
        m_fontAlignMarginHasBeenSet = true;
    }

    if (value.HasMember("BorderWidth") && !value["BorderWidth"].IsNull())
    {
        if (!value["BorderWidth"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComposeSubtitleStyle.BorderWidth` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_borderWidth = string(value["BorderWidth"].GetString());
        m_borderWidthHasBeenSet = true;
    }

    if (value.HasMember("BorderColor") && !value["BorderColor"].IsNull())
    {
        if (!value["BorderColor"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComposeSubtitleStyle.BorderColor` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_borderColor = string(value["BorderColor"].GetString());
        m_borderColorHasBeenSet = true;
    }

    if (value.HasMember("BottomColor") && !value["BottomColor"].IsNull())
    {
        if (!value["BottomColor"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComposeSubtitleStyle.BottomColor` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bottomColor = string(value["BottomColor"].GetString());
        m_bottomColorHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ComposeSubtitleStyle::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_heightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Height";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_height.c_str(), allocator).Move(), allocator);
    }

    if (m_marginBottomHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MarginBottom";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_marginBottom.c_str(), allocator).Move(), allocator);
    }

    if (m_fontTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FontType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fontType.c_str(), allocator).Move(), allocator);
    }

    if (m_fontSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FontSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fontSize.c_str(), allocator).Move(), allocator);
    }

    if (m_fontBoldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FontBold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fontBold, allocator);
    }

    if (m_fontItalicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FontItalic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fontItalic, allocator);
    }

    if (m_fontColorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FontColor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fontColor.c_str(), allocator).Move(), allocator);
    }

    if (m_fontAlignHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FontAlign";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fontAlign.c_str(), allocator).Move(), allocator);
    }

    if (m_fontAlignMarginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FontAlignMargin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fontAlignMargin.c_str(), allocator).Move(), allocator);
    }

    if (m_borderWidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BorderWidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_borderWidth.c_str(), allocator).Move(), allocator);
    }

    if (m_borderColorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BorderColor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_borderColor.c_str(), allocator).Move(), allocator);
    }

    if (m_bottomColorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BottomColor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bottomColor.c_str(), allocator).Move(), allocator);
    }

}


string ComposeSubtitleStyle::GetHeight() const
{
    return m_height;
}

void ComposeSubtitleStyle::SetHeight(const string& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool ComposeSubtitleStyle::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

string ComposeSubtitleStyle::GetMarginBottom() const
{
    return m_marginBottom;
}

void ComposeSubtitleStyle::SetMarginBottom(const string& _marginBottom)
{
    m_marginBottom = _marginBottom;
    m_marginBottomHasBeenSet = true;
}

bool ComposeSubtitleStyle::MarginBottomHasBeenSet() const
{
    return m_marginBottomHasBeenSet;
}

string ComposeSubtitleStyle::GetFontType() const
{
    return m_fontType;
}

void ComposeSubtitleStyle::SetFontType(const string& _fontType)
{
    m_fontType = _fontType;
    m_fontTypeHasBeenSet = true;
}

bool ComposeSubtitleStyle::FontTypeHasBeenSet() const
{
    return m_fontTypeHasBeenSet;
}

string ComposeSubtitleStyle::GetFontSize() const
{
    return m_fontSize;
}

void ComposeSubtitleStyle::SetFontSize(const string& _fontSize)
{
    m_fontSize = _fontSize;
    m_fontSizeHasBeenSet = true;
}

bool ComposeSubtitleStyle::FontSizeHasBeenSet() const
{
    return m_fontSizeHasBeenSet;
}

int64_t ComposeSubtitleStyle::GetFontBold() const
{
    return m_fontBold;
}

void ComposeSubtitleStyle::SetFontBold(const int64_t& _fontBold)
{
    m_fontBold = _fontBold;
    m_fontBoldHasBeenSet = true;
}

bool ComposeSubtitleStyle::FontBoldHasBeenSet() const
{
    return m_fontBoldHasBeenSet;
}

int64_t ComposeSubtitleStyle::GetFontItalic() const
{
    return m_fontItalic;
}

void ComposeSubtitleStyle::SetFontItalic(const int64_t& _fontItalic)
{
    m_fontItalic = _fontItalic;
    m_fontItalicHasBeenSet = true;
}

bool ComposeSubtitleStyle::FontItalicHasBeenSet() const
{
    return m_fontItalicHasBeenSet;
}

string ComposeSubtitleStyle::GetFontColor() const
{
    return m_fontColor;
}

void ComposeSubtitleStyle::SetFontColor(const string& _fontColor)
{
    m_fontColor = _fontColor;
    m_fontColorHasBeenSet = true;
}

bool ComposeSubtitleStyle::FontColorHasBeenSet() const
{
    return m_fontColorHasBeenSet;
}

string ComposeSubtitleStyle::GetFontAlign() const
{
    return m_fontAlign;
}

void ComposeSubtitleStyle::SetFontAlign(const string& _fontAlign)
{
    m_fontAlign = _fontAlign;
    m_fontAlignHasBeenSet = true;
}

bool ComposeSubtitleStyle::FontAlignHasBeenSet() const
{
    return m_fontAlignHasBeenSet;
}

string ComposeSubtitleStyle::GetFontAlignMargin() const
{
    return m_fontAlignMargin;
}

void ComposeSubtitleStyle::SetFontAlignMargin(const string& _fontAlignMargin)
{
    m_fontAlignMargin = _fontAlignMargin;
    m_fontAlignMarginHasBeenSet = true;
}

bool ComposeSubtitleStyle::FontAlignMarginHasBeenSet() const
{
    return m_fontAlignMarginHasBeenSet;
}

string ComposeSubtitleStyle::GetBorderWidth() const
{
    return m_borderWidth;
}

void ComposeSubtitleStyle::SetBorderWidth(const string& _borderWidth)
{
    m_borderWidth = _borderWidth;
    m_borderWidthHasBeenSet = true;
}

bool ComposeSubtitleStyle::BorderWidthHasBeenSet() const
{
    return m_borderWidthHasBeenSet;
}

string ComposeSubtitleStyle::GetBorderColor() const
{
    return m_borderColor;
}

void ComposeSubtitleStyle::SetBorderColor(const string& _borderColor)
{
    m_borderColor = _borderColor;
    m_borderColorHasBeenSet = true;
}

bool ComposeSubtitleStyle::BorderColorHasBeenSet() const
{
    return m_borderColorHasBeenSet;
}

string ComposeSubtitleStyle::GetBottomColor() const
{
    return m_bottomColor;
}

void ComposeSubtitleStyle::SetBottomColor(const string& _bottomColor)
{
    m_bottomColor = _bottomColor;
    m_bottomColorHasBeenSet = true;
}

bool ComposeSubtitleStyle::BottomColorHasBeenSet() const
{
    return m_bottomColorHasBeenSet;
}

