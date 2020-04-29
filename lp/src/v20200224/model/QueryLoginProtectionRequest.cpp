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

#include <tencentcloud/lp/v20200224/model/QueryLoginProtectionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lp::V20200224::Model;
using namespace rapidjson;
using namespace std;

QueryLoginProtectionRequest::QueryLoginProtectionRequest() :
    m_loginIpHasBeenSet(false),
    m_uidHasBeenSet(false),
    m_loginTimeHasBeenSet(false),
    m_accountTypeHasBeenSet(false),
    m_appIdUHasBeenSet(false),
    m_associateAccountHasBeenSet(false),
    m_nickNameHasBeenSet(false),
    m_phoneNumberHasBeenSet(false),
    m_emailAddressHasBeenSet(false),
    m_registerTimeHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_cookieHashHasBeenSet(false),
    m_loginSourceHasBeenSet(false),
    m_loginTypeHasBeenSet(false),
    m_refererHasBeenSet(false),
    m_jumpUrlHasBeenSet(false),
    m_userAgentHasBeenSet(false),
    m_xForwardedForHasBeenSet(false),
    m_mouseClickCountHasBeenSet(false),
    m_keyboardClickCountHasBeenSet(false),
    m_resultHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_loginSpendHasBeenSet(false),
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

string QueryLoginProtectionRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_loginIpHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LoginIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_loginIp.c_str(), allocator).Move(), allocator);
    }

    if (m_uidHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Uid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_uid.c_str(), allocator).Move(), allocator);
    }

    if (m_loginTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LoginTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_loginTime.c_str(), allocator).Move(), allocator);
    }

    if (m_accountTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AccountType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_accountType.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdUHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AppIdU";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_appIdU.c_str(), allocator).Move(), allocator);
    }

    if (m_associateAccountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AssociateAccount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_associateAccount.c_str(), allocator).Move(), allocator);
    }

    if (m_nickNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NickName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_nickName.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneNumberHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PhoneNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_phoneNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_emailAddressHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EmailAddress";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_emailAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_registerTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RegisterTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_registerTime.c_str(), allocator).Move(), allocator);
    }

    if (m_addressHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_address.c_str(), allocator).Move(), allocator);
    }

    if (m_cookieHashHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CookieHash";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_cookieHash.c_str(), allocator).Move(), allocator);
    }

    if (m_loginSourceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LoginSource";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_loginSource.c_str(), allocator).Move(), allocator);
    }

    if (m_loginTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LoginType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_loginType.c_str(), allocator).Move(), allocator);
    }

    if (m_refererHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Referer";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_referer.c_str(), allocator).Move(), allocator);
    }

    if (m_jumpUrlHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "JumpUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_jumpUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_userAgentHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UserAgent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_userAgent.c_str(), allocator).Move(), allocator);
    }

    if (m_xForwardedForHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "XForwardedFor";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_xForwardedFor.c_str(), allocator).Move(), allocator);
    }

    if (m_mouseClickCountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MouseClickCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_mouseClickCount.c_str(), allocator).Move(), allocator);
    }

    if (m_keyboardClickCountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "KeyboardClickCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_keyboardClickCount.c_str(), allocator).Move(), allocator);
    }

    if (m_resultHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_result.c_str(), allocator).Move(), allocator);
    }

    if (m_reasonHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Reason";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_reason.c_str(), allocator).Move(), allocator);
    }

    if (m_loginSpendHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LoginSpend";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_loginSpend.c_str(), allocator).Move(), allocator);
    }

    if (m_macAddressHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MacAddress";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_macAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_vendorIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VendorId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_vendorId.c_str(), allocator).Move(), allocator);
    }

    if (m_appVersionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AppVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_appVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_imeiHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Imei";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_imei.c_str(), allocator).Move(), allocator);
    }

    if (m_businessIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BusinessId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_businessId.c_str(), allocator).Move(), allocator);
    }

    if (m_wxSubTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "WxSubType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_wxSubType.c_str(), allocator).Move(), allocator);
    }

    if (m_randNumHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RandNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_randNum.c_str(), allocator).Move(), allocator);
    }

    if (m_wxTokenHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "WxToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_wxToken.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string QueryLoginProtectionRequest::GetLoginIp() const
{
    return m_loginIp;
}

void QueryLoginProtectionRequest::SetLoginIp(const string& _loginIp)
{
    m_loginIp = _loginIp;
    m_loginIpHasBeenSet = true;
}

bool QueryLoginProtectionRequest::LoginIpHasBeenSet() const
{
    return m_loginIpHasBeenSet;
}

string QueryLoginProtectionRequest::GetUid() const
{
    return m_uid;
}

void QueryLoginProtectionRequest::SetUid(const string& _uid)
{
    m_uid = _uid;
    m_uidHasBeenSet = true;
}

bool QueryLoginProtectionRequest::UidHasBeenSet() const
{
    return m_uidHasBeenSet;
}

string QueryLoginProtectionRequest::GetLoginTime() const
{
    return m_loginTime;
}

void QueryLoginProtectionRequest::SetLoginTime(const string& _loginTime)
{
    m_loginTime = _loginTime;
    m_loginTimeHasBeenSet = true;
}

bool QueryLoginProtectionRequest::LoginTimeHasBeenSet() const
{
    return m_loginTimeHasBeenSet;
}

string QueryLoginProtectionRequest::GetAccountType() const
{
    return m_accountType;
}

void QueryLoginProtectionRequest::SetAccountType(const string& _accountType)
{
    m_accountType = _accountType;
    m_accountTypeHasBeenSet = true;
}

bool QueryLoginProtectionRequest::AccountTypeHasBeenSet() const
{
    return m_accountTypeHasBeenSet;
}

string QueryLoginProtectionRequest::GetAppIdU() const
{
    return m_appIdU;
}

void QueryLoginProtectionRequest::SetAppIdU(const string& _appIdU)
{
    m_appIdU = _appIdU;
    m_appIdUHasBeenSet = true;
}

bool QueryLoginProtectionRequest::AppIdUHasBeenSet() const
{
    return m_appIdUHasBeenSet;
}

string QueryLoginProtectionRequest::GetAssociateAccount() const
{
    return m_associateAccount;
}

void QueryLoginProtectionRequest::SetAssociateAccount(const string& _associateAccount)
{
    m_associateAccount = _associateAccount;
    m_associateAccountHasBeenSet = true;
}

bool QueryLoginProtectionRequest::AssociateAccountHasBeenSet() const
{
    return m_associateAccountHasBeenSet;
}

string QueryLoginProtectionRequest::GetNickName() const
{
    return m_nickName;
}

void QueryLoginProtectionRequest::SetNickName(const string& _nickName)
{
    m_nickName = _nickName;
    m_nickNameHasBeenSet = true;
}

bool QueryLoginProtectionRequest::NickNameHasBeenSet() const
{
    return m_nickNameHasBeenSet;
}

string QueryLoginProtectionRequest::GetPhoneNumber() const
{
    return m_phoneNumber;
}

void QueryLoginProtectionRequest::SetPhoneNumber(const string& _phoneNumber)
{
    m_phoneNumber = _phoneNumber;
    m_phoneNumberHasBeenSet = true;
}

bool QueryLoginProtectionRequest::PhoneNumberHasBeenSet() const
{
    return m_phoneNumberHasBeenSet;
}

string QueryLoginProtectionRequest::GetEmailAddress() const
{
    return m_emailAddress;
}

void QueryLoginProtectionRequest::SetEmailAddress(const string& _emailAddress)
{
    m_emailAddress = _emailAddress;
    m_emailAddressHasBeenSet = true;
}

bool QueryLoginProtectionRequest::EmailAddressHasBeenSet() const
{
    return m_emailAddressHasBeenSet;
}

string QueryLoginProtectionRequest::GetRegisterTime() const
{
    return m_registerTime;
}

void QueryLoginProtectionRequest::SetRegisterTime(const string& _registerTime)
{
    m_registerTime = _registerTime;
    m_registerTimeHasBeenSet = true;
}

bool QueryLoginProtectionRequest::RegisterTimeHasBeenSet() const
{
    return m_registerTimeHasBeenSet;
}

string QueryLoginProtectionRequest::GetAddress() const
{
    return m_address;
}

void QueryLoginProtectionRequest::SetAddress(const string& _address)
{
    m_address = _address;
    m_addressHasBeenSet = true;
}

bool QueryLoginProtectionRequest::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

string QueryLoginProtectionRequest::GetCookieHash() const
{
    return m_cookieHash;
}

void QueryLoginProtectionRequest::SetCookieHash(const string& _cookieHash)
{
    m_cookieHash = _cookieHash;
    m_cookieHashHasBeenSet = true;
}

bool QueryLoginProtectionRequest::CookieHashHasBeenSet() const
{
    return m_cookieHashHasBeenSet;
}

string QueryLoginProtectionRequest::GetLoginSource() const
{
    return m_loginSource;
}

void QueryLoginProtectionRequest::SetLoginSource(const string& _loginSource)
{
    m_loginSource = _loginSource;
    m_loginSourceHasBeenSet = true;
}

bool QueryLoginProtectionRequest::LoginSourceHasBeenSet() const
{
    return m_loginSourceHasBeenSet;
}

string QueryLoginProtectionRequest::GetLoginType() const
{
    return m_loginType;
}

void QueryLoginProtectionRequest::SetLoginType(const string& _loginType)
{
    m_loginType = _loginType;
    m_loginTypeHasBeenSet = true;
}

bool QueryLoginProtectionRequest::LoginTypeHasBeenSet() const
{
    return m_loginTypeHasBeenSet;
}

string QueryLoginProtectionRequest::GetReferer() const
{
    return m_referer;
}

void QueryLoginProtectionRequest::SetReferer(const string& _referer)
{
    m_referer = _referer;
    m_refererHasBeenSet = true;
}

bool QueryLoginProtectionRequest::RefererHasBeenSet() const
{
    return m_refererHasBeenSet;
}

string QueryLoginProtectionRequest::GetJumpUrl() const
{
    return m_jumpUrl;
}

void QueryLoginProtectionRequest::SetJumpUrl(const string& _jumpUrl)
{
    m_jumpUrl = _jumpUrl;
    m_jumpUrlHasBeenSet = true;
}

bool QueryLoginProtectionRequest::JumpUrlHasBeenSet() const
{
    return m_jumpUrlHasBeenSet;
}

string QueryLoginProtectionRequest::GetUserAgent() const
{
    return m_userAgent;
}

void QueryLoginProtectionRequest::SetUserAgent(const string& _userAgent)
{
    m_userAgent = _userAgent;
    m_userAgentHasBeenSet = true;
}

bool QueryLoginProtectionRequest::UserAgentHasBeenSet() const
{
    return m_userAgentHasBeenSet;
}

string QueryLoginProtectionRequest::GetXForwardedFor() const
{
    return m_xForwardedFor;
}

void QueryLoginProtectionRequest::SetXForwardedFor(const string& _xForwardedFor)
{
    m_xForwardedFor = _xForwardedFor;
    m_xForwardedForHasBeenSet = true;
}

bool QueryLoginProtectionRequest::XForwardedForHasBeenSet() const
{
    return m_xForwardedForHasBeenSet;
}

string QueryLoginProtectionRequest::GetMouseClickCount() const
{
    return m_mouseClickCount;
}

void QueryLoginProtectionRequest::SetMouseClickCount(const string& _mouseClickCount)
{
    m_mouseClickCount = _mouseClickCount;
    m_mouseClickCountHasBeenSet = true;
}

bool QueryLoginProtectionRequest::MouseClickCountHasBeenSet() const
{
    return m_mouseClickCountHasBeenSet;
}

string QueryLoginProtectionRequest::GetKeyboardClickCount() const
{
    return m_keyboardClickCount;
}

void QueryLoginProtectionRequest::SetKeyboardClickCount(const string& _keyboardClickCount)
{
    m_keyboardClickCount = _keyboardClickCount;
    m_keyboardClickCountHasBeenSet = true;
}

bool QueryLoginProtectionRequest::KeyboardClickCountHasBeenSet() const
{
    return m_keyboardClickCountHasBeenSet;
}

string QueryLoginProtectionRequest::GetResult() const
{
    return m_result;
}

void QueryLoginProtectionRequest::SetResult(const string& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool QueryLoginProtectionRequest::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

string QueryLoginProtectionRequest::GetReason() const
{
    return m_reason;
}

void QueryLoginProtectionRequest::SetReason(const string& _reason)
{
    m_reason = _reason;
    m_reasonHasBeenSet = true;
}

bool QueryLoginProtectionRequest::ReasonHasBeenSet() const
{
    return m_reasonHasBeenSet;
}

string QueryLoginProtectionRequest::GetLoginSpend() const
{
    return m_loginSpend;
}

void QueryLoginProtectionRequest::SetLoginSpend(const string& _loginSpend)
{
    m_loginSpend = _loginSpend;
    m_loginSpendHasBeenSet = true;
}

bool QueryLoginProtectionRequest::LoginSpendHasBeenSet() const
{
    return m_loginSpendHasBeenSet;
}

string QueryLoginProtectionRequest::GetMacAddress() const
{
    return m_macAddress;
}

void QueryLoginProtectionRequest::SetMacAddress(const string& _macAddress)
{
    m_macAddress = _macAddress;
    m_macAddressHasBeenSet = true;
}

bool QueryLoginProtectionRequest::MacAddressHasBeenSet() const
{
    return m_macAddressHasBeenSet;
}

string QueryLoginProtectionRequest::GetVendorId() const
{
    return m_vendorId;
}

void QueryLoginProtectionRequest::SetVendorId(const string& _vendorId)
{
    m_vendorId = _vendorId;
    m_vendorIdHasBeenSet = true;
}

bool QueryLoginProtectionRequest::VendorIdHasBeenSet() const
{
    return m_vendorIdHasBeenSet;
}

string QueryLoginProtectionRequest::GetAppVersion() const
{
    return m_appVersion;
}

void QueryLoginProtectionRequest::SetAppVersion(const string& _appVersion)
{
    m_appVersion = _appVersion;
    m_appVersionHasBeenSet = true;
}

bool QueryLoginProtectionRequest::AppVersionHasBeenSet() const
{
    return m_appVersionHasBeenSet;
}

string QueryLoginProtectionRequest::GetImei() const
{
    return m_imei;
}

void QueryLoginProtectionRequest::SetImei(const string& _imei)
{
    m_imei = _imei;
    m_imeiHasBeenSet = true;
}

bool QueryLoginProtectionRequest::ImeiHasBeenSet() const
{
    return m_imeiHasBeenSet;
}

string QueryLoginProtectionRequest::GetBusinessId() const
{
    return m_businessId;
}

void QueryLoginProtectionRequest::SetBusinessId(const string& _businessId)
{
    m_businessId = _businessId;
    m_businessIdHasBeenSet = true;
}

bool QueryLoginProtectionRequest::BusinessIdHasBeenSet() const
{
    return m_businessIdHasBeenSet;
}

string QueryLoginProtectionRequest::GetWxSubType() const
{
    return m_wxSubType;
}

void QueryLoginProtectionRequest::SetWxSubType(const string& _wxSubType)
{
    m_wxSubType = _wxSubType;
    m_wxSubTypeHasBeenSet = true;
}

bool QueryLoginProtectionRequest::WxSubTypeHasBeenSet() const
{
    return m_wxSubTypeHasBeenSet;
}

string QueryLoginProtectionRequest::GetRandNum() const
{
    return m_randNum;
}

void QueryLoginProtectionRequest::SetRandNum(const string& _randNum)
{
    m_randNum = _randNum;
    m_randNumHasBeenSet = true;
}

bool QueryLoginProtectionRequest::RandNumHasBeenSet() const
{
    return m_randNumHasBeenSet;
}

string QueryLoginProtectionRequest::GetWxToken() const
{
    return m_wxToken;
}

void QueryLoginProtectionRequest::SetWxToken(const string& _wxToken)
{
    m_wxToken = _wxToken;
    m_wxTokenHasBeenSet = true;
}

bool QueryLoginProtectionRequest::WxTokenHasBeenSet() const
{
    return m_wxTokenHasBeenSet;
}


