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

#include <tencentcloud/ssl/v20191205/model/CertificateInfoSubmitRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ssl::V20191205::Model;
using namespace std;

CertificateInfoSubmitRequest::CertificateInfoSubmitRequest() :
    m_certIdHasBeenSet(false),
    m_genCsrTypeHasBeenSet(false),
    m_certCommonNameHasBeenSet(false),
    m_companyTypeHasBeenSet(false),
    m_companyIdHasBeenSet(false),
    m_orgIdTypeHasBeenSet(false),
    m_orgIdNumberHasBeenSet(false),
    m_adminIdTypeHasBeenSet(false),
    m_adminIdNumberHasBeenSet(false),
    m_techIdTypeHasBeenSet(false),
    m_techIdNumberHasBeenSet(false),
    m_csrHasBeenSet(false),
    m_dnsNamesHasBeenSet(false),
    m_keyPassHasBeenSet(false),
    m_orgOrganizationHasBeenSet(false),
    m_orgDivisionHasBeenSet(false),
    m_orgAddressHasBeenSet(false),
    m_orgCountryHasBeenSet(false),
    m_orgCityHasBeenSet(false),
    m_orgRegionHasBeenSet(false),
    m_orgPhoneAreaHasBeenSet(false),
    m_orgPhoneNumberHasBeenSet(false),
    m_verifyTypeHasBeenSet(false),
    m_adminFirstNameHasBeenSet(false),
    m_adminLastNameHasBeenSet(false),
    m_adminPhoneHasBeenSet(false),
    m_adminEmailHasBeenSet(false),
    m_adminTitleHasBeenSet(false),
    m_techFirstNameHasBeenSet(false),
    m_techLastNameHasBeenSet(false),
    m_contactEmailHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false),
    m_csrKeyParameterHasBeenSet(false),
    m_csrEncryptAlgoHasBeenSet(false),
    m_managerIdHasBeenSet(false),
    m_techPhoneHasBeenSet(false),
    m_techEmailHasBeenSet(false),
    m_techTitleHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_caTypeHasBeenSet(false)
{
}

string CertificateInfoSubmitRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_certIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_certId.c_str(), allocator).Move(), allocator);
    }

    if (m_genCsrTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GenCsrType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_genCsrType.c_str(), allocator).Move(), allocator);
    }

    if (m_certCommonNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertCommonName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_certCommonName.c_str(), allocator).Move(), allocator);
    }

    if (m_companyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompanyType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_companyType, allocator);
    }

    if (m_companyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompanyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_companyId.c_str(), allocator).Move(), allocator);
    }

    if (m_orgIdTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrgIdType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orgIdType.c_str(), allocator).Move(), allocator);
    }

    if (m_orgIdNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrgIdNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orgIdNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_adminIdTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdminIdType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_adminIdType.c_str(), allocator).Move(), allocator);
    }

    if (m_adminIdNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdminIdNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_adminIdNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_techIdTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TechIdType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_techIdType.c_str(), allocator).Move(), allocator);
    }

    if (m_techIdNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TechIdNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_techIdNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_csrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Csr";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_csr.c_str(), allocator).Move(), allocator);
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

    if (m_keyPassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyPass";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyPass.c_str(), allocator).Move(), allocator);
    }

    if (m_orgOrganizationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrgOrganization";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orgOrganization.c_str(), allocator).Move(), allocator);
    }

    if (m_orgDivisionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrgDivision";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orgDivision.c_str(), allocator).Move(), allocator);
    }

    if (m_orgAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrgAddress";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orgAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_orgCountryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrgCountry";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orgCountry.c_str(), allocator).Move(), allocator);
    }

    if (m_orgCityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrgCity";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orgCity.c_str(), allocator).Move(), allocator);
    }

    if (m_orgRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrgRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orgRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_orgPhoneAreaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrgPhoneArea";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orgPhoneArea.c_str(), allocator).Move(), allocator);
    }

    if (m_orgPhoneNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrgPhoneNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orgPhoneNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_verifyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifyType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_verifyType.c_str(), allocator).Move(), allocator);
    }

    if (m_adminFirstNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdminFirstName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_adminFirstName.c_str(), allocator).Move(), allocator);
    }

    if (m_adminLastNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdminLastName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_adminLastName.c_str(), allocator).Move(), allocator);
    }

    if (m_adminPhoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdminPhone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_adminPhone.c_str(), allocator).Move(), allocator);
    }

    if (m_adminEmailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdminEmail";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_adminEmail.c_str(), allocator).Move(), allocator);
    }

    if (m_adminTitleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdminTitle";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_adminTitle.c_str(), allocator).Move(), allocator);
    }

    if (m_techFirstNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TechFirstName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_techFirstName.c_str(), allocator).Move(), allocator);
    }

    if (m_techLastNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TechLastName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_techLastName.c_str(), allocator).Move(), allocator);
    }

    if (m_contactEmailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContactEmail";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_contactEmail.c_str(), allocator).Move(), allocator);
    }

    if (m_autoRenewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenewFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoRenewFlag, allocator);
    }

    if (m_csrKeyParameterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CsrKeyParameter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_csrKeyParameter.c_str(), allocator).Move(), allocator);
    }

    if (m_csrEncryptAlgoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CsrEncryptAlgo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_csrEncryptAlgo.c_str(), allocator).Move(), allocator);
    }

    if (m_managerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManagerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_managerId.c_str(), allocator).Move(), allocator);
    }

    if (m_techPhoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TechPhone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_techPhone.c_str(), allocator).Move(), allocator);
    }

    if (m_techEmailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TechEmail";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_techEmail.c_str(), allocator).Move(), allocator);
    }

    if (m_techTitleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TechTitle";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_techTitle.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_type, allocator);
    }

    if (m_caTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CaType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_caType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CertificateInfoSubmitRequest::GetCertId() const
{
    return m_certId;
}

void CertificateInfoSubmitRequest::SetCertId(const string& _certId)
{
    m_certId = _certId;
    m_certIdHasBeenSet = true;
}

bool CertificateInfoSubmitRequest::CertIdHasBeenSet() const
{
    return m_certIdHasBeenSet;
}

string CertificateInfoSubmitRequest::GetGenCsrType() const
{
    return m_genCsrType;
}

void CertificateInfoSubmitRequest::SetGenCsrType(const string& _genCsrType)
{
    m_genCsrType = _genCsrType;
    m_genCsrTypeHasBeenSet = true;
}

bool CertificateInfoSubmitRequest::GenCsrTypeHasBeenSet() const
{
    return m_genCsrTypeHasBeenSet;
}

string CertificateInfoSubmitRequest::GetCertCommonName() const
{
    return m_certCommonName;
}

void CertificateInfoSubmitRequest::SetCertCommonName(const string& _certCommonName)
{
    m_certCommonName = _certCommonName;
    m_certCommonNameHasBeenSet = true;
}

bool CertificateInfoSubmitRequest::CertCommonNameHasBeenSet() const
{
    return m_certCommonNameHasBeenSet;
}

uint64_t CertificateInfoSubmitRequest::GetCompanyType() const
{
    return m_companyType;
}

void CertificateInfoSubmitRequest::SetCompanyType(const uint64_t& _companyType)
{
    m_companyType = _companyType;
    m_companyTypeHasBeenSet = true;
}

bool CertificateInfoSubmitRequest::CompanyTypeHasBeenSet() const
{
    return m_companyTypeHasBeenSet;
}

string CertificateInfoSubmitRequest::GetCompanyId() const
{
    return m_companyId;
}

void CertificateInfoSubmitRequest::SetCompanyId(const string& _companyId)
{
    m_companyId = _companyId;
    m_companyIdHasBeenSet = true;
}

bool CertificateInfoSubmitRequest::CompanyIdHasBeenSet() const
{
    return m_companyIdHasBeenSet;
}

string CertificateInfoSubmitRequest::GetOrgIdType() const
{
    return m_orgIdType;
}

void CertificateInfoSubmitRequest::SetOrgIdType(const string& _orgIdType)
{
    m_orgIdType = _orgIdType;
    m_orgIdTypeHasBeenSet = true;
}

bool CertificateInfoSubmitRequest::OrgIdTypeHasBeenSet() const
{
    return m_orgIdTypeHasBeenSet;
}

string CertificateInfoSubmitRequest::GetOrgIdNumber() const
{
    return m_orgIdNumber;
}

void CertificateInfoSubmitRequest::SetOrgIdNumber(const string& _orgIdNumber)
{
    m_orgIdNumber = _orgIdNumber;
    m_orgIdNumberHasBeenSet = true;
}

bool CertificateInfoSubmitRequest::OrgIdNumberHasBeenSet() const
{
    return m_orgIdNumberHasBeenSet;
}

string CertificateInfoSubmitRequest::GetAdminIdType() const
{
    return m_adminIdType;
}

void CertificateInfoSubmitRequest::SetAdminIdType(const string& _adminIdType)
{
    m_adminIdType = _adminIdType;
    m_adminIdTypeHasBeenSet = true;
}

bool CertificateInfoSubmitRequest::AdminIdTypeHasBeenSet() const
{
    return m_adminIdTypeHasBeenSet;
}

string CertificateInfoSubmitRequest::GetAdminIdNumber() const
{
    return m_adminIdNumber;
}

void CertificateInfoSubmitRequest::SetAdminIdNumber(const string& _adminIdNumber)
{
    m_adminIdNumber = _adminIdNumber;
    m_adminIdNumberHasBeenSet = true;
}

bool CertificateInfoSubmitRequest::AdminIdNumberHasBeenSet() const
{
    return m_adminIdNumberHasBeenSet;
}

string CertificateInfoSubmitRequest::GetTechIdType() const
{
    return m_techIdType;
}

void CertificateInfoSubmitRequest::SetTechIdType(const string& _techIdType)
{
    m_techIdType = _techIdType;
    m_techIdTypeHasBeenSet = true;
}

bool CertificateInfoSubmitRequest::TechIdTypeHasBeenSet() const
{
    return m_techIdTypeHasBeenSet;
}

string CertificateInfoSubmitRequest::GetTechIdNumber() const
{
    return m_techIdNumber;
}

void CertificateInfoSubmitRequest::SetTechIdNumber(const string& _techIdNumber)
{
    m_techIdNumber = _techIdNumber;
    m_techIdNumberHasBeenSet = true;
}

bool CertificateInfoSubmitRequest::TechIdNumberHasBeenSet() const
{
    return m_techIdNumberHasBeenSet;
}

string CertificateInfoSubmitRequest::GetCsr() const
{
    return m_csr;
}

void CertificateInfoSubmitRequest::SetCsr(const string& _csr)
{
    m_csr = _csr;
    m_csrHasBeenSet = true;
}

bool CertificateInfoSubmitRequest::CsrHasBeenSet() const
{
    return m_csrHasBeenSet;
}

vector<string> CertificateInfoSubmitRequest::GetDnsNames() const
{
    return m_dnsNames;
}

void CertificateInfoSubmitRequest::SetDnsNames(const vector<string>& _dnsNames)
{
    m_dnsNames = _dnsNames;
    m_dnsNamesHasBeenSet = true;
}

bool CertificateInfoSubmitRequest::DnsNamesHasBeenSet() const
{
    return m_dnsNamesHasBeenSet;
}

string CertificateInfoSubmitRequest::GetKeyPass() const
{
    return m_keyPass;
}

void CertificateInfoSubmitRequest::SetKeyPass(const string& _keyPass)
{
    m_keyPass = _keyPass;
    m_keyPassHasBeenSet = true;
}

bool CertificateInfoSubmitRequest::KeyPassHasBeenSet() const
{
    return m_keyPassHasBeenSet;
}

string CertificateInfoSubmitRequest::GetOrgOrganization() const
{
    return m_orgOrganization;
}

void CertificateInfoSubmitRequest::SetOrgOrganization(const string& _orgOrganization)
{
    m_orgOrganization = _orgOrganization;
    m_orgOrganizationHasBeenSet = true;
}

bool CertificateInfoSubmitRequest::OrgOrganizationHasBeenSet() const
{
    return m_orgOrganizationHasBeenSet;
}

string CertificateInfoSubmitRequest::GetOrgDivision() const
{
    return m_orgDivision;
}

void CertificateInfoSubmitRequest::SetOrgDivision(const string& _orgDivision)
{
    m_orgDivision = _orgDivision;
    m_orgDivisionHasBeenSet = true;
}

bool CertificateInfoSubmitRequest::OrgDivisionHasBeenSet() const
{
    return m_orgDivisionHasBeenSet;
}

string CertificateInfoSubmitRequest::GetOrgAddress() const
{
    return m_orgAddress;
}

void CertificateInfoSubmitRequest::SetOrgAddress(const string& _orgAddress)
{
    m_orgAddress = _orgAddress;
    m_orgAddressHasBeenSet = true;
}

bool CertificateInfoSubmitRequest::OrgAddressHasBeenSet() const
{
    return m_orgAddressHasBeenSet;
}

string CertificateInfoSubmitRequest::GetOrgCountry() const
{
    return m_orgCountry;
}

void CertificateInfoSubmitRequest::SetOrgCountry(const string& _orgCountry)
{
    m_orgCountry = _orgCountry;
    m_orgCountryHasBeenSet = true;
}

bool CertificateInfoSubmitRequest::OrgCountryHasBeenSet() const
{
    return m_orgCountryHasBeenSet;
}

string CertificateInfoSubmitRequest::GetOrgCity() const
{
    return m_orgCity;
}

void CertificateInfoSubmitRequest::SetOrgCity(const string& _orgCity)
{
    m_orgCity = _orgCity;
    m_orgCityHasBeenSet = true;
}

bool CertificateInfoSubmitRequest::OrgCityHasBeenSet() const
{
    return m_orgCityHasBeenSet;
}

string CertificateInfoSubmitRequest::GetOrgRegion() const
{
    return m_orgRegion;
}

void CertificateInfoSubmitRequest::SetOrgRegion(const string& _orgRegion)
{
    m_orgRegion = _orgRegion;
    m_orgRegionHasBeenSet = true;
}

bool CertificateInfoSubmitRequest::OrgRegionHasBeenSet() const
{
    return m_orgRegionHasBeenSet;
}

string CertificateInfoSubmitRequest::GetOrgPhoneArea() const
{
    return m_orgPhoneArea;
}

void CertificateInfoSubmitRequest::SetOrgPhoneArea(const string& _orgPhoneArea)
{
    m_orgPhoneArea = _orgPhoneArea;
    m_orgPhoneAreaHasBeenSet = true;
}

bool CertificateInfoSubmitRequest::OrgPhoneAreaHasBeenSet() const
{
    return m_orgPhoneAreaHasBeenSet;
}

string CertificateInfoSubmitRequest::GetOrgPhoneNumber() const
{
    return m_orgPhoneNumber;
}

void CertificateInfoSubmitRequest::SetOrgPhoneNumber(const string& _orgPhoneNumber)
{
    m_orgPhoneNumber = _orgPhoneNumber;
    m_orgPhoneNumberHasBeenSet = true;
}

bool CertificateInfoSubmitRequest::OrgPhoneNumberHasBeenSet() const
{
    return m_orgPhoneNumberHasBeenSet;
}

string CertificateInfoSubmitRequest::GetVerifyType() const
{
    return m_verifyType;
}

void CertificateInfoSubmitRequest::SetVerifyType(const string& _verifyType)
{
    m_verifyType = _verifyType;
    m_verifyTypeHasBeenSet = true;
}

bool CertificateInfoSubmitRequest::VerifyTypeHasBeenSet() const
{
    return m_verifyTypeHasBeenSet;
}

string CertificateInfoSubmitRequest::GetAdminFirstName() const
{
    return m_adminFirstName;
}

void CertificateInfoSubmitRequest::SetAdminFirstName(const string& _adminFirstName)
{
    m_adminFirstName = _adminFirstName;
    m_adminFirstNameHasBeenSet = true;
}

bool CertificateInfoSubmitRequest::AdminFirstNameHasBeenSet() const
{
    return m_adminFirstNameHasBeenSet;
}

string CertificateInfoSubmitRequest::GetAdminLastName() const
{
    return m_adminLastName;
}

void CertificateInfoSubmitRequest::SetAdminLastName(const string& _adminLastName)
{
    m_adminLastName = _adminLastName;
    m_adminLastNameHasBeenSet = true;
}

bool CertificateInfoSubmitRequest::AdminLastNameHasBeenSet() const
{
    return m_adminLastNameHasBeenSet;
}

string CertificateInfoSubmitRequest::GetAdminPhone() const
{
    return m_adminPhone;
}

void CertificateInfoSubmitRequest::SetAdminPhone(const string& _adminPhone)
{
    m_adminPhone = _adminPhone;
    m_adminPhoneHasBeenSet = true;
}

bool CertificateInfoSubmitRequest::AdminPhoneHasBeenSet() const
{
    return m_adminPhoneHasBeenSet;
}

string CertificateInfoSubmitRequest::GetAdminEmail() const
{
    return m_adminEmail;
}

void CertificateInfoSubmitRequest::SetAdminEmail(const string& _adminEmail)
{
    m_adminEmail = _adminEmail;
    m_adminEmailHasBeenSet = true;
}

bool CertificateInfoSubmitRequest::AdminEmailHasBeenSet() const
{
    return m_adminEmailHasBeenSet;
}

string CertificateInfoSubmitRequest::GetAdminTitle() const
{
    return m_adminTitle;
}

void CertificateInfoSubmitRequest::SetAdminTitle(const string& _adminTitle)
{
    m_adminTitle = _adminTitle;
    m_adminTitleHasBeenSet = true;
}

bool CertificateInfoSubmitRequest::AdminTitleHasBeenSet() const
{
    return m_adminTitleHasBeenSet;
}

string CertificateInfoSubmitRequest::GetTechFirstName() const
{
    return m_techFirstName;
}

void CertificateInfoSubmitRequest::SetTechFirstName(const string& _techFirstName)
{
    m_techFirstName = _techFirstName;
    m_techFirstNameHasBeenSet = true;
}

bool CertificateInfoSubmitRequest::TechFirstNameHasBeenSet() const
{
    return m_techFirstNameHasBeenSet;
}

string CertificateInfoSubmitRequest::GetTechLastName() const
{
    return m_techLastName;
}

void CertificateInfoSubmitRequest::SetTechLastName(const string& _techLastName)
{
    m_techLastName = _techLastName;
    m_techLastNameHasBeenSet = true;
}

bool CertificateInfoSubmitRequest::TechLastNameHasBeenSet() const
{
    return m_techLastNameHasBeenSet;
}

string CertificateInfoSubmitRequest::GetContactEmail() const
{
    return m_contactEmail;
}

void CertificateInfoSubmitRequest::SetContactEmail(const string& _contactEmail)
{
    m_contactEmail = _contactEmail;
    m_contactEmailHasBeenSet = true;
}

bool CertificateInfoSubmitRequest::ContactEmailHasBeenSet() const
{
    return m_contactEmailHasBeenSet;
}

uint64_t CertificateInfoSubmitRequest::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

void CertificateInfoSubmitRequest::SetAutoRenewFlag(const uint64_t& _autoRenewFlag)
{
    m_autoRenewFlag = _autoRenewFlag;
    m_autoRenewFlagHasBeenSet = true;
}

bool CertificateInfoSubmitRequest::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

string CertificateInfoSubmitRequest::GetCsrKeyParameter() const
{
    return m_csrKeyParameter;
}

void CertificateInfoSubmitRequest::SetCsrKeyParameter(const string& _csrKeyParameter)
{
    m_csrKeyParameter = _csrKeyParameter;
    m_csrKeyParameterHasBeenSet = true;
}

bool CertificateInfoSubmitRequest::CsrKeyParameterHasBeenSet() const
{
    return m_csrKeyParameterHasBeenSet;
}

string CertificateInfoSubmitRequest::GetCsrEncryptAlgo() const
{
    return m_csrEncryptAlgo;
}

void CertificateInfoSubmitRequest::SetCsrEncryptAlgo(const string& _csrEncryptAlgo)
{
    m_csrEncryptAlgo = _csrEncryptAlgo;
    m_csrEncryptAlgoHasBeenSet = true;
}

bool CertificateInfoSubmitRequest::CsrEncryptAlgoHasBeenSet() const
{
    return m_csrEncryptAlgoHasBeenSet;
}

string CertificateInfoSubmitRequest::GetManagerId() const
{
    return m_managerId;
}

void CertificateInfoSubmitRequest::SetManagerId(const string& _managerId)
{
    m_managerId = _managerId;
    m_managerIdHasBeenSet = true;
}

bool CertificateInfoSubmitRequest::ManagerIdHasBeenSet() const
{
    return m_managerIdHasBeenSet;
}

string CertificateInfoSubmitRequest::GetTechPhone() const
{
    return m_techPhone;
}

void CertificateInfoSubmitRequest::SetTechPhone(const string& _techPhone)
{
    m_techPhone = _techPhone;
    m_techPhoneHasBeenSet = true;
}

bool CertificateInfoSubmitRequest::TechPhoneHasBeenSet() const
{
    return m_techPhoneHasBeenSet;
}

string CertificateInfoSubmitRequest::GetTechEmail() const
{
    return m_techEmail;
}

void CertificateInfoSubmitRequest::SetTechEmail(const string& _techEmail)
{
    m_techEmail = _techEmail;
    m_techEmailHasBeenSet = true;
}

bool CertificateInfoSubmitRequest::TechEmailHasBeenSet() const
{
    return m_techEmailHasBeenSet;
}

string CertificateInfoSubmitRequest::GetTechTitle() const
{
    return m_techTitle;
}

void CertificateInfoSubmitRequest::SetTechTitle(const string& _techTitle)
{
    m_techTitle = _techTitle;
    m_techTitleHasBeenSet = true;
}

bool CertificateInfoSubmitRequest::TechTitleHasBeenSet() const
{
    return m_techTitleHasBeenSet;
}

int64_t CertificateInfoSubmitRequest::GetType() const
{
    return m_type;
}

void CertificateInfoSubmitRequest::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CertificateInfoSubmitRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string CertificateInfoSubmitRequest::GetCaType() const
{
    return m_caType;
}

void CertificateInfoSubmitRequest::SetCaType(const string& _caType)
{
    m_caType = _caType;
    m_caTypeHasBeenSet = true;
}

bool CertificateInfoSubmitRequest::CaTypeHasBeenSet() const
{
    return m_caTypeHasBeenSet;
}


