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

#include <tencentcloud/teo/v20220901/model/BotConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

BotConfig::BotConfig() :
    m_switchHasBeenSet(false),
    m_botManagedRuleHasBeenSet(false),
    m_botPortraitRuleHasBeenSet(false),
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

    if (value.HasMember("BotManagedRule") && !value["BotManagedRule"].IsNull())
    {
        if (!value["BotManagedRule"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BotConfig.BotManagedRule` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_botManagedRule.Deserialize(value["BotManagedRule"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_botManagedRuleHasBeenSet = true;
    }

    if (value.HasMember("BotPortraitRule") && !value["BotPortraitRule"].IsNull())
    {
        if (!value["BotPortraitRule"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BotConfig.BotPortraitRule` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_botPortraitRule.Deserialize(value["BotPortraitRule"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_botPortraitRuleHasBeenSet = true;
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

    if (m_botManagedRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BotManagedRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_botManagedRule.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_botPortraitRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BotPortraitRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_botPortraitRule.ToJsonObject(value[key.c_str()], allocator);
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

BotManagedRule BotConfig::GetBotManagedRule() const
{
    return m_botManagedRule;
}

void BotConfig::SetBotManagedRule(const BotManagedRule& _botManagedRule)
{
    m_botManagedRule = _botManagedRule;
    m_botManagedRuleHasBeenSet = true;
}

bool BotConfig::BotManagedRuleHasBeenSet() const
{
    return m_botManagedRuleHasBeenSet;
}

BotPortraitRule BotConfig::GetBotPortraitRule() const
{
    return m_botPortraitRule;
}

void BotConfig::SetBotPortraitRule(const BotPortraitRule& _botPortraitRule)
{
    m_botPortraitRule = _botPortraitRule;
    m_botPortraitRuleHasBeenSet = true;
}

bool BotConfig::BotPortraitRuleHasBeenSet() const
{
    return m_botPortraitRuleHasBeenSet;
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

