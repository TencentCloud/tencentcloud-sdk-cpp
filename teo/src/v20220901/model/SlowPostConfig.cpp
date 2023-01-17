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

#include <tencentcloud/teo/v20220901/model/SlowPostConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

SlowPostConfig::SlowPostConfig() :
    m_switchHasBeenSet(false),
    m_firstPartConfigHasBeenSet(false),
    m_slowRateConfigHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_ruleIdHasBeenSet(false)
{
}

CoreInternalOutcome SlowPostConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlowPostConfig.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("FirstPartConfig") && !value["FirstPartConfig"].IsNull())
    {
        if (!value["FirstPartConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SlowPostConfig.FirstPartConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_firstPartConfig.Deserialize(value["FirstPartConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_firstPartConfigHasBeenSet = true;
    }

    if (value.HasMember("SlowRateConfig") && !value["SlowRateConfig"].IsNull())
    {
        if (!value["SlowRateConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SlowPostConfig.SlowRateConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_slowRateConfig.Deserialize(value["SlowRateConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_slowRateConfigHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlowPostConfig.Action` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_action = string(value["Action"].GetString());
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SlowPostConfig.RuleId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = value["RuleId"].GetUint64();
        m_ruleIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SlowPostConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_firstPartConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstPartConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_firstPartConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_slowRateConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SlowRateConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_slowRateConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_action.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleId, allocator);
    }

}


string SlowPostConfig::GetSwitch() const
{
    return m_switch;
}

void SlowPostConfig::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool SlowPostConfig::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

FirstPartConfig SlowPostConfig::GetFirstPartConfig() const
{
    return m_firstPartConfig;
}

void SlowPostConfig::SetFirstPartConfig(const FirstPartConfig& _firstPartConfig)
{
    m_firstPartConfig = _firstPartConfig;
    m_firstPartConfigHasBeenSet = true;
}

bool SlowPostConfig::FirstPartConfigHasBeenSet() const
{
    return m_firstPartConfigHasBeenSet;
}

SlowRateConfig SlowPostConfig::GetSlowRateConfig() const
{
    return m_slowRateConfig;
}

void SlowPostConfig::SetSlowRateConfig(const SlowRateConfig& _slowRateConfig)
{
    m_slowRateConfig = _slowRateConfig;
    m_slowRateConfigHasBeenSet = true;
}

bool SlowPostConfig::SlowRateConfigHasBeenSet() const
{
    return m_slowRateConfigHasBeenSet;
}

string SlowPostConfig::GetAction() const
{
    return m_action;
}

void SlowPostConfig::SetAction(const string& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool SlowPostConfig::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

uint64_t SlowPostConfig::GetRuleId() const
{
    return m_ruleId;
}

void SlowPostConfig::SetRuleId(const uint64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool SlowPostConfig::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

