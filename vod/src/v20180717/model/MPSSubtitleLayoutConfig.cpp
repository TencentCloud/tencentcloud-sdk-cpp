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

#include <tencentcloud/vod/v20180717/model/MPSSubtitleLayoutConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

MPSSubtitleLayoutConfig::MPSSubtitleLayoutConfig() :
    m_subtitleLayoutConfigSwitchHasBeenSet(false),
    m_lineSpacingHasBeenSet(false),
    m_lineSpacingUnitHasBeenSet(false),
    m_alignmentHasBeenSet(false)
{
}

CoreInternalOutcome MPSSubtitleLayoutConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SubtitleLayoutConfigSwitch") && !value["SubtitleLayoutConfigSwitch"].IsNull())
    {
        if (!value["SubtitleLayoutConfigSwitch"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MPSSubtitleLayoutConfig.SubtitleLayoutConfigSwitch` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_subtitleLayoutConfigSwitch = value["SubtitleLayoutConfigSwitch"].GetInt64();
        m_subtitleLayoutConfigSwitchHasBeenSet = true;
    }

    if (value.HasMember("LineSpacing") && !value["LineSpacing"].IsNull())
    {
        if (!value["LineSpacing"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MPSSubtitleLayoutConfig.LineSpacing` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lineSpacing = value["LineSpacing"].GetInt64();
        m_lineSpacingHasBeenSet = true;
    }

    if (value.HasMember("LineSpacingUnit") && !value["LineSpacingUnit"].IsNull())
    {
        if (!value["LineSpacingUnit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MPSSubtitleLayoutConfig.LineSpacingUnit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lineSpacingUnit = value["LineSpacingUnit"].GetInt64();
        m_lineSpacingUnitHasBeenSet = true;
    }

    if (value.HasMember("Alignment") && !value["Alignment"].IsNull())
    {
        if (!value["Alignment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MPSSubtitleLayoutConfig.Alignment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alignment = string(value["Alignment"].GetString());
        m_alignmentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MPSSubtitleLayoutConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_subtitleLayoutConfigSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubtitleLayoutConfigSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_subtitleLayoutConfigSwitch, allocator);
    }

    if (m_lineSpacingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LineSpacing";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lineSpacing, allocator);
    }

    if (m_lineSpacingUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LineSpacingUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lineSpacingUnit, allocator);
    }

    if (m_alignmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Alignment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alignment.c_str(), allocator).Move(), allocator);
    }

}


int64_t MPSSubtitleLayoutConfig::GetSubtitleLayoutConfigSwitch() const
{
    return m_subtitleLayoutConfigSwitch;
}

void MPSSubtitleLayoutConfig::SetSubtitleLayoutConfigSwitch(const int64_t& _subtitleLayoutConfigSwitch)
{
    m_subtitleLayoutConfigSwitch = _subtitleLayoutConfigSwitch;
    m_subtitleLayoutConfigSwitchHasBeenSet = true;
}

bool MPSSubtitleLayoutConfig::SubtitleLayoutConfigSwitchHasBeenSet() const
{
    return m_subtitleLayoutConfigSwitchHasBeenSet;
}

int64_t MPSSubtitleLayoutConfig::GetLineSpacing() const
{
    return m_lineSpacing;
}

void MPSSubtitleLayoutConfig::SetLineSpacing(const int64_t& _lineSpacing)
{
    m_lineSpacing = _lineSpacing;
    m_lineSpacingHasBeenSet = true;
}

bool MPSSubtitleLayoutConfig::LineSpacingHasBeenSet() const
{
    return m_lineSpacingHasBeenSet;
}

int64_t MPSSubtitleLayoutConfig::GetLineSpacingUnit() const
{
    return m_lineSpacingUnit;
}

void MPSSubtitleLayoutConfig::SetLineSpacingUnit(const int64_t& _lineSpacingUnit)
{
    m_lineSpacingUnit = _lineSpacingUnit;
    m_lineSpacingUnitHasBeenSet = true;
}

bool MPSSubtitleLayoutConfig::LineSpacingUnitHasBeenSet() const
{
    return m_lineSpacingUnitHasBeenSet;
}

string MPSSubtitleLayoutConfig::GetAlignment() const
{
    return m_alignment;
}

void MPSSubtitleLayoutConfig::SetAlignment(const string& _alignment)
{
    m_alignment = _alignment;
    m_alignmentHasBeenSet = true;
}

bool MPSSubtitleLayoutConfig::AlignmentHasBeenSet() const
{
    return m_alignmentHasBeenSet;
}

