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

#include <tencentcloud/teo/v20220106/model/WafConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220106::Model;
using namespace std;

WafConfig::WafConfig() :
    m_switchHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_wafRulesHasBeenSet(false),
    m_aiRuleHasBeenSet(false)
{
}

CoreInternalOutcome WafConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WafConfig.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WafConfig.Level` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_level = string(value["Level"].GetString());
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("Mode") && !value["Mode"].IsNull())
    {
        if (!value["Mode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WafConfig.Mode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mode = string(value["Mode"].GetString());
        m_modeHasBeenSet = true;
    }

    if (value.HasMember("WafRules") && !value["WafRules"].IsNull())
    {
        if (!value["WafRules"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `WafConfig.WafRules` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_wafRules.Deserialize(value["WafRules"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_wafRulesHasBeenSet = true;
    }

    if (value.HasMember("AiRule") && !value["AiRule"].IsNull())
    {
        if (!value["AiRule"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `WafConfig.AiRule` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_aiRule.Deserialize(value["AiRule"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_aiRuleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WafConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_level.c_str(), allocator).Move(), allocator);
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mode.c_str(), allocator).Move(), allocator);
    }

    if (m_wafRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WafRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_wafRules.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_aiRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AiRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_aiRule.ToJsonObject(value[key.c_str()], allocator);
    }

}


string WafConfig::GetSwitch() const
{
    return m_switch;
}

void WafConfig::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool WafConfig::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

string WafConfig::GetLevel() const
{
    return m_level;
}

void WafConfig::SetLevel(const string& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool WafConfig::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string WafConfig::GetMode() const
{
    return m_mode;
}

void WafConfig::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool WafConfig::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

WafRule WafConfig::GetWafRules() const
{
    return m_wafRules;
}

void WafConfig::SetWafRules(const WafRule& _wafRules)
{
    m_wafRules = _wafRules;
    m_wafRulesHasBeenSet = true;
}

bool WafConfig::WafRulesHasBeenSet() const
{
    return m_wafRulesHasBeenSet;
}

AiRule WafConfig::GetAiRule() const
{
    return m_aiRule;
}

void WafConfig::SetAiRule(const AiRule& _aiRule)
{
    m_aiRule = _aiRule;
    m_aiRuleHasBeenSet = true;
}

bool WafConfig::AiRuleHasBeenSet() const
{
    return m_aiRuleHasBeenSet;
}

