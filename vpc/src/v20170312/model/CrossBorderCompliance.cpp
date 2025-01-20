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

#include <tencentcloud/vpc/v20170312/model/CrossBorderCompliance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

CrossBorderCompliance::CrossBorderCompliance() :
    m_serviceProviderHasBeenSet(false),
    m_complianceIdHasBeenSet(false),
    m_companyHasBeenSet(false),
    m_uniformSocialCreditCodeHasBeenSet(false),
    m_legalPersonHasBeenSet(false),
    m_issuingAuthorityHasBeenSet(false),
    m_businessLicenseHasBeenSet(false),
    m_businessAddressHasBeenSet(false),
    m_postCodeHasBeenSet(false),
    m_managerHasBeenSet(false),
    m_managerIdHasBeenSet(false),
    m_managerIdCardHasBeenSet(false),
    m_managerAddressHasBeenSet(false),
    m_managerTelephoneHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_serviceHandlingFormHasBeenSet(false),
    m_authorizationLetterHasBeenSet(false),
    m_safetyCommitmentHasBeenSet(false),
    m_serviceStartDateHasBeenSet(false),
    m_serviceEndDateHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_legalPersonIdHasBeenSet(false),
    m_legalPersonIdCardHasBeenSet(false)
{
}

CoreInternalOutcome CrossBorderCompliance::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ServiceProvider") && !value["ServiceProvider"].IsNull())
    {
        if (!value["ServiceProvider"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CrossBorderCompliance.ServiceProvider` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceProvider = string(value["ServiceProvider"].GetString());
        m_serviceProviderHasBeenSet = true;
    }

    if (value.HasMember("ComplianceId") && !value["ComplianceId"].IsNull())
    {
        if (!value["ComplianceId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CrossBorderCompliance.ComplianceId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_complianceId = value["ComplianceId"].GetUint64();
        m_complianceIdHasBeenSet = true;
    }

    if (value.HasMember("Company") && !value["Company"].IsNull())
    {
        if (!value["Company"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CrossBorderCompliance.Company` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_company = string(value["Company"].GetString());
        m_companyHasBeenSet = true;
    }

    if (value.HasMember("UniformSocialCreditCode") && !value["UniformSocialCreditCode"].IsNull())
    {
        if (!value["UniformSocialCreditCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CrossBorderCompliance.UniformSocialCreditCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniformSocialCreditCode = string(value["UniformSocialCreditCode"].GetString());
        m_uniformSocialCreditCodeHasBeenSet = true;
    }

    if (value.HasMember("LegalPerson") && !value["LegalPerson"].IsNull())
    {
        if (!value["LegalPerson"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CrossBorderCompliance.LegalPerson` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_legalPerson = string(value["LegalPerson"].GetString());
        m_legalPersonHasBeenSet = true;
    }

    if (value.HasMember("IssuingAuthority") && !value["IssuingAuthority"].IsNull())
    {
        if (!value["IssuingAuthority"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CrossBorderCompliance.IssuingAuthority` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issuingAuthority = string(value["IssuingAuthority"].GetString());
        m_issuingAuthorityHasBeenSet = true;
    }

    if (value.HasMember("BusinessLicense") && !value["BusinessLicense"].IsNull())
    {
        if (!value["BusinessLicense"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CrossBorderCompliance.BusinessLicense` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessLicense = string(value["BusinessLicense"].GetString());
        m_businessLicenseHasBeenSet = true;
    }

    if (value.HasMember("BusinessAddress") && !value["BusinessAddress"].IsNull())
    {
        if (!value["BusinessAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CrossBorderCompliance.BusinessAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessAddress = string(value["BusinessAddress"].GetString());
        m_businessAddressHasBeenSet = true;
    }

    if (value.HasMember("PostCode") && !value["PostCode"].IsNull())
    {
        if (!value["PostCode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CrossBorderCompliance.PostCode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_postCode = value["PostCode"].GetUint64();
        m_postCodeHasBeenSet = true;
    }

    if (value.HasMember("Manager") && !value["Manager"].IsNull())
    {
        if (!value["Manager"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CrossBorderCompliance.Manager` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_manager = string(value["Manager"].GetString());
        m_managerHasBeenSet = true;
    }

    if (value.HasMember("ManagerId") && !value["ManagerId"].IsNull())
    {
        if (!value["ManagerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CrossBorderCompliance.ManagerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_managerId = string(value["ManagerId"].GetString());
        m_managerIdHasBeenSet = true;
    }

    if (value.HasMember("ManagerIdCard") && !value["ManagerIdCard"].IsNull())
    {
        if (!value["ManagerIdCard"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CrossBorderCompliance.ManagerIdCard` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_managerIdCard = string(value["ManagerIdCard"].GetString());
        m_managerIdCardHasBeenSet = true;
    }

    if (value.HasMember("ManagerAddress") && !value["ManagerAddress"].IsNull())
    {
        if (!value["ManagerAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CrossBorderCompliance.ManagerAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_managerAddress = string(value["ManagerAddress"].GetString());
        m_managerAddressHasBeenSet = true;
    }

    if (value.HasMember("ManagerTelephone") && !value["ManagerTelephone"].IsNull())
    {
        if (!value["ManagerTelephone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CrossBorderCompliance.ManagerTelephone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_managerTelephone = string(value["ManagerTelephone"].GetString());
        m_managerTelephoneHasBeenSet = true;
    }

    if (value.HasMember("Email") && !value["Email"].IsNull())
    {
        if (!value["Email"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CrossBorderCompliance.Email` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_email = string(value["Email"].GetString());
        m_emailHasBeenSet = true;
    }

    if (value.HasMember("ServiceHandlingForm") && !value["ServiceHandlingForm"].IsNull())
    {
        if (!value["ServiceHandlingForm"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CrossBorderCompliance.ServiceHandlingForm` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceHandlingForm = string(value["ServiceHandlingForm"].GetString());
        m_serviceHandlingFormHasBeenSet = true;
    }

    if (value.HasMember("AuthorizationLetter") && !value["AuthorizationLetter"].IsNull())
    {
        if (!value["AuthorizationLetter"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CrossBorderCompliance.AuthorizationLetter` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authorizationLetter = string(value["AuthorizationLetter"].GetString());
        m_authorizationLetterHasBeenSet = true;
    }

    if (value.HasMember("SafetyCommitment") && !value["SafetyCommitment"].IsNull())
    {
        if (!value["SafetyCommitment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CrossBorderCompliance.SafetyCommitment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_safetyCommitment = string(value["SafetyCommitment"].GetString());
        m_safetyCommitmentHasBeenSet = true;
    }

    if (value.HasMember("ServiceStartDate") && !value["ServiceStartDate"].IsNull())
    {
        if (!value["ServiceStartDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CrossBorderCompliance.ServiceStartDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceStartDate = string(value["ServiceStartDate"].GetString());
        m_serviceStartDateHasBeenSet = true;
    }

    if (value.HasMember("ServiceEndDate") && !value["ServiceEndDate"].IsNull())
    {
        if (!value["ServiceEndDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CrossBorderCompliance.ServiceEndDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceEndDate = string(value["ServiceEndDate"].GetString());
        m_serviceEndDateHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CrossBorderCompliance.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CrossBorderCompliance.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("LegalPersonId") && !value["LegalPersonId"].IsNull())
    {
        if (!value["LegalPersonId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CrossBorderCompliance.LegalPersonId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_legalPersonId = string(value["LegalPersonId"].GetString());
        m_legalPersonIdHasBeenSet = true;
    }

    if (value.HasMember("LegalPersonIdCard") && !value["LegalPersonIdCard"].IsNull())
    {
        if (!value["LegalPersonIdCard"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CrossBorderCompliance.LegalPersonIdCard` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_legalPersonIdCard = string(value["LegalPersonIdCard"].GetString());
        m_legalPersonIdCardHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CrossBorderCompliance::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_serviceProviderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceProvider";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceProvider.c_str(), allocator).Move(), allocator);
    }

    if (m_complianceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComplianceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_complianceId, allocator);
    }

    if (m_companyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Company";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_company.c_str(), allocator).Move(), allocator);
    }

    if (m_uniformSocialCreditCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniformSocialCreditCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uniformSocialCreditCode.c_str(), allocator).Move(), allocator);
    }

    if (m_legalPersonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LegalPerson";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_legalPerson.c_str(), allocator).Move(), allocator);
    }

    if (m_issuingAuthorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IssuingAuthority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_issuingAuthority.c_str(), allocator).Move(), allocator);
    }

    if (m_businessLicenseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessLicense";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_businessLicense.c_str(), allocator).Move(), allocator);
    }

    if (m_businessAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_businessAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_postCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PostCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_postCode, allocator);
    }

    if (m_managerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Manager";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_manager.c_str(), allocator).Move(), allocator);
    }

    if (m_managerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManagerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_managerId.c_str(), allocator).Move(), allocator);
    }

    if (m_managerIdCardHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManagerIdCard";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_managerIdCard.c_str(), allocator).Move(), allocator);
    }

    if (m_managerAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManagerAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_managerAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_managerTelephoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManagerTelephone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_managerTelephone.c_str(), allocator).Move(), allocator);
    }

    if (m_emailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Email";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_email.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceHandlingFormHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceHandlingForm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceHandlingForm.c_str(), allocator).Move(), allocator);
    }

    if (m_authorizationLetterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorizationLetter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authorizationLetter.c_str(), allocator).Move(), allocator);
    }

    if (m_safetyCommitmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SafetyCommitment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_safetyCommitment.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceStartDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceStartDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceStartDate.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceEndDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceEndDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceEndDate.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_legalPersonIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LegalPersonId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_legalPersonId.c_str(), allocator).Move(), allocator);
    }

    if (m_legalPersonIdCardHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LegalPersonIdCard";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_legalPersonIdCard.c_str(), allocator).Move(), allocator);
    }

}


string CrossBorderCompliance::GetServiceProvider() const
{
    return m_serviceProvider;
}

void CrossBorderCompliance::SetServiceProvider(const string& _serviceProvider)
{
    m_serviceProvider = _serviceProvider;
    m_serviceProviderHasBeenSet = true;
}

bool CrossBorderCompliance::ServiceProviderHasBeenSet() const
{
    return m_serviceProviderHasBeenSet;
}

uint64_t CrossBorderCompliance::GetComplianceId() const
{
    return m_complianceId;
}

void CrossBorderCompliance::SetComplianceId(const uint64_t& _complianceId)
{
    m_complianceId = _complianceId;
    m_complianceIdHasBeenSet = true;
}

bool CrossBorderCompliance::ComplianceIdHasBeenSet() const
{
    return m_complianceIdHasBeenSet;
}

string CrossBorderCompliance::GetCompany() const
{
    return m_company;
}

void CrossBorderCompliance::SetCompany(const string& _company)
{
    m_company = _company;
    m_companyHasBeenSet = true;
}

bool CrossBorderCompliance::CompanyHasBeenSet() const
{
    return m_companyHasBeenSet;
}

string CrossBorderCompliance::GetUniformSocialCreditCode() const
{
    return m_uniformSocialCreditCode;
}

void CrossBorderCompliance::SetUniformSocialCreditCode(const string& _uniformSocialCreditCode)
{
    m_uniformSocialCreditCode = _uniformSocialCreditCode;
    m_uniformSocialCreditCodeHasBeenSet = true;
}

bool CrossBorderCompliance::UniformSocialCreditCodeHasBeenSet() const
{
    return m_uniformSocialCreditCodeHasBeenSet;
}

string CrossBorderCompliance::GetLegalPerson() const
{
    return m_legalPerson;
}

void CrossBorderCompliance::SetLegalPerson(const string& _legalPerson)
{
    m_legalPerson = _legalPerson;
    m_legalPersonHasBeenSet = true;
}

bool CrossBorderCompliance::LegalPersonHasBeenSet() const
{
    return m_legalPersonHasBeenSet;
}

string CrossBorderCompliance::GetIssuingAuthority() const
{
    return m_issuingAuthority;
}

void CrossBorderCompliance::SetIssuingAuthority(const string& _issuingAuthority)
{
    m_issuingAuthority = _issuingAuthority;
    m_issuingAuthorityHasBeenSet = true;
}

bool CrossBorderCompliance::IssuingAuthorityHasBeenSet() const
{
    return m_issuingAuthorityHasBeenSet;
}

string CrossBorderCompliance::GetBusinessLicense() const
{
    return m_businessLicense;
}

void CrossBorderCompliance::SetBusinessLicense(const string& _businessLicense)
{
    m_businessLicense = _businessLicense;
    m_businessLicenseHasBeenSet = true;
}

bool CrossBorderCompliance::BusinessLicenseHasBeenSet() const
{
    return m_businessLicenseHasBeenSet;
}

string CrossBorderCompliance::GetBusinessAddress() const
{
    return m_businessAddress;
}

void CrossBorderCompliance::SetBusinessAddress(const string& _businessAddress)
{
    m_businessAddress = _businessAddress;
    m_businessAddressHasBeenSet = true;
}

bool CrossBorderCompliance::BusinessAddressHasBeenSet() const
{
    return m_businessAddressHasBeenSet;
}

uint64_t CrossBorderCompliance::GetPostCode() const
{
    return m_postCode;
}

void CrossBorderCompliance::SetPostCode(const uint64_t& _postCode)
{
    m_postCode = _postCode;
    m_postCodeHasBeenSet = true;
}

bool CrossBorderCompliance::PostCodeHasBeenSet() const
{
    return m_postCodeHasBeenSet;
}

string CrossBorderCompliance::GetManager() const
{
    return m_manager;
}

void CrossBorderCompliance::SetManager(const string& _manager)
{
    m_manager = _manager;
    m_managerHasBeenSet = true;
}

bool CrossBorderCompliance::ManagerHasBeenSet() const
{
    return m_managerHasBeenSet;
}

string CrossBorderCompliance::GetManagerId() const
{
    return m_managerId;
}

void CrossBorderCompliance::SetManagerId(const string& _managerId)
{
    m_managerId = _managerId;
    m_managerIdHasBeenSet = true;
}

bool CrossBorderCompliance::ManagerIdHasBeenSet() const
{
    return m_managerIdHasBeenSet;
}

string CrossBorderCompliance::GetManagerIdCard() const
{
    return m_managerIdCard;
}

void CrossBorderCompliance::SetManagerIdCard(const string& _managerIdCard)
{
    m_managerIdCard = _managerIdCard;
    m_managerIdCardHasBeenSet = true;
}

bool CrossBorderCompliance::ManagerIdCardHasBeenSet() const
{
    return m_managerIdCardHasBeenSet;
}

string CrossBorderCompliance::GetManagerAddress() const
{
    return m_managerAddress;
}

void CrossBorderCompliance::SetManagerAddress(const string& _managerAddress)
{
    m_managerAddress = _managerAddress;
    m_managerAddressHasBeenSet = true;
}

bool CrossBorderCompliance::ManagerAddressHasBeenSet() const
{
    return m_managerAddressHasBeenSet;
}

string CrossBorderCompliance::GetManagerTelephone() const
{
    return m_managerTelephone;
}

void CrossBorderCompliance::SetManagerTelephone(const string& _managerTelephone)
{
    m_managerTelephone = _managerTelephone;
    m_managerTelephoneHasBeenSet = true;
}

bool CrossBorderCompliance::ManagerTelephoneHasBeenSet() const
{
    return m_managerTelephoneHasBeenSet;
}

string CrossBorderCompliance::GetEmail() const
{
    return m_email;
}

void CrossBorderCompliance::SetEmail(const string& _email)
{
    m_email = _email;
    m_emailHasBeenSet = true;
}

bool CrossBorderCompliance::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}

string CrossBorderCompliance::GetServiceHandlingForm() const
{
    return m_serviceHandlingForm;
}

void CrossBorderCompliance::SetServiceHandlingForm(const string& _serviceHandlingForm)
{
    m_serviceHandlingForm = _serviceHandlingForm;
    m_serviceHandlingFormHasBeenSet = true;
}

bool CrossBorderCompliance::ServiceHandlingFormHasBeenSet() const
{
    return m_serviceHandlingFormHasBeenSet;
}

string CrossBorderCompliance::GetAuthorizationLetter() const
{
    return m_authorizationLetter;
}

void CrossBorderCompliance::SetAuthorizationLetter(const string& _authorizationLetter)
{
    m_authorizationLetter = _authorizationLetter;
    m_authorizationLetterHasBeenSet = true;
}

bool CrossBorderCompliance::AuthorizationLetterHasBeenSet() const
{
    return m_authorizationLetterHasBeenSet;
}

string CrossBorderCompliance::GetSafetyCommitment() const
{
    return m_safetyCommitment;
}

void CrossBorderCompliance::SetSafetyCommitment(const string& _safetyCommitment)
{
    m_safetyCommitment = _safetyCommitment;
    m_safetyCommitmentHasBeenSet = true;
}

bool CrossBorderCompliance::SafetyCommitmentHasBeenSet() const
{
    return m_safetyCommitmentHasBeenSet;
}

string CrossBorderCompliance::GetServiceStartDate() const
{
    return m_serviceStartDate;
}

void CrossBorderCompliance::SetServiceStartDate(const string& _serviceStartDate)
{
    m_serviceStartDate = _serviceStartDate;
    m_serviceStartDateHasBeenSet = true;
}

bool CrossBorderCompliance::ServiceStartDateHasBeenSet() const
{
    return m_serviceStartDateHasBeenSet;
}

string CrossBorderCompliance::GetServiceEndDate() const
{
    return m_serviceEndDate;
}

void CrossBorderCompliance::SetServiceEndDate(const string& _serviceEndDate)
{
    m_serviceEndDate = _serviceEndDate;
    m_serviceEndDateHasBeenSet = true;
}

bool CrossBorderCompliance::ServiceEndDateHasBeenSet() const
{
    return m_serviceEndDateHasBeenSet;
}

string CrossBorderCompliance::GetState() const
{
    return m_state;
}

void CrossBorderCompliance::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool CrossBorderCompliance::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string CrossBorderCompliance::GetCreatedTime() const
{
    return m_createdTime;
}

void CrossBorderCompliance::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool CrossBorderCompliance::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string CrossBorderCompliance::GetLegalPersonId() const
{
    return m_legalPersonId;
}

void CrossBorderCompliance::SetLegalPersonId(const string& _legalPersonId)
{
    m_legalPersonId = _legalPersonId;
    m_legalPersonIdHasBeenSet = true;
}

bool CrossBorderCompliance::LegalPersonIdHasBeenSet() const
{
    return m_legalPersonIdHasBeenSet;
}

string CrossBorderCompliance::GetLegalPersonIdCard() const
{
    return m_legalPersonIdCard;
}

void CrossBorderCompliance::SetLegalPersonIdCard(const string& _legalPersonIdCard)
{
    m_legalPersonIdCard = _legalPersonIdCard;
    m_legalPersonIdCardHasBeenSet = true;
}

bool CrossBorderCompliance::LegalPersonIdCardHasBeenSet() const
{
    return m_legalPersonIdCardHasBeenSet;
}

