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

#include <tencentcloud/bh/v20230418/model/LDAPSetting.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bh::V20230418::Model;
using namespace std;

LDAPSetting::LDAPSetting() :
    m_enableHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_ipBackupHasBeenSet(false),
    m_portHasBeenSet(false),
    m_enableSSLHasBeenSet(false),
    m_baseDNHasBeenSet(false),
    m_adminAccountHasBeenSet(false),
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
    m_resourceIdHasBeenSet(false),
    m_domainIdHasBeenSet(false)
{
}

CoreInternalOutcome LDAPSetting::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Enable") && !value["Enable"].IsNull())
    {
        if (!value["Enable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LDAPSetting.Enable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enable = value["Enable"].GetBool();
        m_enableHasBeenSet = true;
    }

    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LDAPSetting.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("IpBackup") && !value["IpBackup"].IsNull())
    {
        if (!value["IpBackup"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LDAPSetting.IpBackup` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ipBackup = string(value["IpBackup"].GetString());
        m_ipBackupHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LDAPSetting.Port` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetUint64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("EnableSSL") && !value["EnableSSL"].IsNull())
    {
        if (!value["EnableSSL"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LDAPSetting.EnableSSL` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableSSL = value["EnableSSL"].GetBool();
        m_enableSSLHasBeenSet = true;
    }

    if (value.HasMember("BaseDN") && !value["BaseDN"].IsNull())
    {
        if (!value["BaseDN"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LDAPSetting.BaseDN` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_baseDN = string(value["BaseDN"].GetString());
        m_baseDNHasBeenSet = true;
    }

    if (value.HasMember("AdminAccount") && !value["AdminAccount"].IsNull())
    {
        if (!value["AdminAccount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LDAPSetting.AdminAccount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_adminAccount = string(value["AdminAccount"].GetString());
        m_adminAccountHasBeenSet = true;
    }

    if (value.HasMember("AttributeUser") && !value["AttributeUser"].IsNull())
    {
        if (!value["AttributeUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LDAPSetting.AttributeUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attributeUser = string(value["AttributeUser"].GetString());
        m_attributeUserHasBeenSet = true;
    }

    if (value.HasMember("AttributeUserName") && !value["AttributeUserName"].IsNull())
    {
        if (!value["AttributeUserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LDAPSetting.AttributeUserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attributeUserName = string(value["AttributeUserName"].GetString());
        m_attributeUserNameHasBeenSet = true;
    }

    if (value.HasMember("AutoSync") && !value["AutoSync"].IsNull())
    {
        if (!value["AutoSync"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LDAPSetting.AutoSync` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_autoSync = value["AutoSync"].GetBool();
        m_autoSyncHasBeenSet = true;
    }

    if (value.HasMember("Overwrite") && !value["Overwrite"].IsNull())
    {
        if (!value["Overwrite"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LDAPSetting.Overwrite` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_overwrite = value["Overwrite"].GetBool();
        m_overwriteHasBeenSet = true;
    }

    if (value.HasMember("SyncPeriod") && !value["SyncPeriod"].IsNull())
    {
        if (!value["SyncPeriod"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LDAPSetting.SyncPeriod` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_syncPeriod = value["SyncPeriod"].GetUint64();
        m_syncPeriodHasBeenSet = true;
    }

    if (value.HasMember("SyncAll") && !value["SyncAll"].IsNull())
    {
        if (!value["SyncAll"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LDAPSetting.SyncAll` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_syncAll = value["SyncAll"].GetBool();
        m_syncAllHasBeenSet = true;
    }

    if (value.HasMember("SyncUnitSet") && !value["SyncUnitSet"].IsNull())
    {
        if (!value["SyncUnitSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LDAPSetting.SyncUnitSet` is not array type"));

        const rapidjson::Value &tmpValue = value["SyncUnitSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_syncUnitSet.push_back((*itr).GetString());
        }
        m_syncUnitSetHasBeenSet = true;
    }

    if (value.HasMember("AttributeUnit") && !value["AttributeUnit"].IsNull())
    {
        if (!value["AttributeUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LDAPSetting.AttributeUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attributeUnit = string(value["AttributeUnit"].GetString());
        m_attributeUnitHasBeenSet = true;
    }

    if (value.HasMember("AttributeRealName") && !value["AttributeRealName"].IsNull())
    {
        if (!value["AttributeRealName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LDAPSetting.AttributeRealName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attributeRealName = string(value["AttributeRealName"].GetString());
        m_attributeRealNameHasBeenSet = true;
    }

    if (value.HasMember("AttributePhone") && !value["AttributePhone"].IsNull())
    {
        if (!value["AttributePhone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LDAPSetting.AttributePhone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attributePhone = string(value["AttributePhone"].GetString());
        m_attributePhoneHasBeenSet = true;
    }

    if (value.HasMember("AttributeEmail") && !value["AttributeEmail"].IsNull())
    {
        if (!value["AttributeEmail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LDAPSetting.AttributeEmail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attributeEmail = string(value["AttributeEmail"].GetString());
        m_attributeEmailHasBeenSet = true;
    }

    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LDAPSetting.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("DomainId") && !value["DomainId"].IsNull())
    {
        if (!value["DomainId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LDAPSetting.DomainId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domainId = string(value["DomainId"].GetString());
        m_domainIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LDAPSetting::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enable, allocator);
    }

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_ipBackupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpBackup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ipBackup.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_port, allocator);
    }

    if (m_enableSSLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableSSL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableSSL, allocator);
    }

    if (m_baseDNHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaseDN";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_baseDN.c_str(), allocator).Move(), allocator);
    }

    if (m_adminAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdminAccount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_adminAccount.c_str(), allocator).Move(), allocator);
    }

    if (m_attributeUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttributeUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attributeUser.c_str(), allocator).Move(), allocator);
    }

    if (m_attributeUserNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttributeUserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attributeUserName.c_str(), allocator).Move(), allocator);
    }

    if (m_autoSyncHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoSync";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoSync, allocator);
    }

    if (m_overwriteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Overwrite";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_overwrite, allocator);
    }

    if (m_syncPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SyncPeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_syncPeriod, allocator);
    }

    if (m_syncAllHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SyncAll";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_syncAll, allocator);
    }

    if (m_syncUnitSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SyncUnitSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_syncUnitSet.begin(); itr != m_syncUnitSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_attributeUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttributeUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attributeUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_attributeRealNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttributeRealName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attributeRealName.c_str(), allocator).Move(), allocator);
    }

    if (m_attributePhoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttributePhone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attributePhone.c_str(), allocator).Move(), allocator);
    }

    if (m_attributeEmailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttributeEmail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attributeEmail.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_domainIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domainId.c_str(), allocator).Move(), allocator);
    }

}


bool LDAPSetting::GetEnable() const
{
    return m_enable;
}

void LDAPSetting::SetEnable(const bool& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool LDAPSetting::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

string LDAPSetting::GetIp() const
{
    return m_ip;
}

void LDAPSetting::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool LDAPSetting::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

string LDAPSetting::GetIpBackup() const
{
    return m_ipBackup;
}

void LDAPSetting::SetIpBackup(const string& _ipBackup)
{
    m_ipBackup = _ipBackup;
    m_ipBackupHasBeenSet = true;
}

bool LDAPSetting::IpBackupHasBeenSet() const
{
    return m_ipBackupHasBeenSet;
}

uint64_t LDAPSetting::GetPort() const
{
    return m_port;
}

void LDAPSetting::SetPort(const uint64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool LDAPSetting::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

bool LDAPSetting::GetEnableSSL() const
{
    return m_enableSSL;
}

void LDAPSetting::SetEnableSSL(const bool& _enableSSL)
{
    m_enableSSL = _enableSSL;
    m_enableSSLHasBeenSet = true;
}

bool LDAPSetting::EnableSSLHasBeenSet() const
{
    return m_enableSSLHasBeenSet;
}

string LDAPSetting::GetBaseDN() const
{
    return m_baseDN;
}

void LDAPSetting::SetBaseDN(const string& _baseDN)
{
    m_baseDN = _baseDN;
    m_baseDNHasBeenSet = true;
}

bool LDAPSetting::BaseDNHasBeenSet() const
{
    return m_baseDNHasBeenSet;
}

string LDAPSetting::GetAdminAccount() const
{
    return m_adminAccount;
}

void LDAPSetting::SetAdminAccount(const string& _adminAccount)
{
    m_adminAccount = _adminAccount;
    m_adminAccountHasBeenSet = true;
}

bool LDAPSetting::AdminAccountHasBeenSet() const
{
    return m_adminAccountHasBeenSet;
}

string LDAPSetting::GetAttributeUser() const
{
    return m_attributeUser;
}

void LDAPSetting::SetAttributeUser(const string& _attributeUser)
{
    m_attributeUser = _attributeUser;
    m_attributeUserHasBeenSet = true;
}

bool LDAPSetting::AttributeUserHasBeenSet() const
{
    return m_attributeUserHasBeenSet;
}

string LDAPSetting::GetAttributeUserName() const
{
    return m_attributeUserName;
}

void LDAPSetting::SetAttributeUserName(const string& _attributeUserName)
{
    m_attributeUserName = _attributeUserName;
    m_attributeUserNameHasBeenSet = true;
}

bool LDAPSetting::AttributeUserNameHasBeenSet() const
{
    return m_attributeUserNameHasBeenSet;
}

bool LDAPSetting::GetAutoSync() const
{
    return m_autoSync;
}

void LDAPSetting::SetAutoSync(const bool& _autoSync)
{
    m_autoSync = _autoSync;
    m_autoSyncHasBeenSet = true;
}

bool LDAPSetting::AutoSyncHasBeenSet() const
{
    return m_autoSyncHasBeenSet;
}

bool LDAPSetting::GetOverwrite() const
{
    return m_overwrite;
}

void LDAPSetting::SetOverwrite(const bool& _overwrite)
{
    m_overwrite = _overwrite;
    m_overwriteHasBeenSet = true;
}

bool LDAPSetting::OverwriteHasBeenSet() const
{
    return m_overwriteHasBeenSet;
}

uint64_t LDAPSetting::GetSyncPeriod() const
{
    return m_syncPeriod;
}

void LDAPSetting::SetSyncPeriod(const uint64_t& _syncPeriod)
{
    m_syncPeriod = _syncPeriod;
    m_syncPeriodHasBeenSet = true;
}

bool LDAPSetting::SyncPeriodHasBeenSet() const
{
    return m_syncPeriodHasBeenSet;
}

bool LDAPSetting::GetSyncAll() const
{
    return m_syncAll;
}

void LDAPSetting::SetSyncAll(const bool& _syncAll)
{
    m_syncAll = _syncAll;
    m_syncAllHasBeenSet = true;
}

bool LDAPSetting::SyncAllHasBeenSet() const
{
    return m_syncAllHasBeenSet;
}

vector<string> LDAPSetting::GetSyncUnitSet() const
{
    return m_syncUnitSet;
}

void LDAPSetting::SetSyncUnitSet(const vector<string>& _syncUnitSet)
{
    m_syncUnitSet = _syncUnitSet;
    m_syncUnitSetHasBeenSet = true;
}

bool LDAPSetting::SyncUnitSetHasBeenSet() const
{
    return m_syncUnitSetHasBeenSet;
}

string LDAPSetting::GetAttributeUnit() const
{
    return m_attributeUnit;
}

void LDAPSetting::SetAttributeUnit(const string& _attributeUnit)
{
    m_attributeUnit = _attributeUnit;
    m_attributeUnitHasBeenSet = true;
}

bool LDAPSetting::AttributeUnitHasBeenSet() const
{
    return m_attributeUnitHasBeenSet;
}

string LDAPSetting::GetAttributeRealName() const
{
    return m_attributeRealName;
}

void LDAPSetting::SetAttributeRealName(const string& _attributeRealName)
{
    m_attributeRealName = _attributeRealName;
    m_attributeRealNameHasBeenSet = true;
}

bool LDAPSetting::AttributeRealNameHasBeenSet() const
{
    return m_attributeRealNameHasBeenSet;
}

string LDAPSetting::GetAttributePhone() const
{
    return m_attributePhone;
}

void LDAPSetting::SetAttributePhone(const string& _attributePhone)
{
    m_attributePhone = _attributePhone;
    m_attributePhoneHasBeenSet = true;
}

bool LDAPSetting::AttributePhoneHasBeenSet() const
{
    return m_attributePhoneHasBeenSet;
}

string LDAPSetting::GetAttributeEmail() const
{
    return m_attributeEmail;
}

void LDAPSetting::SetAttributeEmail(const string& _attributeEmail)
{
    m_attributeEmail = _attributeEmail;
    m_attributeEmailHasBeenSet = true;
}

bool LDAPSetting::AttributeEmailHasBeenSet() const
{
    return m_attributeEmailHasBeenSet;
}

string LDAPSetting::GetResourceId() const
{
    return m_resourceId;
}

void LDAPSetting::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool LDAPSetting::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string LDAPSetting::GetDomainId() const
{
    return m_domainId;
}

void LDAPSetting::SetDomainId(const string& _domainId)
{
    m_domainId = _domainId;
    m_domainIdHasBeenSet = true;
}

bool LDAPSetting::DomainIdHasBeenSet() const
{
    return m_domainIdHasBeenSet;
}

