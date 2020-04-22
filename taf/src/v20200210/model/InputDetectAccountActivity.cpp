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

#include <tencentcloud/taf/v20200210/model/InputDetectAccountActivity.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Taf::V20200210::Model;
using namespace rapidjson;
using namespace std;

InputDetectAccountActivity::InputDetectAccountActivity() :
    m_uidHasBeenSet(false),
    m_accountTypeHasBeenSet(false),
    m_userIpHasBeenSet(false),
    m_postTimeHasBeenSet(false),
    m_appIdUHasBeenSet(false),
    m_nickNameHasBeenSet(false),
    m_phoneNumberHasBeenSet(false),
    m_emailAddressHasBeenSet(false),
    m_cookieHashHasBeenSet(false),
    m_userAgentHasBeenSet(false),
    m_xForwardedForHasBeenSet(false),
    m_macAddressHasBeenSet(false),
    m_vendorIdHasBeenSet(false),
    m_imeiHasBeenSet(false)
{
}

CoreInternalOutcome InputDetectAccountActivity::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Uid") && !value["Uid"].IsNull())
    {
        if (!value["Uid"].IsString())
        {
            return CoreInternalOutcome(Error("response `InputDetectAccountActivity.Uid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uid = string(value["Uid"].GetString());
        m_uidHasBeenSet = true;
    }

    if (value.HasMember("AccountType") && !value["AccountType"].IsNull())
    {
        if (!value["AccountType"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `InputDetectAccountActivity.AccountType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_accountType = value["AccountType"].GetUint64();
        m_accountTypeHasBeenSet = true;
    }

    if (value.HasMember("UserIp") && !value["UserIp"].IsNull())
    {
        if (!value["UserIp"].IsString())
        {
            return CoreInternalOutcome(Error("response `InputDetectAccountActivity.UserIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userIp = string(value["UserIp"].GetString());
        m_userIpHasBeenSet = true;
    }

    if (value.HasMember("PostTime") && !value["PostTime"].IsNull())
    {
        if (!value["PostTime"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `InputDetectAccountActivity.PostTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_postTime = value["PostTime"].GetUint64();
        m_postTimeHasBeenSet = true;
    }

    if (value.HasMember("AppIdU") && !value["AppIdU"].IsNull())
    {
        if (!value["AppIdU"].IsString())
        {
            return CoreInternalOutcome(Error("response `InputDetectAccountActivity.AppIdU` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appIdU = string(value["AppIdU"].GetString());
        m_appIdUHasBeenSet = true;
    }

    if (value.HasMember("NickName") && !value["NickName"].IsNull())
    {
        if (!value["NickName"].IsString())
        {
            return CoreInternalOutcome(Error("response `InputDetectAccountActivity.NickName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nickName = string(value["NickName"].GetString());
        m_nickNameHasBeenSet = true;
    }

    if (value.HasMember("PhoneNumber") && !value["PhoneNumber"].IsNull())
    {
        if (!value["PhoneNumber"].IsString())
        {
            return CoreInternalOutcome(Error("response `InputDetectAccountActivity.PhoneNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phoneNumber = string(value["PhoneNumber"].GetString());
        m_phoneNumberHasBeenSet = true;
    }

    if (value.HasMember("EmailAddress") && !value["EmailAddress"].IsNull())
    {
        if (!value["EmailAddress"].IsString())
        {
            return CoreInternalOutcome(Error("response `InputDetectAccountActivity.EmailAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_emailAddress = string(value["EmailAddress"].GetString());
        m_emailAddressHasBeenSet = true;
    }

    if (value.HasMember("CookieHash") && !value["CookieHash"].IsNull())
    {
        if (!value["CookieHash"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `InputDetectAccountActivity.CookieHash` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_cookieHash = value["CookieHash"].GetDouble();
        m_cookieHashHasBeenSet = true;
    }

    if (value.HasMember("UserAgent") && !value["UserAgent"].IsNull())
    {
        if (!value["UserAgent"].IsString())
        {
            return CoreInternalOutcome(Error("response `InputDetectAccountActivity.UserAgent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userAgent = string(value["UserAgent"].GetString());
        m_userAgentHasBeenSet = true;
    }

    if (value.HasMember("XForwardedFor") && !value["XForwardedFor"].IsNull())
    {
        if (!value["XForwardedFor"].IsString())
        {
            return CoreInternalOutcome(Error("response `InputDetectAccountActivity.XForwardedFor` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_xForwardedFor = string(value["XForwardedFor"].GetString());
        m_xForwardedForHasBeenSet = true;
    }

    if (value.HasMember("MacAddress") && !value["MacAddress"].IsNull())
    {
        if (!value["MacAddress"].IsString())
        {
            return CoreInternalOutcome(Error("response `InputDetectAccountActivity.MacAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_macAddress = string(value["MacAddress"].GetString());
        m_macAddressHasBeenSet = true;
    }

    if (value.HasMember("VendorId") && !value["VendorId"].IsNull())
    {
        if (!value["VendorId"].IsString())
        {
            return CoreInternalOutcome(Error("response `InputDetectAccountActivity.VendorId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vendorId = string(value["VendorId"].GetString());
        m_vendorIdHasBeenSet = true;
    }

    if (value.HasMember("Imei") && !value["Imei"].IsNull())
    {
        if (!value["Imei"].IsString())
        {
            return CoreInternalOutcome(Error("response `InputDetectAccountActivity.Imei` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imei = string(value["Imei"].GetString());
        m_imeiHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InputDetectAccountActivity::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_uidHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Uid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_uid.c_str(), allocator).Move(), allocator);
    }

    if (m_accountTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AccountType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accountType, allocator);
    }

    if (m_userIpHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UserIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_userIp.c_str(), allocator).Move(), allocator);
    }

    if (m_postTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PostTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_postTime, allocator);
    }

    if (m_appIdUHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AppIdU";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_appIdU.c_str(), allocator).Move(), allocator);
    }

    if (m_nickNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NickName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_nickName.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneNumberHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PhoneNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_phoneNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_emailAddressHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EmailAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_emailAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_cookieHashHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CookieHash";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cookieHash, allocator);
    }

    if (m_userAgentHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UserAgent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_userAgent.c_str(), allocator).Move(), allocator);
    }

    if (m_xForwardedForHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "XForwardedFor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_xForwardedFor.c_str(), allocator).Move(), allocator);
    }

    if (m_macAddressHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MacAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_macAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_vendorIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VendorId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_vendorId.c_str(), allocator).Move(), allocator);
    }

    if (m_imeiHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Imei";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_imei.c_str(), allocator).Move(), allocator);
    }

}


string InputDetectAccountActivity::GetUid() const
{
    return m_uid;
}

void InputDetectAccountActivity::SetUid(const string& _uid)
{
    m_uid = _uid;
    m_uidHasBeenSet = true;
}

bool InputDetectAccountActivity::UidHasBeenSet() const
{
    return m_uidHasBeenSet;
}

uint64_t InputDetectAccountActivity::GetAccountType() const
{
    return m_accountType;
}

void InputDetectAccountActivity::SetAccountType(const uint64_t& _accountType)
{
    m_accountType = _accountType;
    m_accountTypeHasBeenSet = true;
}

bool InputDetectAccountActivity::AccountTypeHasBeenSet() const
{
    return m_accountTypeHasBeenSet;
}

string InputDetectAccountActivity::GetUserIp() const
{
    return m_userIp;
}

void InputDetectAccountActivity::SetUserIp(const string& _userIp)
{
    m_userIp = _userIp;
    m_userIpHasBeenSet = true;
}

bool InputDetectAccountActivity::UserIpHasBeenSet() const
{
    return m_userIpHasBeenSet;
}

uint64_t InputDetectAccountActivity::GetPostTime() const
{
    return m_postTime;
}

void InputDetectAccountActivity::SetPostTime(const uint64_t& _postTime)
{
    m_postTime = _postTime;
    m_postTimeHasBeenSet = true;
}

bool InputDetectAccountActivity::PostTimeHasBeenSet() const
{
    return m_postTimeHasBeenSet;
}

string InputDetectAccountActivity::GetAppIdU() const
{
    return m_appIdU;
}

void InputDetectAccountActivity::SetAppIdU(const string& _appIdU)
{
    m_appIdU = _appIdU;
    m_appIdUHasBeenSet = true;
}

bool InputDetectAccountActivity::AppIdUHasBeenSet() const
{
    return m_appIdUHasBeenSet;
}

string InputDetectAccountActivity::GetNickName() const
{
    return m_nickName;
}

void InputDetectAccountActivity::SetNickName(const string& _nickName)
{
    m_nickName = _nickName;
    m_nickNameHasBeenSet = true;
}

bool InputDetectAccountActivity::NickNameHasBeenSet() const
{
    return m_nickNameHasBeenSet;
}

string InputDetectAccountActivity::GetPhoneNumber() const
{
    return m_phoneNumber;
}

void InputDetectAccountActivity::SetPhoneNumber(const string& _phoneNumber)
{
    m_phoneNumber = _phoneNumber;
    m_phoneNumberHasBeenSet = true;
}

bool InputDetectAccountActivity::PhoneNumberHasBeenSet() const
{
    return m_phoneNumberHasBeenSet;
}

string InputDetectAccountActivity::GetEmailAddress() const
{
    return m_emailAddress;
}

void InputDetectAccountActivity::SetEmailAddress(const string& _emailAddress)
{
    m_emailAddress = _emailAddress;
    m_emailAddressHasBeenSet = true;
}

bool InputDetectAccountActivity::EmailAddressHasBeenSet() const
{
    return m_emailAddressHasBeenSet;
}

double InputDetectAccountActivity::GetCookieHash() const
{
    return m_cookieHash;
}

void InputDetectAccountActivity::SetCookieHash(const double& _cookieHash)
{
    m_cookieHash = _cookieHash;
    m_cookieHashHasBeenSet = true;
}

bool InputDetectAccountActivity::CookieHashHasBeenSet() const
{
    return m_cookieHashHasBeenSet;
}

string InputDetectAccountActivity::GetUserAgent() const
{
    return m_userAgent;
}

void InputDetectAccountActivity::SetUserAgent(const string& _userAgent)
{
    m_userAgent = _userAgent;
    m_userAgentHasBeenSet = true;
}

bool InputDetectAccountActivity::UserAgentHasBeenSet() const
{
    return m_userAgentHasBeenSet;
}

string InputDetectAccountActivity::GetXForwardedFor() const
{
    return m_xForwardedFor;
}

void InputDetectAccountActivity::SetXForwardedFor(const string& _xForwardedFor)
{
    m_xForwardedFor = _xForwardedFor;
    m_xForwardedForHasBeenSet = true;
}

bool InputDetectAccountActivity::XForwardedForHasBeenSet() const
{
    return m_xForwardedForHasBeenSet;
}

string InputDetectAccountActivity::GetMacAddress() const
{
    return m_macAddress;
}

void InputDetectAccountActivity::SetMacAddress(const string& _macAddress)
{
    m_macAddress = _macAddress;
    m_macAddressHasBeenSet = true;
}

bool InputDetectAccountActivity::MacAddressHasBeenSet() const
{
    return m_macAddressHasBeenSet;
}

string InputDetectAccountActivity::GetVendorId() const
{
    return m_vendorId;
}

void InputDetectAccountActivity::SetVendorId(const string& _vendorId)
{
    m_vendorId = _vendorId;
    m_vendorIdHasBeenSet = true;
}

bool InputDetectAccountActivity::VendorIdHasBeenSet() const
{
    return m_vendorIdHasBeenSet;
}

string InputDetectAccountActivity::GetImei() const
{
    return m_imei;
}

void InputDetectAccountActivity::SetImei(const string& _imei)
{
    m_imei = _imei;
    m_imeiHasBeenSet = true;
}

bool InputDetectAccountActivity::ImeiHasBeenSet() const
{
    return m_imeiHasBeenSet;
}

