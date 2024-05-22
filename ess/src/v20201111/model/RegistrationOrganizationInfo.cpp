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

#include <tencentcloud/ess/v20201111/model/RegistrationOrganizationInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

RegistrationOrganizationInfo::RegistrationOrganizationInfo() :
    m_organizationNameHasBeenSet(false),
    m_uniformSocialCreditCodeHasBeenSet(false),
    m_legalNameHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_adminNameHasBeenSet(false),
    m_adminMobileHasBeenSet(false),
    m_authorizationTypesHasBeenSet(false),
    m_adminIdCardNumberHasBeenSet(false),
    m_adminIdCardTypeHasBeenSet(false),
    m_businessLicenseHasBeenSet(false),
    m_powerOfAttorneysHasBeenSet(false)
{
}

CoreInternalOutcome RegistrationOrganizationInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OrganizationName") && !value["OrganizationName"].IsNull())
    {
        if (!value["OrganizationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegistrationOrganizationInfo.OrganizationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_organizationName = string(value["OrganizationName"].GetString());
        m_organizationNameHasBeenSet = true;
    }

    if (value.HasMember("UniformSocialCreditCode") && !value["UniformSocialCreditCode"].IsNull())
    {
        if (!value["UniformSocialCreditCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegistrationOrganizationInfo.UniformSocialCreditCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniformSocialCreditCode = string(value["UniformSocialCreditCode"].GetString());
        m_uniformSocialCreditCodeHasBeenSet = true;
    }

    if (value.HasMember("LegalName") && !value["LegalName"].IsNull())
    {
        if (!value["LegalName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegistrationOrganizationInfo.LegalName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_legalName = string(value["LegalName"].GetString());
        m_legalNameHasBeenSet = true;
    }

    if (value.HasMember("Address") && !value["Address"].IsNull())
    {
        if (!value["Address"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegistrationOrganizationInfo.Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_address = string(value["Address"].GetString());
        m_addressHasBeenSet = true;
    }

    if (value.HasMember("AdminName") && !value["AdminName"].IsNull())
    {
        if (!value["AdminName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegistrationOrganizationInfo.AdminName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_adminName = string(value["AdminName"].GetString());
        m_adminNameHasBeenSet = true;
    }

    if (value.HasMember("AdminMobile") && !value["AdminMobile"].IsNull())
    {
        if (!value["AdminMobile"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegistrationOrganizationInfo.AdminMobile` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_adminMobile = string(value["AdminMobile"].GetString());
        m_adminMobileHasBeenSet = true;
    }

    if (value.HasMember("AuthorizationTypes") && !value["AuthorizationTypes"].IsNull())
    {
        if (!value["AuthorizationTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RegistrationOrganizationInfo.AuthorizationTypes` is not array type"));

        const rapidjson::Value &tmpValue = value["AuthorizationTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_authorizationTypes.push_back((*itr).GetUint64());
        }
        m_authorizationTypesHasBeenSet = true;
    }

    if (value.HasMember("AdminIdCardNumber") && !value["AdminIdCardNumber"].IsNull())
    {
        if (!value["AdminIdCardNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegistrationOrganizationInfo.AdminIdCardNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_adminIdCardNumber = string(value["AdminIdCardNumber"].GetString());
        m_adminIdCardNumberHasBeenSet = true;
    }

    if (value.HasMember("AdminIdCardType") && !value["AdminIdCardType"].IsNull())
    {
        if (!value["AdminIdCardType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegistrationOrganizationInfo.AdminIdCardType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_adminIdCardType = string(value["AdminIdCardType"].GetString());
        m_adminIdCardTypeHasBeenSet = true;
    }

    if (value.HasMember("BusinessLicense") && !value["BusinessLicense"].IsNull())
    {
        if (!value["BusinessLicense"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegistrationOrganizationInfo.BusinessLicense` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessLicense = string(value["BusinessLicense"].GetString());
        m_businessLicenseHasBeenSet = true;
    }

    if (value.HasMember("PowerOfAttorneys") && !value["PowerOfAttorneys"].IsNull())
    {
        if (!value["PowerOfAttorneys"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RegistrationOrganizationInfo.PowerOfAttorneys` is not array type"));

        const rapidjson::Value &tmpValue = value["PowerOfAttorneys"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_powerOfAttorneys.push_back((*itr).GetString());
        }
        m_powerOfAttorneysHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RegistrationOrganizationInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_organizationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_organizationName.c_str(), allocator).Move(), allocator);
    }

    if (m_uniformSocialCreditCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniformSocialCreditCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uniformSocialCreditCode.c_str(), allocator).Move(), allocator);
    }

    if (m_legalNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LegalName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_legalName.c_str(), allocator).Move(), allocator);
    }

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_address.c_str(), allocator).Move(), allocator);
    }

    if (m_adminNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdminName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_adminName.c_str(), allocator).Move(), allocator);
    }

    if (m_adminMobileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdminMobile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_adminMobile.c_str(), allocator).Move(), allocator);
    }

    if (m_authorizationTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorizationTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_authorizationTypes.begin(); itr != m_authorizationTypes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_adminIdCardNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdminIdCardNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_adminIdCardNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_adminIdCardTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdminIdCardType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_adminIdCardType.c_str(), allocator).Move(), allocator);
    }

    if (m_businessLicenseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessLicense";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_businessLicense.c_str(), allocator).Move(), allocator);
    }

    if (m_powerOfAttorneysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PowerOfAttorneys";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_powerOfAttorneys.begin(); itr != m_powerOfAttorneys.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string RegistrationOrganizationInfo::GetOrganizationName() const
{
    return m_organizationName;
}

void RegistrationOrganizationInfo::SetOrganizationName(const string& _organizationName)
{
    m_organizationName = _organizationName;
    m_organizationNameHasBeenSet = true;
}

bool RegistrationOrganizationInfo::OrganizationNameHasBeenSet() const
{
    return m_organizationNameHasBeenSet;
}

string RegistrationOrganizationInfo::GetUniformSocialCreditCode() const
{
    return m_uniformSocialCreditCode;
}

void RegistrationOrganizationInfo::SetUniformSocialCreditCode(const string& _uniformSocialCreditCode)
{
    m_uniformSocialCreditCode = _uniformSocialCreditCode;
    m_uniformSocialCreditCodeHasBeenSet = true;
}

bool RegistrationOrganizationInfo::UniformSocialCreditCodeHasBeenSet() const
{
    return m_uniformSocialCreditCodeHasBeenSet;
}

string RegistrationOrganizationInfo::GetLegalName() const
{
    return m_legalName;
}

void RegistrationOrganizationInfo::SetLegalName(const string& _legalName)
{
    m_legalName = _legalName;
    m_legalNameHasBeenSet = true;
}

bool RegistrationOrganizationInfo::LegalNameHasBeenSet() const
{
    return m_legalNameHasBeenSet;
}

string RegistrationOrganizationInfo::GetAddress() const
{
    return m_address;
}

void RegistrationOrganizationInfo::SetAddress(const string& _address)
{
    m_address = _address;
    m_addressHasBeenSet = true;
}

bool RegistrationOrganizationInfo::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

string RegistrationOrganizationInfo::GetAdminName() const
{
    return m_adminName;
}

void RegistrationOrganizationInfo::SetAdminName(const string& _adminName)
{
    m_adminName = _adminName;
    m_adminNameHasBeenSet = true;
}

bool RegistrationOrganizationInfo::AdminNameHasBeenSet() const
{
    return m_adminNameHasBeenSet;
}

string RegistrationOrganizationInfo::GetAdminMobile() const
{
    return m_adminMobile;
}

void RegistrationOrganizationInfo::SetAdminMobile(const string& _adminMobile)
{
    m_adminMobile = _adminMobile;
    m_adminMobileHasBeenSet = true;
}

bool RegistrationOrganizationInfo::AdminMobileHasBeenSet() const
{
    return m_adminMobileHasBeenSet;
}

vector<uint64_t> RegistrationOrganizationInfo::GetAuthorizationTypes() const
{
    return m_authorizationTypes;
}

void RegistrationOrganizationInfo::SetAuthorizationTypes(const vector<uint64_t>& _authorizationTypes)
{
    m_authorizationTypes = _authorizationTypes;
    m_authorizationTypesHasBeenSet = true;
}

bool RegistrationOrganizationInfo::AuthorizationTypesHasBeenSet() const
{
    return m_authorizationTypesHasBeenSet;
}

string RegistrationOrganizationInfo::GetAdminIdCardNumber() const
{
    return m_adminIdCardNumber;
}

void RegistrationOrganizationInfo::SetAdminIdCardNumber(const string& _adminIdCardNumber)
{
    m_adminIdCardNumber = _adminIdCardNumber;
    m_adminIdCardNumberHasBeenSet = true;
}

bool RegistrationOrganizationInfo::AdminIdCardNumberHasBeenSet() const
{
    return m_adminIdCardNumberHasBeenSet;
}

string RegistrationOrganizationInfo::GetAdminIdCardType() const
{
    return m_adminIdCardType;
}

void RegistrationOrganizationInfo::SetAdminIdCardType(const string& _adminIdCardType)
{
    m_adminIdCardType = _adminIdCardType;
    m_adminIdCardTypeHasBeenSet = true;
}

bool RegistrationOrganizationInfo::AdminIdCardTypeHasBeenSet() const
{
    return m_adminIdCardTypeHasBeenSet;
}

string RegistrationOrganizationInfo::GetBusinessLicense() const
{
    return m_businessLicense;
}

void RegistrationOrganizationInfo::SetBusinessLicense(const string& _businessLicense)
{
    m_businessLicense = _businessLicense;
    m_businessLicenseHasBeenSet = true;
}

bool RegistrationOrganizationInfo::BusinessLicenseHasBeenSet() const
{
    return m_businessLicenseHasBeenSet;
}

vector<string> RegistrationOrganizationInfo::GetPowerOfAttorneys() const
{
    return m_powerOfAttorneys;
}

void RegistrationOrganizationInfo::SetPowerOfAttorneys(const vector<string>& _powerOfAttorneys)
{
    m_powerOfAttorneys = _powerOfAttorneys;
    m_powerOfAttorneysHasBeenSet = true;
}

bool RegistrationOrganizationInfo::PowerOfAttorneysHasBeenSet() const
{
    return m_powerOfAttorneysHasBeenSet;
}

