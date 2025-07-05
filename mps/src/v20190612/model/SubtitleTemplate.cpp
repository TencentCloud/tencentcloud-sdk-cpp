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

#include <tencentcloud/mps/v20190612/model/SubtitleTemplate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

SubtitleTemplate::SubtitleTemplate() :
    m_pathHasBeenSet(false),
    m_streamIndexHasBeenSet(false),
    m_fontTypeHasBeenSet(false),
    m_fontSizeHasBeenSet(false),
    m_fontColorHasBeenSet(false),
    m_fontAlphaHasBeenSet(false),
    m_yPosHasBeenSet(false),
    m_boardYHasBeenSet(false),
    m_boardWidthHasBeenSet(false),
    m_boardHeightHasBeenSet(false),
    m_boardColorHasBeenSet(false),
    m_boardAlphaHasBeenSet(false)
{
}

CoreInternalOutcome SubtitleTemplate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleTemplate.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("StreamIndex") && !value["StreamIndex"].IsNull())
    {
        if (!value["StreamIndex"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleTemplate.StreamIndex` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_streamIndex = value["StreamIndex"].GetInt64();
        m_streamIndexHasBeenSet = true;
    }

    if (value.HasMember("FontType") && !value["FontType"].IsNull())
    {
        if (!value["FontType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleTemplate.FontType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fontType = string(value["FontType"].GetString());
        m_fontTypeHasBeenSet = true;
    }

    if (value.HasMember("FontSize") && !value["FontSize"].IsNull())
    {
        if (!value["FontSize"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleTemplate.FontSize` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fontSize = string(value["FontSize"].GetString());
        m_fontSizeHasBeenSet = true;
    }

    if (value.HasMember("FontColor") && !value["FontColor"].IsNull())
    {
        if (!value["FontColor"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleTemplate.FontColor` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fontColor = string(value["FontColor"].GetString());
        m_fontColorHasBeenSet = true;
    }

    if (value.HasMember("FontAlpha") && !value["FontAlpha"].IsNull())
    {
        if (!value["FontAlpha"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleTemplate.FontAlpha` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_fontAlpha = value["FontAlpha"].GetDouble();
        m_fontAlphaHasBeenSet = true;
    }

    if (value.HasMember("YPos") && !value["YPos"].IsNull())
    {
        if (!value["YPos"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleTemplate.YPos` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_yPos = string(value["YPos"].GetString());
        m_yPosHasBeenSet = true;
    }

    if (value.HasMember("BoardY") && !value["BoardY"].IsNull())
    {
        if (!value["BoardY"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleTemplate.BoardY` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_boardY = string(value["BoardY"].GetString());
        m_boardYHasBeenSet = true;
    }

    if (value.HasMember("BoardWidth") && !value["BoardWidth"].IsNull())
    {
        if (!value["BoardWidth"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleTemplate.BoardWidth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_boardWidth = value["BoardWidth"].GetInt64();
        m_boardWidthHasBeenSet = true;
    }

    if (value.HasMember("BoardHeight") && !value["BoardHeight"].IsNull())
    {
        if (!value["BoardHeight"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleTemplate.BoardHeight` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_boardHeight = value["BoardHeight"].GetInt64();
        m_boardHeightHasBeenSet = true;
    }

    if (value.HasMember("BoardColor") && !value["BoardColor"].IsNull())
    {
        if (!value["BoardColor"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleTemplate.BoardColor` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_boardColor = string(value["BoardColor"].GetString());
        m_boardColorHasBeenSet = true;
    }

    if (value.HasMember("BoardAlpha") && !value["BoardAlpha"].IsNull())
    {
        if (!value["BoardAlpha"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleTemplate.BoardAlpha` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_boardAlpha = value["BoardAlpha"].GetDouble();
        m_boardAlphaHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SubtitleTemplate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_streamIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamIndex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_streamIndex, allocator);
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
        value.AddMember(iKey, m_boardWidth, allocator);
    }

    if (m_boardHeightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BoardHeight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_boardHeight, allocator);
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

}


string SubtitleTemplate::GetPath() const
{
    return m_path;
}

void SubtitleTemplate::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool SubtitleTemplate::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

int64_t SubtitleTemplate::GetStreamIndex() const
{
    return m_streamIndex;
}

void SubtitleTemplate::SetStreamIndex(const int64_t& _streamIndex)
{
    m_streamIndex = _streamIndex;
    m_streamIndexHasBeenSet = true;
}

bool SubtitleTemplate::StreamIndexHasBeenSet() const
{
    return m_streamIndexHasBeenSet;
}

string SubtitleTemplate::GetFontType() const
{
    return m_fontType;
}

void SubtitleTemplate::SetFontType(const string& _fontType)
{
    m_fontType = _fontType;
    m_fontTypeHasBeenSet = true;
}

bool SubtitleTemplate::FontTypeHasBeenSet() const
{
    return m_fontTypeHasBeenSet;
}

string SubtitleTemplate::GetFontSize() const
{
    return m_fontSize;
}

void SubtitleTemplate::SetFontSize(const string& _fontSize)
{
    m_fontSize = _fontSize;
    m_fontSizeHasBeenSet = true;
}

bool SubtitleTemplate::FontSizeHasBeenSet() const
{
    return m_fontSizeHasBeenSet;
}

string SubtitleTemplate::GetFontColor() const
{
    return m_fontColor;
}

void SubtitleTemplate::SetFontColor(const string& _fontColor)
{
    m_fontColor = _fontColor;
    m_fontColorHasBeenSet = true;
}

bool SubtitleTemplate::FontColorHasBeenSet() const
{
    return m_fontColorHasBeenSet;
}

double SubtitleTemplate::GetFontAlpha() const
{
    return m_fontAlpha;
}

void SubtitleTemplate::SetFontAlpha(const double& _fontAlpha)
{
    m_fontAlpha = _fontAlpha;
    m_fontAlphaHasBeenSet = true;
}

bool SubtitleTemplate::FontAlphaHasBeenSet() const
{
    return m_fontAlphaHasBeenSet;
}

string SubtitleTemplate::GetYPos() const
{
    return m_yPos;
}

void SubtitleTemplate::SetYPos(const string& _yPos)
{
    m_yPos = _yPos;
    m_yPosHasBeenSet = true;
}

bool SubtitleTemplate::YPosHasBeenSet() const
{
    return m_yPosHasBeenSet;
}

string SubtitleTemplate::GetBoardY() const
{
    return m_boardY;
}

void SubtitleTemplate::SetBoardY(const string& _boardY)
{
    m_boardY = _boardY;
    m_boardYHasBeenSet = true;
}

bool SubtitleTemplate::BoardYHasBeenSet() const
{
    return m_boardYHasBeenSet;
}

int64_t SubtitleTemplate::GetBoardWidth() const
{
    return m_boardWidth;
}

void SubtitleTemplate::SetBoardWidth(const int64_t& _boardWidth)
{
    m_boardWidth = _boardWidth;
    m_boardWidthHasBeenSet = true;
}

bool SubtitleTemplate::BoardWidthHasBeenSet() const
{
    return m_boardWidthHasBeenSet;
}

int64_t SubtitleTemplate::GetBoardHeight() const
{
    return m_boardHeight;
}

void SubtitleTemplate::SetBoardHeight(const int64_t& _boardHeight)
{
    m_boardHeight = _boardHeight;
    m_boardHeightHasBeenSet = true;
}

bool SubtitleTemplate::BoardHeightHasBeenSet() const
{
    return m_boardHeightHasBeenSet;
}

string SubtitleTemplate::GetBoardColor() const
{
    return m_boardColor;
}

void SubtitleTemplate::SetBoardColor(const string& _boardColor)
{
    m_boardColor = _boardColor;
    m_boardColorHasBeenSet = true;
}

bool SubtitleTemplate::BoardColorHasBeenSet() const
{
    return m_boardColorHasBeenSet;
}

double SubtitleTemplate::GetBoardAlpha() const
{
    return m_boardAlpha;
}

void SubtitleTemplate::SetBoardAlpha(const double& _boardAlpha)
{
    m_boardAlpha = _boardAlpha;
    m_boardAlphaHasBeenSet = true;
}

bool SubtitleTemplate::BoardAlphaHasBeenSet() const
{
    return m_boardAlphaHasBeenSet;
}

