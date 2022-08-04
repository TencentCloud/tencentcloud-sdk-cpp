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

#include <tencentcloud/cdn/v20180606/model/AdvancedCCRules.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

AdvancedCCRules::AdvancedCCRules() :
    m_ruleNameHasBeenSet(false),
    m_detectionTimeHasBeenSet(false),
    m_frequencyLimitHasBeenSet(false),
    m_punishmentSwitchHasBeenSet(false),
    m_punishmentTimeHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_redirectUrlHasBeenSet(false),
    m_configureHasBeenSet(false),
    m_switchHasBeenSet(false)
{
}

CoreInternalOutcome AdvancedCCRules::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdvancedCCRules.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("DetectionTime") && !value["DetectionTime"].IsNull())
    {
        if (!value["DetectionTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AdvancedCCRules.DetectionTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_detectionTime = value["DetectionTime"].GetUint64();
        m_detectionTimeHasBeenSet = true;
    }

    if (value.HasMember("FrequencyLimit") && !value["FrequencyLimit"].IsNull())
    {
        if (!value["FrequencyLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AdvancedCCRules.FrequencyLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_frequencyLimit = value["FrequencyLimit"].GetUint64();
        m_frequencyLimitHasBeenSet = true;
    }

    if (value.HasMember("PunishmentSwitch") && !value["PunishmentSwitch"].IsNull())
    {
        if (!value["PunishmentSwitch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdvancedCCRules.PunishmentSwitch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_punishmentSwitch = string(value["PunishmentSwitch"].GetString());
        m_punishmentSwitchHasBeenSet = true;
    }

    if (value.HasMember("PunishmentTime") && !value["PunishmentTime"].IsNull())
    {
        if (!value["PunishmentTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AdvancedCCRules.PunishmentTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_punishmentTime = value["PunishmentTime"].GetUint64();
        m_punishmentTimeHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdvancedCCRules.Action` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_action = string(value["Action"].GetString());
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("RedirectUrl") && !value["RedirectUrl"].IsNull())
    {
        if (!value["RedirectUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdvancedCCRules.RedirectUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_redirectUrl = string(value["RedirectUrl"].GetString());
        m_redirectUrlHasBeenSet = true;
    }

    if (value.HasMember("Configure") && !value["Configure"].IsNull())
    {
        if (!value["Configure"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AdvancedCCRules.Configure` is not array type"));

        const rapidjson::Value &tmpValue = value["Configure"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ScdnSevenLayerRules item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_configure.push_back(item);
        }
        m_configureHasBeenSet = true;
    }

    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdvancedCCRules.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AdvancedCCRules::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_detectionTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetectionTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_detectionTime, allocator);
    }

    if (m_frequencyLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrequencyLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_frequencyLimit, allocator);
    }

    if (m_punishmentSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PunishmentSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_punishmentSwitch.c_str(), allocator).Move(), allocator);
    }

    if (m_punishmentTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PunishmentTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_punishmentTime, allocator);
    }

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_action.c_str(), allocator).Move(), allocator);
    }

    if (m_redirectUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RedirectUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_redirectUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_configureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Configure";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_configure.begin(); itr != m_configure.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

}


string AdvancedCCRules::GetRuleName() const
{
    return m_ruleName;
}

void AdvancedCCRules::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool AdvancedCCRules::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

uint64_t AdvancedCCRules::GetDetectionTime() const
{
    return m_detectionTime;
}

void AdvancedCCRules::SetDetectionTime(const uint64_t& _detectionTime)
{
    m_detectionTime = _detectionTime;
    m_detectionTimeHasBeenSet = true;
}

bool AdvancedCCRules::DetectionTimeHasBeenSet() const
{
    return m_detectionTimeHasBeenSet;
}

uint64_t AdvancedCCRules::GetFrequencyLimit() const
{
    return m_frequencyLimit;
}

void AdvancedCCRules::SetFrequencyLimit(const uint64_t& _frequencyLimit)
{
    m_frequencyLimit = _frequencyLimit;
    m_frequencyLimitHasBeenSet = true;
}

bool AdvancedCCRules::FrequencyLimitHasBeenSet() const
{
    return m_frequencyLimitHasBeenSet;
}

string AdvancedCCRules::GetPunishmentSwitch() const
{
    return m_punishmentSwitch;
}

void AdvancedCCRules::SetPunishmentSwitch(const string& _punishmentSwitch)
{
    m_punishmentSwitch = _punishmentSwitch;
    m_punishmentSwitchHasBeenSet = true;
}

bool AdvancedCCRules::PunishmentSwitchHasBeenSet() const
{
    return m_punishmentSwitchHasBeenSet;
}

uint64_t AdvancedCCRules::GetPunishmentTime() const
{
    return m_punishmentTime;
}

void AdvancedCCRules::SetPunishmentTime(const uint64_t& _punishmentTime)
{
    m_punishmentTime = _punishmentTime;
    m_punishmentTimeHasBeenSet = true;
}

bool AdvancedCCRules::PunishmentTimeHasBeenSet() const
{
    return m_punishmentTimeHasBeenSet;
}

string AdvancedCCRules::GetAction() const
{
    return m_action;
}

void AdvancedCCRules::SetAction(const string& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool AdvancedCCRules::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

string AdvancedCCRules::GetRedirectUrl() const
{
    return m_redirectUrl;
}

void AdvancedCCRules::SetRedirectUrl(const string& _redirectUrl)
{
    m_redirectUrl = _redirectUrl;
    m_redirectUrlHasBeenSet = true;
}

bool AdvancedCCRules::RedirectUrlHasBeenSet() const
{
    return m_redirectUrlHasBeenSet;
}

vector<ScdnSevenLayerRules> AdvancedCCRules::GetConfigure() const
{
    return m_configure;
}

void AdvancedCCRules::SetConfigure(const vector<ScdnSevenLayerRules>& _configure)
{
    m_configure = _configure;
    m_configureHasBeenSet = true;
}

bool AdvancedCCRules::ConfigureHasBeenSet() const
{
    return m_configureHasBeenSet;
}

string AdvancedCCRules::GetSwitch() const
{
    return m_switch;
}

void AdvancedCCRules::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool AdvancedCCRules::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

