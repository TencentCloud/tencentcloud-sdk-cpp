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

#include <tencentcloud/cpdp/v20190820/model/CreateMerchantRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

CreateMerchantRequest::CreateMerchantRequest() :
    m_invoicePlatformIdHasBeenSet(false),
    m_taxpayerNameHasBeenSet(false),
    m_taxpayerNumHasBeenSet(false),
    m_legalPersonNameHasBeenSet(false),
    m_contactsNameHasBeenSet(false),
    m_phoneHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_regionCodeHasBeenSet(false),
    m_cityNameHasBeenSet(false),
    m_drawerHasBeenSet(false),
    m_taxRegistrationCertificateHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_businessMobileHasBeenSet(false),
    m_bankNameHasBeenSet(false),
    m_bankAccountHasBeenSet(false),
    m_reviewerHasBeenSet(false),
    m_payeeHasBeenSet(false),
    m_registerCodeHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_callbackUrlHasBeenSet(false),
    m_profileHasBeenSet(false)
{
}

string CreateMerchantRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_invoicePlatformIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvoicePlatformId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_invoicePlatformId, allocator);
    }

    if (m_taxpayerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaxpayerName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taxpayerName.c_str(), allocator).Move(), allocator);
    }

    if (m_taxpayerNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaxpayerNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taxpayerNum.c_str(), allocator).Move(), allocator);
    }

    if (m_legalPersonNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LegalPersonName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_legalPersonName.c_str(), allocator).Move(), allocator);
    }

    if (m_contactsNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContactsName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_contactsName.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Phone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_phone.c_str(), allocator).Move(), allocator);
    }

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_address.c_str(), allocator).Move(), allocator);
    }

    if (m_regionCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_regionCode, allocator);
    }

    if (m_cityNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CityName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cityName.c_str(), allocator).Move(), allocator);
    }

    if (m_drawerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Drawer";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_drawer.c_str(), allocator).Move(), allocator);
    }

    if (m_taxRegistrationCertificateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaxRegistrationCertificate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taxRegistrationCertificate.c_str(), allocator).Move(), allocator);
    }

    if (m_emailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Email";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_email.c_str(), allocator).Move(), allocator);
    }

    if (m_businessMobileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessMobile";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_businessMobile.c_str(), allocator).Move(), allocator);
    }

    if (m_bankNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BankName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bankName.c_str(), allocator).Move(), allocator);
    }

    if (m_bankAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BankAccount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bankAccount.c_str(), allocator).Move(), allocator);
    }

    if (m_reviewerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reviewer";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_reviewer.c_str(), allocator).Move(), allocator);
    }

    if (m_payeeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Payee";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_payee.c_str(), allocator).Move(), allocator);
    }

    if (m_registerCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegisterCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_registerCode.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_callbackUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_callbackUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_profileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Profile";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_profile.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t CreateMerchantRequest::GetInvoicePlatformId() const
{
    return m_invoicePlatformId;
}

void CreateMerchantRequest::SetInvoicePlatformId(const int64_t& _invoicePlatformId)
{
    m_invoicePlatformId = _invoicePlatformId;
    m_invoicePlatformIdHasBeenSet = true;
}

bool CreateMerchantRequest::InvoicePlatformIdHasBeenSet() const
{
    return m_invoicePlatformIdHasBeenSet;
}

string CreateMerchantRequest::GetTaxpayerName() const
{
    return m_taxpayerName;
}

void CreateMerchantRequest::SetTaxpayerName(const string& _taxpayerName)
{
    m_taxpayerName = _taxpayerName;
    m_taxpayerNameHasBeenSet = true;
}

bool CreateMerchantRequest::TaxpayerNameHasBeenSet() const
{
    return m_taxpayerNameHasBeenSet;
}

string CreateMerchantRequest::GetTaxpayerNum() const
{
    return m_taxpayerNum;
}

void CreateMerchantRequest::SetTaxpayerNum(const string& _taxpayerNum)
{
    m_taxpayerNum = _taxpayerNum;
    m_taxpayerNumHasBeenSet = true;
}

bool CreateMerchantRequest::TaxpayerNumHasBeenSet() const
{
    return m_taxpayerNumHasBeenSet;
}

string CreateMerchantRequest::GetLegalPersonName() const
{
    return m_legalPersonName;
}

void CreateMerchantRequest::SetLegalPersonName(const string& _legalPersonName)
{
    m_legalPersonName = _legalPersonName;
    m_legalPersonNameHasBeenSet = true;
}

bool CreateMerchantRequest::LegalPersonNameHasBeenSet() const
{
    return m_legalPersonNameHasBeenSet;
}

string CreateMerchantRequest::GetContactsName() const
{
    return m_contactsName;
}

void CreateMerchantRequest::SetContactsName(const string& _contactsName)
{
    m_contactsName = _contactsName;
    m_contactsNameHasBeenSet = true;
}

bool CreateMerchantRequest::ContactsNameHasBeenSet() const
{
    return m_contactsNameHasBeenSet;
}

string CreateMerchantRequest::GetPhone() const
{
    return m_phone;
}

void CreateMerchantRequest::SetPhone(const string& _phone)
{
    m_phone = _phone;
    m_phoneHasBeenSet = true;
}

bool CreateMerchantRequest::PhoneHasBeenSet() const
{
    return m_phoneHasBeenSet;
}

string CreateMerchantRequest::GetAddress() const
{
    return m_address;
}

void CreateMerchantRequest::SetAddress(const string& _address)
{
    m_address = _address;
    m_addressHasBeenSet = true;
}

bool CreateMerchantRequest::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

int64_t CreateMerchantRequest::GetRegionCode() const
{
    return m_regionCode;
}

void CreateMerchantRequest::SetRegionCode(const int64_t& _regionCode)
{
    m_regionCode = _regionCode;
    m_regionCodeHasBeenSet = true;
}

bool CreateMerchantRequest::RegionCodeHasBeenSet() const
{
    return m_regionCodeHasBeenSet;
}

string CreateMerchantRequest::GetCityName() const
{
    return m_cityName;
}

void CreateMerchantRequest::SetCityName(const string& _cityName)
{
    m_cityName = _cityName;
    m_cityNameHasBeenSet = true;
}

bool CreateMerchantRequest::CityNameHasBeenSet() const
{
    return m_cityNameHasBeenSet;
}

string CreateMerchantRequest::GetDrawer() const
{
    return m_drawer;
}

void CreateMerchantRequest::SetDrawer(const string& _drawer)
{
    m_drawer = _drawer;
    m_drawerHasBeenSet = true;
}

bool CreateMerchantRequest::DrawerHasBeenSet() const
{
    return m_drawerHasBeenSet;
}

string CreateMerchantRequest::GetTaxRegistrationCertificate() const
{
    return m_taxRegistrationCertificate;
}

void CreateMerchantRequest::SetTaxRegistrationCertificate(const string& _taxRegistrationCertificate)
{
    m_taxRegistrationCertificate = _taxRegistrationCertificate;
    m_taxRegistrationCertificateHasBeenSet = true;
}

bool CreateMerchantRequest::TaxRegistrationCertificateHasBeenSet() const
{
    return m_taxRegistrationCertificateHasBeenSet;
}

string CreateMerchantRequest::GetEmail() const
{
    return m_email;
}

void CreateMerchantRequest::SetEmail(const string& _email)
{
    m_email = _email;
    m_emailHasBeenSet = true;
}

bool CreateMerchantRequest::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}

