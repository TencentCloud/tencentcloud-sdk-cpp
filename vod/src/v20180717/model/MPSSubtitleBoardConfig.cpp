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

#include <tencentcloud/vod/v20180717/model/MPSSubtitleBoardConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

MPSSubtitleBoardConfig::MPSSubtitleBoardConfig() :
    m_subtitleBoardConfigSwitchHasBeenSet(false),
    m_boardXHasBeenSet(false),
    m_boardXUnitHasBeenSet(false),
    m_boardYHasBeenSet(false),
    m_boardYUnitHasBeenSet(false),
    m_boardWidthHasBeenSet(false),
    m_boardWidthUnitHasBeenSet(false),
    m_boardHeightHasBeenSet(false),
    m_boardHeightUnitHasBeenSet(false),
    m_boardColorHasBeenSet(false),
    m_boardAlphaHasBeenSet(false)
{
}

CoreInternalOutcome MPSSubtitleBoardConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SubtitleBoardConfigSwitch") && !value["SubtitleBoardConfigSwitch"].IsNull())
    {
        if (!value["SubtitleBoardConfigSwitch"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MPSSubtitleBoardConfig.SubtitleBoardConfigSwitch` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_subtitleBoardConfigSwitch = value["SubtitleBoardConfigSwitch"].GetInt64();
        m_subtitleBoardConfigSwitchHasBeenSet = true;
    }

    if (value.HasMember("BoardX") && !value["BoardX"].IsNull())
    {
        if (!value["BoardX"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MPSSubtitleBoardConfig.BoardX` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_boardX = value["BoardX"].GetInt64();
        m_boardXHasBeenSet = true;
    }

    if (value.HasMember("BoardXUnit") && !value["BoardXUnit"].IsNull())
    {
        if (!value["BoardXUnit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MPSSubtitleBoardConfig.BoardXUnit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_boardXUnit = value["BoardXUnit"].GetInt64();
        m_boardXUnitHasBeenSet = true;
    }

    if (value.HasMember("BoardY") && !value["BoardY"].IsNull())
    {
        if (!value["BoardY"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MPSSubtitleBoardConfig.BoardY` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_boardY = value["BoardY"].GetInt64();
        m_boardYHasBeenSet = true;
    }

    if (value.HasMember("BoardYUnit") && !value["BoardYUnit"].IsNull())
    {
        if (!value["BoardYUnit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MPSSubtitleBoardConfig.BoardYUnit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_boardYUnit = value["BoardYUnit"].GetInt64();
        m_boardYUnitHasBeenSet = true;
    }

    if (value.HasMember("BoardWidth") && !value["BoardWidth"].IsNull())
    {
        if (!value["BoardWidth"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MPSSubtitleBoardConfig.BoardWidth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_boardWidth = value["BoardWidth"].GetInt64();
        m_boardWidthHasBeenSet = true;
    }

    if (value.HasMember("BoardWidthUnit") && !value["BoardWidthUnit"].IsNull())
    {
        if (!value["BoardWidthUnit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MPSSubtitleBoardConfig.BoardWidthUnit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_boardWidthUnit = value["BoardWidthUnit"].GetInt64();
        m_boardWidthUnitHasBeenSet = true;
    }

    if (value.HasMember("BoardHeight") && !value["BoardHeight"].IsNull())
    {
        if (!value["BoardHeight"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MPSSubtitleBoardConfig.BoardHeight` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_boardHeight = value["BoardHeight"].GetInt64();
        m_boardHeightHasBeenSet = true;
    }

    if (value.HasMember("BoardHeightUnit") && !value["BoardHeightUnit"].IsNull())
    {
        if (!value["BoardHeightUnit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MPSSubtitleBoardConfig.BoardHeightUnit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_boardHeightUnit = value["BoardHeightUnit"].GetInt64();
        m_boardHeightUnitHasBeenSet = true;
    }

    if (value.HasMember("BoardColor") && !value["BoardColor"].IsNull())
    {
        if (!value["BoardColor"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MPSSubtitleBoardConfig.BoardColor` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_boardColor = string(value["BoardColor"].GetString());
        m_boardColorHasBeenSet = true;
    }

    if (value.HasMember("BoardAlpha") && !value["BoardAlpha"].IsNull())
    {
        if (!value["BoardAlpha"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MPSSubtitleBoardConfig.BoardAlpha` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_boardAlpha = value["BoardAlpha"].GetDouble();
        m_boardAlphaHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MPSSubtitleBoardConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_subtitleBoardConfigSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubtitleBoardConfigSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_subtitleBoardConfigSwitch, allocator);
    }

    if (m_boardXHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BoardX";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_boardX, allocator);
    }

    if (m_boardXUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BoardXUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_boardXUnit, allocator);
    }

    if (m_boardYHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BoardY";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_boardY, allocator);
    }

    if (m_boardYUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BoardYUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_boardYUnit, allocator);
    }

    if (m_boardWidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BoardWidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_boardWidth, allocator);
    }

    if (m_boardWidthUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BoardWidthUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_boardWidthUnit, allocator);
    }

    if (m_boardHeightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BoardHeight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_boardHeight, allocator);
    }

    if (m_boardHeightUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BoardHeightUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_boardHeightUnit, allocator);
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


int64_t MPSSubtitleBoardConfig::GetSubtitleBoardConfigSwitch() const
{
    return m_subtitleBoardConfigSwitch;
}

void MPSSubtitleBoardConfig::SetSubtitleBoardConfigSwitch(const int64_t& _subtitleBoardConfigSwitch)
{
    m_subtitleBoardConfigSwitch = _subtitleBoardConfigSwitch;
    m_subtitleBoardConfigSwitchHasBeenSet = true;
}

bool MPSSubtitleBoardConfig::SubtitleBoardConfigSwitchHasBeenSet() const
{
    return m_subtitleBoardConfigSwitchHasBeenSet;
}

int64_t MPSSubtitleBoardConfig::GetBoardX() const
{
    return m_boardX;
}

void MPSSubtitleBoardConfig::SetBoardX(const int64_t& _boardX)
{
    m_boardX = _boardX;
    m_boardXHasBeenSet = true;
}

bool MPSSubtitleBoardConfig::BoardXHasBeenSet() const
{
    return m_boardXHasBeenSet;
}

int64_t MPSSubtitleBoardConfig::GetBoardXUnit() const
{
    return m_boardXUnit;
}

void MPSSubtitleBoardConfig::SetBoardXUnit(const int64_t& _boardXUnit)
{
    m_boardXUnit = _boardXUnit;
    m_boardXUnitHasBeenSet = true;
}

bool MPSSubtitleBoardConfig::BoardXUnitHasBeenSet() const
{
    return m_boardXUnitHasBeenSet;
}

int64_t MPSSubtitleBoardConfig::GetBoardY() const
{
    return m_boardY;
}

void MPSSubtitleBoardConfig::SetBoardY(const int64_t& _boardY)
{
    m_boardY = _boardY;
    m_boardYHasBeenSet = true;
}

bool MPSSubtitleBoardConfig::BoardYHasBeenSet() const
{
    return m_boardYHasBeenSet;
}

int64_t MPSSubtitleBoardConfig::GetBoardYUnit() const
{
    return m_boardYUnit;
}

void MPSSubtitleBoardConfig::SetBoardYUnit(const int64_t& _boardYUnit)
{
    m_boardYUnit = _boardYUnit;
    m_boardYUnitHasBeenSet = true;
}

bool MPSSubtitleBoardConfig::BoardYUnitHasBeenSet() const
{
    return m_boardYUnitHasBeenSet;
}

int64_t MPSSubtitleBoardConfig::GetBoardWidth() const
{
    return m_boardWidth;
}

void MPSSubtitleBoardConfig::SetBoardWidth(const int64_t& _boardWidth)
{
    m_boardWidth = _boardWidth;
    m_boardWidthHasBeenSet = true;
}

bool MPSSubtitleBoardConfig::BoardWidthHasBeenSet() const
{
    return m_boardWidthHasBeenSet;
}

int64_t MPSSubtitleBoardConfig::GetBoardWidthUnit() const
{
    return m_boardWidthUnit;
}

void MPSSubtitleBoardConfig::SetBoardWidthUnit(const int64_t& _boardWidthUnit)
{
    m_boardWidthUnit = _boardWidthUnit;
    m_boardWidthUnitHasBeenSet = true;
}

bool MPSSubtitleBoardConfig::BoardWidthUnitHasBeenSet() const
{
    return m_boardWidthUnitHasBeenSet;
}

int64_t MPSSubtitleBoardConfig::GetBoardHeight() const
{
    return m_boardHeight;
}

void MPSSubtitleBoardConfig::SetBoardHeight(const int64_t& _boardHeight)
{
    m_boardHeight = _boardHeight;
    m_boardHeightHasBeenSet = true;
}

bool MPSSubtitleBoardConfig::BoardHeightHasBeenSet() const
{
    return m_boardHeightHasBeenSet;
}

int64_t MPSSubtitleBoardConfig::GetBoardHeightUnit() const
{
    return m_boardHeightUnit;
}

void MPSSubtitleBoardConfig::SetBoardHeightUnit(const int64_t& _boardHeightUnit)
{
    m_boardHeightUnit = _boardHeightUnit;
    m_boardHeightUnitHasBeenSet = true;
}

bool MPSSubtitleBoardConfig::BoardHeightUnitHasBeenSet() const
{
    return m_boardHeightUnitHasBeenSet;
}

string MPSSubtitleBoardConfig::GetBoardColor() const
{
    return m_boardColor;
}

void MPSSubtitleBoardConfig::SetBoardColor(const string& _boardColor)
{
    m_boardColor = _boardColor;
    m_boardColorHasBeenSet = true;
}

bool MPSSubtitleBoardConfig::BoardColorHasBeenSet() const
{
    return m_boardColorHasBeenSet;
}

double MPSSubtitleBoardConfig::GetBoardAlpha() const
{
    return m_boardAlpha;
}

void MPSSubtitleBoardConfig::SetBoardAlpha(const double& _boardAlpha)
{
    m_boardAlpha = _boardAlpha;
    m_boardAlphaHasBeenSet = true;
}

bool MPSSubtitleBoardConfig::BoardAlphaHasBeenSet() const
{
    return m_boardAlphaHasBeenSet;
}

