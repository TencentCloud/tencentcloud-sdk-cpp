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

#include <tencentcloud/vod/v20180717/model/MPSSubtitleShadowConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

MPSSubtitleShadowConfig::MPSSubtitleShadowConfig() :
    m_subtitleShadowConfigSwitchHasBeenSet(false),
    m_shadowWidthHasBeenSet(false),
    m_shadowWidthUnitHasBeenSet(false),
    m_shadowColorHasBeenSet(false),
    m_shadowAlphaHasBeenSet(false)
{
}

CoreInternalOutcome MPSSubtitleShadowConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SubtitleShadowConfigSwitch") && !value["SubtitleShadowConfigSwitch"].IsNull())
    {
        if (!value["SubtitleShadowConfigSwitch"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MPSSubtitleShadowConfig.SubtitleShadowConfigSwitch` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_subtitleShadowConfigSwitch = value["SubtitleShadowConfigSwitch"].GetInt64();
        m_subtitleShadowConfigSwitchHasBeenSet = true;
    }

    if (value.HasMember("ShadowWidth") && !value["ShadowWidth"].IsNull())
    {
        if (!value["ShadowWidth"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MPSSubtitleShadowConfig.ShadowWidth` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_shadowWidth = value["ShadowWidth"].GetDouble();
        m_shadowWidthHasBeenSet = true;
    }

    if (value.HasMember("ShadowWidthUnit") && !value["ShadowWidthUnit"].IsNull())
    {
        if (!value["ShadowWidthUnit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MPSSubtitleShadowConfig.ShadowWidthUnit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_shadowWidthUnit = value["ShadowWidthUnit"].GetInt64();
        m_shadowWidthUnitHasBeenSet = true;
    }

    if (value.HasMember("ShadowColor") && !value["ShadowColor"].IsNull())
    {
        if (!value["ShadowColor"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MPSSubtitleShadowConfig.ShadowColor` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shadowColor = string(value["ShadowColor"].GetString());
        m_shadowColorHasBeenSet = true;
    }

    if (value.HasMember("ShadowAlpha") && !value["ShadowAlpha"].IsNull())
    {
        if (!value["ShadowAlpha"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MPSSubtitleShadowConfig.ShadowAlpha` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_shadowAlpha = value["ShadowAlpha"].GetDouble();
        m_shadowAlphaHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MPSSubtitleShadowConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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


int64_t MPSSubtitleShadowConfig::GetSubtitleShadowConfigSwitch() const
{
    return m_subtitleShadowConfigSwitch;
}

void MPSSubtitleShadowConfig::SetSubtitleShadowConfigSwitch(const int64_t& _subtitleShadowConfigSwitch)
{
    m_subtitleShadowConfigSwitch = _subtitleShadowConfigSwitch;
    m_subtitleShadowConfigSwitchHasBeenSet = true;
}

bool MPSSubtitleShadowConfig::SubtitleShadowConfigSwitchHasBeenSet() const
{
    return m_subtitleShadowConfigSwitchHasBeenSet;
}

double MPSSubtitleShadowConfig::GetShadowWidth() const
{
    return m_shadowWidth;
}

void MPSSubtitleShadowConfig::SetShadowWidth(const double& _shadowWidth)
{
    m_shadowWidth = _shadowWidth;
    m_shadowWidthHasBeenSet = true;
}

bool MPSSubtitleShadowConfig::ShadowWidthHasBeenSet() const
{
    return m_shadowWidthHasBeenSet;
}

int64_t MPSSubtitleShadowConfig::GetShadowWidthUnit() const
{
    return m_shadowWidthUnit;
}

void MPSSubtitleShadowConfig::SetShadowWidthUnit(const int64_t& _shadowWidthUnit)
{
    m_shadowWidthUnit = _shadowWidthUnit;
    m_shadowWidthUnitHasBeenSet = true;
}

bool MPSSubtitleShadowConfig::ShadowWidthUnitHasBeenSet() const
{
    return m_shadowWidthUnitHasBeenSet;
}

string MPSSubtitleShadowConfig::GetShadowColor() const
{
    return m_shadowColor;
}

void MPSSubtitleShadowConfig::SetShadowColor(const string& _shadowColor)
{
    m_shadowColor = _shadowColor;
    m_shadowColorHasBeenSet = true;
}

bool MPSSubtitleShadowConfig::ShadowColorHasBeenSet() const
{
    return m_shadowColorHasBeenSet;
}

double MPSSubtitleShadowConfig::GetShadowAlpha() const
{
    return m_shadowAlpha;
}

void MPSSubtitleShadowConfig::SetShadowAlpha(const double& _shadowAlpha)
{
    m_shadowAlpha = _shadowAlpha;
    m_shadowAlphaHasBeenSet = true;
}

bool MPSSubtitleShadowConfig::ShadowAlphaHasBeenSet() const
{
    return m_shadowAlphaHasBeenSet;
}

