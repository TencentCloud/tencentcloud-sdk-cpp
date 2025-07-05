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

#include <tencentcloud/bh/v20230418/model/DescribeLDAPUnitSetRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bh::V20230418::Model;
using namespace std;

DescribeLDAPUnitSetRequest::DescribeLDAPUnitSetRequest() :
    m_enableHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_portHasBeenSet(false),
    m_enableSSLHasBeenSet(false),
    m_baseDNHasBeenSet(false),
    m_adminAccountHasBeenSet(false),
    m_adminPasswordHasBeenSet(false),
    m_attributeUserNameHasBeenSet(false),
    m_attributeUnitHasBeenSet(false),
    m_ipBackupHasBeenSet(false),
    m_domainIdHasBeenSet(false)
{
}

string DescribeLDAPUnitSetRequest::ToJsonString() const
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

    if (m_attributeUserNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttributeUserName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_attributeUserName.c_str(), allocator).Move(), allocator);
    }

    if (m_attributeUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttributeUnit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_attributeUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_ipBackupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpBackup";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ipBackup.c_str(), allocator).Move(), allocator);
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


bool DescribeLDAPUnitSetRequest::GetEnable() const
{
    return m_enable;
}

void DescribeLDAPUnitSetRequest::SetEnable(const bool& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool DescribeLDAPUnitSetRequest::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

string DescribeLDAPUnitSetRequest::GetIp() const
{
    return m_ip;
}

void DescribeLDAPUnitSetRequest::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool DescribeLDAPUnitSetRequest::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

uint64_t DescribeLDAPUnitSetRequest::GetPort() const
{
    return m_port;
}

void DescribeLDAPUnitSetRequest::SetPort(const uint64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool DescribeLDAPUnitSetRequest::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

bool DescribeLDAPUnitSetRequest::GetEnableSSL() const
{
    return m_enableSSL;
}

void DescribeLDAPUnitSetRequest::SetEnableSSL(const bool& _enableSSL)
{
    m_enableSSL = _enableSSL;
    m_enableSSLHasBeenSet = true;
}

bool DescribeLDAPUnitSetRequest::EnableSSLHasBeenSet() const
{
    return m_enableSSLHasBeenSet;
}

string DescribeLDAPUnitSetRequest::GetBaseDN() const
{
    return m_baseDN;
}

void DescribeLDAPUnitSetRequest::SetBaseDN(const string& _baseDN)
{
    m_baseDN = _baseDN;
    m_baseDNHasBeenSet = true;
}

bool DescribeLDAPUnitSetRequest::BaseDNHasBeenSet() const
{
    return m_baseDNHasBeenSet;
}

string DescribeLDAPUnitSetRequest::GetAdminAccount() const
{
    return m_adminAccount;
}

void DescribeLDAPUnitSetRequest::SetAdminAccount(const string& _adminAccount)
{
    m_adminAccount = _adminAccount;
    m_adminAccountHasBeenSet = true;
}

bool DescribeLDAPUnitSetRequest::AdminAccountHasBeenSet() const
{
    return m_adminAccountHasBeenSet;
}

string DescribeLDAPUnitSetRequest::GetAdminPassword() const
{
    return m_adminPassword;
}

void DescribeLDAPUnitSetRequest::SetAdminPassword(const string& _adminPassword)
{
    m_adminPassword = _adminPassword;
    m_adminPasswordHasBeenSet = true;
}

bool DescribeLDAPUnitSetRequest::AdminPasswordHasBeenSet() const
{
    return m_adminPasswordHasBeenSet;
}

string DescribeLDAPUnitSetRequest::GetAttributeUserName() const
{
    return m_attributeUserName;
}

void DescribeLDAPUnitSetRequest::SetAttributeUserName(const string& _attributeUserName)
{
    m_attributeUserName = _attributeUserName;
    m_attributeUserNameHasBeenSet = true;
}

bool DescribeLDAPUnitSetRequest::AttributeUserNameHasBeenSet() const
{
    return m_attributeUserNameHasBeenSet;
}

string DescribeLDAPUnitSetRequest::GetAttributeUnit() const
{
    return m_attributeUnit;
}

void DescribeLDAPUnitSetRequest::SetAttributeUnit(const string& _attributeUnit)
{
    m_attributeUnit = _attributeUnit;
    m_attributeUnitHasBeenSet = true;
}

bool DescribeLDAPUnitSetRequest::AttributeUnitHasBeenSet() const
{
    return m_attributeUnitHasBeenSet;
}

string DescribeLDAPUnitSetRequest::GetIpBackup() const
{
    return m_ipBackup;
}

void DescribeLDAPUnitSetRequest::SetIpBackup(const string& _ipBackup)
{
    m_ipBackup = _ipBackup;
    m_ipBackupHasBeenSet = true;
}

bool DescribeLDAPUnitSetRequest::IpBackupHasBeenSet() const
{
    return m_ipBackupHasBeenSet;
}

string DescribeLDAPUnitSetRequest::GetDomainId() const
{
    return m_domainId;
}

void DescribeLDAPUnitSetRequest::SetDomainId(const string& _domainId)
{
    m_domainId = _domainId;
    m_domainIdHasBeenSet = true;
}

bool DescribeLDAPUnitSetRequest::DomainIdHasBeenSet() const
{
    return m_domainIdHasBeenSet;
}


