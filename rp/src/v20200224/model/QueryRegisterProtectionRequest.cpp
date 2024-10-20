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

#include <tencentcloud/rp/v20200224/model/QueryRegisterProtectionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rp::V20200224::Model;
using namespace std;

QueryRegisterProtectionRequest::QueryRegisterProtectionRequest() :
    m_registerIpHasBeenSet(false),
    m_uidHasBeenSet(false),
    m_registerTimeHasBeenSet(false),
    m_accountTypeHasBeenSet(false),
    m_appIdUHasBeenSet(false),
    m_associateAccountHasBeenSet(false),
    m_nickNameHasBeenSet(false),
    m_phoneNumberHasBeenSet(false),
    m_emailAddressHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_cookieHashHasBeenSet(false),
    m_registerSourceHasBeenSet(false),
    m_refererHasBeenSet(false),
    m_jumpUrlHasBeenSet(false),
    m_userAgentHasBeenSet(false),
    m_xForwardedForHasBeenSet(false),
    m_mouseClickCountHasBeenSet(false),
    m_keyboardClickCountHasBeenSet(false),
    m_resultHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_registerSpendHasBeenSet(false),
    m_macAddressHasBeenSet(false),
    m_vendorIdHasBeenSet(false),
    m_appVersionHasBeenSet(false),
    m_imeiHasBeenSet(false),
    m_businessIdHasBeenSet(false),
    m_wxSubTypeHasBeenSet(false),
    m_randNumHasBeenSet(false),
    m_wxTokenHasBeenSet(false)
{
}

string QueryRegisterProtectionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_registerIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegisterIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_registerIp.c_str(), allocator).Move(), allocator);
    }

    if (m_uidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_uid.c_str(), allocator).Move(), allocator);
    }

    if (m_registerTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegisterTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_registerTime.c_str(), allocator).Move(), allocator);
    }

    if (m_accountTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accountType.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdUHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppIdU";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appIdU.c_str(), allocator).Move(), allocator);
    }

    if (m_associateAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssociateAccount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_associateAccount.c_str(), allocator).Move(), allocator);
    }

    if (m_nickNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NickName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nickName.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhoneNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_phoneNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_emailAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EmailAddress";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_emailAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_address.c_str(), allocator).Move(), allocator);
    }

    if (m_cookieHashHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CookieHash";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cookieHash.c_str(), allocator).Move(), allocator);
    }

    if (m_registerSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegisterSource";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_registerSource.c_str(), allocator).Move(), allocator);
    }

    if (m_refererHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Referer";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_referer.c_str(), allocator).Move(), allocator);
    }

    if (m_jumpUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JumpUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_jumpUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_userAgentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserAgent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userAgent.c_str(), allocator).Move(), allocator);
    }

    if (m_xForwardedForHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "XForwardedFor";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_xForwardedFor.c_str(), allocator).Move(), allocator);
    }

    if (m_mouseClickCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MouseClickCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mouseClickCount.c_str(), allocator).Move(), allocator);
    }

    if (m_keyboardClickCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyboardClickCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyboardClickCount.c_str(), allocator).Move(), allocator);
    }

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_result.c_str(), allocator).Move(), allocator);
    }

    if (m_reasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reason";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_reason.c_str(), allocator).Move(), allocator);
    }

    if (m_registerSpendHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegisterSpend";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_registerSpend.c_str(), allocator).Move(), allocator);
    }

    if (m_macAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MacAddress";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_macAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_vendorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VendorId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vendorId.c_str(), allocator).Move(), allocator);
    }

    if (m_appVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_imeiHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Imei";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imei.c_str(), allocator).Move(), allocator);
    }

    if (m_businessIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_businessId.c_str(), allocator).Move(), allocator);
    }

    if (m_wxSubTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WxSubType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_wxSubType.c_str(), allocator).Move(), allocator);
    }

    if (m_randNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RandNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_randNum.c_str(), allocator).Move(), allocator);
    }

    if (m_wxTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WxToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_wxToken.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string QueryRegisterProtectionRequest::GetRegisterIp() const
{
    return m_registerIp;
}

void QueryRegisterProtectionRequest::SetRegisterIp(const string& _registerIp)
{
    m_registerIp = _registerIp;
    m_registerIpHasBeenSet = true;
}

bool QueryRegisterProtectionRequest::RegisterIpHasBeenSet() const
{
    return m_registerIpHasBeenSet;
}

string QueryRegisterProtectionRequest::GetUid() const
{
    return m_uid;
}

void QueryRegisterProtectionRequest::SetUid(const string& _uid)
{
    m_uid = _uid;
    m_uidHasBeenSet = true;
}

bool QueryRegisterProtectionRequest::UidHasBeenSet() const
{
    return m_uidHasBeenSet;
}

string QueryRegisterProtectionRequest::GetRegisterTime() const
{
    return m_registerTime;
}

void QueryRegisterProtectionRequest::SetRegisterTime(const string& _registerTime)
{
    m_registerTime = _registerTime;
    m_registerTimeHasBeenSet = true;
}

bool QueryRegisterProtectionRequest::RegisterTimeHasBeenSet() const
{
    return m_registerTimeHasBeenSet;
}

string QueryRegisterProtectionRequest::GetAccountType() const
{
    return m_accountType;
}

void QueryRegisterProtectionRequest::SetAccountType(const string& _accountType)
{
    m_accountType = _accountType;
    m_accountTypeHasBeenSet = true;
}

bool QueryRegisterProtectionRequest::AccountTypeHasBeenSet() const
{
    return m_accountTypeHasBeenSet;
}

string QueryRegisterProtectionRequest::GetAppIdU() const
{
    return m_appIdU;
}

void QueryRegisterProtectionRequest::SetAppIdU(const string& _appIdU)
{
    m_appIdU = _appIdU;
    m_appIdUHasBeenSet = true;
}

bool QueryRegisterProtectionRequest::AppIdUHasBeenSet() const
{
    return m_appIdUHasBeenSet;
}

string QueryRegisterProtectionRequest::GetAssociateAccount() const
{
    return m_associateAccount;
}

void QueryRegisterProtectionRequest::SetAssociateAccount(const string& _associateAccount)
{
    m_associateAccount = _associateAccount;
    m_associateAccountHasBeenSet = true;
}

bool QueryRegisterProtectionRequest::AssociateAccountHasBeenSet() const
{
    return m_associateAccountHasBeenSet;
}

string QueryRegisterProtectionRequest::GetNickName() const
{
    return m_nickName;
}

void QueryRegisterProtectionRequest::SetNickName(const string& _nickName)
{
    m_nickName = _nickName;
    m_nickNameHasBeenSet = true;
}

bool QueryRegisterProtectionRequest::NickNameHasBeenSet() const
{
    return m_nickNameHasBeenSet;
}

string QueryRegisterProtectionRequest::GetPhoneNumber() const
{
    return m_phoneNumber;
}

void QueryRegisterProtectionRequest::SetPhoneNumber(const string& _phoneNumber)
{
    m_phoneNumber = _phoneNumber;
    m_phoneNumberHasBeenSet = true;
}

bool QueryRegisterProtectionRequest::PhoneNumberHasBeenSet() const
{
    return m_phoneNumberHasBeenSet;
}

string QueryRegisterProtectionRequest::GetEmailAddress() const
{
    return m_emailAddress;
}

void QueryRegisterProtectionRequest::SetEmailAddress(const string& _emailAddress)
{
    m_emailAddress = _emailAddress;
    m_emailAddressHasBeenSet = true;
}

bool QueryRegisterProtectionRequest::EmailAddressHasBeenSet() const
{
    return m_emailAddressHasBeenSet;
}

string QueryRegisterProtectionRequest::GetAddress() const
{
    return m_address;
}

void QueryRegisterProtectionRequest::SetAddress(const string& _address)
{
    m_address = _address;
    m_addressHasBeenSet = true;
}

bool QueryRegisterProtectionRequest::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

string QueryRegisterProtectionRequest::GetCookieHash() const
{
    return m_cookieHash;
}

void QueryRegisterProtectionRequest::SetCookieHash(const string& _cookieHash)
{
    m_cookieHash = _cookieHash;
    m_cookieHashHasBeenSet = true;
}

bool QueryRegisterProtectionRequest::CookieHashHasBeenSet() const
{
    return m_cookieHashHasBeenSet;
}

string QueryRegisterProtectionRequest::GetRegisterSource() const
{
    return m_registerSource;
}

void QueryRegisterProtectionRequest::SetRegisterSource(const string& _registerSource)
{
    m_registerSource = _registerSource;
    m_registerSourceHasBeenSet = true;
}

bool QueryRegisterProtectionRequest::RegisterSourceHasBeenSet() const
{
    return m_registerSourceHasBeenSet;
}

string QueryRegisterProtectionRequest::GetReferer() const
{
    return m_referer;
}

void QueryRegisterProtectionRequest::SetReferer(const string& _referer)
{
    m_referer = _referer;
    m_refererHasBeenSet = true;
}

bool QueryRegisterProtectionRequest::RefererHasBeenSet() const
{
    return m_refererHasBeenSet;
}

string QueryRegisterProtectionRequest::GetJumpUrl() const
{
    return m_jumpUrl;
}

void QueryRegisterProtectionRequest::SetJumpUrl(const string& _jumpUrl)
{
    m_jumpUrl = _jumpUrl;
    m_jumpUrlHasBeenSet = true;
}

bool QueryRegisterProtectionRequest::JumpUrlHasBeenSet() const
{
    return m_jumpUrlHasBeenSet;
}

string QueryRegisterProtectionRequest::GetUserAgent() const
{
    return m_userAgent;
}

void QueryRegisterProtectionRequest::SetUserAgent(const string& _userAgent)
{
    m_userAgent = _userAgent;
    m_userAgentHasBeenSet = true;
}

bool QueryRegisterProtectionRequest::UserAgentHasBeenSet() const
{
    return m_userAgentHasBeenSet;
}

string QueryRegisterProtectionRequest::GetXForwardedFor() const
{
    return m_xForwardedFor;
}

void QueryRegisterProtectionRequest::SetXForwardedFor(const string& _xForwardedFor)
{
    m_xForwardedFor = _xForwardedFor;
    m_xForwardedForHasBeenSet = true;
}

bool QueryRegisterProtectionRequest::XForwardedForHasBeenSet() const
{
    return m_xForwardedForHasBeenSet;
}

string QueryRegisterProtectionRequest::GetMouseClickCount() const
{
    return m_mouseClickCount;
}

void QueryRegisterProtectionRequest::SetMouseClickCount(const string& _mouseClickCount)
{
    m_mouseClickCount = _mouseClickCount;
    m_mouseClickCountHasBeenSet = true;
}

bool QueryRegisterProtectionRequest::MouseClickCountHasBeenSet() const
{
    return m_mouseClickCountHasBeenSet;
}

string QueryRegisterProtectionRequest::GetKeyboardClickCount() const
{
    return m_keyboardClickCount;
}

void QueryRegisterProtectionRequest::SetKeyboardClickCount(const string& _keyboardClickCount)
{
    m_keyboardClickCount = _keyboardClickCount;
    m_keyboardClickCountHasBeenSet = true;
}

bool QueryRegisterProtectionRequest::KeyboardClickCountHasBeenSet() const
{
    return m_keyboardClickCountHasBeenSet;
}

string QueryRegisterProtectionRequest::GetResult() const
{
    return m_result;
}

void QueryRegisterProtectionRequest::SetResult(const string& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool QueryRegisterProtectionRequest::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

string QueryRegisterProtectionRequest::GetReason() const
{
    return m_reason;
}

void QueryRegisterProtectionRequest::SetReason(const string& _reason)
{
    m_reason = _reason;
    m_reasonHasBeenSet = true;
}

bool QueryRegisterProtectionRequest::ReasonHasBeenSet() const
{
    return m_reasonHasBeenSet;
}

string QueryRegisterProtectionRequest::GetRegisterSpend() const
{
    return m_registerSpend;
}

void QueryRegisterProtectionRequest::SetRegisterSpend(const string& _registerSpend)
{
    m_registerSpend = _registerSpend;
    m_registerSpendHasBeenSet = true;
}

bool QueryRegisterProtectionRequest::RegisterSpendHasBeenSet() const
{
    return m_registerSpendHasBeenSet;
}

string QueryRegisterProtectionRequest::GetMacAddress() const
{
    return m_macAddress;
}

void QueryRegisterProtectionRequest::SetMacAddress(const string& _macAddress)
{
    m_macAddress = _macAddress;
    m_macAddressHasBeenSet = true;
}

bool QueryRegisterProtectionRequest::MacAddressHasBeenSet() const
{
    return m_macAddressHasBeenSet;
}

string QueryRegisterProtectionRequest::GetVendorId() const
{
    return m_vendorId;
}

void QueryRegisterProtectionRequest::SetVendorId(const string& _vendorId)
{
    m_vendorId = _vendorId;
    m_vendorIdHasBeenSet = true;
}

bool QueryRegisterProtectionRequest::VendorIdHasBeenSet() const
{
    return m_vendorIdHasBeenSet;
}

string QueryRegisterProtectionRequest::GetAppVersion() const
{
    return m_appVersion;
}

void QueryRegisterProtectionRequest::SetAppVersion(const string& _appVersion)
{
    m_appVersion = _appVersion;
    m_appVersionHasBeenSet = true;
}

bool QueryRegisterProtectionRequest::AppVersionHasBeenSet() const
{
    return m_appVersionHasBeenSet;
}

string QueryRegisterProtectionRequest::GetImei() const
{
    return m_imei;
}

void QueryRegisterProtectionRequest::SetImei(const string& _imei)
{
    m_imei = _imei;
    m_imeiHasBeenSet = true;
}

bool QueryRegisterProtectionRequest::ImeiHasBeenSet() const
{
    return m_imeiHasBeenSet;
}

string QueryRegisterProtectionRequest::GetBusinessId() const
{
    return m_businessId;
}

void QueryRegisterProtectionRequest::SetBusinessId(const string& _businessId)
{
    m_businessId = _businessId;
    m_businessIdHasBeenSet = true;
}

bool QueryRegisterProtectionRequest::BusinessIdHasBeenSet() const
{
    return m_businessIdHasBeenSet;
}

string QueryRegisterProtectionRequest::GetWxSubType() const
{
    return m_wxSubType;
}

void QueryRegisterProtectionRequest::SetWxSubType(const string& _wxSubType)
{
    m_wxSubType = _wxSubType;
    m_wxSubTypeHasBeenSet = true;
}

bool QueryRegisterProtectionRequest::WxSubTypeHasBeenSet() const
{
    return m_wxSubTypeHasBeenSet;
}

string QueryRegisterProtectionRequest::GetRandNum() const
{
    return m_randNum;
}

void QueryRegisterProtectionRequest::SetRandNum(const string& _randNum)
{
    m_randNum = _randNum;
    m_randNumHasBeenSet = true;
}

bool QueryRegisterProtectionRequest::RandNumHasBeenSet() const
{
    return m_randNumHasBeenSet;
}

string QueryRegisterProtectionRequest::GetWxToken() const
{
    return m_wxToken;
}

void QueryRegisterProtectionRequest::SetWxToken(const string& _wxToken)
{
    m_wxToken = _wxToken;
    m_wxTokenHasBeenSet = true;
}

bool QueryRegisterProtectionRequest::WxTokenHasBeenSet() const
{
    return m_wxTokenHasBeenSet;
}


