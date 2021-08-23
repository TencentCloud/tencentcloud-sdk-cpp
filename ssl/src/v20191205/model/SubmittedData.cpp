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

#include <tencentcloud/ssl/v20191205/model/SubmittedData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssl::V20191205::Model;
using namespace std;

SubmittedData::SubmittedData() :
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
    m_adminFirstNameHasBeenSet(false),
    m_adminLastNameHasBeenSet(false),
    m_adminPhoneNumHasBeenSet(false),
    m_adminEmailHasBeenSet(false),
    m_adminPositionHasBeenSet(false),
    m_contactFirstNameHasBeenSet(false),
    m_contactLastNameHasBeenSet(false),
    m_contactNumberHasBeenSet(false),
    m_contactEmailHasBeenSet(false),
    m_contactPositionHasBeenSet(false),
    m_verifyTypeHasBeenSet(false)
{
}

CoreInternalOutcome SubmittedData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CsrType") && !value["CsrType"].IsNull())
    {
        if (!value["CsrType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubmittedData.CsrType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_csrType = string(value["CsrType"].GetString());
        m_csrTypeHasBeenSet = true;
    }

    if (value.HasMember("CsrContent") && !value["CsrContent"].IsNull())
    {
        if (!value["CsrContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubmittedData.CsrContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_csrContent = string(value["CsrContent"].GetString());
        m_csrContentHasBeenSet = true;
    }

    if (value.HasMember("CertificateDomain") && !value["CertificateDomain"].IsNull())
    {
        if (!value["CertificateDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubmittedData.CertificateDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certificateDomain = string(value["CertificateDomain"].GetString());
        m_certificateDomainHasBeenSet = true;
    }

    if (value.HasMember("DomainList") && !value["DomainList"].IsNull())
    {
        if (!value["DomainList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SubmittedData.DomainList` is not array type"));

        const rapidjson::Value &tmpValue = value["DomainList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_domainList.push_back((*itr).GetString());
        }
        m_domainListHasBeenSet = true;
    }

    if (value.HasMember("KeyPassword") && !value["KeyPassword"].IsNull())
    {
        if (!value["KeyPassword"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubmittedData.KeyPassword` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyPassword = string(value["KeyPassword"].GetString());
        m_keyPasswordHasBeenSet = true;
    }

    if (value.HasMember("OrganizationName") && !value["OrganizationName"].IsNull())
    {
        if (!value["OrganizationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubmittedData.OrganizationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_organizationName = string(value["OrganizationName"].GetString());
        m_organizationNameHasBeenSet = true;
    }

    if (value.HasMember("OrganizationDivision") && !value["OrganizationDivision"].IsNull())
    {
        if (!value["OrganizationDivision"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubmittedData.OrganizationDivision` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_organizationDivision = string(value["OrganizationDivision"].GetString());
        m_organizationDivisionHasBeenSet = true;
    }

    if (value.HasMember("OrganizationAddress") && !value["OrganizationAddress"].IsNull())
    {
        if (!value["OrganizationAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubmittedData.OrganizationAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_organizationAddress = string(value["OrganizationAddress"].GetString());
        m_organizationAddressHasBeenSet = true;
    }

    if (value.HasMember("OrganizationCountry") && !value["OrganizationCountry"].IsNull())
    {
        if (!value["OrganizationCountry"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubmittedData.OrganizationCountry` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_organizationCountry = string(value["OrganizationCountry"].GetString());
        m_organizationCountryHasBeenSet = true;
    }

    if (value.HasMember("OrganizationCity") && !value["OrganizationCity"].IsNull())
    {
        if (!value["OrganizationCity"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubmittedData.OrganizationCity` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_organizationCity = string(value["OrganizationCity"].GetString());
        m_organizationCityHasBeenSet = true;
    }

    if (value.HasMember("OrganizationRegion") && !value["OrganizationRegion"].IsNull())
    {
        if (!value["OrganizationRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubmittedData.OrganizationRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_organizationRegion = string(value["OrganizationRegion"].GetString());
        m_organizationRegionHasBeenSet = true;
    }

    if (value.HasMember("PostalCode") && !value["PostalCode"].IsNull())
    {
        if (!value["PostalCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubmittedData.PostalCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_postalCode = string(value["PostalCode"].GetString());
        m_postalCodeHasBeenSet = true;
    }

    if (value.HasMember("PhoneAreaCode") && !value["PhoneAreaCode"].IsNull())
    {
        if (!value["PhoneAreaCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubmittedData.PhoneAreaCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phoneAreaCode = string(value["PhoneAreaCode"].GetString());
        m_phoneAreaCodeHasBeenSet = true;
    }

    if (value.HasMember("PhoneNumber") && !value["PhoneNumber"].IsNull())
    {
        if (!value["PhoneNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubmittedData.PhoneNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phoneNumber = string(value["PhoneNumber"].GetString());
        m_phoneNumberHasBeenSet = true;
    }

    if (value.HasMember("AdminFirstName") && !value["AdminFirstName"].IsNull())
    {
        if (!value["AdminFirstName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubmittedData.AdminFirstName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_adminFirstName = string(value["AdminFirstName"].GetString());
        m_adminFirstNameHasBeenSet = true;
    }

    if (value.HasMember("AdminLastName") && !value["AdminLastName"].IsNull())
    {
        if (!value["AdminLastName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubmittedData.AdminLastName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_adminLastName = string(value["AdminLastName"].GetString());
        m_adminLastNameHasBeenSet = true;
    }

    if (value.HasMember("AdminPhoneNum") && !value["AdminPhoneNum"].IsNull())
    {
        if (!value["AdminPhoneNum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubmittedData.AdminPhoneNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_adminPhoneNum = string(value["AdminPhoneNum"].GetString());
        m_adminPhoneNumHasBeenSet = true;
    }

    if (value.HasMember("AdminEmail") && !value["AdminEmail"].IsNull())
    {
        if (!value["AdminEmail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubmittedData.AdminEmail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_adminEmail = string(value["AdminEmail"].GetString());
        m_adminEmailHasBeenSet = true;
    }

    if (value.HasMember("AdminPosition") && !value["AdminPosition"].IsNull())
    {
        if (!value["AdminPosition"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubmittedData.AdminPosition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_adminPosition = string(value["AdminPosition"].GetString());
        m_adminPositionHasBeenSet = true;
    }

    if (value.HasMember("ContactFirstName") && !value["ContactFirstName"].IsNull())
    {
        if (!value["ContactFirstName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubmittedData.ContactFirstName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contactFirstName = string(value["ContactFirstName"].GetString());
        m_contactFirstNameHasBeenSet = true;
    }

    if (value.HasMember("ContactLastName") && !value["ContactLastName"].IsNull())
    {
        if (!value["ContactLastName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubmittedData.ContactLastName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contactLastName = string(value["ContactLastName"].GetString());
        m_contactLastNameHasBeenSet = true;
    }

    if (value.HasMember("ContactNumber") && !value["ContactNumber"].IsNull())
    {
        if (!value["ContactNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubmittedData.ContactNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contactNumber = string(value["ContactNumber"].GetString());
        m_contactNumberHasBeenSet = true;
    }

    if (value.HasMember("ContactEmail") && !value["ContactEmail"].IsNull())
    {
        if (!value["ContactEmail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubmittedData.ContactEmail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contactEmail = string(value["ContactEmail"].GetString());
        m_contactEmailHasBeenSet = true;
    }

    if (value.HasMember("ContactPosition") && !value["ContactPosition"].IsNull())
    {
        if (!value["ContactPosition"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubmittedData.ContactPosition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contactPosition = string(value["ContactPosition"].GetString());
        m_contactPositionHasBeenSet = true;
    }

    if (value.HasMember("VerifyType") && !value["VerifyType"].IsNull())
    {
        if (!value["VerifyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubmittedData.VerifyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_verifyType = string(value["VerifyType"].GetString());
        m_verifyTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SubmittedData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_csrTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CsrType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_csrType.c_str(), allocator).Move(), allocator);
    }

    if (m_csrContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CsrContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_csrContent.c_str(), allocator).Move(), allocator);
    }

    if (m_certificateDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertificateDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certificateDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_domainListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_domainList.begin(); itr != m_domainList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_keyPasswordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyPassword";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyPassword.c_str(), allocator).Move(), allocator);
    }

    if (m_organizationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_organizationName.c_str(), allocator).Move(), allocator);
    }

    if (m_organizationDivisionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationDivision";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_organizationDivision.c_str(), allocator).Move(), allocator);
    }

    if (m_organizationAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_organizationAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_organizationCountryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationCountry";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_organizationCountry.c_str(), allocator).Move(), allocator);
    }

    if (m_organizationCityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationCity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_organizationCity.c_str(), allocator).Move(), allocator);
    }

    if (m_organizationRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_organizationRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_postalCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PostalCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_postalCode.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneAreaCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhoneAreaCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_phoneAreaCode.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhoneNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_phoneNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_adminFirstNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdminFirstName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_adminFirstName.c_str(), allocator).Move(), allocator);
    }

    if (m_adminLastNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdminLastName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_adminLastName.c_str(), allocator).Move(), allocator);
    }

    if (m_adminPhoneNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdminPhoneNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_adminPhoneNum.c_str(), allocator).Move(), allocator);
    }

    if (m_adminEmailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdminEmail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_adminEmail.c_str(), allocator).Move(), allocator);
    }

    if (m_adminPositionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdminPosition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_adminPosition.c_str(), allocator).Move(), allocator);
    }

    if (m_contactFirstNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContactFirstName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contactFirstName.c_str(), allocator).Move(), allocator);
    }

    if (m_contactLastNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContactLastName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contactLastName.c_str(), allocator).Move(), allocator);
    }

    if (m_contactNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContactNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contactNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_contactEmailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContactEmail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contactEmail.c_str(), allocator).Move(), allocator);
    }

    if (m_contactPositionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContactPosition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contactPosition.c_str(), allocator).Move(), allocator);
    }

    if (m_verifyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_verifyType.c_str(), allocator).Move(), allocator);
    }

}


string SubmittedData::GetCsrType() const
{
    return m_csrType;
}

void SubmittedData::SetCsrType(const string& _csrType)
{
    m_csrType = _csrType;
    m_csrTypeHasBeenSet = true;
}

bool SubmittedData::CsrTypeHasBeenSet() const
{
    return m_csrTypeHasBeenSet;
}

string SubmittedData::GetCsrContent() const
{
    return m_csrContent;
}

void SubmittedData::SetCsrContent(const string& _csrContent)
{
    m_csrContent = _csrContent;
    m_csrContentHasBeenSet = true;
}

bool SubmittedData::CsrContentHasBeenSet() const
{
    return m_csrContentHasBeenSet;
}

string SubmittedData::GetCertificateDomain() const
{
    return m_certificateDomain;
}

void SubmittedData::SetCertificateDomain(const string& _certificateDomain)
{
    m_certificateDomain = _certificateDomain;
    m_certificateDomainHasBeenSet = true;
}

bool SubmittedData::CertificateDomainHasBeenSet() const
{
    return m_certificateDomainHasBeenSet;
}

vector<string> SubmittedData::GetDomainList() const
{
    return m_domainList;
}

void SubmittedData::SetDomainList(const vector<string>& _domainList)
{
    m_domainList = _domainList;
    m_domainListHasBeenSet = true;
}

bool SubmittedData::DomainListHasBeenSet() const
{
    return m_domainListHasBeenSet;
}

string SubmittedData::GetKeyPassword() const
{
    return m_keyPassword;
}

void SubmittedData::SetKeyPassword(const string& _keyPassword)
{
    m_keyPassword = _keyPassword;
    m_keyPasswordHasBeenSet = true;
}

bool SubmittedData::KeyPasswordHasBeenSet() const
{
    return m_keyPasswordHasBeenSet;
}

string SubmittedData::GetOrganizationName() const
{
    return m_organizationName;
}

void SubmittedData::SetOrganizationName(const string& _organizationName)
{
    m_organizationName = _organizationName;
    m_organizationNameHasBeenSet = true;
}

bool SubmittedData::OrganizationNameHasBeenSet() const
{
    return m_organizationNameHasBeenSet;
}

string SubmittedData::GetOrganizationDivision() const
{
    return m_organizationDivision;
}

void SubmittedData::SetOrganizationDivision(const string& _organizationDivision)
{
    m_organizationDivision = _organizationDivision;
    m_organizationDivisionHasBeenSet = true;
}

bool SubmittedData::OrganizationDivisionHasBeenSet() const
{
    return m_organizationDivisionHasBeenSet;
}

string SubmittedData::GetOrganizationAddress() const
{
    return m_organizationAddress;
}

void SubmittedData::SetOrganizationAddress(const string& _organizationAddress)
{
    m_organizationAddress = _organizationAddress;
    m_organizationAddressHasBeenSet = true;
}

bool SubmittedData::OrganizationAddressHasBeenSet() const
{
    return m_organizationAddressHasBeenSet;
}

string SubmittedData::GetOrganizationCountry() const
{
    return m_organizationCountry;
}

void SubmittedData::SetOrganizationCountry(const string& _organizationCountry)
{
    m_organizationCountry = _organizationCountry;
    m_organizationCountryHasBeenSet = true;
}

bool SubmittedData::OrganizationCountryHasBeenSet() const
{
    return m_organizationCountryHasBeenSet;
}

string SubmittedData::GetOrganizationCity() const
{
    return m_organizationCity;
}

void SubmittedData::SetOrganizationCity(const string& _organizationCity)
{
    m_organizationCity = _organizationCity;
    m_organizationCityHasBeenSet = true;
}

bool SubmittedData::OrganizationCityHasBeenSet() const
{
    return m_organizationCityHasBeenSet;
}

string SubmittedData::GetOrganizationRegion() const
{
    return m_organizationRegion;
}

void SubmittedData::SetOrganizationRegion(const string& _organizationRegion)
{
    m_organizationRegion = _organizationRegion;
    m_organizationRegionHasBeenSet = true;
}

bool SubmittedData::OrganizationRegionHasBeenSet() const
{
    return m_organizationRegionHasBeenSet;
}

string SubmittedData::GetPostalCode() const
{
    return m_postalCode;
}

void SubmittedData::SetPostalCode(const string& _postalCode)
{
    m_postalCode = _postalCode;
    m_postalCodeHasBeenSet = true;
}

bool SubmittedData::PostalCodeHasBeenSet() const
{
    return m_postalCodeHasBeenSet;
}

string SubmittedData::GetPhoneAreaCode() const
{
    return m_phoneAreaCode;
}

void SubmittedData::SetPhoneAreaCode(const string& _phoneAreaCode)
{
    m_phoneAreaCode = _phoneAreaCode;
    m_phoneAreaCodeHasBeenSet = true;
}

bool SubmittedData::PhoneAreaCodeHasBeenSet() const
{
    return m_phoneAreaCodeHasBeenSet;
}

string SubmittedData::GetPhoneNumber() const
{
    return m_phoneNumber;
}

void SubmittedData::SetPhoneNumber(const string& _phoneNumber)
{
    m_phoneNumber = _phoneNumber;
    m_phoneNumberHasBeenSet = true;
}

bool SubmittedData::PhoneNumberHasBeenSet() const
{
    return m_phoneNumberHasBeenSet;
}

string SubmittedData::GetAdminFirstName() const
{
    return m_adminFirstName;
}

void SubmittedData::SetAdminFirstName(const string& _adminFirstName)
{
    m_adminFirstName = _adminFirstName;
    m_adminFirstNameHasBeenSet = true;
}

bool SubmittedData::AdminFirstNameHasBeenSet() const
{
    return m_adminFirstNameHasBeenSet;
}

string SubmittedData::GetAdminLastName() const
{
    return m_adminLastName;
}

void SubmittedData::SetAdminLastName(const string& _adminLastName)
{
    m_adminLastName = _adminLastName;
    m_adminLastNameHasBeenSet = true;
}

bool SubmittedData::AdminLastNameHasBeenSet() const
{
    return m_adminLastNameHasBeenSet;
}

string SubmittedData::GetAdminPhoneNum() const
{
    return m_adminPhoneNum;
}

void SubmittedData::SetAdminPhoneNum(const string& _adminPhoneNum)
{
    m_adminPhoneNum = _adminPhoneNum;
    m_adminPhoneNumHasBeenSet = true;
}

bool SubmittedData::AdminPhoneNumHasBeenSet() const
{
    return m_adminPhoneNumHasBeenSet;
}

string SubmittedData::GetAdminEmail() const
{
    return m_adminEmail;
}

void SubmittedData::SetAdminEmail(const string& _adminEmail)
{
    m_adminEmail = _adminEmail;
    m_adminEmailHasBeenSet = true;
}

bool SubmittedData::AdminEmailHasBeenSet() const
{
    return m_adminEmailHasBeenSet;
}

string SubmittedData::GetAdminPosition() const
{
    return m_adminPosition;
}

void SubmittedData::SetAdminPosition(const string& _adminPosition)
{
    m_adminPosition = _adminPosition;
    m_adminPositionHasBeenSet = true;
}

bool SubmittedData::AdminPositionHasBeenSet() const
{
    return m_adminPositionHasBeenSet;
}

string SubmittedData::GetContactFirstName() const
{
    return m_contactFirstName;
}

void SubmittedData::SetContactFirstName(const string& _contactFirstName)
{
    m_contactFirstName = _contactFirstName;
    m_contactFirstNameHasBeenSet = true;
}

bool SubmittedData::ContactFirstNameHasBeenSet() const
{
    return m_contactFirstNameHasBeenSet;
}

string SubmittedData::GetContactLastName() const
{
    return m_contactLastName;
}

void SubmittedData::SetContactLastName(const string& _contactLastName)
{
    m_contactLastName = _contactLastName;
    m_contactLastNameHasBeenSet = true;
}

bool SubmittedData::ContactLastNameHasBeenSet() const
{
    return m_contactLastNameHasBeenSet;
}

string SubmittedData::GetContactNumber() const
{
    return m_contactNumber;
}

void SubmittedData::SetContactNumber(const string& _contactNumber)
{
    m_contactNumber = _contactNumber;
    m_contactNumberHasBeenSet = true;
}

bool SubmittedData::ContactNumberHasBeenSet() const
{
    return m_contactNumberHasBeenSet;
}

string SubmittedData::GetContactEmail() const
{
    return m_contactEmail;
}

void SubmittedData::SetContactEmail(const string& _contactEmail)
{
    m_contactEmail = _contactEmail;
    m_contactEmailHasBeenSet = true;
}

bool SubmittedData::ContactEmailHasBeenSet() const
{
    return m_contactEmailHasBeenSet;
}

string SubmittedData::GetContactPosition() const
{
    return m_contactPosition;
}

void SubmittedData::SetContactPosition(const string& _contactPosition)
{
    m_contactPosition = _contactPosition;
    m_contactPositionHasBeenSet = true;
}

bool SubmittedData::ContactPositionHasBeenSet() const
{
    return m_contactPositionHasBeenSet;
}

string SubmittedData::GetVerifyType() const
{
    return m_verifyType;
}

void SubmittedData::SetVerifyType(const string& _verifyType)
{
    m_verifyType = _verifyType;
    m_verifyTypeHasBeenSet = true;
}

bool SubmittedData::VerifyTypeHasBeenSet() const
{
    return m_verifyTypeHasBeenSet;
}

