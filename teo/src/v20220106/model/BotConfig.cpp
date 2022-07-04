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

#include <tencentcloud/teo/v20220106/model/BotConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220106::Model;
using namespace std;

BotConfig::BotConfig() :
    m_switchHasBeenSet(false),
    m_managedRuleHasBeenSet(false),
    m_uaBotRuleHasBeenSet(false),
    m_ispBotRuleHasBeenSet(false),
    m_portraitRuleHasBeenSet(false),
    m_intelligenceRuleHasBeenSet(false)
{
}

CoreInternalOutcome BotConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BotConfig.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("ManagedRule") && !value["ManagedRule"].IsNull())
    {
        if (!value["ManagedRule"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BotConfig.ManagedRule` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_managedRule.Deserialize(value["ManagedRule"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_managedRuleHasBeenSet = true;
    }

    if (value.HasMember("UaBotRule") && !value["UaBotRule"].IsNull())
    {
        if (!value["UaBotRule"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BotConfig.UaBotRule` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_uaBotRule.Deserialize(value["UaBotRule"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_uaBotRuleHasBeenSet = true;
    }

    if (value.HasMember("IspBotRule") && !value["IspBotRule"].IsNull())
    {
        if (!value["IspBotRule"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BotConfig.IspBotRule` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ispBotRule.Deserialize(value["IspBotRule"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ispBotRuleHasBeenSet = true;
    }

    if (value.HasMember("PortraitRule") && !value["PortraitRule"].IsNull())
    {
        if (!value["PortraitRule"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BotConfig.PortraitRule` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_portraitRule.Deserialize(value["PortraitRule"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_portraitRuleHasBeenSet = true;
    }

    if (value.HasMember("IntelligenceRule") && !value["IntelligenceRule"].IsNull())
    {
        if (!value["IntelligenceRule"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BotConfig.IntelligenceRule` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_intelligenceRule.Deserialize(value["IntelligenceRule"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_intelligenceRuleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BotConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_managedRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManagedRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_managedRule.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_uaBotRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UaBotRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_uaBotRule.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_ispBotRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IspBotRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ispBotRule.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_portraitRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PortraitRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_portraitRule.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_intelligenceRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntelligenceRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_intelligenceRule.ToJsonObject(value[key.c_str()], allocator);
    }

}


string BotConfig::GetSwitch() const
{
    return m_switch;
}

void BotConfig::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool BotConfig::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

BotManagedRule BotConfig::GetManagedRule() const
{
    return m_managedRule;
}

void BotConfig::SetManagedRule(const BotManagedRule& _managedRule)
{
    m_managedRule = _managedRule;
    m_managedRuleHasBeenSet = true;
}

bool BotConfig::ManagedRuleHasBeenSet() const
{
    return m_managedRuleHasBeenSet;
}

BotManagedRule BotConfig::GetUaBotRule() const
{
    return m_uaBotRule;
}

void BotConfig::SetUaBotRule(const BotManagedRule& _uaBotRule)
{
    m_uaBotRule = _uaBotRule;
    m_uaBotRuleHasBeenSet = true;
}

bool BotConfig::UaBotRuleHasBeenSet() const
{
    return m_uaBotRuleHasBeenSet;
}

BotManagedRule BotConfig::GetIspBotRule() const
{
    return m_ispBotRule;
}

void BotConfig::SetIspBotRule(const BotManagedRule& _ispBotRule)
{
    m_ispBotRule = _ispBotRule;
    m_ispBotRuleHasBeenSet = true;
}

bool BotConfig::IspBotRuleHasBeenSet() const
{
    return m_ispBotRuleHasBeenSet;
}

BotPortraitRule BotConfig::GetPortraitRule() const
{
    return m_portraitRule;
}

void BotConfig::SetPortraitRule(const BotPortraitRule& _portraitRule)
{
    m_portraitRule = _portraitRule;
    m_portraitRuleHasBeenSet = true;
}

bool BotConfig::PortraitRuleHasBeenSet() const
{
    return m_portraitRuleHasBeenSet;
}

IntelligenceRule BotConfig::GetIntelligenceRule() const
{
    return m_intelligenceRule;
}

void BotConfig::SetIntelligenceRule(const IntelligenceRule& _intelligenceRule)
{
    m_intelligenceRule = _intelligenceRule;
    m_intelligenceRuleHasBeenSet = true;
}

bool BotConfig::IntelligenceRuleHasBeenSet() const
{
    return m_intelligenceRuleHasBeenSet;
}

