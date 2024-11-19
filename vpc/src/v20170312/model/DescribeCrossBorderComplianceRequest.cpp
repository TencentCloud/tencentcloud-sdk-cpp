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

#include <tencentcloud/vpc/v20170312/model/DescribeCrossBorderComplianceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

DescribeCrossBorderComplianceRequest::DescribeCrossBorderComplianceRequest() :
    m_serviceProviderHasBeenSet(false),
    m_complianceIdHasBeenSet(false),
    m_companyHasBeenSet(false),
    m_uniformSocialCreditCodeHasBeenSet(false),
    m_legalPersonHasBeenSet(false),
    m_legalPersonIdHasBeenSet(false),
    m_issuingAuthorityHasBeenSet(false),
    m_businessAddressHasBeenSet(false),
    m_postCodeHasBeenSet(false),
    m_managerHasBeenSet(false),
    m_managerIdHasBeenSet(false),
    m_managerAddressHasBeenSet(false),
    m_managerTelephoneHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_serviceStartDateHasBeenSet(false),
    m_serviceEndDateHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

string DescribeCrossBorderComplianceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_serviceProviderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceProvider";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceProvider.c_str(), allocator).Move(), allocator);
    }

    if (m_complianceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComplianceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_complianceId, allocator);
    }

    if (m_companyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Company";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_company.c_str(), allocator).Move(), allocator);
    }

    if (m_uniformSocialCreditCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniformSocialCreditCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_uniformSocialCreditCode.c_str(), allocator).Move(), allocator);
    }

    if (m_legalPersonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LegalPerson";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_legalPerson.c_str(), allocator).Move(), allocator);
    }

    if (m_legalPersonIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LegalPersonId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_legalPersonId.c_str(), allocator).Move(), allocator);
    }

    if (m_issuingAuthorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IssuingAuthority";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_issuingAuthority.c_str(), allocator).Move(), allocator);
    }

    if (m_businessAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessAddress";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_businessAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_postCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PostCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_postCode, allocator);
    }

    if (m_managerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Manager";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_manager.c_str(), allocator).Move(), allocator);
    }

    if (m_managerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManagerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_managerId.c_str(), allocator).Move(), allocator);
    }

    if (m_managerAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManagerAddress";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_managerAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_managerTelephoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManagerTelephone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_managerTelephone.c_str(), allocator).Move(), allocator);
    }

    if (m_emailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Email";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_email.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceStartDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceStartDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceStartDate.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceEndDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceEndDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceEndDate.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeCrossBorderComplianceRequest::GetServiceProvider() const
{
    return m_serviceProvider;
}

void DescribeCrossBorderComplianceRequest::SetServiceProvider(const string& _serviceProvider)
{
    m_serviceProvider = _serviceProvider;
    m_serviceProviderHasBeenSet = true;
}

bool DescribeCrossBorderComplianceRequest::ServiceProviderHasBeenSet() const
{
    return m_serviceProviderHasBeenSet;
}

uint64_t DescribeCrossBorderComplianceRequest::GetComplianceId() const
{
    return m_complianceId;
}

void DescribeCrossBorderComplianceRequest::SetComplianceId(const uint64_t& _complianceId)
{
    m_complianceId = _complianceId;
    m_complianceIdHasBeenSet = true;
}

bool DescribeCrossBorderComplianceRequest::ComplianceIdHasBeenSet() const
{
    return m_complianceIdHasBeenSet;
}

string DescribeCrossBorderComplianceRequest::GetCompany() const
{
    return m_company;
}

void DescribeCrossBorderComplianceRequest::SetCompany(const string& _company)
{
    m_company = _company;
    m_companyHasBeenSet = true;
}

bool DescribeCrossBorderComplianceRequest::CompanyHasBeenSet() const
{
    return m_companyHasBeenSet;
}

string DescribeCrossBorderComplianceRequest::GetUniformSocialCreditCode() const
{
    return m_uniformSocialCreditCode;
}

void DescribeCrossBorderComplianceRequest::SetUniformSocialCreditCode(const string& _uniformSocialCreditCode)
{
    m_uniformSocialCreditCode = _uniformSocialCreditCode;
    m_uniformSocialCreditCodeHasBeenSet = true;
}

bool DescribeCrossBorderComplianceRequest::UniformSocialCreditCodeHasBeenSet() const
{
    return m_uniformSocialCreditCodeHasBeenSet;
}

string DescribeCrossBorderComplianceRequest::GetLegalPerson() const
{
    return m_legalPerson;
}

void DescribeCrossBorderComplianceRequest::SetLegalPerson(const string& _legalPerson)
{
    m_legalPerson = _legalPerson;
    m_legalPersonHasBeenSet = true;
}

bool DescribeCrossBorderComplianceRequest::LegalPersonHasBeenSet() const
{
    return m_legalPersonHasBeenSet;
}

string DescribeCrossBorderComplianceRequest::GetLegalPersonId() const
{
    return m_legalPersonId;
}

void DescribeCrossBorderComplianceRequest::SetLegalPersonId(const string& _legalPersonId)
{
    m_legalPersonId = _legalPersonId;
    m_legalPersonIdHasBeenSet = true;
}

bool DescribeCrossBorderComplianceRequest::LegalPersonIdHasBeenSet() const
{
    return m_legalPersonIdHasBeenSet;
}

string DescribeCrossBorderComplianceRequest::GetIssuingAuthority() const
{
    return m_issuingAuthority;
}

void DescribeCrossBorderComplianceRequest::SetIssuingAuthority(const string& _issuingAuthority)
{
    m_issuingAuthority = _issuingAuthority;
    m_issuingAuthorityHasBeenSet = true;
}

bool DescribeCrossBorderComplianceRequest::IssuingAuthorityHasBeenSet() const
{
    return m_issuingAuthorityHasBeenSet;
}

string DescribeCrossBorderComplianceRequest::GetBusinessAddress() const
{
    return m_businessAddress;
}

void DescribeCrossBorderComplianceRequest::SetBusinessAddress(const string& _businessAddress)
{
    m_businessAddress = _businessAddress;
    m_businessAddressHasBeenSet = true;
}

bool DescribeCrossBorderComplianceRequest::BusinessAddressHasBeenSet() const
{
    return m_businessAddressHasBeenSet;
}

uint64_t DescribeCrossBorderComplianceRequest::GetPostCode() const
{
    return m_postCode;
}

void DescribeCrossBorderComplianceRequest::SetPostCode(const uint64_t& _postCode)
{
    m_postCode = _postCode;
    m_postCodeHasBeenSet = true;
}

bool DescribeCrossBorderComplianceRequest::PostCodeHasBeenSet() const
{
    return m_postCodeHasBeenSet;
}

string DescribeCrossBorderComplianceRequest::GetManager() const
{
    return m_manager;
}

void DescribeCrossBorderComplianceRequest::SetManager(const string& _manager)
{
    m_manager = _manager;
    m_managerHasBeenSet = true;
}

bool DescribeCrossBorderComplianceRequest::ManagerHasBeenSet() const
{
    return m_managerHasBeenSet;
}

string DescribeCrossBorderComplianceRequest::GetManagerId() const
{
    return m_managerId;
}

void DescribeCrossBorderComplianceRequest::SetManagerId(const string& _managerId)
{
    m_managerId = _managerId;
    m_managerIdHasBeenSet = true;
}

bool DescribeCrossBorderComplianceRequest::ManagerIdHasBeenSet() const
{
    return m_managerIdHasBeenSet;
}

string DescribeCrossBorderComplianceRequest::GetManagerAddress() const
{
    return m_managerAddress;
}

void DescribeCrossBorderComplianceRequest::SetManagerAddress(const string& _managerAddress)
{
    m_managerAddress = _managerAddress;
    m_managerAddressHasBeenSet = true;
}

bool DescribeCrossBorderComplianceRequest::ManagerAddressHasBeenSet() const
{
    return m_managerAddressHasBeenSet;
}

string DescribeCrossBorderComplianceRequest::GetManagerTelephone() const
{
    return m_managerTelephone;
}

void DescribeCrossBorderComplianceRequest::SetManagerTelephone(const string& _managerTelephone)
{
    m_managerTelephone = _managerTelephone;
    m_managerTelephoneHasBeenSet = true;
}

bool DescribeCrossBorderComplianceRequest::ManagerTelephoneHasBeenSet() const
{
    return m_managerTelephoneHasBeenSet;
}

string DescribeCrossBorderComplianceRequest::GetEmail() const
{
    return m_email;
}

void DescribeCrossBorderComplianceRequest::SetEmail(const string& _email)
{
    m_email = _email;
    m_emailHasBeenSet = true;
}

bool DescribeCrossBorderComplianceRequest::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}

