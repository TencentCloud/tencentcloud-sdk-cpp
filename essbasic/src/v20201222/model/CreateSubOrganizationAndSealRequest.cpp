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

#include <tencentcloud/essbasic/v20201222/model/CreateSubOrganizationAndSealRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Essbasic::V20201222::Model;
using namespace std;

CreateSubOrganizationAndSealRequest::CreateSubOrganizationAndSealRequest() :
    m_callerHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_idCardTypeHasBeenSet(false),
    m_idCardNumberHasBeenSet(false),
    m_organizationTypeHasBeenSet(false),
    m_legalNameHasBeenSet(false),
    m_legalIdCardTypeHasBeenSet(false),
    m_legalIdCardNumberHasBeenSet(false),
    m_verifyClientIpHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_idCardFileTypeHasBeenSet(false),
    m_bizLicenseFileHasBeenSet(false),
    m_bizLicenseFileNameHasBeenSet(false),
    m_legalMobileHasBeenSet(false),
    m_contactNameHasBeenSet(false),
    m_verifyServerIpHasBeenSet(false),
    m_contactAddressHasBeenSet(false),
    m_sealNameHasBeenSet(false),
    m_sealTypeHasBeenSet(false),
    m_sealHorizontalTextHasBeenSet(false),
    m_openIdHasBeenSet(false),
    m_useOpenIdHasBeenSet(false)
{
}

string CreateSubOrganizationAndSealRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_callerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Caller";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_caller.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_idCardTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdCardType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_idCardType.c_str(), allocator).Move(), allocator);
    }

    if (m_idCardNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdCardNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_idCardNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_organizationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_organizationType.c_str(), allocator).Move(), allocator);
    }

    if (m_legalNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LegalName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_legalName.c_str(), allocator).Move(), allocator);
    }

    if (m_legalIdCardTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LegalIdCardType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_legalIdCardType.c_str(), allocator).Move(), allocator);
    }

    if (m_legalIdCardNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LegalIdCardNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_legalIdCardNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_verifyClientIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifyClientIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_verifyClientIp.c_str(), allocator).Move(), allocator);
    }

    if (m_emailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Email";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_email.c_str(), allocator).Move(), allocator);
    }

    if (m_idCardFileTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdCardFileType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_idCardFileType.c_str(), allocator).Move(), allocator);
    }

    if (m_bizLicenseFileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizLicenseFile";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bizLicenseFile.c_str(), allocator).Move(), allocator);
    }

    if (m_bizLicenseFileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizLicenseFileName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bizLicenseFileName.c_str(), allocator).Move(), allocator);
    }

    if (m_legalMobileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LegalMobile";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_legalMobile.c_str(), allocator).Move(), allocator);
    }

    if (m_contactNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContactName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_contactName.c_str(), allocator).Move(), allocator);
    }

    if (m_verifyServerIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifyServerIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_verifyServerIp.c_str(), allocator).Move(), allocator);
    }

    if (m_contactAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContactAddress";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_contactAddress.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_sealNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SealName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sealName.c_str(), allocator).Move(), allocator);
    }

    if (m_sealTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SealType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sealType.c_str(), allocator).Move(), allocator);
    }

    if (m_sealHorizontalTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SealHorizontalText";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sealHorizontalText.c_str(), allocator).Move(), allocator);
    }

    if (m_openIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_openId.c_str(), allocator).Move(), allocator);
    }

    if (m_useOpenIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UseOpenId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_useOpenId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


Caller CreateSubOrganizationAndSealRequest::GetCaller() const
{
    return m_caller;
}

void CreateSubOrganizationAndSealRequest::SetCaller(const Caller& _caller)
{
    m_caller = _caller;
    m_callerHasBeenSet = true;
}

bool CreateSubOrganizationAndSealRequest::CallerHasBeenSet() const
{
    return m_callerHasBeenSet;
}

string CreateSubOrganizationAndSealRequest::GetName() const
{
    return m_name;
}

void CreateSubOrganizationAndSealRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateSubOrganizationAndSealRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateSubOrganizationAndSealRequest::GetIdCardType() const
{
    return m_idCardType;
}

void CreateSubOrganizationAndSealRequest::SetIdCardType(const string& _idCardType)
{
    m_idCardType = _idCardType;
    m_idCardTypeHasBeenSet = true;
}

bool CreateSubOrganizationAndSealRequest::IdCardTypeHasBeenSet() const
{
    return m_idCardTypeHasBeenSet;
}

string CreateSubOrganizationAndSealRequest::GetIdCardNumber() const
{
    return m_idCardNumber;
}

void CreateSubOrganizationAndSealRequest::SetIdCardNumber(const string& _idCardNumber)
{
    m_idCardNumber = _idCardNumber;
    m_idCardNumberHasBeenSet = true;
}

bool CreateSubOrganizationAndSealRequest::IdCardNumberHasBeenSet() const
{
    return m_idCardNumberHasBeenSet;
}

string CreateSubOrganizationAndSealRequest::GetOrganizationType() const
{
    return m_organizationType;
}

void CreateSubOrganizationAndSealRequest::SetOrganizationType(const string& _organizationType)
{
    m_organizationType = _organizationType;
    m_organizationTypeHasBeenSet = true;
}

bool CreateSubOrganizationAndSealRequest::OrganizationTypeHasBeenSet() const
{
    return m_organizationTypeHasBeenSet;
}

string CreateSubOrganizationAndSealRequest::GetLegalName() const
{
    return m_legalName;
}

void CreateSubOrganizationAndSealRequest::SetLegalName(const string& _legalName)
{
    m_legalName = _legalName;
    m_legalNameHasBeenSet = true;
}

bool CreateSubOrganizationAndSealRequest::LegalNameHasBeenSet() const
{
    return m_legalNameHasBeenSet;
}

string CreateSubOrganizationAndSealRequest::GetLegalIdCardType() const
{
    return m_legalIdCardType;
}

void CreateSubOrganizationAndSealRequest::SetLegalIdCardType(const string& _legalIdCardType)
{
    m_legalIdCardType = _legalIdCardType;
    m_legalIdCardTypeHasBeenSet = true;
}

bool CreateSubOrganizationAndSealRequest::LegalIdCardTypeHasBeenSet() const
{
    return m_legalIdCardTypeHasBeenSet;
}

string CreateSubOrganizationAndSealRequest::GetLegalIdCardNumber() const
{
    return m_legalIdCardNumber;
}

void CreateSubOrganizationAndSealRequest::SetLegalIdCardNumber(const string& _legalIdCardNumber)
{
    m_legalIdCardNumber = _legalIdCardNumber;
    m_legalIdCardNumberHasBeenSet = true;
}

bool CreateSubOrganizationAndSealRequest::LegalIdCardNumberHasBeenSet() const
{
    return m_legalIdCardNumberHasBeenSet;
}

string CreateSubOrganizationAndSealRequest::GetVerifyClientIp() const
{
    return m_verifyClientIp;
}

void CreateSubOrganizationAndSealRequest::SetVerifyClientIp(const string& _verifyClientIp)
{
    m_verifyClientIp = _verifyClientIp;
    m_verifyClientIpHasBeenSet = true;
}

bool CreateSubOrganizationAndSealRequest::VerifyClientIpHasBeenSet() const
{
    return m_verifyClientIpHasBeenSet;
}

string CreateSubOrganizationAndSealRequest::GetEmail() const
{
    return m_email;
}

void CreateSubOrganizationAndSealRequest::SetEmail(const string& _email)
{
    m_email = _email;
    m_emailHasBeenSet = true;
}

bool CreateSubOrganizationAndSealRequest::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}

string CreateSubOrganizationAndSealRequest::GetIdCardFileType() const
{
    return m_idCardFileType;
}

void CreateSubOrganizationAndSealRequest::SetIdCardFileType(const string& _idCardFileType)
{
    m_idCardFileType = _idCardFileType;
    m_idCardFileTypeHasBeenSet = true;
}

bool CreateSubOrganizationAndSealRequest::IdCardFileTypeHasBeenSet() const
{
    return m_idCardFileTypeHasBeenSet;
}

string CreateSubOrganizationAndSealRequest::GetBizLicenseFile() const
{
    return m_bizLicenseFile;
}

void CreateSubOrganizationAndSealRequest::SetBizLicenseFile(const string& _bizLicenseFile)
{
    m_bizLicenseFile = _bizLicenseFile;
    m_bizLicenseFileHasBeenSet = true;
}

bool CreateSubOrganizationAndSealRequest::BizLicenseFileHasBeenSet() const
{
    return m_bizLicenseFileHasBeenSet;
}

string CreateSubOrganizationAndSealRequest::GetBizLicenseFileName() const
{
    return m_bizLicenseFileName;
}

