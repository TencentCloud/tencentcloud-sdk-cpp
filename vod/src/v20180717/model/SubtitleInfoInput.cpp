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

#include <tencentcloud/vod/v20180717/model/SubtitleInfoInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

SubtitleInfoInput::SubtitleInfoInput() :
    m_idHasBeenSet(false),
    m_fontTypeHasBeenSet(false),
    m_fontSizeHasBeenSet(false),
    m_fontColorHasBeenSet(false),
    m_fontAlphaHasBeenSet(false),
    m_yPosHasBeenSet(false),
    m_boardYHasBeenSet(false),
    m_boardWidthHasBeenSet(false),
    m_boardHeightHasBeenSet(false),
    m_boardColorHasBeenSet(false),
    m_boardAlphaHasBeenSet(false),
    m_alignmentHasBeenSet(false),
    m_outlineWidthHasBeenSet(false),
    m_outlineColorHasBeenSet(false),
    m_outlineAlphaHasBeenSet(false),
    m_shadowWidthHasBeenSet(false),
    m_shadowColorHasBeenSet(false),
    m_shadowAlphaHasBeenSet(false),
    m_lineSpacingHasBeenSet(false)
{
}

CoreInternalOutcome SubtitleInfoInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleInfoInput.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("FontType") && !value["FontType"].IsNull())
    {
        if (!value["FontType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleInfoInput.FontType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fontType = string(value["FontType"].GetString());
        m_fontTypeHasBeenSet = true;
    }

    if (value.HasMember("FontSize") && !value["FontSize"].IsNull())
    {
        if (!value["FontSize"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleInfoInput.FontSize` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fontSize = string(value["FontSize"].GetString());
        m_fontSizeHasBeenSet = true;
    }

    if (value.HasMember("FontColor") && !value["FontColor"].IsNull())
    {
        if (!value["FontColor"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleInfoInput.FontColor` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fontColor = string(value["FontColor"].GetString());
        m_fontColorHasBeenSet = true;
    }

    if (value.HasMember("FontAlpha") && !value["FontAlpha"].IsNull())
    {
        if (!value["FontAlpha"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleInfoInput.FontAlpha` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_fontAlpha = value["FontAlpha"].GetDouble();
        m_fontAlphaHasBeenSet = true;
    }

    if (value.HasMember("YPos") && !value["YPos"].IsNull())
    {
        if (!value["YPos"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleInfoInput.YPos` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_yPos = string(value["YPos"].GetString());
        m_yPosHasBeenSet = true;
    }

    if (value.HasMember("BoardY") && !value["BoardY"].IsNull())
    {
        if (!value["BoardY"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleInfoInput.BoardY` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_boardY = string(value["BoardY"].GetString());
        m_boardYHasBeenSet = true;
    }

    if (value.HasMember("BoardWidth") && !value["BoardWidth"].IsNull())
    {
        if (!value["BoardWidth"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleInfoInput.BoardWidth` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_boardWidth = string(value["BoardWidth"].GetString());
        m_boardWidthHasBeenSet = true;
    }

    if (value.HasMember("BoardHeight") && !value["BoardHeight"].IsNull())
    {
        if (!value["BoardHeight"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleInfoInput.BoardHeight` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_boardHeight = string(value["BoardHeight"].GetString());
        m_boardHeightHasBeenSet = true;
    }

    if (value.HasMember("BoardColor") && !value["BoardColor"].IsNull())
    {
        if (!value["BoardColor"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleInfoInput.BoardColor` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_boardColor = string(value["BoardColor"].GetString());
        m_boardColorHasBeenSet = true;
    }

    if (value.HasMember("BoardAlpha") && !value["BoardAlpha"].IsNull())
    {
        if (!value["BoardAlpha"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleInfoInput.BoardAlpha` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_boardAlpha = value["BoardAlpha"].GetDouble();
        m_boardAlphaHasBeenSet = true;
    }

    if (value.HasMember("Alignment") && !value["Alignment"].IsNull())
    {
        if (!value["Alignment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleInfoInput.Alignment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alignment = string(value["Alignment"].GetString());
        m_alignmentHasBeenSet = true;
    }

    if (value.HasMember("OutlineWidth") && !value["OutlineWidth"].IsNull())
    {
        if (!value["OutlineWidth"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleInfoInput.OutlineWidth` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outlineWidth = string(value["OutlineWidth"].GetString());
        m_outlineWidthHasBeenSet = true;
    }

    if (value.HasMember("OutlineColor") && !value["OutlineColor"].IsNull())
    {
        if (!value["OutlineColor"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleInfoInput.OutlineColor` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outlineColor = string(value["OutlineColor"].GetString());
        m_outlineColorHasBeenSet = true;
    }

    if (value.HasMember("OutlineAlpha") && !value["OutlineAlpha"].IsNull())
    {
        if (!value["OutlineAlpha"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleInfoInput.OutlineAlpha` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_outlineAlpha = value["OutlineAlpha"].GetDouble();
        m_outlineAlphaHasBeenSet = true;
    }

    if (value.HasMember("ShadowWidth") && !value["ShadowWidth"].IsNull())
    {
        if (!value["ShadowWidth"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleInfoInput.ShadowWidth` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shadowWidth = string(value["ShadowWidth"].GetString());
        m_shadowWidthHasBeenSet = true;
    }

    if (value.HasMember("ShadowColor") && !value["ShadowColor"].IsNull())
    {
        if (!value["ShadowColor"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleInfoInput.ShadowColor` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shadowColor = string(value["ShadowColor"].GetString());
        m_shadowColorHasBeenSet = true;
    }

    if (value.HasMember("ShadowAlpha") && !value["ShadowAlpha"].IsNull())
    {
        if (!value["ShadowAlpha"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleInfoInput.ShadowAlpha` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_shadowAlpha = value["ShadowAlpha"].GetDouble();
        m_shadowAlphaHasBeenSet = true;
    }

    if (value.HasMember("LineSpacing") && !value["LineSpacing"].IsNull())
    {
        if (!value["LineSpacing"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleInfoInput.LineSpacing` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lineSpacing = string(value["LineSpacing"].GetString());
        m_lineSpacingHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SubtitleInfoInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
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

    if (m_yPosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "YPos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_yPos.c_str(), allocator).Move(), allocator);
    }

    if (m_boardYHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BoardY";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_boardY.c_str(), allocator).Move(), allocator);
    }

    if (m_boardWidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BoardWidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_boardWidth.c_str(), allocator).Move(), allocator);
    }

    if (m_boardHeightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BoardHeight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_boardHeight.c_str(), allocator).Move(), allocator);
    }

    if (m_boardColorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BoardColor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_boardColor.c_str(), allocator).Move(), allocator);
    }

    if (m_boardAlphaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BoardAlpha";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_boardAlpha, allocator);
    }

    if (m_alignmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Alignment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alignment.c_str(), allocator).Move(), allocator);
    }

    if (m_outlineWidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutlineWidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outlineWidth.c_str(), allocator).Move(), allocator);
    }

    if (m_outlineColorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutlineColor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outlineColor.c_str(), allocator).Move(), allocator);
    }

    if (m_outlineAlphaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutlineAlpha";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_outlineAlpha, allocator);
    }

    if (m_shadowWidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShadowWidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shadowWidth.c_str(), allocator).Move(), allocator);
    }

    if (m_shadowColorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShadowColor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shadowColor.c_str(), allocator).Move(), allocator);
    }

    if (m_shadowAlphaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShadowAlpha";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shadowAlpha, allocator);
    }

    if (m_lineSpacingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LineSpacing";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lineSpacing.c_str(), allocator).Move(), allocator);
    }

}


string SubtitleInfoInput::GetId() const
{
    return m_id;
}

void SubtitleInfoInput::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool SubtitleInfoInput::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string SubtitleInfoInput::GetFontType() const
{
    return m_fontType;
}

void SubtitleInfoInput::SetFontType(const string& _fontType)
{
    m_fontType = _fontType;
    m_fontTypeHasBeenSet = true;
}

bool SubtitleInfoInput::FontTypeHasBeenSet() const
{
    return m_fontTypeHasBeenSet;
}

string SubtitleInfoInput::GetFontSize() const
{
    return m_fontSize;
}

void SubtitleInfoInput::SetFontSize(const string& _fontSize)
{
    m_fontSize = _fontSize;
    m_fontSizeHasBeenSet = true;
}

bool SubtitleInfoInput::FontSizeHasBeenSet() const
{
    return m_fontSizeHasBeenSet;
}

string SubtitleInfoInput::GetFontColor() const
{
    return m_fontColor;
}

void SubtitleInfoInput::SetFontColor(const string& _fontColor)
{
    m_fontColor = _fontColor;
    m_fontColorHasBeenSet = true;
}

bool SubtitleInfoInput::FontColorHasBeenSet() const
{
    return m_fontColorHasBeenSet;
}

double SubtitleInfoInput::GetFontAlpha() const
{
    return m_fontAlpha;
}

void SubtitleInfoInput::SetFontAlpha(const double& _fontAlpha)
{
    m_fontAlpha = _fontAlpha;
    m_fontAlphaHasBeenSet = true;
}

bool SubtitleInfoInput::FontAlphaHasBeenSet() const
{
    return m_fontAlphaHasBeenSet;
}

string SubtitleInfoInput::GetYPos() const
{
    return m_yPos;
}

void SubtitleInfoInput::SetYPos(const string& _yPos)
{
    m_yPos = _yPos;
    m_yPosHasBeenSet = true;
}

bool SubtitleInfoInput::YPosHasBeenSet() const
{
    return m_yPosHasBeenSet;
}

string SubtitleInfoInput::GetBoardY() const
{
    return m_boardY;
}

void SubtitleInfoInput::SetBoardY(const string& _boardY)
{
    m_boardY = _boardY;
    m_boardYHasBeenSet = true;
}

bool SubtitleInfoInput::BoardYHasBeenSet() const
{
    return m_boardYHasBeenSet;
}

string SubtitleInfoInput::GetBoardWidth() const
{
    return m_boardWidth;
}

void SubtitleInfoInput::SetBoardWidth(const string& _boardWidth)
{
    m_boardWidth = _boardWidth;
    m_boardWidthHasBeenSet = true;
}

bool SubtitleInfoInput::BoardWidthHasBeenSet() const
{
    return m_boardWidthHasBeenSet;
}

string SubtitleInfoInput::GetBoardHeight() const
{
    return m_boardHeight;
}

void SubtitleInfoInput::SetBoardHeight(const string& _boardHeight)
{
    m_boardHeight = _boardHeight;
    m_boardHeightHasBeenSet = true;
}

bool SubtitleInfoInput::BoardHeightHasBeenSet() const
{
    return m_boardHeightHasBeenSet;
}

string SubtitleInfoInput::GetBoardColor() const
{
    return m_boardColor;
}

void SubtitleInfoInput::SetBoardColor(const string& _boardColor)
{
    m_boardColor = _boardColor;
    m_boardColorHasBeenSet = true;
}

bool SubtitleInfoInput::BoardColorHasBeenSet() const
{
    return m_boardColorHasBeenSet;
}

double SubtitleInfoInput::GetBoardAlpha() const
{
    return m_boardAlpha;
}

void SubtitleInfoInput::SetBoardAlpha(const double& _boardAlpha)
{
    m_boardAlpha = _boardAlpha;
    m_boardAlphaHasBeenSet = true;
}

bool SubtitleInfoInput::BoardAlphaHasBeenSet() const
{
    return m_boardAlphaHasBeenSet;
}

string SubtitleInfoInput::GetAlignment() const
{
    return m_alignment;
}

void SubtitleInfoInput::SetAlignment(const string& _alignment)
{
    m_alignment = _alignment;
    m_alignmentHasBeenSet = true;
}

bool SubtitleInfoInput::AlignmentHasBeenSet() const
{
    return m_alignmentHasBeenSet;
}

string SubtitleInfoInput::GetOutlineWidth() const
{
    return m_outlineWidth;
}

void SubtitleInfoInput::SetOutlineWidth(const string& _outlineWidth)
{
    m_outlineWidth = _outlineWidth;
    m_outlineWidthHasBeenSet = true;
}

bool SubtitleInfoInput::OutlineWidthHasBeenSet() const
{
    return m_outlineWidthHasBeenSet;
}

string SubtitleInfoInput::GetOutlineColor() const
{
    return m_outlineColor;
}

void SubtitleInfoInput::SetOutlineColor(const string& _outlineColor)
{
    m_outlineColor = _outlineColor;
    m_outlineColorHasBeenSet = true;
}

bool SubtitleInfoInput::OutlineColorHasBeenSet() const
{
    return m_outlineColorHasBeenSet;
}

double SubtitleInfoInput::GetOutlineAlpha() const
{
    return m_outlineAlpha;
}

void SubtitleInfoInput::SetOutlineAlpha(const double& _outlineAlpha)
{
    m_outlineAlpha = _outlineAlpha;
    m_outlineAlphaHasBeenSet = true;
}

bool SubtitleInfoInput::OutlineAlphaHasBeenSet() const
{
    return m_outlineAlphaHasBeenSet;
}

string SubtitleInfoInput::GetShadowWidth() const
{
    return m_shadowWidth;
}

void SubtitleInfoInput::SetShadowWidth(const string& _shadowWidth)
{
    m_shadowWidth = _shadowWidth;
    m_shadowWidthHasBeenSet = true;
}

bool SubtitleInfoInput::ShadowWidthHasBeenSet() const
{
    return m_shadowWidthHasBeenSet;
}

string SubtitleInfoInput::GetShadowColor() const
{
    return m_shadowColor;
}

void SubtitleInfoInput::SetShadowColor(const string& _shadowColor)
{
    m_shadowColor = _shadowColor;
    m_shadowColorHasBeenSet = true;
}

bool SubtitleInfoInput::ShadowColorHasBeenSet() const
{
    return m_shadowColorHasBeenSet;
}

double SubtitleInfoInput::GetShadowAlpha() const
{
    return m_shadowAlpha;
}

void SubtitleInfoInput::SetShadowAlpha(const double& _shadowAlpha)
{
    m_shadowAlpha = _shadowAlpha;
    m_shadowAlphaHasBeenSet = true;
}

bool SubtitleInfoInput::ShadowAlphaHasBeenSet() const
{
    return m_shadowAlphaHasBeenSet;
}

string SubtitleInfoInput::GetLineSpacing() const
{
    return m_lineSpacing;
}

void SubtitleInfoInput::SetLineSpacing(const string& _lineSpacing)
{
    m_lineSpacing = _lineSpacing;
    m_lineSpacingHasBeenSet = true;
}

bool SubtitleInfoInput::LineSpacingHasBeenSet() const
{
    return m_lineSpacingHasBeenSet;
}

