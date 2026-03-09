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

#include <tencentcloud/cetcd/v20220325/model/EtcdAdvancedSettings.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cetcd::V20220325::Model;
using namespace std;

EtcdAdvancedSettings::EtcdAdvancedSettings() :
    m_securitySettingsHasBeenSet(false),
    m_autoCompactionSettingsHasBeenSet(false),
    m_monitorSettingsHasBeenSet(false),
    m_backupSettingsHasBeenSet(false),
    m_customDomainsHasBeenSet(false),
    m_customIPsHasBeenSet(false)
{
}

CoreInternalOutcome EtcdAdvancedSettings::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SecuritySettings") && !value["SecuritySettings"].IsNull())
    {
        if (!value["SecuritySettings"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EtcdAdvancedSettings.SecuritySettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_securitySettings.Deserialize(value["SecuritySettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_securitySettingsHasBeenSet = true;
    }

    if (value.HasMember("AutoCompactionSettings") && !value["AutoCompactionSettings"].IsNull())
    {
        if (!value["AutoCompactionSettings"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EtcdAdvancedSettings.AutoCompactionSettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_autoCompactionSettings.Deserialize(value["AutoCompactionSettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_autoCompactionSettingsHasBeenSet = true;
    }

    if (value.HasMember("MonitorSettings") && !value["MonitorSettings"].IsNull())
    {
        if (!value["MonitorSettings"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EtcdAdvancedSettings.MonitorSettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_monitorSettings.Deserialize(value["MonitorSettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_monitorSettingsHasBeenSet = true;
    }

    if (value.HasMember("BackupSettings") && !value["BackupSettings"].IsNull())
    {
        if (!value["BackupSettings"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EtcdAdvancedSettings.BackupSettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_backupSettings.Deserialize(value["BackupSettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_backupSettingsHasBeenSet = true;
    }

    if (value.HasMember("CustomDomains") && !value["CustomDomains"].IsNull())
    {
        if (!value["CustomDomains"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EtcdAdvancedSettings.CustomDomains` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customDomains = string(value["CustomDomains"].GetString());
        m_customDomainsHasBeenSet = true;
    }

    if (value.HasMember("CustomIPs") && !value["CustomIPs"].IsNull())
    {
        if (!value["CustomIPs"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EtcdAdvancedSettings.CustomIPs` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customIPs = string(value["CustomIPs"].GetString());
        m_customIPsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EtcdAdvancedSettings::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_securitySettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecuritySettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_securitySettings.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_autoCompactionSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoCompactionSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_autoCompactionSettings.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_monitorSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_monitorSettings.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_backupSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_backupSettings.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_customDomainsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomDomains";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customDomains.c_str(), allocator).Move(), allocator);
    }

    if (m_customIPsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomIPs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customIPs.c_str(), allocator).Move(), allocator);
    }

}


EtcdSecuritySettings EtcdAdvancedSettings::GetSecuritySettings() const
{
    return m_securitySettings;
}

void EtcdAdvancedSettings::SetSecuritySettings(const EtcdSecuritySettings& _securitySettings)
{
    m_securitySettings = _securitySettings;
    m_securitySettingsHasBeenSet = true;
}

bool EtcdAdvancedSettings::SecuritySettingsHasBeenSet() const
{
    return m_securitySettingsHasBeenSet;
}

EtcdAutoCompactionSettings EtcdAdvancedSettings::GetAutoCompactionSettings() const
{
    return m_autoCompactionSettings;
}

void EtcdAdvancedSettings::SetAutoCompactionSettings(const EtcdAutoCompactionSettings& _autoCompactionSettings)
{
    m_autoCompactionSettings = _autoCompactionSettings;
    m_autoCompactionSettingsHasBeenSet = true;
}

bool EtcdAdvancedSettings::AutoCompactionSettingsHasBeenSet() const
{
    return m_autoCompactionSettingsHasBeenSet;
}

EtcdMonitorSettings EtcdAdvancedSettings::GetMonitorSettings() const
{
    return m_monitorSettings;
}

void EtcdAdvancedSettings::SetMonitorSettings(const EtcdMonitorSettings& _monitorSettings)
{
    m_monitorSettings = _monitorSettings;
    m_monitorSettingsHasBeenSet = true;
}

bool EtcdAdvancedSettings::MonitorSettingsHasBeenSet() const
{
    return m_monitorSettingsHasBeenSet;
}

EtcdBackupSettings EtcdAdvancedSettings::GetBackupSettings() const
{
    return m_backupSettings;
}

void EtcdAdvancedSettings::SetBackupSettings(const EtcdBackupSettings& _backupSettings)
{
    m_backupSettings = _backupSettings;
    m_backupSettingsHasBeenSet = true;
}

bool EtcdAdvancedSettings::BackupSettingsHasBeenSet() const
{
    return m_backupSettingsHasBeenSet;
}

string EtcdAdvancedSettings::GetCustomDomains() const
{
    return m_customDomains;
}

void EtcdAdvancedSettings::SetCustomDomains(const string& _customDomains)
{
    m_customDomains = _customDomains;
    m_customDomainsHasBeenSet = true;
}

bool EtcdAdvancedSettings::CustomDomainsHasBeenSet() const
{
    return m_customDomainsHasBeenSet;
}

string EtcdAdvancedSettings::GetCustomIPs() const
{
    return m_customIPs;
}

void EtcdAdvancedSettings::SetCustomIPs(const string& _customIPs)
{
    m_customIPs = _customIPs;
    m_customIPsHasBeenSet = true;
}

bool EtcdAdvancedSettings::CustomIPsHasBeenSet() const
{
    return m_customIPsHasBeenSet;
}

