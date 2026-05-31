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

#include <tencentcloud/tse/v20201207/model/AIGWCustomDesensitizeRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

AIGWCustomDesensitizeRule::AIGWCustomDesensitizeRule() :
    m_nameHasBeenSet(false),
    m_patternHasBeenSet(false),
    m_maskFormatHasBeenSet(false),
    m_enabledHasBeenSet(false)
{
}

CoreInternalOutcome AIGWCustomDesensitizeRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWCustomDesensitizeRule.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Pattern") && !value["Pattern"].IsNull())
    {
        if (!value["Pattern"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWCustomDesensitizeRule.Pattern` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pattern = string(value["Pattern"].GetString());
        m_patternHasBeenSet = true;
    }

    if (value.HasMember("MaskFormat") && !value["MaskFormat"].IsNull())
    {
        if (!value["MaskFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWCustomDesensitizeRule.MaskFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_maskFormat = string(value["MaskFormat"].GetString());
        m_maskFormatHasBeenSet = true;
    }

    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWCustomDesensitizeRule.Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AIGWCustomDesensitizeRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_patternHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pattern";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pattern.c_str(), allocator).Move(), allocator);
    }

    if (m_maskFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaskFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_maskFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

}


string AIGWCustomDesensitizeRule::GetName() const
{
    return m_name;
}

void AIGWCustomDesensitizeRule::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AIGWCustomDesensitizeRule::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string AIGWCustomDesensitizeRule::GetPattern() const
{
    return m_pattern;
}

void AIGWCustomDesensitizeRule::SetPattern(const string& _pattern)
{
    m_pattern = _pattern;
    m_patternHasBeenSet = true;
}

bool AIGWCustomDesensitizeRule::PatternHasBeenSet() const
{
    return m_patternHasBeenSet;
}

string AIGWCustomDesensitizeRule::GetMaskFormat() const
{
    return m_maskFormat;
}

void AIGWCustomDesensitizeRule::SetMaskFormat(const string& _maskFormat)
{
    m_maskFormat = _maskFormat;
    m_maskFormatHasBeenSet = true;
}

bool AIGWCustomDesensitizeRule::MaskFormatHasBeenSet() const
{
    return m_maskFormatHasBeenSet;
}

bool AIGWCustomDesensitizeRule::GetEnabled() const
{
    return m_enabled;
}

void AIGWCustomDesensitizeRule::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool AIGWCustomDesensitizeRule::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

