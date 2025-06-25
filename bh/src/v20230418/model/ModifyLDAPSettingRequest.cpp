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

#include <tencentcloud/bh/v20230418/model/ModifyLDAPSettingRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bh::V20230418::Model;
using namespace std;

ModifyLDAPSettingRequest::ModifyLDAPSettingRequest() :
    m_enableHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_ipBackupHasBeenSet(false),
    m_portHasBeenSet(false),
    m_enableSSLHasBeenSet(false),
    m_baseDNHasBeenSet(false),
    m_adminAccountHasBeenSet(false),
    m_adminPasswordHasBeenSet(false),
    m_attributeUserHasBeenSet(false),
    m_attributeUserNameHasBeenSet(false),
    m_autoSyncHasBeenSet(false),
    m_overwriteHasBeenSet(false),
    m_syncPeriodHasBeenSet(false),
    m_syncAllHasBeenSet(false),
    m_syncUnitSetHasBeenSet(false),
    m_attributeUnitHasBeenSet(false),
    m_attributeRealNameHasBeenSet(false),
    m_attributePhoneHasBeenSet(false),
    m_attributeEmailHasBeenSet(false),
    m_domainIdHasBeenSet(false)
{
}

string ModifyLDAPSettingRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enable, allocator);
    }

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_ipBackupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpBackup";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ipBackup.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_port, allocator);
    }

    if (m_enableSSLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableSSL";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableSSL, allocator);
    }

    if (m_baseDNHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaseDN";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_baseDN.c_str(), allocator).Move(), allocator);
    }

    if (m_adminAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdminAccount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_adminAccount.c_str(), allocator).Move(), allocator);
    }

    if (m_adminPasswordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdminPassword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_adminPassword.c_str(), allocator).Move(), allocator);
    }

    if (m_attributeUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttributeUser";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_attributeUser.c_str(), allocator).Move(), allocator);
    }

    if (m_attributeUserNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttributeUserName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_attributeUserName.c_str(), allocator).Move(), allocator);
    }

    if (m_autoSyncHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoSync";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoSync, allocator);
    }

    if (m_overwriteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Overwrite";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_overwrite, allocator);
    }

    if (m_syncPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SyncPeriod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_syncPeriod, allocator);
    }

    if (m_syncAllHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SyncAll";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_syncAll, allocator);
    }

    if (m_syncUnitSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SyncUnitSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_syncUnitSet.begin(); itr != m_syncUnitSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_attributeUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttributeUnit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_attributeUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_attributeRealNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttributeRealName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_attributeRealName.c_str(), allocator).Move(), allocator);
    }

    if (m_attributePhoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttributePhone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_attributePhone.c_str(), allocator).Move(), allocator);
    }

    if (m_attributeEmailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttributeEmail";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_attributeEmail.c_str(), allocator).Move(), allocator);
    }

    if (m_domainIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domainId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


bool ModifyLDAPSettingRequest::GetEnable() const
{
    return m_enable;
}

void ModifyLDAPSettingRequest::SetEnable(const bool& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool ModifyLDAPSettingRequest::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

string ModifyLDAPSettingRequest::GetIp() const
{
    return m_ip;
}

void ModifyLDAPSettingRequest::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool ModifyLDAPSettingRequest::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

string ModifyLDAPSettingRequest::GetIpBackup() const
{
    return m_ipBackup;
}

void ModifyLDAPSettingRequest::SetIpBackup(const string& _ipBackup)
{
    m_ipBackup = _ipBackup;
    m_ipBackupHasBeenSet = true;
}

bool ModifyLDAPSettingRequest::IpBackupHasBeenSet() const
{
    return m_ipBackupHasBeenSet;
}

uint64_t ModifyLDAPSettingRequest::GetPort() const
{
    return m_port;
}

void ModifyLDAPSettingRequest::SetPort(const uint64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool ModifyLDAPSettingRequest::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

bool ModifyLDAPSettingRequest::GetEnableSSL() const
{
    return m_enableSSL;
}

void ModifyLDAPSettingRequest::SetEnableSSL(const bool& _enableSSL)
{
    m_enableSSL = _enableSSL;
    m_enableSSLHasBeenSet = true;
}

bool ModifyLDAPSettingRequest::EnableSSLHasBeenSet() const
{
    return m_enableSSLHasBeenSet;
}

string ModifyLDAPSettingRequest::GetBaseDN() const
{
    return m_baseDN;
}

void ModifyLDAPSettingRequest::SetBaseDN(const string& _baseDN)
{
    m_baseDN = _baseDN;
    m_baseDNHasBeenSet = true;
}

bool ModifyLDAPSettingRequest::BaseDNHasBeenSet() const
{
    return m_baseDNHasBeenSet;
}

string ModifyLDAPSettingRequest::GetAdminAccount() const
{
    return m_adminAccount;
}

void ModifyLDAPSettingRequest::SetAdminAccount(const string& _adminAccount)
{
    m_adminAccount = _adminAccount;
    m_adminAccountHasBeenSet = true;
}

bool ModifyLDAPSettingRequest::AdminAccountHasBeenSet() const
{
    return m_adminAccountHasBeenSet;
}

string ModifyLDAPSettingRequest::GetAdminPassword() const
{
    return m_adminPassword;
}

void ModifyLDAPSettingRequest::SetAdminPassword(const string& _adminPassword)
{
    m_adminPassword = _adminPassword;
    m_adminPasswordHasBeenSet = true;
}

bool ModifyLDAPSettingRequest::AdminPasswordHasBeenSet() const
{
    return m_adminPasswordHasBeenSet;
}

string ModifyLDAPSettingRequest::GetAttributeUser() const
{
    return m_attributeUser;
}

void ModifyLDAPSettingRequest::SetAttributeUser(const string& _attributeUser)
{
    m_attributeUser = _attributeUser;
    m_attributeUserHasBeenSet = true;
}

bool ModifyLDAPSettingRequest::AttributeUserHasBeenSet() const
{
    return m_attributeUserHasBeenSet;
}

string ModifyLDAPSettingRequest::GetAttributeUserName() const
{
    return m_attributeUserName;
}

void ModifyLDAPSettingRequest::SetAttributeUserName(const string& _attributeUserName)
{
    m_attributeUserName = _attributeUserName;
    m_attributeUserNameHasBeenSet = true;
}

bool ModifyLDAPSettingRequest::AttributeUserNameHasBeenSet() const
{
    return m_attributeUserNameHasBeenSet;
}

bool ModifyLDAPSettingRequest::GetAutoSync() const
{
    return m_autoSync;
}

void ModifyLDAPSettingRequest::SetAutoSync(const bool& _autoSync)
{
    m_autoSync = _autoSync;
    m_autoSyncHasBeenSet = true;
}

bool ModifyLDAPSettingRequest::AutoSyncHasBeenSet() const
{
    return m_autoSyncHasBeenSet;
}

bool ModifyLDAPSettingRequest::GetOverwrite() const
{
    return m_overwrite;
}

void ModifyLDAPSettingRequest::SetOverwrite(const bool& _overwrite)
{
    m_overwrite = _overwrite;
    m_overwriteHasBeenSet = true;
}

bool ModifyLDAPSettingRequest::OverwriteHasBeenSet() const
{
    return m_overwriteHasBeenSet;
}

uint64_t ModifyLDAPSettingRequest::GetSyncPeriod() const
{
    return m_syncPeriod;
}

void ModifyLDAPSettingRequest::SetSyncPeriod(const uint64_t& _syncPeriod)
{
    m_syncPeriod = _syncPeriod;
    m_syncPeriodHasBeenSet = true;
}

bool ModifyLDAPSettingRequest::SyncPeriodHasBeenSet() const
{
    return m_syncPeriodHasBeenSet;
}

bool ModifyLDAPSettingRequest::GetSyncAll() const
{
    return m_syncAll;
}

void ModifyLDAPSettingRequest::SetSyncAll(const bool& _syncAll)
{
    m_syncAll = _syncAll;
    m_syncAllHasBeenSet = true;
}

bool ModifyLDAPSettingRequest::SyncAllHasBeenSet() const
{
    return m_syncAllHasBeenSet;
}

vector<string> ModifyLDAPSettingRequest::GetSyncUnitSet() const
{
    return m_syncUnitSet;
}

void ModifyLDAPSettingRequest::SetSyncUnitSet(const vector<string>& _syncUnitSet)
{
    m_syncUnitSet = _syncUnitSet;
    m_syncUnitSetHasBeenSet = true;
}

bool ModifyLDAPSettingRequest::SyncUnitSetHasBeenSet() const
{
    return m_syncUnitSetHasBeenSet;
}

string ModifyLDAPSettingRequest::GetAttributeUnit() const
{
    return m_attributeUnit;
}

void ModifyLDAPSettingRequest::SetAttributeUnit(const string& _attributeUnit)
{
    m_attributeUnit = _attributeUnit;
    m_attributeUnitHasBeenSet = true;
}

bool ModifyLDAPSettingRequest::AttributeUnitHasBeenSet() const
{
    return m_attributeUnitHasBeenSet;
}

string ModifyLDAPSettingRequest::GetAttributeRealName() const
{
    return m_attributeRealName;
}

void ModifyLDAPSettingRequest::SetAttributeRealName(const string& _attributeRealName)
{
    m_attributeRealName = _attributeRealName;
    m_attributeRealNameHasBeenSet = true;
}

bool ModifyLDAPSettingRequest::AttributeRealNameHasBeenSet() const
{
    return m_attributeRealNameHasBeenSet;
}

string ModifyLDAPSettingRequest::GetAttributePhone() const
{
    return m_attributePhone;
}

void ModifyLDAPSettingRequest::SetAttributePhone(const string& _attributePhone)
{
    m_attributePhone = _attributePhone;
    m_attributePhoneHasBeenSet = true;
}

bool ModifyLDAPSettingRequest::AttributePhoneHasBeenSet() const
{
    return m_attributePhoneHasBeenSet;
}

string ModifyLDAPSettingRequest::GetAttributeEmail() const
{
    return m_attributeEmail;
}

void ModifyLDAPSettingRequest::SetAttributeEmail(const string& _attributeEmail)
{
    m_attributeEmail = _attributeEmail;
    m_attributeEmailHasBeenSet = true;
}

bool ModifyLDAPSettingRequest::AttributeEmailHasBeenSet() const
{
    return m_attributeEmailHasBeenSet;
}

string ModifyLDAPSettingRequest::GetDomainId() const
{
    return m_domainId;
}

void ModifyLDAPSettingRequest::SetDomainId(const string& _domainId)
{
    m_domainId = _domainId;
    m_domainIdHasBeenSet = true;
}

bool ModifyLDAPSettingRequest::DomainIdHasBeenSet() const
{
    return m_domainIdHasBeenSet;
}


