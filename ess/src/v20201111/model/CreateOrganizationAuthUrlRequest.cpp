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

#include <tencentcloud/ess/v20201111/model/CreateOrganizationAuthUrlRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

CreateOrganizationAuthUrlRequest::CreateOrganizationAuthUrlRequest() :
    m_operatorHasBeenSet(false),
    m_authorizationTypesHasBeenSet(false),
    m_organizationNameHasBeenSet(false),
    m_uniformSocialCreditCodeHasBeenSet(false),
    m_legalNameHasBeenSet(false),
    m_autoJumpUrlHasBeenSet(false),
    m_organizationAddressHasBeenSet(false),
    m_adminNameHasBeenSet(false),
    m_adminMobileHasBeenSet(false),
    m_adminIdCardNumberHasBeenSet(false),
    m_adminIdCardTypeHasBeenSet(false),
    m_uniformSocialCreditCodeSameHasBeenSet(false),
    m_legalNameSameHasBeenSet(false),
    m_adminNameSameHasBeenSet(false),
    m_adminIdCardNumberSameHasBeenSet(false),
    m_adminMobileSameHasBeenSet(false),
    m_organizationNameSameHasBeenSet(false),
    m_businessLicenseHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_initializationHasBeenSet(false),
    m_powerOfAttorneysHasBeenSet(false)
{
}

string CreateOrganizationAuthUrlRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_operator.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_authorizationTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorizationTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_authorizationTypes.begin(); itr != m_authorizationTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_organizationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_organizationName.c_str(), allocator).Move(), allocator);
    }

    if (m_uniformSocialCreditCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniformSocialCreditCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_uniformSocialCreditCode.c_str(), allocator).Move(), allocator);
    }

    if (m_legalNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LegalName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_legalName.c_str(), allocator).Move(), allocator);
    }

    if (m_autoJumpUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoJumpUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_autoJumpUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_organizationAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationAddress";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_organizationAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_adminNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdminName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_adminName.c_str(), allocator).Move(), allocator);
    }

    if (m_adminMobileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdminMobile";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_adminMobile.c_str(), allocator).Move(), allocator);
    }

    if (m_adminIdCardNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdminIdCardNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_adminIdCardNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_adminIdCardTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdminIdCardType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_adminIdCardType.c_str(), allocator).Move(), allocator);
    }

    if (m_uniformSocialCreditCodeSameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniformSocialCreditCodeSame";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_uniformSocialCreditCodeSame, allocator);
    }

    if (m_legalNameSameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LegalNameSame";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_legalNameSame, allocator);
    }

    if (m_adminNameSameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdminNameSame";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_adminNameSame, allocator);
    }

    if (m_adminIdCardNumberSameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdminIdCardNumberSame";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_adminIdCardNumberSame, allocator);
    }

    if (m_adminMobileSameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdminMobileSame";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_adminMobileSame, allocator);
    }

    if (m_organizationNameSameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationNameSame";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_organizationNameSame, allocator);
    }

    if (m_businessLicenseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessLicense";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_businessLicense.c_str(), allocator).Move(), allocator);
    }

    if (m_endpointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Endpoint";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endpoint.c_str(), allocator).Move(), allocator);
    }

    if (m_initializationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Initialization";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_initialization.begin(); itr != m_initialization.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_powerOfAttorneysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PowerOfAttorneys";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_powerOfAttorneys.begin(); itr != m_powerOfAttorneys.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


UserInfo CreateOrganizationAuthUrlRequest::GetOperator() const
{
    return m_operator;
}

void CreateOrganizationAuthUrlRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool CreateOrganizationAuthUrlRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

vector<uint64_t> CreateOrganizationAuthUrlRequest::GetAuthorizationTypes() const
{
    return m_authorizationTypes;
}

void CreateOrganizationAuthUrlRequest::SetAuthorizationTypes(const vector<uint64_t>& _authorizationTypes)
{
    m_authorizationTypes = _authorizationTypes;
    m_authorizationTypesHasBeenSet = true;
}

bool CreateOrganizationAuthUrlRequest::AuthorizationTypesHasBeenSet() const
{
    return m_authorizationTypesHasBeenSet;
}

string CreateOrganizationAuthUrlRequest::GetOrganizationName() const
{
    return m_organizationName;
}

void CreateOrganizationAuthUrlRequest::SetOrganizationName(const string& _organizationName)
{
    m_organizationName = _organizationName;
    m_organizationNameHasBeenSet = true;
}

bool CreateOrganizationAuthUrlRequest::OrganizationNameHasBeenSet() const
{
    return m_organizationNameHasBeenSet;
}

string CreateOrganizationAuthUrlRequest::GetUniformSocialCreditCode() const
{
    return m_uniformSocialCreditCode;
}

void CreateOrganizationAuthUrlRequest::SetUniformSocialCreditCode(const string& _uniformSocialCreditCode)
{
    m_uniformSocialCreditCode = _uniformSocialCreditCode;
    m_uniformSocialCreditCodeHasBeenSet = true;
}

bool CreateOrganizationAuthUrlRequest::UniformSocialCreditCodeHasBeenSet() const
{
    return m_uniformSocialCreditCodeHasBeenSet;
}

string CreateOrganizationAuthUrlRequest::GetLegalName() const
{
    return m_legalName;
}

void CreateOrganizationAuthUrlRequest::SetLegalName(const string& _legalName)
{
    m_legalName = _legalName;
    m_legalNameHasBeenSet = true;
}

bool CreateOrganizationAuthUrlRequest::LegalNameHasBeenSet() const
{
    return m_legalNameHasBeenSet;
}

string CreateOrganizationAuthUrlRequest::GetAutoJumpUrl() const
{
    return m_autoJumpUrl;
}

void CreateOrganizationAuthUrlRequest::SetAutoJumpUrl(const string& _autoJumpUrl)
{
    m_autoJumpUrl = _autoJumpUrl;
    m_autoJumpUrlHasBeenSet = true;
}

bool CreateOrganizationAuthUrlRequest::AutoJumpUrlHasBeenSet() const
{
    return m_autoJumpUrlHasBeenSet;
}

string CreateOrganizationAuthUrlRequest::GetOrganizationAddress() const
{
    return m_organizationAddress;
}

void CreateOrganizationAuthUrlRequest::SetOrganizationAddress(const string& _organizationAddress)
{
    m_organizationAddress = _organizationAddress;
    m_organizationAddressHasBeenSet = true;
}

bool CreateOrganizationAuthUrlRequest::OrganizationAddressHasBeenSet() const
{
    return m_organizationAddressHasBeenSet;
}

string CreateOrganizationAuthUrlRequest::GetAdminName() const
{
    return m_adminName;
}

void CreateOrganizationAuthUrlRequest::SetAdminName(const string& _adminName)
{
    m_adminName = _adminName;
    m_adminNameHasBeenSet = true;
}

bool CreateOrganizationAuthUrlRequest::AdminNameHasBeenSet() const
{
    return m_adminNameHasBeenSet;
}

string CreateOrganizationAuthUrlRequest::GetAdminMobile() const
{
    return m_adminMobile;
}

void CreateOrganizationAuthUrlRequest::SetAdminMobile(const string& _adminMobile)
{
    m_adminMobile = _adminMobile;
    m_adminMobileHasBeenSet = true;
}

bool CreateOrganizationAuthUrlRequest::AdminMobileHasBeenSet() const
{
    return m_adminMobileHasBeenSet;
}

string CreateOrganizationAuthUrlRequest::GetAdminIdCardNumber() const
{
    return m_adminIdCardNumber;
}

void CreateOrganizationAuthUrlRequest::SetAdminIdCardNumber(const string& _adminIdCardNumber)
{
    m_adminIdCardNumber = _adminIdCardNumber;
    m_adminIdCardNumberHasBeenSet = true;
}

bool CreateOrganizationAuthUrlRequest::AdminIdCardNumberHasBeenSet() const
{
    return m_adminIdCardNumberHasBeenSet;
}

string CreateOrganizationAuthUrlRequest::GetAdminIdCardType() const
{
    return m_adminIdCardType;
}

void CreateOrganizationAuthUrlRequest::SetAdminIdCardType(const string& _adminIdCardType)
{
    m_adminIdCardType = _adminIdCardType;
    m_adminIdCardTypeHasBeenSet = true;
}

bool CreateOrganizationAuthUrlRequest::AdminIdCardTypeHasBeenSet() const
{
    return m_adminIdCardTypeHasBeenSet;
}

bool CreateOrganizationAuthUrlRequest::GetUniformSocialCreditCodeSame() const
{
    return m_uniformSocialCreditCodeSame;
}

void CreateOrganizationAuthUrlRequest::SetUniformSocialCreditCodeSame(const bool& _uniformSocialCreditCodeSame)
{
    m_uniformSocialCreditCodeSame = _uniformSocialCreditCodeSame;
    m_uniformSocialCreditCodeSameHasBeenSet = true;
}

bool CreateOrganizationAuthUrlRequest::UniformSocialCreditCodeSameHasBeenSet() const
{
    return m_uniformSocialCreditCodeSameHasBeenSet;
}

bool CreateOrganizationAuthUrlRequest::GetLegalNameSame() const
{
    return m_legalNameSame;
}

void CreateOrganizationAuthUrlRequest::SetLegalNameSame(const bool& _legalNameSame)
{
    m_legalNameSame = _legalNameSame;
    m_legalNameSameHasBeenSet = true;
}

bool CreateOrganizationAuthUrlRequest::LegalNameSameHasBeenSet() const
{
    return m_legalNameSameHasBeenSet;
}

bool CreateOrganizationAuthUrlRequest::GetAdminNameSame() const
{
    return m_adminNameSame;
}

void CreateOrganizationAuthUrlRequest::SetAdminNameSame(const bool& _adminNameSame)
{
    m_adminNameSame = _adminNameSame;
    m_adminNameSameHasBeenSet = true;
}

bool CreateOrganizationAuthUrlRequest::AdminNameSameHasBeenSet() const
{
    return m_adminNameSameHasBeenSet;
}

bool CreateOrganizationAuthUrlRequest::GetAdminIdCardNumberSame() const
{
    return m_adminIdCardNumberSame;
}

void CreateOrganizationAuthUrlRequest::SetAdminIdCardNumberSame(const bool& _adminIdCardNumberSame)
{
    m_adminIdCardNumberSame = _adminIdCardNumberSame;
    m_adminIdCardNumberSameHasBeenSet = true;
}

bool CreateOrganizationAuthUrlRequest::AdminIdCardNumberSameHasBeenSet() const
{
    return m_adminIdCardNumberSameHasBeenSet;
}

bool CreateOrganizationAuthUrlRequest::GetAdminMobileSame() const
{
    return m_adminMobileSame;
}

void CreateOrganizationAuthUrlRequest::SetAdminMobileSame(const bool& _adminMobileSame)
{
    m_adminMobileSame = _adminMobileSame;
    m_adminMobileSameHasBeenSet = true;
}

bool CreateOrganizationAuthUrlRequest::AdminMobileSameHasBeenSet() const
{
    return m_adminMobileSameHasBeenSet;
}

bool CreateOrganizationAuthUrlRequest::GetOrganizationNameSame() const
{
    return m_organizationNameSame;
}

void CreateOrganizationAuthUrlRequest::SetOrganizationNameSame(const bool& _organizationNameSame)
{
    m_organizationNameSame = _organizationNameSame;
    m_organizationNameSameHasBeenSet = true;
}

bool CreateOrganizationAuthUrlRequest::OrganizationNameSameHasBeenSet() const
{
    return m_organizationNameSameHasBeenSet;
}

string CreateOrganizationAuthUrlRequest::GetBusinessLicense() const
{
    return m_businessLicense;
}

void CreateOrganizationAuthUrlRequest::SetBusinessLicense(const string& _businessLicense)
{
    m_businessLicense = _businessLicense;
    m_businessLicenseHasBeenSet = true;
}

bool CreateOrganizationAuthUrlRequest::BusinessLicenseHasBeenSet() const
{
    return m_businessLicenseHasBeenSet;
}

string CreateOrganizationAuthUrlRequest::GetEndpoint() const
{
    return m_endpoint;
}

void CreateOrganizationAuthUrlRequest::SetEndpoint(const string& _endpoint)
{
    m_endpoint = _endpoint;
    m_endpointHasBeenSet = true;
}

bool CreateOrganizationAuthUrlRequest::EndpointHasBeenSet() const
{
    return m_endpointHasBeenSet;
}

vector<uint64_t> CreateOrganizationAuthUrlRequest::GetInitialization() const
{
    return m_initialization;
}

void CreateOrganizationAuthUrlRequest::SetInitialization(const vector<uint64_t>& _initialization)
{
    m_initialization = _initialization;
    m_initializationHasBeenSet = true;
}

bool CreateOrganizationAuthUrlRequest::InitializationHasBeenSet() const
{
    return m_initializationHasBeenSet;
}

vector<string> CreateOrganizationAuthUrlRequest::GetPowerOfAttorneys() const
{
    return m_powerOfAttorneys;
}

void CreateOrganizationAuthUrlRequest::SetPowerOfAttorneys(const vector<string>& _powerOfAttorneys)
{
    m_powerOfAttorneys = _powerOfAttorneys;
    m_powerOfAttorneysHasBeenSet = true;
}

bool CreateOrganizationAuthUrlRequest::PowerOfAttorneysHasBeenSet() const
{
    return m_powerOfAttorneysHasBeenSet;
}


