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

#include <tencentcloud/aa/v20200224/model/QueryActivityAntiRushRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Aa::V20200224::Model;
using namespace rapidjson;
using namespace std;

QueryActivityAntiRushRequest::QueryActivityAntiRushRequest() :
    m_accountTypeHasBeenSet(false),
    m_uidHasBeenSet(false),
    m_userIpHasBeenSet(false),
    m_postTimeHasBeenSet(false),
    m_appIdUHasBeenSet(false),
    m_nickNameHasBeenSet(false),
    m_phoneNumberHasBeenSet(false),
    m_emailAddressHasBeenSet(false),
    m_registerTimeHasBeenSet(false),
    m_registerIpHasBeenSet(false),
    m_cookieHashHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_loginSourceHasBeenSet(false),
    m_loginTypeHasBeenSet(false),
    m_loginSpendHasBeenSet(false),
    m_rootIdHasBeenSet(false),
    m_refererHasBeenSet(false),
    m_jumpUrlHasBeenSet(false),
    m_userAgentHasBeenSet(false),
    m_xForwardedForHasBeenSet(false),
    m_mouseClickCountHasBeenSet(false),
    m_keyboardClickCountHasBeenSet(false),
    m_macAddressHasBeenSet(false),
    m_vendorIdHasBeenSet(false),
    m_imeiHasBeenSet(false),
    m_appVersionHasBeenSet(false),
    m_businessIdHasBeenSet(false),
    m_wxSubTypeHasBeenSet(false),
    m_randNumHasBeenSet(false),
    m_wxTokenHasBeenSet(false),
    m_checkDeviceHasBeenSet(false)
{
}

string QueryActivityAntiRushRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_accountTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AccountType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_accountType.c_str(), allocator).Move(), allocator);
    }

    if (m_uidHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Uid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_uid.c_str(), allocator).Move(), allocator);
    }

    if (m_userIpHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UserIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_userIp.c_str(), allocator).Move(), allocator);
    }

    if (m_postTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PostTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_postTime.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdUHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AppIdU";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_appIdU.c_str(), allocator).Move(), allocator);
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

    if (m_registerIpHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RegisterIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_registerIp.c_str(), allocator).Move(), allocator);
    }

    if (m_cookieHashHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CookieHash";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_cookieHash.c_str(), allocator).Move(), allocator);
    }

    if (m_addressHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_address.c_str(), allocator).Move(), allocator);
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

    if (m_loginSpendHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LoginSpend";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_loginSpend.c_str(), allocator).Move(), allocator);
    }

    if (m_rootIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RootId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_rootId.c_str(), allocator).Move(), allocator);
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

    if (m_imeiHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Imei";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_imei.c_str(), allocator).Move(), allocator);
    }

    if (m_appVersionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AppVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_appVersion.c_str(), allocator).Move(), allocator);
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

    if (m_checkDeviceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CheckDevice";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_checkDevice.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string QueryActivityAntiRushRequest::GetAccountType() const
{
    return m_accountType;
}

void QueryActivityAntiRushRequest::SetAccountType(const string& _accountType)
{
    m_accountType = _accountType;
    m_accountTypeHasBeenSet = true;
}

bool QueryActivityAntiRushRequest::AccountTypeHasBeenSet() const
{
    return m_accountTypeHasBeenSet;
}

string QueryActivityAntiRushRequest::GetUid() const
{
    return m_uid;
}

void QueryActivityAntiRushRequest::SetUid(const string& _uid)
{
    m_uid = _uid;
    m_uidHasBeenSet = true;
}

bool QueryActivityAntiRushRequest::UidHasBeenSet() const
{
    return m_uidHasBeenSet;
}

string QueryActivityAntiRushRequest::GetUserIp() const
{
    return m_userIp;
}

void QueryActivityAntiRushRequest::SetUserIp(const string& _userIp)
{
    m_userIp = _userIp;
    m_userIpHasBeenSet = true;
}

bool QueryActivityAntiRushRequest::UserIpHasBeenSet() const
{
    return m_userIpHasBeenSet;
}

string QueryActivityAntiRushRequest::GetPostTime() const
{
    return m_postTime;
}

void QueryActivityAntiRushRequest::SetPostTime(const string& _postTime)
{
    m_postTime = _postTime;
    m_postTimeHasBeenSet = true;
}

bool QueryActivityAntiRushRequest::PostTimeHasBeenSet() const
{
    return m_postTimeHasBeenSet;
}

string QueryActivityAntiRushRequest::GetAppIdU() const
{
    return m_appIdU;
}

void QueryActivityAntiRushRequest::SetAppIdU(const string& _appIdU)
{
    m_appIdU = _appIdU;
    m_appIdUHasBeenSet = true;
}

bool QueryActivityAntiRushRequest::AppIdUHasBeenSet() const
{
    return m_appIdUHasBeenSet;
}

string QueryActivityAntiRushRequest::GetNickName() const
{
    return m_nickName;
}

void QueryActivityAntiRushRequest::SetNickName(const string& _nickName)
{
    m_nickName = _nickName;
    m_nickNameHasBeenSet = true;
}

bool QueryActivityAntiRushRequest::NickNameHasBeenSet() const
{
    return m_nickNameHasBeenSet;
}

string QueryActivityAntiRushRequest::GetPhoneNumber() const
{
    return m_phoneNumber;
}

void QueryActivityAntiRushRequest::SetPhoneNumber(const string& _phoneNumber)
{
    m_phoneNumber = _phoneNumber;
    m_phoneNumberHasBeenSet = true;
}

bool QueryActivityAntiRushRequest::PhoneNumberHasBeenSet() const
{
    return m_phoneNumberHasBeenSet;
}

string QueryActivityAntiRushRequest::GetEmailAddress() const
{
    return m_emailAddress;
}

void QueryActivityAntiRushRequest::SetEmailAddress(const string& _emailAddress)
{
    m_emailAddress = _emailAddress;
    m_emailAddressHasBeenSet = true;
}

bool QueryActivityAntiRushRequest::EmailAddressHasBeenSet() const
{
    return m_emailAddressHasBeenSet;
}

string QueryActivityAntiRushRequest::GetRegisterTime() const
{
    return m_registerTime;
}

void QueryActivityAntiRushRequest::SetRegisterTime(const string& _registerTime)
{
    m_registerTime = _registerTime;
    m_registerTimeHasBeenSet = true;
}

bool QueryActivityAntiRushRequest::RegisterTimeHasBeenSet() const
{
    return m_registerTimeHasBeenSet;
}

string QueryActivityAntiRushRequest::GetRegisterIp() const
{
    return m_registerIp;
}

void QueryActivityAntiRushRequest::SetRegisterIp(const string& _registerIp)
{
    m_registerIp = _registerIp;
    m_registerIpHasBeenSet = true;
}

bool QueryActivityAntiRushRequest::RegisterIpHasBeenSet() const
{
    return m_registerIpHasBeenSet;
}

string QueryActivityAntiRushRequest::GetCookieHash() const
{
    return m_cookieHash;
}

void QueryActivityAntiRushRequest::SetCookieHash(const string& _cookieHash)
{
    m_cookieHash = _cookieHash;
    m_cookieHashHasBeenSet = true;
}

bool QueryActivityAntiRushRequest::CookieHashHasBeenSet() const
{
    return m_cookieHashHasBeenSet;
}

string QueryActivityAntiRushRequest::GetAddress() const
{
    return m_address;
}

void QueryActivityAntiRushRequest::SetAddress(const string& _address)
{
    m_address = _address;
    m_addressHasBeenSet = true;
}

bool QueryActivityAntiRushRequest::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

string QueryActivityAntiRushRequest::GetLoginSource() const
{
    return m_loginSource;
}

void QueryActivityAntiRushRequest::SetLoginSource(const string& _loginSource)
{
    m_loginSource = _loginSource;
    m_loginSourceHasBeenSet = true;
}

bool QueryActivityAntiRushRequest::LoginSourceHasBeenSet() const
{
    return m_loginSourceHasBeenSet;
}

string QueryActivityAntiRushRequest::GetLoginType() const
{
    return m_loginType;
}

void QueryActivityAntiRushRequest::SetLoginType(const string& _loginType)
{
    m_loginType = _loginType;
    m_loginTypeHasBeenSet = true;
}

bool QueryActivityAntiRushRequest::LoginTypeHasBeenSet() const
{
    return m_loginTypeHasBeenSet;
}

string QueryActivityAntiRushRequest::GetLoginSpend() const
{
    return m_loginSpend;
}

void QueryActivityAntiRushRequest::SetLoginSpend(const string& _loginSpend)
{
    m_loginSpend = _loginSpend;
    m_loginSpendHasBeenSet = true;
}

bool QueryActivityAntiRushRequest::LoginSpendHasBeenSet() const
{
    return m_loginSpendHasBeenSet;
}

string QueryActivityAntiRushRequest::GetRootId() const
{
    return m_rootId;
}

void QueryActivityAntiRushRequest::SetRootId(const string& _rootId)
{
    m_rootId = _rootId;
    m_rootIdHasBeenSet = true;
}

bool QueryActivityAntiRushRequest::RootIdHasBeenSet() const
{
    return m_rootIdHasBeenSet;
}

string QueryActivityAntiRushRequest::GetReferer() const
{
    return m_referer;
}

void QueryActivityAntiRushRequest::SetReferer(const string& _referer)
{
    m_referer = _referer;
    m_refererHasBeenSet = true;
}

bool QueryActivityAntiRushRequest::RefererHasBeenSet() const
{
    return m_refererHasBeenSet;
}

string QueryActivityAntiRushRequest::GetJumpUrl() const
{
    return m_jumpUrl;
}

void QueryActivityAntiRushRequest::SetJumpUrl(const string& _jumpUrl)
{
    m_jumpUrl = _jumpUrl;
    m_jumpUrlHasBeenSet = true;
}

bool QueryActivityAntiRushRequest::JumpUrlHasBeenSet() const
{
    return m_jumpUrlHasBeenSet;
}

string QueryActivityAntiRushRequest::GetUserAgent() const
{
    return m_userAgent;
}

void QueryActivityAntiRushRequest::SetUserAgent(const string& _userAgent)
{
    m_userAgent = _userAgent;
    m_userAgentHasBeenSet = true;
}

bool QueryActivityAntiRushRequest::UserAgentHasBeenSet() const
{
    return m_userAgentHasBeenSet;
}

string QueryActivityAntiRushRequest::GetXForwardedFor() const
{
    return m_xForwardedFor;
}

void QueryActivityAntiRushRequest::SetXForwardedFor(const string& _xForwardedFor)
{
    m_xForwardedFor = _xForwardedFor;
    m_xForwardedForHasBeenSet = true;
}

bool QueryActivityAntiRushRequest::XForwardedForHasBeenSet() const
{
    return m_xForwardedForHasBeenSet;
}

string QueryActivityAntiRushRequest::GetMouseClickCount() const
{
    return m_mouseClickCount;
}

void QueryActivityAntiRushRequest::SetMouseClickCount(const string& _mouseClickCount)
{
    m_mouseClickCount = _mouseClickCount;
    m_mouseClickCountHasBeenSet = true;
}

bool QueryActivityAntiRushRequest::MouseClickCountHasBeenSet() const
{
    return m_mouseClickCountHasBeenSet;
}

string QueryActivityAntiRushRequest::GetKeyboardClickCount() const
{
    return m_keyboardClickCount;
}

void QueryActivityAntiRushRequest::SetKeyboardClickCount(const string& _keyboardClickCount)
{
    m_keyboardClickCount = _keyboardClickCount;
    m_keyboardClickCountHasBeenSet = true;
}

bool QueryActivityAntiRushRequest::KeyboardClickCountHasBeenSet() const
{
    return m_keyboardClickCountHasBeenSet;
}

string QueryActivityAntiRushRequest::GetMacAddress() const
{
    return m_macAddress;
}

void QueryActivityAntiRushRequest::SetMacAddress(const string& _macAddress)
{
    m_macAddress = _macAddress;
    m_macAddressHasBeenSet = true;
}

bool QueryActivityAntiRushRequest::MacAddressHasBeenSet() const
{
    return m_macAddressHasBeenSet;
}

string QueryActivityAntiRushRequest::GetVendorId() const
{
    return m_vendorId;
}

void QueryActivityAntiRushRequest::SetVendorId(const string& _vendorId)
{
    m_vendorId = _vendorId;
    m_vendorIdHasBeenSet = true;
}

bool QueryActivityAntiRushRequest::VendorIdHasBeenSet() const
{
    return m_vendorIdHasBeenSet;
}

string QueryActivityAntiRushRequest::GetImei() const
{
    return m_imei;
}

void QueryActivityAntiRushRequest::SetImei(const string& _imei)
{
    m_imei = _imei;
    m_imeiHasBeenSet = true;
}

bool QueryActivityAntiRushRequest::ImeiHasBeenSet() const
{
    return m_imeiHasBeenSet;
}

string QueryActivityAntiRushRequest::GetAppVersion() const
{
    return m_appVersion;
}

void QueryActivityAntiRushRequest::SetAppVersion(const string& _appVersion)
{
    m_appVersion = _appVersion;
    m_appVersionHasBeenSet = true;
}

bool QueryActivityAntiRushRequest::AppVersionHasBeenSet() const
{
    return m_appVersionHasBeenSet;
}

string QueryActivityAntiRushRequest::GetBusinessId() const
{
    return m_businessId;
}

void QueryActivityAntiRushRequest::SetBusinessId(const string& _businessId)
{
    m_businessId = _businessId;
    m_businessIdHasBeenSet = true;
}

bool QueryActivityAntiRushRequest::BusinessIdHasBeenSet() const
{
    return m_businessIdHasBeenSet;
}

string QueryActivityAntiRushRequest::GetWxSubType() const
{
    return m_wxSubType;
}

void QueryActivityAntiRushRequest::SetWxSubType(const string& _wxSubType)
{
    m_wxSubType = _wxSubType;
    m_wxSubTypeHasBeenSet = true;
}

bool QueryActivityAntiRushRequest::WxSubTypeHasBeenSet() const
{
    return m_wxSubTypeHasBeenSet;
}

string QueryActivityAntiRushRequest::GetRandNum() const
{
    return m_randNum;
}

void QueryActivityAntiRushRequest::SetRandNum(const string& _randNum)
{
    m_randNum = _randNum;
    m_randNumHasBeenSet = true;
}

bool QueryActivityAntiRushRequest::RandNumHasBeenSet() const
{
    return m_randNumHasBeenSet;
}

string QueryActivityAntiRushRequest::GetWxToken() const
{
    return m_wxToken;
}

void QueryActivityAntiRushRequest::SetWxToken(const string& _wxToken)
{
    m_wxToken = _wxToken;
    m_wxTokenHasBeenSet = true;
}

bool QueryActivityAntiRushRequest::WxTokenHasBeenSet() const
{
    return m_wxTokenHasBeenSet;
}

string QueryActivityAntiRushRequest::GetCheckDevice() const
{
    return m_checkDevice;
}

void QueryActivityAntiRushRequest::SetCheckDevice(const string& _checkDevice)
{
    m_checkDevice = _checkDevice;
    m_checkDeviceHasBeenSet = true;
}

bool QueryActivityAntiRushRequest::CheckDeviceHasBeenSet() const
{
    return m_checkDeviceHasBeenSet;
}