string DescribeCrossBorderComplianceRequest::GetServiceStartDate() const
{
    return m_serviceStartDate;
}

void DescribeCrossBorderComplianceRequest::SetServiceStartDate(const string& _serviceStartDate)
{
    m_serviceStartDate = _serviceStartDate;
    m_serviceStartDateHasBeenSet = true;
}

bool DescribeCrossBorderComplianceRequest::ServiceStartDateHasBeenSet() const
{
    return m_serviceStartDateHasBeenSet;
}

string DescribeCrossBorderComplianceRequest::GetServiceEndDate() const
{
    return m_serviceEndDate;
}

void DescribeCrossBorderComplianceRequest::SetServiceEndDate(const string& _serviceEndDate)
{
    m_serviceEndDate = _serviceEndDate;
    m_serviceEndDateHasBeenSet = true;
}

bool DescribeCrossBorderComplianceRequest::ServiceEndDateHasBeenSet() const
{
    return m_serviceEndDateHasBeenSet;
}

string DescribeCrossBorderComplianceRequest::GetState() const
{
    return m_state;
}

void DescribeCrossBorderComplianceRequest::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool DescribeCrossBorderComplianceRequest::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

uint64_t DescribeCrossBorderComplianceRequest::GetOffset() const
{
    return m_offset;
}

void DescribeCrossBorderComplianceRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeCrossBorderComplianceRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeCrossBorderComplianceRequest::GetLimit() const
{
    return m_limit;
}

void DescribeCrossBorderComplianceRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeCrossBorderComplianceRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}


