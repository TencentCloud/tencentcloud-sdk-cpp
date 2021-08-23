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

#include <tencentcloud/cdn/v20180606/model/ScdnWafConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

ScdnWafConfig::ScdnWafConfig() :
    m_switchHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_errorPageHasBeenSet(false),
    m_webShellSwitchHasBeenSet(false),
    m_rulesHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_subRuleSwitchHasBeenSet(false)
{
}

CoreInternalOutcome ScdnWafConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScdnWafConfig.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("Mode") && !value["Mode"].IsNull())
    {
        if (!value["Mode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScdnWafConfig.Mode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mode = string(value["Mode"].GetString());
        m_modeHasBeenSet = true;
    }

    if (value.HasMember("ErrorPage") && !value["ErrorPage"].IsNull())
    {
        if (!value["ErrorPage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ScdnWafConfig.ErrorPage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_errorPage.Deserialize(value["ErrorPage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_errorPageHasBeenSet = true;
    }

    if (value.HasMember("WebShellSwitch") && !value["WebShellSwitch"].IsNull())
    {
        if (!value["WebShellSwitch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScdnWafConfig.WebShellSwitch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_webShellSwitch = string(value["WebShellSwitch"].GetString());
        m_webShellSwitchHasBeenSet = true;
    }

    if (value.HasMember("Rules") && !value["Rules"].IsNull())
    {
        if (!value["Rules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ScdnWafConfig.Rules` is not array type"));

        const rapidjson::Value &tmpValue = value["Rules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ScdnWafRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_rules.push_back(item);
        }
        m_rulesHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScdnWafConfig.Level` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_level = value["Level"].GetInt64();
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("SubRuleSwitch") && !value["SubRuleSwitch"].IsNull())
    {
        if (!value["SubRuleSwitch"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ScdnWafConfig.SubRuleSwitch` is not array type"));

        const rapidjson::Value &tmpValue = value["SubRuleSwitch"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            WafSubRuleStatus item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_subRuleSwitch.push_back(item);
        }
        m_subRuleSwitchHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ScdnWafConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mode.c_str(), allocator).Move(), allocator);
    }

    if (m_errorPageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorPage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_errorPage.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_webShellSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebShellSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_webShellSwitch.c_str(), allocator).Move(), allocator);
    }

    if (m_rulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_rules.begin(); itr != m_rules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_level, allocator);
    }

    if (m_subRuleSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubRuleSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_subRuleSwitch.begin(); itr != m_subRuleSwitch.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ScdnWafConfig::GetSwitch() const
{
    return m_switch;
}

void ScdnWafConfig::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool ScdnWafConfig::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

string ScdnWafConfig::GetMode() const
{
    return m_mode;
}

void ScdnWafConfig::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool ScdnWafConfig::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

ScdnErrorPage ScdnWafConfig::GetErrorPage() const
{
    return m_errorPage;
}

void ScdnWafConfig::SetErrorPage(const ScdnErrorPage& _errorPage)
{
    m_errorPage = _errorPage;
    m_errorPageHasBeenSet = true;
}

bool ScdnWafConfig::ErrorPageHasBeenSet() const
{
    return m_errorPageHasBeenSet;
}

string ScdnWafConfig::GetWebShellSwitch() const
{
    return m_webShellSwitch;
}

void ScdnWafConfig::SetWebShellSwitch(const string& _webShellSwitch)
{
    m_webShellSwitch = _webShellSwitch;
    m_webShellSwitchHasBeenSet = true;
}

bool ScdnWafConfig::WebShellSwitchHasBeenSet() const
{
    return m_webShellSwitchHasBeenSet;
}

vector<ScdnWafRule> ScdnWafConfig::GetRules() const
{
    return m_rules;
}

void ScdnWafConfig::SetRules(const vector<ScdnWafRule>& _rules)
{
    m_rules = _rules;
    m_rulesHasBeenSet = true;
}

bool ScdnWafConfig::RulesHasBeenSet() const
{
    return m_rulesHasBeenSet;
}

int64_t ScdnWafConfig::GetLevel() const
{
    return m_level;
}

void ScdnWafConfig::SetLevel(const int64_t& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool ScdnWafConfig::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

vector<WafSubRuleStatus> ScdnWafConfig::GetSubRuleSwitch() const
{
    return m_subRuleSwitch;
}

void ScdnWafConfig::SetSubRuleSwitch(const vector<WafSubRuleStatus>& _subRuleSwitch)
{
    m_subRuleSwitch = _subRuleSwitch;
    m_subRuleSwitchHasBeenSet = true;
}

bool ScdnWafConfig::SubRuleSwitchHasBeenSet() const
{
    return m_subRuleSwitchHasBeenSet;
}

