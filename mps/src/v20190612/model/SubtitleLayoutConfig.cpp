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

#include <tencentcloud/mps/v20190612/model/SubtitleLayoutConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

SubtitleLayoutConfig::SubtitleLayoutConfig() :
    m_subtitleLayoutConfigSwitchHasBeenSet(false),
    m_lineSpacingHasBeenSet(false),
    m_lineSpacingUnitHasBeenSet(false),
    m_alignmentHasBeenSet(false)
{
}

CoreInternalOutcome SubtitleLayoutConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SubtitleLayoutConfigSwitch") && !value["SubtitleLayoutConfigSwitch"].IsNull())
    {
        if (!value["SubtitleLayoutConfigSwitch"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleLayoutConfig.SubtitleLayoutConfigSwitch` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_subtitleLayoutConfigSwitch = value["SubtitleLayoutConfigSwitch"].GetInt64();
        m_subtitleLayoutConfigSwitchHasBeenSet = true;
    }

    if (value.HasMember("LineSpacing") && !value["LineSpacing"].IsNull())
    {
        if (!value["LineSpacing"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleLayoutConfig.LineSpacing` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lineSpacing = value["LineSpacing"].GetInt64();
        m_lineSpacingHasBeenSet = true;
    }

    if (value.HasMember("LineSpacingUnit") && !value["LineSpacingUnit"].IsNull())
    {
        if (!value["LineSpacingUnit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleLayoutConfig.LineSpacingUnit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lineSpacingUnit = value["LineSpacingUnit"].GetInt64();
        m_lineSpacingUnitHasBeenSet = true;
    }

    if (value.HasMember("Alignment") && !value["Alignment"].IsNull())
    {
        if (!value["Alignment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleLayoutConfig.Alignment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alignment = string(value["Alignment"].GetString());
        m_alignmentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SubtitleLayoutConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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


int64_t SubtitleLayoutConfig::GetSubtitleLayoutConfigSwitch() const
{
    return m_subtitleLayoutConfigSwitch;
}

void SubtitleLayoutConfig::SetSubtitleLayoutConfigSwitch(const int64_t& _subtitleLayoutConfigSwitch)
{
    m_subtitleLayoutConfigSwitch = _subtitleLayoutConfigSwitch;
    m_subtitleLayoutConfigSwitchHasBeenSet = true;
}

bool SubtitleLayoutConfig::SubtitleLayoutConfigSwitchHasBeenSet() const
{
    return m_subtitleLayoutConfigSwitchHasBeenSet;
}

int64_t SubtitleLayoutConfig::GetLineSpacing() const
{
    return m_lineSpacing;
}

void SubtitleLayoutConfig::SetLineSpacing(const int64_t& _lineSpacing)
{
    m_lineSpacing = _lineSpacing;
    m_lineSpacingHasBeenSet = true;
}

bool SubtitleLayoutConfig::LineSpacingHasBeenSet() const
{
    return m_lineSpacingHasBeenSet;
}

int64_t SubtitleLayoutConfig::GetLineSpacingUnit() const
{
    return m_lineSpacingUnit;
}

void SubtitleLayoutConfig::SetLineSpacingUnit(const int64_t& _lineSpacingUnit)
{
    m_lineSpacingUnit = _lineSpacingUnit;
    m_lineSpacingUnitHasBeenSet = true;
}

bool SubtitleLayoutConfig::LineSpacingUnitHasBeenSet() const
{
    return m_lineSpacingUnitHasBeenSet;
}

string SubtitleLayoutConfig::GetAlignment() const
{
    return m_alignment;
}

void SubtitleLayoutConfig::SetAlignment(const string& _alignment)
{
    m_alignment = _alignment;
    m_alignmentHasBeenSet = true;
}

bool SubtitleLayoutConfig::AlignmentHasBeenSet() const
{
    return m_alignmentHasBeenSet;
}

