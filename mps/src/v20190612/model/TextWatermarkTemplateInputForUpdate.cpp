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

#include <tencentcloud/mps/v20190612/model/TextWatermarkTemplateInputForUpdate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

TextWatermarkTemplateInputForUpdate::TextWatermarkTemplateInputForUpdate() :
    m_fontTypeHasBeenSet(false),
    m_fontSizeHasBeenSet(false),
    m_fontColorHasBeenSet(false),
    m_fontAlphaHasBeenSet(false),
    m_textContentHasBeenSet(false)
{
}

CoreInternalOutcome TextWatermarkTemplateInputForUpdate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FontType") && !value["FontType"].IsNull())
    {
        if (!value["FontType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextWatermarkTemplateInputForUpdate.FontType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fontType = string(value["FontType"].GetString());
        m_fontTypeHasBeenSet = true;
    }

    if (value.HasMember("FontSize") && !value["FontSize"].IsNull())
    {
        if (!value["FontSize"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextWatermarkTemplateInputForUpdate.FontSize` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fontSize = string(value["FontSize"].GetString());
        m_fontSizeHasBeenSet = true;
    }

    if (value.HasMember("FontColor") && !value["FontColor"].IsNull())
    {
        if (!value["FontColor"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextWatermarkTemplateInputForUpdate.FontColor` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fontColor = string(value["FontColor"].GetString());
        m_fontColorHasBeenSet = true;
    }

    if (value.HasMember("FontAlpha") && !value["FontAlpha"].IsNull())
    {
        if (!value["FontAlpha"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TextWatermarkTemplateInputForUpdate.FontAlpha` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_fontAlpha = value["FontAlpha"].GetDouble();
        m_fontAlphaHasBeenSet = true;
    }

    if (value.HasMember("TextContent") && !value["TextContent"].IsNull())
    {
        if (!value["TextContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextWatermarkTemplateInputForUpdate.TextContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_textContent = string(value["TextContent"].GetString());
        m_textContentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TextWatermarkTemplateInputForUpdate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_fontColorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FontColor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fontColor.c_str(), allocator).Move(), allocator);
    }

    if (m_fontAlphaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FontAlpha";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fontAlpha, allocator);
    }

    if (m_textContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TextContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_textContent.c_str(), allocator).Move(), allocator);
    }

}


string TextWatermarkTemplateInputForUpdate::GetFontType() const
{
    return m_fontType;
}

void TextWatermarkTemplateInputForUpdate::SetFontType(const string& _fontType)
{
    m_fontType = _fontType;
    m_fontTypeHasBeenSet = true;
}

bool TextWatermarkTemplateInputForUpdate::FontTypeHasBeenSet() const
{
    return m_fontTypeHasBeenSet;
}

string TextWatermarkTemplateInputForUpdate::GetFontSize() const
{
    return m_fontSize;
}

void TextWatermarkTemplateInputForUpdate::SetFontSize(const string& _fontSize)
{
    m_fontSize = _fontSize;
    m_fontSizeHasBeenSet = true;
}

bool TextWatermarkTemplateInputForUpdate::FontSizeHasBeenSet() const
{
    return m_fontSizeHasBeenSet;
}

string TextWatermarkTemplateInputForUpdate::GetFontColor() const
{
    return m_fontColor;
}

void TextWatermarkTemplateInputForUpdate::SetFontColor(const string& _fontColor)
{
    m_fontColor = _fontColor;
    m_fontColorHasBeenSet = true;
}

bool TextWatermarkTemplateInputForUpdate::FontColorHasBeenSet() const
{
    return m_fontColorHasBeenSet;
}

double TextWatermarkTemplateInputForUpdate::GetFontAlpha() const
{
    return m_fontAlpha;
}

void TextWatermarkTemplateInputForUpdate::SetFontAlpha(const double& _fontAlpha)
{
    m_fontAlpha = _fontAlpha;
    m_fontAlphaHasBeenSet = true;
}

bool TextWatermarkTemplateInputForUpdate::FontAlphaHasBeenSet() const
{
    return m_fontAlphaHasBeenSet;
}

string TextWatermarkTemplateInputForUpdate::GetTextContent() const
{
    return m_textContent;
}

void TextWatermarkTemplateInputForUpdate::SetTextContent(const string& _textContent)
{
    m_textContent = _textContent;
    m_textContentHasBeenSet = true;
}

bool TextWatermarkTemplateInputForUpdate::TextContentHasBeenSet() const
{
    return m_textContentHasBeenSet;
}

