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

#include <tencentcloud/teo/v20220901/model/ZoneFullConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

ZoneFullConfig::ZoneFullConfig() :
    m_formatVersionHasBeenSet(false),
    m_zoneConfigHasBeenSet(false),
    m_rulesHasBeenSet(false),
    m_webSecurityHasBeenSet(false),
    m_functionTriggersHasBeenSet(false)
{
}

CoreInternalOutcome ZoneFullConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FormatVersion") && !value["FormatVersion"].IsNull())
    {
        if (!value["FormatVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneFullConfig.FormatVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_formatVersion = string(value["FormatVersion"].GetString());
        m_formatVersionHasBeenSet = true;
    }

    if (value.HasMember("ZoneConfig") && !value["ZoneConfig"].IsNull())
    {
        if (!value["ZoneConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneFullConfig.ZoneConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_zoneConfig.Deserialize(value["ZoneConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_zoneConfigHasBeenSet = true;
    }

    if (value.HasMember("Rules") && !value["Rules"].IsNull())
    {
        if (!value["Rules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ZoneFullConfig.Rules` is not array type"));

        const rapidjson::Value &tmpValue = value["Rules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ConfigGroupRuleEngineItem item;
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

    if (value.HasMember("WebSecurity") && !value["WebSecurity"].IsNull())
    {
        if (!value["WebSecurity"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneFullConfig.WebSecurity` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_webSecurity.Deserialize(value["WebSecurity"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_webSecurityHasBeenSet = true;
    }

    if (value.HasMember("FunctionTriggers") && !value["FunctionTriggers"].IsNull())
    {
        if (!value["FunctionTriggers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ZoneFullConfig.FunctionTriggers` is not array type"));

        const rapidjson::Value &tmpValue = value["FunctionTriggers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ConfigGroupFunctionTrigger item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_functionTriggers.push_back(item);
        }
        m_functionTriggersHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ZoneFullConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_formatVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FormatVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_formatVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_zoneConfig.ToJsonObject(value[key.c_str()], allocator);
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

    if (m_webSecurityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebSecurity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_webSecurity.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_functionTriggersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FunctionTriggers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_functionTriggers.begin(); itr != m_functionTriggers.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ZoneFullConfig::GetFormatVersion() const
{
    return m_formatVersion;
}

void ZoneFullConfig::SetFormatVersion(const string& _formatVersion)
{
    m_formatVersion = _formatVersion;
    m_formatVersionHasBeenSet = true;
}

bool ZoneFullConfig::FormatVersionHasBeenSet() const
{
    return m_formatVersionHasBeenSet;
}

ZoneConfig ZoneFullConfig::GetZoneConfig() const
{
    return m_zoneConfig;
}

void ZoneFullConfig::SetZoneConfig(const ZoneConfig& _zoneConfig)
{
    m_zoneConfig = _zoneConfig;
    m_zoneConfigHasBeenSet = true;
}

bool ZoneFullConfig::ZoneConfigHasBeenSet() const
{
    return m_zoneConfigHasBeenSet;
}

vector<ConfigGroupRuleEngineItem> ZoneFullConfig::GetRules() const
{
    return m_rules;
}

void ZoneFullConfig::SetRules(const vector<ConfigGroupRuleEngineItem>& _rules)
{
    m_rules = _rules;
    m_rulesHasBeenSet = true;
}

bool ZoneFullConfig::RulesHasBeenSet() const
{
    return m_rulesHasBeenSet;
}

WebSecurity ZoneFullConfig::GetWebSecurity() const
{
    return m_webSecurity;
}

void ZoneFullConfig::SetWebSecurity(const WebSecurity& _webSecurity)
{
    m_webSecurity = _webSecurity;
    m_webSecurityHasBeenSet = true;
}

bool ZoneFullConfig::WebSecurityHasBeenSet() const
{
    return m_webSecurityHasBeenSet;
}

vector<ConfigGroupFunctionTrigger> ZoneFullConfig::GetFunctionTriggers() const
{
    return m_functionTriggers;
}

void ZoneFullConfig::SetFunctionTriggers(const vector<ConfigGroupFunctionTrigger>& _functionTriggers)
{
    m_functionTriggers = _functionTriggers;
    m_functionTriggersHasBeenSet = true;
}

bool ZoneFullConfig::FunctionTriggersHasBeenSet() const
{
    return m_functionTriggersHasBeenSet;
}

