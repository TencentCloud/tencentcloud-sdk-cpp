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

#include <tencentcloud/csip/v20221121/model/ProtectionConfigItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ProtectionConfigItem::ProtectionConfigItem() :
    m_configIdHasBeenSet(false),
    m_configNameHasBeenSet(false),
    m_configDescriptionHasBeenSet(false),
    m_configGroupHasBeenSet(false),
    m_enabledHasBeenSet(false)
{
}

CoreInternalOutcome ProtectionConfigItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ConfigId") && !value["ConfigId"].IsNull())
    {
        if (!value["ConfigId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectionConfigItem.ConfigId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configId = string(value["ConfigId"].GetString());
        m_configIdHasBeenSet = true;
    }

    if (value.HasMember("ConfigName") && !value["ConfigName"].IsNull())
    {
        if (!value["ConfigName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectionConfigItem.ConfigName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configName = string(value["ConfigName"].GetString());
        m_configNameHasBeenSet = true;
    }

    if (value.HasMember("ConfigDescription") && !value["ConfigDescription"].IsNull())
    {
        if (!value["ConfigDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectionConfigItem.ConfigDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configDescription = string(value["ConfigDescription"].GetString());
        m_configDescriptionHasBeenSet = true;
    }

    if (value.HasMember("ConfigGroup") && !value["ConfigGroup"].IsNull())
    {
        if (!value["ConfigGroup"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectionConfigItem.ConfigGroup` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configGroup = string(value["ConfigGroup"].GetString());
        m_configGroupHasBeenSet = true;
    }

    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectionConfigItem.Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProtectionConfigItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_configIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configId.c_str(), allocator).Move(), allocator);
    }

    if (m_configNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configName.c_str(), allocator).Move(), allocator);
    }

    if (m_configDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_configGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configGroup.c_str(), allocator).Move(), allocator);
    }

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

}


string ProtectionConfigItem::GetConfigId() const
{
    return m_configId;
}

void ProtectionConfigItem::SetConfigId(const string& _configId)
{
    m_configId = _configId;
    m_configIdHasBeenSet = true;
}

bool ProtectionConfigItem::ConfigIdHasBeenSet() const
{
    return m_configIdHasBeenSet;
}

string ProtectionConfigItem::GetConfigName() const
{
    return m_configName;
}

void ProtectionConfigItem::SetConfigName(const string& _configName)
{
    m_configName = _configName;
    m_configNameHasBeenSet = true;
}

bool ProtectionConfigItem::ConfigNameHasBeenSet() const
{
    return m_configNameHasBeenSet;
}

string ProtectionConfigItem::GetConfigDescription() const
{
    return m_configDescription;
}

void ProtectionConfigItem::SetConfigDescription(const string& _configDescription)
{
    m_configDescription = _configDescription;
    m_configDescriptionHasBeenSet = true;
}

bool ProtectionConfigItem::ConfigDescriptionHasBeenSet() const
{
    return m_configDescriptionHasBeenSet;
}

string ProtectionConfigItem::GetConfigGroup() const
{
    return m_configGroup;
}

void ProtectionConfigItem::SetConfigGroup(const string& _configGroup)
{
    m_configGroup = _configGroup;
    m_configGroupHasBeenSet = true;
}

bool ProtectionConfigItem::ConfigGroupHasBeenSet() const
{
    return m_configGroupHasBeenSet;
}

bool ProtectionConfigItem::GetEnabled() const
{
    return m_enabled;
}

void ProtectionConfigItem::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool ProtectionConfigItem::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

