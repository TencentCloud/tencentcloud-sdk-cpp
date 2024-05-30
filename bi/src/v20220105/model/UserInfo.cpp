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

#include <tencentcloud/bi/v20220105/model/UserInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bi::V20220105::Model;
using namespace std;

UserInfo::UserInfo() :
    m_userIdHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_phoneNumberHasBeenSet(false),
    m_areaCodeHasBeenSet(false),
    m_appUserIdHasBeenSet(false),
    m_appUserNameHasBeenSet(false)
{
}

CoreInternalOutcome UserInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserInfo.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserInfo.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("Email") && !value["Email"].IsNull())
    {
        if (!value["Email"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserInfo.Email` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_email = string(value["Email"].GetString());
        m_emailHasBeenSet = true;
    }

    if (value.HasMember("PhoneNumber") && !value["PhoneNumber"].IsNull())
    {
        if (!value["PhoneNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserInfo.PhoneNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phoneNumber = string(value["PhoneNumber"].GetString());
        m_phoneNumberHasBeenSet = true;
    }

    if (value.HasMember("AreaCode") && !value["AreaCode"].IsNull())
    {
        if (!value["AreaCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserInfo.AreaCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_areaCode = string(value["AreaCode"].GetString());
        m_areaCodeHasBeenSet = true;
    }

    if (value.HasMember("AppUserId") && !value["AppUserId"].IsNull())
    {
        if (!value["AppUserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserInfo.AppUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appUserId = string(value["AppUserId"].GetString());
        m_appUserIdHasBeenSet = true;
    }

    if (value.HasMember("AppUserName") && !value["AppUserName"].IsNull())
    {
        if (!value["AppUserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserInfo.AppUserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appUserName = string(value["AppUserName"].GetString());
        m_appUserNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_emailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Email";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_email.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhoneNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_phoneNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_areaCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AreaCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_areaCode.c_str(), allocator).Move(), allocator);
    }

    if (m_appUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appUserId.c_str(), allocator).Move(), allocator);
    }

    if (m_appUserNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppUserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appUserName.c_str(), allocator).Move(), allocator);
    }

}


string UserInfo::GetUserId() const
{
    return m_userId;
}

void UserInfo::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool UserInfo::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string UserInfo::GetUserName() const
{
    return m_userName;
}

void UserInfo::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool UserInfo::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string UserInfo::GetEmail() const
{
    return m_email;
}

void UserInfo::SetEmail(const string& _email)
{
    m_email = _email;
    m_emailHasBeenSet = true;
}

bool UserInfo::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}

string UserInfo::GetPhoneNumber() const
{
    return m_phoneNumber;
}

void UserInfo::SetPhoneNumber(const string& _phoneNumber)
{
    m_phoneNumber = _phoneNumber;
    m_phoneNumberHasBeenSet = true;
}

bool UserInfo::PhoneNumberHasBeenSet() const
{
    return m_phoneNumberHasBeenSet;
}

string UserInfo::GetAreaCode() const
{
    return m_areaCode;
}

void UserInfo::SetAreaCode(const string& _areaCode)
{
    m_areaCode = _areaCode;
    m_areaCodeHasBeenSet = true;
}

bool UserInfo::AreaCodeHasBeenSet() const
{
    return m_areaCodeHasBeenSet;
}

string UserInfo::GetAppUserId() const
{
    return m_appUserId;
}

void UserInfo::SetAppUserId(const string& _appUserId)
{
    m_appUserId = _appUserId;
    m_appUserIdHasBeenSet = true;
}

bool UserInfo::AppUserIdHasBeenSet() const
{
    return m_appUserIdHasBeenSet;
}

string UserInfo::GetAppUserName() const
{
    return m_appUserName;
}

void UserInfo::SetAppUserName(const string& _appUserName)
{
    m_appUserName = _appUserName;
    m_appUserNameHasBeenSet = true;
}

bool UserInfo::AppUserNameHasBeenSet() const
{
    return m_appUserNameHasBeenSet;
}

