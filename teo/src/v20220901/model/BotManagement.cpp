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

#include <tencentcloud/teo/v20220901/model/BotManagement.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

BotManagement::BotManagement() :
    m_enabledHasBeenSet(false),
    m_customRulesHasBeenSet(false),
    m_basicBotSettingsHasBeenSet(false),
    m_clientAttestationRulesHasBeenSet(false),
    m_browserImpersonationDetectionHasBeenSet(false)
{
}

CoreInternalOutcome BotManagement::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BotManagement.Enabled` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = string(value["Enabled"].GetString());
        m_enabledHasBeenSet = true;
    }

    if (value.HasMember("CustomRules") && !value["CustomRules"].IsNull())
    {
        if (!value["CustomRules"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BotManagement.CustomRules` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_customRules.Deserialize(value["CustomRules"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_customRulesHasBeenSet = true;
    }

    if (value.HasMember("BasicBotSettings") && !value["BasicBotSettings"].IsNull())
    {
        if (!value["BasicBotSettings"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BotManagement.BasicBotSettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_basicBotSettings.Deserialize(value["BasicBotSettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_basicBotSettingsHasBeenSet = true;
    }

    if (value.HasMember("ClientAttestationRules") && !value["ClientAttestationRules"].IsNull())
    {
        if (!value["ClientAttestationRules"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BotManagement.ClientAttestationRules` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_clientAttestationRules.Deserialize(value["ClientAttestationRules"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_clientAttestationRulesHasBeenSet = true;
    }

    if (value.HasMember("BrowserImpersonationDetection") && !value["BrowserImpersonationDetection"].IsNull())
    {
        if (!value["BrowserImpersonationDetection"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BotManagement.BrowserImpersonationDetection` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_browserImpersonationDetection.Deserialize(value["BrowserImpersonationDetection"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_browserImpersonationDetectionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BotManagement::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_enabled.c_str(), allocator).Move(), allocator);
    }

    if (m_customRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_customRules.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_basicBotSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BasicBotSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_basicBotSettings.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_clientAttestationRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientAttestationRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_clientAttestationRules.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_browserImpersonationDetectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BrowserImpersonationDetection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_browserImpersonationDetection.ToJsonObject(value[key.c_str()], allocator);
    }

}


string BotManagement::GetEnabled() const
{
    return m_enabled;
}

void BotManagement::SetEnabled(const string& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool BotManagement::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

BotManagementCustomRules BotManagement::GetCustomRules() const
{
    return m_customRules;
}

void BotManagement::SetCustomRules(const BotManagementCustomRules& _customRules)
{
    m_customRules = _customRules;
    m_customRulesHasBeenSet = true;
}

bool BotManagement::CustomRulesHasBeenSet() const
{
    return m_customRulesHasBeenSet;
}

BasicBotSettings BotManagement::GetBasicBotSettings() const
{
    return m_basicBotSettings;
}

void BotManagement::SetBasicBotSettings(const BasicBotSettings& _basicBotSettings)
{
    m_basicBotSettings = _basicBotSettings;
    m_basicBotSettingsHasBeenSet = true;
}

bool BotManagement::BasicBotSettingsHasBeenSet() const
{
    return m_basicBotSettingsHasBeenSet;
}

ClientAttestationRules BotManagement::GetClientAttestationRules() const
{
    return m_clientAttestationRules;
}

void BotManagement::SetClientAttestationRules(const ClientAttestationRules& _clientAttestationRules)
{
    m_clientAttestationRules = _clientAttestationRules;
    m_clientAttestationRulesHasBeenSet = true;
}

bool BotManagement::ClientAttestationRulesHasBeenSet() const
{
    return m_clientAttestationRulesHasBeenSet;
}

BrowserImpersonationDetection BotManagement::GetBrowserImpersonationDetection() const
{
    return m_browserImpersonationDetection;
}

void BotManagement::SetBrowserImpersonationDetection(const BrowserImpersonationDetection& _browserImpersonationDetection)
{
    m_browserImpersonationDetection = _browserImpersonationDetection;
    m_browserImpersonationDetectionHasBeenSet = true;
}

bool BotManagement::BrowserImpersonationDetectionHasBeenSet() const
{
    return m_browserImpersonationDetectionHasBeenSet;
}

