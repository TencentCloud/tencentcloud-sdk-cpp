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

#include <tencentcloud/ssl/v20191205/model/SubmitCertificateInformationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ssl::V20191205::Model;
using namespace std;

SubmitCertificateInformationRequest::SubmitCertificateInformationRequest() :
    m_certificateIdHasBeenSet(false),
    m_csrTypeHasBeenSet(false),
    m_csrContentHasBeenSet(false),
    m_certificateDomainHasBeenSet(false),
    m_domainListHasBeenSet(false),
    m_keyPasswordHasBeenSet(false),
    m_organizationNameHasBeenSet(false),
    m_organizationDivisionHasBeenSet(false),
    m_organizationAddressHasBeenSet(false),
    m_organizationCountryHasBeenSet(false),
    m_organizationCityHasBeenSet(false),
    m_organizationRegionHasBeenSet(false),
    m_postalCodeHasBeenSet(false),
    m_phoneAreaCodeHasBeenSet(false),
    m_phoneNumberHasBeenSet(false),
    m_verifyTypeHasBeenSet(false),
    m_adminFirstNameHasBeenSet(false),
    m_adminLastNameHasBeenSet(false),
    m_adminPhoneNumHasBeenSet(false),
    m_adminEmailHasBeenSet(false),
    m_adminPositionHasBeenSet(false),
    m_contactFirstNameHasBeenSet(false),
    m_contactLastNameHasBeenSet(false),
    m_contactEmailHasBeenSet(false),
    m_contactNumberHasBeenSet(false),
    m_contactPositionHasBeenSet(false),
    m_isDVHasBeenSet(false)
{
}

string SubmitCertificateInformationRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_certificateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertificateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_certificateId.c_str(), allocator).Move(), allocator);
    }

    if (m_csrTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CsrType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_csrType.c_str(), allocator).Move(), allocator);
    }

    if (m_csrContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CsrContent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_csrContent.c_str(), allocator).Move(), allocator);
    }

    if (m_certificateDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertificateDomain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_certificateDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_domainListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_domainList.begin(); itr != m_domainList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_keyPasswordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyPassword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyPassword.c_str(), allocator).Move(), allocator);
    }

    if (m_organizationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_organizationName.c_str(), allocator).Move(), allocator);
    }

    if (m_organizationDivisionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationDivision";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_organizationDivision.c_str(), allocator).Move(), allocator);
    }

    if (m_organizationAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationAddress";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_organizationAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_organizationCountryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationCountry";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_organizationCountry.c_str(), allocator).Move(), allocator);
    }

    if (m_organizationCityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationCity";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_organizationCity.c_str(), allocator).Move(), allocator);
    }

    if (m_organizationRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_organizationRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_postalCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PostalCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_postalCode.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneAreaCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhoneAreaCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_phoneAreaCode.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhoneNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_phoneNumber.c_str(), allocator).Move(), allocator);
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

    if (m_adminPhoneNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdminPhoneNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_adminPhoneNum.c_str(), allocator).Move(), allocator);
    }

    if (m_adminEmailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdminEmail";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_adminEmail.c_str(), allocator).Move(), allocator);
    }

    if (m_adminPositionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdminPosition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_adminPosition.c_str(), allocator).Move(), allocator);
    }

    if (m_contactFirstNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContactFirstName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_contactFirstName.c_str(), allocator).Move(), allocator);
    }

    if (m_contactLastNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContactLastName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_contactLastName.c_str(), allocator).Move(), allocator);
    }

    if (m_contactEmailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContactEmail";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_contactEmail.c_str(), allocator).Move(), allocator);
    }

    if (m_contactNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContactNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_contactNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_contactPositionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContactPosition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_contactPosition.c_str(), allocator).Move(), allocator);
    }

    if (m_isDVHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDV";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isDV, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SubmitCertificateInformationRequest::GetCertificateId() const
{
    return m_certificateId;
}

void SubmitCertificateInformationRequest::SetCertificateId(const string& _certificateId)
{
    m_certificateId = _certificateId;
    m_certificateIdHasBeenSet = true;
}

bool SubmitCertificateInformationRequest::CertificateIdHasBeenSet() const
{
    return m_certificateIdHasBeenSet;
}

string SubmitCertificateInformationRequest::GetCsrType() const
{
    return m_csrType;
}

void SubmitCertificateInformationRequest::SetCsrType(const string& _csrType)
{
    m_csrType = _csrType;
    m_csrTypeHasBeenSet = true;
}

bool SubmitCertificateInformationRequest::CsrTypeHasBeenSet() const
{
    return m_csrTypeHasBeenSet;
}

string SubmitCertificateInformationRequest::GetCsrContent() const
{
    return m_csrContent;
}

void SubmitCertificateInformationRequest::SetCsrContent(const string& _csrContent)
{
    m_csrContent = _csrContent;
    m_csrContentHasBeenSet = true;
}

bool SubmitCertificateInformationRequest::CsrContentHasBeenSet() const
{
    return m_csrContentHasBeenSet;
}

string SubmitCertificateInformationRequest::GetCertificateDomain() const
{
    return m_certificateDomain;
}

void SubmitCertificateInformationRequest::SetCertificateDomain(const string& _certificateDomain)
{
    m_certificateDomain = _certificateDomain;
    m_certificateDomainHasBeenSet = true;
}

bool SubmitCertificateInformationRequest::CertificateDomainHasBeenSet() const
{
    return m_certificateDomainHasBeenSet;
}

vector<string> SubmitCertificateInformationRequest::GetDomainList() const
{
    return m_domainList;
}

void SubmitCertificateInformationRequest::SetDomainList(const vector<string>& _domainList)
{
    m_domainList = _domainList;
    m_domainListHasBeenSet = true;
}

bool SubmitCertificateInformationRequest::DomainListHasBeenSet() const
{
    return m_domainListHasBeenSet;
}

string SubmitCertificateInformationRequest::GetKeyPassword() const
{
    return m_keyPassword;
}

void SubmitCertificateInformationRequest::SetKeyPassword(const string& _keyPassword)
{
    m_keyPassword = _keyPassword;
    m_keyPasswordHasBeenSet = true;
}

bool SubmitCertificateInformationRequest::KeyPasswordHasBeenSet() const
{
    return m_keyPasswordHasBeenSet;
}

string SubmitCertificateInformationRequest::GetOrganizationName() const
{
    return m_organizationName;
}

void SubmitCertificateInformationRequest::SetOrganizationName(const string& _organizationName)
{
    m_organizationName = _organizationName;
    m_organizationNameHasBeenSet = true;
}

bool SubmitCertificateInformationRequest::OrganizationNameHasBeenSet() const
{
    return m_organizationNameHasBeenSet;
}

string SubmitCertificateInformationRequest::GetOrganizationDivision() const
{
    return m_organizationDivision;
}

void SubmitCertificateInformationRequest::SetOrganizationDivision(const string& _organizationDivision)
{
    m_organizationDivision = _organizationDivision;
    m_organizationDivisionHasBeenSet = true;
}

bool SubmitCertificateInformationRequest::OrganizationDivisionHasBeenSet() const
{
    return m_organizationDivisionHasBeenSet;
}

string SubmitCertificateInformationRequest::GetOrganizationAddress() const
{
    return m_organizationAddress;
}

void SubmitCertificateInformationRequest::SetOrganizationAddress(const string& _organizationAddress)
{
    m_organizationAddress = _organizationAddress;
    m_organizationAddressHasBeenSet = true;
}

bool SubmitCertificateInformationRequest::OrganizationAddressHasBeenSet() const
{
    return m_organizationAddressHasBeenSet;
}

string SubmitCertificateInformationRequest::GetOrganizationCountry() const
{
    return m_organizationCountry;
}

void SubmitCertificateInformationRequest::SetOrganizationCountry(const string& _organizationCountry)
{
    m_organizationCountry = _organizationCountry;
    m_organizationCountryHasBeenSet = true;
}

bool SubmitCertificateInformationRequest::OrganizationCountryHasBeenSet() const
{
    return m_organizationCountryHasBeenSet;
}

string SubmitCertificateInformationRequest::GetOrganizationCity() const
{
    return m_organizationCity;
}

void SubmitCertificateInformationRequest::SetOrganizationCity(const string& _organizationCity)
{
    m_organizationCity = _organizationCity;
    m_organizationCityHasBeenSet = true;
}

bool SubmitCertificateInformationRequest::OrganizationCityHasBeenSet() const
{
    return m_organizationCityHasBeenSet;
}

string SubmitCertificateInformationRequest::GetOrganizationRegion() const
{
    return m_organizationRegion;
}

void SubmitCertificateInformationRequest::SetOrganizationRegion(const string& _organizationRegion)
{
    m_organizationRegion = _organizationRegion;
    m_organizationRegionHasBeenSet = true;
}

bool SubmitCertificateInformationRequest::OrganizationRegionHasBeenSet() const
{
    return m_organizationRegionHasBeenSet;
}

string SubmitCertificateInformationRequest::GetPostalCode() const
{
    return m_postalCode;
}

void SubmitCertificateInformationRequest::SetPostalCode(const string& _postalCode)
{
    m_postalCode = _postalCode;
    m_postalCodeHasBeenSet = true;
}

bool SubmitCertificateInformationRequest::PostalCodeHasBeenSet() const
{
    return m_postalCodeHasBeenSet;
}

string SubmitCertificateInformationRequest::GetPhoneAreaCode() const
{
    return m_phoneAreaCode;
}

void SubmitCertificateInformationRequest::SetPhoneAreaCode(const string& _phoneAreaCode)
{
    m_phoneAreaCode = _phoneAreaCode;
    m_phoneAreaCodeHasBeenSet = true;
}

bool SubmitCertificateInformationRequest::PhoneAreaCodeHasBeenSet() const
{
    return m_phoneAreaCodeHasBeenSet;
}

string SubmitCertificateInformationRequest::GetPhoneNumber() const
{
    return m_phoneNumber;
}

void SubmitCertificateInformationRequest::SetPhoneNumber(const string& _phoneNumber)
{
    m_phoneNumber = _phoneNumber;
    m_phoneNumberHasBeenSet = true;
}

bool SubmitCertificateInformationRequest::PhoneNumberHasBeenSet() const
{
    return m_phoneNumberHasBeenSet;
}

string SubmitCertificateInformationRequest::GetVerifyType() const
{
    return m_verifyType;
}

void SubmitCertificateInformationRequest::SetVerifyType(const string& _verifyType)
{
    m_verifyType = _verifyType;
    m_verifyTypeHasBeenSet = true;
}

bool SubmitCertificateInformationRequest::VerifyTypeHasBeenSet() const
{
    return m_verifyTypeHasBeenSet;
}

string SubmitCertificateInformationRequest::GetAdminFirstName() const
{
    return m_adminFirstName;
}

void SubmitCertificateInformationRequest::SetAdminFirstName(const string& _adminFirstName)
{
    m_adminFirstName = _adminFirstName;
    m_adminFirstNameHasBeenSet = true;
}

bool SubmitCertificateInformationRequest::AdminFirstNameHasBeenSet() const
{
    return m_adminFirstNameHasBeenSet;
}

string SubmitCertificateInformationRequest::GetAdminLastName() const
{
    return m_adminLastName;
}

void SubmitCertificateInformationRequest::SetAdminLastName(const string& _adminLastName)
{
    m_adminLastName = _adminLastName;
    m_adminLastNameHasBeenSet = true;
}

bool SubmitCertificateInformationRequest::AdminLastNameHasBeenSet() const
{
    return m_adminLastNameHasBeenSet;
}

string SubmitCertificateInformationRequest::GetAdminPhoneNum() const
{
    return m_adminPhoneNum;
}

void SubmitCertificateInformationRequest::SetAdminPhoneNum(const string& _adminPhoneNum)
{
    m_adminPhoneNum = _adminPhoneNum;
    m_adminPhoneNumHasBeenSet = true;
}

bool SubmitCertificateInformationRequest::AdminPhoneNumHasBeenSet() const
{
    return m_adminPhoneNumHasBeenSet;
}

string SubmitCertificateInformationRequest::GetAdminEmail() const
{
    return m_adminEmail;
}

void SubmitCertificateInformationRequest::SetAdminEmail(const string& _adminEmail)
{
    m_adminEmail = _adminEmail;
    m_adminEmailHasBeenSet = true;
}

bool SubmitCertificateInformationRequest::AdminEmailHasBeenSet() const
{
    return m_adminEmailHasBeenSet;
}

string SubmitCertificateInformationRequest::GetAdminPosition() const
{
    return m_adminPosition;
}

void SubmitCertificateInformationRequest::SetAdminPosition(const string& _adminPosition)
{
    m_adminPosition = _adminPosition;
    m_adminPositionHasBeenSet = true;
}

bool SubmitCertificateInformationRequest::AdminPositionHasBeenSet() const
{
    return m_adminPositionHasBeenSet;
}

string SubmitCertificateInformationRequest::GetContactFirstName() const
{
    return m_contactFirstName;
}

void SubmitCertificateInformationRequest::SetContactFirstName(const string& _contactFirstName)
{
    m_contactFirstName = _contactFirstName;
    m_contactFirstNameHasBeenSet = true;
}

bool SubmitCertificateInformationRequest::ContactFirstNameHasBeenSet() const
{
    return m_contactFirstNameHasBeenSet;
}

string SubmitCertificateInformationRequest::GetContactLastName() const
{
    return m_contactLastName;
}

void SubmitCertificateInformationRequest::SetContactLastName(const string& _contactLastName)
{
    m_contactLastName = _contactLastName;
    m_contactLastNameHasBeenSet = true;
}

bool SubmitCertificateInformationRequest::ContactLastNameHasBeenSet() const
{
    return m_contactLastNameHasBeenSet;
}

string SubmitCertificateInformationRequest::GetContactEmail() const
{
    return m_contactEmail;
}

void SubmitCertificateInformationRequest::SetContactEmail(const string& _contactEmail)
{
    m_contactEmail = _contactEmail;
    m_contactEmailHasBeenSet = true;
}

bool SubmitCertificateInformationRequest::ContactEmailHasBeenSet() const
{
    return m_contactEmailHasBeenSet;
}

string SubmitCertificateInformationRequest::GetContactNumber() const
{
    return m_contactNumber;
}

void SubmitCertificateInformationRequest::SetContactNumber(const string& _contactNumber)
{
    m_contactNumber = _contactNumber;
    m_contactNumberHasBeenSet = true;
}

bool SubmitCertificateInformationRequest::ContactNumberHasBeenSet() const
{
    return m_contactNumberHasBeenSet;
}

string SubmitCertificateInformationRequest::GetContactPosition() const
{
    return m_contactPosition;
}

void SubmitCertificateInformationRequest::SetContactPosition(const string& _contactPosition)
{
    m_contactPosition = _contactPosition;
    m_contactPositionHasBeenSet = true;
}

bool SubmitCertificateInformationRequest::ContactPositionHasBeenSet() const
{
    return m_contactPositionHasBeenSet;
}

bool SubmitCertificateInformationRequest::GetIsDV() const
{
    return m_isDV;
}

void SubmitCertificateInformationRequest::SetIsDV(const bool& _isDV)
{
    m_isDV = _isDV;
    m_isDVHasBeenSet = true;
}

bool SubmitCertificateInformationRequest::IsDVHasBeenSet() const
{
    return m_isDVHasBeenSet;
}


