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

#include <tencentcloud/smh/v20210712/model/ModifyUserRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Smh::V20210712::Model;
using namespace std;

ModifyUserRequest::ModifyUserRequest() :
    m_libraryIdHasBeenSet(false),
    m_filterHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_enabledHasBeenSet(false),
    m_countryCodeHasBeenSet(false),
    m_phoneNumberHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_accountNameHasBeenSet(false),
    m_accountPasswordHasBeenSet(false),
    m_accountUserIdHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_nicknameHasBeenSet(false),
    m_avatarHasBeenSet(false),
    m_customizeHasBeenSet(false)
{
}

string ModifyUserRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_libraryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LibraryId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_libraryId.c_str(), allocator).Move(), allocator);
    }

    if (m_filterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_filter.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_roleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Role";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_role.c_str(), allocator).Move(), allocator);
    }

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enabled, allocator);
    }

    if (m_countryCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CountryCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_countryCode.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhoneNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_phoneNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_emailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Email";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_email.c_str(), allocator).Move(), allocator);
    }

    if (m_accountNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accountName.c_str(), allocator).Move(), allocator);
    }

    if (m_accountPasswordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountPassword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accountPassword.c_str(), allocator).Move(), allocator);
    }

    if (m_accountUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountUserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accountUserId.c_str(), allocator).Move(), allocator);
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
    }

    if (m_nicknameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nickname";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nickname.c_str(), allocator).Move(), allocator);
    }

    if (m_avatarHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Avatar";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_avatar.c_str(), allocator).Move(), allocator);
    }

    if (m_customizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Customize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_customize.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyUserRequest::GetLibraryId() const
{
    return m_libraryId;
}

void ModifyUserRequest::SetLibraryId(const string& _libraryId)
{
    m_libraryId = _libraryId;
    m_libraryIdHasBeenSet = true;
}

bool ModifyUserRequest::LibraryIdHasBeenSet() const
{
    return m_libraryIdHasBeenSet;
}

UserFilter ModifyUserRequest::GetFilter() const
{
    return m_filter;
}

void ModifyUserRequest::SetFilter(const UserFilter& _filter)
{
    m_filter = _filter;
    m_filterHasBeenSet = true;
}

bool ModifyUserRequest::FilterHasBeenSet() const
{
    return m_filterHasBeenSet;
}

string ModifyUserRequest::GetRole() const
{
    return m_role;
}

void ModifyUserRequest::SetRole(const string& _role)
{
    m_role = _role;
    m_roleHasBeenSet = true;
}

bool ModifyUserRequest::RoleHasBeenSet() const
{
    return m_roleHasBeenSet;
}

bool ModifyUserRequest::GetEnabled() const
{
    return m_enabled;
}

void ModifyUserRequest::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool ModifyUserRequest::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

string ModifyUserRequest::GetCountryCode() const
{
    return m_countryCode;
}

void ModifyUserRequest::SetCountryCode(const string& _countryCode)
{
    m_countryCode = _countryCode;
    m_countryCodeHasBeenSet = true;
}

bool ModifyUserRequest::CountryCodeHasBeenSet() const
{
    return m_countryCodeHasBeenSet;
}

string ModifyUserRequest::GetPhoneNumber() const
{
    return m_phoneNumber;
}

void ModifyUserRequest::SetPhoneNumber(const string& _phoneNumber)
{
    m_phoneNumber = _phoneNumber;
    m_phoneNumberHasBeenSet = true;
}

bool ModifyUserRequest::PhoneNumberHasBeenSet() const
{
    return m_phoneNumberHasBeenSet;
}

string ModifyUserRequest::GetEmail() const
{
    return m_email;
}

void ModifyUserRequest::SetEmail(const string& _email)
{
    m_email = _email;
    m_emailHasBeenSet = true;
}

bool ModifyUserRequest::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}

string ModifyUserRequest::GetAccountName() const
{
    return m_accountName;
}

void ModifyUserRequest::SetAccountName(const string& _accountName)
{
    m_accountName = _accountName;
    m_accountNameHasBeenSet = true;
}

bool ModifyUserRequest::AccountNameHasBeenSet() const
{
    return m_accountNameHasBeenSet;
}

string ModifyUserRequest::GetAccountPassword() const
{
    return m_accountPassword;
}

void ModifyUserRequest::SetAccountPassword(const string& _accountPassword)
{
    m_accountPassword = _accountPassword;
    m_accountPasswordHasBeenSet = true;
}

bool ModifyUserRequest::AccountPasswordHasBeenSet() const
{
    return m_accountPasswordHasBeenSet;
}

string ModifyUserRequest::GetAccountUserId() const
{
    return m_accountUserId;
}

void ModifyUserRequest::SetAccountUserId(const string& _accountUserId)
{
    m_accountUserId = _accountUserId;
    m_accountUserIdHasBeenSet = true;
}

bool ModifyUserRequest::AccountUserIdHasBeenSet() const
{
    return m_accountUserIdHasBeenSet;
}

string ModifyUserRequest::GetComment() const
{
    return m_comment;
}

void ModifyUserRequest::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool ModifyUserRequest::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

string ModifyUserRequest::GetNickname() const
{
    return m_nickname;
}

void ModifyUserRequest::SetNickname(const string& _nickname)
{
    m_nickname = _nickname;
    m_nicknameHasBeenSet = true;
}

bool ModifyUserRequest::NicknameHasBeenSet() const
{
    return m_nicknameHasBeenSet;
}

string ModifyUserRequest::GetAvatar() const
{
    return m_avatar;
}

void ModifyUserRequest::SetAvatar(const string& _avatar)
{
    m_avatar = _avatar;
    m_avatarHasBeenSet = true;
}

bool ModifyUserRequest::AvatarHasBeenSet() const
{
    return m_avatarHasBeenSet;
}

string ModifyUserRequest::GetCustomize() const
{
    return m_customize;
}

void ModifyUserRequest::SetCustomize(const string& _customize)
{
    m_customize = _customize;
    m_customizeHasBeenSet = true;
}

bool ModifyUserRequest::CustomizeHasBeenSet() const
{
    return m_customizeHasBeenSet;
}


