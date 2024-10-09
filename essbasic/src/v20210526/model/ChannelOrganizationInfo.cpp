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

#include <tencentcloud/essbasic/v20210526/model/ChannelOrganizationInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

ChannelOrganizationInfo::ChannelOrganizationInfo() :
    m_organizationIdHasBeenSet(false),
    m_organizationOpenIdHasBeenSet(false),
    m_organizationNameHasBeenSet(false),
    m_unifiedSocialCreditCodeHasBeenSet(false),
    m_legalNameHasBeenSet(false),
    m_legalOpenIdHasBeenSet(false),
    m_adminNameHasBeenSet(false),
    m_adminOpenIdHasBeenSet(false),
    m_adminMobileHasBeenSet(false),
    m_authorizationStatusHasBeenSet(false),
    m_authorizationTypeHasBeenSet(false),
    m_activeStatusHasBeenSet(false),
    m_licenseExpireTimeHasBeenSet(false)
{
}

CoreInternalOutcome ChannelOrganizationInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OrganizationId") && !value["OrganizationId"].IsNull())
    {
        if (!value["OrganizationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelOrganizationInfo.OrganizationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_organizationId = string(value["OrganizationId"].GetString());
        m_organizationIdHasBeenSet = true;
    }

    if (value.HasMember("OrganizationOpenId") && !value["OrganizationOpenId"].IsNull())
    {
        if (!value["OrganizationOpenId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelOrganizationInfo.OrganizationOpenId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_organizationOpenId = string(value["OrganizationOpenId"].GetString());
        m_organizationOpenIdHasBeenSet = true;
    }

    if (value.HasMember("OrganizationName") && !value["OrganizationName"].IsNull())
    {
        if (!value["OrganizationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelOrganizationInfo.OrganizationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_organizationName = string(value["OrganizationName"].GetString());
        m_organizationNameHasBeenSet = true;
    }

    if (value.HasMember("UnifiedSocialCreditCode") && !value["UnifiedSocialCreditCode"].IsNull())
    {
        if (!value["UnifiedSocialCreditCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelOrganizationInfo.UnifiedSocialCreditCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unifiedSocialCreditCode = string(value["UnifiedSocialCreditCode"].GetString());
        m_unifiedSocialCreditCodeHasBeenSet = true;
    }

    if (value.HasMember("LegalName") && !value["LegalName"].IsNull())
    {
        if (!value["LegalName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelOrganizationInfo.LegalName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_legalName = string(value["LegalName"].GetString());
        m_legalNameHasBeenSet = true;
    }

    if (value.HasMember("LegalOpenId") && !value["LegalOpenId"].IsNull())
    {
        if (!value["LegalOpenId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelOrganizationInfo.LegalOpenId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_legalOpenId = string(value["LegalOpenId"].GetString());
        m_legalOpenIdHasBeenSet = true;
    }

    if (value.HasMember("AdminName") && !value["AdminName"].IsNull())
    {
        if (!value["AdminName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelOrganizationInfo.AdminName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_adminName = string(value["AdminName"].GetString());
        m_adminNameHasBeenSet = true;
    }

    if (value.HasMember("AdminOpenId") && !value["AdminOpenId"].IsNull())
    {
        if (!value["AdminOpenId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelOrganizationInfo.AdminOpenId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_adminOpenId = string(value["AdminOpenId"].GetString());
        m_adminOpenIdHasBeenSet = true;
    }

    if (value.HasMember("AdminMobile") && !value["AdminMobile"].IsNull())
    {
        if (!value["AdminMobile"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelOrganizationInfo.AdminMobile` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_adminMobile = string(value["AdminMobile"].GetString());
        m_adminMobileHasBeenSet = true;
    }

    if (value.HasMember("AuthorizationStatus") && !value["AuthorizationStatus"].IsNull())
    {
        if (!value["AuthorizationStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelOrganizationInfo.AuthorizationStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authorizationStatus = string(value["AuthorizationStatus"].GetString());
        m_authorizationStatusHasBeenSet = true;
    }

    if (value.HasMember("AuthorizationType") && !value["AuthorizationType"].IsNull())
    {
        if (!value["AuthorizationType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelOrganizationInfo.AuthorizationType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authorizationType = string(value["AuthorizationType"].GetString());
        m_authorizationTypeHasBeenSet = true;
    }

    if (value.HasMember("ActiveStatus") && !value["ActiveStatus"].IsNull())
    {
        if (!value["ActiveStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelOrganizationInfo.ActiveStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_activeStatus = value["ActiveStatus"].GetInt64();
        m_activeStatusHasBeenSet = true;
    }

    if (value.HasMember("LicenseExpireTime") && !value["LicenseExpireTime"].IsNull())
    {
        if (!value["LicenseExpireTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelOrganizationInfo.LicenseExpireTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_licenseExpireTime = value["LicenseExpireTime"].GetInt64();
        m_licenseExpireTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ChannelOrganizationInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_organizationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_organizationId.c_str(), allocator).Move(), allocator);
    }

    if (m_organizationOpenIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationOpenId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_organizationOpenId.c_str(), allocator).Move(), allocator);
    }

    if (m_organizationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_organizationName.c_str(), allocator).Move(), allocator);
    }

    if (m_unifiedSocialCreditCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnifiedSocialCreditCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unifiedSocialCreditCode.c_str(), allocator).Move(), allocator);
    }

    if (m_legalNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LegalName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_legalName.c_str(), allocator).Move(), allocator);
    }

    if (m_legalOpenIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LegalOpenId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_legalOpenId.c_str(), allocator).Move(), allocator);
    }

    if (m_adminNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdminName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_adminName.c_str(), allocator).Move(), allocator);
    }

    if (m_adminOpenIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdminOpenId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_adminOpenId.c_str(), allocator).Move(), allocator);
    }

    if (m_adminMobileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdminMobile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_adminMobile.c_str(), allocator).Move(), allocator);
    }

    if (m_authorizationStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorizationStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authorizationStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_authorizationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorizationType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authorizationType.c_str(), allocator).Move(), allocator);
    }

    if (m_activeStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActiveStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_activeStatus, allocator);
    }

    if (m_licenseExpireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_licenseExpireTime, allocator);
    }

}


string ChannelOrganizationInfo::GetOrganizationId() const
{
    return m_organizationId;
}

void ChannelOrganizationInfo::SetOrganizationId(const string& _organizationId)
{
    m_organizationId = _organizationId;
    m_organizationIdHasBeenSet = true;
}

bool ChannelOrganizationInfo::OrganizationIdHasBeenSet() const
{
    return m_organizationIdHasBeenSet;
}

string ChannelOrganizationInfo::GetOrganizationOpenId() const
{
    return m_organizationOpenId;
}

void ChannelOrganizationInfo::SetOrganizationOpenId(const string& _organizationOpenId)
{
    m_organizationOpenId = _organizationOpenId;
    m_organizationOpenIdHasBeenSet = true;
}

bool ChannelOrganizationInfo::OrganizationOpenIdHasBeenSet() const
{
    return m_organizationOpenIdHasBeenSet;
}

string ChannelOrganizationInfo::GetOrganizationName() const
{
    return m_organizationName;
}

void ChannelOrganizationInfo::SetOrganizationName(const string& _organizationName)
{
    m_organizationName = _organizationName;
    m_organizationNameHasBeenSet = true;
}

bool ChannelOrganizationInfo::OrganizationNameHasBeenSet() const
{
    return m_organizationNameHasBeenSet;
}

string ChannelOrganizationInfo::GetUnifiedSocialCreditCode() const
{
    return m_unifiedSocialCreditCode;
}

void ChannelOrganizationInfo::SetUnifiedSocialCreditCode(const string& _unifiedSocialCreditCode)
{
    m_unifiedSocialCreditCode = _unifiedSocialCreditCode;
    m_unifiedSocialCreditCodeHasBeenSet = true;
}

bool ChannelOrganizationInfo::UnifiedSocialCreditCodeHasBeenSet() const
{
    return m_unifiedSocialCreditCodeHasBeenSet;
}

string ChannelOrganizationInfo::GetLegalName() const
{
    return m_legalName;
}

void ChannelOrganizationInfo::SetLegalName(const string& _legalName)
{
    m_legalName = _legalName;
    m_legalNameHasBeenSet = true;
}

bool ChannelOrganizationInfo::LegalNameHasBeenSet() const
{
    return m_legalNameHasBeenSet;
}

string ChannelOrganizationInfo::GetLegalOpenId() const
{
    return m_legalOpenId;
}

void ChannelOrganizationInfo::SetLegalOpenId(const string& _legalOpenId)
{
    m_legalOpenId = _legalOpenId;
    m_legalOpenIdHasBeenSet = true;
}

bool ChannelOrganizationInfo::LegalOpenIdHasBeenSet() const
{
    return m_legalOpenIdHasBeenSet;
}

string ChannelOrganizationInfo::GetAdminName() const
{
    return m_adminName;
}

void ChannelOrganizationInfo::SetAdminName(const string& _adminName)
{
    m_adminName = _adminName;
    m_adminNameHasBeenSet = true;
}

bool ChannelOrganizationInfo::AdminNameHasBeenSet() const
{
    return m_adminNameHasBeenSet;
}

string ChannelOrganizationInfo::GetAdminOpenId() const
{
    return m_adminOpenId;
}

void ChannelOrganizationInfo::SetAdminOpenId(const string& _adminOpenId)
{
    m_adminOpenId = _adminOpenId;
    m_adminOpenIdHasBeenSet = true;
}

bool ChannelOrganizationInfo::AdminOpenIdHasBeenSet() const
{
    return m_adminOpenIdHasBeenSet;
}

string ChannelOrganizationInfo::GetAdminMobile() const
{
    return m_adminMobile;
}

void ChannelOrganizationInfo::SetAdminMobile(const string& _adminMobile)
{
    m_adminMobile = _adminMobile;
    m_adminMobileHasBeenSet = true;
}

bool ChannelOrganizationInfo::AdminMobileHasBeenSet() const
{
    return m_adminMobileHasBeenSet;
}

string ChannelOrganizationInfo::GetAuthorizationStatus() const
{
    return m_authorizationStatus;
}

void ChannelOrganizationInfo::SetAuthorizationStatus(const string& _authorizationStatus)
{
    m_authorizationStatus = _authorizationStatus;
    m_authorizationStatusHasBeenSet = true;
}

bool ChannelOrganizationInfo::AuthorizationStatusHasBeenSet() const
{
    return m_authorizationStatusHasBeenSet;
}

string ChannelOrganizationInfo::GetAuthorizationType() const
{
    return m_authorizationType;
}

void ChannelOrganizationInfo::SetAuthorizationType(const string& _authorizationType)
{
    m_authorizationType = _authorizationType;
    m_authorizationTypeHasBeenSet = true;
}

bool ChannelOrganizationInfo::AuthorizationTypeHasBeenSet() const
{
    return m_authorizationTypeHasBeenSet;
}

int64_t ChannelOrganizationInfo::GetActiveStatus() const
{
    return m_activeStatus;
}

void ChannelOrganizationInfo::SetActiveStatus(const int64_t& _activeStatus)
{
    m_activeStatus = _activeStatus;
    m_activeStatusHasBeenSet = true;
}

bool ChannelOrganizationInfo::ActiveStatusHasBeenSet() const
{
    return m_activeStatusHasBeenSet;
}

int64_t ChannelOrganizationInfo::GetLicenseExpireTime() const
{
    return m_licenseExpireTime;
}

void ChannelOrganizationInfo::SetLicenseExpireTime(const int64_t& _licenseExpireTime)
{
    m_licenseExpireTime = _licenseExpireTime;
    m_licenseExpireTimeHasBeenSet = true;
}

bool ChannelOrganizationInfo::LicenseExpireTimeHasBeenSet() const
{
    return m_licenseExpireTimeHasBeenSet;
}

