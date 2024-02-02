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

#include <tencentcloud/ssl/v20191205/model/ApplyCertificateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ssl::V20191205::Model;
using namespace std;

ApplyCertificateRequest::ApplyCertificateRequest() :
    m_dvAuthMethodHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_packageTypeHasBeenSet(false),
    m_contactEmailHasBeenSet(false),
    m_contactPhoneHasBeenSet(false),
    m_validityPeriodHasBeenSet(false),
    m_csrEncryptAlgoHasBeenSet(false),
    m_csrKeyParameterHasBeenSet(false),
    m_csrKeyPasswordHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_oldCertificateIdHasBeenSet(false),
    m_packageIdHasBeenSet(false),
    m_deleteDnsAutoRecordHasBeenSet(false),
    m_dnsNamesHasBeenSet(false)
{
}

string ApplyCertificateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dvAuthMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DvAuthMethod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dvAuthMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_domainNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domainName.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
    }

    if (m_packageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_packageType.c_str(), allocator).Move(), allocator);
    }

    if (m_contactEmailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContactEmail";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_contactEmail.c_str(), allocator).Move(), allocator);
    }

    if (m_contactPhoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContactPhone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_contactPhone.c_str(), allocator).Move(), allocator);
    }

    if (m_validityPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidityPeriod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_validityPeriod.c_str(), allocator).Move(), allocator);
    }

    if (m_csrEncryptAlgoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CsrEncryptAlgo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_csrEncryptAlgo.c_str(), allocator).Move(), allocator);
    }

    if (m_csrKeyParameterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CsrKeyParameter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_csrKeyParameter.c_str(), allocator).Move(), allocator);
    }

    if (m_csrKeyPasswordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CsrKeyPassword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_csrKeyPassword.c_str(), allocator).Move(), allocator);
    }

    if (m_aliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Alias";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_alias.c_str(), allocator).Move(), allocator);
    }

    if (m_oldCertificateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldCertificateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_oldCertificateId.c_str(), allocator).Move(), allocator);
    }

    if (m_packageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_packageId.c_str(), allocator).Move(), allocator);
    }

    if (m_deleteDnsAutoRecordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteDnsAutoRecord";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deleteDnsAutoRecord, allocator);
    }

    if (m_dnsNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DnsNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dnsNames.begin(); itr != m_dnsNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ApplyCertificateRequest::GetDvAuthMethod() const
{
    return m_dvAuthMethod;
}

void ApplyCertificateRequest::SetDvAuthMethod(const string& _dvAuthMethod)
{
    m_dvAuthMethod = _dvAuthMethod;
    m_dvAuthMethodHasBeenSet = true;
}

bool ApplyCertificateRequest::DvAuthMethodHasBeenSet() const
{
    return m_dvAuthMethodHasBeenSet;
}

string ApplyCertificateRequest::GetDomainName() const
{
    return m_domainName;
}

void ApplyCertificateRequest::SetDomainName(const string& _domainName)
{
    m_domainName = _domainName;
    m_domainNameHasBeenSet = true;
}

bool ApplyCertificateRequest::DomainNameHasBeenSet() const
{
    return m_domainNameHasBeenSet;
}

uint64_t ApplyCertificateRequest::GetProjectId() const
{
    return m_projectId;
}

void ApplyCertificateRequest::SetProjectId(const uint64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ApplyCertificateRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string ApplyCertificateRequest::GetPackageType() const
{
    return m_packageType;
}

void ApplyCertificateRequest::SetPackageType(const string& _packageType)
{
    m_packageType = _packageType;
    m_packageTypeHasBeenSet = true;
}

bool ApplyCertificateRequest::PackageTypeHasBeenSet() const
{
    return m_packageTypeHasBeenSet;
}

string ApplyCertificateRequest::GetContactEmail() const
{
    return m_contactEmail;
}

void ApplyCertificateRequest::SetContactEmail(const string& _contactEmail)
{
    m_contactEmail = _contactEmail;
    m_contactEmailHasBeenSet = true;
}

bool ApplyCertificateRequest::ContactEmailHasBeenSet() const
{
    return m_contactEmailHasBeenSet;
}

string ApplyCertificateRequest::GetContactPhone() const
{
    return m_contactPhone;
}

void ApplyCertificateRequest::SetContactPhone(const string& _contactPhone)
{
    m_contactPhone = _contactPhone;
    m_contactPhoneHasBeenSet = true;
}

bool ApplyCertificateRequest::ContactPhoneHasBeenSet() const
{
    return m_contactPhoneHasBeenSet;
}

string ApplyCertificateRequest::GetValidityPeriod() const
{
    return m_validityPeriod;
}

void ApplyCertificateRequest::SetValidityPeriod(const string& _validityPeriod)
{
    m_validityPeriod = _validityPeriod;
    m_validityPeriodHasBeenSet = true;
}

bool ApplyCertificateRequest::ValidityPeriodHasBeenSet() const
{
    return m_validityPeriodHasBeenSet;
}

string ApplyCertificateRequest::GetCsrEncryptAlgo() const
{
    return m_csrEncryptAlgo;
}

void ApplyCertificateRequest::SetCsrEncryptAlgo(const string& _csrEncryptAlgo)
{
    m_csrEncryptAlgo = _csrEncryptAlgo;
    m_csrEncryptAlgoHasBeenSet = true;
}

bool ApplyCertificateRequest::CsrEncryptAlgoHasBeenSet() const
{
    return m_csrEncryptAlgoHasBeenSet;
}

string ApplyCertificateRequest::GetCsrKeyParameter() const
{
    return m_csrKeyParameter;
}

void ApplyCertificateRequest::SetCsrKeyParameter(const string& _csrKeyParameter)
{
    m_csrKeyParameter = _csrKeyParameter;
    m_csrKeyParameterHasBeenSet = true;
}

bool ApplyCertificateRequest::CsrKeyParameterHasBeenSet() const
{
    return m_csrKeyParameterHasBeenSet;
}

string ApplyCertificateRequest::GetCsrKeyPassword() const
{
    return m_csrKeyPassword;
}

void ApplyCertificateRequest::SetCsrKeyPassword(const string& _csrKeyPassword)
{
    m_csrKeyPassword = _csrKeyPassword;
    m_csrKeyPasswordHasBeenSet = true;
}

bool ApplyCertificateRequest::CsrKeyPasswordHasBeenSet() const
{
    return m_csrKeyPasswordHasBeenSet;
}

string ApplyCertificateRequest::GetAlias() const
{
    return m_alias;
}

void ApplyCertificateRequest::SetAlias(const string& _alias)
{
    m_alias = _alias;
    m_aliasHasBeenSet = true;
}

bool ApplyCertificateRequest::AliasHasBeenSet() const
{
    return m_aliasHasBeenSet;
}

string ApplyCertificateRequest::GetOldCertificateId() const
{
    return m_oldCertificateId;
}

void ApplyCertificateRequest::SetOldCertificateId(const string& _oldCertificateId)
{
    m_oldCertificateId = _oldCertificateId;
    m_oldCertificateIdHasBeenSet = true;
}

bool ApplyCertificateRequest::OldCertificateIdHasBeenSet() const
{
    return m_oldCertificateIdHasBeenSet;
}

string ApplyCertificateRequest::GetPackageId() const
{
    return m_packageId;
}

void ApplyCertificateRequest::SetPackageId(const string& _packageId)
{
    m_packageId = _packageId;
    m_packageIdHasBeenSet = true;
}

bool ApplyCertificateRequest::PackageIdHasBeenSet() const
{
    return m_packageIdHasBeenSet;
}

bool ApplyCertificateRequest::GetDeleteDnsAutoRecord() const
{
    return m_deleteDnsAutoRecord;
}

void ApplyCertificateRequest::SetDeleteDnsAutoRecord(const bool& _deleteDnsAutoRecord)
{
    m_deleteDnsAutoRecord = _deleteDnsAutoRecord;
    m_deleteDnsAutoRecordHasBeenSet = true;
}

bool ApplyCertificateRequest::DeleteDnsAutoRecordHasBeenSet() const
{
    return m_deleteDnsAutoRecordHasBeenSet;
}

vector<string> ApplyCertificateRequest::GetDnsNames() const
{
    return m_dnsNames;
}

void ApplyCertificateRequest::SetDnsNames(const vector<string>& _dnsNames)
{
    m_dnsNames = _dnsNames;
    m_dnsNamesHasBeenSet = true;
}

bool ApplyCertificateRequest::DnsNamesHasBeenSet() const
{
    return m_dnsNamesHasBeenSet;
}


