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

#include <tencentcloud/ie/v20200304/model/MediaCuttingWatermarkText.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ie::V20200304::Model;
using namespace std;

MediaCuttingWatermarkText::MediaCuttingWatermarkText() :
    m_textHasBeenSet(false),
    m_fontSizeHasBeenSet(false),
    m_posXHasBeenSet(false),
    m_posYHasBeenSet(false),
    m_fontColorHasBeenSet(false),
    m_fontAlphaHasBeenSet(false),
    m_posOriginTypeHasBeenSet(false),
    m_fontHasBeenSet(false)
{
}

CoreInternalOutcome MediaCuttingWatermarkText::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaCuttingWatermarkText.Text` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_text = string(value["Text"].GetString());
        m_textHasBeenSet = true;
    }

    if (value.HasMember("FontSize") && !value["FontSize"].IsNull())
    {
        if (!value["FontSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MediaCuttingWatermarkText.FontSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_fontSize = value["FontSize"].GetUint64();
        m_fontSizeHasBeenSet = true;
    }

    if (value.HasMember("PosX") && !value["PosX"].IsNull())
    {
        if (!value["PosX"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MediaCuttingWatermarkText.PosX` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_posX = value["PosX"].GetUint64();
        m_posXHasBeenSet = true;
    }

    if (value.HasMember("PosY") && !value["PosY"].IsNull())
    {
        if (!value["PosY"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MediaCuttingWatermarkText.PosY` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_posY = value["PosY"].GetUint64();
        m_posYHasBeenSet = true;
    }

    if (value.HasMember("FontColor") && !value["FontColor"].IsNull())
    {
        if (!value["FontColor"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaCuttingWatermarkText.FontColor` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fontColor = string(value["FontColor"].GetString());
        m_fontColorHasBeenSet = true;
    }

    if (value.HasMember("FontAlpha") && !value["FontAlpha"].IsNull())
    {
        if (!value["FontAlpha"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MediaCuttingWatermarkText.FontAlpha` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_fontAlpha = value["FontAlpha"].GetUint64();
        m_fontAlphaHasBeenSet = true;
    }

    if (value.HasMember("PosOriginType") && !value["PosOriginType"].IsNull())
    {
        if (!value["PosOriginType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaCuttingWatermarkText.PosOriginType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_posOriginType = string(value["PosOriginType"].GetString());
        m_posOriginTypeHasBeenSet = true;
    }

    if (value.HasMember("Font") && !value["Font"].IsNull())
    {
        if (!value["Font"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaCuttingWatermarkText.Font` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_font = string(value["Font"].GetString());
        m_fontHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaCuttingWatermarkText::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_text.c_str(), allocator).Move(), allocator);
    }

    if (m_fontSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FontSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fontSize, allocator);
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

    if (m_posOriginTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PosOriginType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_posOriginType.c_str(), allocator).Move(), allocator);
    }

    if (m_fontHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Font";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_font.c_str(), allocator).Move(), allocator);
    }

}


string MediaCuttingWatermarkText::GetText() const
{
    return m_text;
}

void MediaCuttingWatermarkText::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool MediaCuttingWatermarkText::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

uint64_t MediaCuttingWatermarkText::GetFontSize() const
{
    return m_fontSize;
}

void MediaCuttingWatermarkText::SetFontSize(const uint64_t& _fontSize)
{
    m_fontSize = _fontSize;
    m_fontSizeHasBeenSet = true;
}

bool MediaCuttingWatermarkText::FontSizeHasBeenSet() const
{
    return m_fontSizeHasBeenSet;
}

uint64_t MediaCuttingWatermarkText::GetPosX() const
{
    return m_posX;
}

void MediaCuttingWatermarkText::SetPosX(const uint64_t& _posX)
{
    m_posX = _posX;
    m_posXHasBeenSet = true;
}

bool MediaCuttingWatermarkText::PosXHasBeenSet() const
{
    return m_posXHasBeenSet;
}

uint64_t MediaCuttingWatermarkText::GetPosY() const
{
    return m_posY;
}

void MediaCuttingWatermarkText::SetPosY(const uint64_t& _posY)
{
    m_posY = _posY;
    m_posYHasBeenSet = true;
}

bool MediaCuttingWatermarkText::PosYHasBeenSet() const
{
    return m_posYHasBeenSet;
}

string MediaCuttingWatermarkText::GetFontColor() const
{
    return m_fontColor;
}

void MediaCuttingWatermarkText::SetFontColor(const string& _fontColor)
{
    m_fontColor = _fontColor;
    m_fontColorHasBeenSet = true;
}

bool MediaCuttingWatermarkText::FontColorHasBeenSet() const
{
    return m_fontColorHasBeenSet;
}

uint64_t MediaCuttingWatermarkText::GetFontAlpha() const
{
    return m_fontAlpha;
}

void MediaCuttingWatermarkText::SetFontAlpha(const uint64_t& _fontAlpha)
{
    m_fontAlpha = _fontAlpha;
    m_fontAlphaHasBeenSet = true;
}

bool MediaCuttingWatermarkText::FontAlphaHasBeenSet() const
{
    return m_fontAlphaHasBeenSet;
}

string MediaCuttingWatermarkText::GetPosOriginType() const
{
    return m_posOriginType;
}

void MediaCuttingWatermarkText::SetPosOriginType(const string& _posOriginType)
{
    m_posOriginType = _posOriginType;
    m_posOriginTypeHasBeenSet = true;
}

bool MediaCuttingWatermarkText::PosOriginTypeHasBeenSet() const
{
    return m_posOriginTypeHasBeenSet;
}

string MediaCuttingWatermarkText::GetFont() const
{
    return m_font;
}

void MediaCuttingWatermarkText::SetFont(const string& _font)
{
    m_font = _font;
    m_fontHasBeenSet = true;
}

bool MediaCuttingWatermarkText::FontHasBeenSet() const
{
    return m_fontHasBeenSet;
}

