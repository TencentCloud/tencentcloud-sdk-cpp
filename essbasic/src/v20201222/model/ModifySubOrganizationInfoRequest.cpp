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

#include <tencentcloud/essbasic/v20201222/model/ModifySubOrganizationInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Essbasic::V20201222::Model;
using namespace std;

ModifySubOrganizationInfoRequest::ModifySubOrganizationInfoRequest() :
    m_callerHasBeenSet(false),
    m_openIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_organizationTypeHasBeenSet(false),
    m_bizLicenseFileHasBeenSet(false),
    m_bizLicenseFileNameHasBeenSet(false),
    m_legalNameHasBeenSet(false),
    m_legalIdCardTypeHasBeenSet(false),
    m_legalIdCardNumberHasBeenSet(false),
    m_legalMobileHasBeenSet(false),
    m_contactNameHasBeenSet(false),
    m_contactAddressHasBeenSet(false),
    m_emailHasBeenSet(false)
{
}

string ModifySubOrganizationInfoRequest::ToJsonString() const
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

    if (m_openIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_openId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_organizationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_organizationType.c_str(), allocator).Move(), allocator);
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

    if (m_contactAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContactAddress";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_contactAddress.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_emailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Email";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_email.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


Caller ModifySubOrganizationInfoRequest::GetCaller() const
{
    return m_caller;
}

void ModifySubOrganizationInfoRequest::SetCaller(const Caller& _caller)
{
    m_caller = _caller;
    m_callerHasBeenSet = true;
}

bool ModifySubOrganizationInfoRequest::CallerHasBeenSet() const
{
    return m_callerHasBeenSet;
}

string ModifySubOrganizationInfoRequest::GetOpenId() const
{
    return m_openId;
}

void ModifySubOrganizationInfoRequest::SetOpenId(const string& _openId)
{
    m_openId = _openId;
    m_openIdHasBeenSet = true;
}

bool ModifySubOrganizationInfoRequest::OpenIdHasBeenSet() const
{
    return m_openIdHasBeenSet;
}

string ModifySubOrganizationInfoRequest::GetName() const
{
    return m_name;
}

void ModifySubOrganizationInfoRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifySubOrganizationInfoRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifySubOrganizationInfoRequest::GetOrganizationType() const
{
    return m_organizationType;
}

void ModifySubOrganizationInfoRequest::SetOrganizationType(const string& _organizationType)
{
    m_organizationType = _organizationType;
    m_organizationTypeHasBeenSet = true;
}

bool ModifySubOrganizationInfoRequest::OrganizationTypeHasBeenSet() const
{
    return m_organizationTypeHasBeenSet;
}

string ModifySubOrganizationInfoRequest::GetBizLicenseFile() const
{
    return m_bizLicenseFile;
}

void ModifySubOrganizationInfoRequest::SetBizLicenseFile(const string& _bizLicenseFile)
{
    m_bizLicenseFile = _bizLicenseFile;
    m_bizLicenseFileHasBeenSet = true;
}

bool ModifySubOrganizationInfoRequest::BizLicenseFileHasBeenSet() const
{
    return m_bizLicenseFileHasBeenSet;
}

string ModifySubOrganizationInfoRequest::GetBizLicenseFileName() const
{
    return m_bizLicenseFileName;
}

void ModifySubOrganizationInfoRequest::SetBizLicenseFileName(const string& _bizLicenseFileName)
{
    m_bizLicenseFileName = _bizLicenseFileName;
    m_bizLicenseFileNameHasBeenSet = true;
}

bool ModifySubOrganizationInfoRequest::BizLicenseFileNameHasBeenSet() const
{
    return m_bizLicenseFileNameHasBeenSet;
}

string ModifySubOrganizationInfoRequest::GetLegalName() const
{
    return m_legalName;
}

void ModifySubOrganizationInfoRequest::SetLegalName(const string& _legalName)
{
    m_legalName = _legalName;
    m_legalNameHasBeenSet = true;
}

bool ModifySubOrganizationInfoRequest::LegalNameHasBeenSet() const
{
    return m_legalNameHasBeenSet;
}

string ModifySubOrganizationInfoRequest::GetLegalIdCardType() const
{
    return m_legalIdCardType;
}

void ModifySubOrganizationInfoRequest::SetLegalIdCardType(const string& _legalIdCardType)
{
    m_legalIdCardType = _legalIdCardType;
    m_legalIdCardTypeHasBeenSet = true;
}

bool ModifySubOrganizationInfoRequest::LegalIdCardTypeHasBeenSet() const
{
    return m_legalIdCardTypeHasBeenSet;
}

string ModifySubOrganizationInfoRequest::GetLegalIdCardNumber() const
{
    return m_legalIdCardNumber;
}

void ModifySubOrganizationInfoRequest::SetLegalIdCardNumber(const string& _legalIdCardNumber)
{
    m_legalIdCardNumber = _legalIdCardNumber;
    m_legalIdCardNumberHasBeenSet = true;
}

bool ModifySubOrganizationInfoRequest::LegalIdCardNumberHasBeenSet() const
{
    return m_legalIdCardNumberHasBeenSet;
}

string ModifySubOrganizationInfoRequest::GetLegalMobile() const
{
    return m_legalMobile;
}

void ModifySubOrganizationInfoRequest::SetLegalMobile(const string& _legalMobile)
{
    m_legalMobile = _legalMobile;
    m_legalMobileHasBeenSet = true;
}

bool ModifySubOrganizationInfoRequest::LegalMobileHasBeenSet() const
{
    return m_legalMobileHasBeenSet;
}

string ModifySubOrganizationInfoRequest::GetContactName() const
{
    return m_contactName;
}

void ModifySubOrganizationInfoRequest::SetContactName(const string& _contactName)
{
    m_contactName = _contactName;
    m_contactNameHasBeenSet = true;
}

bool ModifySubOrganizationInfoRequest::ContactNameHasBeenSet() const
{
    return m_contactNameHasBeenSet;
}

Address ModifySubOrganizationInfoRequest::GetContactAddress() const
{
    return m_contactAddress;
}

void ModifySubOrganizationInfoRequest::SetContactAddress(const Address& _contactAddress)
{
    m_contactAddress = _contactAddress;
    m_contactAddressHasBeenSet = true;
}

bool ModifySubOrganizationInfoRequest::ContactAddressHasBeenSet() const
{
    return m_contactAddressHasBeenSet;
}

string ModifySubOrganizationInfoRequest::GetEmail() const
{
    return m_email;
}

void ModifySubOrganizationInfoRequest::SetEmail(const string& _email)
{
    m_email = _email;
    m_emailHasBeenSet = true;
}

bool ModifySubOrganizationInfoRequest::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}


