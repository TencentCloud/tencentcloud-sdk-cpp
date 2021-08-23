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

#include <tencentcloud/ie/v20200304/model/TextMarkInfoItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ie::V20200304::Model;
using namespace std;

TextMarkInfoItem::TextMarkInfoItem() :
    m_textHasBeenSet(false),
    m_posXHasBeenSet(false),
    m_posYHasBeenSet(false),
    m_fontSizeHasBeenSet(false),
    m_fontFileHasBeenSet(false),
    m_fontColorHasBeenSet(false),
    m_fontAlphaHasBeenSet(false)
{
}

CoreInternalOutcome TextMarkInfoItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextMarkInfoItem.Text` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_text = string(value["Text"].GetString());
        m_textHasBeenSet = true;
    }

    if (value.HasMember("PosX") && !value["PosX"].IsNull())
    {
        if (!value["PosX"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TextMarkInfoItem.PosX` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_posX = value["PosX"].GetInt64();
        m_posXHasBeenSet = true;
    }

    if (value.HasMember("PosY") && !value["PosY"].IsNull())
    {
        if (!value["PosY"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TextMarkInfoItem.PosY` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_posY = value["PosY"].GetInt64();
        m_posYHasBeenSet = true;
    }

    if (value.HasMember("FontSize") && !value["FontSize"].IsNull())
    {
        if (!value["FontSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TextMarkInfoItem.FontSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fontSize = value["FontSize"].GetInt64();
        m_fontSizeHasBeenSet = true;
    }

    if (value.HasMember("FontFile") && !value["FontFile"].IsNull())
    {
        if (!value["FontFile"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextMarkInfoItem.FontFile` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fontFile = string(value["FontFile"].GetString());
        m_fontFileHasBeenSet = true;
    }

    if (value.HasMember("FontColor") && !value["FontColor"].IsNull())
    {
        if (!value["FontColor"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextMarkInfoItem.FontColor` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fontColor = string(value["FontColor"].GetString());
        m_fontColorHasBeenSet = true;
    }

    if (value.HasMember("FontAlpha") && !value["FontAlpha"].IsNull())
    {
        if (!value["FontAlpha"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TextMarkInfoItem.FontAlpha` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_fontAlpha = value["FontAlpha"].GetDouble();
        m_fontAlphaHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TextMarkInfoItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_text.c_str(), allocator).Move(), allocator);
    }

    if (m_posXHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PosX";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_posX, allocator);
    }

    if (m_posYHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PosY";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_posY, allocator);
    }

    if (m_fontSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FontSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fontSize, allocator);
    }

    if (m_fontFileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FontFile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fontFile.c_str(), allocator).Move(), allocator);
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

}


string TextMarkInfoItem::GetText() const
{
    return m_text;
}

void TextMarkInfoItem::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool TextMarkInfoItem::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

int64_t TextMarkInfoItem::GetPosX() const
{
    return m_posX;
}

void TextMarkInfoItem::SetPosX(const int64_t& _posX)
{
    m_posX = _posX;
    m_posXHasBeenSet = true;
}

bool TextMarkInfoItem::PosXHasBeenSet() const
{
    return m_posXHasBeenSet;
}

int64_t TextMarkInfoItem::GetPosY() const
{
    return m_posY;
}

void TextMarkInfoItem::SetPosY(const int64_t& _posY)
{
    m_posY = _posY;
    m_posYHasBeenSet = true;
}

bool TextMarkInfoItem::PosYHasBeenSet() const
{
    return m_posYHasBeenSet;
}

int64_t TextMarkInfoItem::GetFontSize() const
{
    return m_fontSize;
}

void TextMarkInfoItem::SetFontSize(const int64_t& _fontSize)
{
    m_fontSize = _fontSize;
    m_fontSizeHasBeenSet = true;
}

bool TextMarkInfoItem::FontSizeHasBeenSet() const
{
    return m_fontSizeHasBeenSet;
}

string TextMarkInfoItem::GetFontFile() const
{
    return m_fontFile;
}

void TextMarkInfoItem::SetFontFile(const string& _fontFile)
{
    m_fontFile = _fontFile;
    m_fontFileHasBeenSet = true;
}

bool TextMarkInfoItem::FontFileHasBeenSet() const
{
    return m_fontFileHasBeenSet;
}

string TextMarkInfoItem::GetFontColor() const
{
    return m_fontColor;
}

void TextMarkInfoItem::SetFontColor(const string& _fontColor)
{
    m_fontColor = _fontColor;
    m_fontColorHasBeenSet = true;
}

bool TextMarkInfoItem::FontColorHasBeenSet() const
{
    return m_fontColorHasBeenSet;
}

double TextMarkInfoItem::GetFontAlpha() const
{
    return m_fontAlpha;
}

void TextMarkInfoItem::SetFontAlpha(const double& _fontAlpha)
{
    m_fontAlpha = _fontAlpha;
    m_fontAlphaHasBeenSet = true;
}

bool TextMarkInfoItem::FontAlphaHasBeenSet() const
{
    return m_fontAlphaHasBeenSet;
}

