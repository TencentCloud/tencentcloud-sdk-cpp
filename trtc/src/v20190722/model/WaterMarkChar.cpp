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

#include <tencentcloud/trtc/v20190722/model/WaterMarkChar.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

WaterMarkChar::WaterMarkChar() :
    m_topHasBeenSet(false),
    m_leftHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_charsHasBeenSet(false),
    m_fontSizeHasBeenSet(false),
    m_fontColorHasBeenSet(false),
    m_backGroundColorHasBeenSet(false),
    m_fontHasBeenSet(false)
{
}

CoreInternalOutcome WaterMarkChar::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Top") && !value["Top"].IsNull())
    {
        if (!value["Top"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WaterMarkChar.Top` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_top = value["Top"].GetUint64();
        m_topHasBeenSet = true;
    }

    if (value.HasMember("Left") && !value["Left"].IsNull())
    {
        if (!value["Left"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WaterMarkChar.Left` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_left = value["Left"].GetUint64();
        m_leftHasBeenSet = true;
    }

    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WaterMarkChar.Width` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_width = value["Width"].GetUint64();
        m_widthHasBeenSet = true;
    }

    if (value.HasMember("Height") && !value["Height"].IsNull())
    {
        if (!value["Height"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WaterMarkChar.Height` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_height = value["Height"].GetUint64();
        m_heightHasBeenSet = true;
    }

    if (value.HasMember("Chars") && !value["Chars"].IsNull())
    {
        if (!value["Chars"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WaterMarkChar.Chars` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chars = string(value["Chars"].GetString());
        m_charsHasBeenSet = true;
    }

    if (value.HasMember("FontSize") && !value["FontSize"].IsNull())
    {
        if (!value["FontSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WaterMarkChar.FontSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_fontSize = value["FontSize"].GetUint64();
        m_fontSizeHasBeenSet = true;
    }

    if (value.HasMember("FontColor") && !value["FontColor"].IsNull())
    {
        if (!value["FontColor"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WaterMarkChar.FontColor` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fontColor = string(value["FontColor"].GetString());
        m_fontColorHasBeenSet = true;
    }

    if (value.HasMember("BackGroundColor") && !value["BackGroundColor"].IsNull())
    {
        if (!value["BackGroundColor"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WaterMarkChar.BackGroundColor` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backGroundColor = string(value["BackGroundColor"].GetString());
        m_backGroundColorHasBeenSet = true;
    }

    if (value.HasMember("Font") && !value["Font"].IsNull())
    {
        if (!value["Font"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WaterMarkChar.Font` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_font = string(value["Font"].GetString());
        m_fontHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WaterMarkChar::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_topHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Top";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_top, allocator);
    }

    if (m_leftHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Left";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_left, allocator);
    }

    if (m_widthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Width";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_width, allocator);
    }

    if (m_heightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Height";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_height, allocator);
    }

    if (m_charsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Chars";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chars.c_str(), allocator).Move(), allocator);
    }

    if (m_fontSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FontSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fontSize, allocator);
    }

    if (m_fontColorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FontColor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fontColor.c_str(), allocator).Move(), allocator);
    }

    if (m_backGroundColorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackGroundColor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backGroundColor.c_str(), allocator).Move(), allocator);
    }

    if (m_fontHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Font";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_font.c_str(), allocator).Move(), allocator);
    }

}


uint64_t WaterMarkChar::GetTop() const
{
    return m_top;
}

void WaterMarkChar::SetTop(const uint64_t& _top)
{
    m_top = _top;
    m_topHasBeenSet = true;
}

bool WaterMarkChar::TopHasBeenSet() const
{
    return m_topHasBeenSet;
}

uint64_t WaterMarkChar::GetLeft() const
{
    return m_left;
}

void WaterMarkChar::SetLeft(const uint64_t& _left)
{
    m_left = _left;
    m_leftHasBeenSet = true;
}

bool WaterMarkChar::LeftHasBeenSet() const
{
    return m_leftHasBeenSet;
}

uint64_t WaterMarkChar::GetWidth() const
{
    return m_width;
}

void WaterMarkChar::SetWidth(const uint64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool WaterMarkChar::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

uint64_t WaterMarkChar::GetHeight() const
{
    return m_height;
}

void WaterMarkChar::SetHeight(const uint64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool WaterMarkChar::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

string WaterMarkChar::GetChars() const
{
    return m_chars;
}

void WaterMarkChar::SetChars(const string& _chars)
{
    m_chars = _chars;
    m_charsHasBeenSet = true;
}

bool WaterMarkChar::CharsHasBeenSet() const
{
    return m_charsHasBeenSet;
}

uint64_t WaterMarkChar::GetFontSize() const
{
    return m_fontSize;
}

void WaterMarkChar::SetFontSize(const uint64_t& _fontSize)
{
    m_fontSize = _fontSize;
    m_fontSizeHasBeenSet = true;
}

bool WaterMarkChar::FontSizeHasBeenSet() const
{
    return m_fontSizeHasBeenSet;
}

string WaterMarkChar::GetFontColor() const
{
    return m_fontColor;
}

void WaterMarkChar::SetFontColor(const string& _fontColor)
{
    m_fontColor = _fontColor;
    m_fontColorHasBeenSet = true;
}

bool WaterMarkChar::FontColorHasBeenSet() const
{
    return m_fontColorHasBeenSet;
}

string WaterMarkChar::GetBackGroundColor() const
{
    return m_backGroundColor;
}

void WaterMarkChar::SetBackGroundColor(const string& _backGroundColor)
{
    m_backGroundColor = _backGroundColor;
    m_backGroundColorHasBeenSet = true;
}

bool WaterMarkChar::BackGroundColorHasBeenSet() const
{
    return m_backGroundColorHasBeenSet;
}

string WaterMarkChar::GetFont() const
{
    return m_font;
}

void WaterMarkChar::SetFont(const string& _font)
{
    m_font = _font;
    m_fontHasBeenSet = true;
}

bool WaterMarkChar::FontHasBeenSet() const
{
    return m_fontHasBeenSet;
}

