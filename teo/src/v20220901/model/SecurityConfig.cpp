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

#include <tencentcloud/teo/v20220901/model/SecurityConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

SecurityConfig::SecurityConfig() :
    m_wafConfigHasBeenSet(false),
    m_rateLimitConfigHasBeenSet(false),
    m_aclConfigHasBeenSet(false),
    m_botConfigHasBeenSet(false),
    m_switchConfigHasBeenSet(false),
    m_ipTableConfigHasBeenSet(false),
    m_exceptConfigHasBeenSet(false),
    m_dropPageConfigHasBeenSet(false),
    m_templateConfigHasBeenSet(false),
    m_slowPostConfigHasBeenSet(false),
    m_detectLengthLimitConfigHasBeenSet(false)
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

    if (value.HasMember("ExceptConfig") && !value["ExceptConfig"].IsNull())
    {
        if (!value["ExceptConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityConfig.ExceptConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_exceptConfig.Deserialize(value["ExceptConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_exceptConfigHasBeenSet = true;
    }

    if (value.HasMember("DropPageConfig") && !value["DropPageConfig"].IsNull())
    {
        if (!value["DropPageConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityConfig.DropPageConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dropPageConfig.Deserialize(value["DropPageConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dropPageConfigHasBeenSet = true;
    }

    if (value.HasMember("TemplateConfig") && !value["TemplateConfig"].IsNull())
    {
        if (!value["TemplateConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityConfig.TemplateConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_templateConfig.Deserialize(value["TemplateConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_templateConfigHasBeenSet = true;
    }

    if (value.HasMember("SlowPostConfig") && !value["SlowPostConfig"].IsNull())
    {
        if (!value["SlowPostConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityConfig.SlowPostConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_slowPostConfig.Deserialize(value["SlowPostConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_slowPostConfigHasBeenSet = true;
    }

    if (value.HasMember("DetectLengthLimitConfig") && !value["DetectLengthLimitConfig"].IsNull())
    {
        if (!value["DetectLengthLimitConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityConfig.DetectLengthLimitConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_detectLengthLimitConfig.Deserialize(value["DetectLengthLimitConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_detectLengthLimitConfigHasBeenSet = true;
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

    if (m_exceptConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExceptConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_exceptConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_dropPageConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DropPageConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dropPageConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_templateConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_templateConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_slowPostConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SlowPostConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_slowPostConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_detectLengthLimitConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetectLengthLimitConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_detectLengthLimitConfig.ToJsonObject(value[key.c_str()], allocator);
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

ExceptConfig SecurityConfig::GetExceptConfig() const
{
    return m_exceptConfig;
}

void SecurityConfig::SetExceptConfig(const ExceptConfig& _exceptConfig)
{
    m_exceptConfig = _exceptConfig;
    m_exceptConfigHasBeenSet = true;
}

bool SecurityConfig::ExceptConfigHasBeenSet() const
{
    return m_exceptConfigHasBeenSet;
}

DropPageConfig SecurityConfig::GetDropPageConfig() const
{
    return m_dropPageConfig;
}

void SecurityConfig::SetDropPageConfig(const DropPageConfig& _dropPageConfig)
{
    m_dropPageConfig = _dropPageConfig;
    m_dropPageConfigHasBeenSet = true;
}

bool SecurityConfig::DropPageConfigHasBeenSet() const
{
    return m_dropPageConfigHasBeenSet;
}

TemplateConfig SecurityConfig::GetTemplateConfig() const
{
    return m_templateConfig;
}

void SecurityConfig::SetTemplateConfig(const TemplateConfig& _templateConfig)
{
    m_templateConfig = _templateConfig;
    m_templateConfigHasBeenSet = true;
}

bool SecurityConfig::TemplateConfigHasBeenSet() const
{
    return m_templateConfigHasBeenSet;
}

SlowPostConfig SecurityConfig::GetSlowPostConfig() const
{
    return m_slowPostConfig;
}

void SecurityConfig::SetSlowPostConfig(const SlowPostConfig& _slowPostConfig)
{
    m_slowPostConfig = _slowPostConfig;
    m_slowPostConfigHasBeenSet = true;
}

bool SecurityConfig::SlowPostConfigHasBeenSet() const
{
    return m_slowPostConfigHasBeenSet;
}

DetectLengthLimitConfig SecurityConfig::GetDetectLengthLimitConfig() const
{
    return m_detectLengthLimitConfig;
}

void SecurityConfig::SetDetectLengthLimitConfig(const DetectLengthLimitConfig& _detectLengthLimitConfig)
{
    m_detectLengthLimitConfig = _detectLengthLimitConfig;
    m_detectLengthLimitConfigHasBeenSet = true;
}

bool SecurityConfig::DetectLengthLimitConfigHasBeenSet() const
{
    return m_detectLengthLimitConfigHasBeenSet;
}

