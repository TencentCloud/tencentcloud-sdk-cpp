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

#include <tencentcloud/trtc/v20190722/model/McuWaterMarkText.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

McuWaterMarkText::McuWaterMarkText() :
    m_textHasBeenSet(false),
    m_waterMarkWidthHasBeenSet(false),
    m_waterMarkHeightHasBeenSet(false),
    m_locationXHasBeenSet(false),
    m_locationYHasBeenSet(false),
    m_fontSizeHasBeenSet(false),
    m_fontColorHasBeenSet(false),
    m_backGroundColorHasBeenSet(false),
    m_dynamicPosTypeHasBeenSet(false),
    m_zOrderHasBeenSet(false),
    m_fontHasBeenSet(false)
{
}

CoreInternalOutcome McuWaterMarkText::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `McuWaterMarkText.Text` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_text = string(value["Text"].GetString());
        m_textHasBeenSet = true;
    }

    if (value.HasMember("WaterMarkWidth") && !value["WaterMarkWidth"].IsNull())
    {
        if (!value["WaterMarkWidth"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `McuWaterMarkText.WaterMarkWidth` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_waterMarkWidth = value["WaterMarkWidth"].GetUint64();
        m_waterMarkWidthHasBeenSet = true;
    }

    if (value.HasMember("WaterMarkHeight") && !value["WaterMarkHeight"].IsNull())
    {
        if (!value["WaterMarkHeight"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `McuWaterMarkText.WaterMarkHeight` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_waterMarkHeight = value["WaterMarkHeight"].GetUint64();
        m_waterMarkHeightHasBeenSet = true;
    }

    if (value.HasMember("LocationX") && !value["LocationX"].IsNull())
    {
        if (!value["LocationX"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `McuWaterMarkText.LocationX` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_locationX = value["LocationX"].GetUint64();
        m_locationXHasBeenSet = true;
    }

    if (value.HasMember("LocationY") && !value["LocationY"].IsNull())
    {
        if (!value["LocationY"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `McuWaterMarkText.LocationY` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_locationY = value["LocationY"].GetUint64();
        m_locationYHasBeenSet = true;
    }

    if (value.HasMember("FontSize") && !value["FontSize"].IsNull())
    {
        if (!value["FontSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `McuWaterMarkText.FontSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_fontSize = value["FontSize"].GetUint64();
        m_fontSizeHasBeenSet = true;
    }

    if (value.HasMember("FontColor") && !value["FontColor"].IsNull())
    {
        if (!value["FontColor"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `McuWaterMarkText.FontColor` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fontColor = string(value["FontColor"].GetString());
        m_fontColorHasBeenSet = true;
    }

    if (value.HasMember("BackGroundColor") && !value["BackGroundColor"].IsNull())
    {
        if (!value["BackGroundColor"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `McuWaterMarkText.BackGroundColor` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backGroundColor = string(value["BackGroundColor"].GetString());
        m_backGroundColorHasBeenSet = true;
    }

    if (value.HasMember("DynamicPosType") && !value["DynamicPosType"].IsNull())
    {
        if (!value["DynamicPosType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `McuWaterMarkText.DynamicPosType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dynamicPosType = value["DynamicPosType"].GetUint64();
        m_dynamicPosTypeHasBeenSet = true;
    }

    if (value.HasMember("ZOrder") && !value["ZOrder"].IsNull())
    {
        if (!value["ZOrder"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `McuWaterMarkText.ZOrder` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_zOrder = value["ZOrder"].GetUint64();
        m_zOrderHasBeenSet = true;
    }

    if (value.HasMember("Font") && !value["Font"].IsNull())
    {
        if (!value["Font"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `McuWaterMarkText.Font` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_font = string(value["Font"].GetString());
        m_fontHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void McuWaterMarkText::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_text.c_str(), allocator).Move(), allocator);
    }

    if (m_waterMarkWidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WaterMarkWidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_waterMarkWidth, allocator);
    }

    if (m_waterMarkHeightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WaterMarkHeight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_waterMarkHeight, allocator);
    }

    if (m_locationXHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocationX";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_locationX, allocator);
    }

    if (m_locationYHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocationY";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_locationY, allocator);
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

    if (m_dynamicPosTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DynamicPosType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dynamicPosType, allocator);
    }

    if (m_zOrderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZOrder";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_zOrder, allocator);
    }

    if (m_fontHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Font";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_font.c_str(), allocator).Move(), allocator);
    }

}


string McuWaterMarkText::GetText() const
{
    return m_text;
}

void McuWaterMarkText::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool McuWaterMarkText::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

uint64_t McuWaterMarkText::GetWaterMarkWidth() const
{
    return m_waterMarkWidth;
}

void McuWaterMarkText::SetWaterMarkWidth(const uint64_t& _waterMarkWidth)
{
    m_waterMarkWidth = _waterMarkWidth;
    m_waterMarkWidthHasBeenSet = true;
}

bool McuWaterMarkText::WaterMarkWidthHasBeenSet() const
{
    return m_waterMarkWidthHasBeenSet;
}

uint64_t McuWaterMarkText::GetWaterMarkHeight() const
{
    return m_waterMarkHeight;
}

void McuWaterMarkText::SetWaterMarkHeight(const uint64_t& _waterMarkHeight)
{
    m_waterMarkHeight = _waterMarkHeight;
    m_waterMarkHeightHasBeenSet = true;
}

bool McuWaterMarkText::WaterMarkHeightHasBeenSet() const
{
    return m_waterMarkHeightHasBeenSet;
}

uint64_t McuWaterMarkText::GetLocationX() const
{
    return m_locationX;
}

void McuWaterMarkText::SetLocationX(const uint64_t& _locationX)
{
    m_locationX = _locationX;
    m_locationXHasBeenSet = true;
}

bool McuWaterMarkText::LocationXHasBeenSet() const
{
    return m_locationXHasBeenSet;
}

uint64_t McuWaterMarkText::GetLocationY() const
{
    return m_locationY;
}

void McuWaterMarkText::SetLocationY(const uint64_t& _locationY)
{
    m_locationY = _locationY;
    m_locationYHasBeenSet = true;
}

bool McuWaterMarkText::LocationYHasBeenSet() const
{
    return m_locationYHasBeenSet;
}

uint64_t McuWaterMarkText::GetFontSize() const
{
    return m_fontSize;
}

void McuWaterMarkText::SetFontSize(const uint64_t& _fontSize)
{
    m_fontSize = _fontSize;
    m_fontSizeHasBeenSet = true;
}

bool McuWaterMarkText::FontSizeHasBeenSet() const
{
    return m_fontSizeHasBeenSet;
}

string McuWaterMarkText::GetFontColor() const
{
    return m_fontColor;
}

void McuWaterMarkText::SetFontColor(const string& _fontColor)
{
    m_fontColor = _fontColor;
    m_fontColorHasBeenSet = true;
}

bool McuWaterMarkText::FontColorHasBeenSet() const
{
    return m_fontColorHasBeenSet;
}

string McuWaterMarkText::GetBackGroundColor() const
{
    return m_backGroundColor;
}

void McuWaterMarkText::SetBackGroundColor(const string& _backGroundColor)
{
    m_backGroundColor = _backGroundColor;
    m_backGroundColorHasBeenSet = true;
}

bool McuWaterMarkText::BackGroundColorHasBeenSet() const
{
    return m_backGroundColorHasBeenSet;
}

uint64_t McuWaterMarkText::GetDynamicPosType() const
{
    return m_dynamicPosType;
}

void McuWaterMarkText::SetDynamicPosType(const uint64_t& _dynamicPosType)
{
    m_dynamicPosType = _dynamicPosType;
    m_dynamicPosTypeHasBeenSet = true;
}

bool McuWaterMarkText::DynamicPosTypeHasBeenSet() const
{
    return m_dynamicPosTypeHasBeenSet;
}

uint64_t McuWaterMarkText::GetZOrder() const
{
    return m_zOrder;
}

void McuWaterMarkText::SetZOrder(const uint64_t& _zOrder)
{
    m_zOrder = _zOrder;
    m_zOrderHasBeenSet = true;
}

bool McuWaterMarkText::ZOrderHasBeenSet() const
{
    return m_zOrderHasBeenSet;
}

string McuWaterMarkText::GetFont() const
{
    return m_font;
}

void McuWaterMarkText::SetFont(const string& _font)
{
    m_font = _font;
    m_fontHasBeenSet = true;
}

bool McuWaterMarkText::FontHasBeenSet() const
{
    return m_fontHasBeenSet;
}

