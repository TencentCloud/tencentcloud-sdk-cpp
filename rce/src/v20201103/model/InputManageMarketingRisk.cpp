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

#include <tencentcloud/rce/v20201103/model/InputManageMarketingRisk.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20201103::Model;
using namespace std;

InputManageMarketingRisk::InputManageMarketingRisk() :
    m_accountHasBeenSet(false),
    m_sceneCodeHasBeenSet(false),
    m_userIpHasBeenSet(false),
    m_postTimeHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_deviceTokenHasBeenSet(false),
    m_deviceBusinessIdHasBeenSet(false),
    m_businessIdHasBeenSet(false),
    m_nicknameHasBeenSet(false),
    m_emailAddressHasBeenSet(false),
    m_checkDeviceHasBeenSet(false),
    m_cookieHashHasBeenSet(false),
    m_refererHasBeenSet(false),
    m_userAgentHasBeenSet(false),
    m_xForwardedForHasBeenSet(false),
    m_macAddressHasBeenSet(false),
    m_vendorIdHasBeenSet(false),
    m_deviceTypeHasBeenSet(false),
    m_detailsHasBeenSet(false),
    m_sponsorHasBeenSet(false),
    m_onlineScamHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_dataAuthorizationHasBeenSet(false)
{
}

CoreInternalOutcome InputManageMarketingRisk::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Account") && !value["Account"].IsNull())
    {
        if (!value["Account"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InputManageMarketingRisk.Account` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_account.Deserialize(value["Account"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_accountHasBeenSet = true;
    }

    if (value.HasMember("SceneCode") && !value["SceneCode"].IsNull())
    {
        if (!value["SceneCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputManageMarketingRisk.SceneCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sceneCode = string(value["SceneCode"].GetString());
        m_sceneCodeHasBeenSet = true;
    }

    if (value.HasMember("UserIp") && !value["UserIp"].IsNull())
    {
        if (!value["UserIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputManageMarketingRisk.UserIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userIp = string(value["UserIp"].GetString());
        m_userIpHasBeenSet = true;
    }

    if (value.HasMember("PostTime") && !value["PostTime"].IsNull())
    {
        if (!value["PostTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InputManageMarketingRisk.PostTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_postTime = value["PostTime"].GetUint64();
        m_postTimeHasBeenSet = true;
    }

    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputManageMarketingRisk.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("DeviceToken") && !value["DeviceToken"].IsNull())
    {
        if (!value["DeviceToken"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputManageMarketingRisk.DeviceToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceToken = string(value["DeviceToken"].GetString());
        m_deviceTokenHasBeenSet = true;
    }

    if (value.HasMember("DeviceBusinessId") && !value["DeviceBusinessId"].IsNull())
    {
        if (!value["DeviceBusinessId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InputManageMarketingRisk.DeviceBusinessId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_deviceBusinessId = value["DeviceBusinessId"].GetInt64();
        m_deviceBusinessIdHasBeenSet = true;
    }

    if (value.HasMember("BusinessId") && !value["BusinessId"].IsNull())
    {
        if (!value["BusinessId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InputManageMarketingRisk.BusinessId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_businessId = value["BusinessId"].GetUint64();
        m_businessIdHasBeenSet = true;
    }

    if (value.HasMember("Nickname") && !value["Nickname"].IsNull())
    {
        if (!value["Nickname"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputManageMarketingRisk.Nickname` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nickname = string(value["Nickname"].GetString());
        m_nicknameHasBeenSet = true;
    }

    if (value.HasMember("EmailAddress") && !value["EmailAddress"].IsNull())
    {
        if (!value["EmailAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputManageMarketingRisk.EmailAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_emailAddress = string(value["EmailAddress"].GetString());
        m_emailAddressHasBeenSet = true;
    }

    if (value.HasMember("CheckDevice") && !value["CheckDevice"].IsNull())
    {
        if (!value["CheckDevice"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InputManageMarketingRisk.CheckDevice` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_checkDevice = value["CheckDevice"].GetInt64();
        m_checkDeviceHasBeenSet = true;
    }

    if (value.HasMember("CookieHash") && !value["CookieHash"].IsNull())
    {
        if (!value["CookieHash"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputManageMarketingRisk.CookieHash` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cookieHash = string(value["CookieHash"].GetString());
        m_cookieHashHasBeenSet = true;
    }

    if (value.HasMember("Referer") && !value["Referer"].IsNull())
    {
        if (!value["Referer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputManageMarketingRisk.Referer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_referer = string(value["Referer"].GetString());
        m_refererHasBeenSet = true;
    }

    if (value.HasMember("UserAgent") && !value["UserAgent"].IsNull())
    {
        if (!value["UserAgent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputManageMarketingRisk.UserAgent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userAgent = string(value["UserAgent"].GetString());
        m_userAgentHasBeenSet = true;
    }

    if (value.HasMember("XForwardedFor") && !value["XForwardedFor"].IsNull())
    {
        if (!value["XForwardedFor"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputManageMarketingRisk.XForwardedFor` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_xForwardedFor = string(value["XForwardedFor"].GetString());
        m_xForwardedForHasBeenSet = true;
    }

    if (value.HasMember("MacAddress") && !value["MacAddress"].IsNull())
    {
        if (!value["MacAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputManageMarketingRisk.MacAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_macAddress = string(value["MacAddress"].GetString());
        m_macAddressHasBeenSet = true;
    }

    if (value.HasMember("VendorId") && !value["VendorId"].IsNull())
    {
        if (!value["VendorId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputManageMarketingRisk.VendorId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vendorId = string(value["VendorId"].GetString());
        m_vendorIdHasBeenSet = true;
    }

    if (value.HasMember("DeviceType") && !value["DeviceType"].IsNull())
    {
        if (!value["DeviceType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InputManageMarketingRisk.DeviceType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_deviceType = value["DeviceType"].GetInt64();
        m_deviceTypeHasBeenSet = true;
    }

    if (value.HasMember("Details") && !value["Details"].IsNull())
    {
        if (!value["Details"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InputManageMarketingRisk.Details` is not array type"));

        const rapidjson::Value &tmpValue = value["Details"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InputDetails item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_details.push_back(item);
        }
        m_detailsHasBeenSet = true;
    }

    if (value.HasMember("Sponsor") && !value["Sponsor"].IsNull())
    {
        if (!value["Sponsor"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InputManageMarketingRisk.Sponsor` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `InputManageMarketingRisk.OnlineScam` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_onlineScam.Deserialize(value["OnlineScam"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_onlineScamHasBeenSet = true;
    }

    if (value.HasMember("Platform") && !value["Platform"].IsNull())
    {
        if (!value["Platform"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputManageMarketingRisk.Platform` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_platform = string(value["Platform"].GetString());
        m_platformHasBeenSet = true;
    }

    if (value.HasMember("DataAuthorization") && !value["DataAuthorization"].IsNull())
    {
        if (!value["DataAuthorization"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InputManageMarketingRisk.DataAuthorization` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dataAuthorization.Deserialize(value["DataAuthorization"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dataAuthorizationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InputManageMarketingRisk::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_accountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Account";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_account.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_sceneCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SceneCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sceneCode.c_str(), allocator).Move(), allocator);
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

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceToken.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceBusinessIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceBusinessId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deviceBusinessId, allocator);
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

    if (m_deviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deviceType, allocator);
    }

    if (m_detailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Details";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_details.begin(); itr != m_details.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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

    if (m_platformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Platform";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_platform.c_str(), allocator).Move(), allocator);
    }

    if (m_dataAuthorizationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataAuthorization";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dataAuthorization.ToJsonObject(value[key.c_str()], allocator);
    }

}


AccountInfo InputManageMarketingRisk::GetAccount() const
{
    return m_account;
}

void InputManageMarketingRisk::SetAccount(const AccountInfo& _account)
{
    m_account = _account;
    m_accountHasBeenSet = true;
}

bool InputManageMarketingRisk::AccountHasBeenSet() const
{
    return m_accountHasBeenSet;
}

string InputManageMarketingRisk::GetSceneCode() const
{
    return m_sceneCode;
}

void InputManageMarketingRisk::SetSceneCode(const string& _sceneCode)
{
    m_sceneCode = _sceneCode;
    m_sceneCodeHasBeenSet = true;
}

bool InputManageMarketingRisk::SceneCodeHasBeenSet() const
{
    return m_sceneCodeHasBeenSet;
}

string InputManageMarketingRisk::GetUserIp() const
{
    return m_userIp;
}

void InputManageMarketingRisk::SetUserIp(const string& _userIp)
{
    m_userIp = _userIp;
    m_userIpHasBeenSet = true;
}

bool InputManageMarketingRisk::UserIpHasBeenSet() const
{
    return m_userIpHasBeenSet;
}

uint64_t InputManageMarketingRisk::GetPostTime() const
{
    return m_postTime;
}

void InputManageMarketingRisk::SetPostTime(const uint64_t& _postTime)
{
    m_postTime = _postTime;
    m_postTimeHasBeenSet = true;
}

bool InputManageMarketingRisk::PostTimeHasBeenSet() const
{
    return m_postTimeHasBeenSet;
}

string InputManageMarketingRisk::GetUserId() const
{
    return m_userId;
}

void InputManageMarketingRisk::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool InputManageMarketingRisk::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string InputManageMarketingRisk::GetDeviceToken() const
{
    return m_deviceToken;
}

void InputManageMarketingRisk::SetDeviceToken(const string& _deviceToken)
{
    m_deviceToken = _deviceToken;
    m_deviceTokenHasBeenSet = true;
}

bool InputManageMarketingRisk::DeviceTokenHasBeenSet() const
{
    return m_deviceTokenHasBeenSet;
}

int64_t InputManageMarketingRisk::GetDeviceBusinessId() const
{
    return m_deviceBusinessId;
}

void InputManageMarketingRisk::SetDeviceBusinessId(const int64_t& _deviceBusinessId)
{
    m_deviceBusinessId = _deviceBusinessId;
    m_deviceBusinessIdHasBeenSet = true;
}

bool InputManageMarketingRisk::DeviceBusinessIdHasBeenSet() const
{
    return m_deviceBusinessIdHasBeenSet;
}

uint64_t InputManageMarketingRisk::GetBusinessId() const
{
    return m_businessId;
}

void InputManageMarketingRisk::SetBusinessId(const uint64_t& _businessId)
{
    m_businessId = _businessId;
    m_businessIdHasBeenSet = true;
}

bool InputManageMarketingRisk::BusinessIdHasBeenSet() const
{
    return m_businessIdHasBeenSet;
}

string InputManageMarketingRisk::GetNickname() const
{
    return m_nickname;
}

void InputManageMarketingRisk::SetNickname(const string& _nickname)
{
    m_nickname = _nickname;
    m_nicknameHasBeenSet = true;
}

bool InputManageMarketingRisk::NicknameHasBeenSet() const
{
    return m_nicknameHasBeenSet;
}

string InputManageMarketingRisk::GetEmailAddress() const
{
    return m_emailAddress;
}

void InputManageMarketingRisk::SetEmailAddress(const string& _emailAddress)
{
    m_emailAddress = _emailAddress;
    m_emailAddressHasBeenSet = true;
}

bool InputManageMarketingRisk::EmailAddressHasBeenSet() const
{
    return m_emailAddressHasBeenSet;
}

int64_t InputManageMarketingRisk::GetCheckDevice() const
{
    return m_checkDevice;
}

void InputManageMarketingRisk::SetCheckDevice(const int64_t& _checkDevice)
{
    m_checkDevice = _checkDevice;
    m_checkDeviceHasBeenSet = true;
}

bool InputManageMarketingRisk::CheckDeviceHasBeenSet() const
{
    return m_checkDeviceHasBeenSet;
}

string InputManageMarketingRisk::GetCookieHash() const
{
    return m_cookieHash;
}

void InputManageMarketingRisk::SetCookieHash(const string& _cookieHash)
{
    m_cookieHash = _cookieHash;
    m_cookieHashHasBeenSet = true;
}

bool InputManageMarketingRisk::CookieHashHasBeenSet() const
{
    return m_cookieHashHasBeenSet;
}

string InputManageMarketingRisk::GetReferer() const
{
    return m_referer;
}

void InputManageMarketingRisk::SetReferer(const string& _referer)
{
    m_referer = _referer;
    m_refererHasBeenSet = true;
}

bool InputManageMarketingRisk::RefererHasBeenSet() const
{
    return m_refererHasBeenSet;
}

string InputManageMarketingRisk::GetUserAgent() const
{
    return m_userAgent;
}

void InputManageMarketingRisk::SetUserAgent(const string& _userAgent)
{
    m_userAgent = _userAgent;
    m_userAgentHasBeenSet = true;
}

bool InputManageMarketingRisk::UserAgentHasBeenSet() const
{
    return m_userAgentHasBeenSet;
}

string InputManageMarketingRisk::GetXForwardedFor() const
{
    return m_xForwardedFor;
}

void InputManageMarketingRisk::SetXForwardedFor(const string& _xForwardedFor)
{
    m_xForwardedFor = _xForwardedFor;
    m_xForwardedForHasBeenSet = true;
}

bool InputManageMarketingRisk::XForwardedForHasBeenSet() const
{
    return m_xForwardedForHasBeenSet;
}

string InputManageMarketingRisk::GetMacAddress() const
{
    return m_macAddress;
}

void InputManageMarketingRisk::SetMacAddress(const string& _macAddress)
{
    m_macAddress = _macAddress;
    m_macAddressHasBeenSet = true;
}

bool InputManageMarketingRisk::MacAddressHasBeenSet() const
{
    return m_macAddressHasBeenSet;
}

string InputManageMarketingRisk::GetVendorId() const
{
    return m_vendorId;
}

void InputManageMarketingRisk::SetVendorId(const string& _vendorId)
{
    m_vendorId = _vendorId;
    m_vendorIdHasBeenSet = true;
}

bool InputManageMarketingRisk::VendorIdHasBeenSet() const
{
    return m_vendorIdHasBeenSet;
}

int64_t InputManageMarketingRisk::GetDeviceType() const
{
    return m_deviceType;
}

void InputManageMarketingRisk::SetDeviceType(const int64_t& _deviceType)
{
    m_deviceType = _deviceType;
    m_deviceTypeHasBeenSet = true;
}

bool InputManageMarketingRisk::DeviceTypeHasBeenSet() const
{
    return m_deviceTypeHasBeenSet;
}

vector<InputDetails> InputManageMarketingRisk::GetDetails() const
{
    return m_details;
}

void InputManageMarketingRisk::SetDetails(const vector<InputDetails>& _details)
{
    m_details = _details;
    m_detailsHasBeenSet = true;
}

bool InputManageMarketingRisk::DetailsHasBeenSet() const
{
    return m_detailsHasBeenSet;
}

SponsorInfo InputManageMarketingRisk::GetSponsor() const
{
    return m_sponsor;
}

void InputManageMarketingRisk::SetSponsor(const SponsorInfo& _sponsor)
{
    m_sponsor = _sponsor;
    m_sponsorHasBeenSet = true;
}

bool InputManageMarketingRisk::SponsorHasBeenSet() const
{
    return m_sponsorHasBeenSet;
}

OnlineScamInfo InputManageMarketingRisk::GetOnlineScam() const
{
    return m_onlineScam;
}

void InputManageMarketingRisk::SetOnlineScam(const OnlineScamInfo& _onlineScam)
{
    m_onlineScam = _onlineScam;
    m_onlineScamHasBeenSet = true;
}

bool InputManageMarketingRisk::OnlineScamHasBeenSet() const
{
    return m_onlineScamHasBeenSet;
}

string InputManageMarketingRisk::GetPlatform() const
{
    return m_platform;
}

void InputManageMarketingRisk::SetPlatform(const string& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool InputManageMarketingRisk::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

DataAuthorizationInfo InputManageMarketingRisk::GetDataAuthorization() const
{
    return m_dataAuthorization;
}

void InputManageMarketingRisk::SetDataAuthorization(const DataAuthorizationInfo& _dataAuthorization)
{
    m_dataAuthorization = _dataAuthorization;
    m_dataAuthorizationHasBeenSet = true;
}

bool InputManageMarketingRisk::DataAuthorizationHasBeenSet() const
{
    return m_dataAuthorizationHasBeenSet;
}

