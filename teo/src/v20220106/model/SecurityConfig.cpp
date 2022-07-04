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

#include <tencentcloud/teo/v20220106/model/SecurityConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220106::Model;
using namespace std;

SecurityConfig::SecurityConfig() :
    m_wafConfigHasBeenSet(false),
    m_rateLimitConfigHasBeenSet(false),
    m_ddosConfigHasBeenSet(false),
    m_aclConfigHasBeenSet(false),
    m_botConfigHasBeenSet(false),
    m_switchConfigHasBeenSet(false),
    m_ipTableConfigHasBeenSet(false)
{
}

CoreInternalOutcome SecurityConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WafConfig") && !value["WafConfig"].IsNull())
    {
        if (!value["WafConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityConfig.WafConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_wafConfig.Deserialize(value["WafConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_wafConfigHasBeenSet = true;
    }

    if (value.HasMember("RateLimitConfig") && !value["RateLimitConfig"].IsNull())
    {
        if (!value["RateLimitConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityConfig.RateLimitConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_rateLimitConfig.Deserialize(value["RateLimitConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rateLimitConfigHasBeenSet = true;
    }

    if (value.HasMember("DdosConfig") && !value["DdosConfig"].IsNull())
    {
        if (!value["DdosConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityConfig.DdosConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ddosConfig.Deserialize(value["DdosConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ddosConfigHasBeenSet = true;
    }

    if (value.HasMember("AclConfig") && !value["AclConfig"].IsNull())
    {
        if (!value["AclConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityConfig.AclConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_aclConfig.Deserialize(value["AclConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_aclConfigHasBeenSet = true;
    }

    if (value.HasMember("BotConfig") && !value["BotConfig"].IsNull())
    {
        if (!value["BotConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityConfig.BotConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_botConfig.Deserialize(value["BotConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_botConfigHasBeenSet = true;
    }

    if (value.HasMember("SwitchConfig") && !value["SwitchConfig"].IsNull())
    {
        if (!value["SwitchConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityConfig.SwitchConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_switchConfig.Deserialize(value["SwitchConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_switchConfigHasBeenSet = true;
    }

    if (value.HasMember("IpTableConfig") && !value["IpTableConfig"].IsNull())
    {
        if (!value["IpTableConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityConfig.IpTableConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ipTableConfig.Deserialize(value["IpTableConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ipTableConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SecurityConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_wafConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WafConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_wafConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_rateLimitConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RateLimitConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rateLimitConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_ddosConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DdosConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ddosConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_aclConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AclConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_aclConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_botConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BotConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_botConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_switchConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SwitchConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_switchConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_ipTableConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpTableConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ipTableConfig.ToJsonObject(value[key.c_str()], allocator);
    }

}


WafConfig SecurityConfig::GetWafConfig() const
{
    return m_wafConfig;
}

void SecurityConfig::SetWafConfig(const WafConfig& _wafConfig)
{
    m_wafConfig = _wafConfig;
    m_wafConfigHasBeenSet = true;
}

bool SecurityConfig::WafConfigHasBeenSet() const
{
    return m_wafConfigHasBeenSet;
}

RateLimitConfig SecurityConfig::GetRateLimitConfig() const
{
    return m_rateLimitConfig;
}

void SecurityConfig::SetRateLimitConfig(const RateLimitConfig& _rateLimitConfig)
{
    m_rateLimitConfig = _rateLimitConfig;
    m_rateLimitConfigHasBeenSet = true;
}

bool SecurityConfig::RateLimitConfigHasBeenSet() const
{
    return m_rateLimitConfigHasBeenSet;
}

DDoSConfig SecurityConfig::GetDdosConfig() const
{
    return m_ddosConfig;
}

void SecurityConfig::SetDdosConfig(const DDoSConfig& _ddosConfig)
{
    m_ddosConfig = _ddosConfig;
    m_ddosConfigHasBeenSet = true;
}

bool SecurityConfig::DdosConfigHasBeenSet() const
{
    return m_ddosConfigHasBeenSet;
}

AclConfig SecurityConfig::GetAclConfig() const
{
    return m_aclConfig;
}

void SecurityConfig::SetAclConfig(const AclConfig& _aclConfig)
{
    m_aclConfig = _aclConfig;
    m_aclConfigHasBeenSet = true;
}

bool SecurityConfig::AclConfigHasBeenSet() const
{
    return m_aclConfigHasBeenSet;
}

BotConfig SecurityConfig::GetBotConfig() const
{
    return m_botConfig;
}

void SecurityConfig::SetBotConfig(const BotConfig& _botConfig)
{
    m_botConfig = _botConfig;
    m_botConfigHasBeenSet = true;
}

bool SecurityConfig::BotConfigHasBeenSet() const
{
    return m_botConfigHasBeenSet;
}

SwitchConfig SecurityConfig::GetSwitchConfig() const
{
    return m_switchConfig;
}

void SecurityConfig::SetSwitchConfig(const SwitchConfig& _switchConfig)
{
    m_switchConfig = _switchConfig;
    m_switchConfigHasBeenSet = true;
}

bool SecurityConfig::SwitchConfigHasBeenSet() const
{
    return m_switchConfigHasBeenSet;
}

IpTableConfig SecurityConfig::GetIpTableConfig() const
{
    return m_ipTableConfig;
}

void SecurityConfig::SetIpTableConfig(const IpTableConfig& _ipTableConfig)
{
    m_ipTableConfig = _ipTableConfig;
    m_ipTableConfigHasBeenSet = true;
}

bool SecurityConfig::IpTableConfigHasBeenSet() const
{
    return m_ipTableConfigHasBeenSet;
}

