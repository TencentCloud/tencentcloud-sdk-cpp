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

#include <tencentcloud/aa/v20200224/model/InputActivityAntiRushAdvanced.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Aa::V20200224::Model;
using namespace std;

InputActivityAntiRushAdvanced::InputActivityAntiRushAdvanced() :
    m_accountHasBeenSet(false),
    m_userIpHasBeenSet(false),
    m_postTimeHasBeenSet(false),
    m_sponsorHasBeenSet(false),
    m_onlineScamHasBeenSet(false),
    m_businessIdHasBeenSet(false),
    m_nicknameHasBeenSet(false),
    m_emailAddressHasBeenSet(false),
    m_checkDeviceHasBeenSet(false),
    m_cookieHashHasBeenSet(false),
    m_refererHasBeenSet(false),
    m_userAgentHasBeenSet(false),
    m_xForwardedForHasBeenSet(false),
    m_macAddressHasBeenSet(false),
    m_vendorIdHasBeenSet(false)
{
}

CoreInternalOutcome InputActivityAntiRushAdvanced::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Account") && !value["Account"].IsNull())
    {
        if (!value["Account"].IsObject())
        {
            return CoreInternalOutcome(Error("response `InputActivityAntiRushAdvanced.Account` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_account.Deserialize(value["Account"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_accountHasBeenSet = true;
    }

    if (value.HasMember("UserIp") && !value["UserIp"].IsNull())
    {
        if (!value["UserIp"].IsString())
        {
            return CoreInternalOutcome(Error("response `InputActivityAntiRushAdvanced.UserIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userIp = string(value["UserIp"].GetString());
        m_userIpHasBeenSet = true;
    }

    if (value.HasMember("PostTime") && !value["PostTime"].IsNull())
    {
        if (!value["PostTime"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `InputActivityAntiRushAdvanced.PostTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_postTime = value["PostTime"].GetUint64();
        m_postTimeHasBeenSet = true;
    }

    if (value.HasMember("Sponsor") && !value["Sponsor"].IsNull())
    {
        if (!value["Sponsor"].IsObject())
        {
            return CoreInternalOutcome(Error("response `InputActivityAntiRushAdvanced.Sponsor` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sponsor.Deserialize(value["Sponsor"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sponsorHasBeenSet = true;
    }

    if (value.HasMember("OnlineScam") && !value["OnlineScam"].IsNull())
    {
        if (!value["OnlineScam"].IsObject())
        {
            return CoreInternalOutcome(Error("response `InputActivityAntiRushAdvanced.OnlineScam` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_onlineScam.Deserialize(value["OnlineScam"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_onlineScamHasBeenSet = true;
    }

    if (value.HasMember("BusinessId") && !value["BusinessId"].IsNull())
    {
        if (!value["BusinessId"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `InputActivityAntiRushAdvanced.BusinessId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_businessId = value["BusinessId"].GetUint64();
        m_businessIdHasBeenSet = true;
    }

    if (value.HasMember("Nickname") && !value["Nickname"].IsNull())
    {
        if (!value["Nickname"].IsString())
        {
            return CoreInternalOutcome(Error("response `InputActivityAntiRushAdvanced.Nickname` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nickname = string(value["Nickname"].GetString());
        m_nicknameHasBeenSet = true;
    }

    if (value.HasMember("EmailAddress") && !value["EmailAddress"].IsNull())
    {
        if (!value["EmailAddress"].IsString())
        {
            return CoreInternalOutcome(Error("response `InputActivityAntiRushAdvanced.EmailAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_emailAddress = string(value["EmailAddress"].GetString());
        m_emailAddressHasBeenSet = true;
    }

    if (value.HasMember("CheckDevice") && !value["CheckDevice"].IsNull())
    {
        if (!value["CheckDevice"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `InputActivityAntiRushAdvanced.CheckDevice` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_checkDevice = value["CheckDevice"].GetInt64();
        m_checkDeviceHasBeenSet = true;
    }

    if (value.HasMember("CookieHash") && !value["CookieHash"].IsNull())
    {
        if (!value["CookieHash"].IsString())
        {
            return CoreInternalOutcome(Error("response `InputActivityAntiRushAdvanced.CookieHash` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cookieHash = string(value["CookieHash"].GetString());
        m_cookieHashHasBeenSet = true;
    }

    if (value.HasMember("Referer") && !value["Referer"].IsNull())
    {
        if (!value["Referer"].IsString())
        {
            return CoreInternalOutcome(Error("response `InputActivityAntiRushAdvanced.Referer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_referer = string(value["Referer"].GetString());
        m_refererHasBeenSet = true;
    }

    if (value.HasMember("UserAgent") && !value["UserAgent"].IsNull())
    {
        if (!value["UserAgent"].IsString())
        {
            return CoreInternalOutcome(Error("response `InputActivityAntiRushAdvanced.UserAgent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userAgent = string(value["UserAgent"].GetString());
        m_userAgentHasBeenSet = true;
    }

    if (value.HasMember("XForwardedFor") && !value["XForwardedFor"].IsNull())
    {
        if (!value["XForwardedFor"].IsString())
        {
            return CoreInternalOutcome(Error("response `InputActivityAntiRushAdvanced.XForwardedFor` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_xForwardedFor = string(value["XForwardedFor"].GetString());
        m_xForwardedForHasBeenSet = true;
    }

    if (value.HasMember("MacAddress") && !value["MacAddress"].IsNull())
    {
        if (!value["MacAddress"].IsString())
        {
            return CoreInternalOutcome(Error("response `InputActivityAntiRushAdvanced.MacAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_macAddress = string(value["MacAddress"].GetString());
        m_macAddressHasBeenSet = true;
    }

    if (value.HasMember("VendorId") && !value["VendorId"].IsNull())
    {
        if (!value["VendorId"].IsString())
        {
            return CoreInternalOutcome(Error("response `InputActivityAntiRushAdvanced.VendorId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vendorId = string(value["VendorId"].GetString());
        m_vendorIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InputActivityAntiRushAdvanced::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_accountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Account";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_account.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_userIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userIp.c_str(), allocator).Move(), allocator);
    }

    if (m_postTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PostTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_postTime, allocator);
    }

    if (m_sponsorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sponsor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sponsor.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_onlineScamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OnlineScam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_onlineScam.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_businessIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_businessId, allocator);
    }

    if (m_nicknameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nickname";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nickname.c_str(), allocator).Move(), allocator);
    }

    if (m_emailAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EmailAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_emailAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_checkDeviceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckDevice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_checkDevice, allocator);
    }

    if (m_cookieHashHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CookieHash";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cookieHash.c_str(), allocator).Move(), allocator);
    }

    if (m_refererHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Referer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_referer.c_str(), allocator).Move(), allocator);
    }

    if (m_userAgentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserAgent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userAgent.c_str(), allocator).Move(), allocator);
    }

    if (m_xForwardedForHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "XForwardedFor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_xForwardedFor.c_str(), allocator).Move(), allocator);
    }

    if (m_macAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MacAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_macAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_vendorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VendorId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vendorId.c_str(), allocator).Move(), allocator);
    }

}


AccountInfo InputActivityAntiRushAdvanced::GetAccount() const
{
    return m_account;
}

void InputActivityAntiRushAdvanced::SetAccount(const AccountInfo& _account)
{
    m_account = _account;
    m_accountHasBeenSet = true;
}

bool InputActivityAntiRushAdvanced::AccountHasBeenSet() const
{
    return m_accountHasBeenSet;
}

string InputActivityAntiRushAdvanced::GetUserIp() const
{
    return m_userIp;
}

void InputActivityAntiRushAdvanced::SetUserIp(const string& _userIp)
{
    m_userIp = _userIp;
    m_userIpHasBeenSet = true;
}

bool InputActivityAntiRushAdvanced::UserIpHasBeenSet() const
{
    return m_userIpHasBeenSet;
}

uint64_t InputActivityAntiRushAdvanced::GetPostTime() const
{
    return m_postTime;
}

void InputActivityAntiRushAdvanced::SetPostTime(const uint64_t& _postTime)
{
    m_postTime = _postTime;
    m_postTimeHasBeenSet = true;
}

bool InputActivityAntiRushAdvanced::PostTimeHasBeenSet() const
{
    return m_postTimeHasBeenSet;
}

SponsorInfo InputActivityAntiRushAdvanced::GetSponsor() const
{
    return m_sponsor;
}

void InputActivityAntiRushAdvanced::SetSponsor(const SponsorInfo& _sponsor)
{
    m_sponsor = _sponsor;
    m_sponsorHasBeenSet = true;
}

bool InputActivityAntiRushAdvanced::SponsorHasBeenSet() const
{
    return m_sponsorHasBeenSet;
}

OnlineScamInfo InputActivityAntiRushAdvanced::GetOnlineScam() const
{
    return m_onlineScam;
}

void InputActivityAntiRushAdvanced::SetOnlineScam(const OnlineScamInfo& _onlineScam)
{
    m_onlineScam = _onlineScam;
    m_onlineScamHasBeenSet = true;
}

bool InputActivityAntiRushAdvanced::OnlineScamHasBeenSet() const
{
    return m_onlineScamHasBeenSet;
}

uint64_t InputActivityAntiRushAdvanced::GetBusinessId() const
{
    return m_businessId;
}

void InputActivityAntiRushAdvanced::SetBusinessId(const uint64_t& _businessId)
{
    m_businessId = _businessId;
    m_businessIdHasBeenSet = true;
}

bool InputActivityAntiRushAdvanced::BusinessIdHasBeenSet() const
{
    return m_businessIdHasBeenSet;
}

string InputActivityAntiRushAdvanced::GetNickname() const
{
    return m_nickname;
}

void InputActivityAntiRushAdvanced::SetNickname(const string& _nickname)
{
    m_nickname = _nickname;
    m_nicknameHasBeenSet = true;
}

bool InputActivityAntiRushAdvanced::NicknameHasBeenSet() const
{
    return m_nicknameHasBeenSet;
}

string InputActivityAntiRushAdvanced::GetEmailAddress() const
{
    return m_emailAddress;
}

void InputActivityAntiRushAdvanced::SetEmailAddress(const string& _emailAddress)
{
    m_emailAddress = _emailAddress;
    m_emailAddressHasBeenSet = true;
}

bool InputActivityAntiRushAdvanced::EmailAddressHasBeenSet() const
{
    return m_emailAddressHasBeenSet;
}

int64_t InputActivityAntiRushAdvanced::GetCheckDevice() const
{
    return m_checkDevice;
}

void InputActivityAntiRushAdvanced::SetCheckDevice(const int64_t& _checkDevice)
{
    m_checkDevice = _checkDevice;
    m_checkDeviceHasBeenSet = true;
}

bool InputActivityAntiRushAdvanced::CheckDeviceHasBeenSet() const
{
    return m_checkDeviceHasBeenSet;
}

string InputActivityAntiRushAdvanced::GetCookieHash() const
{
    return m_cookieHash;
}

void InputActivityAntiRushAdvanced::SetCookieHash(const string& _cookieHash)
{
    m_cookieHash = _cookieHash;
    m_cookieHashHasBeenSet = true;
}

bool InputActivityAntiRushAdvanced::CookieHashHasBeenSet() const
{
    return m_cookieHashHasBeenSet;
}

string InputActivityAntiRushAdvanced::GetReferer() const
{
    return m_referer;
}

void InputActivityAntiRushAdvanced::SetReferer(const string& _referer)
{
    m_referer = _referer;
    m_refererHasBeenSet = true;
}

bool InputActivityAntiRushAdvanced::RefererHasBeenSet() const
{
    return m_refererHasBeenSet;
}

string InputActivityAntiRushAdvanced::GetUserAgent() const
{
    return m_userAgent;
}

void InputActivityAntiRushAdvanced::SetUserAgent(const string& _userAgent)
{
    m_userAgent = _userAgent;
    m_userAgentHasBeenSet = true;
}

bool InputActivityAntiRushAdvanced::UserAgentHasBeenSet() const
{
    return m_userAgentHasBeenSet;
}

string InputActivityAntiRushAdvanced::GetXForwardedFor() const
{
    return m_xForwardedFor;
}

void InputActivityAntiRushAdvanced::SetXForwardedFor(const string& _xForwardedFor)
{
    m_xForwardedFor = _xForwardedFor;
    m_xForwardedForHasBeenSet = true;
}

bool InputActivityAntiRushAdvanced::XForwardedForHasBeenSet() const
{
    return m_xForwardedForHasBeenSet;
}

string InputActivityAntiRushAdvanced::GetMacAddress() const
{
    return m_macAddress;
}

void InputActivityAntiRushAdvanced::SetMacAddress(const string& _macAddress)
{
    m_macAddress = _macAddress;
    m_macAddressHasBeenSet = true;
}

bool InputActivityAntiRushAdvanced::MacAddressHasBeenSet() const
{
    return m_macAddressHasBeenSet;
}

string InputActivityAntiRushAdvanced::GetVendorId() const
{
    return m_vendorId;
}

void InputActivityAntiRushAdvanced::SetVendorId(const string& _vendorId)
{
    m_vendorId = _vendorId;
    m_vendorIdHasBeenSet = true;
}

bool InputActivityAntiRushAdvanced::VendorIdHasBeenSet() const
{
    return m_vendorIdHasBeenSet;
}

