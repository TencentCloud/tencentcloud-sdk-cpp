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

#include <tencentcloud/mps/v20190612/model/SubtitleShadowConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

SubtitleShadowConfig::SubtitleShadowConfig() :
    m_subtitleShadowConfigSwitchHasBeenSet(false),
    m_shadowWidthHasBeenSet(false),
    m_shadowWidthUnitHasBeenSet(false),
    m_shadowColorHasBeenSet(false),
    m_shadowAlphaHasBeenSet(false)
{
}

CoreInternalOutcome SubtitleShadowConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SubtitleShadowConfigSwitch") && !value["SubtitleShadowConfigSwitch"].IsNull())
    {
        if (!value["SubtitleShadowConfigSwitch"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleShadowConfig.SubtitleShadowConfigSwitch` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_subtitleShadowConfigSwitch = value["SubtitleShadowConfigSwitch"].GetInt64();
        m_subtitleShadowConfigSwitchHasBeenSet = true;
    }

    if (value.HasMember("ShadowWidth") && !value["ShadowWidth"].IsNull())
    {
        if (!value["ShadowWidth"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleShadowConfig.ShadowWidth` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_shadowWidth = value["ShadowWidth"].GetDouble();
        m_shadowWidthHasBeenSet = true;
    }

    if (value.HasMember("ShadowWidthUnit") && !value["ShadowWidthUnit"].IsNull())
    {
        if (!value["ShadowWidthUnit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleShadowConfig.ShadowWidthUnit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_shadowWidthUnit = value["ShadowWidthUnit"].GetInt64();
        m_shadowWidthUnitHasBeenSet = true;
    }

    if (value.HasMember("ShadowColor") && !value["ShadowColor"].IsNull())
    {
        if (!value["ShadowColor"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleShadowConfig.ShadowColor` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shadowColor = string(value["ShadowColor"].GetString());
        m_shadowColorHasBeenSet = true;
    }

    if (value.HasMember("ShadowAlpha") && !value["ShadowAlpha"].IsNull())
    {
        if (!value["ShadowAlpha"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleShadowConfig.ShadowAlpha` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_shadowAlpha = value["ShadowAlpha"].GetDouble();
        m_shadowAlphaHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SubtitleShadowConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_subtitleShadowConfigSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubtitleShadowConfigSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_subtitleShadowConfigSwitch, allocator);
    }

    if (m_shadowWidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShadowWidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shadowWidth, allocator);
    }

    if (m_shadowWidthUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShadowWidthUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shadowWidthUnit, allocator);
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

}


int64_t SubtitleShadowConfig::GetSubtitleShadowConfigSwitch() const
{
    return m_subtitleShadowConfigSwitch;
}

void SubtitleShadowConfig::SetSubtitleShadowConfigSwitch(const int64_t& _subtitleShadowConfigSwitch)
{
    m_subtitleShadowConfigSwitch = _subtitleShadowConfigSwitch;
    m_subtitleShadowConfigSwitchHasBeenSet = true;
}

bool SubtitleShadowConfig::SubtitleShadowConfigSwitchHasBeenSet() const
{
    return m_subtitleShadowConfigSwitchHasBeenSet;
}

double SubtitleShadowConfig::GetShadowWidth() const
{
    return m_shadowWidth;
}

void SubtitleShadowConfig::SetShadowWidth(const double& _shadowWidth)
{
    m_shadowWidth = _shadowWidth;
    m_shadowWidthHasBeenSet = true;
}

bool SubtitleShadowConfig::ShadowWidthHasBeenSet() const
{
    return m_shadowWidthHasBeenSet;
}

int64_t SubtitleShadowConfig::GetShadowWidthUnit() const
{
    return m_shadowWidthUnit;
}

void SubtitleShadowConfig::SetShadowWidthUnit(const int64_t& _shadowWidthUnit)
{
    m_shadowWidthUnit = _shadowWidthUnit;
    m_shadowWidthUnitHasBeenSet = true;
}

bool SubtitleShadowConfig::ShadowWidthUnitHasBeenSet() const
{
    return m_shadowWidthUnitHasBeenSet;
}

string SubtitleShadowConfig::GetShadowColor() const
{
    return m_shadowColor;
}

void SubtitleShadowConfig::SetShadowColor(const string& _shadowColor)
{
    m_shadowColor = _shadowColor;
    m_shadowColorHasBeenSet = true;
}

bool SubtitleShadowConfig::ShadowColorHasBeenSet() const
{
    return m_shadowColorHasBeenSet;
}

double SubtitleShadowConfig::GetShadowAlpha() const
{
    return m_shadowAlpha;
}

void SubtitleShadowConfig::SetShadowAlpha(const double& _shadowAlpha)
{
    m_shadowAlpha = _shadowAlpha;
    m_shadowAlphaHasBeenSet = true;
}

bool SubtitleShadowConfig::ShadowAlphaHasBeenSet() const
{
    return m_shadowAlphaHasBeenSet;
}