void CreateSubOrganizationAndSealRequest::SetBizLicenseFileName(const string& _bizLicenseFileName)
{
    m_bizLicenseFileName = _bizLicenseFileName;
    m_bizLicenseFileNameHasBeenSet = true;
}

bool CreateSubOrganizationAndSealRequest::BizLicenseFileNameHasBeenSet() const
{
    return m_bizLicenseFileNameHasBeenSet;
}

string CreateSubOrganizationAndSealRequest::GetLegalMobile() const
{
    return m_legalMobile;
}

void CreateSubOrganizationAndSealRequest::SetLegalMobile(const string& _legalMobile)
{
    m_legalMobile = _legalMobile;
    m_legalMobileHasBeenSet = true;
}

bool CreateSubOrganizationAndSealRequest::LegalMobileHasBeenSet() const
{
    return m_legalMobileHasBeenSet;
}

string CreateSubOrganizationAndSealRequest::GetContactName() const
{
    return m_contactName;
}

void CreateSubOrganizationAndSealRequest::SetContactName(const string& _contactName)
{
    m_contactName = _contactName;
    m_contactNameHasBeenSet = true;
}

bool CreateSubOrganizationAndSealRequest::ContactNameHasBeenSet() const
{
    return m_contactNameHasBeenSet;
}

string CreateSubOrganizationAndSealRequest::GetVerifyServerIp() const
{
    return m_verifyServerIp;
}

void CreateSubOrganizationAndSealRequest::SetVerifyServerIp(const string& _verifyServerIp)
{
    m_verifyServerIp = _verifyServerIp;
    m_verifyServerIpHasBeenSet = true;
}

bool CreateSubOrganizationAndSealRequest::VerifyServerIpHasBeenSet() const
{
    return m_verifyServerIpHasBeenSet;
}

Address CreateSubOrganizationAndSealRequest::GetContactAddress() const
{
    return m_contactAddress;
}

void CreateSubOrganizationAndSealRequest::SetContactAddress(const Address& _contactAddress)
{
    m_contactAddress = _contactAddress;
    m_contactAddressHasBeenSet = true;
}

bool CreateSubOrganizationAndSealRequest::ContactAddressHasBeenSet() const
{
    return m_contactAddressHasBeenSet;
}

string CreateSubOrganizationAndSealRequest::GetSealName() const
{
    return m_sealName;
}

void CreateSubOrganizationAndSealRequest::SetSealName(const string& _sealName)
{
    m_sealName = _sealName;
    m_sealNameHasBeenSet = true;
}

bool CreateSubOrganizationAndSealRequest::SealNameHasBeenSet() const
{
    return m_sealNameHasBeenSet;
}

string CreateSubOrganizationAndSealRequest::GetSealType() const
{
    return m_sealType;
}

void CreateSubOrganizationAndSealRequest::SetSealType(const string& _sealType)
{
    m_sealType = _sealType;
    m_sealTypeHasBeenSet = true;
}

bool CreateSubOrganizationAndSealRequest::SealTypeHasBeenSet() const
{
    return m_sealTypeHasBeenSet;
}

string CreateSubOrganizationAndSealRequest::GetSealHorizontalText() const
{
    return m_sealHorizontalText;
}

void CreateSubOrganizationAndSealRequest::SetSealHorizontalText(const string& _sealHorizontalText)
{
    m_sealHorizontalText = _sealHorizontalText;
    m_sealHorizontalTextHasBeenSet = true;
}

bool CreateSubOrganizationAndSealRequest::SealHorizontalTextHasBeenSet() const
{
    return m_sealHorizontalTextHasBeenSet;
}

string CreateSubOrganizationAndSealRequest::GetOpenId() const
{
    return m_openId;
}

void CreateSubOrganizationAndSealRequest::SetOpenId(const string& _openId)
{
    m_openId = _openId;
    m_openIdHasBeenSet = true;
}

bool CreateSubOrganizationAndSealRequest::OpenIdHasBeenSet() const
{
    return m_openIdHasBeenSet;
}

bool CreateSubOrganizationAndSealRequest::GetUseOpenId() const
{
    return m_useOpenId;
}

void CreateSubOrganizationAndSealRequest::SetUseOpenId(const bool& _useOpenId)
{
    m_useOpenId = _useOpenId;
    m_useOpenIdHasBeenSet = true;
}

bool CreateSubOrganizationAndSealRequest::UseOpenIdHasBeenSet() const
{
    return m_useOpenIdHasBeenSet;
}


