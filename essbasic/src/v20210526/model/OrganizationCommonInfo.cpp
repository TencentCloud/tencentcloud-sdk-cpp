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

#include <tencentcloud/essbasic/v20210526/model/OrganizationCommonInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

OrganizationCommonInfo::OrganizationCommonInfo() :
    m_organizationNameHasBeenSet(false),
    m_uniformSocialCreditCodeHasBeenSet(false),
    m_legalNameHasBeenSet(false),
    m_legalIdCardTypeHasBeenSet(false),
    m_legalIdCardNumberHasBeenSet(false),
    m_adminNameHasBeenSet(false),
    m_adminMobileHasBeenSet(false),
    m_adminIdCardTypeHasBeenSet(false),
    m_adminIdCardNumberHasBeenSet(false),
    m_oldAdminNameHasBeenSet(false),
    m_oldAdminMobileHasBeenSet(false),
    m_oldAdminIdCardTypeHasBeenSet(false),
    m_oldAdminIdCardNumberHasBeenSet(false)
{
}

CoreInternalOutcome OrganizationCommonInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OrganizationName") && !value["OrganizationName"].IsNull())
    {
        if (!value["OrganizationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationCommonInfo.OrganizationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_organizationName = string(value["OrganizationName"].GetString());
        m_organizationNameHasBeenSet = true;
    }

    if (value.HasMember("UniformSocialCreditCode") && !value["UniformSocialCreditCode"].IsNull())
    {
        if (!value["UniformSocialCreditCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationCommonInfo.UniformSocialCreditCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniformSocialCreditCode = string(value["UniformSocialCreditCode"].GetString());
        m_uniformSocialCreditCodeHasBeenSet = true;
    }

    if (value.HasMember("LegalName") && !value["LegalName"].IsNull())
    {
        if (!value["LegalName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationCommonInfo.LegalName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_legalName = string(value["LegalName"].GetString());
        m_legalNameHasBeenSet = true;
    }

    if (value.HasMember("LegalIdCardType") && !value["LegalIdCardType"].IsNull())
    {
        if (!value["LegalIdCardType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationCommonInfo.LegalIdCardType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_legalIdCardType = string(value["LegalIdCardType"].GetString());
        m_legalIdCardTypeHasBeenSet = true;
    }

    if (value.HasMember("LegalIdCardNumber") && !value["LegalIdCardNumber"].IsNull())
    {
        if (!value["LegalIdCardNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationCommonInfo.LegalIdCardNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_legalIdCardNumber = string(value["LegalIdCardNumber"].GetString());
        m_legalIdCardNumberHasBeenSet = true;
    }

    if (value.HasMember("AdminName") && !value["AdminName"].IsNull())
    {
        if (!value["AdminName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationCommonInfo.AdminName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_adminName = string(value["AdminName"].GetString());
        m_adminNameHasBeenSet = true;
    }

    if (value.HasMember("AdminMobile") && !value["AdminMobile"].IsNull())
    {
        if (!value["AdminMobile"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationCommonInfo.AdminMobile` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_adminMobile = string(value["AdminMobile"].GetString());
        m_adminMobileHasBeenSet = true;
    }

    if (value.HasMember("AdminIdCardType") && !value["AdminIdCardType"].IsNull())
    {
        if (!value["AdminIdCardType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationCommonInfo.AdminIdCardType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_adminIdCardType = string(value["AdminIdCardType"].GetString());
        m_adminIdCardTypeHasBeenSet = true;
    }

    if (value.HasMember("AdminIdCardNumber") && !value["AdminIdCardNumber"].IsNull())
    {
        if (!value["AdminIdCardNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationCommonInfo.AdminIdCardNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_adminIdCardNumber = string(value["AdminIdCardNumber"].GetString());
        m_adminIdCardNumberHasBeenSet = true;
    }

    if (value.HasMember("OldAdminName") && !value["OldAdminName"].IsNull())
    {
        if (!value["OldAdminName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationCommonInfo.OldAdminName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_oldAdminName = string(value["OldAdminName"].GetString());
        m_oldAdminNameHasBeenSet = true;
    }

    if (value.HasMember("OldAdminMobile") && !value["OldAdminMobile"].IsNull())
    {
        if (!value["OldAdminMobile"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationCommonInfo.OldAdminMobile` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_oldAdminMobile = string(value["OldAdminMobile"].GetString());
        m_oldAdminMobileHasBeenSet = true;
    }

    if (value.HasMember("OldAdminIdCardType") && !value["OldAdminIdCardType"].IsNull())
    {
        if (!value["OldAdminIdCardType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationCommonInfo.OldAdminIdCardType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_oldAdminIdCardType = string(value["OldAdminIdCardType"].GetString());
        m_oldAdminIdCardTypeHasBeenSet = true;
    }

    if (value.HasMember("OldAdminIdCardNumber") && !value["OldAdminIdCardNumber"].IsNull())
    {
        if (!value["OldAdminIdCardNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationCommonInfo.OldAdminIdCardNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_oldAdminIdCardNumber = string(value["OldAdminIdCardNumber"].GetString());
        m_oldAdminIdCardNumberHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OrganizationCommonInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_legalIdCardTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LegalIdCardType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_legalIdCardType.c_str(), allocator).Move(), allocator);
    }

    if (m_legalIdCardNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LegalIdCardNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_legalIdCardNumber.c_str(), allocator).Move(), allocator);
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

    if (m_adminIdCardTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdminIdCardType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_adminIdCardType.c_str(), allocator).Move(), allocator);
    }

    if (m_adminIdCardNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdminIdCardNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_adminIdCardNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_oldAdminNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldAdminName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_oldAdminName.c_str(), allocator).Move(), allocator);
    }

    if (m_oldAdminMobileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldAdminMobile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_oldAdminMobile.c_str(), allocator).Move(), allocator);
    }

    if (m_oldAdminIdCardTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldAdminIdCardType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_oldAdminIdCardType.c_str(), allocator).Move(), allocator);
    }

    if (m_oldAdminIdCardNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldAdminIdCardNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_oldAdminIdCardNumber.c_str(), allocator).Move(), allocator);
    }

}


string OrganizationCommonInfo::GetOrganizationName() const
{
    return m_organizationName;
}

void OrganizationCommonInfo::SetOrganizationName(const string& _organizationName)
{
    m_organizationName = _organizationName;
    m_organizationNameHasBeenSet = true;
}

bool OrganizationCommonInfo::OrganizationNameHasBeenSet() const
{
    return m_organizationNameHasBeenSet;
}

string OrganizationCommonInfo::GetUniformSocialCreditCode() const
{
    return m_uniformSocialCreditCode;
}

void OrganizationCommonInfo::SetUniformSocialCreditCode(const string& _uniformSocialCreditCode)
{
    m_uniformSocialCreditCode = _uniformSocialCreditCode;
    m_uniformSocialCreditCodeHasBeenSet = true;
}

bool OrganizationCommonInfo::UniformSocialCreditCodeHasBeenSet() const
{
    return m_uniformSocialCreditCodeHasBeenSet;
}

string OrganizationCommonInfo::GetLegalName() const
{
    return m_legalName;
}

void OrganizationCommonInfo::SetLegalName(const string& _legalName)
{
    m_legalName = _legalName;
    m_legalNameHasBeenSet = true;
}

bool OrganizationCommonInfo::LegalNameHasBeenSet() const
{
    return m_legalNameHasBeenSet;
}

string OrganizationCommonInfo::GetLegalIdCardType() const
{
    return m_legalIdCardType;
}

void OrganizationCommonInfo::SetLegalIdCardType(const string& _legalIdCardType)
{
    m_legalIdCardType = _legalIdCardType;
    m_legalIdCardTypeHasBeenSet = true;
}

bool OrganizationCommonInfo::LegalIdCardTypeHasBeenSet() const
{
    return m_legalIdCardTypeHasBeenSet;
}

string OrganizationCommonInfo::GetLegalIdCardNumber() const
{
    return m_legalIdCardNumber;
}

void OrganizationCommonInfo::SetLegalIdCardNumber(const string& _legalIdCardNumber)
{
    m_legalIdCardNumber = _legalIdCardNumber;
    m_legalIdCardNumberHasBeenSet = true;
}

bool OrganizationCommonInfo::LegalIdCardNumberHasBeenSet() const
{
    return m_legalIdCardNumberHasBeenSet;
}

string OrganizationCommonInfo::GetAdminName() const
{
    return m_adminName;
}

void OrganizationCommonInfo::SetAdminName(const string& _adminName)
{
    m_adminName = _adminName;
    m_adminNameHasBeenSet = true;
}

bool OrganizationCommonInfo::AdminNameHasBeenSet() const
{
    return m_adminNameHasBeenSet;
}

string OrganizationCommonInfo::GetAdminMobile() const
{
    return m_adminMobile;
}

void OrganizationCommonInfo::SetAdminMobile(const string& _adminMobile)
{
    m_adminMobile = _adminMobile;
    m_adminMobileHasBeenSet = true;
}

bool OrganizationCommonInfo::AdminMobileHasBeenSet() const
{
    return m_adminMobileHasBeenSet;
}

string OrganizationCommonInfo::GetAdminIdCardType() const
{
    return m_adminIdCardType;
}

void OrganizationCommonInfo::SetAdminIdCardType(const string& _adminIdCardType)
{
    m_adminIdCardType = _adminIdCardType;
    m_adminIdCardTypeHasBeenSet = true;
}

bool OrganizationCommonInfo::AdminIdCardTypeHasBeenSet() const
{
    return m_adminIdCardTypeHasBeenSet;
}

string OrganizationCommonInfo::GetAdminIdCardNumber() const
{
    return m_adminIdCardNumber;
}

void OrganizationCommonInfo::SetAdminIdCardNumber(const string& _adminIdCardNumber)
{
    m_adminIdCardNumber = _adminIdCardNumber;
    m_adminIdCardNumberHasBeenSet = true;
}

bool OrganizationCommonInfo::AdminIdCardNumberHasBeenSet() const
{
    return m_adminIdCardNumberHasBeenSet;
}

string OrganizationCommonInfo::GetOldAdminName() const
{
    return m_oldAdminName;
}

void OrganizationCommonInfo::SetOldAdminName(const string& _oldAdminName)
{
    m_oldAdminName = _oldAdminName;
    m_oldAdminNameHasBeenSet = true;
}

bool OrganizationCommonInfo::OldAdminNameHasBeenSet() const
{
    return m_oldAdminNameHasBeenSet;
}

string OrganizationCommonInfo::GetOldAdminMobile() const
{
    return m_oldAdminMobile;
}

void OrganizationCommonInfo::SetOldAdminMobile(const string& _oldAdminMobile)
{
    m_oldAdminMobile = _oldAdminMobile;
    m_oldAdminMobileHasBeenSet = true;
}

bool OrganizationCommonInfo::OldAdminMobileHasBeenSet() const
{
    return m_oldAdminMobileHasBeenSet;
}

string OrganizationCommonInfo::GetOldAdminIdCardType() const
{
    return m_oldAdminIdCardType;
}

void OrganizationCommonInfo::SetOldAdminIdCardType(const string& _oldAdminIdCardType)
{
    m_oldAdminIdCardType = _oldAdminIdCardType;
    m_oldAdminIdCardTypeHasBeenSet = true;
}

bool OrganizationCommonInfo::OldAdminIdCardTypeHasBeenSet() const
{
    return m_oldAdminIdCardTypeHasBeenSet;
}

string OrganizationCommonInfo::GetOldAdminIdCardNumber() const
{
    return m_oldAdminIdCardNumber;
}

void OrganizationCommonInfo::SetOldAdminIdCardNumber(const string& _oldAdminIdCardNumber)
{
    m_oldAdminIdCardNumber = _oldAdminIdCardNumber;
    m_oldAdminIdCardNumberHasBeenSet = true;
}

bool OrganizationCommonInfo::OldAdminIdCardNumberHasBeenSet() const
{
    return m_oldAdminIdCardNumberHasBeenSet;
}

