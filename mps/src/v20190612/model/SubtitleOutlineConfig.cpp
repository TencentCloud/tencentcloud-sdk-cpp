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

#include <tencentcloud/mps/v20190612/model/SubtitleOutlineConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

SubtitleOutlineConfig::SubtitleOutlineConfig() :
    m_subtitleOutlineConfigSwitchHasBeenSet(false),
    m_outlineWidthHasBeenSet(false),
    m_outlineWidthUnitHasBeenSet(false),
    m_outlineColorHasBeenSet(false),
    m_outlineAlphaHasBeenSet(false)
{
}

CoreInternalOutcome SubtitleOutlineConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SubtitleOutlineConfigSwitch") && !value["SubtitleOutlineConfigSwitch"].IsNull())
    {
        if (!value["SubtitleOutlineConfigSwitch"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleOutlineConfig.SubtitleOutlineConfigSwitch` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_subtitleOutlineConfigSwitch = value["SubtitleOutlineConfigSwitch"].GetInt64();
        m_subtitleOutlineConfigSwitchHasBeenSet = true;
    }

    if (value.HasMember("OutlineWidth") && !value["OutlineWidth"].IsNull())
    {
        if (!value["OutlineWidth"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleOutlineConfig.OutlineWidth` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_outlineWidth = value["OutlineWidth"].GetDouble();
        m_outlineWidthHasBeenSet = true;
    }

    if (value.HasMember("OutlineWidthUnit") && !value["OutlineWidthUnit"].IsNull())
    {
        if (!value["OutlineWidthUnit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleOutlineConfig.OutlineWidthUnit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_outlineWidthUnit = value["OutlineWidthUnit"].GetInt64();
        m_outlineWidthUnitHasBeenSet = true;
    }

    if (value.HasMember("OutlineColor") && !value["OutlineColor"].IsNull())
    {
        if (!value["OutlineColor"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleOutlineConfig.OutlineColor` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outlineColor = string(value["OutlineColor"].GetString());
        m_outlineColorHasBeenSet = true;
    }

    if (value.HasMember("OutlineAlpha") && !value["OutlineAlpha"].IsNull())
    {
        if (!value["OutlineAlpha"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleOutlineConfig.OutlineAlpha` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_outlineAlpha = value["OutlineAlpha"].GetDouble();
        m_outlineAlphaHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SubtitleOutlineConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_subtitleOutlineConfigSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubtitleOutlineConfigSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_subtitleOutlineConfigSwitch, allocator);
    }

    if (m_outlineWidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutlineWidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_outlineWidth, allocator);
    }

    if (m_outlineWidthUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutlineWidthUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_outlineWidthUnit, allocator);
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

}


int64_t SubtitleOutlineConfig::GetSubtitleOutlineConfigSwitch() const
{
    return m_subtitleOutlineConfigSwitch;
}

void SubtitleOutlineConfig::SetSubtitleOutlineConfigSwitch(const int64_t& _subtitleOutlineConfigSwitch)
{
    m_subtitleOutlineConfigSwitch = _subtitleOutlineConfigSwitch;
    m_subtitleOutlineConfigSwitchHasBeenSet = true;
}

bool SubtitleOutlineConfig::SubtitleOutlineConfigSwitchHasBeenSet() const
{
    return m_subtitleOutlineConfigSwitchHasBeenSet;
}

double SubtitleOutlineConfig::GetOutlineWidth() const
{
    return m_outlineWidth;
}

void SubtitleOutlineConfig::SetOutlineWidth(const double& _outlineWidth)
{
    m_outlineWidth = _outlineWidth;
    m_outlineWidthHasBeenSet = true;
}

bool SubtitleOutlineConfig::OutlineWidthHasBeenSet() const
{
    return m_outlineWidthHasBeenSet;
}

int64_t SubtitleOutlineConfig::GetOutlineWidthUnit() const
{
    return m_outlineWidthUnit;
}

void SubtitleOutlineConfig::SetOutlineWidthUnit(const int64_t& _outlineWidthUnit)
{
    m_outlineWidthUnit = _outlineWidthUnit;
    m_outlineWidthUnitHasBeenSet = true;
}

bool SubtitleOutlineConfig::OutlineWidthUnitHasBeenSet() const
{
    return m_outlineWidthUnitHasBeenSet;
}

string SubtitleOutlineConfig::GetOutlineColor() const
{
    return m_outlineColor;
}

void SubtitleOutlineConfig::SetOutlineColor(const string& _outlineColor)
{
    m_outlineColor = _outlineColor;
    m_outlineColorHasBeenSet = true;
}

bool SubtitleOutlineConfig::OutlineColorHasBeenSet() const
{
    return m_outlineColorHasBeenSet;
}

double SubtitleOutlineConfig::GetOutlineAlpha() const
{
    return m_outlineAlpha;
}

void SubtitleOutlineConfig::SetOutlineAlpha(const double& _outlineAlpha)
{
    m_outlineAlpha = _outlineAlpha;
    m_outlineAlphaHasBeenSet = true;
}

bool SubtitleOutlineConfig::OutlineAlphaHasBeenSet() const
{
    return m_outlineAlphaHasBeenSet;
}