string CreateMerchantRequest::GetBusinessMobile() const
{
    return m_businessMobile;
}

void CreateMerchantRequest::SetBusinessMobile(const string& _businessMobile)
{
    m_businessMobile = _businessMobile;
    m_businessMobileHasBeenSet = true;
}

bool CreateMerchantRequest::BusinessMobileHasBeenSet() const
{
    return m_businessMobileHasBeenSet;
}

string CreateMerchantRequest::GetBankName() const
{
    return m_bankName;
}

void CreateMerchantRequest::SetBankName(const string& _bankName)
{
    m_bankName = _bankName;
    m_bankNameHasBeenSet = true;
}

bool CreateMerchantRequest::BankNameHasBeenSet() const
{
    return m_bankNameHasBeenSet;
}

string CreateMerchantRequest::GetBankAccount() const
{
    return m_bankAccount;
}

void CreateMerchantRequest::SetBankAccount(const string& _bankAccount)
{
    m_bankAccount = _bankAccount;
    m_bankAccountHasBeenSet = true;
}

bool CreateMerchantRequest::BankAccountHasBeenSet() const
{
    return m_bankAccountHasBeenSet;
}

string CreateMerchantRequest::GetReviewer() const
{
    return m_reviewer;
}

void CreateMerchantRequest::SetReviewer(const string& _reviewer)
{
    m_reviewer = _reviewer;
    m_reviewerHasBeenSet = true;
}

bool CreateMerchantRequest::ReviewerHasBeenSet() const
{
    return m_reviewerHasBeenSet;
}

string CreateMerchantRequest::GetPayee() const
{
    return m_payee;
}

void CreateMerchantRequest::SetPayee(const string& _payee)
{
    m_payee = _payee;
    m_payeeHasBeenSet = true;
}

bool CreateMerchantRequest::PayeeHasBeenSet() const
{
    return m_payeeHasBeenSet;
}

string CreateMerchantRequest::GetRegisterCode() const
{
    return m_registerCode;
}

void CreateMerchantRequest::SetRegisterCode(const string& _registerCode)
{
    m_registerCode = _registerCode;
    m_registerCodeHasBeenSet = true;
}

bool CreateMerchantRequest::RegisterCodeHasBeenSet() const
{
    return m_registerCodeHasBeenSet;
}

string CreateMerchantRequest::GetState() const
{
    return m_state;
}

void CreateMerchantRequest::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool CreateMerchantRequest::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string CreateMerchantRequest::GetCallbackUrl() const
{
    return m_callbackUrl;
}

void CreateMerchantRequest::SetCallbackUrl(const string& _callbackUrl)
{
    m_callbackUrl = _callbackUrl;
    m_callbackUrlHasBeenSet = true;
}

bool CreateMerchantRequest::CallbackUrlHasBeenSet() const
{
    return m_callbackUrlHasBeenSet;
}

string CreateMerchantRequest::GetProfile() const
{
    return m_profile;
}

void CreateMerchantRequest::SetProfile(const string& _profile)
{
    m_profile = _profile;
    m_profileHasBeenSet = true;
}

bool CreateMerchantRequest::ProfileHasBeenSet() const
{
    return m_profileHasBeenSet;
}


